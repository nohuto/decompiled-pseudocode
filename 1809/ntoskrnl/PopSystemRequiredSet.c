/*
 * XREFs of PopSystemRequiredSet @ 0x1401786CC
 * Callers:
 *     NtSetThreadExecutionState @ 0x1405872F0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x140138B80 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3u);
}
