/*
 * XREFs of ObReferenceObjectSafeWithTag @ 0x14003F810
 * Callers:
 *     IoNotifyQuotaState @ 0x140001910 (IoNotifyQuotaState.c)
 *     MiSelectSessionAttachProcess @ 0x140002524 (MiSelectSessionAttachProcess.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     MiViewMayContainPage @ 0x1400C0E08 (MiViewMayContainPage.c)
 *     KiAbProcessThreadLocks @ 0x1400C5ED0 (KiAbProcessThreadLocks.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400EC7A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     PsGetNextPartitionUnsafe @ 0x14012336C (PsGetNextPartitionUnsafe.c)
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x14013A760 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     KiMonitorCacheErrata @ 0x1402B14F0 (KiMonitorCacheErrata.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspEnforceLimitsProcessCallback @ 0x1406127F0 (PspEnforceLimitsProcessCallback.c)
 *     PspEnforceLimits @ 0x140612870 (PspEnforceLimits.c)
 *     PspGetNextChildJob @ 0x140612A88 (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextJob @ 0x140615390 (PspGetNextJob.c)
 *     PsGetNextProcess @ 0x140639220 (PsGetNextProcess.c)
 *     PspGetPreviousProcessThread @ 0x14067A410 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x14067C9D0 (PsGetNextProcessThread.c)
 *     PspGetNextJobProcess @ 0x14068A0A0 (PspGetNextJobProcess.c)
 *     PopEtGetNextEnergyTracker @ 0x14068A3E8 (PopEtGetNextEnergyTracker.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpGetNextCallback @ 0x1406EC3E0 (ExpGetNextCallback.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1408C6F60 (PspAddProcessToWorkingSetChangeList.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x1408C7750 (PspQueryProcessInterferenceCountCallback.c)
 *     PsGetPreviousProcess @ 0x1408CC978 (PsGetPreviousProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
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
