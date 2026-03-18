/*
 * XREFs of PopSystemRequiredSet @ 0x14018275C
 * Callers:
 *     NtSetThreadExecutionState @ 0x1406B3A40 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x14013B3A0 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime();
}
