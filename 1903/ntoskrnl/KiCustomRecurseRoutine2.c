/*
 * XREFs of KiCustomRecurseRoutine2 @ 0x1401CDC90
 * Callers:
 *     KiCustomRecurseRoutine1 @ 0x1401CDBD0 (KiCustomRecurseRoutine1.c)
 *     KiCustomAccessRoutine2 @ 0x1401CDCB0 (KiCustomAccessRoutine2.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x1401CDE10 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomRecurseRoutine2(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine3();
  return *a2;
}
