/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x14066585C
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013F838 (ExCleanTimerResolutionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1405681E0 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x14056E0E0 (ExpTimeRefreshWork.c)
 *     ExpTimeZoneInitSiloState @ 0x1405839E4 (ExpTimeZoneInitSiloState.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     NtSetTimerResolution @ 0x140663B90 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     ExTraceTimerResolution @ 0x1406DBC7C (ExTraceTimerResolution.c)
 *     PopPolicyTimeChange @ 0x1406E2630 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x1407341C0 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407342FC (ExpReadLeapSecondData.c)
 *     ExpSetTimeZoneInformation @ 0x1408CC994 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1408CD2D0 (NtSetSystemTime.c)
 *     KdpTimeSlipWork @ 0x140917C10 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
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
