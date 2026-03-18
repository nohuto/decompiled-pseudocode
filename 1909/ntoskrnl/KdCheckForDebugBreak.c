/*
 * XREFs of KdCheckForDebugBreak @ 0x14015FD24
 * Callers:
 *     KeAccumulateTicks @ 0x140033750 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x14029556C (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1402C5658 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x14059A558 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1401CC4F0 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x1402A2A40 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
