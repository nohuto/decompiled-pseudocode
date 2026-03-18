/*
 * XREFs of PpmCheckResumeStatisticsCollection @ 0x140142900
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14016C804 (PpmPerfUpdateQosDisableReasons.c)
 */

void PpmCheckResumeStatisticsCollection()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140541B68 = 0;
  PpmReleaseLock(&PpmPerfPolicyLock);
}
