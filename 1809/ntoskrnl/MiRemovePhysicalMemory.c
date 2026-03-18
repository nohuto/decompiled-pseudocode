/*
 * XREFs of MiRemovePhysicalMemory @ 0x14084D56C
 * Callers:
 *     MiDeleteExtentPfns @ 0x1402B59C0 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x14084D920 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14084DF00 (MiRemoveMdlPages.c)
 *     MiAllocateFileExtents @ 0x1408521D0 (MiAllocateFileExtents.c)
 *     MiHotRemovePartitionPageRun @ 0x140860630 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140090D18 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140091050 (MiLockDynamicMemoryExclusive.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF360 (MiFlushEntireTbDueToAttributeChange.c)
 *     KePulseEvent @ 0x1400F0BA0 (KePulseEvent.c)
 *     MiReferencePageRuns @ 0x14012B6B0 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x140141AB0 (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x14017EF64 (MiDescribePageRun.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140280428 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14028DA04 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x1402A6604 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x1402A6B28 (MiPerformMemoryChange.c)
 *     MiGetDanglingExtent @ 0x1402B5E5C (MiGetDanglingExtent.c)
 *     MiReduceCommitLimits @ 0x1402C0204 (MiReduceCommitLimits.c)
 *     MiFlushCacheRange @ 0x1402C3D7C (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiComputeNodeMemory @ 0x14075DCBC (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x14084D1D0 (MiConfigureMemoryRemoval.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 DanglingExtent; // r14
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r13d
  int v7; // esi
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  unsigned int *i; // r13
  _QWORD *v12; // r15
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int *v16; // rcx
  __int64 v17; // rax
  unsigned int *v18; // [rsp+30h] [rbp-39h] BYREF
  char *v19; // [rsp+38h] [rbp-31h] BYREF
  struct _KTHREAD *v20; // [rsp+40h] [rbp-29h]
  PVOID P[3]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v22[12]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v23; // [rsp+D8h] [rbp+6Fh] BYREF
  int v24; // [rsp+E0h] [rbp+77h]
  __int64 v25; // [rsp+E8h] [rbp+7Fh]

  v23 = a2;
  DanglingExtent = a1;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v20 = CurrentThread;
  v18 = 0LL;
  v25 = 0LL;
  v19 = 0LL;
  v24 = v5;
  if ( (a3 & 2) != 0 )
  {
    v7 = 0;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (a3 & 0x20) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v23);
      if ( DanglingExtent == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v9 = v23;
LABEL_22:
    MiInitializeDynamicPfns(DanglingExtent, v9, 0, a3, 0LL);
    qword_14043C990 += v9;
    if ( (unsigned __int64)qword_14043C990 >= 0x5555 && !byte_14043CA04 )
    {
      stru_14043C970.List.Flink = 0LL;
      stru_14043C970.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_14043C970.Parameter = &MiSystemPartition;
      ExQueueWorkItem(&stru_14043C970, DelayedWorkQueue);
      byte_14043CA04 = 1;
    }
    if ( !v5 )
    {
      KePulseEvent(qword_14043CA80, 0, 0);
      MiFlushEntireTbDueToAttributeChange(v15);
      MiFlushCacheRange(DanglingExtent, v9);
    }
    goto LABEL_28;
  }
  v9 = v23;
  v22[0] = 0LL;
  v22[3] = v23;
  v22[2] = a1;
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v7 = MiConfigureMemoryRemoval(&v19, (unsigned int *)MmPhysicalMemoryBlock, v22);
  if ( v7 >= 0 )
  {
    v25 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
    v10 = v25;
    if ( !(unsigned int)MiDescribePageRun((__int64)P, DanglingExtent, v9) )
    {
      v7 = -1073741670;
      goto LABEL_30;
    }
    for ( i = (unsigned int *)v10; ; i = v18 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_39:
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      v7 = MiConfigureMemoryRemoval(&v18, i, v12);
      ExFreePoolWithTag(v12, 0);
      v10 = v25;
      if ( i != (unsigned int *)v25 )
        ExFreePoolWithTag(i - 4, 0);
      if ( v7 < 0 )
      {
        v5 = v24;
        goto LABEL_30;
      }
    }
    if ( (a3 & 0x200) == 0 )
    {
      MiReduceCommitLimits(&MiSystemPartition, v9, v9);
      MiReturnCommit((__int64)&MiSystemPartition, v9);
    }
    MiPerformMemoryChange(DanglingExtent, v9, (void **)&v19, (__int64 *)&v18, 0);
    MiComputeNodeMemory((__int64)&MiSystemPartition);
    v14 = -1;
    if ( qword_14043E510 <= 0xFFFFFFFF )
      v14 = qword_14043E510;
    MEMORY[0xFFFFF780000002E8] = v14;
    KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v9 - 1, 2);
    v5 = v24;
    goto LABEL_22;
  }
LABEL_28:
  v10 = v25;
LABEL_30:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v20);
  if ( v19 )
    ExFreePoolWithTag(v19 - 16, 0);
  if ( !v18 )
    goto LABEL_35;
  v16 = v18 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v16, 0);
LABEL_35:
    v16 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_39;
    v17 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_39;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v17 + 8) = P;
  }
  if ( v10 )
    MiDereferencePageRuns(v10);
  if ( v7 >= 0 && (a3 & 8) == 0 && !v5 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v7;
}
