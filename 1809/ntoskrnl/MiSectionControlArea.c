/*
 * XREFs of MiSectionControlArea @ 0x140075E60
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     MiCreateSystemSection @ 0x1400F599C (MiCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14017353C (MiCountSystemImageCommitment.c)
 *     MiReferenceAweHandle @ 0x1402B1D5C (MiReferenceAweHandle.c)
 *     MiIsImageFullyRetpolined @ 0x140583274 (MiIsImageFullyRetpolined.c)
 *     MmHasImageBeenImportOptimized @ 0x1405832B0 (MmHasImageBeenImportOptimized.c)
 *     MiCreateSectionCommon @ 0x1405DE7A0 (MiCreateSectionCommon.c)
 *     MiMapViewInSystemSpace @ 0x1405E03F4 (MiMapViewInSystemSpace.c)
 *     MiMapViewOfSection @ 0x1405F0B10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405F1080 (MiMapParametersInitialize.c)
 *     MiSectionDelete @ 0x1405F1440 (MiSectionDelete.c)
 *     MiSectionOpen @ 0x1405F1620 (MiSectionOpen.c)
 *     MiSectionClose @ 0x1405F1B80 (MiSectionClose.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCfgMarkValidEntries @ 0x1405F731C (MiCfgMarkValidEntries.c)
 *     DbgkCreateThread @ 0x1405F8028 (DbgkCreateThread.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140609F94 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x14060B404 (MmCreateSpecialImageSection.c)
 *     MmGetFileObjectForSection @ 0x14061C2B0 (MmGetFileObjectForSection.c)
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 *     PsReferenceProcessFilePointer @ 0x14061DB90 (PsReferenceProcessFilePointer.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     PspInitializeFullProcessImageName @ 0x14065FCD4 (PspInitializeFullProcessImageName.c)
 *     MmGetSectionInformation @ 0x14066EA10 (MmGetSectionInformation.c)
 *     MiMapExParametersInitialize @ 0x14067802C (MiMapExParametersInitialize.c)
 *     MiComputeProcessUserVa @ 0x14067B2BC (MiComputeProcessUserVa.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140682AB0 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x1406832A4 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140683630 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 *     MiChargeSystemImageCommitment @ 0x1406843BC (MiChargeSystemImageCommitment.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     MmCheckImageMapping @ 0x14068C770 (MmCheckImageMapping.c)
 *     PsQuerySectionSignatureInformation @ 0x1406AC390 (PsQuerySectionSignatureInformation.c)
 *     MiFreeInitializationCode @ 0x1406C8ABC (MiFreeInitializationCode.c)
 *     MiReturnSystemImageCommitment @ 0x1407105DC (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x1407195C8 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x14072C7D0 (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x14084CFC4 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x14084FAC8 (MiLogSectionObjectEvent.c)
 *     MiCreateUserPhysicalView @ 0x140850D4C (MiCreateUserPhysicalView.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140852170 (NtFreeUserPhysicalPages.c)
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140857B4C (MiOpenHotPatchFile.c)
 *     MmSectionToSectionObjectPointers @ 0x14085A09C (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 *     MmGetSectionStrongImageReference @ 0x14085D5A8 (MmGetSectionStrongImageReference.c)
 *     VfDriverLoadImage @ 0x140922264 (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x1409BB28C (MiInitializeCfg.c)
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
