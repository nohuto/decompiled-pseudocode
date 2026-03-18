/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x1401CE750
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x1401CE770 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x1401CEC90 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x1401CE810 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
