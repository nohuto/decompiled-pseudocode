/*
 * XREFs of RegisterHvPerfFeedbackCounters @ 0x1C002D1C0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x1C00311EC (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterHvPerfFeedbackCounters(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, RegisterHvFeedbackCountersCallback);
}
