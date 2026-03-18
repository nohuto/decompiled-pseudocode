/*
 * XREFs of ZwProtectVirtualMemory @ 0x1401B8B70
 * Callers:
 *     CmSiProtectViewOfSection @ 0x14000F024 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x14029C4E8 (KiOpPatchCode.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405849A0 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x1406A3A2C (MiCheckForUserStackOverflow.c)
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
  return KiServiceInternal(ProcessHandle, BaseAddress, NumberOfBytesToProtect);
}
