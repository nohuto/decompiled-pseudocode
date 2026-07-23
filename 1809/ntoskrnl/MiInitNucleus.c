/*
 * XREFs of MiInitNucleus @ 0x1409BA108
 * Callers:
 *     MmInitSystem @ 0x1409BD4E4 (MmInitSystem.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiComputeHash64 @ 0x140101E70 (MiComputeHash64.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14015FAA0 (ExInitializeNPagedLookasideListInternal.c)
 *     MiInitializeNumaRanges @ 0x14017EF00 (MiInitializeNumaRanges.c)
 *     MiFreeUnusedPfnPages @ 0x140184120 (MiFreeUnusedPfnPages.c)
 *     MiInitializeCommitment @ 0x140187E40 (MiInitializeCommitment.c)
 *     ExInitializePoolHeapManagement @ 0x14018D3B8 (ExInitializePoolHeapManagement.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MmInitializeProcessor @ 0x140573A74 (MmInitializeProcessor.c)
 *     MiInitializeSpecialPool @ 0x140716868 (MiInitializeSpecialPool.c)
 *     MiCreatePfnBitMaps @ 0x14072BAB0 (MiCreatePfnBitMaps.c)
 *     MiInitializeSections @ 0x14072C1F4 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x14072C33C (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x14072C620 (MiCreateNodeLists.c)
 *     MiConvertInitialMemoryBlock @ 0x14075C9E8 (MiConvertInitialMemoryBlock.c)
 *     MiComputeNodeMemory @ 0x14075EE8C (MiComputeNodeMemory.c)
 *     MiInitializeKernelStacks @ 0x1409B6C54 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x1409B78BC (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x1409B7A44 (MiBuildPagedPool.c)
 *     InitializePool @ 0x1409B7DF8 (InitializePool.c)
 *     MiMarkLargePageRanges @ 0x1409B9EB4 (MiMarkLargePageRanges.c)
 *     MiInitializeDummyPages @ 0x1409BA6DC (MiInitializeDummyPages.c)
 *     MiCreatePfnDatabase @ 0x1409BB550 (MiCreatePfnDatabase.c)
 *     MiSwitchToPfns @ 0x1409BB954 (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x1409BC2C8 (MiFindLargestLoaderDescriptor.c)
 *     MiInitializeNonPagedPool @ 0x1409BE0D4 (MiInitializeNonPagedPool.c)
 *     MxConsumeLargePageSlush @ 0x1409BE51C (MxConsumeLargePageSlush.c)
 *     MiInitializePfnsForValidMappings @ 0x1409C0BA0 (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x1409C0C44 (MxRelocatePageTables.c)
 *     MmInitializeMemoryLimits @ 0x1409C201C (MmInitializeMemoryLimits.c)
 *     MiFillPfnGaps @ 0x1409D2FD0 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x1409D3020 (MiInitializeGapFrames.c)
 *     MiZeroBootMappings @ 0x1409D40A4 (MiZeroBootMappings.c)
 *     MiInitializeDecayPfns @ 0x1409D4598 (MiInitializeDecayPfns.c)
 *     MiInitializeDynamicVa @ 0x1409D4630 (MiInitializeDynamicVa.c)
 *     MiMemoryLicense @ 0x1409D4A44 (MiMemoryLicense.c)
 *     MiCheckLargePageOk @ 0x1409D8394 (MiCheckLargePageOk.c)
 *     MiCreateTopLevelUltraMappings @ 0x1409DABC0 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeSystemPteTracker @ 0x1409DB720 (MiInitializeSystemPteTracker.c)
 *     MiInitializeZeroingAttributes @ 0x1409DC1F4 (MiInitializeZeroingAttributes.c)
 *     MiInitializeBootDefaults @ 0x1409DCEF0 (MiInitializeBootDefaults.c)
 *     MiMapDummyPages @ 0x1409DD7AC (MiMapDummyPages.c)
 *     MiExamineHalVa @ 0x1409DE2B4 (MiExamineHalVa.c)
 *     MiProtectSharedUserPage @ 0x1409E0218 (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRanges @ 0x1409E04CC (MiInitializeChannelRanges.c)
 */

char __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // rax
  _KPROCESS *Process; // rdx
  __int16 v5; // cx
  int v6; // edi
  ULONG_PTR v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  char *v12; // rbx
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  int v16; // r8d
  int v18; // edx
  _QWORD v19[4]; // [rsp+48h] [rbp-38h] BYREF
  int v20; // [rsp+68h] [rbp-18h]
  char v21; // [rsp+6Ch] [rbp-14h]

  v2 = MiFlags ^ (MiFlags ^ (KiKvaShadowMode << 22)) & 0xC00000;
  dword_14043B138 = 48;
  MiFlags = v2;
  switch ( (v2 >> 22) & 3 )
  {
    case 0u:
      goto LABEL_52;
    case 1u:
      word_14043B26C = 0;
      break;
    case 2u:
      word_14043B26C = 256;
      break;
    case 3u:
LABEL_52:
      word_14043B26C = 1;
      break;
  }
  if ( ((v2 >> 22) & 3) != 0 && KiImplementedPhysicalBits > 0 )
    qword_14043B180 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
  if ( (KeFeatureBits & 0x100000) == 0 )
    KeBugCheckEx(0x1Au, 0x3030306uLL, KeFeatureBits, 0LL, 0LL);
  if ( KiAccessBitErrata == 1 )
  {
    v18 = v2 | 0x4000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_10;
    v18 = v2 | 0x800;
  }
  MiFlags = v18;
LABEL_10:
  if ( strstr(*(const char **)(BugCheckParameter2 + 216), "NOACCESSBITREPLACEMENT") )
    MiFlags |= 0x800u;
  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    MiFlags |= 0x100u;
  }
  else if ( (KeFeatureBits & 0x1000000) != 0 )
  {
    MiFlags |= 0x200u;
  }
  if ( (KeFeatureBits & 0x400000000000LL) != 0 )
    MiFlags |= 0x2000000u;
  v3 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = __readcr3();
  Process->DirectoryTableBase = (((v3 >> 12) & 0xFFFFFFFFFLL) << 12) | v5 & 0xFFF;
  MiLowHalVa = MiExamineHalVa();
  MiInitializeZeroingAttributes();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  qword_14043BDC8[0] = 0LL;
  qword_14043BDE8 = (__int64)&qword_14043BDE0;
  qword_14043BDE0 = (__int64)&qword_14043BDE0;
  qword_14043BDD0 = 0LL;
  qword_14043BDD8 = 0LL;
  qword_14043BE20 = 0LL;
  MiInitializeDynamicVa();
  if ( dword_14054119C == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_14054119C = 0;
  }
  else
  {
    MEMORY[0xFFFFF78000000264] = (dword_14054119C != 6357068) + 2;
    dword_14054119C = 1;
  }
  MiInitializeNumaRanges();
  MiInitializeChannelRanges();
  MiMemoryLicense(BugCheckParameter2);
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_14043B959 = 3;
    return 0;
  }
  if ( (unsigned int)MiCheckLargePageOk(BugCheckParameter2) )
    MiFlags |= 4u;
  qword_14043B1D0 = -1LL;
  MiProtectSharedUserPage();
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_14043B959 = 6;
    return 0;
  }
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  MiSwitchToPfns(BugCheckParameter2);
  MxRelocatePageTables(BugCheckParameter2);
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_14043BB90 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_14043BB90 = 0uLL;
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_14043B959 = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_14043B959 = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_14043B959 = 5;
    return 0;
  }
  v6 = (HIWORD(MiFlags) & 1) << 10;
  if ( (int)ExInitializePoolHeapManagement() < 0 || !(unsigned int)InitializePool(512, v6) )
  {
    byte_14043B959 = 2;
    return 0;
  }
  if ( !(unsigned int)MiInitializeKernelStacks() )
  {
    byte_14043B959 = 20;
    return 0;
  }
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
  {
LABEL_86:
    byte_14043B959 = 19;
    return 0;
  }
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb()) )
  {
    byte_14043B959 = 10;
    return 0;
  }
  v7 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
  qword_14043BA08 = v7;
  if ( !v7 )
  {
    byte_14043B959 = 11;
    return 0;
  }
  if ( !MiPteInShadowRange(v7) )
    goto LABEL_34;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v10 = 1;
    if ( HIBYTE(word_14043B26C) )
      goto LABEL_34;
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
  {
    goto LABEL_34;
  }
  if ( (v8 & 1) != 0 )
    v8 |= 0x8000000000000000uLL;
LABEL_34:
  *v9 = v8;
  if ( v10 )
    MiWritePteShadow((__int64)v9, v8);
  MiFreeUnusedPfnPages(0LL);
  v19[0] = 0x100010100010101LL;
  v20 = 16777472;
  v19[2] = 0x10101010101LL;
  v19[3] = 0x10101010101LL;
  v19[1] = 0x101010101010101LL;
  v21 = 1;
  v11 = MmInitializeMemoryLimits(BugCheckParameter2, v19);
  if ( !v11 || (v12 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, v11)) == 0LL )
  {
    byte_14043B959 = 12;
    return 0;
  }
  MxConsumeLargePageSlush();
  qword_14043DA20 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v12);
  if ( !qword_14043DA20 )
  {
    byte_14043B959 = 13;
    return 0;
  }
  MiComputeNodeMemory((__int64)&MiSystemPartition);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_14043B959 = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_14043BEC8) )
    goto LABEL_86;
  if ( !(unsigned int)MiBuildPagedPool() || !(unsigned int)MiInitializeSpecialPool(0) )
    return 0;
  MmPhysicalMemoryBlock = v12;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, v12) )
  {
    byte_14043B959 = 15;
    return 0;
  }
  MiMarkLargePageRanges();
  v13 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
  v14 = v13;
  if ( !v13 )
  {
    byte_14043B959 = 4;
    return 0;
  }
  MiMakeValidPte(v13, qword_14043BEA0, 536870913);
  if ( MiPteInShadowRange(v14) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_46;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_46;
    }
    if ( (v15 & 1) != 0 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_46:
  *(_QWORD *)v14 = v15;
  if ( v16 )
    MiWritePteShadow(v14, v15);
  qword_14043B790 = MiComputeHash64((__int64)(v14 << 25) >> 16);
  MiReleasePtes((__int64)&qword_14043C060, v14, 1u);
  MiInitializeWsSwapping(&MiSystemPartition);
  MiInitializeNumaRanges();
  ExInitializeNPagedLookasideListInternal((__int64)&stru_14043BBC0, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  return 1;
}
