/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x140644438
 * Callers:
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlinkWorkingSet @ 0x14008E63C (MiUnlinkWorkingSet.c)
 *     MiContractPagingFiles @ 0x14008E768 (MiContractPagingFiles.c)
 *     MiDeleteWorkingSetList @ 0x14008E82C (MiDeleteWorkingSetList.c)
 *     MiDeletePxeSharedLocks @ 0x14008E860 (MiDeletePxeSharedLocks.c)
 *     ExCleanupAutoExpandPushLock @ 0x14008E890 (ExCleanupAutoExpandPushLock.c)
 *     PsReturnProcessQuota @ 0x14008E8B8 (PsReturnProcessQuota.c)
 *     MiDeleteFinalPageTables @ 0x14008E9B4 (MiDeleteFinalPageTables.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D96CC (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406443CC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406B15F0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiDeleteAweInfo @ 0x140895E88 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r15
  ULONG_PTR v3; // r9
  char *v4; // rbx
  LONG *SharedVm; // rbp
  __int64 v6; // r12
  __int64 v7; // rdx
  ULONG_PTR *ProcessPartition; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  _SLIST_ENTRY *v11; // rcx
  void *v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rcx
  _QWORD *v16; // rax
  ULONG_PTR v17; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v20; // rax
  void *v21; // rcx

  v1 = BugCheckParameter2 + 1280;
  MiUnlinkWorkingSet(BugCheckParameter2 + 1280, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 936);
  v4 = *(char **)(BugCheckParameter2 + 1200);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) == 1 )
    {
      v16 = *(_QWORD **)v4;
      v17 = 0LL;
      while ( v16 )
      {
        v17 = (ULONG_PTR)v16;
        v16 = (_QWORD *)*v16;
      }
      if ( !v17 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v17 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v17, 0LL, *(_QWORD *)(v17 + 24), *(_QWORD *)(BugCheckParameter2 + 936));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, v3, *(_QWORD *)(BugCheckParameter2 + 1200));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter2 + 1200); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v21 = v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
        if ( !v21 )
          break;
        ExFreePoolWithTag(v21, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v6 = MiDeleteFinalPageTables(BugCheckParameter2);
  PsReturnProcessQuota(BugCheckParameter2, v7, 4uLL);
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(BugCheckParameter2);
  if ( ProcessPartition == &MiSystemPartition )
    MiReturnResidentAvailable(4uLL);
  else
    MiReturnPartitionResidentAvailable((__int64)ProcessPartition, 4uLL);
  v9 = *(_QWORD *)(BugCheckParameter2 + 1296);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 392);
    if ( v10 )
      MiDeleteAweInfo(BugCheckParameter2, v10);
    ExCleanupAutoExpandPushLock(v9 + 408);
  }
  v11 = (_SLIST_ENTRY *)*((_QWORD *)SharedVm + 5);
  if ( v11 )
  {
    MiEmptyPageAccessLog(v11);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  v12 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 776) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, -4LL, BugCheckParameter2);
  MiReturnCommit((__int64)ProcessPartition, 4 - v6);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  v13 = *(_QWORD *)(BugCheckParameter2 + 1024);
  if ( v13 )
    MiReleaseProcessReferenceToSessionDataPage(v13);
  v14 = *(void **)(BugCheckParameter2 + 2168);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return MiContractPagingFiles((__int64)ProcessPartition);
}
