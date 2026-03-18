/*
 * XREFs of PdcPoReportLidState @ 0x14086EE30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopNotifyLidStateChange @ 0x14086C1F0 (PopNotifyLidStateChange.c)
 */

__int64 __fastcall PdcPoReportLidState(char a1)
{
  PopAcquirePolicyLock();
  PopNotifyLidStateChange(a1);
  return PopReleasePolicyLock();
}
