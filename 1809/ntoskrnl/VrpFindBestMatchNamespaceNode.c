/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x14080A4F4
 * Callers:
 *     VrpCreateNamespaceNode @ 0x140809E5C (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14080A534 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
