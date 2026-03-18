/*
 * XREFs of VfDriverUnlock @ 0x140966674
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140326FD8 (VfIsVerificationEnabledForImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 *     VfTriageAddDrivers @ 0x140A3DDF8 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A3E254 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A3E41C (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
