/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x1406709CC
 * Callers:
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiDeleteFinalPageTables @ 0x1400AD0A0 (MiDeleteFinalPageTables.c)
 *     MiContractPagingFiles @ 0x1400AD73C (MiContractPagingFiles.c)
 *     MiDeleteWorkingSetList @ 0x1400AD800 (MiDeleteWorkingSetList.c)
 *     MiDeletePxeSharedLocks @ 0x1400AD834 (MiDeletePxeSharedLocks.c)
 *     ExCleanupAutoExpandPushLock @ 0x1400AD870 (ExCleanupAutoExpandPushLock.c)
 *     PsReturnProcessQuota @ 0x1400AD898 (PsReturnProcessQuota.c)
 *     MiUnlinkWorkingSet @ 0x1400AD8C8 (MiUnlinkWorkingSet.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D996C (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406AF6C0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406E5C84 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeleteAweInfo @ 0x140896668 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter1)
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
  void *v13; // rcx
  _QWORD *v15; // rax
  ULONG_PTR v16; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v19; // rax
  void *v20; // rcx

  v1 = BugCheckParameter1 + 1280;
  MiUnlinkWorkingSet(BugCheckParameter1 + 1280, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter1 + 936);
  v4 = *(char **)(BugCheckParameter1 + 1200);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) == 1 )
    {
      v15 = *(_QWORD **)v4;
      v16 = 0LL;
      while ( v15 )
      {
        v16 = (ULONG_PTR)v15;
        v15 = (_QWORD *)*v15;
      }
      if ( !v16 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v16 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v16, 0LL, *(_QWORD *)(v16 + 24), *(_QWORD *)(BugCheckParameter1 + 936));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter1, v3, *(_QWORD *)(BugCheckParameter1 + 1200));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter1 + 1200); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v20 = v19;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
        if ( !v20 )
          break;
        ExFreePoolWithTag(v20, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v6 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter1);
  PsReturnProcessQuota(BugCheckParameter1, v7, 4uLL);
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(BugCheckParameter1);
  if ( ProcessPartition == &MiSystemPartition )
    MiReturnResidentAvailable(4uLL);
  else
    MiReturnPartitionResidentAvailable((__int64)ProcessPartition, 4uLL);
  v9 = *(_QWORD *)(BugCheckParameter1 + 1296);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 392);
    if ( v10 )
      MiDeleteAweInfo(BugCheckParameter1, v10);
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
  if ( (*(_DWORD *)(BugCheckParameter1 + 776) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, -4LL, BugCheckParameter1);
  MiReturnCommit((__int64)ProcessPartition, 4 - v6);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  if ( *(_QWORD *)(BugCheckParameter1 + 1024) )
    MiReleaseProcessReferenceToSessionDataPage();
  v13 = *(void **)(BugCheckParameter1 + 2168);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return MiContractPagingFiles((__int64)ProcessPartition);
}
