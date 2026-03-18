/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140290F68
 * Callers:
 *     VslFinishStartSecureProcessor @ 0x14028F524 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14028F6C0 (VslFreePoolTransferObject.c)
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
 *     VslLoadEnclaveData @ 0x14085293C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140852A38 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140852B58 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140852F0C (VslStartSecureProcessor.c)
 *     VslCaptureSecureImageIat @ 0x1408533D8 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A118DC (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
