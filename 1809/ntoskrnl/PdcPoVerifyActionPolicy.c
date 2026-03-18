/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x14086EF60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopVerifyPowerActionPolicy @ 0x1407199F8 (PopVerifyPowerActionPolicy.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  PopAcquirePolicyLock();
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock();
}
