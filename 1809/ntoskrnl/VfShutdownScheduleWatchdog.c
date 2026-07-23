/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x14030B3AC
 * Callers:
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x14093A224 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return ViShutdownScheduleWatchdog();
  return result;
}
