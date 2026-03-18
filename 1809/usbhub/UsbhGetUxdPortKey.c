/*
 * XREFs of UsbhGetUxdPortKey @ 0x1C005C328
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C002139C (UsbhUpdateUxdSettings.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0024E10 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C005C248 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhOpenUxdPortHandle @ 0x1C005C41C (UsbhOpenUxdPortHandle.c)
 *     WPP_RECORDER_SF_SS @ 0x1C005C960 (WPP_RECORDER_SF_SS.c)
 */

__int64 __fastcall UsbhGetUxdPortKey(__int64 a1, unsigned int a2, void *a3)
{
  int UxdLoadKeySettings; // ebx
  int v6; // r8d
  PDEVICE_OBJECT v7; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  wcscpy(pszDest, L"uxd_port_nnn");
  RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", a2);
  UxdLoadKeySettings = UsbhOpenUxdPortHandle(a1, &Handle);
  if ( UxdLoadKeySettings >= 0 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_SS(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v6,
        10,
        (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
        (__int64)L"uxd",
        (__int64)pszDest);
    UxdLoadKeySettings = UsbhGetUxdLoadKeySettings((__int64)v7, Handle, pszDest, a3);
    ZwClose(Handle);
  }
  return (unsigned int)UxdLoadKeySettings;
}
