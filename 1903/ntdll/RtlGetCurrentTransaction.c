/*
 * XREFs of RtlGetCurrentTransaction @ 0x18006CDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *RtlGetCurrentTransaction()
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
