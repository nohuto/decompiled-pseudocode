/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80
 * Callers:
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 *     MiProbeLockFrame @ 0x14008F080 (MiProbeLockFrame.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MmUnmapIoSpace @ 0x140117010 (MmUnmapIoSpace.c)
 *     MiMappingHasIoTracker @ 0x140117120 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x140117198 (MiZeroAndFlushPtes.c)
 *     MiMappingHasIoReferences @ 0x140118D10 (MiMappingHasIoReferences.c)
 *     MiGetPhysicalAddress @ 0x140124020 (MiGetPhysicalAddress.c)
 *     MmSetPageProtection @ 0x14012E5D0 (MmSetPageProtection.c)
 *     MiCountSystemImageCommitment @ 0x14017A5F4 (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x14018618C (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186948 (MiDemoteValidLargePageOneLevel.c)
 *     MmAreBaseSystemImagesWriteProtected @ 0x14019E360 (MmAreBaseSystemImagesWriteProtected.c)
 *     MmProtectMdlSystemAddress @ 0x1402C15B0 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x1402C5D20 (MiAddTriageDumpPtes.c)
 *     MiDbgReleaseAddress @ 0x1402D103C (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402D15E8 (MiDbgWriteCheck.c)
 *     MiUpdateForkMaps @ 0x1402E5060 (MiUpdateForkMaps.c)
 *     RtlMarkHiberPhase @ 0x14031857C (RtlMarkHiberPhase.c)
 *     MiImagePagable @ 0x1406A5DA8 (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406A5E10 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406A5EC0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A5FC0 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x14070E784 (MiHandleDriverNonPagedSections.c)
 *     MiFinalizeImageRetpolineState @ 0x14070EAE8 (MiFinalizeImageRetpolineState.c)
 *     MiFreeDriverInitialization @ 0x140710A98 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x140710D4C (MiDisablePagingOfDriver.c)
 *     MiBackSystemImageWithPagefile @ 0x1407397E8 (MiBackSystemImageWithPagefile.c)
 *     MiUnlockDriverCode @ 0x140745238 (MiUnlockDriverCode.c)
 *     MiInitializeShadowPageTable @ 0x14074E35C (MiInitializeShadowPageTable.c)
 *     MiProtectSystemImage @ 0x14074E730 (MiProtectSystemImage.c)
 *     MiHandleBootImage @ 0x1409EF704 (MiHandleBootImage.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F0400 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0BB8 (MiApplyRetpolineToBootDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A14BE0 (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeDriverPtes @ 0x140A1630C (MiInitializeDriverPtes.c)
 *     MiCheckLargePageOk @ 0x140A173F0 (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x140A3D50C (MmDiscardDriverSection.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x14005F010 (MiFillPteHierarchy.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
