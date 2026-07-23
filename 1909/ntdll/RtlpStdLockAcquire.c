/*
 * XREFs of RtlpStdLockAcquire @ 0x1800FB44C
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1800FAF00 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FB114 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800FB1F4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800FB2D0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800FB48C (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(_RTL_SRWLOCK *a1)
{
  if ( !byte_180165408 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
