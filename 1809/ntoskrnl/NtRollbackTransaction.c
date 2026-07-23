/*
 * XREFs of NtRollbackTransaction @ 0x1401947B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return __imp_NtRollbackTransaction(TransactionHandle, Wait);
}
