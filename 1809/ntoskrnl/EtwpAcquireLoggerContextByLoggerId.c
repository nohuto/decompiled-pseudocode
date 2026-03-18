/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1405C51A8
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140014E94 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1403152EC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403157AC (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405C1F34 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C209C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C2750 (EtwpAddRegEntryToGroup.c)
 *     EtwpValidateEnableNotification @ 0x140656A30 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x140659E70 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140659F84 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x14065B4EC (EtwpLookupLoggerIdByName.c)
 *     EtwpRealtimeConnect @ 0x1406C2B18 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C2F24 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwShutdown @ 0x1406DD260 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140716C30 (WmiQueryTraceInformation.c)
 *     EtwpTrackProviderBinary @ 0x14071D4AC (EtwpTrackProviderBinary.c)
 *     EtwpTracingProvEnableCallback @ 0x140764310 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1408B5830 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408B5AA8 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1408B6618 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9380 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408BDDD0 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408BE634 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C036C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408C2978 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x1408C3648 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x1408C9E84 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1408C9FA0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CAA04 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1409085F0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D7850 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F97F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5160 (EtwpReleaseLoggerContext.c)
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
