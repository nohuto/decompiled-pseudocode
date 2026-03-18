/*
 * XREFs of MiIsRetpolineEnabled @ 0x1400DA550
 * Callers:
 *     MmMarkHiberPhase @ 0x14057C328 (MmMarkHiberPhase.c)
 *     MiParseImageLoadConfig @ 0x1406508FC (MiParseImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiUseLargeDriverPage @ 0x140683280 (MiUseLargeDriverPage.c)
 *     MmGetImageRetpolineCodePage @ 0x1406D05A0 (MmGetImageRetpolineCodePage.c)
 *     MiApplyRetpolineFixups @ 0x140853728 (MiApplyRetpolineFixups.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408538F4 (MiCaptureRetpolineRelocationTables.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140853D24 (MiMarkKernelImageRetpolineBits.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D2744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F6F30 (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     <none>
 */

bool MiIsRetpolineEnabled()
{
  return (KiSpeculationFeatures & 0x20000000000LL) != 0;
}
