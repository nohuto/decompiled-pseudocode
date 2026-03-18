/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x1402EE0EC
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 */

LONG PpmClearExitLatencySamplingPercentage()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  PpmAcquireLock(&PopFxSystemLatencyLock);
  PpmExitLatencySamplingPercentageSet = 0;
  PpmExitLatencySamplingPercentage = 0;
  _InterlockedOr(v1, 0);
  KeFlushProcessWriteBuffers(1);
  return PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
}
