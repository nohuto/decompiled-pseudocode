/*
 * XREFs of _TraceLoggingRegisterEx@12 @ 0x1000F632
 * Callers:
 *     _DllMain@12 @ 0x1000D02C (_DllMain@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  signed int v3; // eax
  TLG_STATUS v4; // esi
  GUID ProviderId; // [esp+8h] [ebp-14h] BYREF

  ProviderId = *(GUID *)&(*off_10018004)[-16];
  dword_10018020 = 0;
  dword_10018024 = 0;
  v3 = EventRegister(&ProviderId, _TlgEnableCallback, &dword_10018000, &qword_10018018);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EventSetInformation(
      qword_10018018,
      HIDWORD(qword_10018018),
      2,
      (char *)off_10018004,
      *(unsigned __int16 *)off_10018004);
  }
  return v4;
}
