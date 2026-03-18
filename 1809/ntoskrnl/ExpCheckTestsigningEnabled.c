/*
 * XREFs of ExpCheckTestsigningEnabled @ 0x140706FF4
 * Callers:
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14060D910 (RtlRunOnceExecuteOnce.c)
 */

char ExpCheckTestsigningEnabled()
{
  RtlRunOnceExecuteOnce(&ExpCheckTestSigningInit, (PRTL_RUN_ONCE_INIT_FN)ExpInitExpCheckTestSigningInfo, 0LL, 0LL);
  return ExpTestSigningEnabled;
}
