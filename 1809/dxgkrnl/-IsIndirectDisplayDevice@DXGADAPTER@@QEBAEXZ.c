/*
 * XREFs of ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0010708
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGADAPTER::IsIndirectDisplayDevice(DXGADAPTER *this)
{
  return BYTE1(*((_DWORD *)this + 77)) & 1;
}
