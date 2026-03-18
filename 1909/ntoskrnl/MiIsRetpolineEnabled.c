/*
 * XREFs of MiIsRetpolineEnabled @ 0x14008E268
 * Callers:
 *     MmMarkHiberPhase @ 0x1405AC2F8 (MmMarkHiberPhase.c)
 *     MiApplyRetpolineFixups @ 0x140643670 (MiApplyRetpolineFixups.c)
 *     MiParseImageLoadConfig @ 0x140643DC8 (MiParseImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406D4770 (MiCaptureRetpolineRelocationTables.c)
 *     MiFinalizeImageRetpolineState @ 0x1407108C8 (MiFinalizeImageRetpolineState.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140711648 (MiMarkKernelImageRetpolineBits.c)
 *     MiCaptureRetpolineImportInfo @ 0x140714468 (MiCaptureRetpolineImportInfo.c)
 *     MmGetImageRetpolineCodePage @ 0x1407821E0 (MmGetImageRetpolineCodePage.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F0318 (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x2000000) != 0;
}
