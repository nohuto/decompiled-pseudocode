/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C0168840
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C01681AC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C01686D0 (UninitializeTelemetryAssertsKM.c)
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
