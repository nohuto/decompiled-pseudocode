/*
 * XREFs of RtlpStdLockRelease @ 0x1800FE1AC
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1800FDC40 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FDE54 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800FDF34 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800FE010 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800FE1CC (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpStdLockRelease(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_180165408 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
