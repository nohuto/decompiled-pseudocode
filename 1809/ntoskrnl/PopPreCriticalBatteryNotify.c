/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x140875040
 * Callers:
 *     PopPolicyWorkerThread @ 0x1401305A0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopForceCompleteCsSleepStudySession @ 0x140142510 (PopForceCompleteCsSleepStudySession.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopForceCompleteCsSleepStudySession(2);
  return 0LL;
}
