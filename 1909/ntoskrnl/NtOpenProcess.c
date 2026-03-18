/*
 * XREFs of NtOpenProcess @ 0x1405D0AA0
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x1406F9094 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     PsOpenProcess @ 0x1405D0200 (PsOpenProcess.c)
 */

NTSTATUS __stdcall NtOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char PreviousMode; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return PsOpenProcess(ProcessHandle, DesiredAccess, (__int64)ObjectAttributes, ClientId, PreviousMode, PreviousMode);
}
