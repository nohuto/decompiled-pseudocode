/*
 * XREFs of PpmPerfTelemetryCallback @ 0x14016A110
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138CA8 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_1404188C8, DelayedWorkQueue);
}
