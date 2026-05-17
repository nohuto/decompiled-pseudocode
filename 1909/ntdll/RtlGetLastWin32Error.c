/*
 * XREFs of RtlGetLastWin32Error @ 0x1800F6BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetLastWin32Error()
{
  return NtCurrentTeb()->LastErrorValue;
}
