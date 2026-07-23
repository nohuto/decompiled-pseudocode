/*
 * XREFs of PopSystemRequiredSet @ 0x1401787EC
 * Callers:
 *     NtSetThreadExecutionState @ 0x1405882F0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x140138CA0 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3u);
}
