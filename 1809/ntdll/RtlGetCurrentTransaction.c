/*
 * XREFs of RtlGetCurrentTransaction @ 0x180076B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE RtlGetCurrentTransaction(void)
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
