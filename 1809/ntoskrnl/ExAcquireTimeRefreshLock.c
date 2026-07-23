/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1406669FC
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013F958 (ExCleanTimerResolutionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     ExpTimeZoneInitSiloState @ 0x1405849E4 (ExpTimeZoneInitSiloState.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     NtSetTimerResolution @ 0x140664D30 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     ExTraceTimerResolution @ 0x1406DCEFC (ExTraceTimerResolution.c)
 *     PopPolicyTimeChange @ 0x1406E38B0 (PopPolicyTimeChange.c)
 *     ExpRefreshSystemTime @ 0x140735390 (ExpRefreshSystemTime.c)
 *     ExpReadLeapSecondData @ 0x1407354CC (ExpReadLeapSecondData.c)
 *     ExpSetTimeZoneInformation @ 0x1408CDC34 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1408CE570 (NtSetSystemTime.c)
 *     KdpTimeSlipWork @ 0x140918C10 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
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
