/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140003444 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1403336A0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140333B5C (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405C44D8 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C4640 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     EtwpValidateEnableNotification @ 0x14069205C (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1406A9634 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406A9A50 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x1406AA78C (EtwpLookupLoggerIdByName.c)
 *     EtwpRealtimeConnect @ 0x1406CAEC8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406CB2E0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1406EE98C (EtwpTrackProviderBinary.c)
 *     WmiQueryTraceInformation @ 0x140718910 (WmiQueryTraceInformation.c)
 *     EtwShutdown @ 0x140726708 (EtwShutdown.c)
 *     EtwpTracingProvEnableCallback @ 0x14078D030 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1408F1FDC (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408F2268 (EtwpGetDisallowList.c)
 *     EtwpQueryReferenceTime @ 0x1408F28B0 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408FA390 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408FAD1C (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FCB54 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408FF4BC (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x1409001A8 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x140906D68 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140906F10 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140907B30 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140946700 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D3DA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
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
