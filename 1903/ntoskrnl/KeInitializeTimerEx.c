/*
 * XREFs of KeInitializeTimerEx @ 0x140081CA0
 * Callers:
 *     KeInitThread @ 0x1405952E0 (KeInitThread.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1405966DC (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x14059C574 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14059EC5C (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x14059FC60 (KiInitializeProcessor.c)
 *     PfSnAsyncContextInitialize @ 0x140669E38 (PfSnAsyncContextInitialize.c)
 *     NtCreateTimer @ 0x1406842D0 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1406B6BB4 (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x1406D9C78 (PfSnBeginTrace.c)
 *     PoUserShutdownInitiated @ 0x140725AC0 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x140750118 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x1407565AC (PiDrvDbCreateNode.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x14076A1F8 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x14076A9A4 (CmpInitializeLazyWriters.c)
 *     ExpWorkQueueManagerInitialize @ 0x14077ADC8 (ExpWorkQueueManagerInitialize.c)
 *     IopErrorLogQueueRequest @ 0x14085B20C (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x140860C10 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1408BC32C (TtmiCreateTerminal.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140973288 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x14097786C (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x14097DF14 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409940B4 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  *(_QWORD *)&Timer->Processor = 0LL;
}
