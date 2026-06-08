/*
 * XREFs of RegisterHvPerfFeedbackCounters @ 0x1C001B4F0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x1C001E73C (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterHvPerfFeedbackCounters(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, RegisterHvFeedbackCountersCallback);
}
