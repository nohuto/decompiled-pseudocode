/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180102330
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180102268 (RtlpHpStackTraceConfig.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x18010A364 (RtlSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_1801663A8 & 1) == 0 )
  {
    dword_1801663A8 = 3;
    qword_1801663B0 = 0LL;
    qword_1801663E0 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_1801663E8 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_1801663B8 = 0LL;
    qword_1801663C0 = 0LL;
    qword_1801663C8 = 0LL;
    qword_1801663D8 = 0LL;
    qword_1801663D0 = 0LL;
    qword_1801663F0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
