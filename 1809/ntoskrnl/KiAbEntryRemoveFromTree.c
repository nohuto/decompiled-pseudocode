/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x140004530
 * Callers:
 *     KeAbEntryFree @ 0x1400044D0 (KeAbEntryFree.c)
 *     KeAbPreWait @ 0x140005930 (KeAbPreWait.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14000780C (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeFree @ 0x140007D8C (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrCtxFree @ 0x140008234 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrCommitComplete @ 0x140009B00 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpCSparseBitmapUnlock @ 0x14000A7A0 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpSegPageRangeShrink @ 0x14000ACF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14000B82C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14000C958 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpVaMgrAlloc @ 0x14000D358 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14000DAB0 (RtlpHpSegMgrVaCtxAlloc.c)
 *     SmpKeyedStoreEntryGet @ 0x140011FDC (SmpKeyedStoreEntryGet.c)
 *     CcAmILowPriorityWriter @ 0x140021B3C (CcAmILowPriorityWriter.c)
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14004E880 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x14004EA00 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiCommitExistingVad @ 0x140071470 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiUnlockAndDereferenceVad @ 0x140074550 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400769D4 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiAddViewsForSection @ 0x140077170 (MiAddViewsForSection.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078294 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400784B0 (MiUnlockVad.c)
 *     CcApplyLowIoPriorityToThread @ 0x14007E034 (CcApplyLowIoPriorityToThread.c)
 *     MiSplitPrivatePage @ 0x140083B70 (MiSplitPrivatePage.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140088CD8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140090D18 (MiUnlockDynamicMemoryExclusive.c)
 *     MiCreatePrototypePtes @ 0x140095B30 (MiCreatePrototypePtes.c)
 *     MiManageSubsectionView @ 0x1400ADC80 (MiManageSubsectionView.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BAEA0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BEE30 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     PfFileInfoNotify @ 0x1400D3DE0 (PfFileInfoNotify.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400D92DC (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB410 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockLoaderEntry @ 0x1400DBB2C (MiUnlockLoaderEntry.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3E88 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1400E4B74 (SmpKeyedStoreSetVaRanges.c)
 *     MmOutSwapWorkingSet @ 0x1400E5128 (MmOutSwapWorkingSet.c)
 *     MiUnlockDriverMappings @ 0x1400F5FA8 (MiUnlockDriverMappings.c)
 *     MiExpandPtes @ 0x1400F6414 (MiExpandPtes.c)
 *     MiObtainSessionVa @ 0x1400F72A4 (MiObtainSessionVa.c)
 *     MmResourcesAvailable @ 0x1400FD900 (MmResourcesAvailable.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107F50 (CcBoostLowPriorityWorkerThread.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14010E130 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14010E440 (RtlpHpLfhBucketGetSubsegment.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14011CEE4 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D1A4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E2E0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SepDeleteSessionLowboxEntries @ 0x14012A060 (SepDeleteSessionLowboxEntries.c)
 *     PspUnlockQuotaExpansion @ 0x14012A9C8 (PspUnlockQuotaExpansion.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14012C460 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpHeapExtendContext @ 0x1401362A8 (RtlpHpHeapExtendContext.c)
 *     MiReleaseSessionVa @ 0x140138084 (MiReleaseSessionVa.c)
 *     MiDereferenceExtendInfo @ 0x140138928 (MiDereferenceExtendInfo.c)
 *     RtlpHpFixedVsAllocate @ 0x140139470 (RtlpHpFixedVsAllocate.c)
 *     PspUnlockProcessExclusive @ 0x140139A10 (PspUnlockProcessExclusive.c)
 *     RtlpHpFixedVsFree @ 0x140141BE0 (RtlpHpFixedVsFree.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1401460EC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140147D6C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140148C30 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14014BB54 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14014BF8C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014DB88 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E2BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140160774 (ExQueryHandleExceptionsPermanency.c)
 *     MiFreePagedPoolPages @ 0x140161A50 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162C70 (MiAllocatePagedPoolPages.c)
 *     KeAbCrossThreadRelease @ 0x140164E40 (KeAbCrossThreadRelease.c)
 *     ExpSaAllocatorFree @ 0x1401671E8 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1401672B4 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorAllocate @ 0x140167808 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140167B28 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167DA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     PfTSetTraceWorkerPriority @ 0x140175A9C (PfTSetTraceWorkerPriority.c)
 *     MiFreeUnusedPfnPages @ 0x140183FE0 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x140193798 (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x140193B08 (PspUnlockQuotaListExclusive.c)
 *     MiUpControlAreaRefs @ 0x1402A3450 (MiUpControlAreaRefs.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8490 (MiSplitReducedCommitClonePage.c)
 *     MiSetPagesModified @ 0x1402AA7EC (MiSetPagesModified.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8A70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCommitPageTableRangesForVad @ 0x1402BA15C (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD1D4 (MiDecommitHardwareEnclavePages.c)
 *     MiRemovePlaceholderVad @ 0x1402C4EBC (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402CB6E0 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBA90 (MmOutSwapVirtualAddresses.c)
 *     MiClearPartitionPageBitMap @ 0x1402D0AC8 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402D1BA4 (MiInsertPartitionPages.c)
 *     RtlpHpSegLockRelease @ 0x1402FCB9C (RtlpHpSegLockRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1402FCE00 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402FD318 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD6FC (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402FDC00 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140301E2C (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140302078 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140307AF8 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140307EDC (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140308444 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpDisableCompression @ 0x1403151A8 (EtwpDisableCompression.c)
 *     ExDisableHandleTracing @ 0x140319BB8 (ExDisableHandleTracing.c)
 *     ExpSvmDereferenceDevice @ 0x14031E1F0 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F5BC (ExpSaPageGroupDescriptorFree.c)
 *     MiInitializeMirroring @ 0x1409BCF88 (MiInitializeMirroring.c)
 * Callees:
 *     KiAbTryDecrementIoWaiterCounts @ 0x1400049A0 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x140004A30 (RtlRbReplaceNode.c)
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF20 (KxWaitForLockOwnerShip.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D150 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC9B0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC6A0 (ExpAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     RtlRbRemoveNode @ 0x1400BDDF0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290A00 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290AB8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C0B4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C278 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rsi
  __int64 v5; // rax
  volatile LONG *v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int8 CurrentIrql; // cl
  int i; // r12d
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rdi
  __int16 v21; // cx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 result; // rax
  __int64 v32; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v33; // [rsp+28h] [rbp-50h]
  _QWORD v34[3]; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v36; // [rsp+80h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 32) & 0x7FFFFFFFFFFFFFFCLL;
  v5 = ((v3 >> 4) & 0x3FF) << 6;
  v6 = (volatile LONG *)((char *)&KiAbTreeArray + v5 + 16);
  v7 = (unsigned __int64)&KiAbTreeArray + v5;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  for ( i = *(_BYTE *)(a1 + 27) & 1; ; i = 1 )
  {
    if ( i )
    {
      LOBYTE(a2) = -1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6, a2);
      else
        ExpAcquireSpinLockExclusive(v6, a2);
    }
    else
    {
      ExAcquireSpinLockSharedAtDpcLevel(v6);
    }
    v10 = *(_QWORD *)(v7 + 8);
    v11 = *(_QWORD *)v7;
    if ( (v10 & 1) != 0 )
    {
      if ( v11 )
        v11 ^= v7;
      else
        v11 = 0LL;
    }
    v12 = v10 & 1;
    while ( v11 )
    {
      v13 = *(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v13 < v3 )
        goto LABEL_21;
      if ( v13 > v3 )
        goto LABEL_19;
      v14 = *(_DWORD *)(v11 + 40);
      if ( v14 == v2 )
        break;
      if ( v14 < v2 )
LABEL_21:
        v15 = *(_QWORD *)(v11 + 8);
      else
LABEL_19:
        v15 = *(_QWORD *)v11;
      if ( v12 && v15 )
        v11 ^= v15;
      else
        v11 = v15;
    }
    v32 = 0LL;
    v33 = (volatile signed __int64 *)(v11 + 80);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[5];
        SchedulerAssist[5] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick();
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v32, v11 + 80);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v11 + 80), (__int64)&v32) )
    {
      KxWaitForLockOwnerShip(&v32);
    }
    if ( v11 != a1 )
    {
      if ( i )
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v6);
      *(_BYTE *)(a1 + 39) &= ~0x80u;
      if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
      {
        KiAbTryDecrementIoWaiterCounts(a1, v11);
        v29 = 64LL;
      }
      else
      {
        v29 = 48LL;
      }
      RtlRbRemoveNode(v11 + v29, a1);
      KxReleaseQueuedSpinLock(&v32);
      goto LABEL_68;
    }
    if ( i )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v6);
    KxReleaseQueuedSpinLock(&v32);
  }
  if ( *(_QWORD *)(v11 + 64) )
  {
    v19 = (_QWORD *)(v11 + 64);
  }
  else
  {
    v19 = (_QWORD *)(v11 + 48);
    if ( !*(_QWORD *)(v11 + 48) )
      goto LABEL_43;
  }
  if ( v19 )
  {
    v20 = *v19;
    RtlRbRemoveNode(v19, *v19);
    RtlRbReplaceNode(v7, v11, v20);
    v34[1] = v20 + 80;
    v34[0] = 0LL;
    KxAcquireQueuedSpinLock(v34);
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    v21 = *(_WORD *)(v20 + 90);
    *(_OWORD *)(v20 + 48) = *(_OWORD *)(v11 + 48);
    *(_OWORD *)(v20 + 64) = *(_OWORD *)(v11 + 64);
    *(_WORD *)(v20 + 90) ^= (*(_WORD *)(v11 + 90) ^ v21) & 0x1FE;
    *(_WORD *)(v20 + 90) = *(_WORD *)(v11 + 90) ^ (*(_WORD *)(v20 + 90) ^ *(_WORD *)(v11 + 90)) & 0x1FF;
    KiAbTryDecrementIoWaiterCounts(v11, v20);
    *(_BYTE *)(v20 + 27) |= 1u;
    KxReleaseQueuedSpinLock(v34);
    goto LABEL_51;
  }
LABEL_43:
  RtlRbRemoveNode(v7, v11);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  else
    *v6 = 0;
  v22 = KeGetCurrentPrcb();
  v23 = v22->SchedulerAssist;
  if ( v23 )
  {
    if ( v22->NestingLevel <= 1u )
    {
      v24 = v23[5] - 1;
      v23[5] = v24;
      if ( !v24 )
        KiRemoveSystemWorkPriorityKick();
    }
  }
  KiAbTryDecrementIoWaiterCounts(v11, v11);
LABEL_51:
  *(_BYTE *)(v11 + 39) &= ~0x80u;
  *(_BYTE *)(v11 + 27) &= ~1u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v32);
    v25 = v32;
    if ( !v32 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v33, 0LL, (signed __int64)&v32) == &v32 )
        goto LABEL_57;
      v25 = KxWaitForLockChainValid(&v32);
    }
    v32 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v25 + 8), 1uLL);
    goto LABEL_57;
  }
  KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
LABEL_57:
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      v28 = v27[5] - 1;
      v27[5] = v28;
      if ( !v28 )
        KiRemoveSystemWorkPriorityKick();
    }
  }
LABEL_68:
  v30 = a1 - 16LL * *(unsigned __int8 *)(a1 + 24);
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
    --*(_BYTE *)(v30 + 793);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v30 + 1423), 0xFFu);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36 < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  result = v36;
  __writecr8(v36);
  return result;
}
