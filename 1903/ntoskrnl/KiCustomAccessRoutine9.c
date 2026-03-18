/*
 * XREFs of KiCustomAccessRoutine9 @ 0x1401CE070
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x140338290 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1401CE050 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}
