/*
 * XREFs of sub_1800E9980 @ 0x1800E9980
 * Callers:
 *     sub_180073974 @ 0x180073974 (sub_180073974.c)
 * Callees:
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800E985C @ 0x1800E985C (sub_1800E985C.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E9980(__int64 a1, __int64 a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v6; // rbx
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a1 + 8) )
    return 0LL;
  sub_1800635DC(a1);
  v8 = 1;
  v9 = 0LL;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v10 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E985C((_QWORD *)(a1 + 32), &v8, a2, &v10, &v9);
  v6 = (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) / 56LL;
  sub_180063668(a1);
  return v6 - 1;
}
