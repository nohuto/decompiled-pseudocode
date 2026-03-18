/*
 * XREFs of MiReturnCommit @ 0x140059030
 * Callers:
 *     MiUnlockWsle @ 0x14001FE74 (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x140020F18 (MiUnlockPageTableCharges.c)
 *     MiReturnExcessPoolCommit @ 0x140023500 (MiReturnExcessPoolCommit.c)
 *     MiDeleteKernelStack @ 0x140024240 (MiDeleteKernelStack.c)
 *     MiUnlockMdlWritePages @ 0x140024D30 (MiUnlockMdlWritePages.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1400549A0 (MiCheckProtoPtePageState.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiReleaseNonPagedResources @ 0x14008EDAC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14008F414 (MiAcquireNonPagedResources.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiGetPageTablePages @ 0x140096860 (MiGetPageTablePages.c)
 *     MiObtainSystemCharges @ 0x1400973CC (MiObtainSystemCharges.c)
 *     MmCreateKernelStack @ 0x1400A3B60 (MmCreateKernelStack.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400B2260 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiUnlockCodePage @ 0x1400B9BA0 (MiUnlockCodePage.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiWriteCompletePfn @ 0x1400BDF90 (MiWriteCompletePfn.c)
 *     MiDeleteSegmentPages @ 0x1400BF0E4 (MiDeleteSegmentPages.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400BF904 (MiReleaseWriteInProgressCharges.c)
 *     MiChargeForLockedPage @ 0x1400CABD8 (MiChargeForLockedPage.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmReleaseResourceCharge @ 0x1400D7B04 (MmReleaseResourceCharge.c)
 *     MiFreePageFileHashPfns @ 0x1400DA914 (MiFreePageFileHashPfns.c)
 *     MiAllocatePagesForMdl @ 0x1400DCB14 (MiAllocatePagesForMdl.c)
 *     MiObtainMdlCharges @ 0x1400DD124 (MiObtainMdlCharges.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     MiObtainPoolCharges @ 0x1400DE368 (MiObtainPoolCharges.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiFreeContiguousPages @ 0x1400F4FD4 (MiFreeContiguousPages.c)
 *     MmFreePoolMemory @ 0x14010DBAC (MmFreePoolMemory.c)
 *     MiReturnPoolCharges @ 0x14011072C (MiReturnPoolCharges.c)
 *     MiDeleteSystemPageTableTail @ 0x140125B10 (MiDeleteSystemPageTableTail.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 *     MiDeletePerSessionProtos @ 0x140138E9C (MiDeletePerSessionProtos.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 *     MiGetFileHashPage @ 0x140168BB8 (MiGetFileHashPage.c)
 *     MiDeleteSessionPdes @ 0x140168D80 (MiDeleteSessionPdes.c)
 *     MiSessionUpdateImageCharges @ 0x14017AC50 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiCleanupPageTablePages @ 0x140186C2C (MiCleanupPageTablePages.c)
 *     MiStoreChargeReservedPages @ 0x1401889E4 (MiStoreChargeReservedPages.c)
 *     MiDeleteBootRange @ 0x14018B138 (MiDeleteBootRange.c)
 *     MiReturnSplitPageCharges @ 0x14019D6B4 (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x1402BBEB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC064 (MiReleaseOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD610 (MiAttemptPageFileReductionApc.c)
 *     MiFreeSlabEntry @ 0x1402DBAB8 (MiFreeSlabEntry.c)
 *     MiGetSubsectionCharges @ 0x1402DE728 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 *     MiCreateLargePfnList @ 0x1402DEF48 (MiCreateLargePfnList.c)
 *     MiFreeLargePageCharges @ 0x1402DF478 (MiFreeLargePageCharges.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x1402E36E4 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402E4C2C (MiReferenceCloneProto.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6290 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402E6438 (MiReturnCrossPartitionCombineCharges.c)
 *     MiRebuildLargePage @ 0x1402E8A58 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402EA698 (MiInsertPartitionPages.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 *     MiRemoveVadCharges @ 0x140607890 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1406083A0 (MiDecommitRegion.c)
 *     MmDeleteProcessAddressSpace @ 0x140644438 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x1406445A0 (MiDeleteVadBitmap.c)
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MiCreateImageFileMap @ 0x140645C84 (MiCreateImageFileMap.c)
 *     MiChargeSegmentCommit @ 0x140648780 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 *     MiChargeSystemImageCommitment @ 0x140712814 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 *     MiDereferenceSessionFinal @ 0x140728ECC (MiDereferenceSessionFinal.c)
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 *     MiReturnSystemImageCommitment @ 0x140748960 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x14074E424 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 *     MiGetLargePagesForSystemMapping @ 0x14088B1F8 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x14088C710 (MiDeletePagingFiles.c)
 *     MiDeleteAweInfoPages @ 0x140895ED0 (MiDeleteAweInfoPages.c)
 *     MiFreeBootDriverPages @ 0x1409EFA54 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x140193404 (MiSyncCommitSignals.c)
 */

unsigned __int64 __fastcall MiReturnCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedCommit; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rtt

  result = *(_QWORD *)(a1 + 7232);
  v3 = a2;
  if ( !result )
    goto LABEL_2;
  while ( 1 )
  {
    v9 = a2;
    if ( a2 > result )
      v9 = result;
    v10 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7232), result - v9, result);
    if ( v10 == result )
      break;
    if ( !result )
      goto LABEL_2;
  }
  v3 = a2 - v9;
  if ( a2 != v9 )
  {
LABEL_2:
    if ( (ULONG_PTR *)a1 == &MiSystemPartition
      && (CurrentPrcb = KeGetCurrentPrcb(),
          _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
          CachedCommit = CurrentPrcb->CachedCommit,
          v3 + CachedCommit <= 0x100) )
    {
      while ( 1 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                                 CachedCommit + v3,
                                 CachedCommit);
        if ( (int)result == CachedCommit )
          break;
        CachedCommit = (int)result;
        if ( (int)result + v3 > 0x100 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8424), -(__int64)v3);
      v7 = *(_QWORD *)(a1 + 7200);
      if ( v6 >= v7 && v6 - v3 < v7 )
        return MiSyncCommitSignals(a1, 0LL);
      v8 = *(_QWORD *)(a1 + 7192);
      result = v6 - v3;
      if ( v6 >= v8 && result < v8 )
        return MiSyncCommitSignals(a1, 0LL);
    }
  }
  return result;
}
