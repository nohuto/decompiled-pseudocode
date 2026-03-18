/*
 * XREFs of ?IsGpuVirtualAddressSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0034BC4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsGpuVirtualAddressSupported(ADAPTER_RENDER *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 2) + 1892LL) & 0x20) != 0;
}
