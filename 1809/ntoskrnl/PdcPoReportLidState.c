/*
 * XREFs of PdcPoReportLidState @ 0x140870070
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopNotifyLidStateChange @ 0x14086D430 (PopNotifyLidStateChange.c)
 */

__int64 __fastcall PdcPoReportLidState(char a1)
{
  PopAcquirePolicyLock();
  PopNotifyLidStateChange(a1);
  return PopReleasePolicyLock();
}
