/*
 * XREFs of IoFreeMdl @ 0x1400E0B60
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B1920 (CcCopyBytesToUserBuffer.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCF0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E0610 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x1400E07C4 (CcZeroDataInCache.c)
 *     IopDropIrp @ 0x1400E099C (IopDropIrp.c)
 *     CcMdlWriteComplete2 @ 0x1400E1928 (CcMdlWriteComplete2.c)
 *     CcPrepareMdlWrite @ 0x1400E1A40 (CcPrepareMdlWrite.c)
 *     MiZeroPageWrite @ 0x140128438 (MiZeroPageWrite.c)
 *     CcLockSystemCacheBuffer @ 0x140269B24 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x14026B0C0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x140270C14 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9994 (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405849A0 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     CcMdlRead @ 0x140662B90 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x140662E64 (CcMdlReadComplete2.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14068FEA4 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406901D0 @ 0x1406901D0 (sub_1406901D0.c)
 *     sub_140691544 @ 0x140691544 (sub_140691544.c)
 *     AlpcpInitializeCompletionList @ 0x1406D4BE0 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406D69C0 (AlpcpFreeCompletionList.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1407064E0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x1408158C4 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140816C60 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817AF0 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408198B8 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140819B28 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14081B01C (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408200D0 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140834B78 (PnprFreeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x140850F10 (NtFreeUserPhysicalPages.c)
 *     MiApplyImageHotPatch @ 0x140854688 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140856768 (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x140857F0C (MiReleaseHotPatchResources.c)
 *     ViAllocateMapRegisterFile @ 0x14092C790 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14092D524 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
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
