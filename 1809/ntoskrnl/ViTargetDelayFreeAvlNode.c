/*
 * XREFs of ViTargetDelayFreeAvlNode @ 0x14013E520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViTargetDelayFreeAvlNode(_RTL_AVL_TABLE *a1, _RTL_BALANCED_LINKS *a2)
{
  a1[1].BalancedRoot.LeftChild = a2;
}
