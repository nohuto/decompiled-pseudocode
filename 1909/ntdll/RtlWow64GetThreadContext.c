/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DB420
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
