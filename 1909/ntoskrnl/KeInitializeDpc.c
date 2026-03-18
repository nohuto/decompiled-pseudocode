/*
 * XREFs of KeInitializeDpc @ 0x140098B70
 * Callers:
 *     PopCaptureTimeOnProcZero @ 0x1405960F0 (PopCaptureTimeOnProcZero.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140596628 (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140599120 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x14059BDF4 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14059EC3C (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x1405A05CC (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x1405A1A9C (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x1405A1F50 (PoInitializePrcb.c)
 *     IopLiveDumpCorralProcessors @ 0x1405A8570 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1405AA548 (PnprQuiesceProcessors.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1405B1C74 (PopFxDispatchPluginWorkOnce.c)
 *     PspThreadDelete @ 0x140610F10 (PspThreadDelete.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     NtCreateTimer @ 0x14064A240 (NtCreateTimer.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     PfSnAsyncContextInitialize @ 0x140697258 (PfSnAsyncContextInitialize.c)
 *     EtwpInitLoggerContext @ 0x1406AA3B4 (EtwpInitLoggerContext.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B64E0 (ObpProcessRemoveObjectQueue.c)
 *     PfSnBeginTrace @ 0x1406D9D68 (PfSnBeginTrace.c)
 *     PoUserShutdownInitiated @ 0x140727960 (PoUserShutdownInitiated.c)
 *     IopConnectInterrupt @ 0x14074338C (IopConnectInterrupt.c)
 *     PopUserPresentSetWorker @ 0x140749E10 (PopUserPresentSetWorker.c)
 *     KeInitializeTimerTable @ 0x14074E580 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14074E6C0 (KiInitializeForceIdle.c)
 *     PiDrvDbCreateNode @ 0x14075703C (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x140758A30 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407591D4 (CmpInitializeLazyWriters.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     IopErrorLogQueueRequest @ 0x14085A90C (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x140860310 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140860FF0 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14087EE10 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1408A8250 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1408BBBFC (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x1408F3218 (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x140900900 (EtwpCovSampCaptureContextStart.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140973288 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x14097786C (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x14097DF14 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409940B4 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 *     PoFxInitPowerManagement @ 0x140A1BDF0 (PoFxInitPowerManagement.c)
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
