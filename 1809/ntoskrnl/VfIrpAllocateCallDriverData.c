/*
 * XREFs of VfIrpAllocateCallDriverData @ 0x1409314D4
 * Callers:
 *     IovCallDriver @ 0x140924CD4 (IovCallDriver.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140930484 (IovpCheckIrpForCriticalTracking.c)
 */

__int64 __fastcall VfIrpAllocateCallDriverData(__int64 a1, _QWORD *a2)
{
  PVOID v4; // rax
  unsigned int v5; // ebx

  v4 = ExAllocateFromNPagedLookasideList(&ViIrpCallDriverDataList);
  *a2 = v4;
  v5 = 0;
  if ( v4 )
  {
    memset(v4, 0, 0xC0uLL);
    return 1LL;
  }
  else
  {
    LOBYTE(v5) = !IovpCheckIrpForCriticalTracking(a1);
    return v5;
  }
}
