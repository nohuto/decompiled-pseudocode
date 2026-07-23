/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x1400514C0
 * Callers:
 *     IoNotifyQuotaState @ 0x1400019F0 (IoNotifyQuotaState.c)
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     MiSelectSessionAttachProcess @ 0x14007E604 (MiSelectSessionAttachProcess.c)
 *     MiCapturePfnVm @ 0x140083638 (MiCapturePfnVm.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     MiViewMayContainPage @ 0x1400EAE80 (MiViewMayContainPage.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A8E0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     PsGetNextPartitionUnsafe @ 0x1401201EC (PsGetNextPartitionUnsafe.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140139A90 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     KiMonitorCacheErrata @ 0x14029A680 (KiMonitorCacheErrata.c)
 *     PsGetNextProcess @ 0x1405B31E0 (PsGetNextProcess.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspEnforceLimitsProcessCallback @ 0x1405FE500 (PspEnforceLimitsProcessCallback.c)
 *     PspEnforceLimits @ 0x1405FE570 (PspEnforceLimits.c)
 *     PspGetNextChildJob @ 0x1405FE760 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FE9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextJob @ 0x1406019A0 (PspGetNextJob.c)
 *     PopEtGetNextEnergyTracker @ 0x140607AD4 (PopEtGetNextEnergyTracker.c)
 *     PsGetNextProcessThread @ 0x140676AA0 (PsGetNextProcessThread.c)
 *     PspGetPreviousProcessThread @ 0x1406775E4 (PspGetPreviousProcessThread.c)
 *     PspGetNextJobProcess @ 0x14068E660 (PspGetNextJobProcess.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x1406CEDE0 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14088A980 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x14088B1A0 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x14088FF6C (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
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
