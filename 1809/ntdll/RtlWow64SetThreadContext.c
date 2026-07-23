/*
 * XREFs of RtlWow64SetThreadContext @ 0x1800DD760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWow64SetThreadContext(HANDLE ThreadHandle, PWOW64_CONTEXT ThreadContext)
{
  return NtSetInformationThread(ThreadHandle, ThreadWow64Context, ThreadContext, 0x2CCu);
}
