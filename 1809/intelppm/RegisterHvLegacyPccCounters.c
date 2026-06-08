/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1C002D020
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C000CF5C (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterHvLegacyPccCounters(__int64 a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterHvFeedbackCountersCallback);
}
