/*
 * XREFs of PopEsEnterSleepShutdown @ 0x14072A15C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopCurrentPowerState @ 0x14069B760 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x14072A1B0 (PopEsSnapTelemetry.c)
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
