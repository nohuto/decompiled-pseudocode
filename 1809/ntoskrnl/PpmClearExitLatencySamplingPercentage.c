/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x1402D3BBC
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ECFD8 (KeFlushProcessWriteBuffers.c)
 */

void PpmClearExitLatencySamplingPercentage()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  PpmAcquireLock(&PopFxSystemLatencyLock);
  PpmExitLatencySamplingPercentageSet = 0;
  PpmExitLatencySamplingPercentage = 0;
  _InterlockedOr(v0, 0);
  KeFlushProcessWriteBuffers(1);
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
}
