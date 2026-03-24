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
 *     MmCheckCachedPageStates @ 0x1400B02B0 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x1400B45E0 (MiCopyOnWrite.c)
 *     MmCreateKernelStack @ 0x1400C9F10 (MmCreateKernelStack.c)
 *     MiReleaseNonPagedResources @ 0x1400E18E8 (MiReleaseNonPagedResources.c)
 *     MmReleaseResourceCharge @ 0x1400E3DD8 (MmReleaseResourceCharge.c)
 *     MiFreePageFileHashPfns @ 0x1400F04F8 (MiFreePageFileHashPfns.c)
 *     MiObtainPoolCharges @ 0x1401097E4 (MiObtainPoolCharges.c)
 *     MiDeleteSystemPageTableTail @ 0x140120730 (MiDeleteSystemPageTableTail.c)
 *     MiFreeContiguousPages @ 0x1401230F4 (MiFreeContiguousPages.c)
 *     MiReturnFaultCharges @ 0x140134854 (MiReturnFaultCharges.c)
 *     MiDeletePerSessionProtos @ 0x140136FA4 (MiDeletePerSessionProtos.c)
 *     MiAcquireNonPagedResources @ 0x14013DA2C (MiAcquireNonPagedResources.c)
 *     MiMapPageFileHash @ 0x14014FCD8 (MiMapPageFileHash.c)
 *     MiGetFileHashPage @ 0x14015173C (MiGetFileHashPage.c)
 *     MiDeleteSessionPdes @ 0x140158D60 (MiDeleteSessionPdes.c)
 *     MiExpandPagedPool @ 0x1401641EC (MiExpandPagedPool.c)
 *     MiSessionUpdateImageCharges @ 0x1401733A8 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14017602C (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x14017F724 (MiStoreChargeReservedPages.c)
 *     MiDeleteBootRange @ 0x140181100 (MiDeleteBootRange.c)
 *     MiReturnSplitPageCharges @ 0x1401927D4 (MiReturnSplitPageCharges.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4DC4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4F74 (MiReleaseOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x1402AA7EC (MiSetPagesModified.c)
 *     MmAllocateSpecialPool @ 0x1402ACB64 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1402AD178 (MmFreeSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7460 (MiAttemptPageFileReductionApc.c)
 *     MiFreeSlabEntry @ 0x1402C2328 (MiFreeSlabEntry.c)
 *     MiGetSubsectionCharges @ 0x1402C4A94 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4CB4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFreeLargePages @ 0x1402C55CC (MiFreeLargePages.c)
 *     MiIdealClusterPage @ 0x1402C6C14 (MiIdealClusterPage.c)
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9630 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x1402CA118 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402CAA70 (MiReferenceCloneProto.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402CBF14 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402CC0F0 (MiReturnCrossPartitionCombineCharges.c)
 *     MiRebuildLargePage @ 0x1402CE3E4 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402D1BA4 (MiInsertPartitionPages.c)
 *     MiDecommitRegion @ 0x1405EC220 (MiDecommitRegion.c)
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1405F2998 (MiReturnFullProcessCommitment.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140608CFC (MiDeleteVadBitmap.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MmRotatePhysicalView @ 0x14066B910 (MmRotatePhysicalView.c)
 *     MiChargeSystemImageCommitment @ 0x1406831FC (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x1406C781C (MiFreeInitializationCode.c)
 *     MiAllocatePerSessionProtos @ 0x1406C91F0 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406D1898 (MmCreateProcessAddressSpace.c)
 *     MiDereferenceSessionFinal @ 0x1406E05B8 (MiDereferenceSessionFinal.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E0900 (MiDeleteLeakedSessionPool.c)
 *     MiReturnSystemImageCommitment @ 0x14070F33C (MiReturnSystemImageCommitment.c)
 *     MiSessionCreate @ 0x140715008 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140715C68 (MiSessionCreateInternal.c)
 *     MiMarkBootGuardPage @ 0x140729A6C (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x14074BFB8 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x14084D54C (MiRemovePhysicalMemory.c)
 *     MiDeleteAweInfoPages @ 0x14084FD38 (MiDeleteAweInfoPages.c)
 *     MiGetLargePagesForSystemMapping @ 0x140851F70 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x140853200 (MiDeletePagingFiles.c)
 *     MiMapUserLargePages @ 0x14085D558 (MiMapUserLargePages.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B7C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x140187FEC (MiSyncCommitSignals.c)
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
