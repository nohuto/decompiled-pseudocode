/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C001F5FC
 * Callers:
 *     DriverEntry @ 0x1C02A1904 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C0156FD0 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C01570C4 (TraceLoggingRegisterEx.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx();
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C008D8E0, EnableDxgkrnlTelemetryProviderCallback, 0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  TraceLoggingRegisterEx(
    (TraceLoggingHProvider)&dword_1C008D8A8,
    EnableDriverDiagnosticsTelemetryProviderCallback<0>,
    0LL);
  TraceLoggingRegisterEx(
    (TraceLoggingHProvider)&dword_1C008D870,
    EnableDriverDiagnosticsTelemetryProviderCallback<1>,
    0LL);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C008D7C8, EnableDisplayTelemetryProviderCallback, 0LL);
}
