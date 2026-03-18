/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C0091608
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C0091518 (UninitializeTelemetryAssertsKM.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C01860A8 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return 0xFFFFFFFFLL;
  ExAcquireFastMutex((PFAST_MUTEX)g_AssertFastMutex);
  return 0LL;
}
