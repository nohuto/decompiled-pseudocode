/*
 * XREFs of PopSleepStudyTaskClientTimerCallback @ 0x1402E2210
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void PopSleepStudyTaskClientTimerCallback()
{
  ExQueueWorkItem(&PopSleepStudyTaskClientTimerWorkItem, DelayedWorkQueue);
}
