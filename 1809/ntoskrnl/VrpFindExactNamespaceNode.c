/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14080B6F4
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x14080ACFC (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14080B39C (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14080B800 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x14080DC90 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14080B714 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
