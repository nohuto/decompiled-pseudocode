/*
 * XREFs of sub_1800E98E8 @ 0x1800E98E8
 * Callers:
 *     sub_18007578C @ 0x18007578C (sub_18007578C.c)
 * Callees:
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800751C0 @ 0x1800751C0 (sub_1800751C0.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E98E8(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  sub_1800635DC((__int64)a1);
  a1[2] = a2;
  v4 = (_QWORD *)a1[5];
  v5 = (_QWORD *)a1[4];
  if ( v5 != v4 )
  {
    do
    {
      sub_1800751C0(v5, 0);
      v5 += 7;
    }
    while ( v5 != v4 );
    v5 = (_QWORD *)a1[4];
  }
  a1[5] = v5;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  a1[3] = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  return sub_180063668((__int64)a1);
}
