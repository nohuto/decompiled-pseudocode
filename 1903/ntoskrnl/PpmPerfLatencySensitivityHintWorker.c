/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x1401444A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14015B030 (PpmCheckCustomRun.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3LL);
}
