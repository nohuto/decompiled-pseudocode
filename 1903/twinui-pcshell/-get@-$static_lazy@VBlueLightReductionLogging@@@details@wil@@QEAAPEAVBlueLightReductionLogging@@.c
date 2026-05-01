/*
 * XREFs of ?get@?$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@P6AXXZ@Z @ 0x1801610FC
 * Callers:
 *     ??$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z @ 0x18015F41C (--$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z.c)
 *     ??$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z @ 0x18015F4D0 (--$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<BlueLightReductionLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`BlueLightReductionLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_18059A310;
    qword_18059A310[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059A328 = (struct _TlgProvider_t *)&`BlueLightReductionLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059A310, qword_18059A328);
    InitOnceComplete(&`BlueLightReductionLogging::Instance'::`2'::wrapper, 0, qword_18059A310);
  }
  return v5;
}
