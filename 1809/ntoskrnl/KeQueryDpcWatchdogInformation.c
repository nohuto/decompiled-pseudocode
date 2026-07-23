/*
 * XREFs of KeQueryDpcWatchdogInformation @ 0x14010A0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeQueryDpcWatchdogInformation(PKDPC_WATCHDOG_INFORMATION WatchdogInformation)
{
  struct _KPRCB *CurrentPrcb; // rdx
  ULONG DpcTimeLimit; // eax
  ULONG DpcWatchdogPeriod; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( KeGetCurrentIrql() < 2u )
    return -1073741823;
  *(_QWORD *)&WatchdogInformation->DpcTimeLimit = 0LL;
  *(_QWORD *)&WatchdogInformation->DpcWatchdogLimit = 0LL;
  WatchdogInformation->Reserved = 0;
  DpcTimeLimit = CurrentPrcb->DpcTimeLimit;
  if ( DpcTimeLimit )
  {
    WatchdogInformation->DpcTimeLimit = DpcTimeLimit;
    WatchdogInformation->DpcTimeCount = DpcTimeLimit - CurrentPrcb->DpcTimeCount;
  }
  DpcWatchdogPeriod = CurrentPrcb->DpcWatchdogPeriod;
  if ( DpcWatchdogPeriod )
  {
    WatchdogInformation->DpcWatchdogLimit = DpcWatchdogPeriod;
    WatchdogInformation->DpcWatchdogCount = DpcWatchdogPeriod - CurrentPrcb->DpcWatchdogCount;
  }
  return 0;
}
