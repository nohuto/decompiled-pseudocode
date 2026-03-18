/*
 * XREFs of VrpFindBestMatchNamespaceNode @ 0x140843D78
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1408436FC (VrpCreateNamespaceNode.c)
 * Callees:
 *     VrpFindNamespaceNode @ 0x140843DB8 (VrpFindNamespaceNode.c)
 */

__int64 __fastcall VrpFindBestMatchNamespaceNode(int a1, int a2, __int64 a3)
{
  return VrpFindNamespaceNode(a1, a2, 1, 0, a3);
}
