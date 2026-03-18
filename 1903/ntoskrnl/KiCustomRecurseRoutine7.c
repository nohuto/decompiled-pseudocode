/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x1401CDED0
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x1401CDD50 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x1401CDEF0 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x1401CDF90 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}
