/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1401C1250
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406DD5F4 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406DD81C (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140741334 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1408D2C74 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093DD88 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
