/*
 * XREFs of EnableUserkTraceLogging @ 0x1C0139510
 * Callers:
 *     <none>
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C036B2A0 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C036B384 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  TlgRegisterAggregateProviderEx();
  return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C03222C0, InputCoreProviderCallback, 0LL);
}
