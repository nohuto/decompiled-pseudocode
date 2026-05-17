/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DB360
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
