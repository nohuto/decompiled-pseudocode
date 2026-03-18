/*
 * XREFs of VrpFindExactNamespaceNode @ 0x140843D98
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x1408433E4 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x140843A54 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x140844004 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x1408463C4 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x140843DB8 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
