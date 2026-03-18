/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1405C4F00
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140003444 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x140333C40 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403340FC (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405C4008 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C4170 (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1406B5DAC (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406B6264 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x1406B6F8C (EtwpLookupLoggerIdByName.c)
 *     EtwpFlushTrace @ 0x1406CBED4 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406CC098 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406CC4B0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTrackProviderBinary @ 0x1406ED48C (EtwpTrackProviderBinary.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071674C (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x140716B20 (WmiQueryTraceInformation.c)
 *     EtwShutdown @ 0x140724868 (EtwShutdown.c)
 *     EtwpUpdateTrace @ 0x14077F2B0 (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x14078AB50 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1408F26CC (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408F2958 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1408F2E5C (EtwpIncrementTraceFile.c)
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
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 448LL) + 8LL * *a1),
    1u);
}
