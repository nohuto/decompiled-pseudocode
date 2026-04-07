/*
 * XREFs of ?WasAlreadyReportedToTelemetry@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAA_NJ@Z @ 0x180088F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall WindowFrameLoggingTelemetry::StartDisplayCapture::WasAlreadyReportedToTelemetry(
        WindowFrameLoggingTelemetry::StartDisplayCapture *this,
        int a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == a2;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2;
  return v2;
}
