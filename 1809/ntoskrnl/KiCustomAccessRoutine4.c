/*
 * XREFs of KiCustomAccessRoutine4 @ 0x1401C7540
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140177F10 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1401C7520 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}
