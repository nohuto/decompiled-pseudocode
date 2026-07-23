/*
 * XREFs of PopNetEvaluationTimerCallback @ 0x1402E48C0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 */

char PopNetEvaluationTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetGracePeriodState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_140411328, DelayedWorkQueue);
  return v0;
}
