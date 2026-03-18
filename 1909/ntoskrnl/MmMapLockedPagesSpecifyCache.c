/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14002FE40
 * Callers:
 *     CcCompleteAsyncRead @ 0x140080CAC (CcCompleteAsyncRead.c)
 *     MiValidateInPage @ 0x14008D440 (MiValidateInPage.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     FsRtlCancelNotify @ 0x140119B30 (FsRtlCancelNotify.c)
 *     KeFlushIoBuffers @ 0x14011D370 (KeFlushIoBuffers.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     SmFpAllocate @ 0x1401491C4 (SmFpAllocate.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14014A2C8 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B900 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 *     SmMapPage @ 0x140151F2C (SmMapPage.c)
 *     MiValidatePagefilePageHash @ 0x140164C9C (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x140164F08 (MiWritePageFileHash.c)
 *     BgpFwAllocateMemory @ 0x1401793D0 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x14019D1C8 (PpmHeteroInitializeHgsSupport.c)
 *     CcLockSystemCacheBuffer @ 0x14027D2C4 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x1402B3650 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x1402C0E30 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x1402CBE58 (MiFlushFileOnlyMdl.c)
 *     MiGetWorkingSetInfo @ 0x1402D8390 (MiGetWorkingSetInfo.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140308C48 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140308F48 (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x140326770 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x140327D0C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140327F00 (MdlInvariantPreProcessing1.c)
 *     PopAllocatePages @ 0x14059B524 (PopAllocatePages.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B4584 (WbMakeUserDataPagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     MiCreateMdl @ 0x140646858 (MiCreateMdl.c)
 *     ExLockUserBuffer @ 0x1406A49BC (ExLockUserBuffer.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406AFD20 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C0810 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C14D0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406C1B14 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x1406C2F48 (AlpcpInitializeCompletionList.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x14088D364 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140893FA8 (MiLoadSectionIntoVsmEnclave.c)
 *     NtStartProfile @ 0x140917BD0 (NtStartProfile.c)
 *     ViAllocateMapRegisterFile @ 0x14096B000 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x14096C290 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x14096C9A8 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409844E0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140984D18 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x14098E080 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x1409FE9FC (KiComputeNumaCosts.c)
 *     ExInitializeLeapSecondData @ 0x140A0EDE8 (ExInitializeLeapSecondData.c)
 * Callees:
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MiMappingHasIoReferences @ 0x1400F6E30 (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x1402C516C (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1402E7A3C (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140713B18 (MiMapLockedPagesInUserSpace.c)
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
    if ( ((qword_140465968 << 9) - qword_1404666F8) << 12 < v13
      && (v12 >= qword_140466718 || v10 >= qword_140466718 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_1404666E8;
      return 0LL;
    }
  }
  v14 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v14 = v10 + 1;
  v15 = MiReservePtes(&qword_1404666C0, v14);
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
  MiReleasePtes(&qword_1404666C0, v16, v14);
  return 0LL;
}
