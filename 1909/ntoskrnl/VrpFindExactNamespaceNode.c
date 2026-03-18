/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14084340C
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x140842A58 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x1408430C8 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x140843678 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x140845A38 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14084342C (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
