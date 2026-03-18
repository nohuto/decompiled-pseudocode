/*
 * XREFs of PopThermalTelemetryCallback @ 0x1402F7AE0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140442A88, DelayedWorkQueue);
}
