/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x1401C7760
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x1401C7460 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x1401C7780 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x1401C78E0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
