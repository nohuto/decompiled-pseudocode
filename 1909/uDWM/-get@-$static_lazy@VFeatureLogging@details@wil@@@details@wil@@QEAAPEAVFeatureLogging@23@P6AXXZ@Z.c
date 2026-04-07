/*
 * XREFs of ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x1800053B4
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180005320 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18003CF84 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18004E32C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<wil::details::FeatureLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_1800DC158;
    qword_1800DC158[0] = &WindowFrameLogging::`vftable';
    qword_1800DC170 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1800DC158, qword_1800DC170);
    InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1800DC158);
  }
  return v5;
}
