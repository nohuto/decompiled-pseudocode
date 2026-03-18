/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C0016E48
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0018070 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C00255D0 (AllocateObject.c)
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
  __int64 v21; // r10
  int v22; // r13d
  int *v23; // r10
  int *v24; // r8
  __int64 v25; // r12
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
  int v42; // r12d
  int v43; // esi
  int v44; // r15d
  int v45; // eax
  int v46; // r11d
  int v47; // r9d
  int v48; // ecx
  __int64 result; // rax
  int v50; // r12d
  int v51; // eax
  int v52; // ecx
  int v53; // edx
  __int128 v54; // xmm4
  __int128 v55; // xmm5
  __int128 v56; // xmm6
  __int128 v57; // xmm7
  int v58; // r9d
  int v59; // ecx
  int v60; // eax
  bool v61; // sf
  int v62; // r11d
  int v63; // r11d
  unsigned int v64; // eax
  int v65; // edx
  struct _POINTFIX *v66; // rdx
  FIX v67; // ecx
  FIX *p_y; // rax
  FIX v69; // ecx
  FIX *v70; // rax
  int v71; // eax
  int v72; // edx
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  int v76; // ecx
  int v77; // [rsp+28h] [rbp-69h]
  int v78; // [rsp+28h] [rbp-69h]
  __int64 v79; // [rsp+30h] [rbp-61h]
  struct _POINTFIX *v80; // [rsp+38h] [rbp-59h]
  __int128 v81; // [rsp+48h] [rbp-49h]
  __int128 v82; // [rsp+58h] [rbp-39h]
  __int64 v83; // [rsp+68h] [rbp-29h]
  __int128 v84; // [rsp+70h] [rbp-21h] BYREF
  __int128 v85; // [rsp+80h] [rbp-11h]
  __int64 v86; // [rsp+90h] [rbp-1h]
  int v88; // [rsp+108h] [rbp+77h]

  v88 = a3;
  v4 = a4;
  v5 = a3;
  v8 = v4;
  v9 = v4;
  y = v4->y;
  v11 = a3 - 1;
  v80 = &v4[a3 - 1];
  if ( v4[1].y <= y )
  {
    while ( 1 )
    {
      ++v9;
      if ( !--v11 )
        break;
      if ( v9[1].y > v9->y )
      {
        v66 = v9;
        while ( --v11 )
        {
          v67 = v66[2].y;
          ++v66;
          p_y = &v66->y;
          if ( v67 < v66->y )
          {
            while ( 1 )
            {
              if ( v67 < y )
                return 0LL;
              if ( !--v11 )
                break;
              v67 = p_y[4];
              p_y += 2;
              if ( v67 > *p_y )
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
          v69 = v8[2].y;
          ++v8;
          v70 = &v8->y;
        }
        while ( v69 <= v8->y );
        v9 = v8;
        do
        {
          if ( v69 > y )
            break;
          if ( !--v11 )
            goto LABEL_7;
          v69 = v70[4];
          v70 += 2;
        }
        while ( v69 >= *v70 );
        return 0LL;
      }
    }
  }
LABEL_7:
  v13 = (__m128i *)*((_QWORD *)a2 + 1);
  v14 = (int)HIDWORD(v13[3].m128i_i64[0]);
  v15 = _mm_srli_si128(v13[3], 8);
  v16 = (v9->y + 15) >> 4;
  v86 = 4294967288LL;
  v83 = 8LL;
  *((_QWORD *)&v85 + 1) = v9;
  *((_QWORD *)&v82 + 1) = v9;
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
  v79 = 1LL;
  v26 = (char *)&v84 + 4;
LABEL_13:
  if ( *((_DWORD *)v26 + 8) )
    goto LABEL_26;
  while ( 1 )
  {
    v88 = --v5;
    if ( v5 < 0 )
      break;
    v27 = *(int **)(v26 + 20);
    v28 = (struct _POINTFIX *)((char *)v27 + *((int *)v26 + 7));
    *(_QWORD *)(v26 + 20) = v28;
    if ( v28 < v4 )
    {
      *(_QWORD *)(v26 + 20) = v80;
      v28 = v80;
    }
    else if ( v28 > v80 )
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
        v64 = -v34;
        if ( (int)v64 < (int)v31 )
        {
          *(_DWORD *)v26 = -1;
          v35 = v31 - v64;
          *((_DWORD *)v26 + 2) = v31 - v64;
          v36 = -1;
        }
        else
        {
          v65 = v64 % v31;
          *((_DWORD *)v26 + 2) = v64 % v31;
          v36 = -(int)(v64 / v31);
          v35 = v64 % v31;
          *(_DWORD *)v26 = v36;
          if ( (int)(v64 % v31) > 0 )
          {
            *(_DWORD *)v26 = --v36;
            v35 = v31 - v65;
            *((_DWORD *)v26 + 2) = v31 - v65;
          }
        }
      }
      else if ( v34 >= (int)v31 )
      {
        v72 = v34 % v31;
        v71 = v34 / v31;
        v35 = v72;
        *(_DWORD *)v26 = v71;
        v36 = v71;
        *((_DWORD *)v26 + 2) = v72;
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
      v77 = v38;
      v39 = -1;
      v40 = v33;
      *((_DWORD *)v26 - 1) = v33;
      if ( !v37 )
      {
        v50 = 16 - v77;
        if ( 16 - v77 > 0 )
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
        v25 = v79;
      }
      if ( (v40 & 0xF) != 0 )
      {
        v39 -= v31 * (16 - (v40 & 0xF));
        v40 += 15;
        *((_DWORD *)v26 + 1) = v39;
        *((_DWORD *)v26 - 1) = v40;
      }
      v4 = a4;
      v5 = v88;
      *((_DWORD *)v26 + 1) = v39 >> 4;
      *((_DWORD *)v26 - 1) = v40 >> 4;
LABEL_26:
      --v25;
      v26 -= 40;
      v79 = v25;
      if ( v25 < 0 )
      {
        v41 = HIDWORD(v83);
        v42 = HIDWORD(v81);
        v43 = DWORD1(v84);
        if ( SHIDWORD(v86) < SHIDWORD(v83) )
          v41 = HIDWORD(v86);
        v44 = DWORD1(v81);
        HIDWORD(v86) -= v41;
        HIDWORD(v83) -= v41;
        if ( !(HIDWORD(v84) | HIDWORD(v81)) && !(DWORD1(v84) | DWORD1(v81)) )
        {
          v45 = v81;
          v46 = *v23;
          if ( (_DWORD)v84 != (_DWORD)v81 )
          {
            v47 = v84;
            if ( (int)v84 <= (int)v81 )
            {
              v47 = v81;
              v45 = v84;
            }
            if ( v46 == 2 && v23[3] == v45 && v23[4] == v47 )
            {
              v16 += v41;
              v23[2] = v16;
              goto LABEL_37;
            }
            *v24 = 2;
            v24[3] = v45;
            v24[4] = v47;
            v24[5] = 2;
            v24[1] = v16;
            v16 += v41;
            v24[2] = v16;
LABEL_36:
            v23 = v24;
            v24 = (int *)((char *)v24 + (unsigned int)(4 * *v24 + 16));
            ++v22;
            goto LABEL_37;
          }
          v76 = v41 + v16;
          if ( v46 )
          {
            *v24 = 0;
            v24[3] = 0;
            v24[1] = v16;
            v16 += v41;
            v24[2] = v76;
            goto LABEL_36;
          }
          v23[2] = v76;
          v16 += v41;
LABEL_37:
          v5 = v88;
          goto LABEL_12;
        }
        v54 = (unsigned __int64)v86;
        v55 = v85;
        v56 = (unsigned __int64)v83;
        v57 = v82;
        while ( 2 )
        {
          v58 = v81;
          v59 = v84;
LABEL_53:
          if ( v58 - v59 <= 0 )
          {
            if ( v58 != v59 )
            {
              v73 = v81;
              v74 = v55;
              v75 = v54;
              v81 = v84;
              v42 = HIDWORD(v84);
              v55 = v57;
              v44 = DWORD1(v84);
              v54 = v56;
              v84 = v73;
              v43 = DWORD1(v73);
              v82 = v74;
              v56 = v75;
              v85 = v57;
              v57 = v74;
              continue;
            }
            if ( *v23 )
            {
              *v24 = 0;
              v24[3] = 0;
              goto LABEL_57;
            }
LABEL_65:
            v23[2] = ++v16;
          }
          else
          {
            if ( *v23 == 2 && v23[3] == v59 && v23[4] == v58 )
              goto LABEL_65;
            *v24 = 2;
            v24[3] = v59;
            v24[4] = v58;
            v24[5] = 2;
LABEL_57:
            v60 = *v24;
            v23 = v24;
            v24[1] = v16++;
            v24[2] = v16;
            v24 = (int *)((char *)v24 + (unsigned int)(4 * v60 + 16));
            ++v22;
          }
          break;
        }
        v58 += v44;
        v61 = v42 + DWORD2(v81) < 0;
        v62 = v42 + DWORD2(v81);
        LODWORD(v81) = v58;
        DWORD2(v81) += v42;
        if ( !v61 )
        {
          ++v58;
          DWORD2(v81) = v62 - v82;
          LODWORD(v81) = v58;
        }
        v59 += v43;
        v61 = DWORD2(v84) + HIDWORD(v84) < 0;
        v63 = DWORD2(v84) + HIDWORD(v84);
        DWORD2(v84) += HIDWORD(v84);
        LODWORD(v84) = v59;
        if ( !v61 )
        {
          ++v59;
          DWORD2(v84) = v63 - v85;
          LODWORD(v84) = v59;
        }
        if ( !--v41 )
        {
          v86 = v54;
          v83 = v56;
          goto LABEL_37;
        }
        goto LABEL_53;
      }
      goto LABEL_13;
    }
    v4 = a4;
  }
  v78 = v22;
  if ( *v23 )
  {
    *v24 = 0;
    v24[3] = 0;
    v48 = *v24;
    v24[1] = v16;
    v24[2] = 0x7FFFFFFF;
    v78 = v22 + 1;
    v24 = (int *)((char *)v24 + (unsigned int)(4 * v48 + 16));
  }
  else
  {
    v23[2] = 0x7FFFFFFF;
  }
  *(_DWORD *)(*(_QWORD *)this + 84LL) = v78;
  result = 1LL;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v24;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = (_DWORD)v24 - *(_QWORD *)this;
  return result;
}
