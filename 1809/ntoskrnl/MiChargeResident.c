/*
 * XREFs of MiChargeResident @ 0x14002DF50
 * Callers:
 *     MiObtainMdlCharges @ 0x140011B44 (MiObtainMdlCharges.c)
 *     MiObtainSystemCharges @ 0x140026DC8 (MiObtainSystemCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x14002CEBC (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x14002DE70 (MiChargeForLockedPage.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MmChargeResources @ 0x1400E3DCC (MmChargeResources.c)
 *     MiObtainPoolCharges @ 0x140109864 (MiObtainPoolCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E350 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmGrowKernelStackEx @ 0x140132FA0 (MmGrowKernelStackEx.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     MiAcquireNonPagedResources @ 0x14013DB2C (MiAcquireNonPagedResources.c)
 *     MiGetFileHashPage @ 0x14015183C (MiGetFileHashPage.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140175F1C (MmStoreChargeResidentAvailableForRead.c)
 *     MiStoreChargeReservedPages @ 0x14017F864 (MiStoreChargeReservedPages.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402A63E0 (MiAcquireNonPagedResourcesForce.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 *     MiGetSubsectionCharges @ 0x1402C4C84 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402CA29C (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402CC104 (MiGetCrossPartitionCombineCharges.c)
 *     MiMakePageBad @ 0x1402CF318 (MiMakePageBad.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiConstructLoaderEntry @ 0x140683630 (MiConstructLoaderEntry.c)
 *     MiChargeSystemImageCommitment @ 0x1406843BC (MiChargeSystemImageCommitment.c)
 *     MiAllocatePerSessionProtos @ 0x1406CA490 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x140716DE8 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407478C0 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x140853B34 (MiChargeLargeProtoSubsection.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1409B9BD8 (MiInitializeBootLoadedDriverPfns.c)
 *     MiAllocateDummyPage @ 0x1409BA930 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x1409D3020 (MiInitializeGapFrames.c)
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
