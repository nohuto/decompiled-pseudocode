/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x14005F020
 * Callers:
 *     MiLockPagableImageSection @ 0x14005F1C0 (MiLockPagableImageSection.c)
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MmUnmapIoSpace @ 0x1400F5130 (MmUnmapIoSpace.c)
 *     MiMappingHasIoTracker @ 0x1400F5240 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x1400F52B8 (MiZeroAndFlushPtes.c)
 *     MiMappingHasIoReferences @ 0x1400F6E30 (MiMappingHasIoReferences.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiGetPhysicalAddress @ 0x140124CA0 (MiGetPhysicalAddress.c)
 *     MmSetPageProtection @ 0x14012EF20 (MmSetPageProtection.c)
 *     MiCountSystemImageCommitment @ 0x14017ACE4 (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x14018673C (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     MmAreBaseSystemImagesWriteProtected @ 0x14019EA80 (MmAreBaseSystemImagesWriteProtected.c)
 *     MmProtectMdlSystemAddress @ 0x1402C1310 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x1402C5A80 (MiAddTriageDumpPtes.c)
 *     MiDbgReleaseAddress @ 0x1402D0D9C (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402D1348 (MiDbgWriteCheck.c)
 *     MiUpdateForkMaps @ 0x1402E4DC0 (MiUpdateForkMaps.c)
 *     RtlMarkHiberPhase @ 0x140317FCC (RtlMarkHiberPhase.c)
 *     MiImagePagable @ 0x1406A5638 (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406A56A0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406A5750 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A5850 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x140710564 (MiHandleDriverNonPagedSections.c)
 *     MiFinalizeImageRetpolineState @ 0x1407108C8 (MiFinalizeImageRetpolineState.c)
 *     MiFreeDriverInitialization @ 0x140712878 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x140712B2C (MiDisablePagingOfDriver.c)
 *     MiBackSystemImageWithPagefile @ 0x14073BA78 (MiBackSystemImageWithPagefile.c)
 *     MiUnlockDriverCode @ 0x140747138 (MiUnlockDriverCode.c)
 *     MiInitializeShadowPageTable @ 0x14074EDEC (MiInitializeShadowPageTable.c)
 *     MiProtectSystemImage @ 0x14074F1C0 (MiProtectSystemImage.c)
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F0318 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0AC8 (MiApplyRetpolineToBootDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A15380 (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeDriverPtes @ 0x140A167D4 (MiInitializeDriverPtes.c)
 *     MiCheckLargePageOk @ 0x140A178B0 (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x140A3D2DC (MmDiscardDriverSection.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14005F0B0 (MiFillPteHierarchy.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(__int64 a1)
{
  unsigned int v2; // r10d
  __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v8; // rax
  char v9; // r9
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v11, 0, 0x20uLL);
  MiFillPteHierarchy(a1, v11);
  v3 = v2;
  while ( 1 )
  {
    v4 = *(_QWORD *)&v11[8 * v3-- - 8];
    --v2;
    v5 = *(_QWORD *)v4;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL
      && v4 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v5 & 1) == 0 )
        return 0LL;
      if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v8 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v4 >> 3) & 0x1FF));
          v9 = v5 | 0x20;
          if ( (v8 & 0x20) == 0 )
            v9 = v5;
          LOBYTE(v5) = v9;
          if ( (v8 & 0x42) != 0 )
            LOBYTE(v5) = v9 | 0x42;
        }
      }
    }
    if ( (v5 & 1) == 0 )
      return 0LL;
    if ( (v5 & 0x80u) != 0LL )
      break;
    if ( v3 == 1 )
      return 0LL;
  }
  return v2;
}
