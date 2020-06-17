/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return nullptr;
        if (p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);//都在左边
        if (p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);//都在右边
        return root;//其他情况直接返回
    }
};
