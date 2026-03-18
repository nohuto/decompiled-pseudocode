/*
 * XREFs of KeInitializeTimerEx @ 0x1400820A0
 * Callers:
 *     KeInitThread @ 0x1405952E0 (KeInitThread.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140596628 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x14059BDF4 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14059EC3C (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x14059FC40 (KiInitializeProcessor.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1405B1C74 (PopFxDispatchPluginWorkOnce.c)
 *     NtCreateTimer @ 0x14064A240 (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x140697258 (PfSnAsyncContextInitialize.c)
 *     EtwpInitLoggerContext @ 0x1406AA3B4 (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x1406D9D68 (PfSnBeginTrace.c)
 *     PoUserShutdownInitiated @ 0x140727960 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x140750BA8 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x14075703C (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x140758A30 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407591D4 (CmpInitializeLazyWriters.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407735B0 (ExpWorkQueueManagerInitialize.c)
 *     IopErrorLogQueueRequest @ 0x14085A90C (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x140860310 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1408BBBFC (TtmiCreateTerminal.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140973288 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x14097786C (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x14097DF14 (VfWdInit.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409940B4 (AnFwProgressIndicatorTransition.c)
 *     IoInitSystemPreDrivers @ 0x140A05968 (IoInitSystemPreDrivers.c)
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
