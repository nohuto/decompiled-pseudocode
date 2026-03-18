/*
 * XREFs of KiCustomAccessRoutine2 @ 0x1401CE830
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x140101190 (IopIrpStackProfilerDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x1401CE810 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomAccessRoutine2(unsigned int *a1)
{
  return KiCustomRecurseRoutine2(((unsigned __int8)a1 & 3u) + 1, a1);
}
