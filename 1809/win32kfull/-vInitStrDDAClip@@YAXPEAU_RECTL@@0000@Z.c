/*
 * XREFs of ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00F2DC4
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0051258 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     STR_DIV @ 0x1C00F33CC (STR_DIV.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDAClip(
        struct _RECTL *a1,
        struct _RECTL *a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _RECTL *a5)
{
  LONG top; // r12d
  struct _RECTL *v6; // rsi
  LONG v7; // edi
  struct _RECTL *v8; // r15
  LONG left; // r8d
  LONG v11; // ecx
  struct _RECTL *v12; // r13
  int v13; // edx
  int v14; // r9d
  int v15; // r10d
  int v16; // r8d
  LONG v17; // r11d
  LONG v18; // edx
  int v19; // edi
  int v20; // r12d
  int v21; // r15d
  int v22; // esi
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  LONG right; // eax
  LONG v28; // eax
  LONG v29; // eax
  int v30; // r9d
  int v31; // r10d
  int v32; // r8d
  int v33; // ecx
  LONG v34; // r11d
  LONG v35; // edx
  int v36; // r12d
  int v37; // r15d
  int v38; // edi
  LONG v39; // esi
  int v40; // ecx
  int v41; // eax
  int v42; // r8d
  int v43; // eax
  LONG v44; // ecx
  LONG v45; // ecx
  LONG v46; // ecx
  LONG v47; // ecx
  __m128i v48; // xmm0
  int v49; // eax
  __m128i v50; // xmm0
  int v51; // eax
  LONG bottom; // eax
  LONG v53; // eax
  LONG v54; // [rsp+20h] [rbp-61h]
  int v55; // [rsp+20h] [rbp-61h]
  int v56; // [rsp+28h] [rbp-59h] BYREF
  int v57; // [rsp+2Ch] [rbp-55h]
  LONG v58; // [rsp+38h] [rbp-49h]
  LONG v59; // [rsp+3Ch] [rbp-45h]
  struct _RECTL *v60; // [rsp+40h] [rbp-41h]
  struct _RECTL *v61; // [rsp+48h] [rbp-39h]
  _DWORD v62[4]; // [rsp+50h] [rbp-31h] BYREF
  __m128i v63; // [rsp+60h] [rbp-21h] BYREF
  _DWORD v64[3]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v65[12]; // [rsp+7Ch] [rbp-5h] BYREF
  int v66; // [rsp+88h] [rbp+7h]
  int v67; // [rsp+8Ch] [rbp+Bh]

  top = a2->top;
  v6 = a3;
  v7 = 0;
  v60 = a3;
  v8 = a2;
  left = a2->left;
  v11 = v6->top;
  v12 = a4;
  v61 = a2;
  v13 = v6->left;
  v59 = left;
  v58 = top;
  if ( __PAIR64__(top, left) )
  {
    v51 = a1->left - left;
    *(_QWORD *)&v65[4] = 0LL;
    v64[0] = v51;
    v64[1] = a1->top - top;
    v64[2] = a1->right - left;
    bottom = a1->bottom;
    a1 = (struct _RECTL *)v64;
    *(_QWORD *)v65 = (unsigned int)(bottom - top);
    v66 = v8->right - left;
    v53 = v8->bottom;
    v8 = (struct _RECTL *)&v65[4];
    v61 = (struct _RECTL *)&v65[4];
    v67 = v53 - top;
  }
  if ( v13 || v11 )
  {
    v48 = *(__m128i *)v6;
    v6 = (struct _RECTL *)v62;
    v60 = (struct _RECTL *)v62;
    v12 = (struct _RECTL *)&v63;
    v62[0] = v48.m128i_i32[0];
    v62[2] = v48.m128i_i32[2] - v13;
    v62[1] = v48.m128i_i32[1] - v11;
    v62[3] = v48.m128i_i32[3] - v11;
    v49 = _mm_cvtsi128_si32(v48);
    v63 = *(__m128i *)a4;
    v50 = v63;
    v63.m128i_i32[2] -= v13;
    v63.m128i_i32[1] -= v11;
    v62[0] = v49 - v13;
    v63.m128i_i32[3] -= v11;
    v63.m128i_i32[0] = _mm_cvtsi128_si32(v50) - v13;
  }
  ERECTL::operator*=(&v12->left, &v6->left);
  STR_DIV(&v56, (unsigned int)(v6->right - v6->left), (unsigned int)v8->right);
  v15 = v56;
  v16 = v57 + ((v14 - 1) >> 1);
  if ( v16 >= v14 )
  {
    v15 = v56 + 1;
    v16 -= v14;
  }
  v17 = 0;
  a5->left = -1;
  v18 = 0;
  a5->right = -1;
  if ( a1->right > 0 )
  {
    v19 = v56;
    v20 = -1;
    v21 = v57;
    v22 = 0;
    do
    {
      v23 = v16 + v21;
      v54 = v17;
      v24 = v15 - v22;
      v22 = v15;
      v17 += v24;
      v25 = v15 + v19;
      v15 += v19 + 1;
      if ( v16 + v21 < v14 )
        v15 = v25;
      v16 = v23 - v14;
      if ( v23 < v14 )
        v16 = v23;
      v26 = v20;
      if ( v20 == -1 )
      {
        v26 = -1;
        if ( v12->left >= v54 )
        {
          v26 = -1;
          if ( v12->left <= v17 )
          {
            v20 = v18;
            a5->left = v18;
            v26 = v18;
          }
        }
      }
      right = v12->right;
      if ( right <= v17 && right >= v54 )
        a5->right = v18;
      ++v18;
    }
    while ( v18 < a1->right );
    v28 = a5->right;
    v7 = 0;
    v6 = v60;
    v8 = v61;
    top = v58;
    if ( v26 != -1 )
      goto LABEL_17;
    if ( v28 != -1 )
    {
      a5->left = 0;
LABEL_17:
      if ( v28 == -1 )
      {
        a5->right = v18;
        v28 = v18;
      }
      v29 = v28 + 1;
      goto LABEL_20;
    }
  }
  a5->left = 0;
  v29 = 0;
LABEL_20:
  a5->right = v29;
  STR_DIV(&v56, (unsigned int)(v6->bottom - v6->top), (unsigned int)v8->bottom);
  v31 = v56;
  v32 = v57 + ((v30 - 1) >> 1);
  if ( v32 >= v30 )
  {
    v31 = v56 + 1;
    v32 -= v30;
  }
  a5->top = -1;
  v33 = 0;
  a5->bottom = -1;
  v34 = 0;
  v35 = 0;
  if ( a1->bottom <= 0 )
    goto LABEL_52;
  v36 = v56;
  v37 = -1;
  v38 = v57;
  do
  {
    v55 = v31;
    v39 = v34;
    v34 += v31 - v33;
    v41 = v31 + v36;
    v31 += v36 + 1;
    v42 = v32 + v38;
    v40 = v42;
    if ( v42 < v30 )
      v31 = v41;
    v32 = v42 - v30;
    v43 = v37;
    if ( v40 < v30 )
      v32 = v40;
    if ( v37 == -1 )
    {
      v47 = v12->top;
      v43 = -1;
      if ( v47 >= v39 )
      {
        v43 = -1;
        if ( v47 <= v34 )
        {
          v37 = v35;
          a5->top = v35;
          v43 = v35;
        }
      }
    }
    v44 = v12->bottom;
    if ( v44 <= v34 && v44 >= v39 )
      a5->bottom = v35;
    v33 = v55;
    ++v35;
  }
  while ( v35 < a1->bottom );
  v45 = a5->bottom;
  v7 = 0;
  top = v58;
  if ( v43 != -1 )
    goto LABEL_32;
  if ( v45 == -1 )
  {
LABEL_52:
    a5->top = 0;
    v43 = 0;
    goto LABEL_35;
  }
  a5->top = 0;
  v43 = 0;
LABEL_32:
  if ( v45 == -1 )
  {
    a5->bottom = v35;
    v45 = v35;
  }
  v7 = v45 + 1;
LABEL_35:
  v46 = v59;
  a5->bottom = v7;
  a5->left += v46;
  a5->right += v46;
  a5->top = top + v43;
  a5->bottom = top + v7;
}
