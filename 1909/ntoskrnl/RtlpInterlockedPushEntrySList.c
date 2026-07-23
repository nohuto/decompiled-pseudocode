/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1401CC5B0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     IopFreeIrp @ 0x140043F70 (IopFreeIrp.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005BA80 (ExpWorkerFactoryCheckCreate.c)
 *     RtlpHpVsContextFree @ 0x140062FC0 (RtlpHpVsContextFree.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     CcFreeWorkQueueEntry @ 0x14007E468 (CcFreeWorkQueueEntry.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     MmDeleteKernelStack @ 0x1400A4B30 (MmDeleteKernelStack.c)
 *     MiFreeInPageSupportBlock @ 0x1400CEFD0 (MiFreeInPageSupportBlock.c)
 *     PfFileInfoNotify @ 0x1400D10B0 (PfFileInfoNotify.c)
 *     PfFbLogEntryReserve @ 0x1400D2AB4 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1400D2B8C (PfFbLogEntryComplete.c)
 *     PfFbBufferListInsertInFree @ 0x1400D48F4 (PfFbBufferListInsertInFree.c)
 *     PfpReturnAccessBuffer @ 0x1400D4A10 (PfpReturnAccessBuffer.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     MiDecayPfnFullyInitialized @ 0x1401184D0 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1401185F8 (MiDeleteParentDecayNode.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011BC90 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfTFullEventListAdd @ 0x140124408 (PfTFullEventListAdd.c)
 *     MiQueuePageAccessLog @ 0x14013AEF4 (MiQueuePageAccessLog.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14014A114 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x14014A5B0 (MiStoreFreeWriteSupport.c)
 *     MiClearPageFileHash @ 0x140159AE0 (MiClearPageFileHash.c)
 *     KeFreeInterrupt @ 0x14017C1D8 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14017C908 (KeAllocateInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14017EBB0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14017EEB0 (VfPoolDelayFreeIfPossible.c)
 *     PfFbBufferListAllocate @ 0x140196650 (PfFbBufferListAllocate.c)
 *     CmpFreeCallbackContext @ 0x14027F62C (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x1402E3850 (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x1402E7C98 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x1402E7EF0 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x1402EB958 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402EBFA8 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x14030B340 (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14032BB2C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x14032C8BC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14032C950 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x14032CE44 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x140333DB8 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x140334068 (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1403351DC (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1403352E0 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x140335530 (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x1403362E4 (EtwpTraceLastBranchRecord.c)
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140598D30 (PopInvokeStateHandlerTargetProcessor.c)
 *     RtlpGetRegistryHandle @ 0x1405C38F8 (RtlpGetRegistryHandle.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C6F90 (ObpFreeObjectNameBuffer.c)
 *     IopAllocRealFileObject @ 0x1405D8820 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0F10 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDestroyBlob @ 0x1405E5050 (AlpcpDestroyBlob.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     CmpBounceContextCleanup @ 0x1405FFA80 (CmpBounceContextCleanup.c)
 *     NtQueryKey @ 0x1406010E0 (NtQueryKey.c)
 *     IopFreeMiniCompletionPacket @ 0x1406044F0 (IopFreeMiniCompletionPacket.c)
 *     ObpFreeObject @ 0x140608F60 (ObpFreeObject.c)
 *     IopCreateFile @ 0x140618CB0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140619930 (FsRtlFreeExtraCreateParameter.c)
 *     ObDeleteCapturedInsertInfo @ 0x14063DD70 (ObDeleteCapturedInsertInfo.c)
 *     EtwpWriteUserEvent @ 0x140656DC0 (EtwpWriteUserEvent.c)
 *     NtEnumerateKey @ 0x140662B00 (NtEnumerateKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406A0820 (IoCreateStreamFileObjectEx2.c)
 *     NtQueryAttributesFile @ 0x1406B48B0 (NtQueryAttributesFile.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     CmpFreeKeyControlBlock @ 0x1406BA6D0 (CmpFreeKeyControlBlock.c)
 *     CmpCleanupPathInfo @ 0x1406BD180 (CmpCleanupPathInfo.c)
 *     WdipSemFastFree @ 0x140718824 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x14089F098 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x14089F44C (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x14089F864 (ObpRefillWorkItemFreeList.c)
 *     VmAccessFault @ 0x1408EC7B0 (VmAccessFault.c)
 *     EtwpInitializeStackTracing @ 0x1408F3218 (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x1408F337C (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x1409002E8 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1409068AC (EtwpReferenceLastBranchLookasideList.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1409728A8 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x140972AA4 (ViGrowPoolAllocation.c)
 *     MiInitializeDecayPfns @ 0x140A17AD4 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140A19918 (WheapInitializeEventing.c)
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
