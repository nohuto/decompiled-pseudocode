/*
 * XREFs of CcGetPartition @ 0x14007A340
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x14000E330 (CcUninitializeCacheMap.c)
 *     CcGetVacbMiss @ 0x140076C40 (CcGetVacbMiss.c)
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     CcAcquireByteRangeForWrite @ 0x140077D30 (CcAcquireByteRangeForWrite.c)
 *     CcChargeDirtyPages @ 0x140079D54 (CcChargeDirtyPages.c)
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     CcDeductDirtyPages @ 0x14007A234 (CcDeductDirtyPages.c)
 *     CcDecrementOpenCount @ 0x14007A2AC (CcDecrementOpenCount.c)
 *     CcSetParallelFlushFile @ 0x14007A5D0 (CcSetParallelFlushFile.c)
 *     CcSetAdditionalCacheAttributes @ 0x14007A8B0 (CcSetAdditionalCacheAttributes.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x14007A960 (CcSetAdditionalCacheAttributesEx.c)
 *     CcAmILowPriorityWriter @ 0x14007AA88 (CcAmILowPriorityWriter.c)
 *     CcNotifyOfMappedWrite @ 0x14007B6BC (CcNotifyOfMappedWrite.c)
 *     CcSetFileSizesEx @ 0x14007D170 (CcSetFileSizesEx.c)
 *     CcWriteBehind @ 0x14007D79C (CcWriteBehind.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 *     CcShouldLazyWriteCacheMap @ 0x14007F504 (CcShouldLazyWriteCacheMap.c)
 *     CcDeleteSharedCacheMap @ 0x14007F890 (CcDeleteSharedCacheMap.c)
 *     CcPerformReadAhead @ 0x1400A1A38 (CcPerformReadAhead.c)
 *     CcAsyncCopyRead @ 0x1400A9670 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1400A9CA0 (CcScheduleReadAheadEx.c)
 *     CcPurgeCacheSection @ 0x1400DF560 (CcPurgeCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x1400FC4F0 (CcMdlWriteComplete2.c)
 *     CcGetPartitionFromFileObject @ 0x1400FCA00 (CcGetPartitionFromFileObject.c)
 *     CcMapDataForOverwrite @ 0x14011DF68 (CcMapDataForOverwrite.c)
 *     CcWaitForUninitializeCacheMap @ 0x14012276C (CcWaitForUninitializeCacheMap.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140123ADC (CcNotifyOfMappedWriteComplete.c)
 *     CcGetFlushedValidData @ 0x140123BF0 (CcGetFlushedValidData.c)
 *     CcSetLogHandleForFileEx @ 0x140125830 (CcSetLogHandleForFileEx.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140126200 (CcUpdateSharedCacheMapFlag.c)
 *     CcDeleteMbcb @ 0x1401286C0 (CcDeleteMbcb.c)
 *     CcPrepareMdlWrite @ 0x1401363D0 (CcPrepareMdlWrite.c)
 *     CcForceWriteThrough @ 0x140136740 (CcForceWriteThrough.c)
 *     CcDeleteBcbs @ 0x14016A228 (CcDeleteBcbs.c)
 *     CcUnpinRepinnedBcb @ 0x14027D810 (CcUnpinRepinnedBcb.c)
 *     CcSetLogHandleForFile @ 0x14027DDF0 (CcSetLogHandleForFile.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x14027E2D0 (CcReferenceSharedCacheMapByVacb.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x14027EB30 (CcMdlWriteAbort.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464580, CurrentIrql);
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
      if ( _interlockedbittestandset(&dword_140464580, 0x1Fu) )
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
        v19 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464580, CurrentIrql);
      }
      v6 = dword_140464580;
      while ( (v6 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v6 & 0x40000000) == 0 )
        {
          v15 = _InterlockedCompareExchange(&dword_140464580, v6 | 0x40000000, v6);
          v14 = v6 == v15;
          v6 = v15;
          if ( !v14 )
            continue;
        }
        KeYieldProcessorEx(&v19);
        v6 = dword_140464580;
      }
    }
    if ( *(_QWORD *)v2 )
      v7 = *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v2 + 60LL) & 0x3FF));
    else
      v7 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464580, retaddr);
    else
      dword_140464580 = 0;
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
