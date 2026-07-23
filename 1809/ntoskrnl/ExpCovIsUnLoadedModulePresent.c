/*
 * XREFs of ExpCovIsUnLoadedModulePresent @ 0x1408D8958
 * Callers:
 *     ExpCovQueryInformation @ 0x1408D8C0C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1408D94A4 (ExpCovResetInformation.c)
 * Callees:
 *     ExpCovIsModulePresent @ 0x1408D88B4 (ExpCovIsModulePresent.c)
 */

bool __fastcall ExpCovIsUnLoadedModulePresent(__int64 a1, int a2, const UNICODE_STRING *a3, void *a4)
{
  __int64 v5; // rdx

  v5 = *(_QWORD *)(a1 + 56);
  return v5 && ExpCovIsModulePresent(a1 + 16, v5, a2, a3, a4);
}
