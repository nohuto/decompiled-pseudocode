/*
 * XREFs of KiComputePriorityFloor @ 0x14000FC70
 * Callers:
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402AF84C (KiReadGuestSchedulerAssistPriority.c)
 * Callees:
 *     <none>
 */

char __fastcall KiComputePriorityFloor(__int64 a1, char a2)
{
  unsigned int v2; // eax
  char v3; // r9
  int v5; // r8d

  v2 = *(_DWORD *)(a1 + 1408);
  v3 = a2;
  if ( v2 )
  {
    _BitScanReverse((unsigned int *)&v5, v2);
    v3 = a2;
    if ( a2 < v5 )
      return v5;
  }
  return v3;
}
