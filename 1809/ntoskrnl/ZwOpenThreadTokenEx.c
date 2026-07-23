/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1401B88D0
 * Callers:
 *     RtlpOpenThreadToken @ 0x1406BC1B8 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x140712818 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1408966C4 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
