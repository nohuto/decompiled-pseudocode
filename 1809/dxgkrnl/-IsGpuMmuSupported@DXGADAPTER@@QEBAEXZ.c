/*
 * XREFs of ?IsGpuMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1C00116F8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsGpuMmuSupported(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 473) & 0x40) != 0;
}
