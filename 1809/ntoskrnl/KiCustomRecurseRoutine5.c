/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x1401C7460
 * Callers:
 *     KiCustomAccessRoutine5 @ 0x1401C7480 (KiCustomAccessRoutine5.c)
 *     KiCustomRecurseRoutine4 @ 0x1401C7520 (KiCustomRecurseRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x1401C7760 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}
