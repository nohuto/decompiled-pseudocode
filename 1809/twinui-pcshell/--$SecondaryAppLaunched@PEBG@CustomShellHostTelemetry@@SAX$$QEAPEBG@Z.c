/*
 * XREFs of ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x1800964F4
 * Callers:
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180099130 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCustomShellHostTelemetry@@@details@wil@@QEAAPEAVCustomShellHostTelemetry@@P6AXXZ@Z @ 0x18009A8DC (-get@-$static_lazy@VCustomShellHostTelemetry@@@details@wil@@QEAAPEAVCustomShellHostTelemetry@@P6.c)
 */

char __fastcall CustomShellHostTelemetry::SecondaryAppLaunched<unsigned short const *>(LPCWSTR *a1)
{
  __int64 v2; // rax
  TraceLoggingHProvider v3; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v2 = wil::details::static_lazy<CustomShellHostTelemetry>::get(
         a1,
         lambda_8eb819313bdb989481ce252a7c52d7b8_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v2 + 8) > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(*(TraceLoggingHProvider *)(v2 + 8), 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      TlgCreateWsz(&pDesc, *a1);
      LOBYTE(v2) = TlgWrite(v3, &unk_1804660A5, 0LL, 0LL, 3u, &pData);
    }
  }
  return v2;
}
