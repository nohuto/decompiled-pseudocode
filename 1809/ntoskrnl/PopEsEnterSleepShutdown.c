/*
 * XREFs of PopEsEnterSleepShutdown @ 0x1406E198C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopCurrentPowerState @ 0x14058DED4 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x1406E19D0 (PopEsSnapTelemetry.c)
 */

void PopEsEnterSleepShutdown()
{
  _OWORD v0[2]; // [rsp+20h] [rbp-28h] BYREF

  PopCurrentPowerState(v0);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsSnapTelemetry(v0);
  PopEsLastStateChangeTimeStamp = 0LL;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
