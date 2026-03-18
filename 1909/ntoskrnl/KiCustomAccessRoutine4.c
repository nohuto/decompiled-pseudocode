/*
 * XREFs of KiCustomAccessRoutine4 @ 0x1401CE6B0
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x14015C0A0 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1401CE690 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}
