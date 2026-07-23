/*
 * XREFs of PopThermalTelemetryCallback @ 0x1402DC620
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_1404182A8, DelayedWorkQueue);
}
