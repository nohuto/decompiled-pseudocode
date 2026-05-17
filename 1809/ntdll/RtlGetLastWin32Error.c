/*
 * XREFs of RtlGetLastWin32Error @ 0x18008C440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetLastWin32Error()
{
  return NtCurrentTeb()->LastErrorValue;
}
