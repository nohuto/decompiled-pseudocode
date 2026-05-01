/*
 * XREFs of TraceLoggingRegister @ 0x180124D1C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180435F4C (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  return TraceLoggingRegisterEx(hProvider, 0LL, 0LL);
}
