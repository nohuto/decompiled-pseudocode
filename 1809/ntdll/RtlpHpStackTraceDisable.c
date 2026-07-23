/*
 * XREFs of RtlpHpStackTraceDisable @ 0x180104BE0
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180104B6C (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18007B34C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x180115378 (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180166388 & 1) != 0 )
  {
    dword_180166388 = 0;
    RtlpEnumProcessHeaps((__int64)RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_180166390);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
