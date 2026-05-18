/*
 * XREFs of sub_18010456C @ 0x18010456C
 * Callers:
 *     sub_180103AC0 @ 0x180103AC0 (sub_180103AC0.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 *     sub_180105E5C @ 0x180105E5C (sub_180105E5C.c)
 * Callees:
 *     sub_180103A28 @ 0x180103A28 (sub_180103A28.c)
 *     sub_1801040CC @ 0x1801040CC (sub_1801040CC.c)
 *     sub_180105EF4 @ 0x180105EF4 (sub_180105EF4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1801273F8 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010456C(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  float v7; // xmm0_4
  float v8; // xmm6_4
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  float v13; // xmm0_4
  __int64 v14; // r13
  __int64 v15; // r12
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-71h]
  __int64 v26; // [rsp+38h] [rbp-69h]
  __int128 v27; // [rsp+40h] [rbp-61h]
  __int128 v29; // [rsp+78h] [rbp-29h] BYREF
  __int128 v30; // [rsp+88h] [rbp-19h] BYREF
  __int64 v31; // [rsp+98h] [rbp-9h]
  __m128 v32; // [rsp+A0h] [rbp-1h] BYREF

  v5 = a1;
  v6 = a2 * a2;
  v30 = 0uLL;
  v31 = 0LL;
  sub_180103A28(&v30, a2 * a2 * a2);
  v7 = (float)(int)a2;
  if ( (a2 & 0x8000000000000000uLL) != 0LL )
    v7 = v7 + 1.8446744e19;
  v8 = 1.0 / (float)(v7 - 1.0);
  v9 = 0LL;
  if ( a2 )
  {
    HIDWORD(v27) = 1065353216;
    v10 = 0LL;
    v26 = 0LL;
    v11 = 16 * v6;
    do
    {
      v12 = 0LL;
      v13 = (float)(int)v9;
      if ( v9 < 0 )
        v13 = v13 + 1.8446744e19;
      *((float *)&v27 + 2) = v13 * v8;
      v14 = v10;
      do
      {
        v15 = 0LL;
        v16 = (float)(int)v12;
        if ( v12 < 0 )
          v16 = v16 + 1.8446744e19;
        *((float *)&v27 + 1) = v16 * v8;
        v25 = v14;
        do
        {
          v17 = (float)(int)v15;
          if ( v15 < 0 )
            v17 = v17 + 1.8446744e19;
          *(float *)&v27 = v17 * v8;
          v29 = v27;
          v18 = *(_QWORD *)(a3 + 56);
          if ( !v18 )
          {
            std::_Xbad_function_call();
            JUMPOUT(0x1801047F9LL);
          }
          (*(void (__fastcall **)(__int64, __m128 *, __int128 *))(*(_QWORD *)v18 + 16LL))(v18, &v32, &v29);
          v32 = _mm_min_ps(_mm_max_ps(v32, (__m128)xmmword_180142E20), (__m128)xmmword_180142E10);
          *(__m128 *)(v25 + v30) = v32;
          ++v15;
          v25 += 16LL;
        }
        while ( v15 < a2 );
        ++v12;
        v14 += 16 * a2;
      }
      while ( v12 < a2 );
      ++v9;
      v10 = v11 + v26;
      v26 += v11;
    }
    while ( v9 < a2 );
    v5 = a1;
  }
  sub_180105EF4(v5, a2, &v30, 0LL);
  result = sub_1801040CC(v5);
  v21 = v30;
  if ( (_QWORD)v30 )
  {
    v22 = (v31 - v30) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v22 >= 0x1000 )
    {
      v23 = v22 + 39;
      v21 = *(_QWORD *)(v30 - 8);
      if ( (unsigned __int64)(v30 - v21 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v21, v23);
        __debugbreak();
      }
    }
    result = j_j__o_free(v21);
    v30 = 0LL;
    v31 = 0LL;
  }
  v24 = *(_QWORD *)(a3 + 56);
  if ( v24 )
  {
    LOBYTE(v20) = v24 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v20);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return result;
}
