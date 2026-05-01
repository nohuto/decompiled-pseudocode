/*
 * XREFs of TraceLoggingRegister @ 0x180105D0C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1804168AC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  return TraceLoggingRegisterEx(hProvider, 0LL, 0LL);
}
