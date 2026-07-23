/*
 * XREFs of VslpLockPagesForTransfer @ 0x14027C704
 * Callers:
 *     VslAllocatePool @ 0x14027AE00 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14027B228 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x14027B3DC (VslGetEtwDebugId.c)
 *     VslIumEfiRuntimeService @ 0x14027B830 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14027BB6C (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14027BCE0 (VslRegisterLogPages.c)
 *     VslCreateSecureImageSection @ 0x14027C9F0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14027CAF0 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x14027CE30 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x14027D0A0 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14027D360 (VslValidateSecureImagePages.c)
 *     VslCreateEnclave @ 0x14081914C (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x1408192F0 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x140819564 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x1408198E0 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x140819ACC (VslGetSetSecureContext.c)
 *     VslObtainHotPatchUndoTable @ 0x140819D74 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14081A074 (VslStartSecureProcessor.c)
 *     VslConnectSwInterrupt @ 0x1409CD3E8 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x140102040 (MmBuildMdlForNonPagedPool.c)
 *     VslpLockMdlForTransfer @ 0x14027C678 (VslpLockMdlForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
