/*
 * XREFs of ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C020C35C
 * Callers:
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void InputTraceLogging::Mouse::HandleLowLevelHook(void)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( dword_1C03202C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x40uLL) )
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E78D1, 0LL, 0LL, 2u, &pData);
  }
}
