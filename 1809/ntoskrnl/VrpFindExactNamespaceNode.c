/*
 * XREFs of VrpFindExactNamespaceNode @ 0x14080A514
 * Callers:
 *     VrpAddNamespaceNodeToList @ 0x140809B1C (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14080A1BC (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14080A620 (VrpPostEnumerateKey.c)
 *     VrpPreUnloadKey @ 0x14080CAB0 (VrpPreUnloadKey.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14080A534 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindExactNamespaceNode(int a1, int a2, int a3)
{
  return VrpFindNamespaceNode(a1, a2, 0, a3, 0LL);
}
