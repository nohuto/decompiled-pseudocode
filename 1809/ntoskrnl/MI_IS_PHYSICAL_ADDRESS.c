/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x14009D850
 * Callers:
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 *     MiMappingHasIoReferences @ 0x1400E647C (MiMappingHasIoReferences.c)
 *     MiGetPhysicalAddress @ 0x1401211C8 (MiGetPhysicalAddress.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     MiMappingHasIoTracker @ 0x1401233E4 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x14012344C (MiZeroAndFlushPtes.c)
 *     MmSetPageProtection @ 0x140133650 (MmSetPageProtection.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140161360 (MiInsertNonPagedPoolOnSlist.c)
 *     MiCountSystemImageCommitment @ 0x14017353C (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x140184794 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184C44 (MiDemoteValidLargePageOneLevel.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9E60 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x1402AE2F4 (MiAddTriageDumpPtes.c)
 *     MiDbgWriteCheck @ 0x1402BB574 (MiDbgWriteCheck.c)
 *     MiUpdateForkMaps @ 0x1402CADF8 (MiUpdateForkMaps.c)
 *     MmLockPagableDataSection @ 0x140652820 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MmPageEntireDriver @ 0x140654B30 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x140654D40 (MiImagePagable.c)
 *     MiHandleDriverNonPagedSections @ 0x14065694C (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x1406C8A2C (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x1406C8ABC (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x1406CC9F0 (MiDisablePagingOfDriver.c)
 *     MiBackSystemImageWithPagefile @ 0x14070E5E8 (MiBackSystemImageWithPagefile.c)
 *     MiUnlockDriverCode @ 0x14070EE00 (MiUnlockDriverCode.c)
 *     MiInitializeShadowPageTable @ 0x14072B5E4 (MiInitializeShadowPageTable.c)
 *     MiProtectSystemImage @ 0x14072C854 (MiProtectSystemImage.c)
 *     MiMarkBootImagesNonPaged @ 0x1409B8ABC (MiMarkBootImagesNonPaged.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 *     MiRelocateBootImage @ 0x1409B92CC (MiRelocateBootImage.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B98C4 (MiApplyRetpolineToBootDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1409B9BD8 (MiInitializeBootLoadedDriverPfns.c)
 *     MiCheckLargePageOk @ 0x1409D8394 (MiCheckLargePageOk.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F7F40 (MiApplyImportOptimizationToBootDrivers.c)
 *     MmDiscardDriverSection @ 0x1409F8A3C (MmDiscardDriverSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  v1 = 4;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v9 + v2--);
    --v1;
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v4 & 1) == 0 )
        return 0LL;
      if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
      {
        v6 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8 * ((v3 >> 3) & 0x1FF));
          v8 = v4 | 0x20;
          if ( (v7 & 0x20) == 0 )
            v8 = v4;
          LOBYTE(v4) = v8;
          if ( (v7 & 0x42) != 0 )
            LOBYTE(v4) = v8 | 0x42;
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0LL;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( v2 == 1 )
      return 0LL;
  }
  return v1;
}
