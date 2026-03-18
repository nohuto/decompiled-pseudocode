/*
 * XREFs of MmHasImageBeenImportOptimized @ 0x14088CC18
 * Callers:
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
 * Callees:
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiIsImportOptimizationEnabled @ 0x140154A74 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x1401552BC (MiDoesControlAreaRequireRetpolineFixups.c)
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
