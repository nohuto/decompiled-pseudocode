/*
 * XREFs of NtSetInformationTransactionManager_0 @ 0x140194CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtSetInformationTransactionManager_0(
        HANDLE TmHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength)
{
  return NtSetInformationTransactionManager(
           TmHandle,
           TransactionManagerInformationClass,
           TransactionManagerInformation,
           TransactionManagerInformationLength);
}
