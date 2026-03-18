/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C000FF08
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0010DB4 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C0029BF0 (AllocateObject.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFill(RGNMEMOBJ *this, struct EPATHOBJ *a2, int a3, struct _POINTFIX *a4)
{
  struct _POINTFIX *v4; // r14
  int v5; // r15d
  struct _POINTFIX *v8; // r11
  struct _POINTFIX *v9; // rsi
  FIX y; // edi
  int v11; // r10d
  FIX v12; // eax
  __m128i *v13; // rax
  __int64 v14; // rcx
  __m128i v15; // xmm1
  int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // esi
  __int64 Object; // rax
  _QWORD *v20; // rax
  __int64 v21; // r9
  int v22; // r13d
  int *v23; // r9
  int *v24; // r8
  __int64 v25; // r12
  char *v26; // r10
  int *v27; // rdx
  struct _POINTFIX *v28; // rcx
  FIX v29; // esi
  int v30; // r14d
  unsigned int v31; // esi
  FIX x; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // r15d
  int v36; // r11d
  bool v37; // zf
  int v38; // r14d
  int v39; // edx
  int v40; // r14d
  int v41; // ecx
  int v42; // edx
  int v43; // r12d
  int v44; // esi
  int v45; // r15d
  int v46; // eax
  int v47; // r11d
  int v48; // r10d
  int v49; // eax
  __int64 result; // rax
  int i; // r12d
  int v52; // eax
  int v53; // ecx
  int v54; // edx
  __int128 v55; // xmm1
  __int128 v56; // xmm5
  __int128 v57; // xmm6
  __int128 v58; // xmm7
  int v59; // r10d
  int v60; // ecx
  int v61; // eax
  bool v62; // sf
  int v63; // r11d
  int v64; // r11d
  struct _POINTFIX *v65; // rdx
  FIX v66; // ecx
  FIX *p_y; // rax
  unsigned int v68; // eax
  int v69; // edx
  FIX v70; // ecx
  FIX *v71; // rax
  int v72; // eax
  int v73; // edx
  __int128 v74; // xmm4
  __int128 v75; // xmm0
  __int128 v76; // xmm2
  int v77; // ecx
  int v78; // eax
  int v79; // [rsp+28h] [rbp-69h]
  int v80; // [rsp+28h] [rbp-69h]
  __int64 v81; // [rsp+30h] [rbp-61h]
  struct _POINTFIX *v82; // [rsp+38h] [rbp-59h]
  __int128 v83; // [rsp+48h] [rbp-49h]
  __int128 v84; // [rsp+58h] [rbp-39h]
  __int64 v85; // [rsp+68h] [rbp-29h]
  __int128 v86; // [rsp+70h] [rbp-21h] BYREF
  __int128 v87; // [rsp+80h] [rbp-11h]
  __int64 v88; // [rsp+90h] [rbp-1h]
  int v90; // [rsp+108h] [rbp+77h]

  v90 = a3;
  v4 = a4;
  v5 = a3;
  v8 = v4;
  v9 = v4;
  y = v4->y;
  v11 = a3 - 1;
  v82 = &v4[a3 - 1];
  if ( v4[1].y <= y )
  {
    while ( 1 )
    {
      ++v9;
      if ( !--v11 )
        break;
      if ( v9[1].y > v9->y )
      {
        v65 = v9;
        while ( --v11 )
        {
          v66 = v65[2].y;
          ++v65;
          p_y = &v65->y;
          if ( v66 < v65->y )
          {
            while ( 1 )
            {
              if ( v66 < y )
                return 0LL;
              if ( !--v11 )
                break;
              v66 = p_y[4];
              p_y += 2;
              if ( v66 > *p_y )
                return 0LL;
            }
            goto LABEL_7;
          }
        }
        break;
      }
    }
  }
  else
  {
    while ( --v11 )
    {
      v12 = v8[1].y;
      ++v8;
      if ( v8[1].y < v12 )
      {
        do
        {
          if ( !--v11 )
          {
            if ( v8[1].y < y )
              v9 = v8 + 1;
            goto LABEL_7;
          }
          v70 = v8[2].y;
          ++v8;
          v71 = &v8->y;
        }
        while ( v70 <= v8->y );
        v9 = v8;
        do
        {
          if ( v70 > y )
            break;
          if ( !--v11 )
            goto LABEL_7;
          v70 = v71[4];
          v71 += 2;
        }
        while ( v70 >= *v71 );
        return 0LL;
      }
    }
  }
LABEL_7:
  v13 = (__m128i *)*((_QWORD *)a2 + 1);
  v14 = (int)HIDWORD(v13[3].m128i_i64[0]);
  v15 = _mm_srli_si128(v13[3], 8);
  v16 = (v9->y + 15) >> 4;
  v88 = 4294967288LL;
  v85 = 8LL;
  *((_QWORD *)&v87 + 1) = v9;
  *((_QWORD *)&v84 + 1) = v9;
  v17 = 24 * ((v15.m128i_i32[1] - v14 + 15) >> 4) + 136;
  if ( v17 > 0x7FFFFFFF )
    return 0LL;
  v18 = 216;
  if ( (unsigned __int64)v17 > 0xD8 )
    v18 = 24 * ((v15.m128i_i32[1] - v14 + 15) >> 4) + 136;
  Object = AllocateObject(v18);
  *(_QWORD *)this = Object;
  if ( !Object )
    return 0LL;
  *(_DWORD *)(Object + 24) = v18;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v18;
  v20 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v20[1] = v20;
  *v20 = v20;
  v21 = *(_QWORD *)this;
  v22 = 1;
  v23 = (int *)(v21 + 104);
  v23[1] = 0x80000000;
  *v23 = 0;
  v23[2] = v16;
  v23[3] = 0;
  v24 = (int *)((char *)v23 + (unsigned int)(4 * *v23 + 16));
LABEL_12:
  v25 = 1LL;
  v81 = 1LL;
  v26 = (char *)&v86 + 4;
  while ( *((_DWORD *)v26 + 8) )
  {
LABEL_26:
    --v25;
    v26 -= 40;
    v81 = v25;
    if ( v25 < 0 )
    {
      v42 = HIDWORD(v85);
      v43 = HIDWORD(v83);
      v44 = DWORD1(v86);
      if ( SHIDWORD(v88) < SHIDWORD(v85) )
        v42 = HIDWORD(v88);
      v45 = DWORD1(v83);
      HIDWORD(v88) -= v42;
      HIDWORD(v85) -= v42;
      if ( !(HIDWORD(v86) | HIDWORD(v83)) && !(DWORD1(v86) | DWORD1(v83)) )
      {
        v46 = v83;
        v47 = *v23;
        if ( (_DWORD)v86 == (_DWORD)v83 )
        {
          v77 = v42 + v16;
          if ( v47 )
          {
            v23 = v24;
            *v24 = 0;
            v24[3] = 0;
            v78 = *v24;
            v24[1] = v16;
            v24[2] = v77;
            v24 = (int *)((char *)v24 + (unsigned int)(4 * v78 + 16));
            ++v22;
          }
          else
          {
            v23[2] = v77;
          }
          v16 += v42;
        }
        else
        {
          v48 = v86;
          if ( (int)v86 <= (int)v83 )
          {
            v48 = v83;
            v46 = v86;
          }
          if ( v47 == 2 && v23[3] == v46 && v23[4] == v48 )
          {
            v16 += v42;
            v23[2] = v16;
          }
          else
          {
            *v24 = 2;
            v23 = v24;
            v24[3] = v46;
            v24[4] = v48;
            v24[5] = 2;
            v49 = *v24;
            v24[1] = v16;
            v16 += v42;
            v24[2] = v16;
            v24 = (int *)((char *)v24 + (unsigned int)(4 * v49 + 16));
            ++v22;
          }
        }
        v5 = v90;
        goto LABEL_12;
      }
      v55 = (unsigned __int64)v88;
      v56 = v87;
      v57 = (unsigned __int64)v85;
      v58 = v84;
      while ( 2 )
      {
        v59 = v83;
        v60 = v86;
LABEL_51:
        if ( v59 - v60 <= 0 )
        {
          if ( v59 != v60 )
          {
            v74 = v86;
            v75 = v55;
            v76 = v56;
            v56 = v58;
            v86 = v83;
            v44 = DWORD1(v83);
            v83 = v74;
            v55 = v57;
            v43 = HIDWORD(v74);
            v57 = v75;
            v45 = DWORD1(v74);
            v87 = v58;
            v58 = v76;
            v84 = v76;
            continue;
          }
          if ( *v23 )
          {
            *v24 = 0;
            v24[3] = 0;
            goto LABEL_55;
          }
LABEL_63:
          v23[2] = ++v16;
        }
        else
        {
          if ( *v23 == 2 && v23[3] == v60 && v23[4] == v59 )
            goto LABEL_63;
          *v24 = 2;
          v24[3] = v60;
          v24[4] = v59;
          v24[5] = 2;
LABEL_55:
          v61 = *v24;
          v23 = v24;
          v24[1] = v16++;
          v24[2] = v16;
          v24 = (int *)((char *)v24 + (unsigned int)(4 * v61 + 16));
          ++v22;
        }
        break;
      }
      v59 += v45;
      v62 = v43 + DWORD2(v83) < 0;
      v63 = v43 + DWORD2(v83);
      LODWORD(v83) = v59;
      DWORD2(v83) += v43;
      if ( !v62 )
      {
        ++v59;
        DWORD2(v83) = v63 - v84;
        LODWORD(v83) = v59;
      }
      v60 += v44;
      v62 = DWORD2(v86) + HIDWORD(v86) < 0;
      v64 = DWORD2(v86) + HIDWORD(v86);
      DWORD2(v86) += HIDWORD(v86);
      LODWORD(v86) = v60;
      if ( !v62 )
      {
        ++v60;
        DWORD2(v86) = v64 - v87;
        LODWORD(v86) = v60;
      }
      if ( !--v42 )
      {
        v5 = v90;
        v88 = v55;
        v85 = v57;
        goto LABEL_12;
      }
      goto LABEL_51;
    }
  }
  while ( 1 )
  {
    v90 = --v5;
    if ( v5 < 0 )
      break;
    v27 = *(int **)(v26 + 20);
    v28 = (struct _POINTFIX *)((char *)v27 + *((int *)v26 + 7));
    *(_QWORD *)(v26 + 20) = v28;
    if ( v28 < v4 )
    {
      *(_QWORD *)(v26 + 20) = v82;
      v28 = v82;
    }
    else if ( v28 > v82 )
    {
      *(_QWORD *)(v26 + 20) = v4;
      v28 = v4;
    }
    v29 = v28->y;
    *((_DWORD *)v26 + 8) = ((v29 + 15) >> 4) - v16;
    if ( ((v29 + 15) >> 4) - v16 > 0 )
    {
      v30 = v27[1];
      v31 = v29 - v30;
      x = v28->x;
      v33 = *v27;
      v34 = x - *v27;
      if ( v34 < 0 )
      {
        v68 = -v34;
        if ( (int)v68 < (int)v31 )
        {
          v35 = -1;
          v36 = v31 - v68;
          *(_DWORD *)v26 = -1;
          *((_DWORD *)v26 + 2) = v31 - v68;
        }
        else
        {
          v69 = v68 % v31;
          *((_DWORD *)v26 + 2) = v68 % v31;
          v35 = -(int)(v68 / v31);
          v36 = v68 % v31;
          *(_DWORD *)v26 = v35;
          if ( (int)(v68 % v31) > 0 )
          {
            *(_DWORD *)v26 = --v35;
            v36 = v31 - v69;
            *((_DWORD *)v26 + 2) = v31 - v69;
          }
        }
      }
      else if ( v34 >= (int)v31 )
      {
        v73 = v34 % v31;
        v72 = v34 / v31;
        v36 = v73;
        *(_DWORD *)v26 = v72;
        v35 = v72;
        *((_DWORD *)v26 + 2) = v73;
      }
      else
      {
        *(_DWORD *)v26 = 0;
        v35 = 0;
        v36 = v34;
        *((_DWORD *)v26 + 2) = v34;
      }
      *((_DWORD *)v26 + 3) = v31;
      v38 = v30 & 0xF;
      v37 = v38 == 0;
      *((_DWORD *)v26 + 1) = -1;
      v79 = v38;
      v39 = -1;
      v40 = v33;
      *((_DWORD *)v26 - 1) = v33;
      if ( !v37 )
      {
        for ( i = 16 - v79; i > 0; --i )
        {
          v52 = v35 + v33;
          v40 = v35 + v33 + 1;
          v54 = v36 + v39;
          v53 = v54;
          if ( v54 < 0 )
            v40 = v52;
          v39 = v54 - v31;
          if ( v53 < 0 )
            v39 = v53;
          v33 = v40;
        }
        v25 = v81;
      }
      v41 = v40 & 0xF;
      if ( (v40 & 0xF) != 0 )
      {
        v40 += 15;
        v39 -= v31 * (16 - v41);
      }
      v5 = v90;
      *((_DWORD *)v26 - 1) = v40 >> 4;
      v4 = a4;
      *((_DWORD *)v26 + 1) = v39 >> 4;
      goto LABEL_26;
    }
  }
  v80 = v22;
  if ( *v23 )
  {
    *v24 = 0;
    *((_QWORD *)v24 + 1) = 0x7FFFFFFFLL;
    v24[1] = v16;
    v24 += 4;
    v80 = v22 + 1;
  }
  else
  {
    v23[2] = 0x7FFFFFFF;
  }
  *(_DWORD *)(*(_QWORD *)this + 84LL) = v80;
  result = 1LL;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v24;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = (_DWORD)v24 - *(_QWORD *)this;
  return result;
}
