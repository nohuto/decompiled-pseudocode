/*
 * XREFs of MiSectionControlArea @ 0x140071A50
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x140074DD0 (MmMapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiCreateSystemSection @ 0x1401552D4 (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14017ACE4 (MiCountSystemImageCommitment.c)
 *     MiReferenceAweHandle @ 0x1402D7670 (MiReferenceAweHandle.c)
 *     MiCreateSectionCommon @ 0x1405D6CC0 (MiCreateSectionCommon.c)
 *     MiCfgMarkValidEntries @ 0x1405ECB7C (MiCfgMarkValidEntries.c)
 *     MiSectionDelete @ 0x140609480 (MiSectionDelete.c)
 *     MiSectionClose @ 0x14060A1A0 (MiSectionClose.c)
 *     MiSectionOpen @ 0x14060A1D0 (MiSectionOpen.c)
 *     MiMapParametersInitialize @ 0x14060A740 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x14060A890 (MiMapViewOfSection.c)
 *     MmCreateSpecialImageSection @ 0x14061A8E8 (MmCreateSpecialImageSection.c)
 *     PsReferenceProcessFilePointer @ 0x14061B380 (PsReferenceProcessFilePointer.c)
 *     MmExtendSection @ 0x140624DB0 (MmExtendSection.c)
 *     PspInitializeFullProcessImageName @ 0x14062B0C8 (PspInitializeFullProcessImageName.c)
 *     MiMapViewInSystemSpace @ 0x140647E94 (MiMapViewInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406482E0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmGetFileObjectForSection @ 0x14065095C (MmGetFileObjectForSection.c)
 *     MmCheckImageMapping @ 0x140675304 (MmCheckImageMapping.c)
 *     MiMapExParametersInitialize @ 0x14067E4FC (MiMapExParametersInitialize.c)
 *     MiComputeProcessUserVa @ 0x140685F2C (MiComputeProcessUserVa.c)
 *     MmChangeImageProtection @ 0x1406A5850 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MmGetSectionInformation @ 0x1406C7100 (MmGetSectionInformation.c)
 *     PsQuerySectionSignatureInformation @ 0x1406CACB0 (PsQuerySectionSignatureInformation.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406E2B64 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14070FFE8 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x1407102DC (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x140711384 (MiMapSystemImage.c)
 *     MiIsImageFullyRetpolined @ 0x140711754 (MiIsImageFullyRetpolined.c)
 *     MiConstructLoaderEntry @ 0x140711980 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140712478 (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x140712814 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 *     MiCompactServiceTable @ 0x140742D58 (MiCompactServiceTable.c)
 *     MiReturnSystemImageCommitment @ 0x140748960 (MiReturnSystemImageCommitment.c)
 *     MiWriteProtectSystemImages @ 0x14074F13C (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x140886A90 (MmGetFileNameForSection.c)
 *     MmGetImageSectionBasedAddress @ 0x140886E70 (MmGetImageSectionBasedAddress.c)
 *     MiLogSectionObjectEvent @ 0x14088A170 (MiLogSectionObjectEvent.c)
 *     MmHasImageBeenImportOptimized @ 0x14088CC18 (MmHasImageBeenImportOptimized.c)
 *     MiApplyDriverHotPatch @ 0x14088CCD4 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D08C (MiApplyHotPatchToLoadedDriver.c)
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x14088FA30 (MiOpenHotPatchFile.c)
 *     MmSectionToSectionObjectPointers @ 0x140892308 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x140894398 (MiMapImageForEnclaveUse.c)
 *     MiCreateUserPhysicalView @ 0x140895C8C (MiCreateUserPhysicalView.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140896F50 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x140898700 (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x14095FF80 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140A21434 (MiInitializeCfg.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSectionControlArea(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)(*(_QWORD *)(result + 40) + 16LL);
  if ( (v1 & 2) != 0 )
    return **(_QWORD **)(result + 40);
  return result;
}
