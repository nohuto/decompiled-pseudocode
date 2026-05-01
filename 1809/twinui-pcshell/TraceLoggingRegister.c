/*
 * XREFs of TraceLoggingRegister @ 0x1800E3668
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1803B40AC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  return TraceLoggingRegisterEx(hProvider, 0LL, 0LL);
}
