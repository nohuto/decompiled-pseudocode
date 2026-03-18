/*
 * XREFs of VfIsDriverSuspect @ 0x1409603A8
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14070E9E0 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     ViSuspectDriversLookupEntry @ 0x1409603F8 (ViSuspectDriversLookupEntry.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 */

_BOOL8 __fastcall VfIsDriverSuspect(PCUNICODE_STRING String2)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  VfDriverLock();
  v2 = ViSuspectDriversLookupEntry(String2);
  ViDriversLoadLockOwner = 0LL;
  v3 = v2;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v3 != 0;
}
