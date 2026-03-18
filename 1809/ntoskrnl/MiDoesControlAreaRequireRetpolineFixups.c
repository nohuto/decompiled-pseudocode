/*
 * XREFs of MiDoesControlAreaRequireRetpolineFixups @ 0x1402B8F08
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140582188 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmHasImageBeenImportOptimized @ 0x1405822B0 (MmHasImageBeenImportOptimized.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesControlAreaRequireRetpolineFixups(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) + 88LL) != 0LL;
}
