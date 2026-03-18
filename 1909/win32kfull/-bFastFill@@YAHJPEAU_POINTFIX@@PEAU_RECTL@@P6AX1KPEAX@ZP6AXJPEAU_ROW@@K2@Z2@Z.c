/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00CE8F0
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00CE748 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFastFill(
        int a1,
        struct _POINTFIX *a2,
        __m128i *a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *),
        void *a6)
{
  struct _POINTFIX *v6; // r13
  void *v7; // r11
  struct _POINTFIX *v8; // r8
  int v9; // r10d
  FIX y; // r9d
  struct _POINTFIX *v11; // rcx
  __int32 *v13; // r15
  unsigned int v14; // esi
  unsigned int v15; // r14d
  int v16; // ebx
  int i; // eax
  __int64 v18; // r8
  int *v19; // rdx
  struct _POINTFIX *v20; // rcx
  int v21; // r9d
  __int32 v22; // r10d
  unsigned int v23; // r11d
  int v24; // edi
  int v25; // ecx
  int *v26; // r12
  int *v27; // rax
  int v28; // r9d
  int v29; // edx
  bool v30; // zf
  int v31; // eax
  int v32; // r10d
  int v33; // ecx
  int v34; // edi
  int v35; // r10d
  int v36; // ecx
  int v37; // edi
  __int32 v38; // edx
  int v39; // r8d
  bool v40; // sf
  int v41; // edx
  int v42; // r8d
  int v43; // edx
  unsigned int v44; // ecx
  int *v45; // rcx
  struct _POINTFIX *v46; // rax
  FIX v47; // ecx
  FIX *p_y; // rax
  __int32 v49; // ecx
  int v50; // r8d
  __int32 v51; // eax
  __int64 v52; // r8
  char *v53; // rdx
  struct _POINTFIX *v54; // rcx
  int v55; // edx
  int v56; // r8d
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  int *v60; // r15
  int v61; // r10d
  __int32 v62; // r9d
  __int64 v63; // rax
  int v64; // [rsp+30h] [rbp-298h]
  __int32 *v65; // [rsp+48h] [rbp-280h]
  __m128i v66; // [rsp+50h] [rbp-278h]
  __int128 v67; // [rsp+60h] [rbp-268h] BYREF
  __int128 v68; // [rsp+70h] [rbp-258h]
  __int64 v69; // [rsp+80h] [rbp-248h]
  __int128 v70; // [rsp+88h] [rbp-240h]
  __int128 v71; // [rsp+98h] [rbp-230h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-220h]
  __int32 v73; // [rsp+B0h] [rbp-218h]
  struct _POINTFIX *v74; // [rsp+B8h] [rbp-210h]
  int *v75; // [rsp+C0h] [rbp-208h]
  void (*v76)(int, struct _ROW *, unsigned int, void *); // [rsp+C8h] [rbp-200h]
  struct _POINTFIX *v77; // [rsp+D0h] [rbp-1F8h]
  __m128i *v78; // [rsp+D8h] [rbp-1F0h]
  int v79; // [rsp+E0h] [rbp-1E8h]
  unsigned int v80; // [rsp+E4h] [rbp-1E4h]
  void (*v81)(struct _RECTL *, unsigned int, void *); // [rsp+E8h] [rbp-1E0h]
  struct _POINTFIX *v82; // [rsp+F8h] [rbp-1D0h]
  __int128 v83; // [rsp+100h] [rbp-1C8h]
  __int128 v84; // [rsp+110h] [rbp-1B8h]
  __int64 v85; // [rsp+120h] [rbp-1A8h]
  _DWORD v86[2]; // [rsp+128h] [rbp-1A0h] BYREF
  int v87; // [rsp+130h] [rbp-198h]
  int v88; // [rsp+134h] [rbp-194h]
  _BYTE v89[320]; // [rsp+140h] [rbp-188h] BYREF
  int v90; // [rsp+2D0h] [rbp+8h]

  v90 = a1;
  v6 = a2;
  v74 = a2;
  v82 = a2;
  v78 = a3;
  v81 = a4;
  v76 = a5;
  v7 = a6;
  v8 = a2;
  v77 = &a2[a1 - 1];
  v9 = a1 - 1;
  y = a2->y;
  if ( a2[1].y <= y )
  {
    do
    {
      ++v8;
      if ( !--v9 )
        goto LABEL_13;
    }
    while ( v8[1].y <= v8->y );
    v11 = v8;
    do
    {
      if ( !--v9 )
        goto LABEL_13;
      ++v11;
    }
    while ( v11[1].y >= v11->y );
    do
    {
      if ( v11[1].y < y )
        break;
      if ( !--v9 )
        goto LABEL_13;
      ++v11;
    }
    while ( v11[1].y <= v11->y );
    return 0LL;
  }
  while ( --v9 )
  {
    ++a2;
    if ( a2[1].y < a2->y )
    {
      while ( --v9 )
      {
        ++a2;
        v47 = a2[1].y;
        p_y = &a2->y;
        if ( v47 > a2->y )
        {
          v8 = a2;
          do
          {
            if ( v47 > y )
              break;
            if ( !--v9 )
              goto LABEL_13;
            p_y += 2;
            v47 = p_y[2];
          }
          while ( v47 >= *p_y );
          return 0LL;
        }
      }
      if ( a2[1].y < y )
        v8 = a2 + 1;
      break;
    }
  }
LABEL_13:
  v72 = 4294967288LL;
  v69 = 8LL;
  *((_QWORD *)&v71 + 1) = v8;
  *((_QWORD *)&v68 + 1) = v8;
  v66 = 0uLL;
  v13 = (__int32 *)v89;
  v65 = (__int32 *)v89;
  v14 = 0;
  v15 = 0;
  v16 = (v8->y + 15) >> 4;
  if ( v78 )
  {
    v66 = *v78;
    if ( (int)HIDWORD(v78->m128i_i64[0]) > v16 )
      v16 = HIDWORD(v78->m128i_i64[0]);
    if ( v16 >= _mm_srli_si128(*v78, 8).m128i_i32[1] )
      return 1LL;
  }
  else
  {
    v66.m128i_i32[1] = 0x80000000;
    v66.m128i_i32[3] = 0x7FFFFFFF;
  }
  if ( v78 )
  {
    v52 = 1LL;
    v53 = (char *)&v71 + 8;
    while ( v52 >= 0 )
    {
      while ( 1 )
      {
        if ( !v90 )
          return 1LL;
        v54 = (struct _POINTFIX *)(*(_QWORD *)v53 + *((int *)v53 + 2));
        if ( v54 < v6 )
        {
          v54 = v77;
        }
        else if ( v54 > v77 )
        {
          v54 = v6;
        }
        if ( v54->y >> 4 >= v66.m128i_i32[1] )
          break;
        --v90;
        *(_QWORD *)v53 = v54;
      }
      --v52;
      v53 -= 40;
    }
  }
LABEL_16:
  v80 = v15;
  for ( i = 1; ; i = v64 - 1 )
  {
    v64 = i;
    if ( i < 0 )
    {
      v37 = HIDWORD(v69);
      if ( SHIDWORD(v72) < SHIDWORD(v69) )
        v37 = HIDWORD(v72);
      HIDWORD(v72) -= v37;
      HIDWORD(v69) -= v37;
      if ( v37 + v16 > v66.m128i_i32[3] )
        v37 = v66.m128i_i32[3] - v16;
      if ( HIDWORD(v70) | HIDWORD(v67) || DWORD1(v70) | DWORD1(v67) || v37 <= 2 )
      {
        v15 = v16;
        if ( v14 )
          v15 = v80;
        while ( 1 )
        {
          v38 = v67;
          if ( (int)v67 - (int)v70 <= 0 )
          {
            if ( (_DWORD)v67 != (_DWORD)v70 )
            {
              v83 = v70;
              v84 = v71;
              v85 = v72;
              v70 = v67;
              v71 = v68;
              v72 = v69;
              v67 = v83;
              v68 = v84;
              v69 = v85;
              continue;
            }
            if ( v14 )
            {
              ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v76)(v15, v89, v14, v7);
              goto LABEL_78;
            }
LABEL_58:
            v15 = v16 + 1;
            goto LABEL_47;
          }
          if ( v78 )
          {
            v49 = v66.m128i_i32[0];
            if ( (int)v70 >= v66.m128i_i32[0] )
              v49 = v70;
            *v13 = v49;
            v50 = v66.m128i_i32[2];
            v51 = v66.m128i_i32[2];
            if ( (int)v67 <= v66.m128i_i32[2] )
              v51 = v67;
            v13[1] = v51;
            if ( v49 >= v51 )
            {
              if ( v14 )
              {
                ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v76)(v15, v89, v14, v7);
                v7 = a6;
                v13 = (__int32 *)v89;
                v65 = (__int32 *)v89;
                v14 = 0;
                v50 = v66.m128i_i32[2];
              }
              v15 = v16 + 1;
              if ( (int)v70 < v66.m128i_i32[0]
                && (int)**((_DWORD **)&v71 + 1) >> 4 < v66.m128i_i32[0]
                && (int)**((_DWORD **)&v68 + 1) >> 4 < v66.m128i_i32[0]
                || (int)v70 >= v50
                && (int)**((_DWORD **)&v71 + 1) >> 4 >= v50
                && (int)**((_DWORD **)&v68 + 1) >> 4 >= v50 )
              {
                goto LABEL_110;
              }
              goto LABEL_47;
            }
          }
          else
          {
            *v13 = v70;
            v13[1] = v38;
          }
          ++v14;
          v13 += 2;
          v65 = v13;
          if ( v14 == 40 )
          {
            ((void (__fastcall *)(_QWORD, _BYTE *, __int64, void *))v76)(v15, v89, 40LL, v7);
LABEL_78:
            v13 = (__int32 *)v89;
            v65 = (__int32 *)v89;
            v14 = 0;
            goto LABEL_58;
          }
LABEL_47:
          v39 = DWORD1(v67) + v67;
          LODWORD(v67) = DWORD1(v67) + v67;
          v40 = HIDWORD(v67) + DWORD2(v67) < 0;
          v41 = HIDWORD(v67) + DWORD2(v67);
          DWORD2(v67) += HIDWORD(v67);
          if ( !v40 )
          {
            DWORD2(v67) = v41 - v68;
            LODWORD(v67) = v39 + 1;
          }
          v42 = DWORD1(v70) + v70;
          LODWORD(v70) = DWORD1(v70) + v70;
          v40 = HIDWORD(v70) + DWORD2(v70) < 0;
          v43 = HIDWORD(v70) + DWORD2(v70);
          DWORD2(v70) += HIDWORD(v70);
          if ( !v40 )
          {
            DWORD2(v70) = v43 - v71;
            LODWORD(v70) = v42 + 1;
          }
          --v37;
          ++v16;
          v7 = a6;
          if ( !v37 )
            goto LABEL_16;
        }
      }
      if ( v14 )
      {
        ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v76)(v15, v89, v14, v7);
        v7 = a6;
        v13 = (__int32 *)v89;
        v65 = (__int32 *)v89;
        v14 = 0;
      }
      v55 = v67;
      if ( (_DWORD)v70 != (_DWORD)v67 )
      {
        v56 = v70;
        if ( (int)v70 <= (int)v67 )
        {
          v56 = v67;
          v55 = v70;
        }
        v86[0] = 0;
        v87 = 0;
        v86[1] = v16;
        v88 = v37 + v16;
        if ( v78 )
        {
          v57 = v66.m128i_i32[0];
          if ( v55 >= v66.m128i_i32[0] )
            v57 = v55;
          v86[0] = v57;
          v58 = v66.m128i_i32[2];
          if ( v56 <= v66.m128i_i32[2] )
            v58 = v56;
          v87 = v58;
          if ( v57 < v58 )
          {
            ((void (__fastcall *)(_DWORD *, __int64, void *))v81)(v86, 1LL, v7);
            v7 = a6;
          }
        }
        else
        {
          v86[0] = v55;
          v87 = v56;
          ((void (__fastcall *)(_DWORD *, __int64, void *))v81)(v86, 1LL, v7);
          v7 = a6;
        }
      }
LABEL_110:
      v16 += v37;
      goto LABEL_16;
    }
    v18 = 5LL * i;
    if ( !*((_DWORD *)&v69 + 10 * i + 1) )
      break;
LABEL_34:
    ;
  }
  while ( --v90 >= 0 && v16 < v66.m128i_i32[3] )
  {
    v19 = (int *)*((_QWORD *)&v68 + v18 + 1);
    v20 = (struct _POINTFIX *)((char *)v19 + *((int *)&v69 + 2 * v18));
    *((_QWORD *)&v68 + v18 + 1) = v20;
    if ( v20 < v6 )
    {
      v46 = v77;
      *((_QWORD *)&v68 + v18 + 1) = v77;
      v20 = v46;
    }
    else if ( v20 > v77 )
    {
      *((_QWORD *)&v68 + v18 + 1) = v6;
      v20 = v82;
    }
    v21 = v20->y;
    v79 = v21;
    *((_DWORD *)&v69 + 2 * v18 + 1) = ((v21 + 15) >> 4) - v16;
    if ( ((v21 + 15) >> 4) - v16 > 0 )
    {
      v22 = v19[1];
      v73 = v22;
      v23 = v21 - v22;
      v24 = *v19;
      v25 = v20->x - *v19;
      v26 = (int *)&v67 + 2 * v18 + 1;
      if ( v25 < 0 )
      {
        v44 = -v25;
        if ( (int)v44 < (int)v23 )
        {
          *v26 = -1;
          v29 = v23 - v44;
          v28 = -1;
          goto LABEL_66;
        }
        v29 = v44 % v23;
        v28 = -(int)(v44 / v23);
        *v26 = v28;
        v45 = (int *)&v67 + 2 * v18 + 3;
        v75 = v45;
        *v45 = v29;
        if ( v29 > 0 )
        {
          *v26 = --v28;
          v29 = v23 - v29;
          *v45 = v29;
          v75 = (int *)&v67 + 2 * v18 + 3;
        }
      }
      else
      {
        if ( v25 < (int)v23 )
        {
          *v26 = 0;
          v27 = (int *)&v67 + 2 * v18 + 3;
          *v27 = v25;
          v28 = 0;
          v29 = v25;
          goto LABEL_28;
        }
        v28 = v25 / v23;
        v29 = v25 % v23;
        *v26 = v25 / v23;
LABEL_66:
        v27 = (int *)&v67 + 2 * v18 + 3;
        *v27 = v29;
LABEL_28:
        v75 = v27;
      }
      *((_DWORD *)&v68 + 2 * v18) = v23;
      *((_DWORD *)&v67 + 2 * v18 + 2) = -1;
      v30 = (v22 & 0xF) == 0;
      v31 = v22 & 0xF;
      v32 = -1;
      if ( !v30 )
      {
        v59 = 16 - v31;
        v32 = -1;
        v60 = v75;
        while ( v59 > 0 )
        {
          v28 = *v26;
          v24 += *v26;
          *((_DWORD *)&v67 + 2 * v18) = v24;
          v29 = *v60;
          v61 = *((_DWORD *)&v67 + 2 * v18 + 2);
          v40 = *v60 + v61 < 0;
          v32 = *v60 + v61;
          *((_DWORD *)&v67 + 2 * v18 + 2) = v32;
          if ( !v40 )
          {
            v32 -= v23;
            *((_DWORD *)&v67 + 2 * v18 + 2) = v32;
            *((_DWORD *)&v67 + 2 * v18) = ++v24;
          }
          --v59;
        }
        v13 = v65;
      }
      v33 = v24 & 0xF;
      if ( (v24 & 0xF) != 0 )
      {
        v24 += 15;
        v32 -= v23 * (16 - v33);
      }
      v34 = v24 >> 4;
      *((_DWORD *)&v67 + 2 * v18) = v34;
      v35 = v32 >> 4;
      *((_DWORD *)&v67 + 2 * v18 + 2) = v35;
      v36 = (v73 + 15) >> 4;
      if ( v36 < v66.m128i_i32[1] )
      {
        v73 = v66.m128i_i32[1] - v36;
        v13 = v65;
        if ( v79 >> 4 >= v66.m128i_i32[1] || v28 || v29 )
        {
          v62 = v28 * (v66.m128i_i32[1] - v36) + v34;
          *((_DWORD *)&v67 + 2 * v18) = v62;
          v63 = v35 + v29 * (__int64)v73;
          if ( v63 < 0 )
          {
            *((_DWORD *)&v67 + 2 * v18 + 2) = v63;
          }
          else if ( (v63 & 0xFFFFFFFF80000000uLL) != 0 )
          {
            *((_DWORD *)&v67 + 2 * v18 + 2) = v63 % (unsigned __int64)v23 - v23;
            *((_DWORD *)&v67 + 2 * v18) = v62 + v63 / (unsigned __int64)v23 + 1;
          }
          else
          {
            *((_DWORD *)&v67 + 2 * v18) = v62 + (int)v63 / (int)v23 + 1;
            *((_DWORD *)&v67 + 2 * v18 + 2) = (int)v63 % (int)v23 - v23;
          }
        }
      }
      v7 = a6;
      goto LABEL_34;
    }
  }
  if ( v14 )
    ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v76)(v15, v89, v14, v7);
  return 1LL;
}
