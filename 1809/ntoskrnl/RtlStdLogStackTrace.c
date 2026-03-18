/*
 * XREFs of RtlStdLogStackTrace @ 0x1402ECFB8
 * Callers:
 *     ExInitializeResourceLite @ 0x1400CC4D0 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x14016BC90 (ExpInitializeResource.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400CCC90 (RtlCaptureStackBackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1402ED59C (RtlpStdLogCapturedStackTrace.c)
 */

__int64 __fastcall RtlStdLogStackTrace(PKSPIN_LOCK SpinLock, int a2)
{
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG v5; // [rsp+148h] [rbp+10h] BYREF

  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &v5) )
    return RtlpStdLogCapturedStackTrace(SpinLock);
  else
    return 0LL;
}
