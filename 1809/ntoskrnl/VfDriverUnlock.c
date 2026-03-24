/*
 * XREFs of VfDriverUnlock @ 0x140928154
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140309A10 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x1409F84EC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1409F8948 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1409F8B04 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
