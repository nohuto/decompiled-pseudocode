/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1405C5400
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140003444 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1403336A0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140333B5C (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405C44D8 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C4640 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1406A9564 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406A9A50 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x1406AA78C (EtwpLookupLoggerIdByName.c)
 *     EtwpFlushTrace @ 0x1406CAD04 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406CAEC8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406CB2E0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1406EE98C (EtwpTrackProviderBinary.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071853C (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x140718910 (WmiQueryTraceInformation.c)
 *     EtwShutdown @ 0x140726708 (EtwShutdown.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x14078D030 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1408F1FDC (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408F2268 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1408F27C8 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1408F28B0 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408FA390 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408FAD1C (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FCB54 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FCE40 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408FF4BC (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x1409001A8 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x140906D68 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x140906F10 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140907B30 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140946700 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
    1u);
}
