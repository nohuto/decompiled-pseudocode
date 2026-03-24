/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x1401C7600
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x1401C7620 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x1401C7B40 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x1401C76C0 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
