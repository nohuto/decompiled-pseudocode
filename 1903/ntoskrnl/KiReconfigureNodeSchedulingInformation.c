/*
 * XREFs of KiReconfigureNodeSchedulingInformation @ 0x1402A375C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1405AB150 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReconfigureNodeSchedulingInformation(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  a1[20] |= a2[25];
  v2 = a1[44];
  if ( (v2 & a2[3117]) == 0 )
    a1[44] = a2[25] | v2;
  result = a2[3112];
  a1[19] |= result;
  return result;
}
