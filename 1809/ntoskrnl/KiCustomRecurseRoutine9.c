/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x1401C7A60
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x1401C79A0 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x1401C7A80 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1401C7B20 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}
