/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1408B1630
 * Callers:
 *     PopPolicyWorkerThread @ 0x140132110 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopForceCompleteCsSleepStudySession @ 0x14015E298 (PopForceCompleteCsSleepStudySession.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopForceCompleteCsSleepStudySession(2);
  return 0LL;
}
