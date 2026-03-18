/*
 * XREFs of MiInitNucleus @ 0x1409F3CC8
 * Callers:
 *     MmInitSystem @ 0x1409F0CD4 (MmInitSystem.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140175AD0 (ExInitializeNPagedLookasideListInternal.c)
 *     MiInitializeNumaRanges @ 0x1401894BC (MiInitializeNumaRanges.c)
 *     MiInitializeCommitment @ 0x14019310C (MiInitializeCommitment.c)
 *     ExInitializePoolHeapManagement @ 0x140195F48 (ExInitializePoolHeapManagement.c)
 *     MiFreeUnusedPfnPages @ 0x14019D250 (MiFreeUnusedPfnPages.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     __report_rangecheckfailure @ 0x14027BAEC (__report_rangecheckfailure.c)
 *     MmInitializeProcessor @ 0x14059F6C4 (MmInitializeProcessor.c)
 *     MiInitializeSections @ 0x140750BA8 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x140750CE0 (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x140750F8C (MiCreateNodeLists.c)
 *     MiCreatePfnBitMaps @ 0x1407510CC (MiCreatePfnBitMaps.c)
 *     MiComputeNodeMemory @ 0x140751334 (MiComputeNodeMemory.c)
 *     MiConvertInitialMemoryBlock @ 0x1407514A4 (MiConvertInitialMemoryBlock.c)
 *     MiInitializeKernelStacks @ 0x1409EDAC8 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x1409EE318 (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x1409EE4E0 (MiBuildPagedPool.c)
 *     InitializePool @ 0x1409EE7E8 (InitializePool.c)
 *     MiInitializeNonPagedPool @ 0x1409F17C4 (MiInitializeNonPagedPool.c)
 *     MxConsumeLargePageSlush @ 0x1409F19C8 (MxConsumeLargePageSlush.c)
 *     MiCreatePfnDatabase @ 0x1409F21E8 (MiCreatePfnDatabase.c)
 *     MiSwitchToPfns @ 0x1409F25FC (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x1409F2E70 (MiFindLargestLoaderDescriptor.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x1409F304C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiMarkLargePageRanges @ 0x1409F41EC (MiMarkLargePageRanges.c)
 *     MiFillPfnGaps @ 0x1409F4450 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x1409F44A0 (MiInitializeGapFrames.c)
 *     MmInitializeMemoryLimits @ 0x1409F48A0 (MmInitializeMemoryLimits.c)
 *     MiInitializePfnsForValidMappings @ 0x1409FC01C (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x1409FC0C0 (MxRelocatePageTables.c)
 *     MiMemoryLicense @ 0x140A16F1C (MiMemoryLicense.c)
 *     MiZeroBootMappings @ 0x140A17160 (MiZeroBootMappings.c)
 *     MiCheckLargePageOk @ 0x140A178B0 (MiCheckLargePageOk.c)
 *     MiInitializeDecayPfns @ 0x140A17AD4 (MiInitializeDecayPfns.c)
 *     MiInitializeDynamicVa @ 0x140A17CC0 (MiInitializeDynamicVa.c)
 *     MiInitializeDummyPages @ 0x140A1AED4 (MiInitializeDummyPages.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A1D394 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeBootDefaults @ 0x140A1F410 (MiInitializeBootDefaults.c)
 *     MiMapDummyPages @ 0x140A1FD20 (MiMapDummyPages.c)
 *     MiExamineHalVa @ 0x140A20648 (MiExamineHalVa.c)
 *     MiInitializeSystemDefaults @ 0x140A210F4 (MiInitializeSystemDefaults.c)
 *     MiProtectSharedUserPage @ 0x140A229A0 (MiProtectSharedUserPage.c)
 */

char __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  unsigned __int64 v2; // rax
  _KPROCESS *Process; // rdx
  __int16 v4; // cx
  unsigned int v5; // eax
  int *v6; // rcx
  unsigned int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  int v11; // ebx
  ULONG_PTR v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r8
  int v15; // r9d
  bool v16; // zf
  unsigned __int64 m; // rax
  __int64 v18; // rcx
  char v19; // cl
  __int64 v20; // rax
  char *v21; // rbx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  int v25; // r9d
  unsigned int v26; // ecx
  unsigned __int16 v27; // ax
  unsigned int v28; // r8d
  __int64 i; // r9
  unsigned __int16 v30; // ax
  unsigned int v31; // r10d
  int v32; // edx
  unsigned int v33; // r11d
  int v34; // ebx
  char *v35; // r12
  unsigned int v36; // esi
  unsigned int v37; // ecx
  __int64 v38; // r8
  char *v39; // rcx
  __int64 j; // rax
  unsigned int v41; // ecx
  int v42; // edx
  unsigned int v43; // r11d
  unsigned __int64 v44; // rsi
  unsigned int v45; // r9d
  int v46; // edx
  int v47; // r10d
  char *v48; // r12
  unsigned int v49; // r14d
  unsigned int v50; // ecx
  char *v51; // r8
  __int64 k; // rax
  unsigned int v53; // r8d
  int v54; // edx
  __int64 v55; // rdx
  unsigned int v56; // eax
  int v57; // r8d
  char v58[4]; // [rsp+58h] [rbp-49h] BYREF
  int v59; // [rsp+5Ch] [rbp-45h]
  int v60; // [rsp+60h] [rbp-41h]
  ULONG_PTR v61; // [rsp+68h] [rbp-39h]
  __int64 **v62; // [rsp+70h] [rbp-31h]
  signed __int32 v63[8]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v64[48]; // [rsp+98h] [rbp-9h] BYREF

  v61 = BugCheckParameter2;
  v1 = BugCheckParameter2;
  v62 = &MiVisiblePartition;
  MiInitializeNumaRanges(0);
  MiInitializeSystemDefaults(v1);
  v2 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = __readcr3();
  Process->DirectoryTableBase = (((v2 >> 12) & 0xFFFFFFFFFLL) << 12) | v4 & 0xFFF;
  MiLowHalVa = MiExamineHalVa();
  v5 = 0;
  v6 = dword_140465858;
  do
  {
    *v6 = v5;
    v6[1] = v5;
    v6[2] = v5;
    v6[3] = v5++;
    v6 += 4;
  }
  while ( v5 < 3 );
  v7 = 0;
  v8 = &unk_140465888;
  do
    *v8++ = v7++;
  while ( v7 <= 3 );
  dword_140465894 = 1;
  MiInitializeBootDefaults(v1);
  if ( ((unsigned __int8)&stru_140466300 & 0xF) != 0 )
    goto LABEL_131;
  qword_140466310 = 0LL;
  v9 = 16LL;
  stru_140466300 = 0uLL;
  v10 = &unk_140466FB0;
  do
  {
    v10[1] = v10;
    *v10 = v10;
    v10 += 2;
    --v9;
  }
  while ( v9 );
  qword_140466488[0] = 0LL;
  qword_1404664A8 = (__int64)&qword_1404664A0;
  qword_1404664A0 = (__int64)&qword_1404664A0;
  qword_140466490 = 0LL;
  qword_140466498 = 0LL;
  qword_1404664E0 = 0LL;
  MiInitializeDynamicVa();
  if ( dword_1405711AC == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_1405711AC = 0;
  }
  else
  {
    MEMORY[0xFFFFF78000000264] = (dword_1405711AC != 6357068) + 2;
    dword_1405711AC = 1;
  }
  MiInitializeNumaRanges(1);
  memset(v63, 0, sizeof(v63));
  if ( !dword_140571198 )
    goto LABEL_11;
  if ( byte_140466655 == 1 )
    goto LABEL_11;
  if ( !dword_1405711AC )
    goto LABEL_11;
  ((void (__fastcall *)(__int64, __int64, __int64 *, char *))off_140426798[0])(31LL, 8LL, &qword_140465788, v58);
  v23 = qword_140465788;
  if ( !qword_140465788 )
    goto LABEL_11;
  v24 = 0;
  v25 = 0;
  if ( *(_QWORD *)qword_140465788 == -1LL )
    goto LABEL_63;
  do
  {
    v26 = *(unsigned __int16 *)(v23 + 12);
    if ( v24 <= v26 )
      v24 = *(unsigned __int16 *)(v23 + 12);
    if ( *(_BYTE *)(v23 + 14) == 1 )
    {
      v25 = 1;
    }
    else
    {
      v27 = *(_WORD *)(v23 + 10);
      if ( v27 < 0x40u && (unsigned __int16)v26 < 4u )
        _bittestandset(v63, v26 + 4 * v27);
    }
    v23 += 16LL;
  }
  while ( *(_QWORD *)v23 != -1LL );
  if ( !v25 )
LABEL_63:
    v24 = 0;
  v28 = v24 + 1;
  MmNumberOfChannels = v28;
  if ( v28 == 1 )
  {
    qword_140465788 = 0LL;
    goto LABEL_11;
  }
  if ( v28 > 4 )
  {
    for ( i = qword_140465788; ; i += 16LL )
    {
      if ( *(_QWORD *)i == -1LL )
      {
        v1 = v61;
        MmNumberOfChannels = 4;
        break;
      }
      if ( *(_WORD *)(i + 12) < 4u )
        continue;
      v30 = *(_WORD *)(i + 10);
      if ( v30 >= 0x40u )
        continue;
      v31 = 4 * v30;
      v32 = 255;
      v33 = v31 < 0x100 ? v31 : 0;
      v34 = ((unsigned __int64)v63 & 4) != 0 ? 0x20 : 0;
      v35 = (char *)v63 + (-(__int64)(((unsigned __int64)v63 & 4) != 0) & 0xFFFFFFFFFFFFFFFCuLL);
      while ( 1 )
      {
        v36 = v34 + v32;
        v37 = v34 + v33;
        if ( v32 - v33 == -1 )
          goto LABEL_74;
        v38 = (1LL << (v37 & 0x3F)) - 1;
        v39 = &v35[8 * ((unsigned __int64)v37 >> 6)];
        for ( j = v38 | ~*(_QWORD *)v39; j == -1; j = ~*(_QWORD *)v39 )
        {
          v39 += 8;
          if ( v39 > &v35[8 * ((unsigned __int64)v36 >> 6)] )
            goto LABEL_74;
        }
        _BitScanForward64((unsigned __int64 *)&j, ~j);
        v41 = j + ((unsigned int)((v39 - v35) >> 3) << 6);
        v59 = j;
        if ( v41 > v36 )
        {
LABEL_74:
          v41 = -1;
          goto LABEL_75;
        }
        if ( v41 != -1 )
          break;
LABEL_75:
        if ( !v33 )
          goto LABEL_85;
        v42 = v31 + 1;
        v33 = 0;
        if ( v31 + 1 > 0x100 )
          v42 = 256;
        v32 = v42 - 1;
      }
      v41 -= v34;
LABEL_85:
      if ( v41 < v31 || v41 >= v31 + 4 )
      {
        *(_WORD *)(i + 12) = 3;
        *(_BYTE *)(i + 14) = 0;
      }
      else
      {
        *(_WORD *)(i + 12) = v41 & 3;
      }
    }
  }
  v43 = 0;
  v44 = (unsigned __int64)v63 & 4;
  while ( 2 )
  {
    v45 = v43 < 0x100 ? v43 : 0;
    v46 = 255;
    v47 = v44 != 0 ? 0x20 : 0;
    v48 = (char *)v63 + (-(__int64)(v44 != 0) & 0xFFFFFFFFFFFFFFFCuLL);
    while ( 1 )
    {
      v49 = v47 + v46;
      v50 = v47 + v45;
      if ( v46 - v45 == -1 )
        goto LABEL_95;
      v51 = &v48[8 * ((unsigned __int64)v50 >> 6)];
      for ( k = ((1LL << (v50 & 0x3F)) - 1) | ~*(_QWORD *)v51; k == -1; k = ~*(_QWORD *)v51 )
      {
        v51 += 8;
        if ( v51 > &v48[8 * ((unsigned __int64)v49 >> 6)] )
          goto LABEL_95;
      }
      _BitScanForward64((unsigned __int64 *)&k, ~k);
      v53 = k + ((unsigned int)((v51 - v48) >> 3) << 6);
      v60 = k;
      if ( v53 > v49 )
      {
LABEL_95:
        v53 = -1;
        goto LABEL_96;
      }
      if ( v53 != -1 )
        break;
LABEL_96:
      if ( !v45 )
        goto LABEL_106;
      v54 = v43 + 1;
      v45 = 0;
      if ( v43 + 1 > 0x100 )
        v54 = 256;
      v46 = v54 - 1;
    }
    v53 -= v47;
LABEL_106:
    if ( v53 != -1 && v53 >= v43 )
    {
      v55 = qword_140465788;
      v43 = v53 + 1;
      v56 = v53 >> 2;
      v57 = v53 & 3;
      while ( *(_QWORD *)v55 != -1LL )
      {
        if ( *(unsigned __int16 *)(v55 + 10) == v56 && *(unsigned __int16 *)(v55 + 12) == v57 )
          *(_BYTE *)(v55 + 14) = 0;
        v55 += 16LL;
      }
      continue;
    }
    break;
  }
LABEL_11:
  MiMemoryLicense(v1);
  MiRemoveLargeFreeLoaderDescriptors(v1);
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(v1) )
  {
    byte_140466039 = 3;
    return 0;
  }
  MiCheckLargePageOk(v1);
  qword_140465850 = -1LL;
  MiProtectSharedUserPage();
  if ( !(unsigned int)MiCreatePfnDatabase(v1) )
  {
    byte_140466039 = 6;
    return 0;
  }
  MiInitializePfnsForValidMappings(v1);
  MiSwitchToPfns(v1);
  MxRelocatePageTables(v1);
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140466250 & 0xF) != 0 )
LABEL_131:
    RtlRaiseStatus(-2147483646);
  stru_140466250 = 0uLL;
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( (unsigned int)MiInitializeSystemPtes() )
  {
    if ( (unsigned int)MiInitializeNonPagedPool() )
    {
      if ( (unsigned int)MiMapDummyPages() )
      {
        v11 = (BYTE2(MiFlags) & 1) << 10;
        if ( (int)ExInitializePoolHeapManagement() < 0 || !(unsigned int)InitializePool(512, v11) )
        {
          byte_140466039 = 2;
          return 0;
        }
        if ( (unsigned int)MiInitializeKernelStacks() )
        {
          if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
            goto LABEL_129;
          if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb()) )
          {
            byte_140466039 = 10;
            return 0;
          }
          v12 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
          qword_1404660C8 = v12;
          if ( !v12 )
          {
            byte_140466039 = 11;
            return 0;
          }
          if ( MiPteInShadowRange(v12) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v15 = 1;
              if ( !HIBYTE(word_1404658EC) )
              {
                v16 = (v13 & 1) == 0;
LABEL_27:
                if ( !v16 )
                  v13 |= 0x8000000000000000uLL;
              }
            }
            else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
            {
              v16 = (v13 & 1) == 0;
              goto LABEL_27;
            }
          }
          *v14 = v13;
          if ( v15 )
            MiWritePteShadow((__int64)v14);
          MiFreeUnusedPfnPages(0LL);
          for ( m = 0LL; m < 0x29; ++m )
          {
            v18 = 0x1C5C0C00048LL;
            if ( _bittest64(&v18, m) )
              v19 = 0;
            else
              v19 = 1;
            v64[m] = v19;
          }
          v20 = MmInitializeMemoryLimits(v1, v64);
          if ( !v20 || (v21 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, v20)) == 0LL )
          {
            byte_140466039 = 12;
            return 0;
          }
          if ( (MiFlags & 4) != 0 && (MiFlags & 0x20000000) == 0 )
            MxConsumeLargePageSlush();
          qword_1404681E0 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v21);
          if ( !qword_1404681E0 )
          {
            byte_140466039 = 13;
            return 0;
          }
          MiComputeNodeMemory((__int64)&MiSystemPartition);
          if ( !(unsigned int)MiFillPfnGaps() )
          {
            byte_140466039 = 18;
            return 0;
          }
          if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_140466588) )
          {
LABEL_129:
            byte_140466039 = 19;
            return 0;
          }
          if ( (unsigned int)MiBuildPagedPool() )
          {
            MmPhysicalMemoryBlock = v21;
            if ( (unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, v21) )
            {
              MiMarkLargePageRanges();
              MiInitializeWsSwapping(&MiSystemPartition);
              MiInitializeNumaRanges(2);
              ExInitializeNPagedLookasideListInternal((__int64)&stru_140466280, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
              return 1;
            }
            byte_140466039 = 15;
          }
        }
        else
        {
          byte_140466039 = 20;
        }
      }
      else
      {
        byte_140466039 = 5;
      }
    }
    else
    {
      byte_140466039 = 7;
    }
  }
  else
  {
    byte_140466039 = 9;
  }
  return 0;
}
