/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14080A4F4
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x140809AFC (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14080A19C (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14080A600 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x14080CA90 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14080A514 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
