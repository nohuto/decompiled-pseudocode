/*
 * XREFs of ?Provider@TaskFlowDataEngineTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18006E8C4
 * Callers:
 *     ??$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_KPEBG@TaskFlowDataEngineTelemetry@@SAXAEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_K$$QEAPEBG@Z @ 0x18008DBB4 (--$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ??$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18008DC8C (--$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     ??$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18008DD50 (--$FailedToRetreiveProcessId@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

const struct _TlgProvider_t *TaskFlowDataEngineTelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050FA50;
    qword_18050FA50[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050FA68 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050FA50, qword_18050FA68);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_18050FA50);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
