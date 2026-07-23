/*
 * XREFs of RtlpStdLockRelease @ 0x1800FB46C
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1800FAF00 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FB114 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800FB1F4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800FB2D0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800FB48C (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpStdLockRelease(_RTL_SRWLOCK *a1)
{
  if ( !byte_180165408 )
    RtlReleaseSRWLockExclusive(a1);
}
