/*
 * XREFs of RtlGetLastNtStatus @ 0x18007B4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlGetLastNtStatus(void)
{
  return NtCurrentTeb()->LastStatusValue;
}
