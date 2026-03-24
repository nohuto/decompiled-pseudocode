/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x1401C7540
 * Callers:
 *     KiCustomAccessRoutine4 @ 0x1401C7560 (KiCustomAccessRoutine4.c)
 *     KiCustomRecurseRoutine3 @ 0x1401C7840 (KiCustomRecurseRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x1401C7480 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  int v2; // ecx

  v2 = a1 - 1;
  if ( v2 )
    KiCustomRecurseRoutine5(v2, a2);
  return *a2;
}
