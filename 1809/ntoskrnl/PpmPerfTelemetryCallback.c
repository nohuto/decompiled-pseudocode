/*
 * XREFs of PpmPerfTelemetryCallback @ 0x14016A230
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140419988, DelayedWorkQueue);
}
