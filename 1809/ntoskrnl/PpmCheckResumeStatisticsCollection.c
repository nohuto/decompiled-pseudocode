/*
 * XREFs of PpmCheckResumeStatisticsCollection @ 0x140142A20
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14016C924 (PpmPerfUpdateQosDisableReasons.c)
 */

void PpmCheckResumeStatisticsCollection()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140542B68 = 0;
  PpmReleaseLock(&PpmPerfPolicyLock);
}
