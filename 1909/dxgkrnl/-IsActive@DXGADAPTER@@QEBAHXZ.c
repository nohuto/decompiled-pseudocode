/*
 * XREFs of ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0006574
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DXGADAPTER::IsActive(DXGADAPTER *this)
{
  return *((_DWORD *)this + 44) == 1;
}
