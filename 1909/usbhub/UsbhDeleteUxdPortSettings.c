/*
 * XREFs of UsbhDeleteUxdPortSettings @ 0x1C005E0FC
 * Callers:
 *     UsbhDeleteUxdSettings @ 0x1C005E1C8 (UsbhDeleteUxdSettings.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0025A60 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 */

NTSTATUS __fastcall UsbhDeleteUxdPortSettings(__int64 a1, const WCHAR *a2, unsigned int a3)
{
  int v4; // edx
  int v5; // r8d
  wchar_t pszDest[16]; // [rsp+30h] [rbp-38h] BYREF

  wcscpy(pszDest, L"uxd_port_nnn");
  RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      v5,
      29,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      (__int64)pszDest);
  return RtlDeleteRegistryValue(0x40000000u, a2, pszDest);
}
