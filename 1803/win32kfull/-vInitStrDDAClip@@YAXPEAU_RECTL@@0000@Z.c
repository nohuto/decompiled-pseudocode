/*
 * XREFs of ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00D9B80
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00A3068 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     STR_DIV @ 0x1C00DA15C (STR_DIV.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  int v7; // ebx
  struct _RECTL *v8; // r15
  LONG left; // r8d
  int v11; // ecx
  struct _RECTL *v12; // r13
  LONG v13; // edx
  int v14; // r10d
  int v15; // r11d
  int v16; // ecx
  LONG v17; // edx
  int v18; // r8d
  int v19; // ecx
  int v20; // esi
  int v21; // r15d
  LONG v22; // r12d
  int v23; // ecx
  int v24; // eax
  int v25; // r8d
  int v26; // r9d
  LONG v27; // ecx
  LONG right; // eax
  LONG v29; // eax
  LONG v30; // r10d
  LONG v31; // r9d
  LONG v32; // r10d
  int v33; // r11d
  int v34; // esi
  int v35; // ecx
  LONG v36; // r15d
  int v37; // r8d
  LONG v38; // edx
  int v39; // ecx
  int v40; // r12d
  int v41; // r10d
  int v42; // ebx
  LONG v43; // r9d
  int v44; // ecx
  int v45; // eax
  int v46; // r8d
  int v47; // ecx
  LONG v48; // eax
  LONG v49; // eax
  LONG v50; // edx
  LONG v51; // eax
  __m128i v52; // xmm0
  int v53; // eax
  __m128i v54; // xmm0
  int v55; // eax
  LONG bottom; // eax
  LONG v57; // eax
  int v58; // [rsp+20h] [rbp-61h]
  int v59; // [rsp+20h] [rbp-61h]
  int v60; // [rsp+28h] [rbp-59h] BYREF
  int v61; // [rsp+2Ch] [rbp-55h]
  LONG v62; // [rsp+38h] [rbp-49h]
  LONG v63; // [rsp+3Ch] [rbp-45h]
  LONG v64; // [rsp+40h] [rbp-41h]
  struct _RECTL *v65; // [rsp+48h] [rbp-39h]
  struct _RECTL *v66; // [rsp+50h] [rbp-31h]
  _DWORD v67[4]; // [rsp+58h] [rbp-29h] BYREF
  __m128i v68; // [rsp+68h] [rbp-19h] BYREF
  _DWORD v69[3]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v70[12]; // [rsp+84h] [rbp+3h] BYREF
  int v71; // [rsp+90h] [rbp+Fh]
  int v72; // [rsp+94h] [rbp+13h]

  top = a2->top;
  v6 = a3;
  v7 = 0;
  v65 = a3;
  v8 = a2;
  left = a2->left;
  v11 = v6->left;
  v12 = a4;
  v66 = a2;
  v13 = v6->top;
  v64 = left;
  v63 = top;
  if ( __PAIR64__(top, left) )
  {
    v55 = a1->left - left;
    *(_QWORD *)&v70[4] = 0LL;
    v69[0] = v55;
    v69[1] = a1->top - top;
    v69[2] = a1->right - left;
    bottom = a1->bottom;
    a1 = (struct _RECTL *)v69;
    *(_QWORD *)v70 = (unsigned int)(bottom - top);
    v71 = v8->right - left;
    v57 = v8->bottom;
    v8 = (struct _RECTL *)&v70[4];
    v66 = (struct _RECTL *)&v70[4];
    v72 = v57 - top;
  }
  if ( v11 || v13 )
  {
    v52 = *(__m128i *)v6;
    v6 = (struct _RECTL *)v67;
    v65 = (struct _RECTL *)v67;
    v12 = (struct _RECTL *)&v68;
    v67[0] = v52.m128i_i32[0];
    v67[2] = v52.m128i_i32[2] - v11;
    v67[1] = v52.m128i_i32[1] - v13;
    v67[3] = v52.m128i_i32[3] - v13;
    v53 = _mm_cvtsi128_si32(v52);
    v68 = *(__m128i *)a4;
    v54 = v68;
    v68.m128i_i32[2] -= v11;
    v68.m128i_i32[1] -= v13;
    v67[0] = v53 - v11;
    v68.m128i_i32[3] -= v13;
    v68.m128i_i32[0] = _mm_cvtsi128_si32(v54) - v11;
  }
  ERECTL::operator*=(&v12->left, &v6->left);
  STR_DIV(&v60, (unsigned int)(v6->right - v6->left), (unsigned int)v8->right);
  v15 = v60;
  v16 = ((v14 - 1) >> 1) + v61;
  if ( v16 >= v14 )
    v15 = v60 + 1;
  v17 = 0;
  v18 = v16 - v14;
  if ( v16 < v14 )
    v18 = ((v14 - 1) >> 1) + v61;
  a5->left = -1;
  v19 = 0;
  a5->right = -1;
  if ( a1->right > 0 )
  {
    v20 = v60;
    v21 = -1;
    v22 = 0;
    do
    {
      v62 = v22;
      v58 = v15;
      v22 += v15 - v19;
      v24 = v15 + v20;
      v15 += v20 + 1;
      v25 = v18 + v61;
      v23 = v25;
      v26 = v21;
      if ( v25 < v14 )
        v15 = v24;
      v18 = v25 - v14;
      if ( v23 < v14 )
        v18 = v23;
      v27 = v62;
      if ( v21 == -1 )
      {
        v26 = -1;
        if ( v12->left >= v62 )
        {
          v26 = -1;
          if ( v12->left <= v22 )
          {
            v21 = v17;
            a5->left = v17;
            v26 = v17;
          }
        }
      }
      right = v12->right;
      if ( right <= v22 && right >= v27 )
        a5->right = v17;
      v19 = v58;
      ++v17;
    }
    while ( v17 < a1->right );
    v29 = a5->right;
    v6 = v65;
    v8 = v66;
    top = v63;
    if ( v26 != -1 )
      goto LABEL_19;
    if ( v29 != -1 )
    {
      a5->left = 0;
LABEL_19:
      if ( v29 == -1 )
      {
        a5->right = v17;
        v29 = v17;
      }
      v30 = v29 + 1;
      goto LABEL_22;
    }
  }
  a5->left = 0;
  v30 = 0;
LABEL_22:
  a5->right = v30;
  STR_DIV(&v60, (unsigned int)(v6->bottom - v6->top), (unsigned int)v8->bottom);
  v34 = v60;
  v35 = ((v33 - 1) >> 1) + v61;
  if ( v35 >= v33 )
    v34 = v60 + 1;
  v36 = 0;
  v37 = v35 - v33;
  v38 = 0;
  if ( v35 < v33 )
    v37 = ((v33 - 1) >> 1) + v61;
  a5->top = -1;
  v39 = 0;
  a5->bottom = -1;
  if ( a1->bottom <= 0 )
    goto LABEL_57;
  v40 = v60;
  v41 = -1;
  v42 = v61;
  while ( 1 )
  {
    v59 = v34;
    v43 = v36;
    v36 += v34 - v39;
    v45 = v34 + v40;
    v46 = v37 + v42;
    v44 = v46;
    v34 += v40 + 1;
    if ( v46 < v33 )
      v34 = v45;
    v37 = v46 - v33;
    if ( v44 < v33 )
      v37 = v44;
    v47 = v41;
    if ( v41 == -1 )
    {
      v51 = v12->top;
      v47 = -1;
      if ( v51 >= v43 )
      {
        v47 = -1;
        if ( v51 <= v36 )
        {
          v41 = v38;
          a5->top = v38;
          v47 = v38;
        }
      }
    }
    v48 = v12->bottom;
    if ( v48 <= v36 && v48 >= v43 )
      a5->bottom = v38;
    if ( ++v38 >= a1->bottom )
      break;
    v39 = v59;
  }
  v49 = a5->bottom;
  v7 = 0;
  v31 = a5->left;
  v32 = a5->right;
  top = v63;
  if ( v47 != -1 )
    goto LABEL_42;
  if ( v49 == -1 )
  {
LABEL_57:
    a5->top = 0;
    v47 = 0;
    goto LABEL_45;
  }
  a5->top = 0;
  v47 = 0;
LABEL_42:
  if ( v49 == -1 )
  {
    a5->bottom = v38;
    v49 = v38;
  }
  v7 = v49 + 1;
LABEL_45:
  v50 = v64;
  a5->left = v64 + v31;
  a5->right = v50 + v32;
  a5->top = top + v47;
  a5->bottom = top + v7;
}
