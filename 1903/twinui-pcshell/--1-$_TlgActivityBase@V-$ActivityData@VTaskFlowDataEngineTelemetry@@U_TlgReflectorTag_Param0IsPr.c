/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VTaskFlowDataEngineTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1801F8484
 * Callers:
 *     ??1?$ActivityData@VTaskFlowDataEngineTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801F8444 (--1-$ActivityData@VTaskFlowDataEngineTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012CD64 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskFlowDataEngineTelemetry,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::~_TlgActivityBase<wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskFlowDataEngineTelemetry,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>(
        _DWORD *a1)
{
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  const struct _TlgProvider_t **v3; // [rsp+38h] [rbp+10h] BYREF

  if ( *a1 == 1 )
  {
    v3 = 0LL;
    *a1 = 2;
    if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
    {
      v3 = (const struct _TlgProvider_t **)qword_180599DF8;
      qword_180599DF8[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599E10 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599DF8, qword_180599E10);
      InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_180599DF8);
    }
    _TlgWriteActivityAutoStop<70368744177664,5>(v3[1]);
  }
  *a1 = 3;
}
