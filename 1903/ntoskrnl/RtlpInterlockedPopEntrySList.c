/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1401CB9F0
 * Callers:
 *     MiAdjustCachedStacks @ 0x140004E60 (MiAdjustCachedStacks.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     IopAllocateIrpPrivate @ 0x1400371B0 (IopAllocateIrpPrivate.c)
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     CcAllocateWorkQueueEntry @ 0x14007E104 (CcAllocateWorkQueueEntry.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     PfFileInfoNotify @ 0x140093D90 (PfFileInfoNotify.c)
 *     PfFbLogEntryReserve @ 0x140095794 (PfFbLogEntryReserve.c)
 *     MiGetInPageSupportBlock @ 0x1400A61EC (MiGetInPageSupportBlock.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     MmCreateKernelStack @ 0x1400C3CE0 (MmCreateKernelStack.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F1EE8 (MiReclaimUnusedUltraMdlMaps.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140105508 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MiSlistGetFreePage @ 0x1401157EC (MiSlistGetFreePage.c)
 *     IoMakeAssociatedIrpPriv @ 0x14011BF14 (IoMakeAssociatedIrpPriv.c)
 *     MiCreateDecayPfn @ 0x14011C714 (MiCreateDecayPfn.c)
 *     PfTFullEventListAdd @ 0x140123A18 (PfTFullEventListAdd.c)
 *     EtwpAdjustTraceBuffers @ 0x14012F760 (EtwpAdjustTraceBuffers.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B260 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140164A8C (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     KeAllocateInterrupt @ 0x14017C218 (KeAllocateInterrupt.c)
 *     sub_1401AC160 @ 0x1401AC160 (sub_1401AC160.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     MiEmptyKernelStackCache @ 0x1402D1990 (MiEmptyKernelStackCache.c)
 *     MiFreeClonePool @ 0x1402E4328 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x1402E7CDC (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1402E8224 (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x1402EBC2C (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x1402ED5EC (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x14030BD58 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x14032CED0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x14032CF00 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x140334608 (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x140335C08 (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x140336884 (EtwpTraceLastBranchRecord.c)
 *     RtlpGetRegistryHandle @ 0x1405C3428 (RtlpGetRegistryHandle.c)
 *     IopAllocRealFileObject @ 0x1405D8060 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     CmpCreateKeyBody @ 0x1405EFC00 (CmpCreateKeyBody.c)
 *     ObpCaptureObjectName @ 0x1405F4680 (ObpCaptureObjectName.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x1405F7B50 (CmpCallCallBacksEx.c)
 *     CmpBounceContextStart @ 0x1405FE880 (CmpBounceContextStart.c)
 *     IopCreateFile @ 0x1406171A0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140618330 (FsRtlAllocateExtraCreateParameterList.c)
 *     CmpAllocateKeyControlBlock @ 0x140654DD4 (CmpAllocateKeyControlBlock.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14066B930 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068E21C (IopAllocateMiniCompletionPacket.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 *     CmpExpandPathInfo @ 0x1406C93E8 (CmpExpandPathInfo.c)
 *     WdipSemFastAllocate @ 0x140716A60 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x1408A2128 (PfFbBufferListCleanup.c)
 *     VmAccessFault @ 0x1408ECEA0 (VmAccessFault.c)
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
