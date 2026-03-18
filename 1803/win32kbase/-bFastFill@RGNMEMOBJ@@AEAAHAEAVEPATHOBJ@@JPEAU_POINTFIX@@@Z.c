/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C001FA74
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C00200BC (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
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
  FIX v14; // edi
  __int64 v15; // rcx
  __m128i v16; // xmm1
  int v17; // edi
  __int64 v18; // rsi
  __int64 Object; // rax
  _QWORD *v20; // rax
  __int64 v21; // r10
  int v22; // r12d
  int *v23; // r10
  int *v24; // r8
  __int64 v25; // r13
  char *v26; // r9
  int *v27; // rdx
  struct _POINTFIX *v28; // rcx
  FIX v29; // r14d
  int v30; // r11d
  unsigned int v31; // r14d
  FIX x; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // esi
  int v36; // r15d
  bool v37; // zf
  int v38; // r11d
  int v39; // edx
  int v40; // r11d
  int v41; // edx
  int v42; // r13d
  int v43; // esi
  int v44; // r15d
  int v45; // eax
  int v46; // r11d
  int v47; // r9d
  int v48; // ecx
  __int64 result; // rax
  int v50; // r13d
  int v51; // eax
  int v52; // ecx
  int v53; // edx
  struct _POINTFIX *v54; // rdx
  FIX v55; // ecx
  FIX *p_y; // rax
  __int128 v57; // xmm1
  __int128 v58; // xmm5
  __int128 v59; // xmm6
  __int128 v60; // xmm7
  int v61; // r9d
  int v62; // ecx
  int v63; // eax
  bool v64; // sf
  int v65; // r11d
  int v66; // r11d
  unsigned int v67; // eax
  int v68; // edx
  int v69; // eax
  int v70; // edx
  __int128 v71; // xmm0
  __int128 v72; // xmm4
  FIX v73; // ecx
  FIX *v74; // rax
  int v75; // ecx
  int v76; // [rsp+28h] [rbp-69h]
  int v77; // [rsp+28h] [rbp-69h]
  __int64 v78; // [rsp+30h] [rbp-61h]
  struct _POINTFIX *v79; // [rsp+38h] [rbp-59h]
  __int128 v80; // [rsp+48h] [rbp-49h]
  __int128 v81; // [rsp+58h] [rbp-39h]
  __int64 v82; // [rsp+68h] [rbp-29h]
  __int128 v83; // [rsp+70h] [rbp-21h] BYREF
  __int128 v84; // [rsp+80h] [rbp-11h]
  __int64 v85; // [rsp+90h] [rbp-1h]
  int v87; // [rsp+108h] [rbp+77h]

  v87 = a3;
  v4 = a4;
  v5 = a3;
  v8 = v4;
  v9 = v4;
  y = v4->y;
  v11 = a3 - 1;
  v79 = &v4[a3 - 1];
  if ( v4[1].y <= y )
  {
    while ( 1 )
    {
      ++v9;
      if ( !--v11 )
        break;
      if ( v9[1].y > v9->y )
      {
        v54 = v9;
        while ( --v11 )
        {
          v55 = v54[2].y;
          ++v54;
          p_y = &v54->y;
          if ( v55 < v54->y )
          {
            while ( 1 )
            {
              if ( v55 < y )
                return 0LL;
              if ( !--v11 )
                break;
              v55 = p_y[4];
              p_y += 2;
              if ( v55 > *p_y )
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
          v73 = v8[2].y;
          ++v8;
          v74 = &v8->y;
        }
        while ( v73 <= v8->y );
        v9 = v8;
        do
        {
          if ( v73 > y )
            break;
          if ( !--v11 )
            goto LABEL_7;
          v73 = v74[4];
          v74 += 2;
        }
        while ( v73 >= *v74 );
        return 0LL;
      }
    }
  }
LABEL_7:
  v13 = (__m128i *)*((_QWORD *)a2 + 1);
  v14 = v9->y;
  v15 = (int)HIDWORD(v13[3].m128i_i64[0]);
  v16 = _mm_srli_si128(v13[3], 8);
  *((_QWORD *)&v84 + 1) = v9;
  *((_QWORD *)&v81 + 1) = v9;
  v17 = (v14 + 15) >> 4;
  v85 = 4294967288LL;
  v82 = 8LL;
  v18 = 24 * ((v16.m128i_i32[1] - v15 + 15) >> 4) + 136;
  if ( v18 > 0x7FFFFFFF )
    return 0LL;
  Object = AllocateObject((unsigned int)v18);
  *(_QWORD *)this = Object;
  if ( !Object )
    return 0LL;
  *(_DWORD *)(Object + 24) = v18;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + (unsigned int)v18;
  v20 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v20[1] = v20;
  *v20 = v20;
  v21 = *(_QWORD *)this;
  v22 = 1;
  v23 = (int *)(v21 + 104);
  v23[1] = 0x80000000;
  *v23 = 0;
  v23[2] = v17;
  v23[3] = 0;
  v24 = (int *)((char *)v23 + (unsigned int)(4 * *v23 + 16));
LABEL_10:
  v25 = 1LL;
  v78 = 1LL;
  v26 = (char *)&v83 + 4;
LABEL_11:
  if ( *((_DWORD *)v26 + 8) )
    goto LABEL_24;
  while ( 1 )
  {
    v87 = --v5;
    if ( v5 < 0 )
      break;
    v27 = *(int **)(v26 + 20);
    v28 = (struct _POINTFIX *)((char *)v27 + *((int *)v26 + 7));
    *(_QWORD *)(v26 + 20) = v28;
    if ( v28 < v4 )
    {
      *(_QWORD *)(v26 + 20) = v79;
      v28 = v79;
    }
    else if ( v28 > v79 )
    {
      *(_QWORD *)(v26 + 20) = v4;
      v28 = v4;
    }
    v29 = v28->y;
    *((_DWORD *)v26 + 8) = ((v29 + 15) >> 4) - v17;
    if ( ((v29 + 15) >> 4) - v17 > 0 )
    {
      v30 = v27[1];
      v31 = v29 - v30;
      x = v28->x;
      v33 = *v27;
      v34 = x - *v27;
      if ( v34 < 0 )
      {
        v67 = -v34;
        if ( (int)v67 < (int)v31 )
        {
          *(_DWORD *)v26 = -1;
          v35 = v31 - v67;
          *((_DWORD *)v26 + 2) = v31 - v67;
          v36 = -1;
        }
        else
        {
          v68 = v67 % v31;
          *((_DWORD *)v26 + 2) = v67 % v31;
          v36 = -(int)(v67 / v31);
          v35 = v67 % v31;
          *(_DWORD *)v26 = v36;
          if ( (int)(v67 % v31) > 0 )
          {
            *(_DWORD *)v26 = --v36;
            v35 = v31 - v68;
            *((_DWORD *)v26 + 2) = v31 - v68;
          }
        }
      }
      else if ( v34 >= (int)v31 )
      {
        v70 = v34 % v31;
        v69 = v34 / v31;
        v35 = v70;
        *(_DWORD *)v26 = v69;
        v36 = v69;
        *((_DWORD *)v26 + 2) = v70;
      }
      else
      {
        *(_DWORD *)v26 = 0;
        v35 = v34;
        v36 = 0;
        *((_DWORD *)v26 + 2) = v34;
      }
      *((_DWORD *)v26 + 3) = v31;
      v38 = v30 & 0xF;
      v37 = v38 == 0;
      *((_DWORD *)v26 + 1) = -1;
      v76 = v38;
      v39 = -1;
      v40 = v33;
      *((_DWORD *)v26 - 1) = v33;
      if ( !v37 )
      {
        v50 = 16 - v76;
        if ( 16 - v76 > 0 )
        {
          do
          {
            v51 = v36 + v33;
            v40 = v36 + v33 + 1;
            v53 = v35 + v39;
            v52 = v53;
            if ( v53 < 0 )
              v40 = v51;
            v39 = v53 - v31;
            if ( v52 < 0 )
              v39 = v52;
            --v50;
            v33 = v40;
          }
          while ( v50 > 0 );
          *((_DWORD *)v26 - 1) = v40;
          *((_DWORD *)v26 + 1) = v39;
        }
        v25 = v78;
      }
      if ( (v40 & 0xF) != 0 )
      {
        v39 -= v31 * (16 - (v40 & 0xF));
        v40 += 15;
        *((_DWORD *)v26 + 1) = v39;
        *((_DWORD *)v26 - 1) = v40;
      }
      v4 = a4;
      v5 = v87;
      *((_DWORD *)v26 + 1) = v39 >> 4;
      *((_DWORD *)v26 - 1) = v40 >> 4;
LABEL_24:
      --v25;
      v26 -= 40;
      v78 = v25;
      if ( v25 < 0 )
      {
        v41 = HIDWORD(v82);
        v42 = HIDWORD(v80);
        v43 = DWORD1(v83);
        if ( SHIDWORD(v85) < SHIDWORD(v82) )
          v41 = HIDWORD(v85);
        v44 = DWORD1(v80);
        HIDWORD(v85) -= v41;
        HIDWORD(v82) -= v41;
        if ( !(HIDWORD(v83) | HIDWORD(v80)) && !(DWORD1(v83) | DWORD1(v80)) )
        {
          v45 = v80;
          v46 = *v23;
          if ( (_DWORD)v83 != (_DWORD)v80 )
          {
            v47 = v83;
            if ( (int)v83 <= (int)v80 )
            {
              v47 = v80;
              v45 = v83;
            }
            if ( v46 == 2 && v23[3] == v45 && v23[4] == v47 )
            {
              v17 += v41;
              v23[2] = v17;
              goto LABEL_35;
            }
            *v24 = 2;
            v24[3] = v45;
            v24[4] = v47;
            v24[5] = 2;
            v24[1] = v17;
            v17 += v41;
            v24[2] = v17;
LABEL_34:
            v23 = v24;
            v24 = (int *)((char *)v24 + (unsigned int)(4 * *v24 + 16));
            ++v22;
            goto LABEL_35;
          }
          v75 = v41 + v17;
          if ( v46 )
          {
            *v24 = 0;
            v24[3] = 0;
            v24[1] = v17;
            v17 += v41;
            v24[2] = v75;
            goto LABEL_34;
          }
          v23[2] = v75;
          v17 += v41;
LABEL_35:
          v5 = v87;
          goto LABEL_10;
        }
        v57 = (unsigned __int64)v85;
        v58 = v84;
        v59 = (unsigned __int64)v82;
        v60 = v81;
        while ( 2 )
        {
          v61 = v80;
          v62 = v83;
LABEL_60:
          if ( v61 - v62 <= 0 )
          {
            if ( v61 != v62 )
            {
              v71 = v80;
              v72 = v57;
              v81 = v58;
              v80 = v83;
              v42 = HIDWORD(v83);
              v44 = DWORD1(v83);
              v58 = v60;
              v83 = v71;
              v43 = DWORD1(v71);
              v57 = v59;
              v59 = v72;
              v84 = v60;
              v60 = v81;
              continue;
            }
            if ( *v23 )
            {
              *v24 = 0;
              v24[3] = 0;
              goto LABEL_64;
            }
LABEL_76:
            v23[2] = ++v17;
          }
          else
          {
            if ( *v23 == 2 && v23[3] == v62 && v23[4] == v61 )
              goto LABEL_76;
            *v24 = 2;
            v24[3] = v62;
            v24[4] = v61;
            v24[5] = 2;
LABEL_64:
            v63 = *v24;
            v23 = v24;
            v24[1] = v17++;
            v24[2] = v17;
            v24 = (int *)((char *)v24 + (unsigned int)(4 * v63 + 16));
            ++v22;
          }
          break;
        }
        v61 += v44;
        v64 = v42 + DWORD2(v80) < 0;
        v65 = v42 + DWORD2(v80);
        LODWORD(v80) = v61;
        DWORD2(v80) += v42;
        if ( !v64 )
        {
          ++v61;
          DWORD2(v80) = v65 - v81;
          LODWORD(v80) = v61;
        }
        v62 += v43;
        v64 = DWORD2(v83) + HIDWORD(v83) < 0;
        v66 = DWORD2(v83) + HIDWORD(v83);
        DWORD2(v83) += HIDWORD(v83);
        LODWORD(v83) = v62;
        if ( !v64 )
        {
          ++v62;
          DWORD2(v83) = v66 - v84;
          LODWORD(v83) = v62;
        }
        if ( !--v41 )
        {
          v85 = v57;
          v82 = v59;
          goto LABEL_35;
        }
        goto LABEL_60;
      }
      goto LABEL_11;
    }
    v4 = a4;
  }
  v77 = v22;
  if ( *v23 )
  {
    *v24 = 0;
    v24[3] = 0;
    v48 = *v24;
    v24[1] = v17;
    v24[2] = 0x7FFFFFFF;
    v77 = v22 + 1;
    v24 = (int *)((char *)v24 + (unsigned int)(4 * v48 + 16));
  }
  else
  {
    v23[2] = 0x7FFFFFFF;
  }
  *(_DWORD *)(*(_QWORD *)this + 84LL) = v77;
  result = 1LL;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v24;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = (_DWORD)v24 - *(_QWORD *)this;
  return result;
}
