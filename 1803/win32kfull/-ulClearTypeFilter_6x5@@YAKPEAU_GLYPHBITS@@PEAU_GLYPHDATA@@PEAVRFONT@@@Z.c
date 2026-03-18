/*
 * XREFs of ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C007F6D4
 * Callers:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080754 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 * Callees:
 *     ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C007F320 (-ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 *     ?interpolatePixel_6x5@@YAEEEEEE@Z @ 0x1C007FC6C (-interpolatePixel_6x5@@YAEEEEEE@Z.c)
 */

__int64 __fastcall ulClearTypeFilter_6x5(struct _GLYPHBITS *a1, struct _GLYPHDATA *a2, struct RFONT *a3)
{
  LONG v4; // r14d
  LONG cy; // edi
  __int64 cx; // rbx
  LONG v7; // r8d
  BYTE *aj; // r15
  __int64 v9; // rdx
  __int64 v10; // r13
  unsigned __int8 *v11; // r12
  __int64 j; // rdx
  unsigned __int8 *v13; // rbx
  char *v14; // r14
  int *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // r11
  __int64 v24; // rax
  bool v25; // zf
  unsigned __int8 *v26; // rdi
  unsigned __int8 *v27; // rsi
  unsigned __int8 *v28; // rcx
  unsigned __int8 v30; // r9
  __int64 v31; // rax
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // r8
  unsigned __int8 v34; // dl
  char *v35; // rdi
  __int64 v36; // rsi
  __m128i v37; // xmm6
  __int64 v38; // rdi
  char *v39; // xmm0_8
  unsigned __int8 *v40; // rax
  signed __int64 v41; // r12
  unsigned __int8 v42; // r8
  unsigned __int8 v43; // dl
  char *v44; // rdi
  unsigned __int8 *v45; // rsi
  unsigned __int8 *v46; // r12
  unsigned __int8 v47; // r9
  unsigned __int8 v48; // r8
  __m128i v49; // xmm6
  unsigned __int8 v50; // dl
  unsigned __int8 v51; // cl
  __int64 v52; // rdi
  char v53; // cl
  unsigned __int8 v54; // r9
  unsigned __int8 v55; // r8
  unsigned __int8 v56; // dl
  __int64 i; // rax
  unsigned __int8 v58; // cl
  char v59; // [rsp+28h] [rbp-49h]
  LONG v60; // [rsp+38h] [rbp-39h]
  __int64 v61; // [rsp+40h] [rbp-31h]
  unsigned __int8 *v62; // [rsp+48h] [rbp-29h]
  __int64 v63; // [rsp+50h] [rbp-21h]
  __m128i v64; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int8 *v65; // [rsp+68h] [rbp-9h]
  char *v66; // [rsp+70h] [rbp-1h]
  unsigned __int8 *v67; // [rsp+78h] [rbp+7h]
  LONG v68; // [rsp+D8h] [rbp+67h]
  LONG v69; // [rsp+E0h] [rbp+6Fh]
  __int64 v70; // [rsp+E0h] [rbp+6Fh]

  v4 = a2->rclInk.bottom - a2->rclInk.top;
  cy = a1->sizlBitmap.cy;
  v68 = v4;
  v60 = cy;
  if ( a1->sizlBitmap.cx == 1 && v4 == 1 && !a1->aj[0] )
  {
    a1->sizlBitmap = 0LL;
    return 16LL;
  }
  a1->sizlBitmap.cy = 5 * v4;
  ulClearTypeFilter_6x1(a1, a2, a3);
  cx = (unsigned int)a1->sizlBitmap.cx;
  v7 = v4;
  a1->sizlBitmap.cy = v4;
  aj = a1->aj;
  v69 = v4;
  if ( !v4 )
    return 16LL;
  v64.m128i_i64[0] = (__int64)aj;
  v9 = 0LL;
  v10 = (unsigned int)cx;
  v63 = cx;
  do
  {
    v64.m128i_i64[v9 + 1] = cx + v64.m128i_i64[v9];
    ++v9;
  }
  while ( v9 < 4 );
  switch ( cy )
  {
    case 1:
      v68 = ++v4;
      if ( (_DWORD)cx )
      {
        v35 = (char *)v64.m128i_i64[0];
        v36 = cx;
        do
        {
          *aj++ = interpolatePixel_6x5(0, 0, 0, 0, *v35++);
          --v36;
        }
        while ( v36 );
        v7 = v69;
      }
      v11 = (unsigned __int8 *)v64.m128i_i64[1];
      break;
    case 2:
      v68 = ++v4;
      if ( (_DWORD)cx )
      {
        v37 = _mm_loadu_si128(&v64);
        v38 = cx;
        do
        {
          v39 = (char *)_mm_srli_si128(v37, 8).m128i_u64[0];
          v40 = (unsigned __int8 *)v37.m128i_i64[0];
          v37 = _mm_add_epi64(v37, (__m128i)_xmm);
          *aj++ = interpolatePixel_6x5(0, 0, 0, *v40, *v39);
          --v38;
        }
        while ( v38 );
        v7 = v69;
        v64 = v37;
      }
      v11 = v65;
      break;
    case 3:
      v68 = ++v4;
      if ( (_DWORD)cx )
      {
        v44 = (char *)v65;
        v45 = (unsigned __int8 *)v64.m128i_i64[1];
        v46 = (unsigned __int8 *)v64.m128i_i64[0];
        do
        {
          v47 = *v45;
          v48 = *v46;
          ++v45;
          v59 = *v44;
          ++v46;
          ++v44;
          *aj++ = interpolatePixel_6x5(0, 0, v48, v47, v59);
          --cx;
        }
        while ( cx );
        v7 = v69;
        LODWORD(cx) = v10;
        v65 = (unsigned __int8 *)v44;
        v64.m128i_i64[1] = (__int64)v45;
      }
      v11 = (unsigned __int8 *)v66;
      break;
    case 4:
      v68 = ++v4;
      if ( (_DWORD)cx )
      {
        v52 = cx;
        do
        {
          v53 = *v66;
          v54 = *v65;
          v55 = *(_BYTE *)v64.m128i_i64[1];
          v56 = *(_BYTE *)v64.m128i_i64[0];
          for ( i = 0LL; i < 4; i += 2LL )
            *(__m128i *)((char *)&v64 + 8 * i) = _mm_add_epi64(
                                                   _mm_loadu_si128((__m128i *)((char *)&v64 + 8 * i)),
                                                   (__m128i)_xmm);
          *aj++ = interpolatePixel_6x5(0, v56, v55, v54, v53);
          --v52;
        }
        while ( v52 );
        v7 = v69;
      }
      v11 = v67;
      break;
    default:
      v11 = (unsigned __int8 *)v64.m128i_i64[0];
      if ( cy == 5 )
        v7 = v4 + 1;
      goto LABEL_11;
  }
  v64.m128i_i64[0] = (__int64)v11;
LABEL_11:
  if ( v7 != 1 )
  {
    v61 = (unsigned int)(v7 - 1);
    do
    {
      for ( j = 0LL; j < 4; ++j )
        v64.m128i_i64[j + 1] = v10 + v64.m128i_i64[j];
      v11 = v67;
      if ( (_DWORD)cx )
      {
        v13 = (unsigned __int8 *)v64.m128i_i64[0];
        v14 = v66;
        v70 = v10;
        v15 = off_1C031C100;
        do
        {
          v16 = *v13;
          v17 = (unsigned __int8)*v14++;
          v18 = *v11++;
          v19 = BYTE1(v15[v17]);
          v20 = BYTE1(v15[v18]);
          v21 = *(unsigned __int8 *)v64.m128i_i64[1];
          v62 = v13 + 1;
          v22 = *v65++;
          ++v64.m128i_i64[1];
          v23 = (unsigned int)v17;
          LODWORD(v17) = 7
                       * (7
                        * *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                          + 4
                          * (unsigned int)(*((_DWORD *)&g_xTimes04 + LOBYTE(v15[(unsigned int)v18]))
                                         + *((_DWORD *)&g_xTimes09 + LOBYTE(v15[v21]))
                                         + *((_DWORD *)&g_xTimes09 + LOBYTE(v15[(unsigned int)v17]))
                                         + *((_DWORD *)&g_xTimes04 + LOBYTE(v15[v16]))
                                         + *((_DWORD *)&g_xTimes10 + LOBYTE(v15[v22]))))
                        + *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                          + 4
                          * (unsigned int)(*((_DWORD *)&g_xTimes04 + BYTE1(v15[v16]))
                                         + *((_DWORD *)&g_xTimes09 + BYTE1(v15[v21]))
                                         + *((_DWORD *)&g_xTimes10 + BYTE1(v15[v22]))
                                         + *((_DWORD *)&g_xTimes09 + v19)
                                         + *((_DWORD *)&g_xTimes04 + v20))));
          v24 = BYTE2(v15[v22]);
          v13 = v62;
          *aj++ = gajStorage1[*((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                              + 4
                              * (unsigned int)(*((_DWORD *)&g_xTimes04 + BYTE2(v15[v16]))
                                             + *((_DWORD *)&g_xTimes09 + BYTE2(v15[v21]))
                                             + *((_DWORD *)&g_xTimes10 + v24)
                                             + *((_DWORD *)&g_xTimes09 + BYTE2(v15[v23]))
                                             + *((_DWORD *)&g_xTimes04 + BYTE2(v15[(unsigned int)v18]))))
                            + (unsigned int)v17];
          --v70;
        }
        while ( v70 );
        v10 = v63;
        LODWORD(cx) = v63;
        v67 = v11;
        v66 = v14;
      }
      v25 = v61-- == 1;
      v64.m128i_i64[0] = (__int64)v11;
    }
    while ( !v25 );
    v4 = v68;
  }
  v26 = &v11[v10];
  v27 = &v11[v10 + v10];
  v64.m128i_i64[1] = (__int64)&v11[v10];
  v28 = &v27[v10];
  v66 = (char *)&v27[v10];
  v65 = v27;
  switch ( v60 )
  {
    case 4:
      if ( (_DWORD)cx )
      {
        do
        {
          v58 = *v11++;
          *aj++ = interpolatePixel_6x5(v58, 0, 0, 0, 0);
          --v10;
        }
        while ( v10 );
      }
      break;
    case 3:
      if ( (_DWORD)cx )
      {
        v49 = _mm_loadu_si128(&v64);
        while ( 1 )
        {
          v49 = _mm_add_epi64(v49, (__m128i)_xmm);
          v50 = *v26;
          v51 = *v11;
          v64 = v49;
          *aj++ = interpolatePixel_6x5(v51, v50, 0, 0, 0);
          if ( !--v10 )
            break;
          v26 = (unsigned __int8 *)v64.m128i_i64[1];
          v11 = (unsigned __int8 *)v64.m128i_i64[0];
        }
      }
      break;
    case 2:
      if ( (_DWORD)cx )
      {
        v41 = v11 - aj;
        do
        {
          v42 = *v27;
          v43 = *v26;
          ++v27;
          ++v26;
          *aj = interpolatePixel_6x5(aj[v41], v43, v42, 0, 0);
          ++aj;
          --v10;
        }
        while ( v10 );
      }
      break;
    default:
      if ( v60 == 1 && (_DWORD)cx )
      {
        while ( 1 )
        {
          v30 = *v28;
          v31 = 0LL;
          v32 = *v11;
          v33 = *v27;
          v34 = *v26;
          do
          {
            *(__m128i *)((char *)&v64 + 8 * v31) = _mm_add_epi64(
                                                     _mm_loadu_si128((__m128i *)((char *)&v64 + 8 * v31)),
                                                     (__m128i)_xmm);
            v31 += 2LL;
          }
          while ( v31 < 4 );
          *aj++ = interpolatePixel_6x5(v32, v34, v33, v30, 0);
          if ( !--v10 )
            break;
          v28 = (unsigned __int8 *)v66;
          v27 = v65;
          v26 = (unsigned __int8 *)v64.m128i_i64[1];
          v11 = (unsigned __int8 *)v64.m128i_i64[0];
        }
      }
      break;
  }
  return (((_DWORD)cx * v4 + 3) & 0xFFFFFFFC) + 16;
}
