/*
 * XREFs of PopSystemRequiredSet @ 0x14018206C
 * Callers:
 *     NtSetThreadExecutionState @ 0x14069D770 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x1400EE900 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime();
}
