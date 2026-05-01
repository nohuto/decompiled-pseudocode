/*
 * XREFs of TraceLoggingUnregister @ 0x1800809B8
 * Callers:
 *     TlgUnregisterAggregateProvider @ 0x1800808F8 (TlgUnregisterAggregateProvider.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1804168AC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EventUnregister(*((_QWORD *)hProvider + 4));
  *((_QWORD *)hProvider + 4) = 0LL;
  *(_DWORD *)hProvider = 0;
}
