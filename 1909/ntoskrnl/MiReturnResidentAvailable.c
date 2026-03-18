/*
 * XREFs of MiReturnResidentAvailable @ 0x1400CEF50
 * Callers:
 *     MiUnlockPageTableCharges @ 0x140020F18 (MiUnlockPageTableCharges.c)
 *     MiDeleteKernelStack @ 0x140024240 (MiDeleteKernelStack.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiReleaseNonPagedResources @ 0x14008EDAC (MiReleaseNonPagedResources.c)
 *     MmCreateKernelStack @ 0x1400A3B60 (MmCreateKernelStack.c)
 *     MiUnlockCodePage @ 0x1400B9BA0 (MiUnlockCodePage.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiDeleteSegmentPages @ 0x1400BF0E4 (MiDeleteSegmentPages.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400BF904 (MiReleaseWriteInProgressCharges.c)
 *     MiChargePartitionResidentAvailable @ 0x1400CA9C8 (MiChargePartitionResidentAvailable.c)
 *     MiChargeForWriteInProgressPage @ 0x1400CAB48 (MiChargeForWriteInProgressPage.c)
 *     MiLockPageTablePage @ 0x1400CD620 (MiLockPageTablePage.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmReleaseResourceCharge @ 0x1400D7B04 (MmReleaseResourceCharge.c)
 *     MiFreePageFileHashPfns @ 0x1400DA914 (MiFreePageFileHashPfns.c)
 *     MiAllocatePagesForMdl @ 0x1400DCB14 (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiFreeContiguousPages @ 0x1400F4FD4 (MiFreeContiguousPages.c)
 *     MiReturnPoolCharges @ 0x14011072C (MiReturnPoolCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011C180 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReturnSystemCharges @ 0x140125BB4 (MiReturnSystemCharges.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012DF0C (MmAdjustWorkingSetSizeEx.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 *     MmGrowKernelStackEx @ 0x140136780 (MmGrowKernelStackEx.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14016470C (SmAcquireReleaseResAvailForRead.c)
 *     MiGetFileHashPage @ 0x140168BB8 (MiGetFileHashPage.c)
 *     MiDeleteBootRange @ 0x14018B138 (MiDeleteBootRange.c)
 *     MiEnableNewPfns @ 0x1402BD6D0 (MiEnableNewPfns.c)
 *     MiFreeSlabEntry @ 0x1402DBAB8 (MiFreeSlabEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 *     MiCreateLargePfnList @ 0x1402DEF48 (MiCreateLargePfnList.c)
 *     MiFreeLargePageCharges @ 0x1402DF478 (MiFreeLargePageCharges.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402E414C (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402E4D74 (MiReturnCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6290 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402E6438 (MiReturnCrossPartitionCombineCharges.c)
 *     MiRebuildLargePage @ 0x1402E8A58 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     MiRemoveVadCharges @ 0x140607890 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MmDeleteProcessAddressSpace @ 0x140644438 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140712814 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 *     MiDereferenceSessionFinal @ 0x140728ECC (MiDereferenceSessionFinal.c)
 *     MiReturnSystemImageCommitment @ 0x140748960 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x14074E424 (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x14088A9A0 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x14088BDF0 (MiChargeLargeProtoSubsection.c)
 *     MiDeleteAweInfoPages @ 0x140895ED0 (MiDeleteAweInfoPages.c)
 *     MiFreeBootDriverPages @ 0x1409EFA54 (MiFreeBootDriverPages.c)
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
  _InterlockedExchangeAdd64(&qword_14046A180, v2);
}
