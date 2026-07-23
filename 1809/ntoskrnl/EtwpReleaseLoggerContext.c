/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1405C6160
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140014E94 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1403155DC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140315A9C (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405C2F34 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C309C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x14065AF40 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14065B124 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x14065C68C (EtwpLookupLoggerIdByName.c)
 *     EtwpFlushTrace @ 0x1406C3BE0 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406C3D98 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C41A4 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwShutdown @ 0x1406DE4E0 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140717EB0 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140718C1C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpTrackProviderBinary @ 0x14071E72C (EtwpTrackProviderBinary.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x1407654E0 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1408B6AD0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408B6D48 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1408B77D0 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1408B78B8 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408BA620 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408BF070 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408BF8D4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C160C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C18E0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408C3C18 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x1408C48E8 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x1408CB124 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1408CB240 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CBCA4 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140909890 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
    1u);
}
