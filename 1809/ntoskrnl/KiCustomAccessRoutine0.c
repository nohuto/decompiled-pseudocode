/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1401C7B60
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140136130 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1403229C0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1401C7B40 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
