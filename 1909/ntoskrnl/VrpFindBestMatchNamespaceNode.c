/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x1408433EC
 * Callers:
 *     VrpCreateNamespaceNode @ 0x140842D70 (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x14084342C (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
