/*
 * XREFs of ZwRecoverTransactionManager @ 0x1401C2D70
 * Callers:
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, v1, v2);
}
