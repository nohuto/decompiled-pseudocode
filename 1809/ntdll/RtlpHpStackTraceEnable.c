/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180104C34
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180104B6C (RtlpHpStackTraceConfig.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x18010C144 (RtlSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180166388 & 1) == 0 )
  {
    dword_180166388 = 3;
    qword_180166390 = 0LL;
    qword_1801663C0 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_1801663C8 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_180166398 = 0LL;
    qword_1801663A0 = 0LL;
    qword_1801663A8 = 0LL;
    qword_1801663B8 = 0LL;
    qword_1801663B0 = 0LL;
    qword_1801663D0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
