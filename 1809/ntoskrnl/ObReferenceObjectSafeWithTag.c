/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1400514C0
 * Callers:
 *     IoNotifyQuotaState @ 0x1400019F0 (IoNotifyQuotaState.c)
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     MiSelectSessionAttachProcess @ 0x14007E614 (MiSelectSessionAttachProcess.c)
 *     MiCapturePfnVm @ 0x140083648 (MiCapturePfnVm.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     MiViewMayContainPage @ 0x1400EAE00 (MiViewMayContainPage.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A860 (AlpcpLookasidePacketCallbackRoutine.c)
 *     PsGetNextPartitionUnsafe @ 0x14012017C (PsGetNextPartitionUnsafe.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140139990 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     KiMonitorCacheErrata @ 0x14029A490 (KiMonitorCacheErrata.c)
 *     PsGetNextProcess @ 0x1405B21E0 (PsGetNextProcess.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspEnforceLimitsProcessCallback @ 0x1405FD500 (PspEnforceLimitsProcessCallback.c)
 *     PspEnforceLimits @ 0x1405FD570 (PspEnforceLimits.c)
 *     PspGetNextChildJob @ 0x1405FD760 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FD9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextJob @ 0x1406009A0 (PspGetNextJob.c)
 *     PopEtGetNextEnergyTracker @ 0x140606AD4 (PopEtGetNextEnergyTracker.c)
 *     PsGetNextProcessThread @ 0x1406758E0 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x140676424 (PspGetPreviousProcessThread.c)
 *     PspGetNextJobProcess @ 0x14068D4A0 (PspGetNextJobProcess.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38CC (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x1406CDB40 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140889720 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140889F40 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x14088ED0C (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402D3068 (ObpPushStackInfo.c)
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
