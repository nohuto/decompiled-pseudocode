/*
 * XREFs of PopRecordSleepCheckpointSource @ 0x1408A1ED8
 * Callers:
 *     PopCheckShutdownMarker @ 0x1409FBC20 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpointSource(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE1(PopBsdPowerTransitionExtension) ^= (BYTE1(PopBsdPowerTransitionExtension) ^ (4 * a1)) & 0xC;
  PopBsdHandleRequest(8);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
