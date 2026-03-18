/*
 * XREFs of MiIsImportOptimizationEnabled @ 0x140154A74
 * Callers:
 *     MiParseImageLoadConfig @ 0x140643DC8 (MiParseImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407107C0 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmHasImageBeenImportOptimized @ 0x14088CC18 (MmHasImageBeenImportOptimized.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 *     VfDriverEnableVerifierForAll @ 0x140966538 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

bool MiIsImportOptimizationEnabled()
{
  return (KiSpeculationFeatures & 0x4000000) != 0;
}
