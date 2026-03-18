/*
 * XREFs of PopGetSessionId @ 0x1406A39C0
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x14018BA10 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1400EE790 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
