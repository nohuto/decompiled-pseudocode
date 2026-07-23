/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1401C06B0
 * Callers:
 *     RtlCheckTokenCapability @ 0x14030C230 (RtlCheckTokenCapability.c)
 *     RtlpOpenThreadToken @ 0x1406DCCC8 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x14073F434 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1408D3374 (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093E318 (_SysCtxRegOpenCurrentUserKey.c)
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
