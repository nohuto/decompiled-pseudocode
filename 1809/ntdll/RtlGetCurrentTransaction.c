/*
 * XREFs of RtlGetCurrentTransaction @ 0x180076B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *RtlGetCurrentTransaction()
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
