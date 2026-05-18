/*
 * XREFs of sub_18007CA18 @ 0x18007CA18
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 * Callees:
 *     sub_18000D810 @ 0x18000D810 (sub_18000D810.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_1800779BC @ 0x1800779BC (sub_1800779BC.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007CA18(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  float v7; // xmm0_4
  float v8; // xmm6_4
  void **v9; // rdx
  __int64 result; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  signed __int32 v13; // eax
  bool v14; // zf
  volatile signed __int32 *v15; // rbx
  void *Src[2]; // [rsp+20h] [rbp-60h] BYREF
  __m128i si128; // [rsp+30h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-28h]

  v18 = -2LL;
  sub_1800779BC(a1, &v20);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = v20;
  v5 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
     + 1000000000 * (perf_counter / perf_frequency)
     - *sub_18000D810(v20, &v19);
  v6 = *(_QWORD *)(v4 + 280);
  if ( *(_QWORD *)(v4 + 272) == v6 )
    v7 = -3.4028235e38;
  else
    v7 = *(float *)(v6 - 4);
  v8 = (float)((float)(int)v5 / 1000000.0) - v7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18014AA40);
  LOWORD(Src[0]) = 0;
  sub_180026168((char *)Src, L"CPU", 3uLL);
  if ( (void **)(a1 + 1392) != Src )
  {
    v9 = Src;
    if ( si128.m128i_i64[1] >= 8uLL )
      v9 = (void **)Src[0];
    sub_180026168((char *)(a1 + 1392), v9, si128.m128i_u64[0]);
  }
  result = unknown_libname_116((__int64 *)Src);
  if ( v8 > 0.0 )
  {
    v11 = *(float *)(a1 + 1368);
    if ( v8 > v11 )
      v11 = v8;
    *(float *)(a1 + 1368) = v11;
    v12 = *(float *)(a1 + 1372);
    if ( v12 > v8 )
      v12 = v8;
    *(float *)(a1 + 1372) = v12;
    *(float *)(a1 + 1376) = v8 + *(float *)(a1 + 1376);
    ++*(_QWORD *)(a1 + 1384);
  }
  if ( v21 )
  {
    v13 = _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF);
    v14 = v13 == 1;
    result = (unsigned int)(v13 - 1);
    if ( v14 )
    {
      v15 = v21;
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      result = (unsigned int)_InterlockedDecrement(v15 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return result;
}
