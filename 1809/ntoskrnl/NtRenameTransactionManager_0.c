/*
 * XREFs of NtRenameTransactionManager_0 @ 0x140194C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRenameTransactionManager_0(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  return NtRenameTransactionManager(LogFileName, ExistingTransactionManagerGuid);
}
