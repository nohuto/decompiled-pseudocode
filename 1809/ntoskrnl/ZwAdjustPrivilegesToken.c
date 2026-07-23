/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1401B8B10
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406BBE6C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406C7804 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140712818 (BiAdjustPrivilege.c)
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
