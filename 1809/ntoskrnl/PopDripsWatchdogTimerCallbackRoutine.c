/*
 * XREFs of PopDripsWatchdogTimerCallbackRoutine @ 0x1402E7220
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140138CC8 (PopQueueWorkItem.c)
 */

char __fastcall PopDripsWatchdogTimerCallbackRoutine(__int64 a1, __int64 a2)
{
  return PopQueueWorkItem(a2 + 360, DelayedWorkQueue);
}
