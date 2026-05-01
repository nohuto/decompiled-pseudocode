/*
 * XREFs of TraceLoggingUnregister @ 0x180083078
 * Callers:
 *     TlgUnregisterAggregateProvider @ 0x180082FB8 (TlgUnregisterAggregateProvider.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180435F4C (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EventUnregister(*((_QWORD *)hProvider + 4));
  *((_QWORD *)hProvider + 4) = 0LL;
  *(_DWORD *)hProvider = 0;
}
