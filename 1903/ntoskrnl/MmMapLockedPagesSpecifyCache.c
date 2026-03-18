/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14002FA50
 * Callers:
 *     CcCompleteAsyncRead @ 0x1400808AC (CcCompleteAsyncRead.c)
 *     MiValidateInPage @ 0x140098340 (MiValidateInPage.c)
 *     MiInitializeImageProtos @ 0x1400A2264 (MiInitializeImageProtos.c)
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     FsRtlCancelNotify @ 0x14011B700 (FsRtlCancelNotify.c)
 *     KeFlushIoBuffers @ 0x14011CE50 (KeFlushIoBuffers.c)
 *     SmFpAllocate @ 0x140148B24 (SmFpAllocate.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140149C28 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B260 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiMapPageFileHash @ 0x14014D0CC (MiMapPageFileHash.c)
 *     SmMapPage @ 0x14015188C (SmMapPage.c)
 *     MiValidatePagefilePageHash @ 0x14016524C (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x1401654B8 (MiWritePageFileHash.c)
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x14019CA48 (PpmHeteroInitializeHgsSupport.c)
 *     CcLockSystemCacheBuffer @ 0x14027D564 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x1402B38F0 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x1402C10D0 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x1402CC0F8 (MiFlushFileOnlyMdl.c)
 *     MiGetWorkingSetInfo @ 0x1402D8630 (MiGetWorkingSetInfo.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140309198 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140309498 (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x140326D20 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1403282BC (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1403284B0 (MdlInvariantPreProcessing1.c)
 *     PopAllocatePages @ 0x14059B544 (PopAllocatePages.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B41A8 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x14064CFB0 (MmCopyVirtualMemory.c)
 *     MiCreateMdl @ 0x14068BA40 (MiCreateMdl.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406ADDF0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C1620 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C22E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406C2924 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x1406C3DE8 (AlpcpInitializeCompletionList.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x14088DB44 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 *     NtStartProfile @ 0x140918170 (NtStartProfile.c)
 *     ViAllocateMapRegisterFile @ 0x14096B000 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x14096C290 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x14096C9A8 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409844E0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140984D18 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x14098E080 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x1409FE4E0 (KiComputeNumaCosts.c)
 *     ExInitializeLeapSecondData @ 0x140A0E650 (ExInitializeLeapSecondData.c)
 * Callees:
 *     MiFillSystemPtes @ 0x14002FC70 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiProtectionToCacheAttribute @ 0x1400A456C (MiProtectionToCacheAttribute.c)
 *     MiMappingHasIoReferences @ 0x140118D10 (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x1402C540C (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1402E7CDC (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140711D38 (MiMapLockedPagesInUserSpace.c)
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
  signed int v9; // esi
  unsigned __int64 v10; // rbp
  ULONG v11; // ecx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v17; // ecx
  void *locked; // rdi
  unsigned int v19; // r14d
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
    if ( ((qword_140465C68 << 9) - qword_1404669F8) << 12 < v13
      && (v12 >= qword_140466A18 || v10 >= qword_140466A18 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_1404669E8;
      return 0LL;
    }
  }
  v14 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v14 = v10 + 1;
  v15 = MiReservePtes(&qword_1404669C0, v14);
  v16 = v15;
  if ( !v15 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 0x2000) != 0 || !BugCheckOnFailure )
      return 0LL;
    goto LABEL_39;
  }
  v17 = ((v9 >> 31) & 0xFFFFFFFD) + 4;
  locked = (void *)(MemoryDescriptorList->ByteOffset + (v15 << 25 >> 16));
  if ( (MiFlags & 0x10000) != 0 )
    v9 = 0x40000000;
  v19 = v17 | 2;
  if ( (v9 & 0x40000000) != 0 )
    v19 = v17;
  if ( CacheType )
  {
    if ( CacheType == MmWriteCombined )
      v19 |= 0x18u;
  }
  else
  {
    v19 |= 8u;
  }
  v20 = MiFillSystemPtes(v15, v10, (int)MemoryDescriptorList + 48, v19, 0, (__int64)&v27);
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
    if ( (dword_14057118C & 1) != 0 )
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
LABEL_39:
    MiIssueNoPtesBugcheck((unsigned int)v10);
  MiReleasePtes(&qword_1404669C0, v16, v14);
  return 0LL;
}
