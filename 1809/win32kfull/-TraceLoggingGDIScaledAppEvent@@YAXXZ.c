/*
 * XREFs of ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C01574E4
 * Callers:
 *     SetAppCompatFlags @ 0x1C000CEA0 (SetAppCompatFlags.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void TraceLoggingGDIScaledAppEvent(void)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3D23, 0LL, 0LL, 2u, &pData);
  }
}
