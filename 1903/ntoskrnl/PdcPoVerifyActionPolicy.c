/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x1408ABAF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopVerifyPowerActionPolicy @ 0x140742F14 (PopVerifyPowerActionPolicy.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  PopAcquirePolicyLock();
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock();
}
