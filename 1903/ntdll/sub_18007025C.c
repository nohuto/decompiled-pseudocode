/*
 * XREFs of sub_18007025C @ 0x18007025C
 * Callers:
 *     sub_180070218 @ 0x180070218 (sub_180070218.c)
 *     sub_1800DFBC4 @ 0x1800DFBC4 (sub_1800DFBC4.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180070290 @ 0x180070290 (sub_180070290.c)
 */

signed __int64 __fastcall sub_18007025C(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&qword_180166338);
  sub_180070290(v2, a1);
  return RtlReleaseSRWLockExclusive(&qword_180166338);
}
