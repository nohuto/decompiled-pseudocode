/*
 * XREFs of ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C0228048
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::LogHanging(struct tagTHREADINFO *a1)
{
  __int64 v1; // r8
  const wchar_t *v2; // r8
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+60h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 53);
  if ( v1 )
    v2 = (const wchar_t *)(v1 + 992);
  else
    v2 = L"Unknown";
  RtlStringCchCopyW(pszDest, 0x10uLL, v2);
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pszDest);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D5C1F, 0LL, 0LL, 3u, &pData);
    }
  }
}
