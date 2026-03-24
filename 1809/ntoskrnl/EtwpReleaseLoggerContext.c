/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1405C5160
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140014E94 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1403153EC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403158AC (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405C1F34 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C209C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C2750 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C51A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     EtwpStopTrace @ 0x140658F90 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406591A0 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x140659D80 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140659F64 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x14065B4CC (EtwpLookupLoggerIdByName.c)
 *     EtwpFlushTrace @ 0x1406C2940 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406C2AF8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C2F04 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwShutdown @ 0x1406DD240 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140716C10 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071797C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpTrackProviderBinary @ 0x14071D48C (EtwpTrackProviderBinary.c)
 *     EtwpUpdateTrace @ 0x140725ADC (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x1407642F0 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1408B5810 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408B5A88 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1408B6510 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1408B65F8 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9360 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408BDDB0 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408BE614 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C034C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C0620 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408C2958 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x1408C3628 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x1408C9E64 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1408C9F80 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CA9E4 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1409085D0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9810 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
    1u);
}
