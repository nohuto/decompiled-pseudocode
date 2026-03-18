/*
 * XREFs of IoAllocateMdl @ 0x1400DFCB0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCD0 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E05F0 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x1400E07A4 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x1400E1A20 (CcPrepareMdlWrite.c)
 *     MiCreateMdl @ 0x140101F2C (MiCreateMdl.c)
 *     MiZeroPageWrite @ 0x140128418 (MiZeroPageWrite.c)
 *     CcLockSystemCacheBuffer @ 0x140269A24 (CcLockSystemCacheBuffer.c)
 *     HvlGetCoverageData @ 0x140270B14 (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x1402A9930 (MmAllocateMdlForIoSpace.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9894 (MiPrepareImagePagesForHotPatch.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405849A0 (WbMakeUserDataPagesKernelWritable.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     CcMdlRead @ 0x140662BB0 (CcMdlRead.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14068FEC4 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406901F0 @ 0x1406901F0 (sub_1406901F0.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B2850 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 *     AlpcpInitializeCompletionList @ 0x1406D4C00 (AlpcpInitializeCompletionList.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817B10 (HvlpDynamicUpdateMicrocode.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x14081B03C (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E860 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14081FEA8 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x140834FF0 (PnprInitializeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x140850F30 (NtFreeUserPhysicalPages.c)
 *     MiApplyImageHotPatch @ 0x1408546A8 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140856788 (MiMapHotPatchImageInSystemSpace.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1408C9DD4 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1408CA4FC (EtwpSavePersistedLogger.c)
 *     VerifierIoAllocateMdl @ 0x1409289E0 (VerifierIoAllocateMdl.c)
 *     VerifierPortIoAllocateMdl @ 0x140928EE0 (VerifierPortIoAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x14092A270 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x14092C790 (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C53B0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
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
