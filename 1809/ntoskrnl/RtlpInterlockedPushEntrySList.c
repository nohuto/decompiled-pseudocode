/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1401C53F0
 * Callers:
 *     MiDeleteParentDecayNode @ 0x140029354 (MiDeleteParentDecayNode.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDF0 (CcFreeWorkQueueEntry.c)
 *     MiQueuePageAccessLog @ 0x140088980 (MiQueuePageAccessLog.c)
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     IopFreeIrp @ 0x1400B9680 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     MmDeleteKernelStack @ 0x1400CA480 (MmDeleteKernelStack.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE200 (ExpWorkerFactoryCheckCreate.c)
 *     PfFileInfoNotify @ 0x1400D3DC0 (PfFileInfoNotify.c)
 *     PfFbLogEntryComplete @ 0x1400D5380 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x1400D54C4 (PfFbLogEntryReserve.c)
 *     IoFreeMdl @ 0x1400E0B40 (IoFreeMdl.c)
 *     PfFbBufferListInsertInFree @ 0x1400E2660 (PfFbBufferListInsertInFree.c)
 *     PfpReturnAccessBuffer @ 0x1400E277C (PfpReturnAccessBuffer.c)
 *     MiDecayPfnFullyInitialized @ 0x14011BD50 (MiDecayPfnFullyInitialized.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011DDB0 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfTFullEventListAdd @ 0x140122908 (PfTFullEventListAdd.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B290 (MiAllocatePfnRepurposeLogDispatch.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14014C69C (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x14014CAC8 (MiStoreFreeWriteSupport.c)
 *     MiClearPageFileHash @ 0x140156868 (MiClearPageFileHash.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140161240 (MiInsertNonPagedPoolOnSlist.c)
 *     MiFreePagedPoolPages @ 0x140161A30 (MiFreePagedPoolPages.c)
 *     VfPoolDelayFreeIfPossible @ 0x14016C310 (VfPoolDelayFreeIfPossible.c)
 *     KeFreeInterrupt @ 0x14016D278 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14016DA08 (KeAllocateInterrupt.c)
 *     PfFbBufferListAllocate @ 0x14018C030 (PfFbBufferListAllocate.c)
 *     RtlInterlockedPushEntrySList @ 0x1401B62D0 (RtlInterlockedPushEntrySList.c)
 *     RtlpDynamicLookasideFree @ 0x1401B7B10 (RtlpDynamicLookasideFree.c)
 *     CmpFreeCallbackContext @ 0x14026BDCC (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x1402C969C (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x1402CDC10 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x1402CDE58 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x1402CEA90 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402CEFD0 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x1402ED010 (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E3D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x14030F0CC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14030F160 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x14030F644 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x140315864 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x140315B14 (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316C50 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140316D50 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x140316F9C (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x140317D58 (EtwpTraceLastBranchRecord.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140569390 (PopInvokeStateHandlerTargetProcessor.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405A35A0 (IoCreateStreamFileObjectEx2.c)
 *     ObDeleteCapturedInsertInfo @ 0x1405B7BB0 (ObDeleteCapturedInsertInfo.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C8FE4 (ObpFreeObjectNameBuffer.c)
 *     NtEnumerateKey @ 0x1405D22F0 (NtEnumerateKey.c)
 *     CmpBounceContextCleanup @ 0x1405D3F34 (CmpBounceContextCleanup.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     ObCreateObjectEx @ 0x1405E05E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x1405E5AE0 (CmpCallCallBacksEx.c)
 *     IopFreeMiniCompletionPacket @ 0x1405E9C20 (IopFreeMiniCompletionPacket.c)
 *     IopCreateFile @ 0x14060BAC0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060CEF0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060CFB0 (FsRtlFreeExtraCreateParameter.c)
 *     ObReferenceObjectByNameEx @ 0x14061145C (ObReferenceObjectByNameEx.c)
 *     AlpcpDestroyBlob @ 0x140618CB0 (AlpcpDestroyBlob.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 *     AlpcpProcessSynchronousRequest @ 0x140633A30 (AlpcpProcessSynchronousRequest.c)
 *     IopAllocRealFileObject @ 0x14063BB00 (IopAllocRealFileObject.c)
 *     NtQueryKey @ 0x14063FBB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140640360 (NtQueryValueKey.c)
 *     CmpCleanupPathInfo @ 0x140640F10 (CmpCleanupPathInfo.c)
 *     ObpFreeObject @ 0x140645F60 (ObpFreeObject.c)
 *     EtwpWriteUserEvent @ 0x1406473F0 (EtwpWriteUserEvent.c)
 *     WdipSemFastFree @ 0x140716B50 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x140862E20 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x1408631D4 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1408635E4 (ObpRefillWorkItemFreeList.c)
 *     EtwpInitializeStackTracing @ 0x1408B6F24 (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x1408B7088 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x1408C3788 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1408C9A38 (EtwpReferenceLastBranchLookasideList.c)
 *     VeAllocatePoolWithTagPriority @ 0x140924F50 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x140925838 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x140925A34 (ViGrowPoolAllocation.c)
 *     MiInitializeDecayPfns @ 0x1409D3598 (MiInitializeDecayPfns.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  union _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  union _SLIST_HEADER v7; // rt0
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
