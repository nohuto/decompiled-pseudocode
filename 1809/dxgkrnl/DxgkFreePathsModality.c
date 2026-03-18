/*
 * XREFs of DxgkFreePathsModality @ 0x1C00C6560
 * Callers:
 *     <none>
 * Callees:
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C9138 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void __fastcall DxgkFreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  BmlFreePathsModality(a1);
}
