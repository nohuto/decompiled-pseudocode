/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DD590
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
