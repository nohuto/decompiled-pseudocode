/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800F8638
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800F8340 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800F8544 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x18009D050 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x18009D9E0 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_180166A40 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
