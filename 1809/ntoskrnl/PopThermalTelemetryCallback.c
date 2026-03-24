/*
 * XREFs of PopThermalTelemetryCallback @ 0x1402DC430
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138CC8 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140417208, DelayedWorkQueue);
}
