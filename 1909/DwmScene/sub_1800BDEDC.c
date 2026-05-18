/*
 * XREFs of sub_1800BDEDC @ 0x1800BDEDC
 * Callers:
 *     sub_1800CB200 @ 0x1800CB200 (sub_1800CB200.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_1800BB750 @ 0x1800BB750 (sub_1800BB750.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800BDEDC(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r8
  void *v6; // rdx
  char v7; // r10
  __int64 *v8; // rax
  __int64 *v9; // rcx
  char v10; // bl
  __int64 v11; // rdx
  signed __int64 v12; // rcx
  unsigned __int16 v13; // r8
  int v14; // eax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  void *v17; // rdx
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  signed __int64 v21; // rcx
  unsigned __int16 v22; // r8
  int v23; // eax
  struct _Mtx_internal_imp_t *v24; // rbx
  int v25; // eax
  int v26; // eax
  __int64 v28[2]; // [rsp+38h] [rbp-59h] BYREF
  __m128i v29; // [rsp+48h] [rbp-49h]
  __int64 v30[2]; // [rsp+58h] [rbp-39h] BYREF
  __m128i si128; // [rsp+68h] [rbp-29h]
  __int64 v32; // [rsp+78h] [rbp-19h]
  __int64 v33[2]; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-1h]
  unsigned __int64 v35; // [rsp+98h] [rbp+7h]
  __int64 v36[2]; // [rsp+A0h] [rbp+Fh] BYREF
  unsigned __int64 v37; // [rsp+B0h] [rbp+1Fh]
  unsigned __int64 v38; // [rsp+B8h] [rbp+27h]

  v32 = -2LL;
  v37 = 0LL;
  v38 = 7LL;
  LOWORD(v36[0]) = 0;
  sub_180026278((char *)v36, L"Camera.", 7uLL);
  v34 = 0LL;
  v35 = 7LL;
  LOWORD(v33[0]) = 0;
  sub_180026278((char *)v33, L"/Internal/Camera.", 0x11uLL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
  LOWORD(v30[0]) = 0;
  v4 = v37;
  v5 = v37;
  if ( a2[2] < v37 )
    v5 = a2[2];
  v6 = a2;
  if ( a2[3] >= 8 )
    v6 = (void *)*a2;
  sub_180026278((char *)v30, v6, v5);
  v7 = 5;
  v8 = v36;
  if ( v38 >= 8 )
    v8 = (__int64 *)v36[0];
  v9 = v30;
  if ( si128.m128i_i64[1] >= 8uLL )
    v9 = (__int64 *)v30[0];
  v10 = 1;
  v11 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] != v4 )
    goto LABEL_16;
  if ( si128.m128i_i64[0] )
  {
    v12 = (char *)v9 - (char *)v8;
    while ( 1 )
    {
      v13 = *(_WORD *)((char *)v8 + v12);
      if ( v13 != *(_WORD *)v8 )
        break;
      v8 = (__int64 *)((char *)v8 + 2);
      if ( !--v11 )
        goto LABEL_14;
    }
    v14 = v13 < *(_WORD *)v8 ? -1 : 1;
  }
  else
  {
LABEL_14:
    v14 = 0;
  }
  if ( v14 )
  {
LABEL_16:
    v29 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
    LOWORD(v28[0]) = 0;
    v15 = v34;
    v16 = v34;
    if ( a2[2] < v34 )
      v16 = a2[2];
    v17 = a2;
    if ( a2[3] >= 8 )
      v17 = (void *)*a2;
    sub_180026278((char *)v28, v17, v16);
    v7 = 15;
    v18 = v33;
    if ( v35 >= 8 )
      v18 = (__int64 *)v33[0];
    v19 = v28;
    if ( v29.m128i_i64[1] >= 8uLL )
      v19 = (__int64 *)v28[0];
    v20 = v29.m128i_i64[0];
    if ( v29.m128i_i64[0] != v15 )
      goto LABEL_31;
    if ( v29.m128i_i64[0] )
    {
      v21 = (char *)v19 - (char *)v18;
      while ( 1 )
      {
        v22 = *(_WORD *)((char *)v18 + v21);
        if ( v22 != *(_WORD *)v18 )
          break;
        v18 = (__int64 *)((char *)v18 + 2);
        if ( !--v20 )
          goto LABEL_29;
      }
      v23 = v22 < *(_WORD *)v18 ? -1 : 1;
    }
    else
    {
LABEL_29:
      v23 = 0;
    }
    if ( v23 )
LABEL_31:
      v10 = 0;
  }
  if ( (v7 & 2) != 0 )
    unknown_libname_116(v28);
  unknown_libname_116(v30);
  if ( v10 )
  {
    v24 = (struct _Mtx_internal_imp_t *)(*(_QWORD *)a1 + 1552LL);
    v25 = Mtx_lock(v24);
    if ( v25 )
      std::_Throw_C_error(v25);
    sub_1800BB750((_QWORD *)(*(_QWORD *)a1 + 1488LL), (__int64)v28, a2);
    v26 = Mtx_unlock(v24);
    if ( v26 )
      std::_Throw_C_error(v26);
  }
  unknown_libname_116(v33);
  return unknown_libname_116(v36);
}
