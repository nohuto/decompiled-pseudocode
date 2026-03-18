/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x14019ED90
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem(&ExpDebuggerWorkItem, DelayedWorkQueue);
}
