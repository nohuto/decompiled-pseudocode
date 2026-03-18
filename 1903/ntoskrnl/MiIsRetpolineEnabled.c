/*
 * XREFs of MiIsRetpolineEnabled @ 0x140097E88
 * Callers:
 *     MmMarkHiberPhase @ 0x1405AC318 (MmMarkHiberPhase.c)
 *     MiParseImageLoadConfig @ 0x140659FF0 (MiParseImageLoadConfig.c)
 *     MiApplyRetpolineFixups @ 0x14065A9C0 (MiApplyRetpolineFixups.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406D5090 (MiCaptureRetpolineRelocationTables.c)
 *     MiFinalizeImageRetpolineState @ 0x14070EAE8 (MiFinalizeImageRetpolineState.c)
 *     MiMarkKernelImageRetpolineBits @ 0x14070F868 (MiMarkKernelImageRetpolineBits.c)
 *     MiCaptureRetpolineImportInfo @ 0x140712688 (MiCaptureRetpolineImportInfo.c)
 *     MmGetImageRetpolineCodePage @ 0x14077F7C0 (MmGetImageRetpolineCodePage.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F0400 (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x2000000) != 0;
}
