/*
 * XREFs of PopClearSystemShutdownMarker @ 0x14072BA6C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059D8E0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 */

void PopClearSystemShutdownMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~8u;
  LOBYTE(PopBsdPowerTransitionExtension) = -1;
  PopBsdHandleRequest(8);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
