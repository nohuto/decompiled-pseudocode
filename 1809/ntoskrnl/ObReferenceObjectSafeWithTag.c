/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1400514C0
 * Callers:
 *     IoNotifyQuotaState @ 0x1400019F0 (IoNotifyQuotaState.c)
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     MiSelectSessionAttachProcess @ 0x14007E614 (MiSelectSessionAttachProcess.c)
 *     MiCapturePfnVm @ 0x140083648 (MiCapturePfnVm.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     MiViewMayContainPage @ 0x1400EADE0 (MiViewMayContainPage.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A840 (AlpcpLookasidePacketCallbackRoutine.c)
 *     PsGetNextPartitionUnsafe @ 0x14012015C (PsGetNextPartitionUnsafe.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140139970 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     KiMonitorCacheErrata @ 0x14029A390 (KiMonitorCacheErrata.c)
 *     PsGetNextProcess @ 0x1405B21E0 (PsGetNextProcess.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspEnforceLimitsProcessCallback @ 0x1405FD500 (PspEnforceLimitsProcessCallback.c)
 *     PspEnforceLimits @ 0x1405FD570 (PspEnforceLimits.c)
 *     PspGetNextChildJob @ 0x1405FD760 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FD9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextJob @ 0x1406009A0 (PspGetNextJob.c)
 *     PopEtGetNextEnergyTracker @ 0x140606AD4 (PopEtGetNextEnergyTracker.c)
 *     PsGetNextProcessThread @ 0x140675900 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x140676444 (PspGetPreviousProcessThread.c)
 *     PspGetNextJobProcess @ 0x14068D4C0 (PspGetNextJobProcess.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x1406CDB60 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140889740 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140889F60 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x14088ED2C (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
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
