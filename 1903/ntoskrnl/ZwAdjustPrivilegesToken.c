/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1401C08F0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406DC974 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406E707C (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x14073F434 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
