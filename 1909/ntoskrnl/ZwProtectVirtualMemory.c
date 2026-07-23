/*
 * XREFs of ZwProtectVirtualMemory @ 0x1401C1650
 * Callers:
 *     CmSiProtectViewOfSection @ 0x14008B908 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x1402B3650 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B4584 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1406C610C (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        SIZE_T *NumberOfBytesToProtect,
        ULONG NewAccessProtection,
        PULONG OldAccessProtection)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
