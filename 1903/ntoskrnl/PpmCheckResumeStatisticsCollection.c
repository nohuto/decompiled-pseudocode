/*
 * XREFs of PpmCheckResumeStatisticsCollection @ 0x14015DD5C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x140176F7C (PpmPerfUpdateQosDisableReasons.c)
 */

LONG PpmCheckResumeStatisticsCollection()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  byte_140572C78 = 0;
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
