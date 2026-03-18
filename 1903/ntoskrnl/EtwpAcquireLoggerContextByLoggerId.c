/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140003444 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x140333C40 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403340FC (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405C4008 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C4170 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     EtwpValidateEnableNotification @ 0x140664C48 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1406B5E7C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406B6264 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x1406B6F8C (EtwpLookupLoggerIdByName.c)
 *     EtwpRealtimeConnect @ 0x1406CC098 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406CC4B0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1406ED48C (EtwpTrackProviderBinary.c)
 *     WmiQueryTraceInformation @ 0x140716B20 (WmiQueryTraceInformation.c)
 *     EtwShutdown @ 0x140724868 (EtwShutdown.c)
 *     EtwpTracingProvEnableCallback @ 0x14078AB50 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1408F26CC (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408F2958 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1408F2F44 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5EB8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F6580 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408FA9B0 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408FB33C (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FD174 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FD480 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408FFB5C (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x140900848 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x140907338 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1409074E0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140908100 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140946C90 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 */

unsigned int *__fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int *v8; // rbx

  v4 = a2;
  v6 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
    LOBYTE(v7) = 1;
  else
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2);
  if ( (v7 & 1) != 0
    || !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8LL * a2), 1u) )
  {
    return 0LL;
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
  {
    v8 = (unsigned int *)1;
  }
  else
  {
    _mm_lfence();
    v8 = *(unsigned int **)(*(_QWORD *)(a1 + 456) + 8 * v4);
  }
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v6), 1u);
    return 0LL;
  }
  if ( a3 )
    KeWaitForSingleObject(v8 + 162, Executive, 0, 0, 0LL);
  if ( !v8[84] )
  {
    EtwpReleaseLoggerContext(v8, a3);
    return 0LL;
  }
  return v8;
}
