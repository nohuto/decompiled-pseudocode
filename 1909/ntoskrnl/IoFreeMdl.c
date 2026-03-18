/*
 * XREFs of IoFreeMdl @ 0x1400FEF60
 * Callers:
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     IopBuildDeviceIoControlRequest @ 0x14009AF50 (IopBuildDeviceIoControlRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B7C60 (CcCopyBytesToUserBuffer.c)
 *     CcMdlWriteComplete2 @ 0x1400FE680 (CcMdlWriteComplete2.c)
 *     CcZeroDataInCache @ 0x1400FEBC4 (CcZeroDataInCache.c)
 *     IopDropIrp @ 0x1400FEDA0 (IopDropIrp.c)
 *     MiZeroPageWrite @ 0x1400FF184 (MiZeroPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127C80 (IopBuildAsynchronousFsdRequest.c)
 *     CcPrepareMdlWrite @ 0x140136D70 (CcPrepareMdlWrite.c)
 *     CcLockSystemCacheBuffer @ 0x14027D2C4 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x14027E890 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x140284674 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CF8F0 (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B4584 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x140646CB0 (CcMdlRead.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406AFD20 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406B1434 @ 0x1406B1434 (sub_1406B1434.c)
 *     MiDeleteImageCreationMdls @ 0x1406B1484 (MiDeleteImageCreationMdls.c)
 *     CcMdlReadComplete2 @ 0x1406B15A4 (CcMdlReadComplete2.c)
 *     AlpcpInitializeCompletionList @ 0x1406C2F48 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406F94F8 (AlpcpFreeCompletionList.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14072F0B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x14084EAD0 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14084FE80 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140850C28 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853224 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x140859840 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x14086EC08 (PnprFreeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x14088D364 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x14088F8AC (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x140891348 (MiReleaseHotPatchResources.c)
 *     NtFreeUserPhysicalPages @ 0x140896F50 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408A795C (PopReadPagesFromHiberFile.c)
 *     ViAllocateMapRegisterFile @ 0x14096B000 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14096BD94 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  CSHORT MdlFlags; // ax
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  MdlFlags = Mdl->MdlFlags;
  if ( (MdlFlags & 0x20) != 0 )
  {
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    MdlFlags = Mdl->MdlFlags;
  }
  if ( (MdlFlags & 8) != 0 )
  {
    v3 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = 0LL;
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3];
    }
    if ( !CurrentPrcb )
      CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[3].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)Mdl);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(PMDL))P->FreeEx)(Mdl);
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
