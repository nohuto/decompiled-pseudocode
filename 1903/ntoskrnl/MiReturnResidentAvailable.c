/*
 * XREFs of MiReturnResidentAvailable @ 0x140091BF0
 * Callers:
 *     MiUnlockPageTableCharges @ 0x140020B28 (MiUnlockPageTableCharges.c)
 *     MiDeleteKernelStack @ 0x140023E50 (MiDeleteKernelStack.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiChargePartitionResidentAvailable @ 0x14008D9F0 (MiChargePartitionResidentAvailable.c)
 *     MiLockPageTablePage @ 0x140090030 (MiLockPageTablePage.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForWriteInProgressPage @ 0x1400A7440 (MiChargeForWriteInProgressPage.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiReleaseNonPagedResources @ 0x1400AD49C (MiReleaseNonPagedResources.c)
 *     MmCreateKernelStack @ 0x1400C3CE0 (MmCreateKernelStack.c)
 *     MiUnlockCodePage @ 0x1400D9D20 (MiUnlockCodePage.c)
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiDeleteSegmentPages @ 0x1400DF264 (MiDeleteSegmentPages.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400DFA84 (MiReleaseWriteInProgressCharges.c)
 *     MiAllocatePagesForMdl @ 0x1400EF404 (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 *     MiFreePageFileHashPfns @ 0x1400F23D4 (MiFreePageFileHashPfns.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmReleaseResourceCharge @ 0x140107C28 (MmReleaseResourceCharge.c)
 *     MiReturnPoolCharges @ 0x14011103C (MiReturnPoolCharges.c)
 *     MiFreeContiguousPages @ 0x140116EB4 (MiFreeContiguousPages.c)
 *     MiReturnSystemCharges @ 0x140125544 (MiReturnSystemCharges.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     MiReturnFaultCharges @ 0x140135A54 (MiReturnFaultCharges.c)
 *     MmGrowKernelStackEx @ 0x140135DE0 (MmGrowKernelStackEx.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiMapPageFileHash @ 0x14014D0CC (MiMapPageFileHash.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140164CBC (SmAcquireReleaseResAvailForRead.c)
 *     MiGetFileHashPage @ 0x140169168 (MiGetFileHashPage.c)
 *     MiDeleteBootRange @ 0x14018A7A8 (MiDeleteBootRange.c)
 *     MiEnableNewPfns @ 0x1402BD970 (MiEnableNewPfns.c)
 *     MiFreeSlabEntry @ 0x1402DBD58 (MiFreeSlabEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     MiCreateLargePfnList @ 0x1402DF1E8 (MiCreateLargePfnList.c)
 *     MiFreeLargePageCharges @ 0x1402DF718 (MiFreeLargePageCharges.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402E43EC (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402E5014 (MiReturnCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6530 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402E66D8 (MiReturnCrossPartitionCombineCharges.c)
 *     MiRebuildLargePage @ 0x1402E8CF8 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MiRemoveVadCharges @ 0x140605D80 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MmDeleteProcessAddressSpace @ 0x1406709CC (MmDeleteProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140710A34 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     MiDereferenceSessionFinal @ 0x140727B5C (MiDereferenceSessionFinal.c)
 *     MiReturnSystemImageCommitment @ 0x140746A60 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x14074D994 (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x14088B180 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x14088C5D0 (MiChargeLargeProtoSubsection.c)
 *     MiDeleteAweInfoPages @ 0x1408966B0 (MiDeleteAweInfoPages.c)
 *     MiFreeBootDriverPages @ 0x1409EFB3C (MiFreeBootDriverPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnResidentAvailable(unsigned __int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v2; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v4; // zf
  signed __int32 v5; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = a1;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    if ( a1 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( a1 >= 0x80000 )
          break;
        v5 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
               a1 + CachedResidentAvailable,
               CachedResidentAvailable);
        v4 = (_DWORD)CachedResidentAvailable == v5;
        LODWORD(CachedResidentAvailable) = v5;
        if ( v4 )
          return;
      }
      while ( v5 != -1 && a1 + v5 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v2 = (int)CachedResidentAvailable - 192 + a1;
    }
  }
  _InterlockedExchangeAdd64(&qword_14046A440, v2);
}
