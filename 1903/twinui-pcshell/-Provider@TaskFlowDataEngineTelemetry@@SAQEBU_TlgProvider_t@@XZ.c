/*
 * XREFs of ?Provider@TaskFlowDataEngineTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800700E0
 * Callers:
 *     ??$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x1800978B0 (--$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     ??$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x180097974 (--$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

const struct _TlgProvider_t *TaskFlowDataEngineTelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180599DF8;
    qword_180599DF8[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599E10 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599DF8, qword_180599E10);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_180599DF8);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
