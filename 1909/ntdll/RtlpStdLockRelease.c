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

signed __int64 __fastcall RtlpStdLockRelease(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_180165408 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
