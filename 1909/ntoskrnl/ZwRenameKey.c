/*
 * XREFs of ZwRenameKey @ 0x1401C39D0
 * Callers:
 *     CmpDoReDoRenameKey @ 0x1408402D0 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
