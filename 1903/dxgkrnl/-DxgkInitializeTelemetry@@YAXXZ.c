/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C001EE84
 * Callers:
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C015A1EC (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C015A2E0 (TraceLoggingRegisterEx.c)
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
