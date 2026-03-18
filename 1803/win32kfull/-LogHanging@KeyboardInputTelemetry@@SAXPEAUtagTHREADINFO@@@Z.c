/*
 * XREFs of ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C01FF7D4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00BD824 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall KeyboardInputTelemetry::LogHanging(struct tagTHREADINFO *a1)
{
  __int64 v1; // r8
  const wchar_t *v2; // r8
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+60h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 52);
  if ( v1 )
    v2 = (const wchar_t *)(v1 + 984);
  else
    v2 = L"Unknown";
  RtlStringCchCopyW(pszDest, 0x10uLL, v2);
  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, pszDest);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E32D5, v3, v4, 3u, &pData);
    }
  }
}
