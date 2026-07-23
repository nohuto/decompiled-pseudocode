/*
 * XREFs of sub_1800CDF80 @ 0x1800CDF80
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 */

__int64 *sub_1800CDF80()
{
  __int64 *result; // rax

  RtlInitializeCriticalSectionEx(&stru_180165AE0, 0, 0);
  result = &qword_180165AD0;
  qword_180165AD8 = (__int64)&qword_180165AD0;
  qword_180165AD0 = (__int64)&qword_180165AD0;
  return result;
}
