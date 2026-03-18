/*
 * XREFs of KeInitializeTimerEx @ 0x140089FF0
 * Callers:
 *     KeInitThread @ 0x1405656E0 (KeInitThread.c)
 *     PopHandleWakeSources @ 0x140566540 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14056690C (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x14056CD44 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14056F228 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x14057302C (KiInitializeProcessor.c)
 *     ExpInitializeTimeChangeWorker @ 0x140583834 (ExpInitializeTimeChangeWorker.c)
 *     NtCreateTimer @ 0x140623F30 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x14065B14C (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x140668544 (PfSnBeginTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1406C0FC4 (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x1406DE500 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x14072B024 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x14073AB68 (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x140747E28 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407485D4 (CmpInitializeLazyWriters.c)
 *     ExpWorkQueueManagerInitialize @ 0x140754E20 (ExpWorkQueueManagerInitialize.c)
 *     WheapEtwEnableCallback @ 0x1407614A0 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x140821154 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408267D0 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x14087E82C (TtmiCreateTerminal.c)
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

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  *(_QWORD *)&Timer->Processor = 0LL;
}
