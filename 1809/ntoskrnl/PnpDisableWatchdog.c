/*
 * XREFs of PnpDisableWatchdog @ 0x140005B60
 * Callers:
 *     PnpDisablePnpEventWorkerWatchdog @ 0x140005B14 (PnpDisablePnpEventWorkerWatchdog.c)
 *     PnpDisableDeviceCompletionQueueWatchdog @ 0x140159DD0 (PnpDisableDeviceCompletionQueueWatchdog.c)
 *     PnpDisableDelayedRemoveWorkerWatchdog @ 0x140289CA8 (PnpDisableDelayedRemoveWorkerWatchdog.c)
 * Callees:
 *     PnpRecordBlackbox @ 0x140005BB0 (PnpRecordBlackbox.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x140289E44 (PnpQueryWatchdogBugcheckEnabled.c)
 *     PnpWatchdogBugcheck @ 0x140289F20 (PnpWatchdogBugcheck.c)
 */

char __fastcall PnpDisableWatchdog(__int64 a1)
{
  char v1; // di

  v1 = 0;
  if ( a1 )
  {
    *(_BYTE *)(a1 + 136) = 0;
    if ( !KeCancelTimer((PKTIMER)(a1 + 8)) )
    {
      v1 = 1;
      if ( *(_BYTE *)(a1 + 137) )
      {
        if ( (unsigned __int8)PnpQueryWatchdogBugcheckEnabled() )
          PnpWatchdogBugcheck(a1);
      }
    }
    PnpRecordBlackbox(0LL, *(unsigned int *)(a1 + 200));
  }
  return v1;
}
