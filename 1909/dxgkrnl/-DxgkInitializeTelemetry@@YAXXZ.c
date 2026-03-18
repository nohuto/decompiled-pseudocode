/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C001EED4
 * Callers:
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C015DF98 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C015E08C (TraceLoggingRegisterEx.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx();
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C00A1930, EnableDxgkrnlTelemetryProviderCallback, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  TraceLoggingRegisterEx(
    (TraceLoggingHProvider)&dword_1C00A18F8,
    EnableDriverDiagnosticsTelemetryProviderCallback<0>,
    0LL);
  TraceLoggingRegisterEx(
    (TraceLoggingHProvider)&dword_1C00A18C0,
    EnableDriverDiagnosticsTelemetryProviderCallback<1>,
    0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C00A1818, EnableDisplayTelemetryProviderCallback, 0LL);
}
