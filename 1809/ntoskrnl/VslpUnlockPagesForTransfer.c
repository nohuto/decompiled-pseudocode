/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x14027C8E0
 * Callers:
 *     VslFinishStartSecureProcessor @ 0x14027B228 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14027B390 (VslFreePoolTransferObject.c)
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
 *     VslLoadEnclaveModule @ 0x140819C74 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140819D74 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14081A074 (VslStartSecureProcessor.c)
 *     VslConnectSwInterrupt @ 0x1409CD3E8 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 a1)
{
  struct _MDL *v2; // rcx

  if ( (*(_BYTE *)(a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 8));
  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
  {
    v2 = *(struct _MDL **)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 10LL) & 2) != 0 )
    {
      MmUnlockPages(v2);
      v2 = *(struct _MDL **)a1;
    }
    ExFreePoolWithTag(v2, 0);
  }
}
