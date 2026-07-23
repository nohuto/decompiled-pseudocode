/*
 * XREFs of PopNetRefreshTimerCallback @ 0x1402E48F0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 */

char PopNetRefreshTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetRefreshTimerState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_1404113E8, DelayedWorkQueue);
  return v0;
}
