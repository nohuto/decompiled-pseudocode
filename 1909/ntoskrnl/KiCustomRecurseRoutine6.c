/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x1401CE8D0
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x1401CE5D0 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x1401CE8F0 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x1401CEA50 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
