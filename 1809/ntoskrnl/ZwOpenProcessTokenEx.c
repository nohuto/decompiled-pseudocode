/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1401B8770
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406BABEC (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406BAE14 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140711598 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140895484 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF48 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess, *(_QWORD *)&HandleAttributes);
}
