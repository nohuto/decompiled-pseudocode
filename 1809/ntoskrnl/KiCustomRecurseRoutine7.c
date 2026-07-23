/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x1401C7A60
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x1401C78E0 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x1401C7A80 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x1401C7B20 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}
