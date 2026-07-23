/*
 * XREFs of sub_18007ED50 @ 0x18007ED50
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18002A4F4 @ 0x18002A4F4 (sub_18002A4F4.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18007ED50(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(&stru_1801660B0);
  sub_18002A4F4(a1, a2);
  RtlReleaseSRWLockExclusive(&stru_1801660B0);
}
