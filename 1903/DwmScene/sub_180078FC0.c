/*
 * XREFs of sub_180078FC0 @ 0x180078FC0
 * Callers:
 *     <none>
 * Callees:
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 */

_QWORD *__fastcall sub_180078FC0(__int64 a1, _QWORD *a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  *a2 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  return a2;
}
