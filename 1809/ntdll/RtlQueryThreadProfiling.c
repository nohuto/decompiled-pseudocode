/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CE1C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
