/*
 * XREFs of PopSleepStudyTaskClientTimerCallback @ 0x1402FF200
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void PopSleepStudyTaskClientTimerCallback()
{
  ExQueueWorkItem(&PopSleepStudyTaskClientTimerWorkItem, DelayedWorkQueue);
}
