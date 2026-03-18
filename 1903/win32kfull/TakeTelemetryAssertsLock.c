/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C013D5B0
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C013D4A0 (UninitializeTelemetryAssertsKM.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C02D4E2C (MicrosoftTelemetryAssertTriggeredWorker.c)
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
