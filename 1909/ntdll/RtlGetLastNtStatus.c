/*
 * XREFs of RtlGetLastNtStatus @ 0x18007B4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetLastNtStatus()
{
  return NtCurrentTeb()->LastStatusValue;
}
