/*
 * XREFs of PopRecordSleepCheckpoint @ 0x14072649C
 * Callers:
 *     PopCheckpointSystemSleep @ 0x1405990D4 (PopCheckpointSystemSleep.c)
 *     PopCheckShutdownMarker @ 0x140A14E68 (PopCheckShutdownMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BEAE4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordSleepCheckpoint(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE2(PopBsdPowerTransitionExtension) = a1;
  PopBsdHandleRequest(8);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
