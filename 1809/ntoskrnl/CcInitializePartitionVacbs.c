/*
 * XREFs of CcInitializePartitionVacbs @ 0x14018AFEC
 * Callers:
 *     CcInitializePartition @ 0x14018A6F0 (CcInitializePartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     CcGetVacbFromFreeList @ 0x1400219C0 (CcGetVacbFromFreeList.c)
 *     CcSetVacbInFreeList @ 0x140079BC0 (CcSetVacbInFreeList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     CcInsertVacbArray @ 0x14016AD64 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x14016B0E4 (CcAllocateInitializeVacbArray.c)
 *     MmReserveViewInSystemCache @ 0x14075138C (MmReserveViewInSystemCache.c)
 */

char __fastcall CcInitializePartitionVacbs(__int64 a1)
{
  char v1; // di
  KIRQL v3; // bl
  __int64 *VacbFromFreeList; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  KIRQL v7; // bp
  char *InitializeVacbArray; // rbx

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
        *((_DWORD *)InitializeVacbArray + 1) = 1;
    }
    KeReleaseQueuedSpinLock(4uLL, v7);
  }
  return v1;
}
