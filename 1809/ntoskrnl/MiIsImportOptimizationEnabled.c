/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x1400DA4F0
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140582188 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmHasImageBeenImportOptimized @ 0x1405822B0 (MmHasImageBeenImportOptimized.c)
 *     MiParseImageLoadConfig @ 0x1406508FC (MiParseImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140683280 (MiUseLargeDriverPage.c)
 *     VfDriverEnableVerifierForAll @ 0x140928018 (VfDriverEnableVerifierForAll.c)
 *     MiInitializeDriverPtes @ 0x1409B8AAC (MiInitializeDriverPtes.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D2744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F6F30 (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x40000000000LL) != 0;
}
