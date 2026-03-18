/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x14097786C
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x140328E78 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409778E0 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !VfShutdownThread )
    VfShutdownThread = (ULONG_PTR)KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
