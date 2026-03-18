/*
 * XREFs of PpmPerfReApplyStates @ 0x1406DCFF0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x140141B54 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x140141EB4 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x14071CB58 (PpmUpdateProcessorPolicy.c)
 */

__int64 PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  return PpmCheckCustomRun(2);
}
