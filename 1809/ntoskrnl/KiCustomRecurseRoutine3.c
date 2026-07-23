/*
 * XREFs of KiCustomRecurseRoutine3 @ 0x1401C79A0
 * Callers:
 *     KiCustomRecurseRoutine2 @ 0x1401C7820 (KiCustomRecurseRoutine2.c)
 *     KiCustomAccessRoutine3 @ 0x1401C79C0 (KiCustomAccessRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1401C76A0 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomRecurseRoutine3(int a1, unsigned int *a2)
{
  int v2; // ecx

  v2 = a1 - 1;
  if ( v2 )
    KiCustomRecurseRoutine4(v2, a2);
  return *a2;
}
