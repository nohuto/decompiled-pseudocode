/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1800FA954
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800FA660 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x1800FA860 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A04C0 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x1800A0E50 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  NTSTATUS v0; // eax
  HANDLE Handles; // [rsp+30h] [rbp-18h] BYREF
  __int64 v3; // [rsp+38h] [rbp-10h]
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  Handles = 0LL;
  v3 = 0LL;
  if ( !TrkContext
    || (Handles = (HANDLE)*((_QWORD *)TrkContext + 1),
        v3 = *((_QWORD *)TrkContext + 3),
        Timeout.QuadPart = -100000000LL,
        ZwSetEvent(*((HANDLE *)TrkContext + 2), 0LL),
        v0 = NtWaitForMultipleObjects(2u, &Handles, WaitAny, 0, &Timeout),
        v0 != 1) )
  {
    byte_1801668E0 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
