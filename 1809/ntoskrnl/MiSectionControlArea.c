/*
 * XREFs of MiSectionControlArea @ 0x140075E70
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x1400AD910 (MmMapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x1400F58FC (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14017341C (MiCountSystemImageCommitment.c)
 *     MiReferenceAweHandle @ 0x1402B1A6C (MiReferenceAweHandle.c)
 *     MiIsImageFullyRetpolined @ 0x140582274 (MiIsImageFullyRetpolined.c)
 *     MmHasImageBeenImportOptimized @ 0x1405822B0 (MmHasImageBeenImportOptimized.c)
 *     MiCreateSectionCommon @ 0x1405DD7A0 (MiCreateSectionCommon.c)
 *     MiMapViewInSystemSpace @ 0x1405DF3F4 (MiMapViewInSystemSpace.c)
 *     MiMapViewOfSection @ 0x1405EFB10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405F0080 (MiMapParametersInitialize.c)
 *     MiSectionDelete @ 0x1405F0440 (MiSectionDelete.c)
 *     MiSectionOpen @ 0x1405F0620 (MiSectionOpen.c)
 *     MiSectionClose @ 0x1405F0B80 (MiSectionClose.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F3130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCfgMarkValidEntries @ 0x1405F631C (MiCfgMarkValidEntries.c)
 *     DbgkCreateThread @ 0x1405F7028 (DbgkCreateThread.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140608F94 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x14060A404 (MmCreateSpecialImageSection.c)
 *     MmGetFileObjectForSection @ 0x14061B2B0 (MmGetFileObjectForSection.c)
 *     MmExtendSection @ 0x14061C8CC (MmExtendSection.c)
 *     PsReferenceProcessFilePointer @ 0x14061CB90 (PsReferenceProcessFilePointer.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     MmChangeImageProtection @ 0x140651780 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     PspInitializeFullProcessImageName @ 0x14065EB34 (PspInitializeFullProcessImageName.c)
 *     MmGetSectionInformation @ 0x14066D870 (MmGetSectionInformation.c)
 *     MiMapExParametersInitialize @ 0x140676E8C (MiMapExParametersInitialize.c)
 *     MiComputeProcessUserVa @ 0x14067A11C (MiComputeProcessUserVa.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140681910 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140681C04 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x140682104 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140682490 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140682F60 (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x14068321C (MiChargeSystemImageCommitment.c)
 *     MiUseLargeDriverPage @ 0x140683280 (MiUseLargeDriverPage.c)
 *     MmCheckImageMapping @ 0x14068B5D0 (MmCheckImageMapping.c)
 *     PsQuerySectionSignatureInformation @ 0x1406AB110 (PsQuerySectionSignatureInformation.c)
 *     MiFreeInitializationCode @ 0x1406C783C (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x14070F35C (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x140718348 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x14072B600 (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x14084BD84 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x14084E888 (MiLogSectionObjectEvent.c)
 *     MiCreateUserPhysicalView @ 0x14084FB0C (MiCreateUserPhysicalView.c)
 *     NtAllocateUserPhysicalPages @ 0x1408506B0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140850F30 (NtFreeUserPhysicalPages.c)
 *     MiApplyDriverHotPatch @ 0x1408540A0 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408543E8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiLoadHotPatch @ 0x1408559F8 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x14085690C (MiOpenHotPatchFile.c)
 *     MmSectionToSectionObjectPointers @ 0x140858E5C (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A39C (MiLoadSectionIntoVsmEnclave.c)
 *     MmGetSectionStrongImageReference @ 0x14085C368 (MmGetSectionStrongImageReference.c)
 *     VfDriverLoadImage @ 0x140921264 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x1409BA28C (MiInitializeCfg.c)
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
