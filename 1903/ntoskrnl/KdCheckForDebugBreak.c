/*
 * XREFs of KdCheckForDebugBreak @ 0x14015F684
 * Callers:
 *     KeAccumulateTicks @ 0x140033360 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x14029580C (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1402C58F8 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x14059A578 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1401CB970 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x1402A2CE0 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
