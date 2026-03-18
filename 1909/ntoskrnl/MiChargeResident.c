/*
 * XREFs of MiChargeResident @ 0x1400CACB0
 * Callers:
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiAcquireNonPagedResources @ 0x14008F414 (MiAcquireNonPagedResources.c)
 *     MiObtainSystemCharges @ 0x1400973CC (MiObtainSystemCharges.c)
 *     MmCreateKernelStack @ 0x1400A3B60 (MmCreateKernelStack.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiChargeForWriteInProgressPage @ 0x1400CAB48 (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x1400CABD8 (MiChargeForLockedPage.c)
 *     MmChargeResources @ 0x1400D7A78 (MmChargeResources.c)
 *     MiObtainMdlCharges @ 0x1400DD124 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x1400DE368 (MiObtainPoolCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011C180 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012DF0C (MmAdjustWorkingSetSizeEx.c)
 *     MmGrowKernelStackEx @ 0x140136780 (MmGrowKernelStackEx.c)
 *     MiGetFileHashPage @ 0x140168BB8 (MiGetFileHashPage.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14017D794 (MmStoreChargeResidentAvailableForRead.c)
 *     MiStoreChargeReservedPages @ 0x1401889E4 (MiStoreChargeReservedPages.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402BD698 (MiAcquireNonPagedResourcesForce.c)
 *     MiGetSubsectionCharges @ 0x1402DE728 (MiGetSubsectionCharges.c)
 *     MiCreateLargePfnList @ 0x1402DEF48 (MiCreateLargePfnList.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402E414C (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6290 (MiGetCrossPartitionCombineCharges.c)
 *     MiMakePageBad @ 0x1402EC1B8 (MiMakePageBad.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 *     MiConstructLoaderEntry @ 0x140711980 (MiConstructLoaderEntry.c)
 *     MiChargeSystemImageCommitment @ 0x140712814 (MiChargeSystemImageCommitment.c)
 *     MiInitializeSystemWorkingSetList @ 0x140741FC8 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x14075A3F0 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x14088BDF0 (MiChargeLargeProtoSubsection.c)
 *     MiInitializeGapFrames @ 0x1409F44A0 (MiInitializeGapFrames.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A15380 (MiInitializeBootLoadedDriverPfns.c)
 *     MiAllocateDummyPage @ 0x140A1B128 (MiAllocateDummyPage.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1400CA9C8 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 CachedResidentAvailable; // r10
  bool v5; // zf
  unsigned __int32 v6; // eax

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && (_DWORD)CachedResidentAvailable != -1 )
    {
      v6 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
             CachedResidentAvailable - a2,
             CachedResidentAvailable);
      v5 = (_DWORD)CachedResidentAvailable == v6;
      CachedResidentAvailable = v6;
      if ( v5 )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable((__int64)a1, a2, a3);
}
