/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1401C53B0
 * Callers:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     MiCreateDecayPfn @ 0x1400294F4 (MiCreateDecayPfn.c)
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     EtwpAdjustTraceBuffers @ 0x14008F670 (EtwpAdjustTraceBuffers.c)
 *     MiAdjustCachedStacks @ 0x1400A7708 (MiAdjustCachedStacks.c)
 *     IopAllocateIrpPrivate @ 0x1400B92F0 (IopAllocateIrpPrivate.c)
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     MmCreateKernelStack @ 0x1400C9EF0 (MmCreateKernelStack.c)
 *     PfFileInfoNotify @ 0x1400D3DC0 (PfFileInfoNotify.c)
 *     PfFbLogEntryReserve @ 0x1400D54C4 (PfFbLogEntryReserve.c)
 *     CcAllocateWorkQueueEntry @ 0x1400D630C (CcAllocateWorkQueueEntry.c)
 *     IoAllocateMdl @ 0x1400DFCB0 (IoAllocateMdl.c)
 *     MiSlistGetFreePage @ 0x1400EB344 (MiSlistGetFreePage.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F0A94 (MiReclaimUnusedUltraMdlMaps.c)
 *     IoMakeAssociatedIrpPriv @ 0x1401078D4 (IoMakeAssociatedIrpPriv.c)
 *     MiGetPageSlist @ 0x14010CC80 (MiGetPageSlist.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011D894 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     PfTFullEventListAdd @ 0x140122908 (PfTFullEventListAdd.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14014B254 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiStoreWriteModifiedPages @ 0x14014CB80 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D7A4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiAllocatePoolPages @ 0x140162AF0 (MiAllocatePoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162C50 (MiAllocatePagedPoolPages.c)
 *     KeAllocateInterrupt @ 0x14016DA08 (KeAllocateInterrupt.c)
 *     sub_1401A1720 @ 0x1401A1720 (sub_1401A1720.c)
 *     RtlpDynamicLookasideAllocate @ 0x1401B7AA0 (RtlpDynamicLookasideAllocate.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     MiEmptyKernelStackCache @ 0x1402BB584 (MiEmptyKernelStackCache.c)
 *     MiFreeClonePool @ 0x1402C9EE8 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x1402CD9C0 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1402CDEEC (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x1402CEAC4 (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x1402D2E68 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1402ED4D8 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x14030F130 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x14030F160 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x140315B14 (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x1403170D4 (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x140317D58 (EtwpTraceLastBranchRecord.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
 *     CmpBounceContextStart @ 0x1405D2F60 (CmpBounceContextStart.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1405DC500 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObCreateObjectEx @ 0x1405E05E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     ObpCaptureObjectName @ 0x1405E2BF0 (ObpCaptureObjectName.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 *     CmpCallCallBacksEx @ 0x1405E5AE0 (CmpCallCallBacksEx.c)
 *     IopCreateFile @ 0x14060BAC0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14060D4D0 (FsRtlAllocateExtraCreateParameterList.c)
 *     ObReferenceObjectByNameEx @ 0x14061145C (ObReferenceObjectByNameEx.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 *     IopAllocRealFileObject @ 0x14063BB00 (IopAllocRealFileObject.c)
 *     NtQueryValueKey @ 0x140640360 (NtQueryValueKey.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068A8DC (IopAllocateMiniCompletionPacket.c)
 *     CmpExpandPathInfo @ 0x1406A4BC8 (CmpExpandPathInfo.c)
 *     WdipSemFastAllocate @ 0x140716B7C (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x140865C20 (PfFbBufferListCleanup.c)
 *     VeAllocatePoolWithTagPriority @ 0x140924F50 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140925A34 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x140937F38 (VfPoolCheckForLeaks.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  struct _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (struct _SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
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
