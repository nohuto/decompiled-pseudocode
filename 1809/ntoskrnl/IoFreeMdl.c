/*
 * XREFs of IoFreeMdl @ 0x1400E0B40
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B1900 (CcCopyBytesToUserBuffer.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCD0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E05F0 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x1400E07A4 (CcZeroDataInCache.c)
 *     IopDropIrp @ 0x1400E097C (IopDropIrp.c)
 *     CcMdlWriteComplete2 @ 0x1400E1908 (CcMdlWriteComplete2.c)
 *     CcPrepareMdlWrite @ 0x1400E1A20 (CcPrepareMdlWrite.c)
 *     MiZeroPageWrite @ 0x140128418 (MiZeroPageWrite.c)
 *     CcLockSystemCacheBuffer @ 0x140269A24 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x14026AFC0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x140270B14 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9894 (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405849A0 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     CcMdlRead @ 0x140662BB0 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x140662E84 (CcMdlReadComplete2.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14068FEC4 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406901F0 @ 0x1406901F0 (sub_1406901F0.c)
 *     sub_140691564 @ 0x140691564 (sub_140691564.c)
 *     AlpcpInitializeCompletionList @ 0x1406D4C00 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406D69E0 (AlpcpFreeCompletionList.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140706500 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x1408158E4 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140816C80 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817B10 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408198D8 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140819B48 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14081B03C (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408200F0 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140834B98 (PnprFreeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x140850F30 (NtFreeUserPhysicalPages.c)
 *     MiApplyImageHotPatch @ 0x1408546A8 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140856788 (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x140857F2C (MiReleaseHotPatchResources.c)
 *     ViAllocateMapRegisterFile @ 0x14092C790 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14092D524 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
