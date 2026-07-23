/*
 * XREFs of ZwRollbackTransaction @ 0x1401BB210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
