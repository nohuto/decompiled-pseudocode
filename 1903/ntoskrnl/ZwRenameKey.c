/*
 * XREFs of ZwRenameKey @ 0x1401C2E50
 * Callers:
 *     CmpDoReDoRenameKey @ 0x140840C70 (CmpDoReDoRenameKey.c)
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
