/*
 * XREFs of ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C013C354
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C013BEA4 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bLines(
        struct _BMINFO *a1,
        struct _POINTFIX *a2,
        struct _POINTFIX *a3,
        struct _RUN *a4,
        unsigned int a5,
        struct _LINESTATE *a6,
        struct _RECTL *a7,
        void (**a8)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *),
        unsigned int a9,
        unsigned int *a10,
        int a11,
        struct _W32KCDD_ENG_CALLBACKS *a12)
{
  struct _POINTFIX *v12; // rdi
  unsigned int v13; // r13d
  signed int v14; // edx
  FIX x; // r12d
  FIX v16; // ecx
  int y; // esi
  FIX v18; // eax
  unsigned int v19; // r14d
  FIX v20; // r9d
  FIX v21; // r8d
  unsigned int v22; // r12d
  unsigned int v23; // esi
  int v24; // r8d
  int v25; // r9d
  unsigned __int64 v26; // rdx
  signed __int64 v27; // rax
  int v28; // r11d
  int v29; // r10d
  signed int v30; // edi
  signed int v31; // r13d
  unsigned int v32; // r10d
  unsigned __int64 v33; // r11
  int v34; // edx
  signed int v35; // r8d
  int v36; // r9d
  unsigned int *v37; // rdx
  int v38; // ecx
  int *v39; // r8
  int v40; // edi
  unsigned __int64 v41; // r13
  int v42; // edx
  int v43; // r9d
  int v44; // eax
  char *v45; // rcx
  unsigned int v46; // r8d
  unsigned int v48; // eax
  FIX v49; // eax
  char *v50; // r8
  char *v51; // rcx
  __int64 v52; // r13
  __int64 v53; // r9
  unsigned int v54; // ecx
  unsigned int v55; // edx
  int v56; // r8d
  int v57; // r8d
  int v58; // ecx
  int v59; // r8d
  unsigned int v60; // r9d
  unsigned int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // r9
  __int64 v64; // rdx
  int v65; // eax
  int v66; // eax
  int *v67; // rdx
  int *i; // rax
  int v69; // ecx
  unsigned int v70; // ecx
  unsigned int v71; // eax
  unsigned int v72; // edx
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // r8
  int v77; // r8d
  int v78; // eax
  unsigned __int64 v79; // rtt
  int v80; // [rsp+20h] [rbp-2F8h]
  unsigned int v81; // [rsp+24h] [rbp-2F4h]
  unsigned int v82; // [rsp+28h] [rbp-2F0h]
  unsigned int v83; // [rsp+2Ch] [rbp-2ECh]
  unsigned int v84; // [rsp+34h] [rbp-2E4h]
  __int64 v85; // [rsp+38h] [rbp-2E0h]
  int v86; // [rsp+54h] [rbp-2C4h]
  int v87; // [rsp+58h] [rbp-2C0h]
  int v88; // [rsp+5Ch] [rbp-2BCh]
  int v89; // [rsp+64h] [rbp-2B4h]
  struct _POINTFIX *v91; // [rsp+70h] [rbp-2A8h]
  __int64 v93; // [rsp+90h] [rbp-288h]
  void (*v94)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // [rsp+A0h] [rbp-278h]
  struct _POINTFIX *v95; // [rsp+100h] [rbp-218h]
  _DWORD v96[4]; // [rsp+110h] [rbp-208h] BYREF
  unsigned int *v97; // [rsp+120h] [rbp-1F8h]
  int v98; // [rsp+128h] [rbp-1F0h]
  _BYTE v99[400]; // [rsp+12Ch] [rbp-1ECh] BYREF
  char v100; // [rsp+2BCh] [rbp-5Ch] BYREF
  struct _W32KCDD_ENG_CALLBACKS *v101; // [rsp+2C0h] [rbp-58h]
  unsigned int *v102; // [rsp+2C8h] [rbp-50h]

  v91 = a3;
  v12 = a2;
  if ( a1 <= (struct _BMINFO *)&off_1C030C6C0 )
  {
LABEL_2:
    v95 = &a3[a5];
    v81 = 0;
    v87 = 0;
    v88 = 0;
    v85 = 0LL;
    v93 = 0LL;
    v13 = 0;
    v83 = 0;
    v84 = 0;
    v14 = 0;
    v82 = 0;
    v101 = a12;
    v102 = a10;
    while ( 1 )
    {
      x = v12->x;
      v16 = a3->x;
      y = v12->y;
      v18 = a3->y;
      v19 = a9 | 0x20;
      if ( a3->x >= v12->x )
        v19 = a9;
      v20 = a3->y;
      if ( v16 >= x )
        v20 = v12->y;
      v21 = a3->x;
      if ( v16 >= x )
      {
        v21 = v12->x;
        y = v18;
        x = v16;
      }
      if ( y < v20 )
      {
        v20 = -v20;
        y = -y;
        v19 |= 8u;
      }
      v22 = x - v21;
      if ( (v22 & 0x80000000) == 0 )
      {
        v23 = y - v20;
        if ( (v23 & 0x80000000) == 0 )
          break;
      }
LABEL_113:
      v46 = v81;
      while ( (v19 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
LABEL_73:
        v80 = v19 & 0x20;
        if ( (v19 & 0x20) != 0 )
        {
          v32 = v14 - a4->iStop;
          v30 = v14 - a4->iStart;
        }
        else
        {
          v32 = v13 + a4->iStart;
          v30 = v13 + a4->iStop;
        }
        ++a4;
        v23 = v46;
        *((_DWORD *)a6 + 8) = *((_DWORD *)a6 + 9);
        v74 = v85 + v46 * (unsigned __int64)v32;
        if ( v74 >= 0xFFFFFFFF )
          v33 = (v85 + v46 * (unsigned __int64)v32) / v22;
        else
          LODWORD(v33) = (unsigned int)v74 / v22;
LABEL_24:
        if ( (v19 & 0x400) != 0 )
        {
          v50 = (char *)a6 + 92;
          v51 = (char *)a6 + 88;
          if ( (v19 & 5) == 0 )
            v51 = (char *)a6 + 92;
          v52 = *(unsigned int *)v51;
          if ( (v19 & 5) == 0 )
            v50 = (char *)a6 + 88;
          v53 = *(unsigned int *)v50;
          if ( (_DWORD)v53 == (_DWORD)v52 || (unsigned __int64)v23 * v52 <= (unsigned __int64)v22 * v53 )
          {
            *((_QWORD *)a6 + 1) = (unsigned int)v53;
            *((_DWORD *)a6 + 4) = v53;
            v54 = v83;
            v55 = v82 - v83;
            LODWORD(v52) = v53;
            if ( v80 )
            {
              v57 = v82 - v32 + 1;
              goto LABEL_50;
            }
            v56 = v32;
          }
          else
          {
            v75 = v85 + v23 * (unsigned __int64)v82;
            if ( v75 >= 0xFFFFFFFF )
              v76 = (v85 + v23 * (unsigned __int64)v82) / v22;
            else
              LODWORD(v76) = (unsigned int)v75 / v22;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v52;
            *((_DWORD *)a6 + 4) = v52;
            v54 = v84;
            v55 = v76 - v84;
            if ( v80 )
            {
              v57 = v76 - v33 + 1;
              goto LABEL_50;
            }
            v56 = v33;
          }
          v57 = v56 - v54;
LABEL_50:
          v58 = *((_DWORD *)a6 + 8);
          v59 = v58 + v52 * v57;
          v60 = v58 + v52 * (v55 + 1);
          *((_DWORD *)a6 + 8) = v60;
          v61 = *((_DWORD *)a6 + 7);
          if ( v59 >= v61 )
            v59 %= v61;
          if ( v60 >= v61 )
            *((_DWORD *)a6 + 8) = v60 % v61;
          v62 = 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
          if ( v80 )
          {
            v77 = -v59;
            v63 = *((_QWORD *)a6 + 8);
            v64 = v63 + v62;
            v78 = v77 + v61;
            if ( v77 >= 0 )
              v78 = v77;
            v59 = v78;
            v65 = *((_DWORD *)a6 + 21) == 0;
          }
          else
          {
            v63 = *((_QWORD *)a6 + 9);
            v64 = v63 + v62;
            v65 = *((_DWORD *)a6 + 21);
          }
          *((_DWORD *)a6 + 20) = v65;
          *((_QWORD *)a6 + 5) = v63;
          *((_QWORD *)a6 + 6) = v64;
          v66 = *((_DWORD *)a6 + 6);
          if ( v59 >= v66 )
          {
            v59 -= v66;
            if ( (*((_DWORD *)a6 + 25) & 1) != 0 )
              *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
          }
          v67 = (int *)*((_QWORD *)a6 + 5);
          *((_QWORD *)a6 + 7) = v67;
          for ( i = v67; ; *((_QWORD *)a6 + 7) = i )
          {
            v69 = *i;
            if ( v59 < *i )
              break;
            v59 -= v69;
            ++i;
          }
          *((_DWORD *)a6 + 5) = v69 - v59;
          if ( (((_BYTE)i - (_BYTE)v67) & 4) != 0 )
            *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
        }
        v34 = v32 + v87;
        v35 = v33 + v88;
        if ( (v19 & 5) == 0 )
        {
          v35 = v32 + v87;
          v34 = v33 + v88;
        }
        v36 = -v34;
        if ( (v19 & 8) == 0 )
          v36 = v34;
        if ( 2 * v23 > v22 )
        {
          v19 |= 2u;
          v93 = v85 - v22;
          v23 = v22 - v23;
          LODWORD(v33) = v32 - v33;
        }
        v96[1] = v19;
        v94 = a8[v19 & 3];
        v98 = v35 & *((_DWORD *)a1 + 7);
        v96[2] = a11;
        v37 = &a10[v36 * a11];
        v38 = *((_DWORD *)a1 + 6);
        if ( v38 < 0 )
          v97 = (unsigned int *)((char *)v37 + 3 * v35);
        else
          v97 = &v37[(__int64)v35 >> v38];
        v39 = (int *)v99;
        v40 = v30 - v32 + 1;
        LODWORD(v41) = 0;
        v42 = 0;
        v89 = 0;
        v86 = 0;
        if ( v23 )
        {
          v79 = v93 + v22 * (unsigned __int64)(unsigned int)(v33 + 1);
          v41 = v79 % v23;
          v43 = v79 / v23 - v32 + 1;
          v86 = v22 % v23;
          v42 = v22 / v23;
          v89 = v22 / v23;
        }
        else
        {
          v43 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v44 = v40;
          v40 -= v43;
          v45 = (char *)(v39 + 1);
          if ( v40 <= 0 )
            break;
          *v39++ = v43;
          if ( v45 == &v100 )
          {
            v96[0] = (v45 - v99) >> 2;
            ((void (__fastcall *)(_DWORD *, struct _BMINFO *, struct _LINESTATE *))v94)(v96, a1, a6);
            v39 = (int *)v99;
            v42 = v89;
          }
          v43 = v42;
          LODWORD(v41) = v41 + v86;
          if ( (unsigned int)v41 >= v23 )
          {
            LODWORD(v41) = v41 - v23;
            v43 = v42 + 1;
          }
        }
        *v39 = v44;
        v96[0] = (v45 - v99) >> 2;
        ((void (__fastcall *)(_DWORD *, struct _BMINFO *, struct _LINESTATE *))v94)(v96, a1, a6);
        v14 = v82;
        v13 = v83;
        v46 = v81;
      }
      v12 = v91;
      a3 = v91 + 1;
      v91 = a3;
      if ( a3 >= v95 )
        return 1LL;
    }
    if ( v23 >= v22 )
    {
      if ( v23 == v22 )
      {
        v19 |= 0x10u;
      }
      else
      {
        v48 = v22;
        v22 = v23;
        v23 = v48;
        v49 = v21;
        v21 = v20;
        v20 = v49;
        v19 |= 5u;
      }
    }
    v19 |= gaflRound[(v19 >> 2) & 7];
    v87 = v21 >> 4;
    v88 = v20 >> 4;
    v24 = v21 & 0xF;
    v25 = v20 & 0xF;
    v26 = (int)v23 * (unsigned __int64)(unsigned int)v24;
    v27 = (int)v22 * (unsigned __int64)(unsigned int)(v25 + 8) - v26 - 1;
    if ( (v19 & 0x8000) == 0 )
      v27 = (int)v22 * (unsigned __int64)(unsigned int)(v25 + 8) - v26;
    v85 = v27 >> 4;
    v93 = ~(v27 >> 4);
    v28 = ((_BYTE)v23 + (_BYTE)v25) & 0xF;
    v29 = ((_BYTE)v22 + (_BYTE)v24) & 0xF;
    v30 = (v22 + v24) >> 4;
    v80 = v19 & 0x20;
    if ( (v19 & 0x20) == 0 )
    {
      v31 = --v30;
      if ( (((_BYTE)v22 + (_BYTE)v24) & 0xF) != 0 )
      {
        if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 )
        {
          if ( (int)abs32(v28 - 8) <= v29 )
            v30 = (v22 + v24) >> 4;
        }
        else
        {
          v30 = (v22 + v24) >> 4;
          if ( v29 - (unsigned int)((v19 & 0x80) != 0) + 8 < 0x10 )
            v30 = v31;
        }
      }
      if ( (v19 & 0x90) != 0x90 )
        goto LABEL_19;
      if ( (((_BYTE)v22 + (_BYTE)v24) & 0xF) != 0 && v28 == v29 + 8 )
        --v30;
      if ( v24 && v25 == v24 + 8 )
      {
        v32 = 0;
      }
      else
      {
LABEL_19:
        v32 = 0;
        if ( v24 )
        {
          if ( v25 )
            v32 = (int)abs32(v25 - 8) <= v24;
          else
            LOBYTE(v32) = v24 - (unsigned int)((v19 & 0x80) != 0) + 8 >= 0x10;
        }
      }
      LODWORD(v33) = 0;
      if ( v85 >= 0 )
        LODWORD(v33) = (unsigned int)v85 >= v22 - (v23 & -v32);
      goto LABEL_22;
    }
    if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 )
    {
      if ( v29 + abs32(v28 - 8) > 0x10 )
        ++v30;
    }
    else
    {
      ++v30;
      if ( v29 - (unsigned int)((v19 & 0x80) != 0) + 8 < 0x10 )
        v30 = (v22 + v24) >> 4;
    }
    if ( (v19 & 0x90) == 0x10 )
    {
      if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 && v29 == v28 + 8 )
        ++v30;
      if ( v25 && v24 == v25 + 8 )
        goto LABEL_95;
    }
    v32 = 1;
    v70 = 0;
    if ( !v25 )
    {
      v71 = v24 - ((v19 & 0x80) != 0) + 8;
      v32 = 2 - (v71 < 0x10);
      v70 = v23;
      if ( v71 < 0x10 )
        v70 = 0;
      goto LABEL_68;
    }
    if ( v24 + abs32(v25 - 8) > 0x10 )
    {
LABEL_95:
      v70 = v23;
      v32 = 2;
    }
LABEL_68:
    LODWORD(v33) = 0;
    v72 = v85 + v70;
    v73 = (v85 + v70) >> 32;
    if ( v73 >= 0 )
    {
      if ( v73 > 0 || v72 >= 2 * v22 - v23 )
        LODWORD(v33) = 2;
      else
        LODWORD(v33) = v72 >= v22 - v23;
    }
LABEL_22:
    v84 = v33;
    v13 = v32;
    v83 = v32;
    v14 = v30;
    v82 = v30;
    if ( v30 >= (int)v32 )
    {
      if ( (v19 & 0x40) != 0 )
      {
        v46 = v23;
        v81 = v23;
        goto LABEL_73;
      }
      goto LABEL_24;
    }
    goto LABEL_113;
  }
  if ( !bUMPDSecurityGateEx((__int64)a1, (__int64)a2) )
  {
    a3 = v91;
    goto LABEL_2;
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\engline.cxx:%d:bLines:Invalid surface format.\n", 416);
  return 0LL;
}
