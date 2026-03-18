/*
 * XREFs of VfSuspectDriversIsLoaded @ 0x140A3E228
 * Callers:
 *     ViDriverReApplyVerifierForAll @ 0x1409667B8 (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x1409603F8 (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversIsLoaded(const UNICODE_STRING *a1)
{
  __int64 v1; // rax

  v1 = ViSuspectDriversLookupEntry(a1);
  return v1 && *(_DWORD *)(v1 + 16) > *(_DWORD *)(v1 + 20);
}
