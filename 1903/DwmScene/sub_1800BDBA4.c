/*
 * XREFs of sub_1800BDBA4 @ 0x1800BDBA4
 * Callers:
 *     sub_1800CB050 @ 0x1800CB050 (sub_1800CB050.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800BDBA4(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r8
  _QWORD *v6; // rdx
  char v7; // r10
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  unsigned __int16 v12; // r8
  int v13; // eax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  signed __int64 v19; // rcx
  unsigned __int16 v20; // r8
  int v21; // eax
  char v22; // di
  __int64 v24[2]; // [rsp+30h] [rbp-61h] BYREF
  __m128i v25; // [rsp+40h] [rbp-51h]
  __int64 v26[2]; // [rsp+50h] [rbp-41h] BYREF
  __m128i si128; // [rsp+60h] [rbp-31h]
  __int64 v28; // [rsp+70h] [rbp-21h]
  __int64 v29[2]; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-9h]
  unsigned __int64 v31; // [rsp+90h] [rbp-1h]
  __int64 v32[2]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int64 v33; // [rsp+A8h] [rbp+17h]
  unsigned __int64 v34; // [rsp+B0h] [rbp+1Fh]

  v28 = -2LL;
  v33 = 0LL;
  v34 = 7LL;
  LOWORD(v32[0]) = 0;
  sub_180026168((char *)v32, L"Lighting.", 9uLL);
  v30 = 0LL;
  v31 = 7LL;
  LOWORD(v29[0]) = 0;
  sub_180026168((char *)v29, L"/Internal/Lighting.", 0x13uLL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18014AA40);
  LOWORD(v26[0]) = 0;
  v4 = v33;
  v5 = v33;
  if ( a2[2] < v33 )
    v5 = a2[2];
  v6 = a2;
  if ( a2[3] >= 8uLL )
    v6 = (_QWORD *)*a2;
  sub_180026168((char *)v26, v6, v5);
  v7 = 5;
  v8 = v32;
  if ( v34 >= 8 )
    v8 = (__int64 *)v32[0];
  v9 = v26;
  if ( si128.m128i_i64[1] >= 8uLL )
    v9 = (__int64 *)v26[0];
  v10 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] == v4 )
  {
    if ( si128.m128i_i64[0] )
    {
      v11 = (char *)v9 - (char *)v8;
      while ( 1 )
      {
        v12 = *(_WORD *)((char *)v8 + v11);
        if ( v12 != *(_WORD *)v8 )
          break;
        v8 = (__int64 *)((char *)v8 + 2);
        if ( !--v10 )
          goto LABEL_14;
      }
      v13 = v12 < *(_WORD *)v8 ? -1 : 1;
    }
    else
    {
LABEL_14:
      v13 = 0;
    }
    if ( !v13 )
      goto LABEL_31;
  }
  v25 = _mm_load_si128((const __m128i *)&xmmword_18014AA40);
  LOWORD(v24[0]) = 0;
  v14 = v30;
  v15 = v30;
  if ( a2[2] < v30 )
    v15 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_180026168((char *)v24, a2, v15);
  v7 = 15;
  v16 = v29;
  if ( v31 >= 8 )
    v16 = (__int64 *)v29[0];
  v17 = v24;
  if ( v25.m128i_i64[1] >= 8uLL )
    v17 = (__int64 *)v24[0];
  v18 = v25.m128i_i64[0];
  if ( v25.m128i_i64[0] != v14 )
    goto LABEL_34;
  if ( v25.m128i_i64[0] )
  {
    v19 = (char *)v17 - (char *)v16;
    while ( 1 )
    {
      v20 = *(_WORD *)((char *)v16 + v19);
      if ( v20 != *(_WORD *)v16 )
        break;
      v16 = (__int64 *)((char *)v16 + 2);
      if ( !--v18 )
        goto LABEL_29;
    }
    v21 = v20 < *(_WORD *)v16 ? -1 : 1;
  }
  else
  {
LABEL_29:
    v21 = 0;
  }
  if ( v21 )
LABEL_34:
    v22 = 0;
  else
LABEL_31:
    v22 = 1;
  if ( (v7 & 2) != 0 )
    unknown_libname_116(v24);
  unknown_libname_116(v26);
  if ( v22 )
    *(_BYTE *)(*(_QWORD *)a1 + 1464LL) = 1;
  unknown_libname_116(v29);
  return unknown_libname_116(v32);
}
