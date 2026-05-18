/*
 * XREFs of sub_18006C650 @ 0x18006C650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 */

void __fastcall sub_18006C650(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( ++*(_DWORD *)(a1 + 3884) == 1 )
  {
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
    *(_QWORD *)(a1 + 448) = v4;
    v5 = v4 - *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 480) = v5;
    sub_18011D988(
      &unk_1802586B0,
      3LL,
      "RenderDevice startup duration until first frame begin: %8.3fms",
      (float)((float)(int)v5 / 1000000.0));
  }
}
