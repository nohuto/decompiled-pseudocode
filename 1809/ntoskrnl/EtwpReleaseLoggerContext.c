/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1405C5160
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140014E94 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetCompressionSettings @ 0x1403152EC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1403157AC (EtwpSetCompressionSettings.c)
 *     EtwpTrackProviderRegistration @ 0x1405C1F34 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C209C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C2750 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C51A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     EtwpStopTrace @ 0x140658FB0 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x140659DA0 (EtwpQueryTrace.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140659F84 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x14065B4EC (EtwpLookupLoggerIdByName.c)
 *     EtwpFlushTrace @ 0x1406C2960 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x1406C2B18 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x1406C2F24 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwShutdown @ 0x1406DD260 (EtwShutdown.c)
 *     WmiQueryTraceInformation @ 0x140716C30 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071799C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpTrackProviderBinary @ 0x14071D4AC (EtwpTrackProviderBinary.c)
 *     EtwpUpdateTrace @ 0x140725AFC (EtwpUpdateTrace.c)
 *     EtwpTracingProvEnableCallback @ 0x140764310 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateDisallowList @ 0x1408B5830 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1408B5AA8 (EtwpGetDisallowList.c)
 *     EtwpIncrementTraceFile @ 0x1408B6530 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1408B6618 (EtwpQueryReferenceTime.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9380 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x1408BDDD0 (EtwRegisterEventCallback.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1408BE634 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C036C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C0640 (SendCaptureStateNotificationsWorker.c)
 *     EtwpSetProviderBinaryTracking @ 0x1408C2978 (EtwpSetProviderBinaryTracking.c)
 *     AddDecodeGuidToSessions @ 0x1408C3648 (AddDecodeGuidToSessions.c)
 *     EtwpGetSoftRestartInformation @ 0x1408C9E84 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1408C9FA0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CAA04 (EtwpSetSoftRestartInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1409085F0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F97F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 162), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
    1u);
}
