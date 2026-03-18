/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1406A7970
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013D108 (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     NtSetTimerResolution @ 0x1406A6B40 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     ExTraceTimerResolution @ 0x14071E990 (ExTraceTimerResolution.c)
 *     PopPolicyTimeChange @ 0x140729DB0 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x14075F674 (ExpRefreshSystemTime.c)
 *     ExpSetTimeZoneInformation @ 0x14090A28C (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 *     KdpTimeSlipWork @ 0x140956660 (KdpTimeSlipWork.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 */

char __fastcall ExAcquireTimeRefreshLock(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireResourceExclusiveLite(&ExpTimeRefreshLock, a1) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
