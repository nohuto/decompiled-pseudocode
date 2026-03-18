/*
 * XREFs of PopThermalTelemetryCallback @ 0x1402F8030
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140442AE8, DelayedWorkQueue);
}
