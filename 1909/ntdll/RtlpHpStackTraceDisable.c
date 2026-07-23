/*
 * XREFs of RtlpHpStackTraceDisable @ 0x1801022DC
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180102268 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x180067B5C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x180114770 (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801663A8 & 1) != 0 )
  {
    dword_1801663A8 = 0;
    RtlpEnumProcessHeaps((__int64)RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_1801663B0);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
