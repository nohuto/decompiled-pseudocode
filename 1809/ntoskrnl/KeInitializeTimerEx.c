/*
 * XREFs of KeInitializeTimerEx @ 0x140089FE0
 * Callers:
 *     KeInitThread @ 0x1405666E0 (KeInitThread.c)
 *     PopHandleWakeSources @ 0x140567540 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14056790C (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x14056DD44 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140570228 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x14057402C (KiInitializeProcessor.c)
 *     ExpInitializeTimeChangeWorker @ 0x140584834 (ExpInitializeTimeChangeWorker.c)
 *     NtCreateTimer @ 0x140624F50 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x1406696E4 (PfSnBeginTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1406C2244 (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x1406DF780 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x14072C1F4 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x14073BD38 (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x140748FF8 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1407497A4 (CmpInitializeLazyWriters.c)
 *     ExpWorkQueueManagerInitialize @ 0x140755FF0 (ExpWorkQueueManagerInitialize.c)
 *     WheapEtwEnableCallback @ 0x140762670 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x140822334 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408279B0 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x14087FA6C (TtmiCreateTerminal.c)
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

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  *(_QWORD *)&Timer->Processor = 0LL;
}
