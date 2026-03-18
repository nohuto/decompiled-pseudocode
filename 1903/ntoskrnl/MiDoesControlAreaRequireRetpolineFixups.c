/*
 * XREFs of MiDoesControlAreaRequireRetpolineFixups @ 0x140154C1C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14070E9E0 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmHasImageBeenImportOptimized @ 0x14088D3F8 (MmHasImageBeenImportOptimized.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesControlAreaRequireRetpolineFixups(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) + 96LL) != 0LL;
}
