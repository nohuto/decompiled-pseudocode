/*
 * XREFs of UsbhDeleteUxdDeviceKey @ 0x1C005E03C
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x1C005E1C8 (UsbhDeleteUxdSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C005DE9C (UsbhBuildUxdDeviceKey.c)
 */

__int64 __fastcall UsbhDeleteUxdDeviceKey(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // r8d
  WCHAR ValueName[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(ValueName, L"VVVVPPPPRRRR");
  UsbhBuildUxdDeviceKey(a1, a2, ValueName);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      v3,
      30,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      (__int64)ValueName);
  RtlDeleteRegistryValue(1u, L"usbhub\\uxd_control\\devices", ValueName);
  return 0LL;
}
