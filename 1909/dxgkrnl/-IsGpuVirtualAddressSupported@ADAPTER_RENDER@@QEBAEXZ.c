/*
 * XREFs of ?IsGpuVirtualAddressSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003B64C
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsGpuVirtualAddressSupported(ADAPTER_RENDER *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 2) + 1916LL) & 0x20) != 0;
}
