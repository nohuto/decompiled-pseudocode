/*
 * XREFs of PdcPoVerifyPowerState @ 0x140764160
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopVerifySystemPowerState @ 0x14071B328 (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(int *a1, int a2)
{
  PopAcquirePolicyLock();
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock();
}
