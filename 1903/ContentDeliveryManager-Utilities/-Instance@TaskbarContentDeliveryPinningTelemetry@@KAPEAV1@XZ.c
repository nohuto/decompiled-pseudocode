/*
 * XREFs of ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000B2DC
 * Callers:
 *     _lambda_67d3978e1092d2b882811411f68ad6cb_::operator() @ 0x18000B7EC (_lambda_67d3978e1092d2b882811411f68ad6cb_--operator().c)
 * Callees:
 *     ?Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000B1F0 (-Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x1800CAD84 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

struct TaskbarContentDeliveryPinningTelemetry *TaskbarContentDeliveryPinningTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    qword_18018F7D8 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    Context = &qword_18018F7D8;
    atexit(lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_);
    qword_18018F7E0 = (__int64)TaskbarLogging::Provider();
    byte_18018F7E8 = 0;
    dword_18018F7EC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18018F7D8 + 8))(&qword_18018F7D8);
    InitOnceComplete(&`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper, 0, &qword_18018F7D8);
  }
  return (struct TaskbarContentDeliveryPinningTelemetry *)Context;
}
