/*
 * XREFs of PopDirectedDripsTimerCallbackRoutine @ 0x1402D6AF0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402D6B68 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsTimerCallbackRoutine(__int64 a1, volatile signed __int32 *a2)
{
  _InterlockedAnd(a2, 0xFFFFFFFB);
  return PopQueueDirectedDripsWork(a2, 0LL);
}
