/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1401CE130
 * Callers:
 *     ExpTimerDpcRoutine @ 0x1400FEBF0 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140344500 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1401CE110 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
