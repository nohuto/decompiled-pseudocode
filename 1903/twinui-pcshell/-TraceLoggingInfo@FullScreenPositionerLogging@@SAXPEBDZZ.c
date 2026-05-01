/*
 * XREFs of ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x18016ECF4
 * Callers:
 *     _lambda_036c3b4f3fb2a4a583399dad52518042_::operator() @ 0x18016BB40 (_lambda_036c3b4f3fb2a4a583399dad52518042_--operator().c)
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x18016BEEC (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 *     ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x18016D880 (-OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x18016DA70 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     atexit @ 0x18008753C (atexit.c)
 *     ??1Completer@?$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ @ 0x18016B958 (--1Completer@-$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ.c)
 *     ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAX_NPEBDPEAD@Z @ 0x18016DFE0 (-ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAX_NPEBDPEAD@Z.c)
 */

void FullScreenPositionerLogging::TraceLoggingInfo(const char *a1, ...)
{
  __int64 v1; // rdx
  WINBOOL fPending; // [rsp+20h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-18h] BYREF
  union _RTL_RUN_ONCE *v4; // [rsp+30h] [rbp-10h] BYREF
  int v5; // [rsp+38h] [rbp-8h]
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  va_list va; // [rsp+68h] [rbp+28h]
  va_list va1; // [rsp+70h] [rbp+30h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v7 = va_arg(va1, _QWORD);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`FullScreenPositionerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v4 = &`FullScreenPositionerLogging::Instance'::`2'::wrapper;
    Context = &qword_18059A360;
    qword_18059A360 = (__int64)&IamTraceLogging::`vftable';
    atexit(lambda_868f7fa048835520b2023eeceda2fa98_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<FullScreenPositionerLogging>::Completer::~Completer((__int64)&v4);
  }
  wil::TraceLoggingProvider::ReportTraceLoggingMessage((wil::TraceLoggingProvider *)Context, v1, a1, va);
}
