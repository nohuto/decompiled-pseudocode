/*
 * XREFs of MiInitSystem @ 0x1409F0D98
 * Callers:
 *     MmInitSystem @ 0x1409F0CD4 (MmInitSystem.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x1400065C0 (PsGetCurrentProcess.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     PsSetPagePriorityThread @ 0x140080C54 (PsSetPagePriorityThread.c)
 *     MiSetPageTablePfnBuddy @ 0x140090FDC (MiSetPageTablePfnBuddy.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MmUnlockPagableImageSection @ 0x14012A480 (MmUnlockPagableImageSection.c)
 *     KeFlushCurrentTbOnly @ 0x14017A8A0 (KeFlushCurrentTbOnly.c)
 *     MiCreateZeroThreadContext @ 0x14018892C (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x1401889E4 (MiStoreChargeReservedPages.c)
 *     ExInitializePagedHeaps @ 0x140196144 (ExInitializePagedHeaps.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14019B4EC (MiInitializeWorkingSetManagerParameters.c)
 *     MiSetSlabAllocatorPolicy @ 0x14019E34C (MiSetSlabAllocatorPolicy.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KdSetDbgPrintBufferSize @ 0x1402A2660 (KdSetDbgPrintBufferSize.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140672580 (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x1406A5750 (MmLockPagableDataSection.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1406F1E68 (MmConfigurePrefetchSeekThreshold.c)
 *     MiInitializeSystemSpaceMap @ 0x140741E84 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x140741FC8 (MiInitializeSystemWorkingSetList.c)
 *     MiWriteProtectSystemImages @ 0x14074F13C (MiWriteProtectSystemImages.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14074F4FC (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     TlgRegisterAggregateProviderEx @ 0x14074F5A0 (TlgRegisterAggregateProviderEx.c)
 *     MiInitializeMemoryEvents @ 0x14074F91C (MiInitializeMemoryEvents.c)
 *     MiGenerateSecureCookie @ 0x14078B8E4 (MiGenerateSecureCookie.c)
 *     MiInitializeDriverImages @ 0x1409EE5A4 (MiInitializeDriverImages.c)
 *     MiAddLoaderHalIoMappings @ 0x1409F12C0 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409F1380 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x1409F13FC (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x1409F1488 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x1409F1568 (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x1409F1634 (MiInitializeMirroring.c)
 *     MiInitializeModifiedWriterParameters @ 0x1409F1784 (MiInitializeModifiedWriterParameters.c)
 *     MiComputeOptimalZeroPath @ 0x1409F1D1C (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x1409F1F7C (MiInitializeCacheFlushing.c)
 *     MiInitializePartitions @ 0x1409F24C0 (MiInitializePartitions.c)
 *     MiInitializeTbFlushing @ 0x140A0F884 (MiInitializeTbFlushing.c)
 *     MiInitializeLoadedModuleList @ 0x140A14554 (MiInitializeLoadedModuleList.c)
 *     MiCreateEnclaveRegions @ 0x140A19A58 (MiCreateEnclaveRegions.c)
 *     MiInitializeRetpoline @ 0x140A19AE8 (MiInitializeRetpoline.c)
 *     PsInitializeQuotaSystem @ 0x140A1ACFC (PsInitializeQuotaSystem.c)
 *     MiAllocateDummyPage @ 0x140A1B128 (MiAllocateDummyPage.c)
 *     RtlInitializeHistoryTable @ 0x140A1BA60 (RtlInitializeHistoryTable.c)
 *     MiInitializeSharedUserData @ 0x140A1D07C (MiInitializeSharedUserData.c)
 *     MiInitializeRelocations @ 0x140A1EE08 (MiInitializeRelocations.c)
 *     MiSectionInitialization @ 0x140A1F1D8 (MiSectionInitialization.c)
 *     MiInitializeBootProcess @ 0x140A204D0 (MiInitializeBootProcess.c)
 *     MiInitializeSessionIds @ 0x140A20D7C (MiInitializeSessionIds.c)
 *     MiInitializeCfg @ 0x140A21434 (MiInitializeCfg.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A22C18 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A22D28 (MiHotAddBootDeferredDescriptors.c)
 *     MiInitializeKernelCfg @ 0x140A22EF8 (MiInitializeKernelCfg.c)
 *     MiMapBBTMemory @ 0x140A23054 (MiMapBBTMemory.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A3CB70 (MiCreateSlabAllocationsFromKernelHal.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rax
  __int64 v4; // rax
  int v5; // eax
  ULONG_PTR v6; // rax
  _KPROCESS *CurrentProcess; // rbx
  int v9; // r14d
  PKSTART_ROUTINE *i; // r15
  HANDLE ThreadHandle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-30h] BYREF

  v12[0] = KeBalanceSetManager;
  v12[1] = KeSwapProcessOrStack;
  v12[2] = MiZeroPageThread;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      CurrentProcess = PsGetCurrentProcess();
      MiSetPageTablePfnBuddy(
        48 * (CurrentProcess->DirectoryTableBase >> 12) - 0x58000000000LL,
        (__int64)CurrentProcess,
        0);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&CurrentProcess[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      MiHotAddBootDeferredDescriptors();
      MiMapBBTMemory(a2);
      if ( (unsigned int)MiSectionInitialization() && (int)MiInitializeCfg() >= 0 )
      {
        if ( (unsigned int)MiCreateEnclaveRegions(a2) )
        {
          qword_140465DC8 = 0LL;
          qword_140466688 = (__int64)&qword_140466680;
          qword_140466680 = (__int64)&qword_140466680;
          MiInitializeSessionIds();
          if ( (unsigned int)MiInitializePartitions(1LL) )
          {
            MiInitializeCacheFlushing();
            MiComputeOptimalZeroPath();
            if ( MiInitializeMemoryEvents(&MiSystemPartition) )
            {
              if ( (unsigned int)MiStoreChargeReservedPages() )
              {
                MiInitializeModifiedWriterParameters();
                qword_140469EA0 = (__int64)MiCreateZeroThreadContext(0LL, 0);
                if ( qword_140469EA0 )
                {
                  v9 = 0;
                  for ( i = (PKSTART_ROUTINE *)v12;
                        PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, &MiSystemPartition) >= 0;
                        ++i )
                  {
                    ObCloseHandle(ThreadHandle, 0);
                    if ( (unsigned int)++v9 >= 3 )
                    {
                      if ( !(unsigned int)MiInitializeMirroring() )
                        return 0;
                      qword_1404656C0 = 0LL;
                      MiWriteProtectSystemImages();
                      _InterlockedDecrement(&dword_140466608);
                      return (int)MiInitializeApiSets(a2) >= 0;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          byte_140466039 = 32;
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TlgRegisterAggregateProviderEx(&stru_140426F48, (TLG_PENABLECALLBACK)MiTracingEnabledCallback, 0LL);
      hProvider = &stru_140426F48;
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_140465F70 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)0x20);
    _InterlockedIncrement(&dword_140466608);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
    {
      if ( (int)ExInitializePagedHeaps() >= 0 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        if ( (unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, 0LL) )
        {
          if ( (unsigned __int8)PsInitializeQuotaSystem(0LL) )
          {
            qword_140465728 = MiGenerateSecureCookie();
            Seed = 305419896;
            if ( (unsigned int)MiInitializeSharedUserData() )
            {
              if ( (int)MiInitializeBootProcess() >= 0 )
              {
                KeFlushCurrentTbOnly(3u);
                MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
                MiAddLoaderHalIoMappings(qword_1404672F0, qword_1404672F0 + 0x7FFFFFFFFFLL);
                if ( (_DWORD)KdPrintBufferAllocateSize )
                  KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
                MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
                *(_QWORD *)&MiGlobalHotPatchList = 0LL;
                MiUserSidPatchLists = 0LL;
                MiSecureImageActivePatches = 0LL;
                MiHotPatchListLock = 0LL;
                v4 = *(_QWORD *)(a2 + 240);
                MiHotPatchGeneration = 1;
                dword_1404645B0 = (*(_DWORD *)(v4 + 3448) + 4095) & 0xFFFFF000;
                MiUserHotPatchReserveSize = dword_1404645B0;
                if ( (int)MiInitializeRetpoline() >= 0
                  && ((MiFlags & 4) == 0
                   || (MiFlags & 0x20000000) == 0
                   || (int)MiCreateSlabAllocationsFromKernelHal() >= 0)
                  && (int)MiCreateSlabAllocationsFromLoaderBlock(a2) >= 0
                  && (unsigned int)MiInitializeDriverImages(a2) )
                {
                  v5 = -1;
                  if ( qword_14046A090 <= 0xFFFFFFFF )
                    v5 = qword_14046A090;
                  MEMORY[0xFFFFF780000002E8] = v5;
                  MEMORY[0xFFFFF78000000244] = 0;
                  MiInitializeSystemSpaceMap(qword_140464660);
                  qword_140464438 = 0LL;
                  qword_140465DE8 = 0LL;
                  qword_140465DF8 = 0LL;
                  if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
                  {
                    if ( (int)MiInitializeKernelCfg() >= 0 )
                    {
                      RtlInitializeHistoryTable();
                      MiFlags |= 0x1000000u;
                      qword_1404685C8[0] = 0LL;
                      MmConfigurePrefetchSeekThreshold(32);
                      PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                      MiEnablePagingTheExecutive();
                      ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                      MmUnlockPagableImageSection(ExPageLockHandle);
                      qword_140466550 = MiAllocateDummyPage();
                      qword_140466558 = (qword_140466550 + 0x58000000000LL) / 48;
                      v6 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1);
                      MmBadPointer = (PVOID)v6;
                      if ( v6 )
                      {
                        MmBadPointer = (PVOID)((__int64)(v6 << 25) >> 16);
                        if ( (unsigned int)MiInitializeRelocations() )
                        {
                          MiInitializeTbFlushing();
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
