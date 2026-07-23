/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1401C06D0
 * Callers:
 *     RtlCheckTokenCapability @ 0x14030C230 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x1406DC974 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406DCB9C (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14073F434 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1408D3374 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093E318 (_SysCtxRegOpenCurrentUserKey.c)
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
