/*
 * XREFs of ZwProtectVirtualMemory @ 0x1401C0AD0
 * Callers:
 *     CmSiProtectViewOfSection @ 0x14008A608 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x1402B38F0 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B41A8 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1406C7DD8 (MiCheckForUserStackOverflow.c)
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
