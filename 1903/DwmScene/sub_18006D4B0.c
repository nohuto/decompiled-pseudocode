/*
 * XREFs of sub_18006D4B0 @ 0x18006D4B0
 * Callers:
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 * Callees:
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_18006C908 @ 0x18006C908 (sub_18006C908.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_18006D4B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  sub_1800634AC((__int64)(a1 + 3), a2);
  sub_18006C908(a1);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v9 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  a1[54] = v9;
  v10 = v9 - a1[53];
  a1[59] = v10;
  return sub_18011D988(
           &unk_1802586B0,
           3LL,
           "RenderDevice startup duration to initialization complete: %8.3fms",
           (float)((float)(int)v10 / 1000000.0),
           a5,
           a6);
}
