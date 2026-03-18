/*
 * XREFs of VslpLockPagesForTransfer @ 0x140290D8C
 * Callers:
 *     VslAllocatePool @ 0x14028EFD8 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14028F524 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x14028F70C (VslGetEtwDebugId.c)
 *     VslIumEfiRuntimeService @ 0x14028FD30 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1402900C4 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x140290270 (VslRegisterLogPages.c)
 *     VslCreateSecureImageSection @ 0x1402910B0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1402911B0 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x1402915D0 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x140291880 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x140291BD0 (VslValidateSecureImagePages.c)
 *     VslCapturePgoData @ 0x140851960 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x140851B34 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x140851D30 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x140851FEC (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x140852438 (VslGetOnDemandDebugChallenge.c)
 *     VslInitializeEnclave @ 0x140852720 (VslInitializeEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140852B58 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140852F0C (VslStartSecureProcessor.c)
 *     VslCaptureSecureImageIat @ 0x1408533D8 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A118DC (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FA170 (MmBuildMdlForNonPagedPool.c)
 *     VslpLockMdlForTransfer @ 0x140290D00 (VslpLockMdlForTransfer.c)
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
