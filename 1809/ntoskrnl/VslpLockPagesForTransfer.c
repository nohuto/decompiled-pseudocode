/*
 * XREFs of VslpLockPagesForTransfer @ 0x14027C514
 * Callers:
 *     VslAllocatePool @ 0x14027AC10 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14027B038 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x14027B1EC (VslGetEtwDebugId.c)
 *     VslIumEfiRuntimeService @ 0x14027B640 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14027B97C (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14027BAF0 (VslRegisterLogPages.c)
 *     VslCreateSecureImageSection @ 0x14027C800 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14027C900 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x14027CC40 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x14027CEB0 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14027D170 (VslValidateSecureImagePages.c)
 *     VslCreateEnclave @ 0x140817F4C (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x1408180F0 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x140818364 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x1408186E0 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x1408188CC (VslGetSetSecureContext.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B74 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140818E74 (VslStartSecureProcessor.c)
 *     VslConnectSwInterrupt @ 0x1409CC3E8 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x140101FC0 (MmBuildMdlForNonPagedPool.c)
 *     VslpLockMdlForTransfer @ 0x14027C488 (VslpLockMdlForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
    MiProbeAndLockPages((__int64)PoolWithTag, 0, v11);
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
