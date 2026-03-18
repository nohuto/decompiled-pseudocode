/*
 * XREFs of CcGetPartition @ 0x14007A700
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     CcGetVacbMiss @ 0x140076EB0 (CcGetVacbMiss.c)
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcAcquireByteRangeForWrite @ 0x1400780F0 (CcAcquireByteRangeForWrite.c)
 *     CcChargeDirtyPages @ 0x14007A114 (CcChargeDirtyPages.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     CcDeductDirtyPages @ 0x14007A5F4 (CcDeductDirtyPages.c)
 *     CcDecrementOpenCount @ 0x14007A66C (CcDecrementOpenCount.c)
 *     CcSetParallelFlushFile @ 0x14007A990 (CcSetParallelFlushFile.c)
 *     CcSetAdditionalCacheAttributes @ 0x14007AC70 (CcSetAdditionalCacheAttributes.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x14007AD20 (CcSetAdditionalCacheAttributesEx.c)
 *     CcAmILowPriorityWriter @ 0x14007AE88 (CcAmILowPriorityWriter.c)
 *     CcNotifyOfMappedWrite @ 0x14007BABC (CcNotifyOfMappedWrite.c)
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 *     CcWriteBehind @ 0x14007DB9C (CcWriteBehind.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     CcShouldLazyWriteCacheMap @ 0x14007F904 (CcShouldLazyWriteCacheMap.c)
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 *     CcScheduleReadAheadEx @ 0x140090340 (CcScheduleReadAheadEx.c)
 *     CcAsyncCopyRead @ 0x140090970 (CcAsyncCopyRead.c)
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     CcPurgeCacheSection @ 0x1400BF3E0 (CcPurgeCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x1400FE680 (CcMdlWriteComplete2.c)
 *     CcGetPartitionFromFileObject @ 0x1400FEB90 (CcGetPartitionFromFileObject.c)
 *     CcMapDataForOverwrite @ 0x14011D758 (CcMapDataForOverwrite.c)
 *     CcWaitForUninitializeCacheMap @ 0x14012387C (CcWaitForUninitializeCacheMap.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140124764 (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x140124870 (CcGetFlushedValidData.c)
 *     CcSetLogHandleForFileEx @ 0x140125EA0 (CcSetLogHandleForFileEx.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140126870 (CcUpdateSharedCacheMapFlag.c)
 *     CcDeleteMbcb @ 0x1401290E0 (CcDeleteMbcb.c)
 *     CcPrepareMdlWrite @ 0x140136D70 (CcPrepareMdlWrite.c)
 *     CcForceWriteThrough @ 0x1401370E0 (CcForceWriteThrough.c)
 *     CcDeleteBcbs @ 0x14016A918 (CcDeleteBcbs.c)
 *     CcUnpinRepinnedBcb @ 0x14027D570 (CcUnpinRepinnedBcb.c)
 *     CcSetLogHandleForFile @ 0x14027DB50 (CcSetLogHandleForFile.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x14027E030 (CcReferenceSharedCacheMapByVacb.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E314 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x14027E890 (CcMdlWriteAbort.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetPartition(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v6; // edx
  ULONG_PTR *v7; // rdi
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  signed __int32 v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1[66];
  if ( a1[21] )
  {
    v2 = *(_QWORD *)((a1[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464280, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = SchedulerAssist[5];
          SchedulerAssist[5] = v12 + 1;
          if ( v12 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140464280, 0x1Fu) )
      {
        v11 = CurrentPrcb->SchedulerAssist;
        if ( v11 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v13 = v11[5] - 1;
            v11[5] = v13;
            if ( !v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v19 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464280, CurrentIrql);
      }
      v6 = dword_140464280;
      while ( (v6 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v6 & 0x40000000) == 0 )
        {
          v15 = _InterlockedCompareExchange(&dword_140464280, v6 | 0x40000000, v6);
          v14 = v6 == v15;
          v6 = v15;
          if ( !v14 )
            continue;
        }
        KeYieldProcessorEx(&v19);
        v6 = dword_140464280;
      }
    }
    if ( *(_QWORD *)v2 )
      v7 = *(ULONG_PTR **)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v2 + 60LL) & 0x3FF));
    else
      v7 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464280, retaddr);
    else
      dword_140464280 = 0;
    v8 = KeGetCurrentPrcb();
    v9 = v8->SchedulerAssist;
    if ( v9 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v16 = v9[5] - 1;
        v9[5] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    __writecr8(CurrentIrql);
    if ( v1 != *(_QWORD *)(v7[21] + 8) )
      KeBugCheckEx(0x34u, 0x12EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v1;
}
