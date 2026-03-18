/*
 * XREFs of PpmReapplyIdlePolicy @ 0x1408A3090
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14069D694 (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408B1D10 (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
}
