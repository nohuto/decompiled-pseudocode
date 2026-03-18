/*
 * XREFs of RtlStdLogStackTrace @ 0x14030B818
 * Callers:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x140176740 (ExpInitializeResource.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017170 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpStdLogCapturedStackTrace @ 0x14030BE1C (RtlpStdLogCapturedStackTrace.c)
 */

__int64 __fastcall RtlStdLogStackTrace(PKSPIN_LOCK SpinLock, int a2)
{
  PVOID v5[35]; // [rsp+20h] [rbp-118h] BYREF
  ULONG BackTraceHash; // [rsp+148h] [rbp+10h] BYREF

  memset(v5, 0, 0x110uLL);
  HIWORD(v5[1]) = RtlCaptureStackBackTrace(a2 + 1, 0x20u, &v5[2], &BackTraceHash);
  if ( HIWORD(v5[1]) )
    return RtlpStdLogCapturedStackTrace(SpinLock);
  else
    return 0LL;
}
