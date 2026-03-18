/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1406A7200
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013D618 (ExCleanTimerResolutionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x14059D9D0 (ExpTimeRefreshWork.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     NtSetTimerResolution @ 0x1406A63D0 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     ExTraceTimerResolution @ 0x140720820 (ExTraceTimerResolution.c)
 *     PopPolicyTimeChange @ 0x14072B120 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x140763F98 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x140764054 (ExpReadLeapSecondData.c)
 *     ExpSetTimeZoneInformation @ 0x140909CEC (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14090A2D0 (NtSetSystemTime.c)
 *     KdpTimeSlipWork @ 0x140956660 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
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
