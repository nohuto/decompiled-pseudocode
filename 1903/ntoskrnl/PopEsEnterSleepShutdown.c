/*
 * XREFs of PopEsEnterSleepShutdown @ 0x140728DEC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopCurrentPowerState @ 0x14067E620 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x140728E40 (PopEsSnapTelemetry.c)
 */

void PopEsEnterSleepShutdown()
{
  _OWORD v0[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v0, 0, sizeof(v0));
  PopCurrentPowerState(v0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsSnapTelemetry(v0);
  PopEsLastStateChangeTimeStamp = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
