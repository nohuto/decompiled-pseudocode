/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x14019E670
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem(&ExpDebuggerWorkItem, DelayedWorkQueue);
}
