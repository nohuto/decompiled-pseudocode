/*
 * XREFs of ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18001FC40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180006474 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180006714 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     atexit @ 0x1800C6E84 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback(
        char a1,
        const struct wil::FailureInfo *a2)
{
  WINBOOL v4; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &v4,
         (LPVOID *)&v5)
    && v4 )
  {
    qword_180184EC0 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    v5 = (wil::TraceLoggingProvider *)&qword_180184EC0;
    atexit(lambda_f445b1b04a1e911cb28a3e84927aae7d_::_lambda_invoker_cdecl_);
    qword_180184EC8 = (__int64)ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    byte_180184ED0 = 0;
    dword_180184ED4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180184EC0 + 8))(&qword_180184EC0);
    InitOnceComplete(
      &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
      0,
      &qword_180184EC0);
  }
  if ( !a1 )
  {
    if ( *((_DWORD *)v5 + 5) == 1 )
    {
      wil::TraceLoggingProvider::ReportTelemetryFailure(v5, a2);
    }
    else if ( *((_DWORD *)v5 + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(v5, a2);
    }
  }
}
