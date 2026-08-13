/*
 * XREFs of NtTerminateProcess_0 @ 0x1400016BE
 * Callers:
 *     __report_gsfailure @ 0x140001490 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtTerminateProcess_0(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  return NtTerminateProcess(ProcessHandle, ExitStatus);
}
