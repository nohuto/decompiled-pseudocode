/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00EF758
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00EF67C (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFastFill(
        int a1,
        struct _POINTFIX *a2,
        __m128i *a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *))
{
  struct _POINTFIX *v5; // r13
  struct _POINTFIX *v6; // r8
  int v7; // r10d
  FIX y; // r9d
  struct _POINTFIX *v9; // rcx
  __int32 *v10; // r15
  int v11; // esi
  int v12; // r14d
  int v13; // ebx
  int i; // eax
  __int64 v15; // r8
  int *v16; // rdx
  struct _POINTFIX *v17; // rcx
  int v18; // r9d
  int v19; // r12d
  unsigned int v20; // r11d
  int v21; // edi
  int v22; // ecx
  int v23; // r9d
  int v24; // edx
  int v25; // r10d
  int v26; // edi
  int v27; // r10d
  int v28; // eax
  int v29; // edi
  __int32 v30; // edx
  int v31; // r8d
  bool v32; // sf
  int v33; // edx
  int v34; // r8d
  int v35; // edx
  struct _POINTFIX *v37; // rax
  unsigned int v38; // ecx
  __int32 v39; // r12d
  __int32 v40; // r9d
  __int32 v41; // edx
  __int32 v42; // r8d
  FIX v43; // ecx
  FIX *p_y; // rax
  int v45; // r9d
  __int32 v46; // ecx
  __int32 v47; // eax
  __int64 v48; // r8
  char *v49; // rdx
  struct _POINTFIX *v50; // rcx
  __int128 v51; // xmm2
  __int128 v52; // xmm3
  __int64 v53; // xmm4_8
  int v54; // ecx
  int v55; // r10d
  __int32 v56; // r12d
  int v57; // r9d
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int32 v60; // ecx
  __int32 v61; // eax
  int v62; // [rsp+30h] [rbp-268h]
  __m128i v63; // [rsp+50h] [rbp-248h]
  __int128 v64; // [rsp+60h] [rbp-238h]
  __int128 v65; // [rsp+70h] [rbp-228h]
  __int64 v66; // [rsp+80h] [rbp-218h]
  __int128 v67; // [rsp+88h] [rbp-210h]
  __int128 v68; // [rsp+98h] [rbp-200h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-1F0h]
  __int32 *v70; // [rsp+B0h] [rbp-1E8h]
  struct _POINTFIX *v71; // [rsp+B8h] [rbp-1E0h]
  void (*v72)(int, struct _ROW *, unsigned int, void *); // [rsp+C0h] [rbp-1D8h]
  struct _POINTFIX *v73; // [rsp+C8h] [rbp-1D0h]
  __m128i *v74; // [rsp+D0h] [rbp-1C8h]
  int v75; // [rsp+D8h] [rbp-1C0h]
  int v76; // [rsp+DCh] [rbp-1BCh]
  void (*v77)(struct _RECTL *, unsigned int, void *); // [rsp+E0h] [rbp-1B8h]
  struct _POINTFIX *v78; // [rsp+F0h] [rbp-1A8h]
  __int32 v79; // [rsp+F8h] [rbp-1A0h]
  int v80; // [rsp+FCh] [rbp-19Ch]
  __int32 v81; // [rsp+100h] [rbp-198h]
  int v82; // [rsp+104h] [rbp-194h]
  _BYTE v83[320]; // [rsp+110h] [rbp-188h] BYREF
  int v84; // [rsp+2A0h] [rbp+8h]

  v84 = a1;
  v5 = a2;
  v71 = a2;
  v78 = a2;
  v74 = a3;
  v77 = a4;
  v72 = a5;
  v6 = a2;
  v73 = &a2[a1 - 1];
  v7 = a1 - 1;
  y = a2->y;
  if ( a2[1].y <= y )
  {
    do
    {
      ++v6;
      if ( !--v7 )
        goto LABEL_9;
    }
    while ( v6[1].y <= v6->y );
    v9 = v6;
    do
    {
      if ( !--v7 )
        goto LABEL_9;
      ++v9;
    }
    while ( v9[1].y >= v9->y );
    do
    {
      if ( v9[1].y < y )
        break;
      if ( !--v7 )
        goto LABEL_9;
      ++v9;
    }
    while ( v9[1].y <= v9->y );
    return 0LL;
  }
  while ( --v7 )
  {
    ++a2;
    if ( a2[1].y < a2->y )
    {
      while ( --v7 )
      {
        ++a2;
        v43 = a2[1].y;
        p_y = &a2->y;
        if ( v43 > a2->y )
        {
          v6 = a2;
          do
          {
            if ( v43 > y )
              break;
            if ( !--v7 )
              goto LABEL_9;
            p_y += 2;
            v43 = p_y[2];
          }
          while ( v43 >= *p_y );
          return 0LL;
        }
      }
      if ( a2[1].y < y )
        v6 = a2 + 1;
      break;
    }
  }
LABEL_9:
  v69 = 4294967288LL;
  v66 = 8LL;
  *((_QWORD *)&v68 + 1) = v6;
  *((_QWORD *)&v65 + 1) = v6;
  v63 = 0uLL;
  v10 = (__int32 *)v83;
  v70 = (__int32 *)v83;
  v11 = 0;
  v12 = 0;
  v13 = (v6->y + 15) >> 4;
  if ( v74 )
  {
    v63 = *v74;
    if ( (int)HIDWORD(v74->m128i_i64[0]) > v13 )
      v13 = HIDWORD(v74->m128i_i64[0]);
    if ( v13 >= _mm_srli_si128(*v74, 8).m128i_i32[1] )
      return 1LL;
  }
  else
  {
    v63.m128i_i32[1] = 0x80000000;
    v63.m128i_i32[3] = 0x7FFFFFFF;
  }
  if ( v74 )
  {
    v48 = 1LL;
    v49 = (char *)&v68 + 8;
    while ( v48 >= 0 )
    {
      while ( 1 )
      {
        if ( !v84 )
          return 1LL;
        v50 = (struct _POINTFIX *)(*(_QWORD *)v49 + *((int *)v49 + 2));
        if ( v50 < v5 )
        {
          v50 = v73;
        }
        else if ( v50 > v73 )
        {
          v50 = v5;
        }
        if ( v50->y >> 4 >= v63.m128i_i32[1] )
          break;
        --v84;
        *(_QWORD *)v49 = v50;
      }
      --v48;
      v49 -= 40;
    }
  }
LABEL_12:
  v76 = v12;
  for ( i = 1; ; i = v62 - 1 )
  {
    v62 = i;
    if ( i < 0 )
    {
      v29 = HIDWORD(v66);
      if ( SHIDWORD(v69) < SHIDWORD(v66) )
        v29 = HIDWORD(v69);
      HIDWORD(v69) -= v29;
      HIDWORD(v66) -= v29;
      if ( v29 + v13 > v63.m128i_i32[3] )
        v29 = v63.m128i_i32[3] - v13;
      if ( HIDWORD(v67) | HIDWORD(v64) || DWORD1(v67) | DWORD1(v64) || v29 <= 2 )
      {
        v12 = v13;
        if ( v11 )
          v12 = v76;
        while ( 1 )
        {
          v30 = v64;
          if ( (int)v64 - (int)v67 <= 0 )
          {
            if ( (_DWORD)v64 != (_DWORD)v67 )
            {
              v51 = v67;
              v52 = v68;
              v53 = v69;
              v67 = v64;
              v68 = v65;
              v69 = v66;
              v64 = v51;
              v65 = v52;
              v66 = v53;
              continue;
            }
            if ( v11 )
            {
LABEL_134:
              _guard_dispatch_icall_fptr();
              v10 = (__int32 *)v83;
              v70 = (__int32 *)v83;
              v11 = 0;
            }
            v12 = v13 + 1;
            goto LABEL_41;
          }
          if ( v74 )
          {
            v45 = v63.m128i_i32[0];
            v46 = v63.m128i_i32[0];
            if ( (int)v67 >= v63.m128i_i32[0] )
              v46 = v67;
            *v10 = v46;
            v47 = v63.m128i_i32[2];
            if ( (int)v64 <= v63.m128i_i32[2] )
              v47 = v64;
            v10[1] = v47;
            if ( v46 >= v47 )
            {
              if ( v11 )
              {
                _guard_dispatch_icall_fptr();
                v45 = v63.m128i_i32[0];
                v10 = (__int32 *)v83;
                v70 = (__int32 *)v83;
                v11 = 0;
              }
              v12 = v13 + 1;
              if ( (int)v67 < v45 && (int)**((_DWORD **)&v68 + 1) >> 4 < v45 && (int)**((_DWORD **)&v65 + 1) >> 4 < v45
                || (int)v67 >= v63.m128i_i32[2]
                && (int)**((_DWORD **)&v68 + 1) >> 4 >= v63.m128i_i32[2]
                && (int)**((_DWORD **)&v65 + 1) >> 4 >= v63.m128i_i32[2] )
              {
                goto LABEL_64;
              }
              goto LABEL_41;
            }
          }
          else
          {
            *v10 = v67;
            v10[1] = v30;
          }
          ++v11;
          v10 += 2;
          v70 = v10;
          if ( v11 == 40 )
            goto LABEL_134;
LABEL_41:
          v31 = DWORD1(v64) + v64;
          LODWORD(v64) = DWORD1(v64) + v64;
          v32 = HIDWORD(v64) + DWORD2(v64) < 0;
          v33 = HIDWORD(v64) + DWORD2(v64);
          DWORD2(v64) += HIDWORD(v64);
          if ( !v32 )
          {
            DWORD2(v64) = v33 - v65;
            LODWORD(v64) = v31 + 1;
          }
          v34 = DWORD1(v67) + v67;
          LODWORD(v67) = DWORD1(v67) + v67;
          v32 = HIDWORD(v67) + DWORD2(v67) < 0;
          v35 = HIDWORD(v67) + DWORD2(v67);
          DWORD2(v67) += HIDWORD(v67);
          if ( !v32 )
          {
            DWORD2(v67) = v35 - v68;
            LODWORD(v67) = v34 + 1;
          }
          --v29;
          ++v13;
          if ( !v29 )
            goto LABEL_12;
        }
      }
      if ( v11 )
      {
        _guard_dispatch_icall_fptr();
        v39 = v63.m128i_i32[2];
        v40 = v63.m128i_i32[0];
        v10 = (__int32 *)v83;
        v70 = (__int32 *)v83;
        v11 = 0;
      }
      else
      {
        v39 = v63.m128i_i32[2];
        v40 = v63.m128i_i32[0];
      }
      v41 = v64;
      if ( (_DWORD)v67 != (_DWORD)v64 )
      {
        v42 = v67;
        if ( (int)v67 <= (int)v64 )
        {
          v42 = v64;
          v41 = v67;
        }
        v80 = v13;
        v82 = v29 + v13;
        if ( v74 )
        {
          v60 = v40;
          if ( v41 >= v40 )
            v60 = v41;
          v79 = v60;
          v61 = v39;
          if ( v42 <= v39 )
            v61 = v42;
          v81 = v61;
          if ( v60 < v61 )
            _guard_dispatch_icall_fptr();
        }
        else
        {
          v79 = v41;
          v81 = v42;
          _guard_dispatch_icall_fptr();
        }
      }
LABEL_64:
      v13 += v29;
      goto LABEL_12;
    }
    v15 = 5LL * i;
    if ( !*((_DWORD *)&v66 + 10 * i + 1) )
      break;
LABEL_28:
    ;
  }
  while ( --v84 >= 0 && v13 < v63.m128i_i32[3] )
  {
    v16 = (int *)*((_QWORD *)&v65 + v15 + 1);
    v17 = (struct _POINTFIX *)((char *)v16 + *((int *)&v66 + 2 * v15));
    *((_QWORD *)&v65 + v15 + 1) = v17;
    if ( v17 < v5 )
    {
      v37 = v73;
      *((_QWORD *)&v65 + v15 + 1) = v73;
      v17 = v37;
    }
    else if ( v17 > v73 )
    {
      *((_QWORD *)&v65 + v15 + 1) = v5;
      v17 = v78;
    }
    v18 = v17->y;
    v75 = v18;
    *((_DWORD *)&v66 + 2 * v15 + 1) = ((v18 + 15) >> 4) - v13;
    if ( ((v18 + 15) >> 4) - v13 > 0 )
    {
      v19 = v16[1];
      v20 = v18 - v19;
      v21 = *v16;
      v22 = v17->x - *v16;
      if ( v22 < 0 )
      {
        v38 = -v22;
        if ( (int)v38 >= (int)v20 )
        {
          v24 = v38 % v20;
          v23 = -(int)(v38 / v20);
          *((_DWORD *)&v64 + 2 * v15 + 1) = v23;
          *((_DWORD *)&v64 + 2 * v15 + 3) = v38 % v20;
          if ( (int)(v38 % v20) > 0 )
          {
            *((_DWORD *)&v64 + 2 * v15 + 1) = --v23;
            v24 = v20 - v24;
            *((_DWORD *)&v64 + 2 * v15 + 3) = v24;
          }
          goto LABEL_24;
        }
        *((_DWORD *)&v64 + 2 * v15 + 1) = -1;
        v24 = v20 - v38;
        v23 = -1;
      }
      else
      {
        if ( v22 < (int)v20 )
        {
          *((_DWORD *)&v64 + 2 * v15 + 1) = 0;
          *((_DWORD *)&v64 + 2 * v15 + 3) = v22;
          v23 = 0;
          v24 = v22;
LABEL_24:
          *((_DWORD *)&v65 + 2 * v15) = v20;
          *((_DWORD *)&v64 + 2 * v15 + 2) = -1;
          *((_DWORD *)&v64 + 2 * v15) = v21;
          v25 = -1;
          if ( (v19 & 0xF) != 0 )
          {
            v54 = 16 - (v19 & 0xF);
            v25 = -1;
            while ( v54 > 0 )
            {
              v23 = *((_DWORD *)&v64 + 2 * v15 + 1);
              v21 += v23;
              *((_DWORD *)&v64 + 2 * v15) = v21;
              v24 = *((_DWORD *)&v64 + 2 * v15 + 3);
              v55 = *((_DWORD *)&v64 + 2 * v15 + 2);
              v32 = v24 + v55 < 0;
              v25 = v24 + v55;
              *((_DWORD *)&v64 + 2 * v15 + 2) = v25;
              if ( !v32 )
              {
                v25 -= v20;
                *((_DWORD *)&v64 + 2 * v15 + 2) = v25;
                *((_DWORD *)&v64 + 2 * v15) = ++v21;
              }
              --v54;
            }
          }
          if ( (v21 & 0xF) != 0 )
          {
            v25 -= v20 * (16 - (v21 & 0xF));
            *((_DWORD *)&v64 + 2 * v15 + 2) = v25;
            v21 += 15;
            *((_DWORD *)&v64 + 2 * v15) = v21;
          }
          v26 = v21 >> 4;
          *((_DWORD *)&v64 + 2 * v15) = v26;
          v27 = v25 >> 4;
          *((_DWORD *)&v64 + 2 * v15 + 2) = v27;
          v28 = (v19 + 15) >> 4;
          if ( v28 < v63.m128i_i32[1] )
          {
            v56 = v63.m128i_i32[1] - v28;
            if ( v75 >> 4 >= v63.m128i_i32[1] || v23 || (v24 = *((_DWORD *)&v64 + 2 * v15 + 3)) != 0 )
            {
              v57 = v26 + v23 * v56;
              *((_DWORD *)&v64 + 2 * v15) = v57;
              v58 = v27 + v24 * (__int64)v56;
              if ( v58 < 0 )
              {
                *((_DWORD *)&v64 + 2 * v15 + 2) = v58;
              }
              else
              {
                if ( (v58 & 0xFFFFFFFF80000000uLL) != 0 )
                {
                  v58 /= (unsigned __int64)v20;
                  v59 = (v27 + v24 * (__int64)v56) % (unsigned __int64)v20;
                }
                else
                {
                  LODWORD(v59) = (int)v58 % (int)v20;
                  LODWORD(v58) = (int)v58 / (int)v20;
                }
                *((_DWORD *)&v64 + 2 * v15) = v57 + v58 + 1;
                *((_DWORD *)&v64 + 2 * v15 + 2) = v59 - v20;
              }
            }
          }
          goto LABEL_28;
        }
        v23 = v22 / v20;
        v24 = v22 % v20;
        *((_DWORD *)&v64 + 2 * v15 + 1) = v22 / v20;
      }
      *((_DWORD *)&v64 + 2 * v15 + 3) = v24;
      goto LABEL_24;
    }
  }
  if ( v11 )
    _guard_dispatch_icall_fptr();
  return 1LL;
}
