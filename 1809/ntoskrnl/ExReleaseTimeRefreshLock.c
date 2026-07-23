/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1406BFE98
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013F958 (ExCleanTimerResolutionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     ExpTimeZoneInitSiloState @ 0x1405849E4 (ExpTimeZoneInitSiloState.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     ExpReadLeapSecondData @ 0x1407354CC (ExpReadLeapSecondData.c)
 *     NtSetSystemTime @ 0x1408CE570 (NtSetSystemTime.c)
 *     KdpTimeSlipWork @ 0x140918C10 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
