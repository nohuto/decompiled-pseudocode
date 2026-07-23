/*
 * XREFs of ZwRenameTransactionManager @ 0x1401C2E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LogFileName);
}
