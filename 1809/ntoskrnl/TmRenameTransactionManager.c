/*
 * XREFs of TmRenameTransactionManager @ 0x140194A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  return __imp_TmRenameTransactionManager(LogFileName, ExistingTransactionManagerGuid);
}
