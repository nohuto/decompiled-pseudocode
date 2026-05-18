/*
 * XREFs of sub_1800BD818 @ 0x1800BD818
 * Callers:
 *     sub_1800CB150 @ 0x1800CB150 (sub_1800CB150.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BD818(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r8
  void *v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rcx
  signed __int64 v10; // rdx
  unsigned __int16 v11; // r8
  int v12; // eax
  char v13; // si
  __int64 *v14; // rax
  _BYTE *v15; // rdx
  unsigned __int64 v16; // rcx
  signed __int64 v17; // rdx
  unsigned __int16 v18; // r8
  int v19; // eax
  __int64 *v20; // rcx
  _BYTE *v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  signed __int64 v24; // rdx
  unsigned __int16 v25; // r8
  int v26; // ecx
  __int64 *v27; // rcx
  _BYTE *v28; // rdx
  unsigned __int64 v29; // r10
  signed __int64 v30; // rdx
  unsigned __int16 v31; // r8
  int v32; // ecx
  __int64 *v33; // rcx
  _BYTE *v34; // rdx
  signed __int64 v35; // rdx
  unsigned __int16 v36; // r8
  int v37; // eax
  __int64 *v38; // rcx
  _BYTE *v39; // rdx
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  signed __int64 v43; // rdx
  unsigned __int16 v44; // r8
  int v45; // ecx
  __int64 *v46; // rcx
  _BYTE *v47; // rdx
  unsigned __int64 v48; // r10
  signed __int64 v49; // rdx
  unsigned __int16 v50; // r8
  int v51; // ecx
  __int64 *v52; // rcx
  _BYTE *v53; // rdx
  unsigned __int64 v54; // r10
  signed __int64 v55; // rdx
  unsigned __int16 v56; // r8
  int v57; // ecx
  __int64 *v58; // rcx
  signed __int64 v59; // rbx
  unsigned __int16 v60; // dx
  int v61; // eax
  __int64 v63[2]; // [rsp+20h] [rbp-50h] BYREF
  __m128i si128; // [rsp+30h] [rbp-40h]
  __int64 v65; // [rsp+40h] [rbp-30h]
  __int64 v66[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v67; // [rsp+58h] [rbp-18h]
  unsigned __int64 v68; // [rsp+60h] [rbp-10h]

  v65 = -2LL;
  v67 = 0LL;
  v68 = 7LL;
  LOWORD(v66[0]) = 0;
  sub_180026278((char *)v66, L"Model.", 6uLL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18014BA40);
  LOWORD(v63[0]) = 0;
  v4 = v67;
  v5 = v67;
  if ( a2[2] < v67 )
    v5 = a2[2];
  v6 = a2;
  if ( a2[3] >= 8 )
    v6 = (void *)*a2;
  sub_180026278((char *)v63, v6, v5);
  v7 = v66;
  if ( v68 >= 8 )
    v7 = (__int64 *)v66[0];
  v8 = v63;
  if ( si128.m128i_i64[1] >= 8uLL )
    v8 = (__int64 *)v63[0];
  v9 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] != v4 )
    goto LABEL_16;
  if ( si128.m128i_i64[0] )
  {
    v10 = (char *)v8 - (char *)v7;
    while ( 1 )
    {
      v11 = *(_WORD *)((char *)v7 + v10);
      if ( v11 != *(_WORD *)v7 )
        break;
      v7 = (__int64 *)((char *)v7 + 2);
      if ( !--v9 )
        goto LABEL_14;
    }
    v12 = v11 < *(_WORD *)v7 ? -1 : 1;
  }
  else
  {
LABEL_14:
    v12 = 0;
  }
  v13 = 1;
  if ( v12 )
LABEL_16:
    v13 = 0;
  unknown_libname_116(v63);
  if ( v13 )
    *(_BYTE *)(*(_QWORD *)a1 + 1465LL) = 1;
  v14 = &qword_18025A158;
  if ( (unsigned __int64)qword_18025A170 >= 8 )
    v14 = (__int64 *)qword_18025A158;
  v15 = a2;
  if ( a2[3] >= 8 )
    v15 = (_BYTE *)*a2;
  v16 = a2[2];
  if ( v16 == qword_18025A168 )
  {
    if ( v16 )
    {
      v17 = v15 - (_BYTE *)v14;
      while ( 1 )
      {
        v18 = *(_WORD *)((char *)v14 + v17);
        if ( v18 != *(_WORD *)v14 )
          break;
        v14 = (__int64 *)((char *)v14 + 2);
        if ( !--v16 )
          goto LABEL_28;
      }
      v19 = v18 < *(_WORD *)v14 ? -1 : 1;
    }
    else
    {
LABEL_28:
      v19 = 0;
    }
    if ( !v19 )
      *(_BYTE *)(*(_QWORD *)a1 + 1466LL) = 1;
  }
  v20 = &qword_18025A1B8;
  if ( (unsigned __int64)qword_18025A1D0 >= 8 )
    v20 = (__int64 *)qword_18025A1B8;
  v21 = a2;
  if ( a2[3] >= 8 )
    v21 = (_BYTE *)*a2;
  v22 = a2[2];
  if ( v22 == qword_18025A1C8 )
  {
    v23 = a2[2];
    if ( v22 )
    {
      v24 = v21 - (_BYTE *)v20;
      while ( 1 )
      {
        v25 = *(_WORD *)((char *)v20 + v24);
        if ( v25 != *(_WORD *)v20 )
          break;
        v20 = (__int64 *)((char *)v20 + 2);
        if ( !--v23 )
          goto LABEL_40;
      }
      v26 = v25 < *(_WORD *)v20 ? -1 : 1;
    }
    else
    {
LABEL_40:
      v26 = 0;
    }
    if ( !v26 )
      goto LABEL_64;
  }
  v27 = &qword_18025A1D8;
  if ( (unsigned __int64)qword_18025A1F0 >= 8 )
    v27 = (__int64 *)qword_18025A1D8;
  v28 = a2;
  if ( a2[3] >= 8 )
    v28 = (_BYTE *)*a2;
  if ( v22 == qword_18025A1E8 )
  {
    v29 = a2[2];
    if ( v22 )
    {
      v30 = v28 - (_BYTE *)v27;
      while ( 1 )
      {
        v31 = *(_WORD *)((char *)v27 + v30);
        if ( v31 != *(_WORD *)v27 )
          break;
        v27 = (__int64 *)((char *)v27 + 2);
        if ( !--v29 )
          goto LABEL_51;
      }
      v32 = v31 < *(_WORD *)v27 ? -1 : 1;
    }
    else
    {
LABEL_51:
      v32 = 0;
    }
    if ( !v32 )
      goto LABEL_64;
  }
  v33 = &qword_18025A1F8;
  if ( (unsigned __int64)qword_18025A210 >= 8 )
    v33 = (__int64 *)qword_18025A1F8;
  v34 = a2;
  if ( a2[3] >= 8 )
    v34 = (_BYTE *)*a2;
  if ( v22 == qword_18025A208 )
  {
    if ( v22 )
    {
      v35 = v34 - (_BYTE *)v33;
      while ( 1 )
      {
        v36 = *(_WORD *)((char *)v33 + v35);
        if ( v36 != *(_WORD *)v33 )
          break;
        v33 = (__int64 *)((char *)v33 + 2);
        if ( !--v22 )
          goto LABEL_62;
      }
      v37 = v36 < *(_WORD *)v33 ? -1 : 1;
    }
    else
    {
LABEL_62:
      v37 = 0;
    }
    if ( !v37 )
LABEL_64:
      *(_BYTE *)(*(_QWORD *)a1 + 1467LL) = 1;
  }
  v38 = &qword_18025A278;
  if ( (unsigned __int64)qword_18025A290 >= 8 )
    v38 = (__int64 *)qword_18025A278;
  v39 = a2;
  v40 = a2[3];
  if ( v40 >= 8 )
    v39 = (_BYTE *)*a2;
  v41 = a2[2];
  if ( v41 == qword_18025A288 )
  {
    v42 = a2[2];
    if ( v41 )
    {
      v43 = v39 - (_BYTE *)v38;
      while ( 1 )
      {
        v44 = *(_WORD *)((char *)v38 + v43);
        if ( v44 != *(_WORD *)v38 )
          break;
        v38 = (__int64 *)((char *)v38 + 2);
        if ( !--v42 )
          goto LABEL_74;
      }
      v45 = v44 < *(_WORD *)v38 ? -1 : 1;
    }
    else
    {
LABEL_74:
      v45 = 0;
    }
    if ( !v45 )
      goto LABEL_109;
  }
  v46 = &qword_18025A218;
  if ( (unsigned __int64)qword_18025A230 >= 8 )
    v46 = (__int64 *)qword_18025A218;
  v47 = a2;
  if ( v40 >= 8 )
    v47 = (_BYTE *)*a2;
  if ( v41 == qword_18025A228 )
  {
    v48 = a2[2];
    if ( v41 )
    {
      v49 = v47 - (_BYTE *)v46;
      while ( 1 )
      {
        v50 = *(_WORD *)((char *)v46 + v49);
        if ( v50 != *(_WORD *)v46 )
          break;
        v46 = (__int64 *)((char *)v46 + 2);
        if ( !--v48 )
          goto LABEL_85;
      }
      v51 = v50 < *(_WORD *)v46 ? -1 : 1;
    }
    else
    {
LABEL_85:
      v51 = 0;
    }
    if ( !v51 )
      goto LABEL_109;
  }
  v52 = &qword_18025A238;
  if ( (unsigned __int64)qword_18025A250 >= 8 )
    v52 = (__int64 *)qword_18025A238;
  v53 = a2;
  if ( v40 >= 8 )
    v53 = (_BYTE *)*a2;
  if ( v41 == qword_18025A248 )
  {
    v54 = a2[2];
    if ( v41 )
    {
      v55 = v53 - (_BYTE *)v52;
      while ( 1 )
      {
        v56 = *(_WORD *)((char *)v52 + v55);
        if ( v56 != *(_WORD *)v52 )
          break;
        v52 = (__int64 *)((char *)v52 + 2);
        if ( !--v54 )
          goto LABEL_96;
      }
      v57 = v56 < *(_WORD *)v52 ? -1 : 1;
    }
    else
    {
LABEL_96:
      v57 = 0;
    }
    if ( !v57 )
      goto LABEL_109;
  }
  v58 = &qword_18025A258;
  if ( (unsigned __int64)qword_18025A270 >= 8 )
    v58 = (__int64 *)qword_18025A258;
  if ( v40 >= 8 )
    a2 = (unsigned __int64 *)*a2;
  if ( v41 == qword_18025A268 )
  {
    if ( v41 )
    {
      v59 = (char *)a2 - (char *)v58;
      while ( 1 )
      {
        v60 = *(_WORD *)((char *)v58 + v59);
        if ( v60 != *(_WORD *)v58 )
          break;
        v58 = (__int64 *)((char *)v58 + 2);
        if ( !--v41 )
          goto LABEL_107;
      }
      v61 = v60 < *(_WORD *)v58 ? -1 : 1;
    }
    else
    {
LABEL_107:
      v61 = 0;
    }
    if ( !v61 )
LABEL_109:
      *(_BYTE *)(*(_QWORD *)a1 + 1468LL) = 1;
  }
  return unknown_libname_116(v66);
}
