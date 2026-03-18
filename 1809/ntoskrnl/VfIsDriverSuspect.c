/*
 * XREFs of VfIsDriverSuspect @ 0x140920ED4
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140582188 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x1409216E0 (VfDriverLock.c)
 *     ViSuspectDriversLookupEntry @ 0x140937D80 (ViSuspectDriversLookupEntry.c)
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
