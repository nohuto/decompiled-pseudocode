/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x1401449E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14015B6D0 (PpmCheckCustomRun.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfLatencyBoostQueued = 0;
  return PpmCheckCustomRun(3LL);
}
