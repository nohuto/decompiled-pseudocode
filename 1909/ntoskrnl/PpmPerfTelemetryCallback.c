/*
 * XREFs of PpmPerfTelemetryCallback @ 0x140171E30
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 */

__int64 PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem(&unk_140444228, 1LL);
}
