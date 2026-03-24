/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1401B8790
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406BABCC (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406BADF4 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140711578 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140895464 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF28 (_SysCtxRegOpenCurrentUserKey.c)
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
