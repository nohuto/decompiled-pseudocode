/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1401B89B0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406BABCC (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406C6564 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140711578 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(TokenHandle, DisableAllPrivileges, NewState);
}
