/*
 * XREFs of ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1801431E4
 * Callers:
 *     _lambda_4a7c0c4a26250dfb9f46eb61d34146e4_::operator() @ 0x18014044C (_lambda_4a7c0c4a26250dfb9f46eb61d34146e4_--operator().c)
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x180140760 (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 *     ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x180141E10 (-OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180141FF0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??1Completer@?$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ @ 0x1801401EC (--1Completer@-$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ.c)
 *     ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAX_NPEBDPEAD@Z @ 0x1801424D0 (-ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAX_NPEBDPEAD@Z.c)
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
    Context = &qword_18050FFB0;
    qword_18050FFB0 = (__int64)&IamTraceLogging::`vftable';
    atexit(lambda_868f7fa048835520b2023eeceda2fa98_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<FullScreenPositionerLogging>::Completer::~Completer((__int64)&v4);
  }
  wil::TraceLoggingProvider::ReportTraceLoggingMessage((wil::TraceLoggingProvider *)Context, v1, a1, va);
}
