/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1401CBA30
 * Callers:
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     IopFreeIrp @ 0x140043ED0 (IopFreeIrp.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005B9E0 (ExpWorkerFactoryCheckCreate.c)
 *     RtlpHpVsContextFree @ 0x140062F20 (RtlpHpVsContextFree.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     CcFreeWorkQueueEntry @ 0x14007E068 (CcFreeWorkQueueEntry.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     PfFileInfoNotify @ 0x140093D90 (PfFileInfoNotify.c)
 *     PfFbLogEntryReserve @ 0x140095794 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14009586C (PfFbLogEntryComplete.c)
 *     PfFbBufferListInsertInFree @ 0x140098178 (PfFbBufferListInsertInFree.c)
 *     PfpReturnAccessBuffer @ 0x140098294 (PfpReturnAccessBuffer.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     MmDeleteKernelStack @ 0x1400C4CB0 (MmDeleteKernelStack.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140105A50 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     MiQueuePageAccessLog @ 0x1401134B4 (MiQueuePageAccessLog.c)
 *     MiDecayPfnFullyInitialized @ 0x14011A440 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x14011A568 (MiDeleteParentDecayNode.c)
 *     PfTFullEventListAdd @ 0x140123A18 (PfTFullEventListAdd.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140149A74 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x140149F10 (MiStoreFreeWriteSupport.c)
 *     MiClearPageFileHash @ 0x140159440 (MiClearPageFileHash.c)
 *     KeFreeInterrupt @ 0x14017BAE8 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14017C218 (KeAllocateInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14017E4C0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14017E7C0 (VfPoolDelayFreeIfPossible.c)
 *     PfFbBufferListAllocate @ 0x140195E70 (PfFbBufferListAllocate.c)
 *     CmpFreeCallbackContext @ 0x14027F8CC (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x1402E3AF0 (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x1402E7F38 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x1402E8190 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x1402EBBF8 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402EC248 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x14030B890 (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14032C0DC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x14032CE6C (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14032CF00 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x14032D3E4 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x140334358 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x140334608 (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14033577C (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140335880 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x140335AD0 (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x140336884 (EtwpTraceLastBranchRecord.c)
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140598D50 (PopInvokeStateHandlerTargetProcessor.c)
 *     RtlpGetRegistryHandle @ 0x1405C3428 (RtlpGetRegistryHandle.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C6A90 (ObpFreeObjectNameBuffer.c)
 *     IopAllocRealFileObject @ 0x1405D8060 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0800 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDestroyBlob @ 0x1405E4880 (AlpcpDestroyBlob.c)
 *     CmpCreateKeyBody @ 0x1405EFC00 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x1405F7B50 (CmpCallCallBacksEx.c)
 *     CmpBounceContextCleanup @ 0x1405FE050 (CmpBounceContextCleanup.c)
 *     NtQueryKey @ 0x1405FF6B0 (NtQueryKey.c)
 *     IopFreeMiniCompletionPacket @ 0x1406029E0 (IopFreeMiniCompletionPacket.c)
 *     ObpFreeObject @ 0x140607450 (ObpFreeObject.c)
 *     IopCreateFile @ 0x1406171A0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140617E20 (FsRtlFreeExtraCreateParameter.c)
 *     ObDeleteCapturedInsertInfo @ 0x14063ACE0 (ObDeleteCapturedInsertInfo.c)
 *     EtwpWriteUserEvent @ 0x140643270 (EtwpWriteUserEvent.c)
 *     NtEnumerateKey @ 0x14064F940 (NtEnumerateKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406822C0 (IoCreateStreamFileObjectEx2.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 *     CmpFreeKeyControlBlock @ 0x14069B720 (CmpFreeKeyControlBlock.c)
 *     NtQueryAttributesFile @ 0x1406B1910 (NtQueryAttributesFile.c)
 *     CmpCleanupPathInfo @ 0x1406BD9F0 (CmpCleanupPathInfo.c)
 *     WdipSemFastFree @ 0x140716A34 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x14089F858 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x14089FC0C (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1408A0024 (ObpRefillWorkItemFreeList.c)
 *     VmAccessFault @ 0x1408ECEA0 (VmAccessFault.c)
 *     EtwpInitializeStackTracing @ 0x1408F38A8 (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x1408F3A0C (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x140900988 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140906EEC (EtwpReferenceLastBranchLookasideList.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1409728A8 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x140972AA4 (ViGrowPoolAllocation.c)
 *     MiInitializeDecayPfns @ 0x140A17614 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140A19458 (WheapInitializeEventing.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  _SLIST_HEADER v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v5.Alignment + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return Region;
}
