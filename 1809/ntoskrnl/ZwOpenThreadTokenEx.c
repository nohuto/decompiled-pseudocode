/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1401B8770
 * Callers:
 *     RtlpOpenThreadToken @ 0x1406BAF18 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x140711578 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140895464 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF28 (_SysCtxRegOpenCurrentUserKey.c)
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
