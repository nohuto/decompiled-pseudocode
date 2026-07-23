/*
 * XREFs of RtlWow64SetThreadContext @ 0x1800DB530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWow64SetThreadContext(HANDLE ThreadHandle, PWOW64_CONTEXT ThreadContext)
{
  return ZwSetInformationThread(ThreadHandle, ThreadWow64Context, ThreadContext, 0x2CCu);
}
