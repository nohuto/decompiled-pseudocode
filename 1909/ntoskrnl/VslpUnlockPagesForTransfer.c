/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140290CC8
 * Callers:
 *     VslFinishStartSecureProcessor @ 0x14028F284 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14028F420 (VslFreePoolTransferObject.c)
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
 *     VslLoadEnclaveData @ 0x14085203C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140852138 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140852258 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14085260C (VslStartSecureProcessor.c)
 *     VslCaptureSecureImageIat @ 0x140852AD8 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A12074 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
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
