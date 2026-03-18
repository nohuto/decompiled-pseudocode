/*
 * XREFs of EnableUserkTraceLogging @ 0x1C0113510
 * Callers:
 *     <none>
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C03682A0 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C0368384 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  TlgRegisterAggregateProviderEx();
  return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C03202C0, InputCoreProviderCallback, 0LL);
}
