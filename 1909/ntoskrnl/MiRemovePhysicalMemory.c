/*
 * XREFs of MiRemovePhysicalMemory @ 0x140888720
 * Callers:
 *     MiDeleteExtentPfns @ 0x1402CB520 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x140888B00 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x140889380 (MiRemoveMdlPages.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 *     MiHotRemovePartitionPageRun @ 0x14089C358 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140098A00 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400C5490 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1400C57C0 (MiLockDynamicMemoryExclusive.c)
 *     KePulseEvent @ 0x1400DB590 (KePulseEvent.c)
 *     MiReferencePageRuns @ 0x14012CD00 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x14015D40C (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x140188F1C (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1402954E8 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1402A4394 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x1402BE034 (MiPerformMemoryChange.c)
 *     MiGetDanglingExtent @ 0x1402CBF48 (MiGetDanglingExtent.c)
 *     MiReduceCommitLimits @ 0x1402D99A0 (MiReduceCommitLimits.c)
 *     MiFlushCacheRange @ 0x1402DDED8 (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiComputeNodeMemory @ 0x140751334 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x140888280 (MiConfigureMemoryRemoval.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 BugCheckParameter2, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3; // r13d
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // r14
  int v7; // esi
  unsigned __int64 v9; // rdi
  unsigned int *i; // r13
  _QWORD *v11; // r14
  __int64 v12; // rax
  int v13; // eax
  int v14; // r14d
  unsigned int *v15; // rcx
  __int64 v16; // rax
  int v17; // [rsp+30h] [rbp-51h]
  int v18; // [rsp+38h] [rbp-49h]
  unsigned int *v19; // [rsp+48h] [rbp-39h] BYREF
  char *v20; // [rsp+50h] [rbp-31h] BYREF
  struct _KTHREAD *v21; // [rsp+58h] [rbp-29h]
  PVOID P[3]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v23[12]; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v24; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v25; // [rsp+F8h] [rbp+77h]
  int v26; // [rsp+100h] [rbp+7Fh]

  v25 = a3;
  v24 = a2;
  v3 = a3;
  memset(v23, 0, 0x28uLL);
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  v26 = v3 & 2;
  v20 = 0LL;
  v21 = CurrentThread;
  if ( (v3 & 2) != 0 )
  {
    v7 = 0;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (v3 & 0x20) != 0 )
    {
      BugCheckParameter2 = MiGetDanglingExtent(&v24);
      if ( BugCheckParameter2 == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v9 = v24;
    goto LABEL_22;
  }
  v9 = v24;
  v23[0] = 0LL;
  v23[3] = v24;
  v23[2] = BugCheckParameter2;
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v7 = MiConfigureMemoryRemoval(&v20, (unsigned int *)MmPhysicalMemoryBlock, v23);
  if ( v7 < 0 )
  {
LABEL_31:
    v14 = v26;
    goto LABEL_32;
  }
  v5 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
  if ( !(unsigned int)MiDescribePageRun((__int64)P, BugCheckParameter2, v9) )
  {
    v7 = -1073741670;
    goto LABEL_31;
  }
  for ( i = (unsigned int *)v5; ; i = v19 )
  {
    v11 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v12 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_41:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v12 + 8) = P;
    v7 = MiConfigureMemoryRemoval(&v19, i, v11);
    ExFreePoolWithTag(v11, 0);
    if ( i != (unsigned int *)v5 )
      ExFreePoolWithTag(i - 4, 0);
    if ( v7 < 0 )
    {
      LOBYTE(v3) = v25;
      goto LABEL_31;
    }
  }
  v3 = v25;
  if ( (v25 & 0x200) == 0 )
  {
    MiReduceCommitLimits(&MiSystemPartition, v9, v9);
    MiReturnCommit((__int64)&MiSystemPartition, v9);
  }
  MiPerformMemoryChange(BugCheckParameter2, v9, (void **)&v20, (__int64 *)&v19, 0);
  MiComputeNodeMemory((__int64)&MiSystemPartition);
  v13 = -1;
  if ( qword_14046A090 <= 0xFFFFFFFF )
    v13 = qword_14046A090;
  MEMORY[0xFFFFF780000002E8] = v13;
  KeConfigureDynamicMemory(BugCheckParameter2, BugCheckParameter2 + v9 - 1, 2u);
LABEL_22:
  MiInitializeDynamicPfns(BugCheckParameter2, v9, 0, v3, 0LL, 0LL);
  qword_140468210 += v9;
  if ( (unsigned __int64)qword_140468210 >= 0x5555 && !byte_140468284 )
  {
    stru_1404681F0.List.Flink = 0LL;
    stru_1404681F0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
    stru_1404681F0.Parameter = &MiSystemPartition;
    ExQueueWorkItem(&stru_1404681F0, DelayedWorkQueue);
    byte_140468284 = 1;
  }
  v14 = v26;
  if ( !v26 )
  {
    if ( (MiFlags & 0x10000000) != 0 )
      ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, v26 & v17, v26 & v18);
    KePulseEvent(qword_140468300, 0, 0);
    MiFlushEntireTbDueToAttributeChange();
    MiFlushCacheRange(BugCheckParameter2, v9);
  }
LABEL_32:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v21);
  if ( v20 )
    ExFreePoolWithTag(v20 - 16, 0);
  if ( !v19 )
    goto LABEL_37;
  v15 = v19 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v15, 0);
LABEL_37:
    v15 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_41;
    v16 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_41;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v16 + 8) = P;
  }
  if ( v5 )
    MiDereferencePageRuns(v5);
  if ( v7 >= 0 && (v3 & 8) == 0 && !v14 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v7;
}
