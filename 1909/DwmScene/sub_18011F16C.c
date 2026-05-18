/*
 * XREFs of sub_18011F16C @ 0x18011F16C
 * Callers:
 *     sub_180122D10 @ 0x180122D10 (sub_180122D10.c)
 *     sub_180122D20 @ 0x180122D20 (sub_180122D20.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_18011F0A0 @ 0x18011F0A0 (sub_18011F0A0.c)
 *     sub_180121AFC @ 0x180121AFC (sub_180121AFC.c)
 *     sub_180122DC0 @ 0x180122DC0 (sub_180122DC0.c)
 *     sub_180124658 @ 0x180124658 (sub_180124658.c)
 *     sub_1801246BC @ 0x1801246BC (sub_1801246BC.c)
 *     sub_1801247BC @ 0x1801247BC (sub_1801247BC.c)
 *     sub_180124834 @ 0x180124834 (sub_180124834.c)
 *     sub_180124844 @ 0x180124844 (sub_180124844.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011F16C(__int64 a1, _QWORD *a2, double a3, int a4)
{
  struct _Mtx_internal_imp_t *v7; // rbx
  int v8; // eax
  __int64 v9; // r15
  _QWORD *v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // r14
  __int64 *v13; // rdx
  __int64 v14; // r15
  int v15; // eax
  __int64 v17[2]; // [rsp+28h] [rbp-89h] BYREF
  __int64 v18; // [rsp+38h] [rbp-79h]
  __int64 v19; // [rsp+40h] [rbp-71h]
  __int64 v20[2]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v21; // [rsp+58h] [rbp-59h]
  __int64 v22; // [rsp+60h] [rbp-51h]
  __int64 v23; // [rsp+68h] [rbp-49h]
  __int64 v24; // [rsp+70h] [rbp-41h]
  __int64 v25[2]; // [rsp+78h] [rbp-39h] BYREF
  __m128i si128; // [rsp+88h] [rbp-29h]
  __int64 v27[4]; // [rsp+98h] [rbp-19h] BYREF

  v23 = -2LL;
  v7 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v24 = a1 + 64;
  v8 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v8 )
    std::_Throw_C_error(v8);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v27, a2);
  sub_180121AFC(a1 + 144, v17, v27);
  v9 = v17[0] + 64;
  v10 = a2;
  if ( a2[3] >= 8uLL )
    v10 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1801247BC(v17[0] + 64, v10) )
  {
    v11 = 2;
    if ( a4 == 2 )
    {
      v11 = 3;
    }
    else
    {
      v21 = 0LL;
      v22 = 0LL;
      sub_18001115C(v20, (__int64)a2);
      v12 = sub_180124658(v9, v20);
      if ( (unsigned __int8)sub_180124844(v12) )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
        LOWORD(v25[0]) = 0;
        sub_180026278((char *)v25, L"Value", 5uLL);
        v13 = v25;
        if ( si128.m128i_i64[1] >= 8uLL )
          v13 = (__int64 *)v25[0];
        if ( (unsigned __int8)sub_1801247BC(v12, v13)
          && (v18 = 0LL,
              v19 = 0LL,
              sub_18001115C(v17, (__int64)v25),
              v14 = sub_180124658(v12, v17),
              (unsigned __int8)sub_180124834(v14)) )
        {
          if ( sub_1801246BC(v14) != a3 )
          {
            v18 = 0LL;
            v19 = 0LL;
            sub_18001115C(v17, (__int64)v25);
            sub_18011F0A0(v12, v17, a3);
            v11 = 1;
          }
        }
        else
        {
          v11 = 5;
        }
        unknown_libname_116(v25);
      }
      else if ( (unsigned __int8)sub_180124834(v12) )
      {
        if ( sub_1801246BC(v12) != a3 )
        {
          v21 = 0LL;
          v22 = 0LL;
          sub_18001115C(v20, (__int64)a2);
          sub_18011F0A0(v9, v20, a3);
          v11 = 1;
        }
      }
      else
      {
        v11 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v21 = 0LL;
    v22 = 0LL;
    sub_18001115C(v20, (__int64)a2);
    sub_18011F0A0(v9, v20, a3);
    v11 = 0;
  }
  else
  {
    v11 = 4;
  }
  unknown_libname_116(v27);
  v15 = Mtx_unlock(v7);
  if ( v15 )
    std::_Throw_C_error(v15);
  if ( v11 <= 1 )
    sub_180122DC0(a1, a2);
  return v11;
}
