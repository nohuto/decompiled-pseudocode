/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C013F558
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C013F3C4 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
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
  int v22; // r12d
  unsigned int v23; // r10d
  int v24; // r9d
  int v25; // eax
  int v26; // r11d
  int v27; // edx
  int v28; // ecx
  int v29; // r9d
  int v30; // ecx
  int v31; // eax
  int v32; // edi
  __int32 v33; // edx
  int v34; // r8d
  bool v35; // sf
  int v36; // edx
  int v37; // r8d
  int v38; // edx
  struct _POINTFIX *v39; // rax
  unsigned int v40; // eax
  __int128 v41; // xmm3
  __int128 v42; // xmm4
  __int64 v43; // xmm2_8
  FIX v44; // ecx
  FIX *p_y; // rax
  __int32 v46; // r12d
  __int64 v47; // r9
  int v48; // edx
  __int32 v49; // r8d
  int v50; // r9d
  __int32 v51; // ecx
  __int32 v52; // eax
  __int64 v53; // r8
  char *v54; // rdx
  struct _POINTFIX *v55; // rcx
  int j; // eax
  __int32 v57; // edi
  int v58; // r11d
  __int64 v59; // r9
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  int v62; // ecx
  int v63; // eax
  int v64; // [rsp+30h] [rbp-268h]
  __m128i v65; // [rsp+50h] [rbp-248h]
  __int128 v66; // [rsp+60h] [rbp-238h]
  __int128 v67; // [rsp+70h] [rbp-228h]
  __int64 v68; // [rsp+80h] [rbp-218h]
  __int128 v69; // [rsp+88h] [rbp-210h]
  __int128 v70; // [rsp+98h] [rbp-200h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-1F0h]
  __int32 *v72; // [rsp+B0h] [rbp-1E8h]
  struct _POINTFIX *v73; // [rsp+B8h] [rbp-1E0h]
  void (*v74)(int, struct _ROW *, unsigned int, void *); // [rsp+C0h] [rbp-1D8h]
  struct _POINTFIX *v75; // [rsp+C8h] [rbp-1D0h]
  __m128i *v76; // [rsp+D0h] [rbp-1C8h]
  int v77; // [rsp+D8h] [rbp-1C0h]
  unsigned int v78; // [rsp+DCh] [rbp-1BCh]
  void (*v79)(struct _RECTL *, unsigned int, void *); // [rsp+E0h] [rbp-1B8h]
  struct _POINTFIX *v80; // [rsp+F0h] [rbp-1A8h]
  _DWORD v81[2]; // [rsp+F8h] [rbp-1A0h] BYREF
  int v82; // [rsp+100h] [rbp-198h]
  int v83; // [rsp+104h] [rbp-194h]
  _BYTE v84[320]; // [rsp+110h] [rbp-188h] BYREF
  int v85; // [rsp+2A0h] [rbp+8h]

  v85 = a1;
  v6 = a2;
  v73 = a2;
  v80 = a2;
  v76 = a3;
  v79 = a4;
  v74 = a5;
  v7 = a6;
  v8 = a2;
  v75 = &a2[a1 - 1];
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
        v44 = a2[1].y;
        p_y = &a2->y;
        if ( v44 > a2->y )
        {
          v8 = a2;
          do
          {
            if ( v44 > y )
              break;
            if ( !--v9 )
              goto LABEL_13;
            p_y += 2;
            v44 = p_y[2];
          }
          while ( v44 >= *p_y );
          return 0LL;
        }
      }
      if ( a2[1].y < y )
        v8 = a2 + 1;
      break;
    }
  }
LABEL_13:
  v71 = 4294967288LL;
  v68 = 8LL;
  *((_QWORD *)&v70 + 1) = v8;
  *((_QWORD *)&v67 + 1) = v8;
  v65 = 0uLL;
  v13 = (__int32 *)v84;
  v72 = (__int32 *)v84;
  v14 = 0;
  v15 = 0;
  v16 = (v8->y + 15) >> 4;
  if ( v76 )
  {
    v65 = *v76;
    if ( (int)HIDWORD(v76->m128i_i64[0]) > v16 )
      v16 = HIDWORD(v76->m128i_i64[0]);
    if ( v16 >= _mm_srli_si128(*v76, 8).m128i_i32[1] )
      return 1LL;
  }
  else
  {
    v65.m128i_i32[1] = 0x80000000;
    v65.m128i_i32[3] = 0x7FFFFFFF;
  }
  if ( v76 )
  {
    v53 = 1LL;
    v54 = (char *)&v70 + 8;
    while ( v53 >= 0 )
    {
      while ( 1 )
      {
        if ( !v85 )
          return 1LL;
        v55 = (struct _POINTFIX *)(*(_QWORD *)v54 + *((int *)v54 + 2));
        if ( v55 < v6 )
        {
          v55 = v75;
        }
        else if ( v55 > v75 )
        {
          v55 = v6;
        }
        if ( v55->y >> 4 >= v65.m128i_i32[1] )
          break;
        --v85;
        *(_QWORD *)v54 = v55;
      }
      --v53;
      v54 -= 40;
    }
  }
LABEL_16:
  v78 = v15;
  for ( i = 1; ; i = v64 - 1 )
  {
    v64 = i;
    if ( i < 0 )
    {
      v32 = HIDWORD(v68);
      if ( SHIDWORD(v71) < SHIDWORD(v68) )
        v32 = HIDWORD(v71);
      HIDWORD(v71) -= v32;
      HIDWORD(v68) -= v32;
      if ( v32 + v16 > v65.m128i_i32[3] )
        v32 = v65.m128i_i32[3] - v16;
      if ( HIDWORD(v69) | HIDWORD(v66) || DWORD1(v69) | DWORD1(v66) || v32 <= 2 )
      {
        v15 = v16;
        if ( v14 )
          v15 = v78;
        while ( 1 )
        {
          v33 = v66;
          if ( (int)v66 - (int)v69 <= 0 )
          {
            if ( (_DWORD)v66 != (_DWORD)v69 )
            {
              v41 = v69;
              v42 = v70;
              v43 = v71;
              v69 = v66;
              v70 = v67;
              v71 = v68;
              v66 = v41;
              v67 = v42;
              v68 = v43;
              continue;
            }
            if ( v14 )
            {
              ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v74)(v15, v84, v14, v7);
              goto LABEL_78;
            }
LABEL_58:
            v15 = v16 + 1;
            goto LABEL_47;
          }
          if ( v76 )
          {
            v50 = v65.m128i_i32[0];
            v51 = v65.m128i_i32[0];
            if ( (int)v69 >= v65.m128i_i32[0] )
              v51 = v69;
            *v13 = v51;
            v52 = v65.m128i_i32[2];
            if ( (int)v66 <= v65.m128i_i32[2] )
              v52 = v66;
            v13[1] = v52;
            if ( v51 >= v52 )
            {
              if ( v14 )
              {
                ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v74)(v15, v84, v14, v7);
                v50 = v65.m128i_i32[0];
                v7 = a6;
                v13 = (__int32 *)v84;
                v72 = (__int32 *)v84;
                v14 = 0;
              }
              v15 = v16 + 1;
              if ( (int)v69 < v50 && (int)**((_DWORD **)&v70 + 1) >> 4 < v50 && (int)**((_DWORD **)&v67 + 1) >> 4 < v50
                || (int)v69 >= v65.m128i_i32[2]
                && (int)**((_DWORD **)&v70 + 1) >> 4 >= v65.m128i_i32[2]
                && (int)**((_DWORD **)&v67 + 1) >> 4 >= v65.m128i_i32[2] )
              {
                goto LABEL_87;
              }
              goto LABEL_47;
            }
          }
          else
          {
            *v13 = v69;
            v13[1] = v33;
          }
          ++v14;
          v13 += 2;
          v72 = v13;
          if ( v14 == 40 )
          {
            ((void (__fastcall *)(_QWORD, _BYTE *, __int64, void *))v74)(v15, v84, 40LL, v7);
LABEL_78:
            v13 = (__int32 *)v84;
            v72 = (__int32 *)v84;
            v14 = 0;
            goto LABEL_58;
          }
LABEL_47:
          v34 = DWORD1(v66) + v66;
          LODWORD(v66) = DWORD1(v66) + v66;
          v35 = HIDWORD(v66) + DWORD2(v66) < 0;
          v36 = HIDWORD(v66) + DWORD2(v66);
          DWORD2(v66) += HIDWORD(v66);
          if ( !v35 )
          {
            DWORD2(v66) = v36 - v67;
            LODWORD(v66) = v34 + 1;
          }
          v37 = DWORD1(v69) + v69;
          LODWORD(v69) = DWORD1(v69) + v69;
          v35 = HIDWORD(v69) + DWORD2(v69) < 0;
          v38 = HIDWORD(v69) + DWORD2(v69);
          DWORD2(v69) += HIDWORD(v69);
          if ( !v35 )
          {
            DWORD2(v69) = v38 - v70;
            LODWORD(v69) = v37 + 1;
          }
          --v32;
          ++v16;
          v7 = a6;
          if ( !v32 )
            goto LABEL_16;
        }
      }
      if ( v14 )
      {
        ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v74)(v15, v84, v14, v7);
        v46 = v65.m128i_i32[2];
        v47 = v65.m128i_u32[0];
        v7 = a6;
        v13 = (__int32 *)v84;
        v72 = (__int32 *)v84;
        v14 = 0;
      }
      else
      {
        v46 = v65.m128i_i32[2];
        v47 = v65.m128i_u32[0];
      }
      v48 = v66;
      if ( (_DWORD)v69 != (_DWORD)v66 )
      {
        v49 = v69;
        if ( (int)v69 <= (int)v66 )
        {
          v49 = v66;
          v48 = v69;
        }
        v81[1] = v16;
        v83 = v32 + v16;
        if ( v76 )
        {
          v62 = v47;
          if ( v48 >= (int)v47 )
            v62 = v48;
          v81[0] = v62;
          v63 = v46;
          if ( v49 <= v46 )
            v63 = v49;
          v82 = v63;
          if ( v62 < v63 )
          {
            ((void (__fastcall *)(_DWORD *, __int64, void *))v79)(v81, 1LL, v7);
            v7 = a6;
          }
        }
        else
        {
          v81[0] = v48;
          v82 = v49;
          ((void (__fastcall *)(_DWORD *, __int64, void *, __int64))v79)(v81, 1LL, v7, v47);
          v7 = a6;
        }
      }
LABEL_87:
      v16 += v32;
      goto LABEL_16;
    }
    v18 = 5LL * i;
    if ( !*((_DWORD *)&v68 + 10 * i + 1) )
      break;
LABEL_34:
    ;
  }
  while ( --v85 >= 0 && v16 < v65.m128i_i32[3] )
  {
    v19 = (int *)*((_QWORD *)&v67 + v18 + 1);
    v20 = (struct _POINTFIX *)((char *)v19 + *((int *)&v68 + 2 * v18));
    *((_QWORD *)&v67 + v18 + 1) = v20;
    if ( v20 < v6 )
    {
      v39 = v75;
      *((_QWORD *)&v67 + v18 + 1) = v75;
      v20 = v39;
    }
    else if ( v20 > v75 )
    {
      *((_QWORD *)&v67 + v18 + 1) = v6;
      v20 = v80;
    }
    v21 = v20->y;
    v77 = v21;
    *((_DWORD *)&v68 + 2 * v18 + 1) = ((v21 + 15) >> 4) - v16;
    if ( ((v21 + 15) >> 4) - v16 > 0 )
    {
      v22 = v19[1];
      v23 = v21 - v22;
      v24 = *v19;
      v25 = v20->x - *v19;
      if ( v25 < 0 )
      {
        v40 = *v19 - v20->x;
        if ( (int)v40 < (int)v23 )
        {
          v26 = -1;
          *((_DWORD *)&v66 + 2 * v18 + 1) = -1;
          v27 = v23 - v40;
          goto LABEL_66;
        }
        v27 = v40 % v23;
        v26 = -(int)(v40 / v23);
        *((_DWORD *)&v66 + 2 * v18 + 1) = v26;
        *((_DWORD *)&v66 + 2 * v18 + 3) = v40 % v23;
        if ( (int)(v40 % v23) > 0 )
        {
          *((_DWORD *)&v66 + 2 * v18 + 1) = --v26;
          v25 = v23 - v27;
LABEL_28:
          v27 = v25;
          *((_DWORD *)&v66 + 2 * v18 + 3) = v25;
        }
      }
      else
      {
        if ( v25 < (int)v23 )
        {
          v26 = 0;
          *((_DWORD *)&v66 + 2 * v18 + 1) = 0;
          goto LABEL_28;
        }
        v27 = v25 % v23;
        v26 = v25 / v23;
        *((_DWORD *)&v66 + 2 * v18 + 1) = v25 / v23;
LABEL_66:
        *((_DWORD *)&v66 + 2 * v18 + 3) = v27;
      }
      *((_DWORD *)&v67 + 2 * v18) = v23;
      v28 = -1;
      *((_DWORD *)&v66 + 2 * v18 + 2) = -1;
      *((_DWORD *)&v66 + 2 * v18) = v24;
      if ( (v22 & 0xF) != 0 )
      {
        for ( j = 16 - (v22 & 0xF); j > 0; --j )
        {
          v24 += v26;
          *((_DWORD *)&v66 + 2 * v18) = v24;
          v35 = v27 + v28 < 0;
          v28 += v27;
          *((_DWORD *)&v66 + 2 * v18 + 2) = v28;
          if ( !v35 )
          {
            v28 -= v23;
            *((_DWORD *)&v66 + 2 * v18 + 2) = v28;
            *((_DWORD *)&v66 + 2 * v18) = ++v24;
          }
        }
      }
      if ( (v24 & 0xF) != 0 )
      {
        v28 -= v23 * (16 - (v24 & 0xF));
        *((_DWORD *)&v66 + 2 * v18 + 2) = v28;
        v24 += 15;
        *((_DWORD *)&v66 + 2 * v18) = v24;
      }
      v29 = v24 >> 4;
      *((_DWORD *)&v66 + 2 * v18) = v29;
      v30 = v28 >> 4;
      *((_DWORD *)&v66 + 2 * v18 + 2) = v30;
      v31 = (v22 + 15) >> 4;
      if ( v31 < v65.m128i_i32[1] )
      {
        v57 = v65.m128i_i32[1] - v31;
        if ( v77 >> 4 >= v65.m128i_i32[1] || v26 || v27 )
        {
          v58 = v29 + v57 * v26;
          *((_DWORD *)&v66 + 2 * v18) = v58;
          v59 = v30 + v27 * (__int64)v57;
          if ( v59 < 0 )
          {
            *((_DWORD *)&v66 + 2 * v18 + 2) = v59;
          }
          else
          {
            if ( (v59 & 0xFFFFFFFF80000000uLL) != 0 )
            {
              v60 = v59 / (unsigned __int64)v23;
              v61 = v59 % (unsigned __int64)v23;
            }
            else
            {
              LODWORD(v61) = (int)v59 % (int)v23;
              LODWORD(v60) = (int)v59 / (int)v23;
            }
            *((_DWORD *)&v66 + 2 * v18) = v58 + 1 + v60;
            *((_DWORD *)&v66 + 2 * v18 + 2) = v61 - v23;
          }
        }
      }
      v7 = a6;
      goto LABEL_34;
    }
  }
  if ( v14 )
    ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v74)(v15, v84, v14, v7);
  return 1LL;
}
