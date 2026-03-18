/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x1408A1C5C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 */

void PopClearConnectedStandbyMarker()
{
  char v0; // bl

  v0 = PopPdcLastCsExitReason;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) ^= (v0 ^ BYTE11(PopBsdPowerTransition)) & 0x3F;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
