/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1401C1470
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406DD5F4 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406E817C (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140741334 (BiAdjustPrivilege.c)
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
