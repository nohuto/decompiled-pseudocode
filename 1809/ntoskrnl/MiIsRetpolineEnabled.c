/*
 * XREFs of MiIsRetpolineEnabled @ 0x1400DA5F0
 * Callers:
 *     MmMarkHiberPhase @ 0x14057D328 (MmMarkHiberPhase.c)
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     MmGetImageRetpolineCodePage @ 0x1406D1820 (MmGetImageRetpolineCodePage.c)
 *     MiApplyRetpolineFixups @ 0x140854968 (MiApplyRetpolineFixups.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140854B34 (MiCaptureRetpolineRelocationTables.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140854F64 (MiMarkKernelImageRetpolineBits.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D3744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F7F40 (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
