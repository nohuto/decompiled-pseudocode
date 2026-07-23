/*
 * XREFs of ZwSaveMergedKeys @ 0x1401C3090
 * Callers:
 *     NtSaveMergedKeys @ 0x1408254F0 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle);
}
