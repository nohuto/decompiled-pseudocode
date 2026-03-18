/*
 * XREFs of IoAllocateMdl @ 0x1400369F0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x1400BB0E0 (IopBuildDeviceIoControlRequest.c)
 *     CcZeroDataInCache @ 0x1400FCA34 (CcZeroDataInCache.c)
 *     MiZeroPageWrite @ 0x1400FCFF4 (MiZeroPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127260 (IopBuildAsynchronousFsdRequest.c)
 *     CcPrepareMdlWrite @ 0x1401363D0 (CcPrepareMdlWrite.c)
 *     CcLockSystemCacheBuffer @ 0x14027D564 (CcLockSystemCacheBuffer.c)
 *     HvlGetCoverageData @ 0x140284914 (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x1402C1370 (MmAllocateMdlForIoSpace.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CFB90 (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B41A8 (WbMakeUserDataPagesKernelWritable.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     CcMdlRead @ 0x14066D250 (CcMdlRead.c)
 *     BuildQueryDirectoryIrp @ 0x140679180 (BuildQueryDirectoryIrp.c)
 *     MiCreateMdl @ 0x14068BA40 (MiCreateMdl.c)
 *     FsRtlKernelFsControlFile @ 0x14069D260 (FsRtlKernelFsControlFile.c)
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406ADDF0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     AlpcpInitializeCompletionList @ 0x1406C3DE8 (AlpcpInitializeCompletionList.c)
 *     NtQueryEaFile @ 0x1406CF9A0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0 (NtNotifyChangeDirectoryFileEx.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140851528 (HvlpDynamicUpdateMicrocode.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854B90 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x140858120 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140859EF8 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x14086F980 (PnprInitializeMappingReserve.c)
 *     MiApplyImageHotPatch @ 0x14088DB44 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x14089008C (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 *     PopReadPagesFromHiberFile @ 0x1408A80FC (PopReadPagesFromHiberFile.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140907288 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x140907A28 (EtwpSavePersistedLogger.c)
 *     VerifierIoAllocateMdl @ 0x140967050 (VerifierIoAllocateMdl.c)
 *     VerifierPortIoAllocateMdl @ 0x140967560 (VerifierPortIoAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140968990 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x14096B000 (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  __int16 v5; // si
  CSHORT v8; // r15
  unsigned __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rbp
  PMDL result; // rax
  unsigned int Number; // ecx
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  unsigned int v19; // eax
  PMDL MdlAddress; // rcx
  struct _MDL *i; // rdx

  v5 = (__int16)VirtualAddress;
  v8 = 0;
  v9 = (((unsigned __int16)VirtualAddress & 0xFFF) + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)v9 > 0x11 )
  {
    v19 = 8 * v9 + 48;
  }
  else
  {
    v8 = 8;
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalAllocates;
    result = (PMDL)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( result )
      goto LABEL_3;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[3].L;
    ++L->TotalAllocates;
    result = (PMDL)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( result
      || (Size = L->Size,
          AllocateEx = L->AllocateEx,
          Tag = L->Tag,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (result = (PMDL)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
    {
LABEL_3:
      LODWORD(result->Next) = CurrentPrcb->Number;
    }
    if ( result )
    {
      LOWORD(Number) = result->Next;
      goto LABEL_6;
    }
    v19 = 184;
  }
  result = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x206C644Du);
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_6:
  *(&result->MdlFlags + 1) = Number;
  result->Next = 0LL;
  result->Size = 8 * (v9 + 6);
  result->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  result->ByteOffset = v5 & 0xFFF;
  result->ByteCount = Length;
  result->MdlFlags = v8;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      MdlAddress = Irp->MdlAddress;
      for ( i = MdlAddress->Next; i; i = i->Next )
        MdlAddress = i;
      MdlAddress->Next = result;
    }
    else
    {
      Irp->MdlAddress = result;
    }
  }
  return result;
}
