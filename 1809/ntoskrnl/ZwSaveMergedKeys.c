/*
 * XREFs of ZwSaveMergedKeys @ 0x1401BB130
 * Callers:
 *     NtSaveMergedKeys @ 0x1407EA960 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle, LowPrecedenceKeyHandle, FileHandle);
}
