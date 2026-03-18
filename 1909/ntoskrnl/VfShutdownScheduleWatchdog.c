/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x1403288C8
 * Callers:
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x14097786C (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return ViShutdownScheduleWatchdog();
  return result;
}
