/*
 * XREFs of sub_18011FDF4 @ 0x18011FDF4
 * Callers:
 *     sub_18011FDF4 @ 0x18011FDF4 (sub_18011FDF4.c)
 *     sub_1801223E0 @ 0x1801223E0 (sub_1801223E0.c)
 *     sub_180122E10 @ 0x180122E10 (sub_180122E10.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 *     sub_18011FDF4 @ 0x18011FDF4 (sub_18011FDF4.c)
 *     sub_180121AAC @ 0x180121AAC (sub_180121AAC.c)
 *     sub_180124548 @ 0x180124548 (sub_180124548.c)
 *     sub_1801245AC @ 0x1801245AC (sub_1801245AC.c)
 *     sub_1801246AC @ 0x1801246AC (sub_1801246AC.c)
 *     sub_180124724 @ 0x180124724 (sub_180124724.c)
 *     sub_180124734 @ 0x180124734 (sub_180124734.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18011FDF4(__int64 a1, _QWORD *a2, double *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r15
  _QWORD *v10; // rdx
  unsigned int v11; // edi
  volatile signed __int32 *v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  struct _Mtx_internal_imp_t *v18; // [rsp+20h] [rbp-99h]
  _QWORD v19[4]; // [rsp+28h] [rbp-91h] BYREF
  _QWORD v20[5]; // [rsp+48h] [rbp-71h] BYREF
  __int64 v21; // [rsp+70h] [rbp-49h] BYREF
  __int64 v22[4]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-19h] BYREF
  volatile signed __int32 *v24; // [rsp+A8h] [rbp-11h]
  __int64 v25[2]; // [rsp+B0h] [rbp-9h] BYREF
  __m128i si128; // [rsp+C0h] [rbp+7h]

  v20[4] = -2LL;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v18 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v7 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v22, a2);
  sub_180121AAC(a1 + 144, &v21, v8);
  v9 = v21;
  unknown_libname_116(v22);
  v10 = a2;
  if ( a2[3] >= 8uLL )
    v10 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1801246AC(v9 + 64, v10) )
  {
    v19[2] = 0LL;
    v19[3] = 0LL;
    sub_18001110C(v19, (__int64)a2);
    v13 = sub_180124548(v9 + 64, v19);
    if ( (unsigned __int8)sub_180124734(v13) )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_18014AA40);
      LOWORD(v25[0]) = 0;
      sub_180026168((char *)v25, L"Value", 5uLL);
      v14 = v25;
      if ( si128.m128i_i64[1] >= 8uLL )
        v14 = (__int64 *)v25[0];
      if ( (unsigned __int8)sub_1801246AC(v13, v14)
        && (v20[2] = 0LL,
            v20[3] = 0LL,
            sub_18001110C(v20, (__int64)v25),
            v15 = sub_180124548(v13, v20),
            (unsigned __int8)sub_180124724(v15)) )
      {
        *a3 = sub_1801245AC(v15);
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
      unknown_libname_116(v25);
    }
    else if ( (unsigned __int8)sub_180124724(v13) )
    {
      *a3 = *(double *)(v13 + 48);
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v23 = 0LL;
    v24 = 0LL;
    sub_18008B420(a1, &v23);
    if ( v23 )
      v11 = sub_18011FDF4(v23, a2, a3);
    else
      v11 = 2;
    v12 = v24;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
      v6 = v18;
    }
  }
  v16 = Mtx_unlock(v6);
  if ( v16 )
    std::_Throw_C_error(v16);
  return v11;
}
