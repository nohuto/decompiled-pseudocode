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
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400769C4 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     CcApplyLowIoPriorityToThread @ 0x14007E024 (CcApplyLowIoPriorityToThread.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140088CC8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140090C58 (MiUnlockDynamicMemoryExclusive.c)
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiManageSubsectionView @ 0x1400ADBC0 (MiManageSubsectionView.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BED70 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     PfFileInfoNotify @ 0x1400D3E60 (PfFileInfoNotify.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400D935C (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockLoaderEntry @ 0x1400DBBAC (MiUnlockLoaderEntry.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3F08 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1400E4BF4 (SmpKeyedStoreSetVaRanges.c)
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 *     MiUnlockDriverMappings @ 0x1400F6028 (MiUnlockDriverMappings.c)
 *     MiExpandPtes @ 0x1400F6494 (MiExpandPtes.c)
 *     MiObtainSessionVa @ 0x1400F7324 (MiObtainSessionVa.c)
 *     MmResourcesAvailable @ 0x1400FD980 (MmResourcesAvailable.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107FD0 (CcBoostLowPriorityWorkerThread.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14010E1B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14010E4C0 (RtlpHpLfhBucketGetSubsegment.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14011CF54 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D214 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E350 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SepDeleteSessionLowboxEntries @ 0x14012A130 (SepDeleteSessionLowboxEntries.c)
 *     PspUnlockQuotaExpansion @ 0x14012AA98 (PspUnlockQuotaExpansion.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14012C530 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpHeapExtendContext @ 0x1401363A8 (RtlpHpHeapExtendContext.c)
 *     MiReleaseSessionVa @ 0x140138184 (MiReleaseSessionVa.c)
 *     MiDereferenceExtendInfo @ 0x140138A28 (MiDereferenceExtendInfo.c)
 *     RtlpHpFixedVsAllocate @ 0x140139570 (RtlpHpFixedVsAllocate.c)
 *     PspUnlockProcessExclusive @ 0x140139B10 (PspUnlockProcessExclusive.c)
 *     RtlpHpFixedVsFree @ 0x140141CE0 (RtlpHpFixedVsFree.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1401461EC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140147E6C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140148D30 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14014BC54 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14014C08C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014DC88 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014E3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140160874 (ExQueryHandleExceptionsPermanency.c)
 *     MiFreePagedPoolPages @ 0x140161B50 (MiFreePagedPoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 *     KeAbCrossThreadRelease @ 0x140164F40 (KeAbCrossThreadRelease.c)
 *     ExpSaAllocatorFree @ 0x1401672E8 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1401673B4 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorAllocate @ 0x140167908 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140167C28 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     PfTSetTraceWorkerPriority @ 0x140175B9C (PfTSetTraceWorkerPriority.c)
 *     MiFreeUnusedPfnPages @ 0x140184120 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x1401938D8 (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x140193C48 (PspUnlockQuotaListExclusive.c)
 *     MiUpControlAreaRefs @ 0x1402A3640 (MiUpControlAreaRefs.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8680 (MiSplitReducedCommitClonePage.c)
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8C60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCommitPageTableRangesForVad @ 0x1402BA34C (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiRemovePlaceholderVad @ 0x1402C50AC (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402CB8D0 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBC80 (MmOutSwapVirtualAddresses.c)
 *     MiClearPartitionPageBitMap @ 0x1402D0CB8 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 *     RtlpHpSegLockRelease @ 0x1402FCD8C (RtlpHpSegLockRelease.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1402FCFF0 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402FD508 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD8EC (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402FDDF0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030201C (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140302268 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140307CE8 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1403080CC (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140308634 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpDisableCompression @ 0x140315398 (EtwpDisableCompression.c)
 *     ExDisableHandleTracing @ 0x140319DA8 (ExDisableHandleTracing.c)
 *     ExpSvmDereferenceDevice @ 0x14031E3E0 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F7AC (ExpSaPageGroupDescriptorFree.c)
 *     MiInitializeMirroring @ 0x1409BDF88 (MiInitializeMirroring.c)
 * Callees:
 *     KiAbTryDecrementIoWaiterCounts @ 0x1400049A0 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x140004A30 (RtlRbReplaceNode.c)
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC5E0 (ExpAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node, __int64 a2)
{
  unsigned int ParentValue; // ebp
  unsigned __int64 v3; // rsi
  __int64 v5; // rax
  volatile LONG *v6; // r14
  _RTL_RB_TREE *v7; // r15
  unsigned __int8 CurrentIrql; // cl
  int i; // r12d
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  _RTL_BALANCED_NODE *v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v18; // eax
  _RTL_RB_TREE *v19; // rcx
  _RTL_BALANCED_NODE *v20; // rdi
  __int16 v21; // cx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  char *v30; // rcx
  __int64 result; // rax
  __int64 v32; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v33; // [rsp+28h] [rbp-50h]
  _QWORD v34[3]; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v36; // [rsp+80h] [rbp+8h]

  ParentValue = Node[1].ParentValue;
  v3 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v5 = ((v3 >> 4) & 0x3FF) << 6;
  v6 = (volatile LONG *)((char *)&KiAbTreeArray + v5 + 16);
  v7 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v5);
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  for ( i = BYTE3(Node[1].Left) & 1; ; i = 1 )
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
    Min = v7->Min;
    Root = (unsigned __int64)v7->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v7;
      else
        Root = 0LL;
    }
    v12 = (unsigned __int8)Min & 1;
    while ( Root )
    {
      v13 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v13 < v3 )
        goto LABEL_21;
      if ( v13 > v3 )
        goto LABEL_19;
      v14 = *(_DWORD *)(Root + 40);
      if ( v14 == ParentValue )
        break;
      if ( v14 < ParentValue )
LABEL_21:
        v15 = *(_RTL_BALANCED_NODE **)(Root + 8);
      else
LABEL_19:
        v15 = *(_RTL_BALANCED_NODE **)Root;
      if ( v12 && v15 )
        Root ^= (unsigned __int64)v15;
      else
        Root = (unsigned __int64)v15;
    }
    v32 = 0LL;
    v33 = (volatile signed __int64 *)(Root + 80);
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
      KiAcquireQueuedSpinLockInstrumented(&v32, Root + 80);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(Root + 80), (__int64)&v32) )
    {
      KxWaitForLockOwnerShip(&v32);
    }
    if ( (PRTL_BALANCED_NODE)Root != Node )
    {
      if ( i )
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v6);
      HIBYTE(Node[1].Right) &= ~0x80u;
      if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
      {
        KiAbTryDecrementIoWaiterCounts(Node, Root);
        v29 = 64LL;
      }
      else
      {
        v29 = 48LL;
      }
      RtlRbRemoveNode((PRTL_RB_TREE)(Root + v29), Node);
      KxReleaseQueuedSpinLock(&v32);
      goto LABEL_68;
    }
    if ( i )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v6);
    KxReleaseQueuedSpinLock(&v32);
  }
  if ( *(_QWORD *)(Root + 64) )
  {
    v19 = (_RTL_RB_TREE *)(Root + 64);
  }
  else
  {
    v19 = (_RTL_RB_TREE *)(Root + 48);
    if ( !*(_QWORD *)(Root + 48) )
      goto LABEL_43;
  }
  if ( v19 )
  {
    v20 = v19->Root;
    RtlRbRemoveNode(v19, v19->Root);
    RtlRbReplaceNode(v7, Root, v20);
    v34[1] = (char *)v20 + 80;
    v34[0] = 0LL;
    KxAcquireQueuedSpinLock(v34);
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    v21 = *((_WORD *)&v20[3].1 + 1);
    v20[2].0 = *($2D7F0EA1242D86D41E5BD48709F721DA *)(Root + 48);
    *(_OWORD *)&v20[2].0 = *(_OWORD *)(Root + 64);
    *((_WORD *)&v20[3].1 + 1) ^= (*(_WORD *)(Root + 90) ^ v21) & 0x1FE;
    *((_WORD *)&v20[3].1 + 1) = *(_WORD *)(Root + 90) ^ (*((_WORD *)&v20[3].1 + 1) ^ *(_WORD *)(Root + 90)) & 0x1FF;
    KiAbTryDecrementIoWaiterCounts(Root, v20);
    BYTE3(v20[1].Left) |= 1u;
    KxReleaseQueuedSpinLock(v34);
    goto LABEL_51;
  }
LABEL_43:
  RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)Root);
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
  KiAbTryDecrementIoWaiterCounts(Root, Root);
LABEL_51:
  *(_BYTE *)(Root + 39) &= ~0x80u;
  *(_BYTE *)(Root + 27) &= ~1u;
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
  v30 = (char *)Node - 16 * LOBYTE(Node[1].Children[0]);
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v30[793];
  else
    _InterlockedExchangeAdd8(v30 + 1423, 0xFFu);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36 < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  result = v36;
  __writecr8(v36);
  return result;
}
