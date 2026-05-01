/*
 * XREFs of ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x180197D24
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x18019AC90 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007209C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??1Completer@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ @ 0x180198F5C (--1Completer@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x18019B3DC (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(const unsigned __int16 **a1)
{
  PenWorkspaceBrokerTelemetry *v2; // rcx
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-10h] BYREF
  int v4; // [rsp+28h] [rbp-8h]
  WINBOOL fPending; // [rsp+58h] [rbp+28h] BYREF
  LPVOID Context; // [rsp+60h] [rbp+30h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v3 = &`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper;
    Context = &qword_1805100E0;
    qword_1805100E0 = (__int64)&IamTraceLogging::`vftable';
    atexit(lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::Completer::~Completer(&v3);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context, 0) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v3 = &`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1805100E0;
        qword_1805100E0 = (__int64)&IamTraceLogging::`vftable';
        atexit(lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_);
        v4 = 0;
        wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::Completer::~Completer(&v3);
      }
    }
    PenWorkspaceBrokerTelemetry::OemAppLoaded_(v2, *a1);
  }
}
