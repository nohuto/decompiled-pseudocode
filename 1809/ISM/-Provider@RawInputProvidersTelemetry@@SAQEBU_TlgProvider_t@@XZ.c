/*
 * XREFs of ?Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180068C14
 * Callers:
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x180068D3C (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x180068E28 (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x1800010A0 (TraceLoggingRegister.c)
 *     atexit @ 0x18012B9E8 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *RawInputProvidersTelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`RawInputProvidersTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_180193D28;
    qword_180193D28 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180193D40 = (TraceLoggingHProvider)&`RawInputProvidersTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_57da4f32860180830fc4458af3e8f3e0_::_lambda_invoker_cdecl_);
    qword_180193D30 = (__int64)qword_180193D40;
    byte_180193D38 = 1;
    TraceLoggingRegister(qword_180193D40);
    dword_180193D3C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180193D28 + 8))(&qword_180193D28);
    InitOnceComplete(&`RawInputProvidersTelemetry::Instance'::`2'::wrapper, 0, &qword_180193D28);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
