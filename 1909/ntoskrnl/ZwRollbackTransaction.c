/*
 * XREFs of ZwRollbackTransaction @ 0x1401C3B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle, Wait, v2);
}
