/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140014E94 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1403155DC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140315A9C (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405C2F34 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C309C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpValidateEnableNotification @ 0x140657BD0 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x14065B010 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14065B124 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x14065C68C (EtwpLookupLoggerIdByName.c)
 *     EtwpRealtimeConnect @ 0x1406C3D98 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C41A4 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwShutdown @ 0x1406DE4E0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140717EB0 (WmiQueryTraceInformation.c)
 *     EtwpTrackProviderBinary @ 0x14071E72C (EtwpTrackProviderBinary.c)
 *     EtwpTracingProvEnableCallback @ 0x1407654E0 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1408B6AD0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408B6D48 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1408B78B8 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408BA620 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408BF070 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408BF8D4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C160C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408C3C18 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x1408C48E8 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x1408CB124 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1408CB240 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CBCA4 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140909890 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D78F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
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
