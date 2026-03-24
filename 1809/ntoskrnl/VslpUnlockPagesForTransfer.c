/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x14027C6F0
 * Callers:
 *     VslFinishStartSecureProcessor @ 0x14027B038 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14027B1A0 (VslFreePoolTransferObject.c)
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
 *     VslLoadEnclaveModule @ 0x140818A74 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B74 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140818E74 (VslStartSecureProcessor.c)
 *     VslConnectSwInterrupt @ 0x1409CC3E8 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
