/*
 * XREFs of NtUserDrawMenuBarTemp @ 0x1C01ED3A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 NtUserDrawMenuBarTemp()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2160, v0, v1, 2u, &pData);
  return 0LL;
}
