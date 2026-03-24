/*
 * XREFs of NtSaveKey @ 0x1407EA690
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x1407EA6B0 (NtSaveKeyEx.c)
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
