/*
 * XREFs of MiReturnResidentAvailable @ 0x140022D18
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiUnlockPageTableCharges @ 0x14001A320 (MiUnlockPageTableCharges.c)
 *     MiReleaseWriteInProgressCharges @ 0x140022CC4 (MiReleaseWriteInProgressCharges.c)
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiReturnPoolCharges @ 0x140023984 (MiReturnPoolCharges.c)
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiChargeForWriteInProgressPage @ 0x14002CEBC (MiChargeForWriteInProgressPage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiLockPageTablePage @ 0x1400403C0 (MiLockPageTablePage.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiDeleteKernelStack @ 0x14007A5B0 (MiDeleteKernelStack.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiDeleteSegmentPages @ 0x140094E38 (MiDeleteSegmentPages.c)
 *     MiFindContiguousPages @ 0x14009A110 (MiFindContiguousPages.c)
 *     MiUnlockCodePage @ 0x14009C770 (MiUnlockCodePage.c)
 *     MmCreateKernelStack @ 0x1400C9F10 (MmCreateKernelStack.c)
 *     MiReleaseNonPagedResources @ 0x1400E18E8 (MiReleaseNonPagedResources.c)
 *     MmReleaseResourceCharge @ 0x1400E3DD8 (MmReleaseResourceCharge.c)
 *     MiFreePageFileHashPfns @ 0x1400F04F8 (MiFreePageFileHashPfns.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E2E0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReturnSystemCharges @ 0x1401207D4 (MiReturnSystemCharges.c)
 *     MiFreeContiguousPages @ 0x1401230F4 (MiFreeContiguousPages.c)
 *     MmGrowKernelStackEx @ 0x140132ED0 (MmGrowKernelStackEx.c)
 *     MiReturnFaultCharges @ 0x140134854 (MiReturnFaultCharges.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C064 (MmAdjustWorkingSetSizeEx.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14014B20C (SmAcquireReleaseResAvailForRead.c)
 *     MiMapPageFileHash @ 0x14014FCD8 (MiMapPageFileHash.c)
 *     MiGetFileHashPage @ 0x14015173C (MiGetFileHashPage.c)
 *     MiDeleteBootRange @ 0x140181100 (MiDeleteBootRange.c)
 *     MiEnableNewPfns @ 0x1402A6228 (MiEnableNewPfns.c)
 *     MmAllocateSpecialPool @ 0x1402ACB64 (MmAllocateSpecialPool.c)
 *     MmFreeSpecialPool @ 0x1402AD178 (MmFreeSpecialPool.c)
 *     MiFreeSlabEntry @ 0x1402C2328 (MiFreeSlabEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4CB4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFreeLargePages @ 0x1402C55CC (MiFreeLargePages.c)
 *     MiIdealClusterPage @ 0x1402C6C14 (MiIdealClusterPage.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402CA0AC (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402CABB8 (MiReturnCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402CBF14 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402CC0F0 (MiReturnCrossPartitionCombineCharges.c)
 *     MiRebuildLargePage @ 0x1402CE3E4 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1405F1E60 (MiInsertVadCharges.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x1406831FC (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x1406C781C (MiFreeInitializationCode.c)
 *     MmCreateProcessAddressSpace @ 0x1406D1898 (MmCreateProcessAddressSpace.c)
 *     MiDereferenceSessionFinal @ 0x1406E05B8 (MiDereferenceSessionFinal.c)
 *     MiReturnSystemImageCommitment @ 0x14070F33C (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x140729A6C (MiMarkBootGuardPage.c)
 *     MmReturnChargesToLockPagedPool @ 0x14084F1F0 (MmReturnChargesToLockPagedPool.c)
 *     MiDeleteAweInfoPages @ 0x14084FD38 (MiDeleteAweInfoPages.c)
 *     MiChargeLargeProtoSubsection @ 0x1408528D4 (MiChargeLargeProtoSubsection.c)
 *     MiMapUserLargePages @ 0x14085D558 (MiMapUserLargePages.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B7C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnResidentAvailable(unsigned __int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 v2; // r9
  __int64 CachedResidentAvailable; // r8
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
  _InterlockedExchangeAdd64(&qword_14043E600, v2);
}
