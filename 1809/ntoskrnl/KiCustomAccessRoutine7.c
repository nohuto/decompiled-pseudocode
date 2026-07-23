/*
 * XREFs of KiCustomAccessRoutine7 @ 0x1401C7A80
 * Callers:
 *     ExpTimeRefreshDpcRoutine @ 0x14013A6A0 (ExpTimeRefreshDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x1401C7A60 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomAccessRoutine7(unsigned int *a1)
{
  return KiCustomRecurseRoutine7(((unsigned __int8)a1 & 3u) + 1, a1);
}
