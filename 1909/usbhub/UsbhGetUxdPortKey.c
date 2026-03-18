/*
 * XREFs of UsbhGetUxdPortKey @ 0x1C005E898
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C002203C (UsbhUpdateUxdSettings.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0025A60 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C005E7AC (UsbhGetUxdLoadKeySettings.c)
 *     UsbhOpenUxdPortHandle @ 0x1C005EA28 (UsbhOpenUxdPortHandle.c)
 *     WPP_RECORDER_SF_SS @ 0x1C005EF9C (WPP_RECORDER_SF_SS.c)
 */

__int64 __fastcall UsbhGetUxdPortKey(__int64 a1, unsigned int a2, void *a3)
{
  PDEVICE_OBJECT v5; // rcx
  int UxdLoadKeySettings; // ebx
  int v7; // r8d
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  wcscpy(pszDest, L"uxd_port_nnn");
  RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", a2);
  UxdLoadKeySettings = UsbhOpenUxdPortHandle(a1, &Handle);
  if ( UxdLoadKeySettings >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_SS(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v7,
          10,
          (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
          (__int64)L"uxd",
          (__int64)pszDest);
    }
    UxdLoadKeySettings = UsbhGetUxdLoadKeySettings((__int64)v5, Handle, pszDest, a3);
    ZwClose(Handle);
  }
  return (unsigned int)UxdLoadKeySettings;
}
