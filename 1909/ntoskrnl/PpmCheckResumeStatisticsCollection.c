/*
 * XREFs of PpmCheckResumeStatisticsCollection @ 0x14015E3FC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14017766C (PpmPerfUpdateQosDisableReasons.c)
 */

LONG PpmCheckResumeStatisticsCollection()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140572C78 = 0;
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
