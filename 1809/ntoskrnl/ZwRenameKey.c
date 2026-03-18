/*
 * XREFs of ZwRenameKey @ 0x1401BAED0
 * Callers:
 *     CmpDoReDoRenameKey @ 0x140807430 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, NewName, v2);
}
