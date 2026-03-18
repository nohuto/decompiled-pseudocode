/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14003FAD0
 * Callers:
 *     IoNotifyQuotaState @ 0x140001910 (IoNotifyQuotaState.c)
 *     MiSelectSessionAttachProcess @ 0x140002524 (MiSelectSessionAttachProcess.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400B4490 (AlpcpLookasidePacketCallbackRoutine.c)
 *     MiViewMayContainPage @ 0x1400E0F88 (MiViewMayContainPage.c)
 *     PsGetNextPartitionUnsafe @ 0x1400F97DC (PsGetNextPartitionUnsafe.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x14013A300 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     KiMonitorCacheErrata @ 0x1402B1790 (KiMonitorCacheErrata.c)
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspEnforceLimitsProcessCallback @ 0x140610CE0 (PspEnforceLimitsProcessCallback.c)
 *     PspEnforceLimits @ 0x140610D60 (PspEnforceLimits.c)
 *     PspGetNextChildJob @ 0x140610F78 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextJob @ 0x140613880 (PspGetNextJob.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
 *     PspGetPreviousProcessThread @ 0x140674D00 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x1406772C0 (PsGetNextProcessThread.c)
 *     PspGetNextJobProcess @ 0x140696B30 (PspGetNextJobProcess.c)
 *     PopEtGetNextEnergyTracker @ 0x140696E78 (PopEtGetNextEnergyTracker.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x1406EB120 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1408C7680 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1408C7E70 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x1408CD098 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafeWithTag(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
