/*
 * XREFs of ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18000BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18000B7E0 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::OnErrorReported(
        wil::TraceLoggingProvider *this,
        char a2,
        const struct wil::FailureInfo *a3)
{
  if ( !a2 )
  {
    if ( *((_DWORD *)this + 5) == 1 )
    {
      wil::TraceLoggingProvider::ReportTelemetryFailure(this, a3);
    }
    else if ( *((_DWORD *)this + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(this, a3);
    }
  }
}
