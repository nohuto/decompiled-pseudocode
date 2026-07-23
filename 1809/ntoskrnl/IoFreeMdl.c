/*
 * XREFs of IoFreeMdl @ 0x1400E0BE0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B1860 (CcCopyBytesToUserBuffer.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E0690 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x1400E0844 (CcZeroDataInCache.c)
 *     IopDropIrp @ 0x1400E0A1C (IopDropIrp.c)
 *     CcMdlWriteComplete2 @ 0x1400E19A8 (CcMdlWriteComplete2.c)
 *     CcPrepareMdlWrite @ 0x1400E1AC0 (CcPrepareMdlWrite.c)
 *     MiZeroPageWrite @ 0x140128508 (MiZeroPageWrite.c)
 *     CcLockSystemCacheBuffer @ 0x140269D14 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x14026B2B0 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x140270E04 (HvlGetCoverageData.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405859A0 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 *     CcMdlRead @ 0x140663D50 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x140664024 (CcMdlReadComplete2.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140691064 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 *     sub_140692704 @ 0x140692704 (sub_140692704.c)
 *     AlpcpInitializeCompletionList @ 0x1406D5E80 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406D7C60 (AlpcpFreeCompletionList.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140707780 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x140816AC4 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140817E60 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140818CF0 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x14081AAB8 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408212D0 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140835DD8 (PnprFreeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x140852170 (NtFreeUserPhysicalPages.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408579C8 (MiMapHotPatchImageInSystemSpace.c)
 *     MiReleaseHotPatchResources @ 0x14085916C (MiReleaseHotPatchResources.c)
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14092E524 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
