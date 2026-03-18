/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x1408A1FF0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 */

void PopSetConnectedStandbyMarker()
{
  char v0; // bl
  char v1; // di

  v0 = PopPdcLastCsEnterReason;
  v1 = PopWnfCsEnterScenarioId;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 2u;
    BYTE9(PopBsdPowerTransition) = v1;
    BYTE10(PopBsdPowerTransition) ^= (v0 ^ BYTE10(PopBsdPowerTransition)) & 0x3F;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
