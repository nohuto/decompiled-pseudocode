/*
 * XREFs of ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x1C01342A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 TraceLoggingSendMixedModeTelemetry(void)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3527, 0LL, 0LL, 2u, &pData);
  return 1LL;
}
