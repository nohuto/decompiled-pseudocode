/*
 * XREFs of ApiSetAccessPTPEnabledStatus @ 0x1C0160C7C
 * Callers:
 *     EnablePTPDevices @ 0x1C00E51B0 (EnablePTPDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
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
      0xE2u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsAccessPTPEnabledStatusSupported() >= 0 )
    v2 = AccessPTPEnabledStatus(a1, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xE3u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v2;
}
