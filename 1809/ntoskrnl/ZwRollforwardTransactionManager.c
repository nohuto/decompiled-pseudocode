/*
 * XREFs of ZwRollforwardTransactionManager @ 0x1401BB0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollforwardTransactionManager(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, TmVirtualClock, v2);
}
