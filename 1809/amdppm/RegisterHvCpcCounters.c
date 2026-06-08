/*
 * XREFs of RegisterHvCpcCounters @ 0x1C001B530
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C001EC8C (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
