/*
 * XREFs of ?get@?$static_lazy@VCustomShellHostTelemetry@@@details@wil@@QEAAPEAVCustomShellHostTelemetry@@P6AXXZ@Z @ 0x18009A8DC
 * Callers:
 *     ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x1800964F4 (--$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<CustomShellHostTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`CustomShellHostTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5) && (_DWORD)v4 )
  {
    v5 = &qword_1805101A8;
    qword_1805101A8 = &ShellScreenClippingLogging::`vftable';
    qword_1805101C0 = (struct _TlgProvider_t *)&`CustomShellHostTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805101A8, qword_1805101C0);
    InitOnceComplete(&`CustomShellHostTelemetry::Instance'::`2'::wrapper, 0, &qword_1805101A8);
  }
  return v5;
}
