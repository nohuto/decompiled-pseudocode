/*
 * XREFs of sub_1800794F0 @ 0x1800794F0
 * Callers:
 *     sub_1800C2770 @ 0x1800C2770 (sub_1800C2770.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18006CDF8 @ 0x18006CDF8 (sub_18006CDF8.c)
 *     sub_180073A84 @ 0x180073A84 (sub_180073A84.c)
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 *     sub_180077ACC @ 0x180077ACC (sub_180077ACC.c)
 *     sub_180078B68 @ 0x180078B68 (sub_180078B68.c)
 *     sub_1800D5BB0 @ 0x1800D5BB0 (sub_1800D5BB0.c)
 *     sub_1800E9C5C @ 0x1800E9C5C (sub_1800E9C5C.c)
 *     sub_180114F64 @ 0x180114F64 (sub_180114F64.c)
 *     sub_180115160 @ 0x180115160 (sub_180115160.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800794F0(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-98h]
  __int128 v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-60h] BYREF
  int v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-50h]
  __int64 v31[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v33; // [rsp+E0h] [rbp-20h]
  _BYTE v34[64]; // [rsp+F0h] [rbp-10h] BYREF

  v31[3] = -2LL;
  memset(v34, 0, sizeof(v34));
  v22 = 0LL;
  v7 = a1[59];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a1[59];
  }
  *(_QWORD *)&v22 = a1[58];
  *((_QWORD *)&v22 + 1) = v7;
  sub_180114F64(
    (unsigned int)v34,
    (unsigned int)&v22,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1511,
    (__int64)"PostRenderScene",
    (__int64)"kSpectreRenderCB_PostRender",
    1);
  memset(v31, 0, 24);
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v26[0]) = 0;
  sub_18000E168(v26, 0x1BuLL, 0LL, "kSpectreRenderCB_PostRender");
  v8 = sub_180077ACC((__int64)a1, &v32);
  v9 = (volatile signed __int32 *)v8[1];
  if ( v9 )
  {
    _InterlockedIncrement(v9 + 3);
    v9 = (volatile signed __int32 *)v8[1];
  }
  v23 = *v8;
  v24 = v9;
  sub_180073A84(v31, &v23, (__int64)v26);
  if ( v24 && _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
  v10 = v33;
  if ( v33 )
  {
    if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v11 = v26[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v11 = *(_QWORD *)(v26[0] - 8);
      if ( (unsigned __int64)(v26[0] - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v11);
  }
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v26[0]) = 0;
  v28 = a1[121];
  v29 = 4;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v30 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E9C5C(v28, &v28);
  v21 = 0LL;
  v14 = a4[1];
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a4[1];
  }
  *(_QWORD *)&v21 = *a4;
  *((_QWORD *)&v21 + 1) = v14;
  v25 = 0LL;
  v15 = a3[1];
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v15 = a3[1];
  }
  *(_QWORD *)&v25 = *a3;
  *((_QWORD *)&v25 + 1) = v15;
  sub_180078B68((__int64)a1, 4u, (__int64)&v25, (__int64)&v21);
  sub_180074950(v31);
  sub_180115160(v34);
  v16 = *a3;
  v17 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 184LL))(*a4);
  v19 = sub_18006CDF8(v16, v18);
  return sub_1800D5BB0(v17, v19);
}
