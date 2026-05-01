/*
 * XREFs of ?Instance@PenWorkspaceBrokerTelemetry@@KAPEAV1@XZ @ 0x1801E0E4C
 * Callers:
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1801DED2C (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 * Callees:
 *     atexit @ 0x18008753C (atexit.c)
 *     ??1Completer@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ @ 0x1801DFEC0 (--1Completer@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ.c)
 */

struct PenWorkspaceBrokerTelemetry *PenWorkspaceBrokerTelemetry::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v1 = &`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper;
    Context = &qword_18059A508;
    qword_18059A508 = (__int64)&IamTraceLogging::`vftable';
    atexit(lambda_147e36a80022279d49a89264b6535513_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::Completer::~Completer((__int64)&v1);
  }
  return (struct PenWorkspaceBrokerTelemetry *)Context;
}
