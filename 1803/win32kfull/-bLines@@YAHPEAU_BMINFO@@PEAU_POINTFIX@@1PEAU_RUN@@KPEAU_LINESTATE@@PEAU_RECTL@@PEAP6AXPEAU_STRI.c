/*
 * XREFs of ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0128638
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C012833C (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
  struct _POINTFIX *v12; // r14
  struct _POINTFIX *v13; // rdi
  FIX x; // r12d
  FIX v15; // r9d
  FIX y; // r8d
  unsigned int v17; // ecx
  FIX v18; // edx
  FIX v19; // edi
  int v20; // r11d
  int v21; // r14d
  int v22; // r10d
  unsigned int v23; // r12d
  unsigned int v24; // esi
  unsigned int v25; // r14d
  char v26; // r9
  unsigned int v27; // eax
  unsigned int v28; // r9d
  int v29; // r10d
  signed __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // r11d
  int v33; // r8d
  signed int v34; // edi
  unsigned int v35; // r8d
  unsigned __int64 v36; // r9
  unsigned int v37; // ecx
  signed int v38; // eax
  int *v39; // r10
  int v40; // edi
  int v41; // edx
  int v42; // r9d
  unsigned int v43; // eax
  int v44; // r8d
  char *v45; // rcx
  unsigned int v46; // r10d
  unsigned int v48; // ecx
  unsigned int v49; // eax
  unsigned int v50; // edx
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned int v53; // r10d
  unsigned int v54; // r11d
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  int v57; // edx
  int v58; // ecx
  int v59; // eax
  int v60; // ecx
  unsigned int v61; // r11d
  unsigned int v62; // r10d
  int v63; // eax
  __int64 v64; // rdx
  int v65; // ecx
  __int64 v66; // r11
  __int64 v67; // rdx
  int v68; // eax
  int v69; // eax
  int *v70; // r10
  int *i; // rax
  int v72; // edx
  unsigned __int64 v73; // rtt
  unsigned int v74; // ecx
  int v75; // [rsp+20h] [rbp-308h]
  unsigned int v76; // [rsp+24h] [rbp-304h]
  unsigned int v77; // [rsp+28h] [rbp-300h]
  unsigned int v78; // [rsp+2Ch] [rbp-2FCh]
  int v79; // [rsp+30h] [rbp-2F8h]
  int v80; // [rsp+38h] [rbp-2F0h]
  __int64 v81; // [rsp+40h] [rbp-2E8h]
  signed int v82; // [rsp+4Ch] [rbp-2DCh]
  int v83; // [rsp+4Ch] [rbp-2DCh]
  unsigned __int64 v84; // [rsp+60h] [rbp-2C8h]
  struct _POINTFIX *v86; // [rsp+88h] [rbp-2A0h]
  __int64 v87; // [rsp+A0h] [rbp-288h]
  struct _POINTFIX *v88; // [rsp+110h] [rbp-218h]
  _BYTE v89[400]; // [rsp+13Ch] [rbp-1ECh] BYREF
  char v90; // [rsp+2CCh] [rbp-5Ch] BYREF
  struct _W32KCDD_ENG_CALLBACKS *v91; // [rsp+2D0h] [rbp-58h]
  unsigned int *v92; // [rsp+2D8h] [rbp-50h]

  v12 = a3;
  v86 = a3;
  v13 = a2;
  if ( a1 <= (struct _BMINFO *)&off_1C031C9C0 || !bUMPDSecurityGateEx((__int64)a1, (__int64)a2) )
  {
    v88 = &v12[a5];
    v77 = 0;
    v81 = 0LL;
    v87 = 0LL;
    v78 = 0;
    v80 = 0;
    v76 = 0;
    v91 = a12;
    v92 = a10;
    while ( 1 )
    {
      x = v13->x;
      v15 = v12->x;
      y = v12->y;
      v17 = a9 | 0x20;
      if ( v12->x >= v13->x )
        v17 = a9;
      v18 = v13->y;
      if ( v15 >= x )
      {
        v18 = v12->y;
        y = v13->y;
      }
      v19 = v12->x;
      if ( v15 >= x )
        v19 = x;
      v20 = v17 | 8;
      if ( v18 >= y )
        v20 = v17;
      v21 = -v18;
      if ( v18 >= y )
        v21 = v18;
      v22 = -y;
      if ( v18 >= y )
        v22 = y;
      if ( v15 >= x )
        x = v15;
      v23 = x - v19;
      v24 = v20;
      if ( (v23 & 0x80000000) != 0 || (v25 = v21 - v22, (v25 & 0x80000000) != 0) )
      {
        v38 = v76;
        v37 = v78;
        goto LABEL_88;
      }
      v26 = v19;
      if ( v25 >= v23 )
      {
        if ( v25 == v23 )
        {
          v24 = v20 | 0x10;
        }
        else
        {
          v27 = v23;
          v23 = v25;
          v25 = v27;
          v26 = v22;
          LOBYTE(v22) = v19;
          v24 = v20 | 5;
        }
      }
      v24 |= gaflRound[(v24 >> 2) & 7];
      v28 = v26 & 0xF;
      v29 = v22 & 0xF;
      v30 = (int)v23 * (unsigned __int64)(unsigned int)(v29 + 8) - (int)v25 * (unsigned __int64)v28 - 1;
      if ( (v24 & 0x8000) == 0 )
        v30 = (int)v23 * (unsigned __int64)(unsigned int)(v29 + 8) - (int)v25 * (unsigned __int64)v28;
      v31 = v30 >> 4;
      v81 = v31;
      v87 = ~v31;
      v32 = ((_BYTE)v25 + (_BYTE)v29) & 0xF;
      v33 = ((_BYTE)v23 + (_BYTE)v28) & 0xF;
      v34 = (v23 + v28) >> 4;
      v75 = v24 & 0x20;
      if ( (v24 & 0x20) == 0 )
      {
        v82 = --v34;
        if ( (((_BYTE)v23 + (_BYTE)v28) & 0xF) != 0 )
        {
          if ( (((_BYTE)v25 + (_BYTE)v29) & 0xF) != 0 )
          {
            if ( (int)abs32(v32 - 8) <= v33 )
              v34 = (v23 + v28) >> 4;
          }
          else
          {
            v34 = (v23 + v28) >> 4;
            if ( v33 - (unsigned int)((v24 & 0x80) != 0) + 8 < 0x10 )
              v34 = v82;
          }
        }
        if ( (v24 & 0x90) != 0x90 )
          goto LABEL_27;
        if ( (((_BYTE)v23 + (_BYTE)v28) & 0xF) != 0 && v32 == v33 + 8 )
          --v34;
        if ( v28 && v29 == v28 + 8 )
        {
          v35 = 0;
        }
        else
        {
LABEL_27:
          v35 = 0;
          if ( v28 )
          {
            if ( v29 )
              v35 = (int)abs32(v29 - 8) <= (int)v28;
            else
              LOBYTE(v35) = v28 - ((v24 & 0x80) != 0) + 8 >= 0x10;
          }
        }
        LODWORD(v36) = 0;
        if ( v31 >= 0 )
          LODWORD(v36) = (unsigned int)v31 >= v23 - (v25 & -v35);
        goto LABEL_30;
      }
      if ( (((_BYTE)v25 + (_BYTE)v29) & 0xF) != 0 )
      {
        if ( v33 + abs32(v32 - 8) > 0x10 )
          ++v34;
      }
      else
      {
        ++v34;
        if ( v33 - (unsigned int)((v24 & 0x80) != 0) + 8 < 0x10 )
          v34 = (v23 + v28) >> 4;
      }
      if ( (v24 & 0x90) == 0x10 )
      {
        if ( (((_BYTE)v25 + (_BYTE)v29) & 0xF) != 0 && v33 == v32 + 8 )
          ++v34;
        if ( v29 && v28 == v29 + 8 )
          goto LABEL_69;
      }
      v35 = 1;
      v48 = 0;
      if ( !v29 )
      {
        v49 = v28 - ((v24 & 0x80) != 0) + 8;
        v35 = 2 - (v49 < 0x10);
        v48 = v25;
        if ( v49 < 0x10 )
          v48 = 0;
        goto LABEL_50;
      }
      if ( v28 + abs32(v29 - 8) > 0x10 )
      {
LABEL_69:
        v48 = v25;
        v35 = 2;
      }
LABEL_50:
      LODWORD(v36) = 0;
      v50 = v81 + v48;
      v51 = (v81 + v48) >> 32;
      if ( v51 >= 0 )
      {
        if ( v51 > 0 || v50 >= 2 * v23 - v25 )
          LODWORD(v36) = 2;
        else
          LODWORD(v36) = v50 >= v23 - v25;
      }
LABEL_30:
      v80 = v36;
      v37 = v35;
      v78 = v35;
      v38 = v34;
      v76 = v34;
      if ( v34 >= (int)v35 )
      {
        if ( (v24 & 0x40) != 0 )
        {
          v46 = v25;
          v77 = v25;
          goto LABEL_90;
        }
        goto LABEL_32;
      }
LABEL_88:
      v46 = v77;
      while ( (v24 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
LABEL_90:
        v75 = v24 & 0x20;
        if ( (v24 & 0x20) != 0 )
        {
          v35 = v38 - a4->iStop;
          v34 = v38 - a4->iStart;
        }
        else
        {
          v35 = v37 + a4->iStart;
          v34 = v37 + a4->iStop;
        }
        ++a4;
        v25 = v46;
        *((_DWORD *)a6 + 8) = *((_DWORD *)a6 + 9);
        v52 = v81 + v46 * (unsigned __int64)v35;
        if ( v52 >= 0xFFFFFFFF )
          v36 = (v81 + v46 * (unsigned __int64)v35) / v23;
        else
          LODWORD(v36) = (unsigned int)v52 / v23;
LABEL_32:
        if ( (v24 & 0x400) != 0 )
        {
          v53 = *((_DWORD *)a6 + 23);
          v54 = *((_DWORD *)a6 + 22);
          if ( (v24 & 5) == 0 )
          {
            v54 = *((_DWORD *)a6 + 23);
            v53 = *((_DWORD *)a6 + 22);
          }
          if ( v53 == v54 || v25 * (unsigned __int64)v54 <= v23 * (unsigned __int64)v53 )
          {
            *((_DWORD *)a6 + 2) = v53;
            *((_DWORD *)a6 + 3) = 0;
            *((_DWORD *)a6 + 4) = v53;
            v57 = v76 - v78 + 1;
            v54 = v53;
            if ( v75 )
              v58 = v76 - v35 + 1;
            else
              v58 = v35 - v78;
          }
          else
          {
            v55 = v81 + v25 * (unsigned __int64)v76;
            if ( v55 >= 0xFFFFFFFF )
              v56 = v55 / v23;
            else
              LODWORD(v56) = (unsigned int)v55 / v23;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v54;
            *((_DWORD *)a6 + 4) = v54;
            v57 = v56 - v80 + 1;
            if ( v75 )
              v58 = v56 - v36 + 1;
            else
              v58 = v36 - v80;
          }
          v59 = *((_DWORD *)a6 + 8);
          v60 = v59 + v54 * v58;
          v61 = v59 + v57 * v54;
          *((_DWORD *)a6 + 8) = v61;
          v62 = *((_DWORD *)a6 + 7);
          if ( v60 >= v62 )
            v60 %= v62;
          if ( v61 >= v62 )
            *((_DWORD *)a6 + 8) = v61 % v62;
          v63 = *((_DWORD *)a6 + 21);
          v64 = 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
          if ( v75 )
          {
            v65 = -v60;
            v66 = *((_QWORD *)a6 + 8);
            v67 = v66 + v64;
            v68 = v65 + v62;
            if ( v65 >= 0 )
              v68 = v65;
            v60 = v68;
            v63 = *((_DWORD *)a6 + 21) == 0;
          }
          else
          {
            v66 = *((_QWORD *)a6 + 9);
            v67 = v66 + v64;
          }
          *((_DWORD *)a6 + 20) = v63;
          *((_QWORD *)a6 + 5) = v66;
          *((_QWORD *)a6 + 6) = v67;
          v69 = *((_DWORD *)a6 + 6);
          if ( v60 >= v69 )
          {
            v60 -= v69;
            if ( (*((_DWORD *)a6 + 25) & 1) != 0 )
              *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
          }
          v70 = (int *)*((_QWORD *)a6 + 5);
          *((_QWORD *)a6 + 7) = v70;
          for ( i = v70; ; *((_QWORD *)a6 + 7) = i )
          {
            v72 = *i;
            if ( v60 < *i )
              break;
            v60 -= v72;
            ++i;
          }
          *((_DWORD *)a6 + 5) = v72 - v60;
          if ( (((_BYTE)i - (_BYTE)v70) & 4) != 0 )
            *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
        }
        if ( 2 * v25 > v23 )
        {
          LOWORD(v24) = v24 | 2;
          v87 = v81 - v23;
          v25 = v23 - v25;
          LODWORD(v36) = v35 - v36;
        }
        v39 = (int *)v89;
        v40 = v34 - v35 + 1;
        LODWORD(v84) = 0;
        v41 = 0;
        v83 = 0;
        v79 = 0;
        if ( v25 )
        {
          v73 = v87 + v23 * (unsigned __int64)(unsigned int)(v36 + 1);
          v84 = v73 % v25;
          v42 = v73 / v25 - v35 + 1;
          v79 = v23 % v25;
          v41 = v23 / v25;
          v83 = v23 / v25;
        }
        else
        {
          v42 = 0x7FFFFFFF;
        }
        v43 = v84;
        while ( 1 )
        {
          v44 = v40;
          v40 -= v42;
          v45 = (char *)(v39 + 1);
          if ( v40 <= 0 )
            break;
          *v39++ = v42;
          if ( v45 == &v90 )
          {
            _guard_dispatch_icall_fptr();
            v39 = (int *)v89;
            v43 = v84;
            v41 = v83;
          }
          v42 = v41;
          v74 = v43 + v79;
          v43 = v74;
          LODWORD(v84) = v74;
          if ( v74 >= v25 )
          {
            v43 = v74 - v25;
            LODWORD(v84) = v74 - v25;
            v42 = v41 + 1;
          }
        }
        *v39 = v44;
        _guard_dispatch_icall_fptr();
        v38 = v76;
        v37 = v78;
        v46 = v77;
      }
      v13 = v86;
      v12 = v86 + 1;
      v86 = v12;
      if ( v12 >= v88 )
        return 1LL;
    }
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\engline.cxx:%d:bLines:Invalid surface format.\n", 416);
  return 0LL;
}
