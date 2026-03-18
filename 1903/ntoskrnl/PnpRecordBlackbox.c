/*
 * XREFs of PnpRecordBlackbox @ 0x1400B3978
 * Callers:
 *     PnpCancelWatchdog @ 0x1400B3928 (PnpCancelWatchdog.c)
 *     PnpProcessWatchdogWorkItem @ 0x14029FD18 (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14067F91C (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x14071A1D4 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14087B860 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
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
