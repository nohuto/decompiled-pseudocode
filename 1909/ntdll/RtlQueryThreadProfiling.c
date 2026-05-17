/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CCA30
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
