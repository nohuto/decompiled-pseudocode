/*
 * XREFs of ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1801DED2C
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1801E1B58 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180049718 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??1Completer@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ @ 0x1801DFEC0 (--1Completer@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?Instance@PenWorkspaceBrokerTelemetry@@KAPEAV1@XZ @ 0x1801E0E4C (-Instance@PenWorkspaceBrokerTelemetry@@KAPEAV1@XZ.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1801E2324 (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(const unsigned __int16 **a1)
{
  PenWorkspaceBrokerTelemetry *v2; // rcx
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+48h] [rbp+10h] BYREF
  wil::TraceLoggingProvider *v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v3 = &`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper;
    v6 = (wil::TraceLoggingProvider *)&qword_18059A508;
    qword_18059A508 = (__int64)&IamTraceLogging::`vftable';
    atexit(lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::Completer::~Completer(&v3);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_(v6, 0) )
  {
    PenWorkspaceBrokerTelemetry::Instance();
    PenWorkspaceBrokerTelemetry::OemAppLoaded_(v2, *a1);
  }
}
