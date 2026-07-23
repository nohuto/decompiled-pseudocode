/*
 * XREFs of KeInitializeDpc @ 0x1400A5630
 * Callers:
 *     PopCaptureTimeOnProcZero @ 0x140567454 (PopCaptureTimeOnProcZero.c)
 *     PopHandleWakeSources @ 0x140567540 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14056790C (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x14056C600 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x14056DD44 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140570228 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x140571414 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x140572B50 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x140573004 (PoInitializePrcb.c)
 *     IopLiveDumpCorralProcessors @ 0x140579704 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x14057B720 (PnprQuiesceProcessors.c)
 *     ExpInitializeTimeChangeWorker @ 0x140584834 (ExpInitializeTimeChangeWorker.c)
 *     PspThreadDelete @ 0x1405FC0B0 (PspThreadDelete.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     NtCreateTimer @ 0x140624F50 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x1406696E4 (PfSnBeginTrace.c)
 *     ObpProcessRemoveObjectQueue @ 0x140692B80 (ObpProcessRemoveObjectQueue.c)
 *     PfSnAsyncContextInitialize @ 0x1406C2244 (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x1406DF780 (PoUserShutdownInitiated.c)
 *     IopConnectInterrupt @ 0x1407119EC (IopConnectInterrupt.c)
 *     PopUserPresentSetWorker @ 0x1407203A0 (PopUserPresentSetWorker.c)
 *     KeInitializeTimerTable @ 0x14072ADB8 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14072AEF8 (KiInitializeForceIdle.c)
 *     PiDrvDbCreateNode @ 0x14073BD38 (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x140748FF8 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407497A4 (CmpInitializeLazyWriters.c)
 *     WheapEtwEnableCallback @ 0x140762670 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x140822334 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408279B0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140828670 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140844EC0 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x14086D340 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x14087FA6C (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x1408B81C4 (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C5040 (EtwpCovSampCaptureContextStart.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140934C68 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x14093A224 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x14093F680 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14095229C (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409526AC (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x140954F94 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
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
