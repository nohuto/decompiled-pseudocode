/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CCA30
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlQueryThreadProfiling(HANDLE ThreadHandle, PBOOLEAN Enabled)
{
  return ZwQueryInformationThread(ThreadHandle, ThreadCounterProfiling, Enabled, 1u, 0LL);
}
