/*
 * XREFs of MiInitSystem @ 0x1409F0E88
 * Callers:
 *     MmInitSystem @ 0x1409F0DC4 (MmInitSystem.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140006530 (PsGetCurrentProcess.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     PsSetPagePriorityThread @ 0x140080854 (PsSetPagePriorityThread.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiSetPageTablePfnBuddy @ 0x1400E3C7C (MiSetPageTablePfnBuddy.c)
 *     MmUnlockPagableImageSection @ 0x140129A60 (MmUnlockPagableImageSection.c)
 *     KeFlushCurrentTbOnly @ 0x14017A1B0 (KeFlushCurrentTbOnly.c)
 *     MiCreateZeroThreadContext @ 0x14018837C (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x140188434 (MiStoreChargeReservedPages.c)
 *     ExInitializePagedHeaps @ 0x140195964 (ExInitializePagedHeaps.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14019AE8C (MiInitializeWorkingSetManagerParameters.c)
 *     MiSetSlabAllocatorPolicy @ 0x14019DC2C (MiSetSlabAllocatorPolicy.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KdSetDbgPrintBufferSize @ 0x1402A2900 (KdSetDbgPrintBufferSize.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     MmLockPagableDataSection @ 0x1406A5EC0 (MmLockPagableDataSection.c)
 *     PsCreateSystemThread @ 0x1406B3FB0 (PsCreateSystemThread.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1406F03C8 (MmConfigurePrefetchSeekThreshold.c)
 *     MiInitializeSystemSpaceMap @ 0x14073FF84 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407400C8 (MiInitializeSystemWorkingSetList.c)
 *     MiWriteProtectSystemImages @ 0x14074E6AC (MiWriteProtectSystemImages.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14074EA6C (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     TlgRegisterAggregateProviderEx @ 0x14074EB10 (TlgRegisterAggregateProviderEx.c)
 *     MiInitializeMemoryEvents @ 0x14074EE8C (MiInitializeMemoryEvents.c)
 *     MiGenerateSecureCookie @ 0x140789484 (MiGenerateSecureCookie.c)
 *     MiInitializeDriverImages @ 0x1409EE68C (MiInitializeDriverImages.c)
 *     MiAddLoaderHalIoMappings @ 0x1409F13B0 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409F1470 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x1409F14EC (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x1409F1578 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x1409F1658 (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x1409F1724 (MiInitializeMirroring.c)
 *     MiInitializeModifiedWriterParameters @ 0x1409F1874 (MiInitializeModifiedWriterParameters.c)
 *     MiComputeOptimalZeroPath @ 0x1409F1E0C (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x1409F206C (MiInitializeCacheFlushing.c)
 *     MiInitializePartitions @ 0x1409F25B0 (MiInitializePartitions.c)
 *     MiInitializeTbFlushing @ 0x140A0F0EC (MiInitializeTbFlushing.c)
 *     MiInitializeLoadedModuleList @ 0x140A13DBC (MiInitializeLoadedModuleList.c)
 *     MiCreateEnclaveRegions @ 0x140A198C8 (MiCreateEnclaveRegions.c)
 *     MiInitializeRetpoline @ 0x140A19958 (MiInitializeRetpoline.c)
 *     PsInitializeQuotaSystem @ 0x140A1AA84 (PsInitializeQuotaSystem.c)
 *     MiAllocateDummyPage @ 0x140A1AEB0 (MiAllocateDummyPage.c)
 *     RtlInitializeHistoryTable @ 0x140A1BAE4 (RtlInitializeHistoryTable.c)
 *     MiInitializeSharedUserData @ 0x140A1CEA0 (MiInitializeSharedUserData.c)
 *     MiInitializeRelocations @ 0x140A1EC28 (MiInitializeRelocations.c)
 *     MiSectionInitialization @ 0x140A1EFF8 (MiSectionInitialization.c)
 *     MiInitializeBootProcess @ 0x140A202F0 (MiInitializeBootProcess.c)
 *     MiInitializeSessionIds @ 0x140A20B9C (MiInitializeSessionIds.c)
 *     MiInitializeCfg @ 0x140A21350 (MiInitializeCfg.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A22B38 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiHotAddBootDeferredDescriptors @ 0x140A22C48 (MiHotAddBootDeferredDescriptors.c)
 *     MiInitializeKernelCfg @ 0x140A22E18 (MiInitializeKernelCfg.c)
 *     MiMapBBTMemory @ 0x140A22F74 (MiMapBBTMemory.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A3CDA0 (MiCreateSlabAllocationsFromKernelHal.c)
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
          qword_1404660C8 = 0LL;
          qword_140466988 = (__int64)&qword_140466980;
          qword_140466980 = (__int64)&qword_140466980;
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
                qword_14046A160 = (__int64)MiCreateZeroThreadContext(0LL, 0);
                if ( qword_14046A160 )
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
                      qword_1404659C0 = 0LL;
                      MiWriteProtectSystemImages();
                      _InterlockedDecrement(&dword_140466908);
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
          byte_140466339 = 32;
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
    qword_140466270 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)0x20);
    _InterlockedIncrement(&dword_140466908);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
    {
      if ( (int)ExInitializePagedHeaps() >= 0 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        if ( (unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, 0LL) )
        {
          if ( (unsigned __int8)PsInitializeQuotaSystem(0LL) )
          {
            qword_140465A28 = MiGenerateSecureCookie();
            Seed = 305419896;
            if ( (unsigned int)MiInitializeSharedUserData() )
            {
              if ( (int)MiInitializeBootProcess() >= 0 )
              {
                KeFlushCurrentTbOnly(3u);
                MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
                MiAddLoaderHalIoMappings(qword_1404675F0, qword_1404675F0 + 0x7FFFFFFFFFLL);
                if ( (_DWORD)KdPrintBufferAllocateSize )
                  KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
                MiSetSlabAllocatorPolicy((__int64)&MiSystemPartition);
                *(_QWORD *)&MiGlobalHotPatchList = 0LL;
                MiUserSidPatchLists = 0LL;
                MiSecureImageActivePatches = 0LL;
                MiHotPatchListLock = 0LL;
                v4 = *(_QWORD *)(a2 + 240);
                MiHotPatchGeneration = 1;
                dword_1404648B0 = (*(_DWORD *)(v4 + 3448) + 4095) & 0xFFFFF000;
                MiUserHotPatchReserveSize = dword_1404648B0;
                if ( (int)MiInitializeRetpoline() >= 0
                  && ((MiFlags & 4) == 0
                   || (MiFlags & 0x20000000) == 0
                   || (int)MiCreateSlabAllocationsFromKernelHal() >= 0)
                  && (int)MiCreateSlabAllocationsFromLoaderBlock(a2) >= 0
                  && (unsigned int)MiInitializeDriverImages(a2) )
                {
                  v5 = -1;
                  if ( qword_14046A350 <= 0xFFFFFFFF )
                    v5 = qword_14046A350;
                  MEMORY[0xFFFFF780000002E8] = v5;
                  MEMORY[0xFFFFF78000000244] = 0;
                  MiInitializeSystemSpaceMap(qword_140464960);
                  qword_140464738 = 0LL;
                  qword_1404660E8 = 0LL;
                  qword_1404660F8 = 0LL;
                  if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
                  {
                    if ( (int)MiInitializeKernelCfg() >= 0 )
                    {
                      RtlInitializeHistoryTable();
                      MiFlags |= 0x1000000u;
                      qword_140468888[0] = 0LL;
                      MmConfigurePrefetchSeekThreshold(32);
                      PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                      MiEnablePagingTheExecutive();
                      ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                      MmUnlockPagableImageSection(ExPageLockHandle);
                      qword_140466850 = MiAllocateDummyPage();
                      qword_140466858 = (qword_140466850 + 0x58000000000LL) / 48;
                      v6 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
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
