/*
 * XREFs of sub_1800E3048 @ 0x1800E3048
 * Callers:
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 * Callees:
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_1800E3048(__int64 a1, __int64 a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v5 = perf_counter / perf_frequency;
  result = 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  *(_QWORD *)(a1 + 80) = result + 1000000000 * v5;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
