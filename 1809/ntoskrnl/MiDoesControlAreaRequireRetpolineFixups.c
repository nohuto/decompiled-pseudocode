/*
 * XREFs of MiDoesControlAreaRequireRetpolineFixups @ 0x1402B91F8
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140583188 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmHasImageBeenImportOptimized @ 0x1405832B0 (MmHasImageBeenImportOptimized.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesControlAreaRequireRetpolineFixups(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) + 88LL) != 0LL;
}
