/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x1C002D6A0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C0022910 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(char *, _QWORD))RegisterHvFeedbackCountersCallback);
}
