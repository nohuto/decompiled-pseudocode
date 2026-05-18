/*
 * XREFs of sub_18006D588 @ 0x18006D588
 * Callers:
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 * Callees:
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_18006D588(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  *(_QWORD *)(a1 + 440) = v4;
  return sub_18011D988(
           &unk_1802586B0,
           3LL,
           "RenderDevice startup duration to attach complete: %8.3fms",
           (float)((float)(v4 - *(_DWORD *)(a1 + 424)) / 1000000.0));
}
