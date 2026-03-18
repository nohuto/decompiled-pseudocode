/*
 * XREFs of NtSaveKey @ 0x140824920
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140824940 (NtSaveKeyEx.c)
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
