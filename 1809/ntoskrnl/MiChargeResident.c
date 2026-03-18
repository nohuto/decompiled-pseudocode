/*
 * XREFs of MiChargeResident @ 0x14002DF50
 * Callers:
 *     MiObtainMdlCharges @ 0x140011B44 (MiObtainMdlCharges.c)
 *     MiObtainSystemCharges @ 0x140026DC8 (MiObtainSystemCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x14002CEBC (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x14002DE70 (MiChargeForLockedPage.c)
 *     MiObtainFaultCharges @ 0x140064D60 (MiObtainFaultCharges.c)
 *     MiFindContiguousPages @ 0x14009A110 (MiFindContiguousPages.c)
 *     MmCreateKernelStack @ 0x1400C9EF0 (MmCreateKernelStack.c)
 *     MmChargeResources @ 0x1400E3D2C (MmChargeResources.c)
 *     MiObtainPoolCharges @ 0x1401097C4 (MiObtainPoolCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E2C0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmGrowKernelStackEx @ 0x140132EB0 (MmGrowKernelStackEx.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C044 (MmAdjustWorkingSetSizeEx.c)
 *     MiAcquireNonPagedResources @ 0x14013DA0C (MiAcquireNonPagedResources.c)
 *     MiGetFileHashPage @ 0x14015171C (MiGetFileHashPage.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140175DFC (MmStoreChargeResidentAvailableForRead.c)
 *     MiStoreChargeReservedPages @ 0x14017F704 (MiStoreChargeReservedPages.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402A60F0 (MiAcquireNonPagedResourcesForce.c)
 *     MmAllocateSpecialPool @ 0x1402ACA64 (MmAllocateSpecialPool.c)
 *     MiGetSubsectionCharges @ 0x1402C4994 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402C9FAC (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402CBE14 (MiGetCrossPartitionCombineCharges.c)
 *     MiMakePageBad @ 0x1402CF028 (MiMakePageBad.c)
 *     MiInsertVadCharges @ 0x1405F1E60 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiConstructLoaderEntry @ 0x140682490 (MiConstructLoaderEntry.c)
 *     MiChargeSystemImageCommitment @ 0x14068321C (MiChargeSystemImageCommitment.c)
 *     MiAllocatePerSessionProtos @ 0x1406C9210 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406D18B8 (MmCreateProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x140715B68 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140715C88 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407466F0 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408528F4 (MiChargeLargeProtoSubsection.c)
 *     MiMapUserLargePages @ 0x14085D578 (MiMapUserLargePages.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1409B8BD8 (MiInitializeBootLoadedDriverPfns.c)
 *     MiAllocateDummyPage @ 0x1409B9930 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x1409D2020 (MiInitializeGapFrames.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int64 CachedResidentAvailable; // rax
  int v5; // ett

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( a2 <= CachedResidentAvailable )
    {
      while ( (_DWORD)CachedResidentAvailable != -1 )
      {
        v5 = CachedResidentAvailable;
        LODWORD(CachedResidentAvailable) = _InterlockedCompareExchange(
                                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                             CachedResidentAvailable - a2,
                                             CachedResidentAvailable);
        if ( v5 == (_DWORD)CachedResidentAvailable )
          return 1LL;
        if ( a2 > (unsigned int)CachedResidentAvailable )
          return MiChargePartitionResidentAvailable((__int64)a1, a2, a3);
      }
    }
  }
  return MiChargePartitionResidentAvailable((__int64)a1, a2, a3);
}
