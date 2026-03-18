/*
 * XREFs of PowerIsDimTimeOutManual @ 0x1C00A4754
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C00A2518 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 */

char __fastcall PowerIsDimTimeOutManual(const unsigned __int16 *a1)
{
  char v1; // bl
  const GUID *v2; // r9
  unsigned int v4; // [rsp+30h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-30h] BYREF

  if ( !(unsigned int)GetConfigUlong(a1, L"ManualDimTimeout", &v4) || !v4 )
    return 0;
  v1 = 1;
  if ( dword_1C019A200 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A200, 0x400000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_1C019A200, &unk_1C0177BD1, 0LL, v2, 2u, &pData);
  return v1;
}
