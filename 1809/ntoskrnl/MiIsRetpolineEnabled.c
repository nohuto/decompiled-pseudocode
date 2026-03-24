/*
 * XREFs of MiIsRetpolineEnabled @ 0x1400DA570
 * Callers:
 *     MmMarkHiberPhase @ 0x14057C328 (MmMarkHiberPhase.c)
 *     MiParseImageLoadConfig @ 0x1406508DC (MiParseImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140680FF8 (MmLoadSystemImageEx.c)
 *     MiUseLargeDriverPage @ 0x140683260 (MiUseLargeDriverPage.c)
 *     MmGetImageRetpolineCodePage @ 0x1406D0580 (MmGetImageRetpolineCodePage.c)
 *     MiApplyRetpolineFixups @ 0x140853708 (MiApplyRetpolineFixups.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408538D4 (MiCaptureRetpolineRelocationTables.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140853D04 (MiMarkKernelImageRetpolineBits.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D2744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F6F40 (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
