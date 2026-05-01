/*
 * XREFs of TraceLoggingUnregister @ 0x1800E3678
 * Callers:
 *     TlgUnregisterAggregateProvider @ 0x1800E44E8 (TlgUnregisterAggregateProvider.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1803B40AC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EventUnregister(*((_QWORD *)hProvider + 4));
  *((_QWORD *)hProvider + 4) = 0LL;
  *(_DWORD *)hProvider = 0;
}
