/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x1401CEB10
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x1401CEA50 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x1401CEB30 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1401CEBD0 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}
