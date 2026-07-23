/*
 * XREFs of RtlGetLastWin32Error @ 0x1800F6AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG RtlGetLastWin32Error(void)
{
  return NtCurrentTeb()->LastErrorValue;
}
