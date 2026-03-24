/*
 * XREFs of PpmPerfTelemetryCallback @ 0x14016A130
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138CC8 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140418908, DelayedWorkQueue);
}
