/*
 * XREFs of ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C00067E4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DXGADAPTER::IsActive(DXGADAPTER *this)
{
  return *((_DWORD *)this + 44) == 1;
}
