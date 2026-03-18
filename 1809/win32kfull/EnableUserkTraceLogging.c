/*
 * XREFs of EnableUserkTraceLogging @ 0x1C012CEF0
 * Callers:
 *     <none>
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C03550F0 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C03551D4 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  TlgRegisterAggregateProviderEx();
  return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C030D340, InputCoreProviderCallback, 0LL);
}
