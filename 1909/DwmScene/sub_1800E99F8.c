/*
 * XREFs of sub_1800E99F8 @ 0x1800E99F8
 * Callers:
 *     sub_18007589C @ 0x18007589C (sub_18007589C.c)
 * Callees:
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800752D0 @ 0x1800752D0 (sub_1800752D0.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E99F8(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  sub_1800636EC((__int64)a1);
  a1[2] = a2;
  v4 = (_QWORD *)a1[5];
  v5 = (_QWORD *)a1[4];
  if ( v5 != v4 )
  {
    do
    {
      sub_1800752D0(v5, 0);
      v5 += 7;
    }
    while ( v5 != v4 );
    v5 = (_QWORD *)a1[4];
  }
  a1[5] = v5;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  a1[3] = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  return sub_180063778((__int64)a1);
}
