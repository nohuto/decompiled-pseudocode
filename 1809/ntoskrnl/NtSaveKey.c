/*
 * XREFs of NtSaveKey @ 0x1407EB890
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x1407EB8B0 (NtSaveKeyEx.c)
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
