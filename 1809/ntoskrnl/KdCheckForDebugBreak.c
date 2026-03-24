/*
 * XREFs of KdCheckForDebugBreak @ 0x140144678
 * Callers:
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x1402805AC (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1402ADCF8 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x14056AFF8 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1401C5350 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x14028CC40 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
