/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1401B8990
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406BABEC (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406C6584 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140711598 (BiAdjustPrivilege.c)
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
