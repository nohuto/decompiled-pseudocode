/*
 * XREFs of KdCheckForDebugBreak @ 0x140144778
 * Callers:
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x14028079C (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1402ADEE8 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x14056BFF8 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1401C54B0 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x14028CE30 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
