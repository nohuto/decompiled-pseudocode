/*
 * XREFs of RtlpHpStackTraceDisable @ 0x180104BE0
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180104B6C (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18007B33C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x1801153DC (RtlStackDbContextCleanup.c)
 */

signed __int64 __fastcall RtlpHpStackTraceDisable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_180166388 & 1) != 0 )
  {
    dword_180166388 = 0;
    RtlpEnumProcessHeaps((__int64)RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_180166390);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
