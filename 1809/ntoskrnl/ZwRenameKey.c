/*
 * XREFs of ZwRenameKey @ 0x1401BB050
 * Callers:
 *     CmpDoReDoRenameKey @ 0x140808610 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
