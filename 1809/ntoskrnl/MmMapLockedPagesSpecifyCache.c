/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14005C0C0
 * Callers:
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiInitializeImageProtos @ 0x1400930D8 (MiInitializeImageProtos.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     CcCompleteAsyncRead @ 0x1400DF3B4 (CcCompleteAsyncRead.c)
 *     FsRtlCancelNotify @ 0x14011B180 (FsRtlCancelNotify.c)
 *     KeFlushIoBuffers @ 0x14011CBB0 (KeFlushIoBuffers.c)
 *     SmMapPage @ 0x14014A87C (SmMapPage.c)
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14014C920 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D8C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     MiWritePageFileHash @ 0x1401515B8 (MiWritePageFileHash.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x140192BC0 (PpmHeteroInitializeHgsSupport.c)
 *     CcLockSystemCacheBuffer @ 0x140269D14 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x14029C7D8 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x1402A99E0 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x1402B605C (MiFlushFileOnlyMdl.c)
 *     MiGetWorkingSetInfo @ 0x1402BEEB4 (MiGetWorkingSetInfo.c)
 *     MiValidatePagefilePageHash @ 0x1402CC704 (MiValidatePagefilePageHash.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1402EB83C (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x1402EBB1C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x1403094CC (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x14030A83C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14030AA30 (MdlInvariantPreProcessing1.c)
 *     PopAllocatePages @ 0x14056CBD0 (PopAllocatePages.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405859A0 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140691064 (WbMakeUserExecutablePagesKernelWritable.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A2100 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406A26E8 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x1406D5E80 (AlpcpInitializeCompletionList.c)
 *     ExInitializeLeapSecondData @ 0x1407351B0 (ExInitializeLeapSecondData.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     NtStartProfile @ 0x1408DB6A0 (NtStartProfile.c)
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x14092EA20 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x14092F13C (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140945B10 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140946348 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x14094F080 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x1409C6C3C (KiComputeNumaCosts.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiMappingHasIoReferences @ 0x1400E647C (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x1402AD9F8 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1402CDCB0 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 */

PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  char *v8; // rcx
  signed int v9; // r15d
  unsigned __int64 v10; // rsi
  ULONG v11; // ecx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  void *locked; // rdi
  unsigned int v18; // eax
  unsigned int v19; // r13d
  int v20; // eax
  CSHORT MdlFlags; // cx
  char v22; // si
  CSHORT v23; // cx
  unsigned int v24; // esi
  unsigned int v26; // eax
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v8 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
  if ( AccessMode )
  {
    locked = (void *)MiMapLockedPagesInUserSpace(
                       (_DWORD)MemoryDescriptorList,
                       (_DWORD)v8,
                       CacheType,
                       (_DWORD)RequestedAddress,
                       Priority);
    if ( !locked )
      return 0LL;
    return locked;
  }
  v9 = Priority;
  v10 = (((unsigned __int16)v8 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
  if ( (Priority & 0x20) == 0 )
  {
    v11 = Priority & 0x3FFFFFFF;
    v12 = 512LL;
    if ( (Priority & 0x3FFFFFFF) != 0x10 )
      v12 = 2048LL;
    v13 = v11 == 16 ? 0x2000000LL : 0x4000000 / ((unsigned int)(v11 == 16) + 1);
    if ( ((qword_14043B2E8 << 9) - qword_14043C098) << 12 < v13
      && (v12 >= qword_14043C0B8 || v10 >= qword_14043C0B8 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_14043C088;
      return 0LL;
    }
  }
  v14 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v14 = v10 + 1;
  v15 = MiReservePtes(&qword_14043C060, v14);
  v16 = v15;
  if ( !v15 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 0x2000) != 0 || !BugCheckOnFailure )
      return 0LL;
    goto LABEL_38;
  }
  locked = (void *)(MemoryDescriptorList->ByteOffset + (v15 << 25 >> 16));
  v18 = (v9 >> 31) & 0xFFFFFFFD;
  v19 = v18 + 4;
  if ( (v9 & 0x40000000) == 0 )
  {
    v19 = v18 + 4;
    if ( (MiFlags & 0x10000) == 0 )
      v19 = (v18 + 4) | 2;
  }
  if ( CacheType )
  {
    if ( CacheType == MmWriteCombined )
      v19 |= 0x18u;
  }
  else
  {
    v19 |= 8u;
  }
  v20 = MiFillSystemPtes(v16, v10, (int)MemoryDescriptorList + 48, v19, 0, (__int64)&v27);
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( v20 >= 0 )
  {
    v22 = v27;
    v23 = MdlFlags | 1;
    MemoryDescriptorList->MappedSystemVa = locked;
    MemoryDescriptorList->MdlFlags = v23;
    v24 = v22 & 1;
    if ( v24 )
    {
      MiMappingHasIoReferences(locked);
      MemoryDescriptorList->MdlFlags |= 0x800u;
      v23 = MemoryDescriptorList->MdlFlags;
    }
    if ( (dword_14054117C & 1) != 0 )
    {
      if ( MmProtectFreedNonPagedPool == 1 )
        v24 |= 2u;
      v26 = MiProtectionToCacheAttribute(v19);
      MiInsertPteTracker(MemoryDescriptorList, 0LL, v24, v26);
      v23 = MemoryDescriptorList->MdlFlags;
    }
    if ( (v23 & 0x10) != 0 )
      MemoryDescriptorList->MdlFlags = v23 | 0x20;
    return locked;
  }
  if ( (MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
LABEL_38:
    MiIssueNoPtesBugcheck((unsigned int)v10);
  MiReleasePtes((__int64)&qword_14043C060, v16, v14);
  return 0LL;
}
