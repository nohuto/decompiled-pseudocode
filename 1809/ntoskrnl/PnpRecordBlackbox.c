/*
 * XREFs of PnpRecordBlackbox @ 0x140005BB0
 * Callers:
 *     PnpDisableWatchdog @ 0x140005B60 (PnpDisableWatchdog.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289A8C (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14058C0D4 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1406FE730 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14083FE30 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 */

__int64 __fastcall PnpRecordBlackbox(__int64 a1, int a2)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx

  v2 = a2 - 1;
  if ( !v2 )
    return PnpRecordBlackboxPnpEventWorkerInformation();
  v4 = v2 - 1;
  if ( !v4 )
    return PnpRecordBlackboxDeviceCompletionQueueInformation();
  if ( v4 == 1 )
    return PnpRecordBlackboxDelayedRemoveWorkerInformation();
  return result;
}
