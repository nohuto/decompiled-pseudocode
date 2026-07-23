/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x140609AD0
 * Callers:
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     MiContractPagingFiles @ 0x1400916A8 (MiContractPagingFiles.c)
 *     MiDeleteWorkingSetList @ 0x14009176C (MiDeleteWorkingSetList.c)
 *     ExCleanupAutoExpandPushLock @ 0x1400917A0 (ExCleanupAutoExpandPushLock.c)
 *     PsReturnProcessQuota @ 0x1400917C8 (PsReturnProcessQuota.c)
 *     MiDeleteFinalPageTables @ 0x1400917F8 (MiDeleteFinalPageTables.c)
 *     MiUnlinkWorkingSet @ 0x140091BBC (MiUnlinkWorkingSet.c)
 *     MiDeletePxeSharedLocks @ 0x1401B5914 (MiDeletePxeSharedLocks.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402C0230 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14060851C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14068D8F0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiDeleteAweInfo @ 0x140850F50 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // r15
  ULONG_PTR v3; // r9
  char *v4; // rbx
  _QWORD *v5; // rax
  ULONG_PTR v6; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v9; // rax
  void *v10; // rcx
  LONG *SharedVm; // rbp
  __int64 v12; // r12
  __int64 v13; // rdx
  ULONG_PTR *ProcessPartition; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  PVOID *v17; // rcx
  void *v18; // rcx
  unsigned __int64 v19; // rcx
  void *v20; // rcx

  v1 = BugCheckParameter1 + 1280;
  MiUnlinkWorkingSet(BugCheckParameter1 + 1280, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter1 + 928);
  v4 = *(char **)(BugCheckParameter1 + 1200);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) == 1 )
    {
      v5 = *(_QWORD **)v4;
      v6 = 0LL;
      while ( v5 )
      {
        v6 = (ULONG_PTR)v5;
        v5 = (_QWORD *)*v5;
      }
      if ( !v6 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v6 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v6, 0LL, *(_QWORD *)(v6 + 24), *(_QWORD *)(BugCheckParameter1 + 928));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter1, v3, *(_QWORD *)(BugCheckParameter1 + 1200));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter1 + 1200); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v10 = v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
        if ( !v10 )
          break;
        ExFreePoolWithTag(v10, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v12 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter1);
  PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter1, v13, 4LL);
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(BugCheckParameter1);
  if ( ProcessPartition == &MiSystemPartition )
    MiReturnResidentAvailable(4uLL);
  else
    MiReturnPartitionResidentAvailable((__int64)ProcessPartition, 4uLL);
  v15 = *(_QWORD *)(BugCheckParameter1 + 1296);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 344);
    if ( v16 )
      MiDeleteAweInfo(BugCheckParameter1, v16);
    ExCleanupAutoExpandPushLock(v15 + 360);
  }
  v17 = (PVOID *)*((_QWORD *)SharedVm + 6);
  if ( v17 )
  {
    MiEmptyPageAccessLog(v17);
    *((_QWORD *)SharedVm + 6) = 0LL;
  }
  v18 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, -4LL, BugCheckParameter1);
  MiReturnCommit((__int64)ProcessPartition, 4 - v12);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  v19 = *(_QWORD *)(BugCheckParameter1 + 1024);
  if ( v19 )
    MiReleaseProcessReferenceToSessionDataPage(v19);
  v20 = *(void **)(BugCheckParameter1 + 2120);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  return MiContractPagingFiles((__int64)ProcessPartition);
}
