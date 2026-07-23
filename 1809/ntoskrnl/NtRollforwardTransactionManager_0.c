/*
 * XREFs of NtRollforwardTransactionManager_0 @ 0x140194CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollforwardTransactionManager_0(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtRollforwardTransactionManager(TransactionManagerHandle, TmVirtualClock);
}
