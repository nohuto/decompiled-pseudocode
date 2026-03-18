/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1401B8750
 * Callers:
 *     RtlpOpenThreadToken @ 0x1406BAF38 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x140711598 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140895484 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF48 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&DesiredAccess, OpenAsSelf);
}
