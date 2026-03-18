/*
 * XREFs of PopGetSessionId @ 0x1406A1320
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x14018C3A0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1400F17F0 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
