/*
 * XREFs of sub_180120150 @ 0x180120150
 * Callers:
 *     sub_180120150 @ 0x180120150 (sub_180120150.c)
 *     sub_180122840 @ 0x180122840 (sub_180122840.c)
 *     sub_180122F90 @ 0x180122F90 (sub_180122F90.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_18008B530 @ 0x18008B530 (sub_18008B530.c)
 *     sub_180120150 @ 0x180120150 (sub_180120150.c)
 *     sub_180121BBC @ 0x180121BBC (sub_180121BBC.c)
 *     sub_180124658 @ 0x180124658 (sub_180124658.c)
 *     sub_180124790 @ 0x180124790 (sub_180124790.c)
 *     sub_1801247BC @ 0x1801247BC (sub_1801247BC.c)
 *     sub_180124844 @ 0x180124844 (sub_180124844.c)
 *     ?is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z @ 0x18012484C (-is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180120150(__int64 a1, _QWORD *a2, __m128i *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r15
  _QWORD *v10; // rdx
  unsigned int v11; // edi
  volatile signed __int32 *v12; // rsi
  __crt_strtox *v13; // rsi
  const struct __crt_strtox::big_integer *v14; // rdx
  __int64 *v15; // rdx
  __crt_strtox *v16; // rsi
  const struct __crt_strtox::big_integer *v17; // rdx
  int v18; // eax
  struct _Mtx_internal_imp_t *v20; // [rsp+20h] [rbp-E0h]
  __m128i v21; // [rsp+28h] [rbp-D8h] BYREF
  __m128i v22; // [rsp+38h] [rbp-C8h]
  __m128i v23; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v24; // [rsp+58h] [rbp-A8h]
  _QWORD v25[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[5]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v30; // [rsp+E8h] [rbp-18h]
  __int64 v31[2]; // [rsp+F0h] [rbp-10h] BYREF
  __m128i si128; // [rsp+100h] [rbp+0h]

  v26[4] = -2LL;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v20 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v7 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v28, a2);
  sub_180121BBC(a1 + 144, &v27, v8);
  v9 = v27;
  unknown_libname_116(v28);
  v10 = a2;
  if ( a2[3] >= 8uLL )
    v10 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1801247BC(v9 + 64, v10) )
  {
    v25[2] = 0LL;
    v25[3] = 0LL;
    sub_18001115C(v25, (__int64)a2);
    v13 = (__crt_strtox *)sub_180124658(v9 + 64, v25);
    if ( (unsigned __int8)sub_180124844(v13) )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
      LOWORD(v31[0]) = 0;
      sub_180026278((char *)v31, L"Value", 5uLL);
      v15 = v31;
      if ( si128.m128i_i64[1] >= 8uLL )
        v15 = (__int64 *)v31[0];
      if ( (unsigned __int8)sub_1801247BC(v13, v15)
        && (v26[2] = 0LL,
            v26[3] = 0LL,
            sub_18001115C(v26, (__int64)v31),
            v16 = (__crt_strtox *)sub_180124658(v13, v26),
            __crt_strtox::is_zero(v16, v17)) )
      {
        sub_180124790(v16, &v23);
        if ( a3 != &v23 )
        {
          unknown_libname_116(a3->m128i_i64);
          *a3 = v23;
          a3[1] = v24;
          v24 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
          v23.m128i_i16[0] = 0;
        }
        unknown_libname_116(v23.m128i_i64);
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
      unknown_libname_116(v31);
    }
    else if ( __crt_strtox::is_zero(v13, v14) )
    {
      v22 = 0LL;
      sub_18001115C(&v21, (__int64)v13 + 8);
      if ( a3 != &v21 )
      {
        unknown_libname_116(a3->m128i_i64);
        *a3 = v21;
        a3[1] = v22;
        v22 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
        v21.m128i_i16[0] = 0;
      }
      unknown_libname_116(v21.m128i_i64);
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v29 = 0LL;
    v30 = 0LL;
    sub_18008B530(a1, &v29);
    if ( v29 )
      v11 = sub_180120150(v29, a2, a3);
    else
      v11 = 2;
    v12 = v30;
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
      v6 = v20;
    }
  }
  v18 = Mtx_unlock(v6);
  if ( v18 )
    std::_Throw_C_error(v18);
  return v11;
}
