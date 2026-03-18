/*
 * XREFs of ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1C020C60C
 * Callers:
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void InputTraceLogging::Mouse::HandleLowLevelHook(void)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( dword_1C03222C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03222C0, 0x40uLL) )
      TlgWrite((TraceLoggingHProvider)&dword_1C03222C0, &unk_1C02E8311, 0LL, 0LL, 2u, &pData);
  }
}
