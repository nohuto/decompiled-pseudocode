/*
 * XREFs of ?Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18003840C
 * Callers:
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x18003852C (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x1800385C4 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x1800386AC (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x1800010A0 (TraceLoggingRegister.c)
 *     atexit @ 0x18012B9E8 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *ControllerProcessorTelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_180193CD8;
    qword_180193CD8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180193CF0 = (TraceLoggingHProvider)&`ControllerProcessorTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_);
    qword_180193CE0 = (__int64)qword_180193CF0;
    byte_180193CE8 = 1;
    TraceLoggingRegister(qword_180193CF0);
    dword_180193CEC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180193CD8 + 8))(&qword_180193CD8);
    InitOnceComplete(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, &qword_180193CD8);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
