/*
 * XREFs of sub_180102250 @ 0x180102250
 * Callers:
 *     sub_180102188 @ 0x180102188 (sub_180102188.c)
 *     sub_18010A234 @ 0x18010A234 (sub_18010A234.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 sub_180102250()
{
  RtlAcquireSRWLockExclusive(&stru_180166390);
  if ( (dword_180166398 & 1) == 0 )
  {
    dword_180166398 = 3;
    qword_1801663A0 = 0LL;
    qword_1801663D0 = (__int64)sub_180101A00;
    qword_1801663D8 = (__int64)sub_180101A30;
    qword_1801663A8 = 0LL;
    qword_1801663B0 = 0LL;
    qword_1801663B8 = 0LL;
    qword_1801663C8 = 0LL;
    qword_1801663C0 = 0LL;
    qword_1801663E0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&stru_180166390);
  return 1LL;
}
