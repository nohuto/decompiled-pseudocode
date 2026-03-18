/*
 * XREFs of KeInitializeDpc @ 0x1400A56D0
 * Callers:
 *     PopCaptureTimeOnProcZero @ 0x140566454 (PopCaptureTimeOnProcZero.c)
 *     PopHandleWakeSources @ 0x140566540 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14056690C (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x14056B600 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x14056CD44 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14056F228 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x140570414 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x140571B50 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x140572004 (PoInitializePrcb.c)
 *     IopLiveDumpCorralProcessors @ 0x140578704 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x14057A720 (PnprQuiesceProcessors.c)
 *     ExpInitializeTimeChangeWorker @ 0x140583834 (ExpInitializeTimeChangeWorker.c)
 *     PspThreadDelete @ 0x1405FB0B0 (PspThreadDelete.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     NtCreateTimer @ 0x140623F30 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x14065B14C (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x140668544 (PfSnBeginTrace.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919E0 (ObpProcessRemoveObjectQueue.c)
 *     PfSnAsyncContextInitialize @ 0x1406C0FC4 (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x1406DE500 (PoUserShutdownInitiated.c)
 *     IopConnectInterrupt @ 0x14071076C (IopConnectInterrupt.c)
 *     PopUserPresentSetWorker @ 0x14071F120 (PopUserPresentSetWorker.c)
 *     KeInitializeTimerTable @ 0x140729BE8 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x140729D28 (KiInitializeForceIdle.c)
 *     PiDrvDbCreateNode @ 0x14073AB68 (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x140747E28 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407485D4 (CmpInitializeLazyWriters.c)
 *     WheapEtwEnableCallback @ 0x1407614A0 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x140821154 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408267D0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140827490 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140843C80 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x14086C100 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x14087E82C (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x1408B6F24 (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C3DA0 (EtwpCovSampCaptureContextStart.c)
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140933C68 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140939224 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x14093E680 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14095129C (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409516AC (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x140953F94 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
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
