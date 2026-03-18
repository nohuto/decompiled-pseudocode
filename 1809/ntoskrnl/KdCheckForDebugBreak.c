/*
 * XREFs of KdCheckForDebugBreak @ 0x140144658
 * Callers:
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x1402804AC (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1402ADBF8 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x14056AFF8 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1401C5330 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x14028CB40 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
