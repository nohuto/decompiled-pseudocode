/*
 * XREFs of VfDriverUnlock @ 0x140966674
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140327588 (VfIsVerificationEnabledForImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 *     VfTriageAddDrivers @ 0x140A3E028 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A3E484 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A3E64C (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
