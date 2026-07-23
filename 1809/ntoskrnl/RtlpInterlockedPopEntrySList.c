/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1401C5530
 * Callers:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     MiCreateDecayPfn @ 0x1400294F4 (MiCreateDecayPfn.c)
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     EtwpAdjustTraceBuffers @ 0x14008F590 (EtwpAdjustTraceBuffers.c)
 *     MiAdjustCachedStacks @ 0x1400A7668 (MiAdjustCachedStacks.c)
 *     IopAllocateIrpPrivate @ 0x1400B9250 (IopAllocateIrpPrivate.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     PfFileInfoNotify @ 0x1400D3E60 (PfFileInfoNotify.c)
 *     PfFbLogEntryReserve @ 0x1400D5564 (PfFbLogEntryReserve.c)
 *     CcAllocateWorkQueueEntry @ 0x1400D63AC (CcAllocateWorkQueueEntry.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     MiSlistGetFreePage @ 0x1400EB3E4 (MiSlistGetFreePage.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F0B34 (MiReclaimUnusedUltraMdlMaps.c)
 *     IoMakeAssociatedIrpPriv @ 0x140107974 (IoMakeAssociatedIrpPriv.c)
 *     MiGetPageSlist @ 0x14010CD20 (MiGetPageSlist.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011D924 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     PfTFullEventListAdd @ 0x1401229F8 (PfTFullEventListAdd.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14014B374 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D8C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiAllocatePoolPages @ 0x140162C10 (MiAllocatePoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 *     KeAllocateInterrupt @ 0x14016DB28 (KeAllocateInterrupt.c)
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     RtlpDynamicLookasideAllocate @ 0x1401B7C20 (RtlpDynamicLookasideAllocate.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     MiEmptyKernelStackCache @ 0x1402BB874 (MiEmptyKernelStackCache.c)
 *     MiFreeClonePool @ 0x1402CA1D8 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x1402CDCB0 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1402CE1DC (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x1402CEDB4 (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x1402D3158 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1402ED7C8 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x14030F420 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x14030F450 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x140315E04 (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x1403173C4 (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x140318048 (EtwpTraceLastBranchRecord.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlpGetRegistryHandle @ 0x1405C8774 (RtlpGetRegistryHandle.c)
 *     CmpBounceContextStart @ 0x1405D3F60 (CmpBounceContextStart.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1405DD500 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     ObpCaptureObjectName @ 0x1405E3BF0 (ObpCaptureObjectName.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14060E4D0 (FsRtlAllocateExtraCreateParameterList.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068BA7C (IopAllocateMiniCompletionPacket.c)
 *     CmpExpandPathInfo @ 0x1406A5E48 (CmpExpandPathInfo.c)
 *     WdipSemFastAllocate @ 0x140717DFC (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x140866E60 (PfFbBufferListCleanup.c)
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140926A34 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x140938F38 (VfPoolCheckForLeaks.c)
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
