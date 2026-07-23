/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x1400DA590
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140583188 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmHasImageBeenImportOptimized @ 0x1405832B0 (MmHasImageBeenImportOptimized.c)
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     VfDriverEnableVerifierForAll @ 0x140929018 (VfDriverEnableVerifierForAll.c)
 *     MiInitializeDriverPtes @ 0x1409B9AAC (MiInitializeDriverPtes.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D3744 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F7F40 (MiApplyImportOptimizationToBootDrivers.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x40000000000LL) != 0;
}
