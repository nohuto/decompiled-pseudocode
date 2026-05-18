/*
 * XREFs of sub_1800D5C30 @ 0x1800D5C30
 * Callers:
 *     sub_1800D5E90 @ 0x1800D5E90 (sub_1800D5E90.c)
 * Callees:
 *     sub_1800265F8 @ 0x1800265F8 (sub_1800265F8.c)
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180066F10 @ 0x180066F10 (sub_180066F10.c)
 *     sub_180069DF4 @ 0x180069DF4 (sub_180069DF4.c)
 *     sub_1800D62E8 @ 0x1800D62E8 (sub_1800D62E8.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 *     _Thrd_yield @ 0x1801274C6 (_Thrd_yield.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D5C30(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v6; // rsi
  char v7; // r13
  __int64 v8; // rbp
  __int64 **v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v19; // [rsp+38h] [rbp-100h]
  __int64 *v20[4]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v21[136]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 **v22; // [rsp+E8h] [rbp-50h] BYREF

  v20[1] = (__int64 *)-2LL;
  v2 = a2;
  v20[2] = a1;
  sub_1800635DC((__int64)a1);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v6 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_180066F10((__int64)v21);
  v7 = 0;
  v8 = a1[7];
  v19 = v8;
  v9 = (__int64 **)a1[6];
  v10 = *v9;
  if ( *v9 != (__int64 *)v9 )
  {
    do
    {
      if ( v7 )
        break;
      v11 = Query_perf_frequency();
      v12 = Query_perf_counter();
      if ( 1000000000 * (v12 % v11) / v11 + 1000000000 * (v12 / v11) - v6 >= 1000000 * v2 )
      {
LABEL_6:
        sub_18011D988(
          &unk_18025CCE0,
          4LL,
          "GpuProfiler::FramesData::WaitPendingFrames() -- wait for flush abandoned (limit is %lld ms)",
          v2);
        v7 = 1;
      }
      else
      {
        while ( 1 )
        {
          LOBYTE(v13) = 1;
          if ( (unsigned int)sub_1801097AC(a1[2 * v10[4] + 8], v21, v13) == 3 )
            break;
          Thrd_yield();
          v14 = Query_perf_frequency();
          v15 = Query_perf_counter();
          if ( 1000000000 * (v15 % v14) / v14 + 1000000000 * (v15 / v14) - v6 >= 1000000 * v2 )
            goto LABEL_6;
        }
        sub_1800D62E8(a1 + 1, v10 + 4);
        v10 = (__int64 *)*sub_1800265F8(a1 + 6, (__int64 *)v20, v10);
      }
    }
    while ( v10 != (__int64 *)a1[6] );
    LODWORD(v8) = v19;
  }
  v16 = Query_perf_frequency();
  v17 = Query_perf_counter();
  sub_18011D988(
    &unk_18025CCE0,
    2LL,
    "GpuProfiler::FramesData::WaitPendingFrames() -- waited %lld ms for flush (pending frames: %d)",
    (1000000000 * (v17 % v16) / v16 + 1000000000 * (v17 / v16) - v6) / 1000000,
    v8);
  sub_180069DF4(&v22, v20, *v22, (__int64 *)v22);
  j_j__o_free(v22);
  return sub_180063668((__int64)a1);
}
