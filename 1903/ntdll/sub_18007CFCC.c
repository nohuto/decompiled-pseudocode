/*
 * XREFs of sub_18007CFCC @ 0x18007CFCC
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 */

__int64 sub_18007CFCC()
{
  qword_1801652F8 = (__int64)&qword_1801652F0;
  qword_1801652F0 = (__int64)&qword_1801652F0;
  qword_1801652A8 = (__int64)&qword_1801652A0;
  qword_1801652A0 = (__int64)&qword_1801652A0;
  RtlInitializeCriticalSectionEx(&stru_1801652C0, 0, 0);
  return sub_18007D01C();
}
