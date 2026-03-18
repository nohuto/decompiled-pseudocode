/*
 * XREFs of ApiSetAccessPTPEnabledStatus @ 0x1C013D2A0
 * Callers:
 *     EnablePTPDevices @ 0x1C00AAA90 (EnablePTPDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetAccessPTPEnabledStatus(unsigned int a1)
{
  unsigned int v2; // ebx

  v2 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xDAu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsAccessPTPEnabledStatusSupported() >= 0 )
    v2 = AccessPTPEnabledStatus(a1, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xDBu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v2;
}
