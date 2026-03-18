/*
 * XREFs of ZwLockVirtualMemory @ 0x1401BA250
 * Callers:
 *     CmSiLockViewOfSection @ 0x14016CD48 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140307CBC (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToLock,
        ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, NumberOfBytesToLock);
}
