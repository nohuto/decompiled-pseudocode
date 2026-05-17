/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CC970
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
