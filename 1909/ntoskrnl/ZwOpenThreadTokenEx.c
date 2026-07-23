/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1401C1230
 * Callers:
 *     RtlpOpenThreadToken @ 0x1406DD948 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x140741334 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1408D2C74 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093DD88 (_SysCtxRegOpenCurrentUserKey.c)
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
