/*
 * XREFs of CcInitializePartitionVacbs @ 0x140190C48
 * Callers:
 *     CcInitializePartition @ 0x140190334 (CcInitializePartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     CcGetVacbFromFreeList @ 0x14007705C (CcGetVacbFromFreeList.c)
 *     CcSetVacbInFreeList @ 0x14007A65C (CcSetVacbInFreeList.c)
 *     CcInsertVacbArray @ 0x140190D38 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x140190DF0 (CcAllocateInitializeVacbArray.c)
 *     MmReserveViewInSystemCache @ 0x14076E920 (MmReserveViewInSystemCache.c)
 */

char __fastcall CcInitializePartitionVacbs(__int64 a1)
{
  char v1; // di
  KIRQL v3; // bl
  __int64 *VacbFromFreeList; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  KIRQL v7; // bp
  __int64 InitializeVacbArray; // rbx

  v1 = 1;
  while ( *(_DWORD *)(a1 + 856) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
  {
    v3 = KeAcquireQueuedSpinLock(4uLL);
    VacbFromFreeList = CcGetVacbFromFreeList(a1, 0);
    KeReleaseQueuedSpinLock(4uLL, v3);
    if ( VacbFromFreeList )
    {
      v5 = MmReserveViewInSystemCache(*(_QWORD *)(a1 + 8));
      *VacbFromFreeList = v5;
      v6 = v5;
      v7 = KeAcquireQueuedSpinLock(4uLL);
      if ( !v6 )
      {
        v1 = 0;
        CcSetVacbInFreeList(a1, VacbFromFreeList, 0);
        KeReleaseQueuedSpinLock(4uLL, v7);
        return v1;
      }
      CcSetVacbInFreeList(a1, VacbFromFreeList, 1);
    }
    else
    {
      InitializeVacbArray = CcAllocateInitializeVacbArray();
      if ( !InitializeVacbArray )
        return 0;
      v7 = KeAcquireQueuedSpinLock(4uLL);
      CcInsertVacbArray(a1, InitializeVacbArray);
      if ( CcVacbArraysAllocated == 1 )
        *(_DWORD *)(InitializeVacbArray + 4) = 1;
    }
    KeReleaseQueuedSpinLock(4uLL, v7);
  }
  return v1;
}
