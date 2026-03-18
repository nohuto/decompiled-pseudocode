/*
 * XREFs of PopPreCriticalBatteryNotify @ 0x1408B1DD0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140131900 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopForceCompleteCsSleepStudySession @ 0x14015DBF8 (PopForceCompleteCsSleepStudySession.c)
 */

__int64 PopPreCriticalBatteryNotify()
{
  PopForceCompleteCsSleepStudySession(2);
  return 0LL;
}
