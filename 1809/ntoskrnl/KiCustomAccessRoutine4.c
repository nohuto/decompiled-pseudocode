/*
 * XREFs of KiCustomAccessRoutine4 @ 0x1401C76C0
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140178030 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1401C76A0 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}
