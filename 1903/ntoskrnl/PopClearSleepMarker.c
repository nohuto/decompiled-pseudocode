/*
 * XREFs of PopClearSleepMarker @ 0x14072758C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059BC20 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BEAE4 (PopBsdHandleRequest.c)
 */

void PopClearSleepMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  *(_QWORD *)&PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) &= 0xFu;
  PopBsdHandleRequest(8);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
