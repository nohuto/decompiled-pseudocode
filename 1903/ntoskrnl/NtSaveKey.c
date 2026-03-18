/*
 * XREFs of NtSaveKey @ 0x140825220
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140825240 (NtSaveKeyEx.c)
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
