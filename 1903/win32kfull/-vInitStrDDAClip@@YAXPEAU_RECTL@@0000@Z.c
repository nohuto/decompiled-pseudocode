/*
 * XREFs of ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00FCF08
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C005D8D8 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     STR_DIV @ 0x1C00FD540 (STR_DIV.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDAClip(
        struct _RECTL *a1,
        struct _RECTL *a2,
        __m128i *a3,
        struct _RECTL *a4,
        struct _RECTL *a5)
{
  LONG top; // r12d
  LONG left; // r8d
  int v9; // edi
  struct _RECTL *v10; // rax
  struct _RECTL *v11; // r15
  LONG v12; // edx
  LONG v13; // ecx
  __m128i v14; // xmm0
  int v15; // eax
  __m128i v16; // xmm0
  __int64 right; // r8
  __int64 v18; // rdx
  int v19; // r10d
  int v20; // edx
  int v21; // ecx
  int v22; // r9d
  LONG v23; // r11d
  LONG v24; // r8d
  unsigned int v25; // r12d
  struct _RECTL *v26; // rdi
  unsigned int v27; // r15d
  int v28; // eax
  LONG v29; // r13d
  LONG v30; // r9d
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  int v34; // r10d
  unsigned int v35; // r13d
  int v36; // r8d
  int v37; // ecx
  int v38; // r9d
  LONG v39; // r11d
  LONG v40; // edx
  struct _RECTL *v41; // r12
  int v42; // esi
  unsigned int v43; // edi
  int v44; // eax
  LONG v45; // r15d
  int v46; // eax
  LONG v47; // r9d
  LONG v48; // r9d
  LONG v49; // ecx
  bool v50; // zf
  LONG v51; // ecx
  LONG bottom; // eax
  LONG v53; // eax
  unsigned __int64 v54; // [rsp+20h] [rbp-71h]
  unsigned __int64 v55; // [rsp+20h] [rbp-71h]
  unsigned int v56[4]; // [rsp+28h] [rbp-69h] BYREF
  LONG v57; // [rsp+38h] [rbp-59h]
  struct _RECTL *v58; // [rsp+40h] [rbp-51h]
  LONG v59; // [rsp+48h] [rbp-49h]
  unsigned __int64 v60; // [rsp+50h] [rbp-41h]
  struct _RECTL *v61; // [rsp+58h] [rbp-39h]
  __int128 v62; // [rsp+60h] [rbp-31h] BYREF
  __m128i v63; // [rsp+70h] [rbp-21h] BYREF
  __int64 v64; // [rsp+80h] [rbp-11h] BYREF
  __int64 v65; // [rsp+88h] [rbp-9h]
  __int64 v66; // [rsp+90h] [rbp-1h] BYREF
  __int64 v67; // [rsp+98h] [rbp+7h]

  top = a2->top;
  left = a2->left;
  v9 = 0;
  v61 = a2;
  v64 = 0LL;
  v10 = a4;
  v65 = 0LL;
  v11 = a2;
  v12 = a3->m128i_i32[1];
  v66 = 0LL;
  v67 = 0LL;
  v62 = 0uLL;
  v63 = 0uLL;
  v13 = a3->m128i_i32[0];
  v58 = a4;
  v59 = left;
  v57 = top;
  if ( __PAIR64__(top, left) )
  {
    LODWORD(v64) = a1->left - left;
    HIDWORD(v64) = a1->top - top;
    LODWORD(v65) = a1->right - left;
    bottom = a1->bottom;
    a1 = (struct _RECTL *)&v64;
    HIDWORD(v65) = bottom - top;
    LODWORD(v67) = v11->right - left;
    v53 = v11->bottom;
    v11 = (struct _RECTL *)&v66;
    v61 = (struct _RECTL *)&v66;
    HIDWORD(v67) = v53 - top;
    v10 = a4;
  }
  if ( v13 || v12 )
  {
    v14 = *a3;
    a3 = (__m128i *)&v62;
    LODWORD(v62) = v14.m128i_i32[0];
    DWORD2(v62) = v14.m128i_i32[2] - v13;
    DWORD1(v62) = v14.m128i_i32[1] - v12;
    HIDWORD(v62) = v14.m128i_i32[3] - v12;
    v15 = _mm_cvtsi128_si32(v14);
    v63 = *(__m128i *)a4;
    v16 = v63;
    v63.m128i_i32[2] -= v13;
    v63.m128i_i32[1] -= v12;
    LODWORD(v62) = v15 - v13;
    v63.m128i_i32[3] -= v12;
    v63.m128i_i32[0] = _mm_cvtsi128_si32(v16) - v13;
    v10 = (struct _RECTL *)&v63;
    v58 = (struct _RECTL *)&v63;
  }
  ERECTL::operator*=(&v10->left, a3->m128i_i32);
  right = (unsigned int)v11->right;
  v18 = (unsigned int)(a3->m128i_i32[2] - a3->m128i_i32[0]);
  *(_QWORD *)v56 = 0LL;
  STR_DIV(v56, v18, right);
  v20 = v56[0];
  v21 = ((v19 - 1) >> 1) + v56[1];
  v54 = __PAIR64__(v21, v56[0]);
  if ( v21 >= v19 )
  {
    v20 = v56[0] + 1;
    v21 -= v19;
    LODWORD(v54) = v56[0] + 1;
    HIDWORD(v54) = v21;
  }
  a5->left = -1;
  v22 = 0;
  a5->right = -1;
  v23 = 0;
  v24 = 0;
  if ( a1->right > 0 )
  {
    v25 = v56[0];
    v26 = v58;
    v27 = v56[1];
    while ( 1 )
    {
      v21 += v27;
      v28 = v20 - v22;
      v20 += v25;
      v29 = v23;
      v23 += v28;
      v60 = v54;
      v54 = __PAIR64__(v21, v20);
      if ( v21 >= v19 )
      {
        ++v20;
        v21 -= v19;
        v54 = __PAIR64__(v21, v20);
      }
      v30 = a5->left;
      if ( a5->left == -1 )
      {
        v30 = -1;
        if ( v26->left >= v29 )
        {
          v30 = -1;
          if ( v26->left <= v23 )
          {
            a5->left = v24;
            v30 = v24;
          }
        }
      }
      v31 = v26->right;
      if ( v31 <= v23 && v31 >= v29 )
        a5->right = v24;
      if ( ++v24 >= a1->right )
        break;
      v22 = v60;
    }
    v32 = a5->right;
    v9 = 0;
    v11 = v61;
    top = v57;
    if ( v30 != -1 )
      goto LABEL_21;
    if ( v32 != -1 )
    {
      a5->left = 0;
LABEL_21:
      if ( v32 == -1 )
        v32 = v24;
      v33 = v32 + 1;
      goto LABEL_24;
    }
  }
  a5->left = 0;
  v33 = 0;
LABEL_24:
  a5->right = v33;
  STR_DIV(v56, (unsigned int)(a3->m128i_i32[3] - a3->m128i_i32[1]), (unsigned int)v11->bottom);
  v35 = v56[0];
  v36 = v56[0];
  v37 = ((v34 - 1) >> 1) + v56[1];
  v55 = __PAIR64__(v37, v56[0]);
  if ( v37 >= v34 )
  {
    v36 = v56[0] + 1;
    v37 -= v34;
    LODWORD(v55) = v56[0] + 1;
    HIDWORD(v55) = v37;
  }
  v38 = 0;
  a5->top = -1;
  v39 = 0;
  a5->bottom = -1;
  v40 = 0;
  if ( a1->bottom <= 0 )
    goto LABEL_53;
  v41 = v58;
  v42 = -1;
  v43 = v56[1];
  while ( 1 )
  {
    v37 += v43;
    v44 = v36 - v38;
    v36 += v35;
    v45 = v39;
    v39 += v44;
    v60 = v55;
    v55 = __PAIR64__(v37, v36);
    if ( v37 >= v34 )
    {
      ++v36;
      v37 -= v34;
      v55 = __PAIR64__(v37, v36);
    }
    v46 = v42;
    if ( v42 == -1 )
    {
      v48 = v41->top;
      v46 = -1;
      if ( v48 >= v45 )
      {
        v46 = -1;
        if ( v48 <= v39 )
        {
          v42 = v40;
          a5->top = v40;
          v46 = v40;
        }
      }
    }
    v47 = v41->bottom;
    if ( v47 <= v39 && v47 >= v45 )
      a5->bottom = v40;
    if ( ++v40 >= a1->bottom )
      break;
    v38 = v60;
  }
  v49 = a5->bottom;
  v9 = 0;
  top = v57;
  v50 = v46 == -1;
  if ( v46 != -1 )
    goto LABEL_40;
  if ( v49 == -1 )
  {
LABEL_53:
    v46 = 0;
    goto LABEL_45;
  }
  v50 = 1;
LABEL_40:
  if ( v50 )
    v46 = 0;
  if ( v49 == -1 )
    v49 = v40;
  v9 = v49 + 1;
LABEL_45:
  v51 = v59;
  a5->left += v59;
  a5->right += v51;
  a5->top = top + v46;
  a5->bottom = top + v9;
}
