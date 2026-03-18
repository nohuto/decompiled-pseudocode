/*
 * XREFs of ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C01F5668
 * Callers:
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void InputTraceLogging::Mouse::HandleLowLevelHook(void)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C030D340 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x40uLL) )
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D5763, 0LL, 0LL, 2u, &pData);
  }
}
