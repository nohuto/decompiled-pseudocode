/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1401C7CC0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140136230 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140322BB0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1401C7CA0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
