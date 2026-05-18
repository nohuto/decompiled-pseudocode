/*
 * XREFs of sub_18011EE0C @ 0x18011EE0C
 * Callers:
 *     sub_180122D30 @ 0x180122D30 (sub_180122D30.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_18011ED4C @ 0x18011ED4C (sub_18011ED4C.c)
 *     sub_180121AFC @ 0x180121AFC (sub_180121AFC.c)
 *     sub_180122DC0 @ 0x180122DC0 (sub_180122DC0.c)
 *     sub_180124658 @ 0x180124658 (sub_180124658.c)
 *     sub_1801246C4 @ 0x1801246C4 (sub_1801246C4.c)
 *     sub_1801247BC @ 0x1801247BC (sub_1801247BC.c)
 *     ?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x18012483C (-IsContext@WorkItem@details@Concurrency@@QEBA_NXZ.c)
 *     sub_180124844 @ 0x180124844 (sub_180124844.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011EE0C(__int64 a1, _QWORD *a2, int a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r12
  _QWORD *v12; // rdx
  Concurrency::details::WorkItem *v13; // r14
  __int64 *v14; // rdx
  Concurrency::details::WorkItem *v15; // r12
  int v16; // eax
  __int64 v18[2]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v19; // [rsp+38h] [rbp-69h]
  __int64 v20; // [rsp+40h] [rbp-61h]
  __int64 v21[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v22; // [rsp+58h] [rbp-49h]
  __int64 v23; // [rsp+60h] [rbp-41h]
  __int64 v24; // [rsp+68h] [rbp-39h]
  __int64 v25; // [rsp+70h] [rbp-31h]
  __int64 v26[2]; // [rsp+78h] [rbp-29h] BYREF
  __m128i si128; // [rsp+88h] [rbp-19h]
  __int64 v28[4]; // [rsp+98h] [rbp-9h] BYREF

  v24 = -2LL;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v25 = a1 + 64;
  v9 = Mtx_lock((_Mtx_t)(a1 + 64));
  v10 = 0;
  if ( v9 )
    std::_Throw_C_error(v9);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v28, a2);
  sub_180121AFC(a1 + 144, v18, v28);
  v11 = v18[0] + 64;
  v12 = a2;
  if ( a2[3] >= 8uLL )
    v12 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1801247BC(v18[0] + 64, v12) )
  {
    v10 = 2;
    if ( a4 == 2 )
    {
      v10 = 3;
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
      sub_18001115C(v21, (__int64)a2);
      v13 = (Concurrency::details::WorkItem *)sub_180124658(v11, v21);
      if ( (unsigned __int8)sub_180124844(v13) )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
        LOWORD(v26[0]) = 0;
        sub_180026278((char *)v26, L"Value", 5uLL);
        v14 = v26;
        if ( si128.m128i_i64[1] >= 8uLL )
          v14 = (__int64 *)v26[0];
        if ( (unsigned __int8)sub_1801247BC(v13, v14)
          && (v19 = 0LL,
              v20 = 0LL,
              sub_18001115C(v18, (__int64)v26),
              v15 = (Concurrency::details::WorkItem *)sub_180124658(v13, v18),
              Concurrency::details::WorkItem::IsContext(v15)) )
        {
          if ( (unsigned int)sub_1801246C4(v15) != a3 )
          {
            v19 = 0LL;
            v20 = 0LL;
            sub_18001115C(v18, (__int64)v26);
            sub_18011ED4C((__int64)v13, v18, a3);
            v10 = 1;
          }
        }
        else
        {
          v10 = 5;
        }
        unknown_libname_116(v26);
      }
      else if ( Concurrency::details::WorkItem::IsContext(v13) )
      {
        if ( (unsigned int)sub_1801246C4(v13) != a3 )
        {
          v22 = 0LL;
          v23 = 0LL;
          sub_18001115C(v21, (__int64)a2);
          sub_18011ED4C(v11, v21, a3);
          v10 = 1;
        }
      }
      else
      {
        v10 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v22 = 0LL;
    v23 = 0LL;
    sub_18001115C(v21, (__int64)a2);
    sub_18011ED4C(v11, v21, a3);
  }
  else
  {
    v10 = 4;
  }
  unknown_libname_116(v28);
  v16 = Mtx_unlock(v8);
  if ( v16 )
    std::_Throw_C_error(v16);
  if ( v10 <= 1 )
    sub_180122DC0(a1, a2);
  return v10;
}
