/*
 * XREFs of ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x18039AE94
 * Callers:
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18039DBE0 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCustomShellHostTelemetry@@@details@wil@@QEAAPEAVCustomShellHostTelemetry@@P6AXXZ@Z @ 0x18039EEF4 (-get@-$static_lazy@VCustomShellHostTelemetry@@@details@wil@@QEAAPEAVCustomShellHostTelemetry@@P6.c)
 */

char __fastcall CustomShellHostTelemetry::SecondaryAppLaunched<unsigned short const *>(LPCWSTR *a1)
{
  __int64 v2; // rax
  TraceLoggingHProvider v3; // r10
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  v2 = wil::details::static_lazy<CustomShellHostTelemetry>::get(
         a1,
         lambda_8eb819313bdb989481ce252a7c52d7b8_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v2 + 8) > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(*(TraceLoggingHProvider *)(v2 + 8), 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v10 = 0;
      v8 = &v5;
      v5 = 0x2000000LL;
      v9 = 8;
      LOBYTE(v2) = TlgWrite(v3, &unk_1804DEDFF, 0LL, 0LL, 4u, &pData);
    }
  }
  return v2;
}
