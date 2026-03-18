/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x14088D3F8
 * Callers:
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiIsImportOptimizationEnabled @ 0x1401543D4 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x140154C1C (MiDoesControlAreaRequireRetpolineFixups.c)
 */

_BOOL8 MmHasImageBeenImportOptimized()
{
  __int64 v0; // rcx
  __int64 v2; // rcx
  unsigned __int64 v3; // rax

  if ( !MiIsImportOptimizationEnabled() )
    return 0LL;
  v2 = *(_QWORD *)(v0 + 112);
  if ( !v2 )
    return 1LL;
  v3 = MiSectionControlArea(v2);
  return MiDoesControlAreaRequireRetpolineFixups(v3);
}
