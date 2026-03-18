/*
 * XREFs of MiReturnCommit @ 0x140065D40
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiObtainMdlCharges @ 0x140011B44 (MiObtainMdlCharges.c)
 *     MiUnlockWsle @ 0x14001A18C (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x14001A320 (MiUnlockPageTableCharges.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x140022CC4 (MiReleaseWriteInProgressCharges.c)
 *     MiReturnPoolCharges @ 0x140023984 (MiReturnPoolCharges.c)
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiObtainSystemCharges @ 0x140026DC8 (MiObtainSystemCharges.c)
 *     MiGetPageTablePages @ 0x140026E90 (MiGetPageTablePages.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiCleanupPageTablePages @ 0x1400288B8 (MiCleanupPageTablePages.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiChargeForLockedPage @ 0x14002DE70 (MiChargeForLockedPage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiDeleteKernelStack @ 0x14007A5B0 (MiDeleteKernelStack.c)
 *     MmFreePoolMemory @ 0x14007BD58 (MmFreePoolMemory.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     MiDeleteSegmentPages @ 0x140094E38 (MiDeleteSegmentPages.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MiFindContiguousPages @ 0x14009A110 (MiFindContiguousPages.c)
 *     MiUnlockCodePage @ 0x14009C770 (MiUnlockCodePage.c)
 *     MmCheckCachedPageStates @ 0x1400B0290 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x1400B45C0 (MiCopyOnWrite.c)
 *     MmCreateKernelStack @ 0x1400C9EF0 (MmCreateKernelStack.c)
 *     MiReleaseNonPagedResources @ 0x1400E18C8 (MiReleaseNonPagedResources.c)
 *     MmReleaseResourceCharge @ 0x1400E3DB8 (MmReleaseResourceCharge.c)
 *     MiFreePageFileHashPfns @ 0x1400F04D8 (MiFreePageFileHashPfns.c)
 *     MiObtainPoolCharges @ 0x1401097C4 (MiObtainPoolCharges.c)
 *     MiDeleteSystemPageTableTail @ 0x140120710 (MiDeleteSystemPageTableTail.c)
 *     MiFreeContiguousPages @ 0x1401230D4 (MiFreeContiguousPages.c)
 *     MiReturnFaultCharges @ 0x140134834 (MiReturnFaultCharges.c)
 *     MiDeletePerSessionProtos @ 0x140136F84 (MiDeletePerSessionProtos.c)
 *     MiAcquireNonPagedResources @ 0x14013DA0C (MiAcquireNonPagedResources.c)
 *     MiMapPageFileHash @ 0x14014FCB8 (MiMapPageFileHash.c)
 *     MiGetFileHashPage @ 0x14015171C (MiGetFileHashPage.c)
 *     MiDeleteSessionPdes @ 0x140158D40 (MiDeleteSessionPdes.c)
 *     MiExpandPagedPool @ 0x1401641CC (MiExpandPagedPool.c)
 *     MiSessionUpdateImageCharges @ 0x140173388 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14017600C (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x14017F704 (MiStoreChargeReservedPages.c)
 *     MiDeleteBootRange @ 0x1401810E0 (MiDeleteBootRange.c)
 *     MiReturnSplitPageCharges @ 0x1401927B4 (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4CC4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4E74 (MiReleaseOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 *     MmAllocateSpecialPool @ 0x1402ACA64 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1402AD078 (MmFreeSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7360 (MiAttemptPageFileReductionApc.c)
 *     MiFreeSlabEntry @ 0x1402C2228 (MiFreeSlabEntry.c)
 *     MiGetSubsectionCharges @ 0x1402C4994 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4BB4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFreeLargePages @ 0x1402C54CC (MiFreeLargePages.c)
 *     MiIdealClusterPage @ 0x1402C6B14 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9530 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x1402CA018 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402CA970 (MiReferenceCloneProto.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402CBE14 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402CBFF0 (MiReturnCrossPartitionCombineCharges.c)
 *     MiRebuildLargePage @ 0x1402CE2E4 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x1402D0EAC (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402D1AA4 (MiInsertPartitionPages.c)
 *     MiDecommitRegion @ 0x1405EC220 (MiDecommitRegion.c)
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1405F2998 (MiReturnFullProcessCommitment.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140608CFC (MiDeleteVadBitmap.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MmRotatePhysicalView @ 0x14066B930 (MmRotatePhysicalView.c)
 *     MiChargeSystemImageCommitment @ 0x14068321C (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x1406C783C (MiFreeInitializationCode.c)
 *     MiAllocatePerSessionProtos @ 0x1406C9210 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406D18B8 (MmCreateProcessAddressSpace.c)
 *     MiDereferenceSessionFinal @ 0x1406E05D8 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E0920 (MiDeleteLeakedSessionPool.c)
 *     MiReturnSystemImageCommitment @ 0x14070F35C (MiReturnSystemImageCommitment.c)
 *     MiSessionCreate @ 0x140715028 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140715C88 (MiSessionCreateInternal.c)
 *     MiMarkBootGuardPage @ 0x140729A8C (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x14084D56C (MiRemovePhysicalMemory.c)
 *     MiDeleteAweInfoPages @ 0x14084FD58 (MiDeleteAweInfoPages.c)
 *     MiGetLargePagesForSystemMapping @ 0x140851F90 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x140853220 (MiDeletePagingFiles.c)
 *     MiMapUserLargePages @ 0x14085D578 (MiMapUserLargePages.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B7C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x140187FCC (MiSyncCommitSignals.c)
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

  result = *(_QWORD *)(a1 + 6464);
  v3 = a2;
  if ( !result )
    goto LABEL_2;
  while ( 1 )
  {
    v9 = a2;
    if ( a2 > result )
      v9 = result;
    v10 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6464), result - v9, result);
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
      v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7656), -(__int64)v3);
      v7 = *(_QWORD *)(a1 + 6432);
      if ( v6 >= v7 && v6 - v3 < v7 )
        return MiSyncCommitSignals(a1, 0LL);
      v8 = *(_QWORD *)(a1 + 6424);
      result = v6 - v3;
      if ( v6 >= v8 && result < v8 )
        return MiSyncCommitSignals(a1, 0LL);
    }
  }
  return result;
}
