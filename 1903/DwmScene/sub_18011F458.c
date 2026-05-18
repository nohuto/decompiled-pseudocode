/*
 * XREFs of sub_18011F458 @ 0x18011F458
 * Callers:
 *     sub_180122C30 @ 0x180122C30 (sub_180122C30.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_18011F370 @ 0x18011F370 (sub_18011F370.c)
 *     sub_1801219EC @ 0x1801219EC (sub_1801219EC.c)
 *     sub_180122CB0 @ 0x180122CB0 (sub_180122CB0.c)
 *     sub_180124548 @ 0x180124548 (sub_180124548.c)
 *     sub_180124680 @ 0x180124680 (sub_180124680.c)
 *     sub_1801246AC @ 0x1801246AC (sub_1801246AC.c)
 *     sub_180124734 @ 0x180124734 (sub_180124734.c)
 *     ?is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z @ 0x18012473C (-is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18011F458(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  __int64 v7; // r15
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r13
  _QWORD *v12; // rdx
  char v13; // r14
  __crt_strtox *v14; // r15
  const struct __crt_strtox::big_integer *v15; // rdx
  __int64 *v16; // rdx
  __crt_strtox *v17; // r14
  const struct __crt_strtox::big_integer *v18; // rdx
  char *v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  signed __int64 v22; // rcx
  unsigned __int16 v23; // r8
  int v24; // eax
  char v25; // r14
  char *v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdx
  signed __int64 v29; // rcx
  unsigned __int16 v30; // r8
  int v31; // eax
  int v32; // eax
  __int64 v35; // [rsp+38h] [rbp-99h] BYREF
  __int64 v36; // [rsp+48h] [rbp-89h]
  __int64 v37; // [rsp+50h] [rbp-81h]
  __int64 v38[2]; // [rsp+58h] [rbp-79h] BYREF
  __int64 v39; // [rsp+68h] [rbp-69h]
  unsigned __int64 v40; // [rsp+70h] [rbp-61h]
  __int64 v41[2]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v42; // [rsp+88h] [rbp-49h]
  __int64 v43; // [rsp+90h] [rbp-41h]
  __int64 v44; // [rsp+98h] [rbp-39h]
  __int64 v45; // [rsp+A0h] [rbp-31h]
  __int64 *v46; // [rsp+A8h] [rbp-29h]
  __int64 v47[2]; // [rsp+B0h] [rbp-21h] BYREF
  __m128i si128; // [rsp+C0h] [rbp-11h]
  __int64 v49[4]; // [rsp+D0h] [rbp-1h] BYREF

  v44 = -2LL;
  v7 = a1;
  v46 = a3;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v45 = a1 + 64;
  v9 = Mtx_lock((_Mtx_t)(a1 + 64));
  v10 = 0;
  if ( v9 )
    std::_Throw_C_error(v9);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v7 + 56LL))(v7, v49, a2);
  sub_1801219EC(v7 + 144, v38, v49);
  v11 = v38[0] + 64;
  v12 = a2;
  if ( a2[3] >= 8uLL )
    v12 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1801246AC(v38[0] + 64, v12) )
  {
    v10 = 2;
    if ( a4 == 2 )
    {
      v10 = 3;
    }
    else
    {
      v13 = 0;
      v42 = 0LL;
      v43 = 0LL;
      sub_18001110C(v41, (__int64)a2);
      v14 = (__crt_strtox *)sub_180124548(v11, v41);
      if ( (unsigned __int8)sub_180124734(v14) )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_18014AA40);
        LOWORD(v47[0]) = 0;
        sub_180026168((char *)v47, L"Value", 5uLL);
        v16 = v47;
        if ( si128.m128i_i64[1] >= 8uLL )
          v16 = (__int64 *)v47[0];
        if ( (unsigned __int8)sub_1801246AC(v14, v16)
          && (v36 = 0LL,
              v37 = 0LL,
              sub_18001110C(&v35, (__int64)v47),
              v17 = (__crt_strtox *)sub_180124548(v14, &v35),
              __crt_strtox::is_zero(v17, v18)) )
        {
          sub_180124680(v17, v38);
          v19 = (char *)a3;
          if ( (unsigned __int64)a3[3] >= 8 )
            v19 = (char *)*a3;
          v20 = v38;
          if ( v40 >= 8 )
            v20 = (__int64 *)v38[0];
          v21 = v39;
          if ( v39 != a3[2] )
            goto LABEL_25;
          if ( v39 )
          {
            v22 = (char *)v20 - v19;
            while ( 1 )
            {
              v23 = *(_WORD *)&v19[v22];
              if ( v23 != *(_WORD *)v19 )
                break;
              v19 += 2;
              if ( !--v21 )
                goto LABEL_21;
            }
            v24 = v23 < *(_WORD *)v19 ? -1 : 1;
          }
          else
          {
LABEL_21:
            v24 = 0;
          }
          if ( v24 )
LABEL_25:
            v25 = 1;
          else
            v25 = 0;
          unknown_libname_116(v38);
          if ( v25 )
          {
            v36 = 0LL;
            v37 = 0LL;
            sub_18001110C(&v35, (__int64)a3);
            v39 = 0LL;
            v40 = 0LL;
            sub_18001110C(v38, (__int64)v47);
            sub_18011F370((__int64)v14, v38, &v35);
            v10 = 1;
          }
        }
        else
        {
          v10 = 5;
        }
        unknown_libname_116(v47);
      }
      else if ( __crt_strtox::is_zero(v14, v15) )
      {
        sub_180124680(v14, v47);
        v26 = (char *)a3;
        if ( (unsigned __int64)a3[3] >= 8 )
          v26 = (char *)*a3;
        v27 = v47;
        if ( si128.m128i_i64[1] >= 8uLL )
          v27 = (__int64 *)v47[0];
        v28 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] != a3[2] )
          goto LABEL_43;
        if ( si128.m128i_i64[0] )
        {
          v29 = (char *)v27 - v26;
          while ( 1 )
          {
            v30 = *(_WORD *)&v26[v29];
            if ( v30 != *(_WORD *)v26 )
              break;
            v26 += 2;
            if ( !--v28 )
              goto LABEL_41;
          }
          v31 = v30 < *(_WORD *)v26 ? -1 : 1;
        }
        else
        {
LABEL_41:
          v31 = 0;
        }
        if ( v31 )
LABEL_43:
          v13 = 1;
        unknown_libname_116(v47);
        if ( v13 )
        {
          v38[0] = (__int64)&v35;
          v36 = 0LL;
          v37 = 0LL;
          sub_18001110C(&v35, (__int64)a3);
          v42 = 0LL;
          v43 = 0LL;
          sub_18001110C(v41, (__int64)a2);
          sub_18011F370(v11, v41, &v35);
          v10 = 1;
        }
      }
      else
      {
        v10 = 5;
      }
      v7 = a1;
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v38[0] = (__int64)&v35;
    v36 = 0LL;
    v37 = 0LL;
    sub_18001110C(&v35, (__int64)a3);
    v42 = 0LL;
    v43 = 0LL;
    sub_18001110C(v41, (__int64)a2);
    sub_18011F370(v11, v41, &v35);
  }
  else
  {
    v10 = 4;
  }
  unknown_libname_116(v49);
  v32 = Mtx_unlock(v8);
  if ( v32 )
    std::_Throw_C_error(v32);
  if ( v10 <= 1 )
    sub_180122CB0(v7, a2);
  unknown_libname_116(a3);
  return v10;
}
