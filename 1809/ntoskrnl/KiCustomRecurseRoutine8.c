/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x1401C79A0
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x1401C78E0 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x1401C79C0 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1401C7A60 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}
