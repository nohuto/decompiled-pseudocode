/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x14009D910
 * Callers:
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiLockPagableImageSection @ 0x14009ABB0 (MiLockPagableImageSection.c)
 *     MiMappingHasIoReferences @ 0x1400E63FC (MiMappingHasIoReferences.c)
 *     MiGetPhysicalAddress @ 0x1401210F8 (MiGetPhysicalAddress.c)
 *     MmUnmapIoSpace @ 0x140123220 (MmUnmapIoSpace.c)
 *     MiMappingHasIoTracker @ 0x140123314 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x14012337C (MiZeroAndFlushPtes.c)
 *     MmSetPageProtection @ 0x140133580 (MmSetPageProtection.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140161260 (MiInsertNonPagedPoolOnSlist.c)
 *     MiCountSystemImageCommitment @ 0x14017343C (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x140184654 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140184B04 (MiDemoteValidLargePageOneLevel.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9C70 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x1402AB1CC (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x1402AE104 (MiAddTriageDumpPtes.c)
 *     MiDbgWriteCheck @ 0x1402BB384 (MiDbgWriteCheck.c)
 *     MiUpdateForkMaps @ 0x1402CAC08 (MiUpdateForkMaps.c)
 *     MmLockPagableDataSection @ 0x140651660 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140651760 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MmPageEntireDriver @ 0x140653970 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x140653B80 (MiImagePagable.c)
 *     MiHandleDriverNonPagedSections @ 0x14065578C (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x1406C778C (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x1406C781C (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x1406CB750 (MiDisablePagingOfDriver.c)
 *     MiBackSystemImageWithPagefile @ 0x14070D348 (MiBackSystemImageWithPagefile.c)
 *     MiUnlockDriverCode @ 0x14070DB60 (MiUnlockDriverCode.c)
 *     MiInitializeShadowPageTable @ 0x14072A3F4 (MiInitializeShadowPageTable.c)
 *     MiProtectSystemImage @ 0x14072B664 (MiProtectSystemImage.c)
 *     MiMarkBootImagesNonPaged @ 0x1409B7ABC (MiMarkBootImagesNonPaged.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B7C6C (MiReloadBootLoadedDrivers.c)
 *     MiRelocateBootImage @ 0x1409B82CC (MiRelocateBootImage.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409B88C4 (MiApplyRetpolineToBootDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1409B8BD8 (MiInitializeBootLoadedDriverPfns.c)
 *     MiCheckLargePageOk @ 0x1409D7394 (MiCheckLargePageOk.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F6F40 (MiApplyImportOptimizationToBootDrivers.c)
 *     MmDiscardDriverSection @ 0x1409F7A3C (MmDiscardDriverSection.c)
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
