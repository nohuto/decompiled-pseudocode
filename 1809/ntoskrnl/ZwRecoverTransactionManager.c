/*
 * XREFs of ZwRecoverTransactionManager @ 0x1401BAF70
 * Callers:
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
