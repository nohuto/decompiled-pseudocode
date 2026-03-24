/*
 * XREFs of KiCustomAccessRoutine4 @ 0x1401C7560
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140177F30 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1401C7540 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}
