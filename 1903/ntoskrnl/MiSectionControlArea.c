/*
 * XREFs of MiSectionControlArea @ 0x1400717E0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x140074B60 (MmMapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiCreateSystemSection @ 0x140154C34 (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14017A5F4 (MiCountSystemImageCommitment.c)
 *     MiReferenceAweHandle @ 0x1402D7910 (MiReferenceAweHandle.c)
 *     MiCreateSectionCommon @ 0x1405D6500 (MiCreateSectionCommon.c)
 *     MiCfgMarkValidEntries @ 0x1405EC3AC (MiCfgMarkValidEntries.c)
 *     MiSectionDelete @ 0x140607970 (MiSectionDelete.c)
 *     MiSectionClose @ 0x140608690 (MiSectionClose.c)
 *     MiSectionOpen @ 0x1406086C0 (MiSectionOpen.c)
 *     MiMapParametersInitialize @ 0x140608C30 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140608D80 (MiMapViewOfSection.c)
 *     MmCreateSpecialImageSection @ 0x140618DD8 (MmCreateSpecialImageSection.c)
 *     PsReferenceProcessFilePointer @ 0x140619870 (PsReferenceProcessFilePointer.c)
 *     PspInitializeFullProcessImageName @ 0x140627218 (PspInitializeFullProcessImageName.c)
 *     MiMapViewInSystemSpace @ 0x14066E434 (MiMapViewInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14066E880 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapExParametersInitialize @ 0x140678B84 (MiMapExParametersInitialize.c)
 *     MmGetFileObjectForSection @ 0x14068A83C (MmGetFileObjectForSection.c)
 *     MmGetSectionInformation @ 0x14068D080 (MmGetSectionInformation.c)
 *     MiComputeProcessUserVa @ 0x1406929BC (MiComputeProcessUserVa.c)
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 *     MmChangeImageProtection @ 0x1406A5FC0 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     PsQuerySectionSignatureInformation @ 0x1406CBE80 (PsQuerySectionSignatureInformation.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406E14E4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCheckImageMapping @ 0x1406E4008 (MmCheckImageMapping.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14070E208 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x14070E4FC (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x14070F5A4 (MiMapSystemImage.c)
 *     MiIsImageFullyRetpolined @ 0x14070F974 (MiIsImageFullyRetpolined.c)
 *     MiConstructLoaderEntry @ 0x14070FBA0 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140710698 (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x140710A34 (MiChargeSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 *     MiCompactServiceTable @ 0x140740E58 (MiCompactServiceTable.c)
 *     MiReturnSystemImageCommitment @ 0x140746A60 (MiReturnSystemImageCommitment.c)
 *     MiWriteProtectSystemImages @ 0x14074E6AC (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x140887264 (MmGetFileNameForSection.c)
 *     MmGetImageSectionBasedAddress @ 0x140887644 (MmGetImageSectionBasedAddress.c)
 *     MiLogSectionObjectEvent @ 0x14088A950 (MiLogSectionObjectEvent.c)
 *     MmHasImageBeenImportOptimized @ 0x14088D3F8 (MmHasImageBeenImportOptimized.c)
 *     MiApplyDriverHotPatch @ 0x14088D4B4 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D86C (MiApplyHotPatchToLoadedDriver.c)
 *     MiLoadHotPatch @ 0x14088EEB0 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140890210 (MiOpenHotPatchFile.c)
 *     MmSectionToSectionObjectPointers @ 0x140892AE8 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x140894B78 (MiMapImageForEnclaveUse.c)
 *     MiCreateUserPhysicalView @ 0x14089646C (MiCreateUserPhysicalView.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 *     MmGetSectionStrongImageReference @ 0x140898EE0 (MmGetSectionStrongImageReference.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x14095FF80 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x140A21350 (MiInitializeCfg.c)
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
