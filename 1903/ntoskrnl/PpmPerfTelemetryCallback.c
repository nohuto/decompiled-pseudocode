/*
 * XREFs of PpmPerfTelemetryCallback @ 0x140171740
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 */

__int64 PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem(&unk_1404442A8, 1LL);
}
