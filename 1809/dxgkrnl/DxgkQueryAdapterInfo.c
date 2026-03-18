/*
 * XREFs of DxgkQueryAdapterInfo @ 0x1C0114380
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkQueryAdapterInfo(const struct _D3DKMT_QUERYADAPTERINFO *a1)
{
  return DxgkQueryAdapterInfoInternal(a1, 1, 0LL);
}
