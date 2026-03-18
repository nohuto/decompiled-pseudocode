/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1401CECB0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x1401015F0 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140343F60 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1401CEC90 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
