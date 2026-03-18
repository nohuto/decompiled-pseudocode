/*
 * XREFs of VslpLockPagesForTransfer @ 0x140290AEC
 * Callers:
 *     VslAllocatePool @ 0x14028ED38 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14028F284 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x14028F46C (VslGetEtwDebugId.c)
 *     VslIumEfiRuntimeService @ 0x14028FA90 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14028FE24 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14028FFD0 (VslRegisterLogPages.c)
 *     VslCreateSecureImageSection @ 0x140290E10 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x140290F10 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x140291330 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x1402915E0 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x140291930 (VslValidateSecureImagePages.c)
 *     VslCapturePgoData @ 0x140851060 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x140851234 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x140851430 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x1408516EC (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x140851B38 (VslGetOnDemandDebugChallenge.c)
 *     VslInitializeEnclave @ 0x140851E20 (VslInitializeEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140852258 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14085260C (VslStartSecureProcessor.c)
 *     VslCaptureSecureImageIat @ 0x140852AD8 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A12074 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400F27E0 (MmBuildMdlForNonPagedPool.c)
 *     VslpLockMdlForTransfer @ 0x140290A60 (VslpLockMdlForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, __int64 a2, ULONG a3, int a4, char a5)
{
  __int16 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned int v10; // eax
  int v11; // r14d
  struct _MDL *PoolWithTag; // rax
  __int64 v13; // rbx
  int v15; // edi

  v8 = a2;
  v9 = ((a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12;
  v10 = 8 * v9 + 48;
  v11 = 1;
  if ( (a5 & 1) != 0 )
    v10 = 4096;
  if ( (a5 & 4) != 0 )
    v10 = (v10 + 4095) & 0xFFFFF000;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x54736D56u);
  v13 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * (v9 + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = v8 & 0xFFF;
  PoolWithTag->ByteCount = a3;
  if ( (a5 & 6) != 0 )
  {
    MmBuildMdlForNonPagedPool(PoolWithTag);
  }
  else if ( a3 )
  {
    if ( !a4 )
      v11 = 0;
    MiProbeAndLockPages(PoolWithTag, 0, v11);
  }
  v15 = VslpLockMdlForTransfer(a1, v13, a5);
  if ( v15 >= 0 )
  {
    *(_DWORD *)(a1 + 64) |= 8u;
    return 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
      MmUnlockPages((PMDL)v13);
    ExFreePoolWithTag((PVOID)v13, 0);
    return (unsigned int)v15;
  }
}
