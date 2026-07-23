/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1401C5570
 * Callers:
 *     MiDeleteParentDecayNode @ 0x140029354 (MiDeleteParentDecayNode.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDE0 (CcFreeWorkQueueEntry.c)
 *     MiQueuePageAccessLog @ 0x140088970 (MiQueuePageAccessLog.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     IopFreeIrp @ 0x1400B95E0 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     MmDeleteKernelStack @ 0x1400CA580 (MmDeleteKernelStack.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE2A0 (ExpWorkerFactoryCheckCreate.c)
 *     PfFileInfoNotify @ 0x1400D3E60 (PfFileInfoNotify.c)
 *     PfFbLogEntryComplete @ 0x1400D5420 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x1400D5564 (PfFbLogEntryReserve.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     PfFbBufferListInsertInFree @ 0x1400E2700 (PfFbBufferListInsertInFree.c)
 *     PfpReturnAccessBuffer @ 0x1400E281C (PfpReturnAccessBuffer.c)
 *     MiDecayPfnFullyInitialized @ 0x14011BDE0 (MiDecayPfnFullyInitialized.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011DE40 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfTFullEventListAdd @ 0x1401229F8 (PfTFullEventListAdd.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B3B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14014C7BC (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x14014CBE8 (MiStoreFreeWriteSupport.c)
 *     MiClearPageFileHash @ 0x140156988 (MiClearPageFileHash.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140161360 (MiInsertNonPagedPoolOnSlist.c)
 *     MiFreePagedPoolPages @ 0x140161B50 (MiFreePagedPoolPages.c)
 *     VfPoolDelayFreeIfPossible @ 0x14016C430 (VfPoolDelayFreeIfPossible.c)
 *     KeFreeInterrupt @ 0x14016D398 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14016DB28 (KeAllocateInterrupt.c)
 *     PfFbBufferListAllocate @ 0x14018C190 (PfFbBufferListAllocate.c)
 *     RtlInterlockedPushEntrySList @ 0x1401B6458 (RtlInterlockedPushEntrySList.c)
 *     RtlpDynamicLookasideFree @ 0x1401B7C90 (RtlpDynamicLookasideFree.c)
 *     CmpFreeCallbackContext @ 0x14026C0BC (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x1402C998C (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x1402CDF00 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x1402CE148 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x1402CED80 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402CF2C0 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x1402ED300 (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E6C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x14030F3BC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14030F450 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x14030F934 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x140315B54 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x140315E04 (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316F40 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140317040 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x14031728C (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x140318048 (EtwpTraceLastBranchRecord.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x14056A390 (PopInvokeStateHandlerTargetProcessor.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405A45A0 (IoCreateStreamFileObjectEx2.c)
 *     ObDeleteCapturedInsertInfo @ 0x1405B8BB0 (ObDeleteCapturedInsertInfo.c)
 *     RtlpGetRegistryHandle @ 0x1405C8774 (RtlpGetRegistryHandle.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C9FE4 (ObpFreeObjectNameBuffer.c)
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 *     CmpBounceContextCleanup @ 0x1405D4F34 (CmpBounceContextCleanup.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     IopFreeMiniCompletionPacket @ 0x1405EAC20 (IopFreeMiniCompletionPacket.c)
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060DEF0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060DFB0 (FsRtlFreeExtraCreateParameter.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     AlpcpDestroyBlob @ 0x140619CB0 (AlpcpDestroyBlob.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     AlpcpProcessSynchronousRequest @ 0x140634A50 (AlpcpProcessSynchronousRequest.c)
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     CmpCleanupPathInfo @ 0x140641F10 (CmpCleanupPathInfo.c)
 *     ObpFreeObject @ 0x140646F60 (ObpFreeObject.c)
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
 *     WdipSemFastFree @ 0x140717DD0 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x140864060 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x140864414 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x140864824 (ObpRefillWorkItemFreeList.c)
 *     EtwpInitializeStackTracing @ 0x1408B81C4 (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x1408B8328 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x1408C4A28 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1408CACD8 (EtwpReferenceLastBranchLookasideList.c)
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x140926838 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x140926A34 (ViGrowPoolAllocation.c)
 *     MiInitializeDecayPfns @ 0x1409D4598 (MiInitializeDecayPfns.c)
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
