/*
 * XREFs of ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C014D4B4
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C014CFE4 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  struct _POINTFIX *v12; // r15
  struct _POINTFIX *v13; // rdi
  signed int v14; // r13d
  FIX x; // r12d
  FIX v16; // ecx
  int y; // r14d
  FIX v18; // eax
  unsigned int v19; // r15d
  int v20; // r9d
  int v21; // r8d
  unsigned int v22; // r12d
  unsigned int v23; // r14d
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
  unsigned int v34; // ecx
  signed int v35; // r8d
  int v36; // edx
  int v37; // r9d
  unsigned int *v38; // rdx
  int v39; // ecx
  _QWORD *v40; // r8
  int v41; // edi
  unsigned __int64 v42; // r13
  int v43; // edx
  __int64 v44; // r9
  int v45; // ecx
  int v46; // eax
  char *v48; // r8
  char *v49; // rcx
  __int64 v50; // r13
  __int64 v51; // r9
  int v52; // ecx
  int v53; // edx
  int v54; // r8d
  int v55; // r8d
  int v56; // ecx
  int v57; // r8d
  unsigned int v58; // ecx
  unsigned int v59; // r9d
  int v60; // r13d
  int *v61; // rdx
  int v62; // r9d
  int v63; // eax
  int v64; // eax
  unsigned int v65; // eax
  int v66; // eax
  unsigned int v67; // r8d
  unsigned __int64 v68; // rax
  unsigned int v69; // ecx
  unsigned int v70; // eax
  unsigned int v71; // edx
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r8
  int v75; // r8d
  int v76; // eax
  unsigned __int64 v77; // rtt
  int v78; // eax
  __int64 v79; // [rsp+20h] [rbp-2E8h]
  __int64 v80; // [rsp+28h] [rbp-2E0h]
  int v81; // [rsp+30h] [rbp-2D8h]
  int v82; // [rsp+30h] [rbp-2D8h]
  __int64 v83; // [rsp+38h] [rbp-2D0h]
  unsigned int v84; // [rsp+50h] [rbp-2B8h]
  unsigned int v85; // [rsp+54h] [rbp-2B4h]
  int v86; // [rsp+58h] [rbp-2B0h]
  int v87; // [rsp+5Ch] [rbp-2ACh]
  int v88; // [rsp+60h] [rbp-2A8h]
  struct _POINTFIX *v91; // [rsp+80h] [rbp-288h]
  __int64 v92; // [rsp+90h] [rbp-278h]
  void (*v93)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // [rsp+A0h] [rbp-268h]
  struct _POINTFIX *v94; // [rsp+F8h] [rbp-210h]
  _QWORD v95[56]; // [rsp+100h] [rbp-208h] BYREF

  v12 = a3;
  v91 = a3;
  v13 = a2;
  if ( a1 <= (struct _BMINFO *)&off_1C031F5E0 || !bUMPDSecurityGateEx((__int64)a1, (__int64)a2, (__int64)a3) )
  {
    v94 = &v12[a5];
    v85 = 0;
    v87 = 0;
    v88 = 0;
    v83 = 0LL;
    v92 = 0LL;
    HIDWORD(v79) = 0;
    v86 = 0;
    v14 = 0;
    HIDWORD(v80) = 0;
    memset(v95, 0, 0x1B0uLL);
    v95[54] = a12;
    v95[55] = a10;
    while ( 1 )
    {
      x = v13->x;
      v16 = v12->x;
      y = v13->y;
      v18 = v12->y;
      v19 = a9 | 0x20;
      if ( v16 >= v13->x )
        v19 = a9;
      v20 = v18;
      if ( v16 >= x )
        v20 = v13->y;
      v21 = v16;
      if ( v16 >= x )
      {
        v21 = v13->x;
        y = v18;
        x = v16;
      }
      LODWORD(v80) = v19;
      if ( y < v20 )
      {
        v20 = -v20;
        y = -y;
        v19 |= 8u;
        LODWORD(v80) = v19;
      }
      v22 = x - v21;
      if ( (v22 & 0x80000000) != 0 || (v23 = y - v20, (v23 & 0x80000000) != 0) )
      {
        v34 = HIDWORD(v79);
        goto LABEL_37;
      }
      if ( v23 >= v22 )
      {
        if ( v23 == v22 )
        {
          v19 |= 0x10u;
        }
        else
        {
          v65 = v22;
          v22 = v23;
          v23 = v65;
          v66 = v21;
          v21 = v20;
          v20 = v66;
          v19 |= 5u;
        }
      }
      v19 |= gaflRound[(v19 >> 2) & 7];
      LODWORD(v80) = v19;
      v87 = v21 >> 4;
      v88 = v20 >> 4;
      v24 = v21 & 0xF;
      v25 = v20 & 0xF;
      v26 = (int)v23 * (unsigned __int64)(unsigned int)v24;
      v27 = (int)v22 * (unsigned __int64)(unsigned int)(v25 + 8) - v26 - 1;
      if ( (v19 & 0x8000) == 0 )
        v27 = (int)v22 * (unsigned __int64)(unsigned int)(v25 + 8) - v26;
      v83 = v27 >> 4;
      v92 = ~(v27 >> 4);
      v28 = ((_BYTE)v23 + (_BYTE)v25) & 0xF;
      v29 = ((_BYTE)v22 + (_BYTE)v24) & 0xF;
      v30 = (v22 + v24) >> 4;
      LODWORD(v79) = v19 & 0x20;
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
        if ( v83 >= 0 )
          LODWORD(v33) = (unsigned int)v83 >= v22 - (v23 & -v32);
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
          goto LABEL_94;
      }
      v32 = 1;
      v69 = 0;
      if ( !v25 )
      {
        v70 = v24 - ((v19 & 0x80) != 0) + 8;
        v32 = 2 - (v70 < 0x10);
        v69 = v23;
        if ( v70 < 0x10 )
          v69 = 0;
        goto LABEL_74;
      }
      if ( v24 + abs32(v25 - 8) > 0x10 )
      {
LABEL_94:
        v69 = v23;
        v32 = 2;
      }
LABEL_74:
      LODWORD(v33) = 0;
      v71 = v83 + v69;
      v72 = (v83 + v69) >> 32;
      if ( v72 >= 0 )
      {
        if ( v72 > 0 || v71 >= 2 * v22 - v23 )
          LODWORD(v33) = 2;
        else
          LODWORD(v33) = v71 >= v22 - v23;
      }
LABEL_22:
      v86 = v33;
      v34 = v32;
      HIDWORD(v79) = v32;
      v14 = v30;
      HIDWORD(v80) = v30;
      if ( v30 >= (int)v32 )
      {
        if ( (v19 & 0x40) != 0 )
        {
          v67 = v23;
          v85 = v23;
          goto LABEL_61;
        }
        goto LABEL_24;
      }
LABEL_37:
      while ( (v19 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
        v67 = v85;
LABEL_61:
        LODWORD(v79) = v19 & 0x20;
        if ( (v19 & 0x20) != 0 )
        {
          v32 = v14 - a4->iStop;
          v30 = v14 - a4->iStart;
        }
        else
        {
          v32 = v34 + a4->iStart;
          v30 = v34 + a4->iStop;
        }
        ++a4;
        v23 = v67;
        *((_DWORD *)a6 + 8) = *((_DWORD *)a6 + 9);
        v68 = v83 + v67 * (unsigned __int64)v32;
        if ( v68 >= 0xFFFFFFFF )
          v33 = (v83 + v67 * (unsigned __int64)v32) / v22;
        else
          LODWORD(v33) = (unsigned int)v68 / v22;
LABEL_24:
        if ( (v19 & 0x400) != 0 )
        {
          v48 = (char *)a6 + 92;
          v49 = (char *)a6 + 88;
          if ( (v19 & 5) == 0 )
            v49 = (char *)a6 + 92;
          v50 = *(unsigned int *)v49;
          if ( (v19 & 5) == 0 )
            v48 = (char *)a6 + 88;
          v51 = *(unsigned int *)v48;
          if ( (_DWORD)v51 == (_DWORD)v50 || (unsigned __int64)v23 * v50 <= (unsigned __int64)v22 * v51 )
          {
            *((_QWORD *)a6 + 1) = (unsigned int)v51;
            *((_DWORD *)a6 + 4) = v51;
            v52 = HIDWORD(v79);
            v53 = HIDWORD(v80) - HIDWORD(v79);
            LODWORD(v50) = v51;
            if ( (_DWORD)v79 )
            {
              v55 = HIDWORD(v80) - v32 + 1;
              goto LABEL_48;
            }
            v54 = v32;
          }
          else
          {
            v73 = v83 + v23 * (unsigned __int64)HIDWORD(v80);
            if ( v73 >= 0xFFFFFFFF )
              v74 = (v83 + v23 * (unsigned __int64)HIDWORD(v80)) / v22;
            else
              LODWORD(v74) = (unsigned int)v73 / v22;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v50;
            *((_DWORD *)a6 + 4) = v50;
            v52 = v86;
            v53 = v74 - v86;
            if ( (_DWORD)v79 )
            {
              v55 = v74 - v33 + 1;
              goto LABEL_48;
            }
            v54 = v33;
          }
          v55 = v54 - v52;
LABEL_48:
          v56 = *((_DWORD *)a6 + 8);
          v57 = v56 + v50 * v55;
          v58 = v50 * (v53 + 1) + v56;
          *((_DWORD *)a6 + 8) = v58;
          v59 = *((_DWORD *)a6 + 7);
          if ( v57 >= v59 )
            v57 %= v59;
          if ( v58 >= v59 )
            *((_DWORD *)a6 + 8) = v58 % v59;
          if ( (_DWORD)v79 )
          {
            v75 = -v57;
            v60 = *((_DWORD *)a6 + 21) == 0;
            v61 = (int *)*((_QWORD *)a6 + 8);
            v82 = *((_DWORD *)a6 + 25);
            *((_QWORD *)a6 + 6) = &v61[v82 - 1];
            v76 = v75 + v59;
            if ( v75 >= 0 )
              v76 = v75;
            v57 = v76;
            LOBYTE(v62) = v82;
          }
          else
          {
            v60 = *((_DWORD *)a6 + 21);
            v61 = (int *)*((_QWORD *)a6 + 9);
            v62 = *((_DWORD *)a6 + 25);
            *((_QWORD *)a6 + 6) = &v61[v62 - 1];
          }
          *((_QWORD *)a6 + 5) = v61;
          *((_DWORD *)a6 + 20) = v60;
          v63 = *((_DWORD *)a6 + 6);
          if ( v57 >= v63 )
          {
            v57 -= v63;
            if ( (v62 & 1) != 0 )
              *((_DWORD *)a6 + 20) = v60 == 0;
          }
          while ( 1 )
          {
            *((_QWORD *)a6 + 7) = v61;
            v64 = *v61;
            if ( v57 < *v61 )
              break;
            v57 -= v64;
            ++v61;
          }
          *((_DWORD *)a6 + 5) = v64 - v57;
          if ( (((_BYTE)v61 - *((_BYTE *)a6 + 40)) & 4) != 0 )
            *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
        }
        v35 = v33 + v88;
        v36 = v32 + v87;
        if ( (v19 & 5) == 0 )
        {
          v36 = v33 + v88;
          v35 = v32 + v87;
        }
        v37 = -v36;
        if ( (v19 & 8) == 0 )
          v37 = v36;
        if ( 2 * v23 > v22 )
        {
          v19 |= 2u;
          LODWORD(v80) = v19;
          v92 = v83 - v22;
          v23 = v22 - v23;
          LODWORD(v33) = v32 - v33;
        }
        HIDWORD(v95[0]) = v19;
        v93 = a8[v19 & 3];
        LODWORD(v95[3]) = v35 & *((_DWORD *)a1 + 7);
        LODWORD(v95[1]) = a11;
        v38 = &a10[v37 * a11];
        v39 = *((_DWORD *)a1 + 6);
        if ( v39 < 0 )
          v95[2] = (char *)v38 + 3 * v35;
        else
          v95[2] = &v38[(__int64)v35 >> v39];
        v40 = (_QWORD *)((char *)&v95[3] + 4);
        v41 = v30 - v32 + 1;
        LODWORD(v42) = 0;
        LODWORD(v79) = 0;
        v43 = 0;
        v81 = 0;
        v44 = 0LL;
        v84 = 0;
        if ( v23 )
        {
          v77 = v92 + v22 * (unsigned __int64)(unsigned int)(v33 + 1);
          v42 = v77 % v23;
          LODWORD(v79) = v42;
          v45 = v77 / v23 - v32 + 1;
          v44 = v22 % v23;
          v84 = v22 % v23;
          v43 = v22 / v23;
          v81 = v22 / v23;
        }
        else
        {
          v45 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v46 = v41;
          v41 -= v45;
          if ( v41 <= 0 )
            break;
          *(_DWORD *)v40 = v45;
          v40 = (_QWORD *)((char *)v40 + 4);
          if ( v40 == (_QWORD *)((char *)&v95[53] + 4) )
          {
            LODWORD(v95[0]) = ((char *)v40 - ((char *)&v95[3] + 4)) >> 2;
            ((void (__fastcall *)(_QWORD *, struct _BMINFO *, struct _LINESTATE *, __int64, __int64, __int64))v93)(
              v95,
              a1,
              a6,
              v44,
              v79,
              v80);
            v40 = (_QWORD *)((char *)&v95[3] + 4);
            v43 = v81;
            v44 = v84;
          }
          v45 = v43;
          LODWORD(v42) = v44 + v42;
          v78 = v42;
          LODWORD(v79) = v42;
          if ( (unsigned int)v42 >= v23 )
          {
            LODWORD(v42) = v42 - v23;
            LODWORD(v79) = v78 - v23;
            v45 = v43 + 1;
          }
        }
        *(_DWORD *)v40 = v46;
        LODWORD(v95[0]) = ((char *)v40 + 4 - ((char *)&v95[3] + 4)) >> 2;
        ((void (__fastcall *)(_QWORD *, struct _BMINFO *, struct _LINESTATE *, __int64))v93)(v95, a1, a6, v44);
        v14 = HIDWORD(v80);
        v34 = HIDWORD(v79);
      }
      v13 = v91;
      v12 = v91 + 1;
      v91 = v12;
      if ( v12 >= v94 )
        return 1LL;
    }
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\engline.cxx:%d:bLines:Invalid surface format.\n", 416);
  return 0LL;
}
