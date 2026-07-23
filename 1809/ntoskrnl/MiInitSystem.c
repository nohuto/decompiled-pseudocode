/*
 * XREFs of MiInitSystem @ 0x1409BD5A8
 * Callers:
 *     MmInitSystem @ 0x1409BD4E4 (MmInitSystem.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     PsSetPagePriorityThread @ 0x1400DEF80 (PsSetPagePriorityThread.c)
 *     MiProcessKernelCfgImage @ 0x1400F55E4 (MiProcessKernelCfgImage.c)
 *     MiSetPageTablePfnBuddy @ 0x14013DAA8 (MiSetPageTablePfnBuddy.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 *     MiSetSlabAllocatorPolicy @ 0x14017EFEC (MiSetSlabAllocatorPolicy.c)
 *     MiCreateZeroThreadContext @ 0x14017F7AC (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x14017F864 (MiStoreChargeReservedPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190F3C (MiInitializeWorkingSetManagerParameters.c)
 *     ExInitializePagedHeaps @ 0x1401929A0 (ExInitializePagedHeaps.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslInitializeSecureKernelCfg @ 0x14027B6F8 (VslInitializeSecureKernelCfg.c)
 *     KdSetDbgPrintBufferSize @ 0x14028CA50 (KdSetDbgPrintBufferSize.c)
 *     MiReleaseResourceLite @ 0x1402A1A28 (MiReleaseResourceLite.c)
 *     MiAcquireResourceExclusiveLite @ 0x1402A6300 (MiAcquireResourceExclusiveLite.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     MmLockPagableDataSection @ 0x140652820 (MmLockPagableDataSection.c)
 *     PsCreateSystemThread @ 0x14066BC30 (PsCreateSystemThread.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1406D205C (MmConfigurePrefetchSeekThreshold.c)
 *     MiMarkKernelImageCfgBits @ 0x140710634 (MiMarkKernelImageCfgBits.c)
 *     MiInitializeSystemSpaceMap @ 0x1407167FC (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x140716DE8 (MiInitializeSystemWorkingSetList.c)
 *     TraceLoggingRegisterEx @ 0x14071EED8 (TraceLoggingRegisterEx.c)
 *     MiWriteProtectSystemImages @ 0x14072C7D0 (MiWriteProtectSystemImages.c)
 *     MiInitializeMemoryEvents @ 0x14072CB8C (MiInitializeMemoryEvents.c)
 *     MiGenerateSecureCookie @ 0x140763A44 (MiGenerateSecureCookie.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x14085CFA0 (MiProcessKernelCfgAddressTakenImports.c)
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x1409BA674 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiAllocateDummyPage @ 0x1409BA930 (MiAllocateDummyPage.c)
 *     MiInitializeRelocations @ 0x1409BAA40 (MiInitializeRelocations.c)
 *     MiInitializeTbFlushing @ 0x1409BABB8 (MiInitializeTbFlushing.c)
 *     MiMapBBTMemory @ 0x1409BB008 (MiMapBBTMemory.c)
 *     MiSectionInitialization @ 0x1409BB060 (MiSectionInitialization.c)
 *     MiInitializeCfg @ 0x1409BB28C (MiInitializeCfg.c)
 *     MiCreateEnclaveRegions @ 0x1409BB34C (MiCreateEnclaveRegions.c)
 *     MiInitializeSessionIds @ 0x1409BB3DC (MiInitializeSessionIds.c)
 *     MiInitializeCacheFlushing @ 0x1409BD02C (MiInitializeCacheFlushing.c)
 *     MiComputeOptimalZeroPath @ 0x1409BD284 (MiComputeOptimalZeroPath.c)
 *     MiAddLoaderHalIoMappings @ 0x1409BDC18 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BDCD4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x1409BDD50 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x1409BDDDC (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x1409BDEBC (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x1409BDF88 (MiInitializeMirroring.c)
 *     MiInitializeLoadedModuleList @ 0x1409D0350 (MiInitializeLoadedModuleList.c)
 *     PsInitializeQuotaSystem @ 0x1409D8580 (PsInitializeQuotaSystem.c)
 *     RtlInitializeHistoryTable @ 0x1409D98D4 (RtlInitializeHistoryTable.c)
 *     MiInitializeSharedUserData @ 0x1409DA5F0 (MiInitializeSharedUserData.c)
 *     MiInitializeBootProcess @ 0x1409DE13C (MiInitializeBootProcess.c)
 *     MiInitializeRetpoline @ 0x1409DFFC8 (MiInitializeRetpoline.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned __int64 v6; // rbx
  ULONG_PTR v7; // rax
  struct _KTHREAD *CurrentThread; // rsi
  PVOID *j; // rbx
  PVOID v10; // rcx
  PIMAGE_NT_HEADERS v11; // rax
  ULONG_PTR v12; // rax
  _KPROCESS *Process; // rbx
  int v15; // eax
  int v16; // r14d
  PKSTART_ROUTINE *i; // r15
  HANDLE ThreadHandle; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-40h] BYREF

  v19[0] = KeBalanceSetManager;
  v19[1] = KeSwapProcessOrStack;
  v19[2] = MiZeroPageThread;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      MiSetPageTablePfnBuddy(48 * (Process->DirectoryTableBase >> 12) - 0x58000000000LL, (__int64)Process, 0);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      MiMapBBTMemory(a2);
      if ( (unsigned int)MiSectionInitialization() && (int)MiInitializeCfg() >= 0 )
      {
        if ( MiCreateEnclaveRegions(a2) )
        {
          qword_14043B788 = 0LL;
          MiInitializeSessionIds();
          MiInitializeCacheFlushing();
          MiComputeOptimalZeroPath();
          if ( MiInitializeMemoryEvents(&MiSystemPartition) && (unsigned int)MiStoreChargeReservedPages() )
          {
            v15 = dword_14054118C;
            if ( (unsigned int)dword_14054118C <= 0x40 )
            {
              if ( !dword_14054118C )
                v15 = 1;
            }
            else
            {
              v15 = 64;
            }
            dword_14054118C = v15 << 8;
            if ( (dword_140541180 & 0xFFFFFFFE) != 0 )
              dword_140541180 = 0;
            qword_14043F3E0 = (__int64)MiCreateZeroThreadContext(0LL, 0);
            if ( qword_14043F3E0 )
            {
              v16 = 0;
              for ( i = (PKSTART_ROUTINE *)v19;
                    PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, &MiSystemPartition) >= 0;
                    ++i )
              {
                ObCloseHandle(ThreadHandle, 0);
                if ( (unsigned int)++v16 >= 3 )
                {
                  if ( !(unsigned int)MiInitializeMirroring() )
                    return 0;
                  qword_14043B068 = 0LL;
                  MiWriteProtectSystemImages();
                  _InterlockedDecrement(&dword_14043BF48);
                  return (int)MiInitializeApiSets(a2) >= 0;
                }
              }
            }
          }
        }
        else
        {
          byte_14043B959 = 32;
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TraceLoggingRegisterEx(&stru_140401C08, 0LL, 0LL);
      hProvider = &stru_140401C08;
      MiFlushStrongCodeDriverLoadFailures();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_14043B890 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)0x20);
    _InterlockedIncrement(&dword_14043BF48);
    if ( !(unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
      return 0;
    if ( (int)ExInitializePagedHeaps() < 0 )
      return 0;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, 0LL) )
      return 0;
    if ( !(unsigned __int8)PsInitializeQuotaSystem(0LL) )
      return 0;
    qword_14043B0D0 = MiGenerateSecureCookie();
    Seed = 305419896;
    if ( !(unsigned int)MiInitializeSharedUserData() || (int)MiInitializeBootProcess() < 0 )
      return 0;
    KeFlushCurrentTbOnly(3LL);
    MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
    MiAddLoaderHalIoMappings(qword_14043CBE0, qword_14043CBE0 + 0x8000000000LL);
    if ( (_DWORD)KdPrintBufferAllocateSize )
      KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
    MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
    *(_QWORD *)&MiGlobalHotPatchList = 0LL;
    MiUserSidPatchLists = 0LL;
    MiHotPatchListLock = 0LL;
    v4 = *(_QWORD *)(a2 + 240);
    MiHotPatchGeneration = 1;
    dword_140439F34 = (*(_DWORD *)(v4 + 3424) + 4095) & 0xFFFFF000;
    MiUserHotPatchReserveSize = dword_140439F34;
    if ( (int)MiInitializeRetpoline() < 0
      || (int)MiCreateSlabAllocationsFromLoaderBlock(a2) < 0
      || !(unsigned int)MiInitializeDriverImages(a2) )
    {
      return 0;
    }
    v5 = -1;
    if ( qword_14043F5D0 <= 0xFFFFFFFF )
      v5 = qword_14043F5D0;
    MEMORY[0xFFFFF780000002E8] = v5;
    MEMORY[0xFFFFF78000000244] = 0;
    MiInitializeSystemSpaceMap(qword_14043A000);
    qword_140439E30 = 0LL;
    qword_14043B7A0 = 0LL;
    qword_14043B7B0 = 0LL;
    if ( !(unsigned int)MiInitializeLoadedModuleList(a2) )
      return 0;
    if ( (MiFlags & 0x80000) != 0 )
    {
      v6 = qword_14043CB70;
      v7 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)0x20);
      if ( !v7 )
        return 0;
      if ( VslInitializeSecureKernelCfg(v6, (__int64)(v7 << 25) >> 16) < 0 )
        return 0;
      qword_140439EE0 = v6;
      qword_140439ED8 = 0x100000000000LL;
      if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                            ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                            (((v6 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                            4u,
                            9) )
        return 0;
      qword_140439EE8 = 0LL;
      CurrentThread = KeGetCurrentThread();
      MiAcquireResourceExclusiveLite((__int64)CurrentThread);
      for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
      {
        if ( ((_DWORD)j[13] & 0x2000) == 0 )
        {
          v10 = j[6];
          if ( v10 == PsNtosImageBase )
          {
            v11 = RtlImageNtHeader(v10);
            MiMarkKernelImageCfgBits((__int64)j, (__int64)v11);
            *((_DWORD *)j + 26) |= 0x2000u;
          }
          else
          {
            MiProcessKernelCfgImage((__int64)j, 0, 0LL);
          }
        }
      }
      MiProcessKernelCfgAddressTakenImports((PVOID *)PsLoadedModuleList);
      MiReleaseResourceLite((__int64)CurrentThread);
      guard_icall_bitmap = qword_140439EE0 - 0x3FFFE0000000000LL;
    }
    RtlInitializeHistoryTable();
    MiFlags |= 0x1000000u;
    qword_14043DE00[0] = 0LL;
    MmConfigurePrefetchSeekThreshold(32);
    PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
    MiEnablePagingTheExecutive();
    ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
    MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
    qword_14043BE90 = MiAllocateDummyPage();
    qword_14043BE98 = (qword_14043BE90 + 0x58000000000LL) / 48;
    v12 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
    MmBadPointer = (PVOID)v12;
    if ( v12 )
    {
      MmBadPointer = (PVOID)((__int64)(v12 << 25) >> 16);
      if ( (unsigned int)MiInitializeRelocations() )
      {
        MiInitializeTbFlushing();
        qword_14043C008 = (__int64)&qword_14043C000;
        qword_14043C000 = (__int64)&qword_14043C000;
        return 1;
      }
    }
  }
  return 0;
}
