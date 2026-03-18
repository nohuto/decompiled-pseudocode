/*
 * XREFs of MiChargeResident @ 0x1400A75A8
 * Callers:
 *     MiObtainFaultCharges @ 0x140053790 (MiObtainFaultCharges.c)
 *     MiObtainSystemCharges @ 0x1400A459C (MiObtainSystemCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x1400A7440 (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x1400A74D0 (MiChargeForLockedPage.c)
 *     MmCreateKernelStack @ 0x1400C3CE0 (MmCreateKernelStack.c)
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiAcquireNonPagedResources @ 0x1400E3D00 (MiAcquireNonPagedResources.c)
 *     MiObtainMdlCharges @ 0x1400EFA14 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x1400F0C58 (MiObtainPoolCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmChargeResources @ 0x140107B9C (MmChargeResources.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     MmGrowKernelStackEx @ 0x140135DE0 (MmGrowKernelStackEx.c)
 *     MiGetFileHashPage @ 0x140169168 (MiGetFileHashPage.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14017D0A4 (MmStoreChargeResidentAvailableForRead.c)
 *     MiStoreChargeReservedPages @ 0x140188434 (MiStoreChargeReservedPages.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402BD938 (MiAcquireNonPagedResourcesForce.c)
 *     MiGetSubsectionCharges @ 0x1402DE9C8 (MiGetSubsectionCharges.c)
 *     MiCreateLargePfnList @ 0x1402DF1E8 (MiCreateLargePfnList.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402E43EC (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6530 (MiGetCrossPartitionCombineCharges.c)
 *     MiMakePageBad @ 0x1402EC458 (MiMakePageBad.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 *     MiAllocatePerSessionProtos @ 0x1406E8AF8 (MiAllocatePerSessionProtos.c)
 *     MiConstructLoaderEntry @ 0x14070FBA0 (MiConstructLoaderEntry.c)
 *     MiChargeSystemImageCommitment @ 0x140710A34 (MiChargeSystemImageCommitment.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407400C8 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x14074B0A0 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x14088C5D0 (MiChargeLargeProtoSubsection.c)
 *     MiInitializeGapFrames @ 0x1409F4590 (MiInitializeGapFrames.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A14BE0 (MiInitializeBootLoadedDriverPfns.c)
 *     MiAllocateDummyPage @ 0x140A1AEB0 (MiAllocateDummyPage.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14008D9F0 (MiChargePartitionResidentAvailable.c)
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
