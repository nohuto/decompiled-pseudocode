/*
 * XREFs of KiComputePriorityFloor @ 0x14011F940
 * Callers:
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1401B4B10 (KiReadGuestSchedulerAssistPriority.c)
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
