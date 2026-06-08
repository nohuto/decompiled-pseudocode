/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x1C001B4D0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C001DE98 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
