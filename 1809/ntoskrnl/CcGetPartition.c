/*
 * XREFs of CcGetPartition @ 0x1400AD030
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x14001B334 (CcWaitForUninitializeCacheMap.c)
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcDeductDirtyPages @ 0x14002124C (CcDeductDirtyPages.c)
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     CcAmILowPriorityWriter @ 0x140021B3C (CcAmILowPriorityWriter.c)
 *     CcChargeDirtyPages @ 0x140023780 (CcChargeDirtyPages.c)
 *     CcUnmapVacbArray @ 0x1400798E0 (CcUnmapVacbArray.c)
 *     CcDeleteSharedCacheMap @ 0x14007C270 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x14007CE00 (CcSetAdditionalCacheAttributesEx.c)
 *     CcSetAdditionalCacheAttributes @ 0x14007CF10 (CcSetAdditionalCacheAttributes.c)
 *     CcSetFileSizesEx @ 0x14007CFC0 (CcSetFileSizesEx.c)
 *     CcWriteBehindInternal @ 0x14007D2F0 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWrite @ 0x14007D960 (CcNotifyOfMappedWrite.c)
 *     CcSetLogHandleForFileEx @ 0x14007EFF0 (CcSetLogHandleForFileEx.c)
 *     CcScheduleReadAheadEx @ 0x14008DFD0 (CcScheduleReadAheadEx.c)
 *     CcInitializeCacheMapEx @ 0x1400AC050 (CcInitializeCacheMapEx.c)
 *     CcDecrementOpenCount @ 0x1400ACFA0 (CcDecrementOpenCount.c)
 *     CcShouldLazyWriteCacheMap @ 0x1400D5EE4 (CcShouldLazyWriteCacheMap.c)
 *     CcWriteBehind @ 0x1400D619C (CcWriteBehind.c)
 *     CcPerformReadAhead @ 0x1400DDFC4 (CcPerformReadAhead.c)
 *     CcAsyncCopyRead @ 0x1400DFEC0 (CcAsyncCopyRead.c)
 *     CcGetPartitionFromFileObject @ 0x1400E0FD0 (CcGetPartitionFromFileObject.c)
 *     CcMdlWriteComplete2 @ 0x1400E1928 (CcMdlWriteComplete2.c)
 *     CcPrepareMdlWrite @ 0x1400E1A40 (CcPrepareMdlWrite.c)
 *     CcPurgeCacheSection @ 0x1400E7AA0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1400E87C0 (CcGetFlushedValidData.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140108BD0 (CcUpdateSharedCacheMapFlag.c)
 *     CcSetParallelFlushFile @ 0x140119080 (CcSetParallelFlushFile.c)
 *     CcMapDataForOverwrite @ 0x14011A764 (CcMapDataForOverwrite.c)
 *     CcDeleteMbcb @ 0x140125988 (CcDeleteMbcb.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140138CF8 (CcNotifyOfMappedWriteComplete.c)
 *     CcDeleteBcbs @ 0x14016049C (CcDeleteBcbs.c)
 *     CcUnpinRepinnedBcb @ 0x140269DD0 (CcUnpinRepinnedBcb.c)
 *     CcSetLogHandleForFile @ 0x14026A380 (CcSetLogHandleForFile.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AAAC (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x14026B0C0 (CcMdlWriteAbort.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C0B4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C278 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetPartition(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rdx
  ULONG_PTR *v9; // rdi
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  unsigned __int32 v17; // eax
  int v18; // eax
  struct _KPRCB *v19; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[66];
  if ( a1[21] )
  {
    v4 = *(_QWORD *)((a1[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140438BC0, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = SchedulerAssist[5];
          SchedulerAssist[5] = v14 + 1;
          if ( v14 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140438BC0, 0x1Fu) )
      {
        v13 = CurrentPrcb->SchedulerAssist;
        if ( v13 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v13[5] - 1;
            v13[5] = v15;
            if ( !v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v21 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140438BC0, CurrentIrql);
      }
      v8 = (unsigned int)dword_140438BC0;
      if ( (dword_140438BC0 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v8 & 0x40000000) == 0 )
          {
            v17 = _InterlockedCompareExchange(&dword_140438BC0, v8 | 0x40000000, v8);
            v16 = (_DWORD)v8 == v17;
            v8 = v17;
            if ( !v16 )
              continue;
          }
          KeYieldProcessorEx(&v21, v8, a3);
          v8 = (unsigned int)dword_140438BC0;
        }
        while ( (v8 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v4 )
      v9 = *(ULONG_PTR **)(qword_14043A748 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
    else
      v9 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140438BC0, retaddr);
    else
      dword_140438BC0 = 0;
    v10 = KeGetCurrentPrcb();
    v11 = v10->SchedulerAssist;
    if ( v11 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v18 = v11[5] - 1;
        v11[5] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    __writecr8(CurrentIrql);
    if ( v3 != *(_QWORD *)(v9[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v3;
}
