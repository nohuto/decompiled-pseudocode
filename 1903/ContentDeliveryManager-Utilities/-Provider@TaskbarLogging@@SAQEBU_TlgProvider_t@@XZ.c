/*
 * XREFs of ?Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000B1F0
 * Callers:
 *     ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000B2DC (-Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ.c)
 *     ?TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z @ 0x18000B3F4 (-TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180006D30 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800CAD84 (atexit.c)
 */

const struct _TlgProvider_t *TaskbarLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskbarLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18018F798;
    qword_18018F798[0] = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_18018F7B0 = (struct _TlgProvider_t *)&`TaskbarLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18018F798, qword_18018F7B0);
    InitOnceComplete(&`TaskbarLogging::Instance'::`2'::wrapper, 0, qword_18018F798);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
