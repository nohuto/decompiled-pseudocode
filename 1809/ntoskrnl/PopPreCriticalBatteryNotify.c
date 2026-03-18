/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x140875060
 * Callers:
 *     PopPolicyWorkerThread @ 0x140130580 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopForceCompleteCsSleepStudySession @ 0x1401424F0 (PopForceCompleteCsSleepStudySession.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopForceCompleteCsSleepStudySession(2);
  return 0LL;
}
