/*
 * XREFs of IoFreeMdl @ 0x1400FCDD0
 * Callers:
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x1400D7DE0 (CcCopyBytesToUserBuffer.c)
 *     CcMdlWriteComplete2 @ 0x1400FC4F0 (CcMdlWriteComplete2.c)
 *     CcZeroDataInCache @ 0x1400FCA34 (CcZeroDataInCache.c)
 *     IopDropIrp @ 0x1400FCC10 (IopDropIrp.c)
 *     MiZeroPageWrite @ 0x1400FCFF4 (MiZeroPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127260 (IopBuildAsynchronousFsdRequest.c)
 *     CcPrepareMdlWrite @ 0x1401363D0 (CcPrepareMdlWrite.c)
 *     CcLockSystemCacheBuffer @ 0x14027D564 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x14027EB30 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x140284914 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CFB90 (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B41A8 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x14066D250 (CcMdlRead.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406ADDF0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406AF504 @ 0x1406AF504 (sub_1406AF504.c)
 *     MiDeleteImageCreationMdls @ 0x1406AF554 (MiDeleteImageCreationMdls.c)
 *     CcMdlReadComplete2 @ 0x1406AF674 (CcMdlReadComplete2.c)
 *     AlpcpInitializeCompletionList @ 0x1406C3DE8 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406F7738 (AlpcpFreeCompletionList.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14072D1E0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x14084F3D0 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140850780 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140851528 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853B24 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14085A140 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x14086F508 (PnprFreeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x14088DB44 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x14089008C (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x140891B28 (MiReleaseHotPatchResources.c)
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408A80FC (PopReadPagesFromHiberFile.c)
 *     ViAllocateMapRegisterFile @ 0x14096B000 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14096BD94 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
