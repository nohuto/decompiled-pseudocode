/*
 * XREFs of PopEsExitSleep @ 0x1406DE1DC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopEsStartTelemetry @ 0x14071DD08 (PopEsStartTelemetry.c)
 */

void PopEsExitSleep()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  PopEsStartTelemetry();
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
}
