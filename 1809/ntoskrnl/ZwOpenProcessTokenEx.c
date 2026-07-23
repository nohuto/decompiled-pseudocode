/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1401B88F0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406BBE6C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406BC094 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140712818 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1408966C4 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
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
