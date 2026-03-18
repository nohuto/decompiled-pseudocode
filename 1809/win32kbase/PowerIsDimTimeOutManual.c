/*
 * XREFs of PowerIsDimTimeOutManual @ 0x1C006CED4
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C006CF20 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

char __fastcall PowerIsDimTimeOutManual(const unsigned __int16 *a1)
{
  char v1; // bl
  unsigned int v3; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  if ( !GetConfigUlong(a1, L"ManualDimTimeout", &v3) || !v3 )
    return 0;
  v1 = 1;
  if ( dword_1C01C3348 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C3348, 0x400000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_1C01C3348, &unk_1C019D578, 0LL, 0LL, 2u, &pData);
  return v1;
}
