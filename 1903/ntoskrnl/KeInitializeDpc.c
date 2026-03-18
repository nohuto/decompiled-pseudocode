/*
 * XREFs of KeInitializeDpc @ 0x1400B8D00
 * Callers:
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1405966DC (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140599140 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x14059C574 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14059EC5C (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x1405A05EC (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x1405A1ABC (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x1405A1F70 (PoInitializePrcb.c)
 *     IopLiveDumpCorralProcessors @ 0x1405A8590 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1405AA568 (PnprQuiesceProcessors.c)
 *     PspThreadDelete @ 0x14060F400 (PspThreadDelete.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PfSnAsyncContextInitialize @ 0x140669E38 (PfSnAsyncContextInitialize.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     NtCreateTimer @ 0x1406842D0 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1406B6BB4 (EtwpInitLoggerContext.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406BAD50 (ObpProcessRemoveObjectQueue.c)
 *     PfSnBeginTrace @ 0x1406D9C78 (PfSnBeginTrace.c)
 *     PoUserShutdownInitiated @ 0x140725AC0 (PoUserShutdownInitiated.c)
 *     IopConnectInterrupt @ 0x14074148C (IopConnectInterrupt.c)
 *     PopUserPresentSetWorker @ 0x140747F10 (PopUserPresentSetWorker.c)
 *     KeInitializeTimerTable @ 0x14074DAF0 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14074DC30 (KiInitializeForceIdle.c)
 *     PiDrvDbCreateNode @ 0x1407565AC (PiDrvDbCreateNode.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x14076A1F8 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x14076A9A4 (CmpInitializeLazyWriters.c)
 *     IopErrorLogQueueRequest @ 0x14085B20C (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x140860C10 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408618F0 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14087F710 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1408A89F0 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1408BC32C (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x1408F38A8 (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900FA0 (EtwpCovSampCaptureContextStart.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140973288 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x14097786C (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x14097DF14 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409940B4 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
