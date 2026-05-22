/*
 * XREFs of ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0
 * Callers:
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18005290C (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAX_K0KK@Z @ 0x180081568 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x180081658 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBULegacyInputInfo@@@Z @ 0x180081728 (-ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBULegacyInputInfo@@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800817C4 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800818C8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180081A1C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18008F544 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800C1E80 (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorSt.c)
 *     ?OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z @ 0x1800C2024 (-OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z.c)
 *     ?RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcessor@@_N33@Z @ 0x1800C29C0 (-RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcess.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x1800C2BAC (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDeci.c)
 * Callees:
 *     TraceLoggingRegister @ 0x1800010A0 (TraceLoggingRegister.c)
 *     atexit @ 0x18012B9E8 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *InputTraceLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180193600;
    qword_180193600 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180193618 = (TraceLoggingHProvider)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    qword_180193608 = (__int64)qword_180193618;
    byte_180193610 = 1;
    TraceLoggingRegister(qword_180193618);
    dword_180193614 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180193600 + 8))(&qword_180193600);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &qword_180193600);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
