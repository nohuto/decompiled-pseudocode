/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x140193F80
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem(&ExpDebuggerWorkItem, DelayedWorkQueue);
}
