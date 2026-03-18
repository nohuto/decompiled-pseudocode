/*
 * XREFs of ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C00AEDC0
 * Callers:
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00AE604 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?BltLnkAccel6666@@YAXPEAE0JJJJ@Z @ 0x1C02AC144 (-BltLnkAccel6666@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccel8888@@YAXPEAE0JJJJ@Z @ 0x1C02AC1E4 (-BltLnkAccel8888@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z @ 0x1C02AC28C (-BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z.c)
 */

void __fastcall BltLnkRect(struct _BLTLNKINFO *a1, struct _RECTL *a2)
{
  int v4; // ecx
  char *v5; // r13
  unsigned __int8 *v6; // rdi
  LONG bottom; // r11d
  LONG top; // r15d
  int v9; // ebx
  LONG left; // edx
  unsigned int v11; // esi
  __int64 v12; // r12
  int v13; // r8d
  __int64 v14; // r9
  int v15; // r14d
  int v16; // r8d
  LONG v17; // eax
  __int64 v18; // r9
  struct _BLTLNKINFO *v19; // rax
  __int64 v20; // r11
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rax
  int v25; // r11d
  char v26; // dl
  struct _BLTLNKINFO *v27; // r8
  __int64 v28; // rcx
  int v29; // r12d
  int v30; // r13d
  unsigned int v31; // ecx
  __int64 v32; // rax
  unsigned __int64 ii; // rdx
  __int64 v34; // r8
  struct _BLTLNKINFO *v35; // r13
  _DWORD *v37; // r10
  _DWORD *v38; // r8
  unsigned int v39; // eax
  _DWORD *v40; // r9
  unsigned int v41; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  void (__fastcall *v47)(unsigned __int8 *, unsigned int, unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // rax
  unsigned int v48; // r15d
  unsigned int v49; // ecx
  int v50; // r12d
  int v51; // eax
  void (*v52)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *); // rax
  int v53; // ecx
  void (__fastcall *v54)(struct BLTINFO *, unsigned int, unsigned int *, unsigned __int8); // r15
  unsigned __int8 v55; // r8
  int v56; // ecx
  void (*v57)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // r12
  int v58; // ecx
  int v59; // ecx
  int v60; // r8d
  int v61; // r8d
  int v62; // r8d
  int v63; // r8d
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  unsigned int jj; // ecx
  char *v69; // rcx
  __int64 v70; // rcx
  int v71; // eax
  unsigned int m; // ecx
  char *v73; // rcx
  unsigned int k; // r8d
  int v76; // eax
  __int64 v77; // rcx
  int v78; // edx
  int v79; // eax
  __int64 j; // rdx
  int v82; // eax
  __int64 v83; // rcx
  unsigned int v84; // r9d
  __int64 v85; // r8
  char *v86; // rcx
  unsigned int v87; // r9d
  int v88; // eax
  int v89; // [rsp+40h] [rbp-668h]
  int v90; // [rsp+44h] [rbp-664h]
  __int64 mm; // [rsp+48h] [rbp-660h]
  __int64 kk; // [rsp+48h] [rbp-660h]
  __int64 n; // [rsp+48h] [rbp-660h]
  __int64 i; // [rsp+48h] [rbp-660h]
  int v96; // [rsp+50h] [rbp-658h]
  unsigned int v97; // [rsp+54h] [rbp-654h]
  int v98; // [rsp+58h] [rbp-650h]
  unsigned int v99; // [rsp+58h] [rbp-650h]
  int v100; // [rsp+58h] [rbp-650h]
  int v101; // [rsp+58h] [rbp-650h]
  unsigned int v102; // [rsp+5Ch] [rbp-64Ch]
  unsigned int v103; // [rsp+70h] [rbp-638h]
  unsigned int v104; // [rsp+74h] [rbp-634h]
  __int64 v105; // [rsp+78h] [rbp-630h]
  void (* near *v106)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+78h] [rbp-630h]
  void (* near *v107)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+78h] [rbp-630h]
  void (* near *v108)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+78h] [rbp-630h]
  void (* near *v109)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+78h] [rbp-630h]
  unsigned int v110; // [rsp+80h] [rbp-628h]
  unsigned int v111; // [rsp+84h] [rbp-624h]
  int v112; // [rsp+A0h] [rbp-608h]
  void (*v113)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *); // [rsp+A8h] [rbp-600h]
  unsigned int v114; // [rsp+B0h] [rbp-5F8h]
  void (__fastcall *v115)(unsigned __int8 *, unsigned int, unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // [rsp+B8h] [rbp-5F0h]
  __int64 v116; // [rsp+C8h] [rbp-5E0h] BYREF
  __int64 v117; // [rsp+D0h] [rbp-5D8h]
  int v118; // [rsp+D8h] [rbp-5D0h]
  int v119; // [rsp+DCh] [rbp-5CCh]
  unsigned int v120; // [rsp+E0h] [rbp-5C8h]
  unsigned int v121; // [rsp+E4h] [rbp-5C4h]
  int v122; // [rsp+E8h] [rbp-5C0h]
  char v123; // [rsp+ECh] [rbp-5BCh]
  struct _BLTLNKINFO *v124; // [rsp+F0h] [rbp-5B8h]
  void (* near *v125)(struct BLTINFO *); // [rsp+F8h] [rbp-5B0h]
  void (* near *v126)(struct BLTINFO *); // [rsp+100h] [rbp-5A8h]
  unsigned int v127; // [rsp+108h] [rbp-5A0h]
  void (* near *v128)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+110h] [rbp-598h]
  _DWORD *v129; // [rsp+118h] [rbp-590h]
  _DWORD *v130; // [rsp+120h] [rbp-588h]
  _DWORD *v131; // [rsp+128h] [rbp-580h]
  XLATEOBJ *v132; // [rsp+130h] [rbp-578h] BYREF
  char *v133; // [rsp+138h] [rbp-570h]
  __int64 v134; // [rsp+140h] [rbp-568h]
  int v135; // [rsp+148h] [rbp-560h]
  unsigned int v136; // [rsp+14Ch] [rbp-55Ch]
  int v137; // [rsp+150h] [rbp-558h]
  int v138; // [rsp+154h] [rbp-554h]
  int v139; // [rsp+158h] [rbp-550h]
  int v140; // [rsp+15Ch] [rbp-54Ch]
  unsigned int v141; // [rsp+160h] [rbp-548h]
  unsigned int v142; // [rsp+164h] [rbp-544h]
  LONG v143; // [rsp+168h] [rbp-540h]
  int v144; // [rsp+16Ch] [rbp-53Ch]
  int v145; // [rsp+170h] [rbp-538h]
  __int64 v146; // [rsp+1D0h] [rbp-4D8h] BYREF
  char *v147; // [rsp+1D8h] [rbp-4D0h]
  char *v148; // [rsp+1E0h] [rbp-4C8h]
  int v149; // [rsp+1E8h] [rbp-4C0h]
  unsigned int v150; // [rsp+1ECh] [rbp-4BCh]
  int v151; // [rsp+1F0h] [rbp-4B8h]
  int v152; // [rsp+1F4h] [rbp-4B4h]
  int v153; // [rsp+1F8h] [rbp-4B0h]
  int v154; // [rsp+1FCh] [rbp-4ACh]
  int v155; // [rsp+200h] [rbp-4A8h]
  int v156; // [rsp+204h] [rbp-4A4h]
  unsigned int v157; // [rsp+208h] [rbp-4A0h]
  int v158; // [rsp+20Ch] [rbp-49Ch]
  int v159; // [rsp+210h] [rbp-498h]
  _DWORD v160[64]; // [rsp+270h] [rbp-438h] BYREF
  _DWORD v161[64]; // [rsp+370h] [rbp-338h] BYREF
  _DWORD v162[64]; // [rsp+470h] [rbp-238h] BYREF
  _DWORD v163[64]; // [rsp+570h] [rbp-138h] BYREF

  v124 = a1;
  v4 = 0;
  v110 = 0;
  v159 = 0;
  v145 = 0;
  v126 = 0LL;
  v125 = 0LL;
  v115 = 0LL;
  v113 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v102 = 0;
  v112 = 0;
  v114 = 0;
  bottom = a2->bottom;
  top = a2->top;
  v9 = bottom - top;
  left = a2->left;
  v11 = a2->right - left;
  v12 = *((_QWORD *)a1 + 2);
  v105 = v12;
  v13 = *(_DWORD *)(v12 + 96);
  switch ( v13 )
  {
    case 6:
      v102 = left;
      v97 = a2->right - left;
      v112 = 4;
LABEL_5:
      v110 = v4;
LABEL_6:
      v104 = v4;
      break;
    case 5:
      v102 = (3 * left) >> 2;
      v110 = -left & 3;
      v104 = 0;
      v114 = v110;
      v112 = 3;
      v97 = (v110 + 2 * (v11 + 1) + v11 + 1) >> 2;
      break;
    case 1:
      v102 = left >> 5;
      v110 = (left >> 3) & 3;
      v4 = left & 0x1F;
      v97 = (v4 + v11 + 31) >> 5;
      goto LABEL_6;
    case 2:
      v102 = left >> 3;
      v110 = (left >> 1) & 3;
      v4 = left & 7;
      v97 = (v4 + v11 + 7) >> 3;
      goto LABEL_6;
    case 3:
      v102 = left >> 2;
      v4 = left & 3;
      v97 = (v4 + v11 + 3) >> 2;
      v112 = 1;
      goto LABEL_5;
    case 4:
      v102 = left >> 1;
      v4 = left & 1;
      v110 = 2 * v4;
      v97 = (v4 + v11 + 1) >> 1;
      v112 = 2;
      goto LABEL_6;
  }
  v14 = *((_QWORD *)a1 + 11);
  if ( !v14 )
  {
    v15 = *((_DWORD *)a1 + 37);
    v96 = v15;
    v16 = *((_DWORD *)a1 + 26);
    goto LABEL_9;
  }
  if ( v13 == 6 )
  {
    v111 = 4 * *((_DWORD *)a1 + 38);
    v44 = 4 * *((_DWORD *)a1 + 40);
    v45 = 4 * left;
  }
  else
  {
    v60 = v13 - 1;
    if ( !v60 )
    {
      v111 = *((_DWORD *)a1 + 38);
      v103 = left - *((_DWORD *)a1 + 40);
      v47 = BltLnkReadPat1;
      goto LABEL_71;
    }
    v61 = v60 - 1;
    if ( !v61 )
    {
      v111 = *((_DWORD *)a1 + 38);
      v103 = left - *((_DWORD *)a1 + 40);
      v47 = BltLnkReadPat4;
      goto LABEL_71;
    }
    v62 = v61 - 1;
    if ( !v62 )
    {
      v111 = *((_DWORD *)a1 + 38);
      v103 = left - *((_DWORD *)a1 + 40);
      goto LABEL_70;
    }
    v63 = v62 - 1;
    if ( v63 )
    {
      if ( v63 != 1 )
        goto LABEL_72;
      v111 = 3 * *((_DWORD *)a1 + 38);
      v46 = 3 * (left - *((_DWORD *)a1 + 40));
      goto LABEL_69;
    }
    v111 = 2 * *((_DWORD *)a1 + 38);
    v44 = 2 * *((_DWORD *)a1 + 40);
    v45 = 2 * left;
  }
  v46 = v45 - v44;
LABEL_69:
  v103 = v46;
LABEL_70:
  v47 = BltLnkReadPat;
LABEL_71:
  v115 = v47;
LABEL_72:
  if ( v103 >= v111 )
    v103 %= v111;
  v96 = *((_DWORD *)a1 + 39);
  v90 = top - *((_DWORD *)a1 + 41);
  v16 = *((_DWORD *)a1 + 26);
  if ( v16 < 0 )
    v90 = bottom + -*((_DWORD *)a1 + 41) - 1;
  if ( v90 >= v96 )
  {
    v90 %= v96;
  }
  else if ( v90 < 0 )
  {
    v90 = v96 - ~v90 % v96 - 1;
  }
  v6 = (unsigned __int8 *)(v14 + v90 * *((_DWORD *)a1 + 29));
  v15 = *((_DWORD *)a1 + 39);
LABEL_9:
  if ( v16 <= 0 )
    v17 = bottom - 1;
  else
    v17 = top;
  v18 = *((_QWORD *)v124 + 9) + *((_DWORD *)v124 + 28) * v17;
  v19 = a1;
  v20 = *((_QWORD *)a1 + 8);
  if ( v20 )
  {
    v146 = *((_QWORD *)a1 + 6);
    v21 = top + *((_DWORD *)a1 + 36) - *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 50) = v21;
    v22 = a2->left + *((_DWORD *)a1 + 35) - *(_DWORD *)a1;
    *((_DWORD *)a1 + 47) = v22;
    *((_DWORD *)a1 + 48) = v22 + v11;
    v23 = *((_DWORD *)v124 + 27);
    if ( v16 <= 0 )
      v24 = v23 * (v9 + v21 - 1);
    else
      v24 = v21 * v23;
    v5 = (char *)(v24 + v20);
    v19 = a1;
  }
  v25 = *((_DWORD *)v19 + 56);
  if ( v25 )
  {
    v48 = a2->left + *((_DWORD *)a1 + 44) - *(_DWORD *)a1;
    v89 = a2->top + *((_DWORD *)a1 + 45) - *((_DWORD *)a1 + 1);
    if ( v16 < 0 )
      v89 = v9 + a2->top + *((_DWORD *)a1 + 45) - *((_DWORD *)a1 + 1) - 1;
    v49 = *((_DWORD *)a1 + 42);
    if ( v48 >= v49 )
      v48 %= v49;
    v50 = *((_DWORD *)a1 + 43);
    if ( v89 >= v50 )
    {
      v89 %= v50;
    }
    else if ( v89 < 0 )
    {
      v89 = v50 - ~v89 % v50 - 1;
    }
    v117 = *((_QWORD *)a1 + 10);
    v116 = v117 + v89 * *((_DWORD *)a1 + 30);
    v121 = v48;
    v120 = v49;
    v119 = v89;
    v118 = v50;
    v123 = *((_BYTE *)a1 + 229);
    v122 = *((_DWORD *)a1 + 34);
    v12 = v105;
    v51 = *(_DWORD *)(v105 + 96);
    if ( v51 == 6 )
    {
      v52 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk32;
    }
    else
    {
      v64 = v51 - 1;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( v65 )
        {
          v66 = v65 - 1;
          if ( v66 )
          {
            v67 = v66 - 1;
            if ( v67 )
            {
              if ( v67 != 1 )
                goto LABEL_93;
              v52 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk24;
            }
            else
            {
              v52 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk16;
            }
          }
          else
          {
            v52 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk8;
          }
        }
        else
        {
          v52 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk4;
        }
      }
      else
      {
        v52 = BltLnkSrcCopyMsk1;
      }
    }
    v113 = v52;
LABEL_93:
    v19 = a1;
  }
  if ( *((int *)v19 + 25) <= 0 || v16 <= 0 )
  {
    v27 = a1;
    goto LABEL_155;
  }
  v26 = *((_BYTE *)v19 + 228);
  if ( v26 == -52
    && v25
    && *(_DWORD *)(*((_QWORD *)v19 + 3) + 96LL) == *(_DWORD *)(v12 + 96)
    && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
  {
    v134 = v18;
    v133 = v5;
    v135 = 1;
    v138 = v16;
    v136 = v11;
    v137 = v9;
    v139 = *((_DWORD *)a1 + 31);
    v140 = *((_DWORD *)a1 + 32);
    v141 = *((_DWORD *)a1 + 47);
    v142 = v11 + v141;
    v143 = a2->left;
    v144 = 0;
    v132 = xloIdent;
    ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _DWORD *))v113)(&v132, &v116, v160, v162);
    return;
  }
  if ( v26 != -72 && v26 != -30 || v25 )
    goto LABEL_21;
  v27 = a1;
  v99 = *((_DWORD *)a1 + 37);
  if ( v99 == -1 )
    goto LABEL_22;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) != 1 )
    goto LABEL_22;
  v53 = *(_DWORD *)(v12 + 96);
  if ( (unsigned int)(v53 - 3) > 3 )
    goto LABEL_22;
  v54 = 0LL;
  v55 = -1;
  if ( v53 == 6 )
  {
    v54 = BltLnkPatMaskCopy32;
  }
  else
  {
    v58 = v53 - 3;
    if ( !v58 )
    {
      v54 = BltLnkPatMaskCopy8;
      v56 = 255;
      goto LABEL_105;
    }
    v59 = v58 - 1;
    if ( !v59 )
    {
      v54 = BltLnkPatMaskCopy16;
      v56 = 0xFFFF;
      goto LABEL_105;
    }
    if ( v59 != 1 )
    {
      v56 = v114;
      goto LABEL_105;
    }
    v54 = BltLnkPatMaskCopy24;
  }
  v56 = 0xFFFFFF;
LABEL_105:
  v128 = (void (* near *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))*((_QWORD *)a1 + 6);
  v57 = v128[2];
  if ( (v56 & *((_DWORD *)v57 + 1)) == v56 && (v56 & *(_DWORD *)v57) == 0 )
  {
    if ( v26 != -30 )
      v55 = 0;
    v134 = v18;
    v133 = v5;
    v135 = 1;
    v138 = *((_DWORD *)a1 + 26);
    v136 = v11;
    v137 = v9;
    v139 = *((_DWORD *)a1 + 31);
    v140 = *((_DWORD *)a1 + 32);
    v141 = *((_DWORD *)a1 + 47);
    v142 = v11 + v141;
    v143 = a2->left;
    v144 = 0;
    v132 = (XLATEOBJ *)v128;
    v54((struct BLTINFO *)&v132, v99, v160, v55);
    return;
  }
LABEL_21:
  v27 = a1;
LABEL_22:
  v28 = v105;
  if ( v25
    || !*((_DWORD *)v27 + 53)
    || !*((_DWORD *)v27 + 54)
    || *(_DWORD *)(v105 + 96) != 3
    || *(_DWORD *)(*((_QWORD *)v27 + 3) + 96LL) != 3 )
  {
    goto LABEL_26;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v27 + 6) + 4LL) & 1) != 0 )
  {
    switch ( v26 )
    {
      case 102:
        BltLnkAccel6666(
          (unsigned __int8 *)&v5[*((int *)v27 + 47)],
          (unsigned __int8 *)(v18 + a2->left),
          *((_DWORD *)v27 + 31),
          *((_DWORD *)v27 + 32),
          v11,
          v9);
        return;
      case -120:
        BltLnkAccel8888(
          (unsigned __int8 *)&v5[*((int *)v27 + 47)],
          (unsigned __int8 *)(v18 + a2->left),
          *((_DWORD *)v27 + 31),
          *((_DWORD *)v27 + 32),
          v11,
          v9);
        return;
      case -18:
        BltLnkAccelEEEE(
          (unsigned __int8 *)&v5[*((int *)v27 + 47)],
          (unsigned __int8 *)(v18 + a2->left),
          *((_DWORD *)v27 + 31),
          *((_DWORD *)v27 + 32),
          v11,
          v9);
        return;
    }
  }
LABEL_155:
  v28 = v105;
LABEL_26:
  v29 = *((_DWORD *)v27 + 53);
  if ( v29 )
  {
    v148 = (char *)v160 + v114;
    v147 = v5;
    v149 = 1;
    v30 = *((_DWORD *)v27 + 26);
    v152 = v30;
    v150 = v11;
    v151 = 1;
    v153 = 1;
    v154 = 1;
    v155 = *((_DWORD *)v27 + 47);
    v156 = v11 + v155;
    v157 = v104;
    v158 = 1;
    v146 = *((_QWORD *)v27 + 6);
    v31 = 4 * (*(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) | (8 * *(_DWORD *)(v28 + 96)));
    v32 = v31 + 1;
    if ( (*(_DWORD *)(v146 + 4) & 1) == 0 )
      v32 = v31;
    ii = 0x1C0000000uLL;
    v126 = (&SrcCopyFunctionTable)[v32];
  }
  else
  {
    v30 = *((_DWORD *)v27 + 26);
    ii = 0x1C0000000uLL;
  }
  v134 = v18;
  v133 = (char *)v162 + v114;
  v135 = 1;
  v138 = v30;
  v136 = v11;
  v137 = 1;
  v139 = 1;
  v140 = 1;
  v141 = v104;
  v142 = v104 + v11;
  v143 = a2->left;
  v144 = 0;
  v132 = xloIdent;
  v34 = v105;
  if ( !v25 )
    v125 = (&SrcCopyFunctionTable)[4 * (*(_DWORD *)(v105 + 96) | (unsigned int)(8 * *(_DWORD *)(v105 + 96))) + 1];
  v35 = a1;
  if ( *((_DWORD *)a1 + 55) )
  {
    if ( *((_DWORD *)a1 + 54) )
    {
      if ( v29 )
      {
        v109 = (&RopFunctionTable)[*((_BYTE *)a1 + 228) & 0xF];
        v128 = (&RopFunctionTable)[(unsigned __int64)*((unsigned __int8 *)a1 + 228) >> 4];
        v101 = v9;
        for ( i = v18; v101--; v134 = i )
        {
          ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))v126)(&v146, ii, v34);
          v147 += *((int *)v35 + 31);
          ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v109)(v163, i + 4LL * v102, v160, v97);
          ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v128)(v161, i + 4LL * v102, v160, v97);
          if ( v6 )
          {
            v115((unsigned __int8 *)v160 + v110, v104, v6, v111, v103, v11, v112);
            if ( *((_DWORD *)v35 + 26) == 1 )
            {
              v6 += *((int *)v35 + 33);
              if ( v90 + 1 >= v96 )
                v6 = (unsigned __int8 *)*((_QWORD *)v35 + 11);
              v82 = 0;
              if ( v90 + 1 < v96 )
                v82 = v90 + 1;
              v90 = v82;
            }
            else
            {
              v83 = *((int *)v124 + 29);
              if ( v90 )
              {
                --v90;
                v6 -= v83;
              }
              else
              {
                v90 = v96 - 1;
                v6 = (unsigned __int8 *)(*((_QWORD *)v35 + 11) + (int)v83 * (v96 - 1));
              }
            }
            v84 = v97;
            v85 = 0LL;
            while ( v84 )
            {
              j = *(_DWORD *)((char *)v160 + v85) & *(_DWORD *)((char *)v161 + v85) | (unsigned int)~*(_DWORD *)((char *)v160 + v85) & *(_DWORD *)((char *)v163 + v85);
              *(_DWORD *)((char *)v162 + v85) = j;
              v85 += 4LL;
              --v84;
            }
          }
          else if ( *(_DWORD *)(*((_QWORD *)v35 + 2) + 96LL) == 5 )
          {
            v86 = (char *)v160 + v114;
            for ( j = v11; (_DWORD)j; j = (unsigned int)(j - 1) )
            {
              *(_WORD *)v86 = v15;
              v86[2] = BYTE2(v15);
              v86 += 3;
            }
            v87 = v97;
            v85 = 0LL;
            while ( v87 )
            {
              j = *(_DWORD *)((char *)v160 + v85) & *(_DWORD *)((char *)v161 + v85) | (unsigned int)~*(_DWORD *)((char *)v160 + v85) & *(_DWORD *)((char *)v163 + v85);
              *(_DWORD *)((char *)v162 + v85) = j;
              v85 += 4LL;
              --v87;
            }
          }
          else
          {
            v85 = v97;
            j = 0LL;
            while ( (_DWORD)v85 )
            {
              *(_DWORD *)((char *)v162 + j) = v15 & *(_DWORD *)((char *)v161 + j) | ~v15 & *(_DWORD *)((char *)v163 + j);
              j += 4LL;
              v85 = (unsigned int)(v85 - 1);
            }
          }
          if ( *((_DWORD *)v35 + 56) )
          {
            ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v113)(&v132, &v116, v160, 0LL);
            if ( *((int *)v35 + 26) <= 0 )
            {
              if ( v89 )
              {
                --v89;
                v116 += *((int *)v35 + 34);
              }
              else
              {
                v89 = *((_DWORD *)v35 + 43) - 1;
                v116 = *((_QWORD *)v35 + 10) + v89 * *((_DWORD *)v35 + 30);
              }
            }
            else
            {
              v116 += *((int *)v35 + 34);
              ii = *((unsigned int *)v35 + 43);
              if ( v89 + 1 >= (int)ii )
                v116 = *((_QWORD *)v35 + 10);
              v88 = 0;
              if ( v89 + 1 < (int)ii )
                v88 = v89 + 1;
              v89 = v88;
            }
          }
          else
          {
            ((void (__fastcall *)(XLATEOBJ **, __int64, __int64))v125)(&v132, j, v85);
          }
          i += *((int *)v35 + 32);
        }
      }
      else
      {
        if ( !v6 )
        {
          if ( *(_DWORD *)(v105 + 96) == 5 )
          {
            v73 = (char *)v161 + v114;
            for ( k = v11; k; --k )
            {
              *(_WORD *)v73 = v15;
              v73[2] = BYTE2(v15);
              v73 += 3;
            }
          }
          else
          {
            for ( m = v97; m; v161[m] = v15 )
              --m;
          }
        }
        v108 = (&RopFunctionTable)[*((_DWORD *)a1 + 51) & 0xF];
        v100 = v9;
        for ( n = v18; v100--; v134 = n )
        {
          if ( *((_DWORD *)v35 + 55) && v6 )
          {
            v115((unsigned __int8 *)v161 + v110, v104, v6, v111, v103, v11, v112);
            if ( *((_DWORD *)v35 + 26) == 1 )
            {
              v6 += *((int *)v35 + 33);
              if ( v90 + 1 >= v96 )
                v6 = (unsigned __int8 *)*((_QWORD *)v35 + 11);
              v76 = 0;
              if ( v90 + 1 < v96 )
                v76 = v90 + 1;
              v90 = v76;
            }
            else
            {
              v77 = *((int *)v124 + 29);
              if ( v90 )
              {
                --v90;
                v6 -= v77;
              }
              else
              {
                v90 = v96 - 1;
                v6 = (unsigned __int8 *)(*((_QWORD *)v35 + 11) + (int)v77 * (v96 - 1));
              }
            }
          }
          ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v108)(v162, n + 4LL * v102, v161, v97);
          if ( *((_DWORD *)v35 + 56) )
          {
            ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v113)(&v132, &v116, v160, 0LL);
            if ( *((int *)v35 + 26) <= 0 )
            {
              if ( v89 )
              {
                --v89;
                v116 += *((int *)v35 + 34);
              }
              else
              {
                v89 = *((_DWORD *)v35 + 43) - 1;
                v116 = *((_QWORD *)v35 + 10) + v89 * *((_DWORD *)v35 + 30);
              }
            }
            else
            {
              v116 += *((int *)v35 + 34);
              v78 = *((_DWORD *)v35 + 43);
              if ( v89 + 1 >= v78 )
                v116 = *((_QWORD *)v35 + 10);
              v79 = 0;
              if ( v89 + 1 < v78 )
                v79 = v89 + 1;
              v89 = v79;
            }
          }
          else
          {
            ((void (__fastcall *)(XLATEOBJ **))v125)(&v132);
          }
          n += *((int *)v35 + 32);
        }
      }
    }
    else
    {
      v107 = (&RopFunctionTable)[*((_DWORD *)a1 + 52) & 0xF];
      if ( !v6 )
      {
        if ( *(_DWORD *)(v34 + 96) == 5 )
        {
          v69 = (char *)v161 + v114;
          for ( ii = v11; (_DWORD)ii; ii = (unsigned int)(ii - 1) )
          {
            *(_WORD *)v69 = v15;
            v69[2] = BYTE2(v15);
            v69 += 3;
          }
        }
        else
        {
          for ( jj = v97; jj; v161[jj] = v15 )
            --jj;
        }
      }
      for ( kk = v18; v9--; v134 = kk )
      {
        if ( *((_DWORD *)v35 + 53) )
        {
          ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))v126)(&v146, ii, v34);
          v147 += *((int *)v35 + 31);
        }
        if ( v6 )
        {
          v115((unsigned __int8 *)v161 + v110, v104, v6, v111, v103, v11, v112);
          if ( *((_DWORD *)v35 + 26) == 1 )
          {
            v6 += *((int *)v35 + 33);
            if ( v90 + 1 >= v96 )
              v6 = (unsigned __int8 *)*((_QWORD *)v35 + 11);
            v43 = 0;
            if ( v90 + 1 < v96 )
              v43 = v90 + 1;
            v90 = v43;
          }
          else
          {
            v70 = *((int *)v124 + 29);
            if ( v90 )
            {
              --v90;
              v6 -= v70;
            }
            else
            {
              v90 = v96 - 1;
              v6 = (unsigned __int8 *)(*((_QWORD *)v35 + 11) + (int)v70 * (v96 - 1));
            }
          }
        }
        ((void (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _QWORD))v107)(v162, v161, v160, v97);
        if ( *((_DWORD *)v35 + 56) )
        {
          ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v113)(&v132, &v116, v160, 0LL);
          if ( *((int *)v35 + 26) <= 0 )
          {
            if ( v89 )
            {
              --v89;
              v116 += *((int *)v35 + 34);
            }
            else
            {
              v89 = *((_DWORD *)v35 + 43) - 1;
              v116 = *((_QWORD *)v35 + 10) + v89 * *((_DWORD *)v35 + 30);
            }
          }
          else
          {
            v116 += *((int *)v35 + 34);
            ii = *((unsigned int *)v35 + 43);
            if ( v89 + 1 >= (int)ii )
              v116 = *((_QWORD *)v35 + 10);
            v71 = 0;
            if ( v89 + 1 < (int)ii )
              v71 = v89 + 1;
            v89 = v71;
          }
        }
        else
        {
          ((void (__fastcall *)(XLATEOBJ **))v125)(&v132);
        }
        kk += *((int *)v35 + 32);
      }
    }
  }
  else
  {
    v106 = (&RopFunctionTable)[*((_BYTE *)a1 + 228) & 0xF];
    v98 = v9;
    for ( mm = v18; v98--; v134 = mm )
    {
      if ( *((_DWORD *)v35 + 53) )
      {
        ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))v126)(&v146, ii, v34);
        v147 += *((int *)v35 + 31);
      }
      v37 = (_DWORD *)(mm + 4LL * v102);
      v38 = v160;
      if ( v106 == (void (* near *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))vRop2Function6 )
      {
        v39 = v97;
        v127 = v97;
        v131 = v160;
        v130 = (_DWORD *)(mm + 4LL * v102);
        v40 = v162;
        v129 = v162;
        while ( 1 )
        {
          v41 = v39--;
          v127 = v39;
          if ( !v41 )
            break;
          ii = (unsigned int)(*v38 ^ *v37);
          *v40++ = ii;
          v129 = v40;
          v130 = ++v37;
          v131 = ++v38;
        }
      }
      else
      {
        ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v106)(v162, mm + 4LL * v102, v160, v97);
      }
      if ( *((_DWORD *)v35 + 56) )
      {
        ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v113)(&v132, &v116, v163, 0LL);
        if ( *((int *)v35 + 26) <= 0 )
        {
          if ( v89 )
          {
            --v89;
            v116 += *((int *)v35 + 34);
          }
          else
          {
            v89 = *((_DWORD *)v35 + 43) - 1;
            v116 = *((_QWORD *)v35 + 10) + v89 * *((_DWORD *)v35 + 30);
          }
        }
        else
        {
          ii = (unsigned int)(v89 + 1);
          v89 = ii;
          v116 += *((int *)v35 + 34);
          if ( (int)ii >= *((_DWORD *)v35 + 43) )
          {
            v89 = 0;
            v116 = *((_QWORD *)v35 + 10);
          }
        }
      }
      else
      {
        ((void (__fastcall *)(XLATEOBJ **, unsigned __int64, _DWORD *))v125)(&v132, ii, v38);
      }
      mm += *((int *)v35 + 32);
    }
  }
}
