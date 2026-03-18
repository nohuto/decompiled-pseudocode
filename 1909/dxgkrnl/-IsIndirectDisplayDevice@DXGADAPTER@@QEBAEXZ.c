/*
 * XREFs of ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C00063B0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGADAPTER::IsIndirectDisplayDevice(DXGADAPTER *this)
{
  return BYTE1(*((_DWORD *)this + 77)) & 1;
}
