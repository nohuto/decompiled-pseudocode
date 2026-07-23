/*
 * XREFs of sub_1801021FC @ 0x1801021FC
 * Callers:
 *     sub_180102188 @ 0x180102188 (sub_180102188.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18006790C @ 0x18006790C (sub_18006790C.c)
 *     sub_180114640 @ 0x180114640 (sub_180114640.c)
 */

void sub_1801021FC()
{
  RtlAcquireSRWLockExclusive(&stru_180166390);
  if ( (dword_180166398 & 1) != 0 )
  {
    dword_180166398 = 0;
    sub_18006790C((__int64)sub_1801024C0, 0LL, 2);
    sub_180114640(&qword_1801663A0);
  }
  RtlReleaseSRWLockExclusive(&stru_180166390);
}
