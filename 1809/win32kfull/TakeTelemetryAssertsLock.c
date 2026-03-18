/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C0131EB0
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C0131DA0 (UninitializeTelemetryAssertsKM.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C02C1D80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return 0xFFFFFFFFLL;
  ExAcquireFastMutex(g_AssertFastMutex);
  return 0LL;
}
