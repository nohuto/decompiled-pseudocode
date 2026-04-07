/*
 * XREFs of ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18007EFB0
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x18004C18C (atexit.c)
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1800732D0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 *     ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x18007EE9C (--1Completer@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 */

void __fastcall WindowFrameLoggingTelemetry::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+50h] [rbp+18h] BYREF
  wil::TraceLoggingProvider *v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v4 = &`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper;
    v7 = (wil::TraceLoggingProvider *)&qword_1800D7A38;
    qword_1800D7A38 = (__int64)&WindowFrameLogging::`vftable';
    atexit(lambda_522324fbb5dde8754aa82d91ec00ee97_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer((__int64)&v4);
  }
  wil::TraceLoggingProvider::OnErrorReported(v7, a1, a2);
}
