/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1401CC570
 * Callers:
 *     MiAdjustCachedStacks @ 0x140004EF0 (MiAdjustCachedStacks.c)
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     IopAllocateIrpPrivate @ 0x1400375B0 (IopAllocateIrpPrivate.c)
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     CcAllocateWorkQueueEntry @ 0x14007E504 (CcAllocateWorkQueueEntry.c)
 *     MiGetInPageSupportBlock @ 0x140093A1C (MiGetInPageSupportBlock.c)
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     MmCreateKernelStack @ 0x1400A3B60 (MmCreateKernelStack.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400CA44C (ExAllocateFromNPagedLookasideList.c)
 *     PfFileInfoNotify @ 0x1400D10B0 (PfFileInfoNotify.c)
 *     PfFbLogEntryReserve @ 0x1400D2AB4 (PfFbLogEntryReserve.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400DA428 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiSlistGetFreePage @ 0x140116E5C (MiSlistGetFreePage.c)
 *     IoMakeAssociatedIrpPriv @ 0x14011A4A4 (IoMakeAssociatedIrpPriv.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011B748 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MiCreateDecayPfn @ 0x14011CC34 (MiCreateDecayPfn.c)
 *     PfTFullEventListAdd @ 0x140124408 (PfTFullEventListAdd.c)
 *     EtwpAdjustTraceBuffers @ 0x1401301E0 (EtwpAdjustTraceBuffers.c)
 *     MiStoreWriteModifiedPages @ 0x14014A668 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B900 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1401644DC (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     KeAllocateInterrupt @ 0x14017C908 (KeAllocateInterrupt.c)
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     MiEmptyKernelStackCache @ 0x1402D16F0 (MiEmptyKernelStackCache.c)
 *     MiFreeClonePool @ 0x1402E4088 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x1402E7A3C (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1402E7F84 (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x1402EB98C (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x1402ED34C (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x14030B808 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x14032C920 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x14032C950 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x140334068 (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x140335668 (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x1403362E4 (EtwpTraceLastBranchRecord.c)
 *     RtlpGetRegistryHandle @ 0x1405C38F8 (RtlpGetRegistryHandle.c)
 *     IopAllocRealFileObject @ 0x1405D8820 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     ObpCaptureObjectName @ 0x1405F5600 (ObpCaptureObjectName.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 *     CmpBounceContextStart @ 0x1406002B0 (CmpBounceContextStart.c)
 *     IopCreateFile @ 0x140618CB0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140619E40 (FsRtlAllocateExtraCreateParameterList.c)
 *     CmpAllocateKeyControlBlock @ 0x140667ED4 (CmpAllocateKeyControlBlock.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068178C (IopAllocateMiniCompletionPacket.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140698800 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     CmpExpandPathInfo @ 0x1406C7C38 (CmpExpandPathInfo.c)
 *     WdipSemFastAllocate @ 0x140718850 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x1408A1968 (PfFbBufferListCleanup.c)
 *     VmAccessFault @ 0x1408EC7B0 (VmAccessFault.c)
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140972AA4 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x14097D44C (VfPoolCheckForLeaks.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)ListHead, 0LL);
  return v1;
}
