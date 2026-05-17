/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800FA954
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800FA660 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800FA860 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x1800A0E30 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_1801668E0 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
