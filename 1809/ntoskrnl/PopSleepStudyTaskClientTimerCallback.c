/*
 * XREFs of PopSleepStudyTaskClientTimerCallback @ 0x1402E2500
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void PopSleepStudyTaskClientTimerCallback()
{
  ExQueueWorkItem(&PopSleepStudyTaskClientTimerWorkItem, DelayedWorkQueue);
}
