/*
 * XREFs of ZwResetWriteWatch @ 0x1401BAFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, RegionSize);
}
