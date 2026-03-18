/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1406A7950
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013D108 (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     KdpTimeSlipWork @ 0x140956660 (KdpTimeSlipWork.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
