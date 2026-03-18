/*
 * XREFs of ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C008A460
 * Callers:
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0089C94 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?BltLnkAccel6666@@YAXPEAE0JJJJ@Z @ 0x1C02BE414 (-BltLnkAccel6666@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccel8888@@YAXPEAE0JJJJ@Z @ 0x1C02BE4B4 (-BltLnkAccel8888@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z @ 0x1C02BE55C (-BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z.c)
 */

void __fastcall BltLnkRect(struct _BLTLNKINFO *a1, struct _RECTL *a2)
{
  int v4; // ecx
  char *v5; // r12
  const unsigned __int8 *v6; // rsi
  LONG bottom; // r13d
  LONG top; // r10d
  int v9; // edi
  LONG left; // edx
  unsigned int v11; // r14d
  __int64 v12; // r15
  int v13; // r8d
  __int64 v14; // r9
  int v15; // r8d
  LONG v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // r10d
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r10d
  char v24; // dl
  int v25; // r13d
  int v26; // r12d
  unsigned int v27; // ecx
  __int64 v28; // rax
  unsigned __int64 m; // rdx
  __int64 v30; // r8
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  void (__fastcall *v37)(unsigned __int8 *, unsigned int, const unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // rax
  int v38; // ecx
  unsigned int v39; // r13d
  int v40; // edx
  unsigned int v41; // ecx
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  void (__fastcall *v45)(struct BLTINFO *, unsigned int, unsigned int *, unsigned __int8); // r13
  unsigned __int8 v46; // r8
  int v47; // ecx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  int v54; // r8d
  int v55; // r8d
  int v56; // r8d
  int v57; // r8d
  unsigned int n; // ecx
  char *v59; // rcx
  __int64 v60; // rcx
  int v61; // ecx
  unsigned int k; // ecx
  char *v63; // rcx
  unsigned int j; // r8d
  int v65; // edi
  int v67; // eax
  __int64 v68; // rcx
  int v69; // r13d
  __int64 i; // rdx
  int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // r9d
  __int64 v75; // r8
  char *v76; // rcx
  unsigned int v77; // r9d
  int v78; // [rsp+40h] [rbp-648h]
  int v79; // [rsp+44h] [rbp-644h]
  int v80; // [rsp+48h] [rbp-640h]
  unsigned int v81; // [rsp+4Ch] [rbp-63Ch]
  unsigned int v82; // [rsp+50h] [rbp-638h]
  unsigned int v83; // [rsp+54h] [rbp-634h]
  unsigned int v84; // [rsp+68h] [rbp-620h]
  unsigned int v85; // [rsp+6Ch] [rbp-61Ch]
  unsigned int v86; // [rsp+70h] [rbp-618h]
  int v87; // [rsp+74h] [rbp-614h]
  __int64 jj; // [rsp+78h] [rbp-610h]
  __int64 ii; // [rsp+78h] [rbp-610h]
  unsigned int v90; // [rsp+78h] [rbp-610h]
  __int64 v91; // [rsp+78h] [rbp-610h]
  __int64 v92; // [rsp+78h] [rbp-610h]
  int v93; // [rsp+90h] [rbp-5F8h]
  unsigned int v94; // [rsp+90h] [rbp-5F8h]
  void (*v95)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+90h] [rbp-5F8h]
  int v96; // [rsp+90h] [rbp-5F8h]
  int v97; // [rsp+90h] [rbp-5F8h]
  int v98; // [rsp+98h] [rbp-5F0h]
  void (*v99)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *); // [rsp+A0h] [rbp-5E8h]
  void (* near *v100)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5E0h]
  void (* near *v101)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5E0h]
  void (* near *v102)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5E0h]
  void (* near *v103)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5E0h]
  void (__fastcall *v104)(unsigned __int8 *, unsigned int, const unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // [rsp+B0h] [rbp-5D8h]
  unsigned int v105; // [rsp+BCh] [rbp-5CCh]
  __int64 v106; // [rsp+C0h] [rbp-5C8h] BYREF
  __int64 v107; // [rsp+C8h] [rbp-5C0h]
  int v108; // [rsp+D0h] [rbp-5B8h]
  int v109; // [rsp+D4h] [rbp-5B4h]
  unsigned int v110; // [rsp+D8h] [rbp-5B0h]
  unsigned int v111; // [rsp+DCh] [rbp-5ACh]
  int v112; // [rsp+E0h] [rbp-5A8h]
  char v113; // [rsp+E4h] [rbp-5A4h]
  struct _BLTLNKINFO *v114; // [rsp+E8h] [rbp-5A0h]
  void (* near *v115)(struct BLTINFO *); // [rsp+F0h] [rbp-598h]
  void (* near *v116)(struct BLTINFO *); // [rsp+F8h] [rbp-590h]
  void (* near *v117)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+100h] [rbp-588h]
  XLATEOBJ *v118; // [rsp+110h] [rbp-578h] BYREF
  char *v119; // [rsp+118h] [rbp-570h]
  __int64 v120; // [rsp+120h] [rbp-568h]
  int v121; // [rsp+128h] [rbp-560h]
  unsigned int v122; // [rsp+12Ch] [rbp-55Ch]
  int v123; // [rsp+130h] [rbp-558h]
  int v124; // [rsp+134h] [rbp-554h]
  int v125; // [rsp+138h] [rbp-550h]
  int v126; // [rsp+13Ch] [rbp-54Ch]
  unsigned int v127; // [rsp+140h] [rbp-548h]
  unsigned int v128; // [rsp+144h] [rbp-544h]
  LONG v129; // [rsp+148h] [rbp-540h]
  int v130; // [rsp+14Ch] [rbp-53Ch]
  int v131; // [rsp+150h] [rbp-538h]
  __int64 v132; // [rsp+1B0h] [rbp-4D8h] BYREF
  char *v133; // [rsp+1B8h] [rbp-4D0h]
  char *v134; // [rsp+1C0h] [rbp-4C8h]
  int v135; // [rsp+1C8h] [rbp-4C0h]
  unsigned int v136; // [rsp+1CCh] [rbp-4BCh]
  int v137; // [rsp+1D0h] [rbp-4B8h]
  int v138; // [rsp+1D4h] [rbp-4B4h]
  int v139; // [rsp+1D8h] [rbp-4B0h]
  int v140; // [rsp+1DCh] [rbp-4ACh]
  int v141; // [rsp+1E0h] [rbp-4A8h]
  int v142; // [rsp+1E4h] [rbp-4A4h]
  unsigned int v143; // [rsp+1E8h] [rbp-4A0h]
  int v144; // [rsp+1ECh] [rbp-49Ch]
  int v145; // [rsp+1F0h] [rbp-498h]
  _DWORD v146[64]; // [rsp+250h] [rbp-438h] BYREF
  _DWORD v147[64]; // [rsp+350h] [rbp-338h] BYREF
  _DWORD v148[64]; // [rsp+450h] [rbp-238h] BYREF
  _DWORD v149[64]; // [rsp+550h] [rbp-138h] BYREF

  v114 = a1;
  v4 = 0;
  v85 = 0;
  v145 = 0;
  v131 = 0;
  v116 = 0LL;
  v115 = 0LL;
  v104 = 0LL;
  v99 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v83 = 0;
  v98 = 0;
  v105 = 0;
  bottom = a2->bottom;
  top = a2->top;
  v9 = bottom - top;
  left = a2->left;
  v11 = a2->right - left;
  v12 = *((_QWORD *)a1 + 2);
  v13 = *(_DWORD *)(v12 + 96);
  switch ( v13 )
  {
    case 6:
      v83 = left;
      v82 = a2->right - left;
      v98 = 4;
LABEL_3:
      v85 = v4;
LABEL_4:
      v84 = v4;
      break;
    case 1:
      v83 = left >> 5;
      v85 = (left >> 3) & 3;
      v4 = left & 0x1F;
      v82 = (v4 + v11 + 31) >> 5;
      goto LABEL_4;
    case 2:
      v83 = left >> 3;
      v85 = (left >> 1) & 3;
      v4 = left & 7;
      v82 = (v4 + v11 + 7) >> 3;
      goto LABEL_4;
    case 3:
      v83 = left >> 2;
      v4 = left & 3;
      v82 = (v4 + v11 + 3) >> 2;
      v98 = 1;
      goto LABEL_3;
    case 4:
      v83 = left >> 1;
      v4 = left & 1;
      v85 = 2 * v4;
      v82 = (v4 + v11 + 1) >> 1;
      v98 = 2;
      goto LABEL_4;
    case 5:
      v83 = (3 * left) >> 2;
      v85 = -left & 3;
      v84 = 0;
      v105 = v85;
      v98 = 3;
      v82 = (v85 + 2 * (v11 + 1) + v11 + 1) >> 2;
      break;
  }
  v14 = *((_QWORD *)a1 + 11);
  if ( v14 )
  {
    if ( v13 == 6 )
    {
      v86 = 4 * *((_DWORD *)a1 + 38);
      v34 = 4 * *((_DWORD *)a1 + 40);
      v35 = 4 * left;
    }
    else
    {
      v54 = v13 - 1;
      if ( !v54 )
      {
        v86 = *((_DWORD *)a1 + 38);
        v81 = left - *((_DWORD *)a1 + 40);
        v37 = BltLnkReadPat1;
        goto LABEL_70;
      }
      v55 = v54 - 1;
      if ( !v55 )
      {
        v86 = *((_DWORD *)a1 + 38);
        v81 = left - *((_DWORD *)a1 + 40);
        v37 = BltLnkReadPat4;
        goto LABEL_70;
      }
      v56 = v55 - 1;
      if ( !v56 )
      {
        v86 = *((_DWORD *)a1 + 38);
        v81 = left - *((_DWORD *)a1 + 40);
        goto LABEL_69;
      }
      v57 = v56 - 1;
      if ( v57 )
      {
        if ( v57 != 1 )
          goto LABEL_71;
        v86 = 3 * *((_DWORD *)a1 + 38);
        v36 = 3 * (left - *((_DWORD *)a1 + 40));
        goto LABEL_68;
      }
      v86 = 2 * *((_DWORD *)a1 + 38);
      v34 = 2 * *((_DWORD *)a1 + 40);
      v35 = 2 * left;
    }
    v36 = v35 - v34;
LABEL_68:
    v81 = v36;
LABEL_69:
    v37 = BltLnkReadPat;
LABEL_70:
    v104 = v37;
LABEL_71:
    if ( v81 >= v86 )
      v81 %= v86;
    v87 = *((_DWORD *)a1 + 39);
    v80 = top - *((_DWORD *)a1 + 41);
    v15 = *((_DWORD *)a1 + 26);
    if ( v15 < 0 )
      v80 = bottom + -*((_DWORD *)a1 + 41) - 1;
    if ( v80 >= v87 )
    {
      v80 %= v87;
    }
    else if ( v80 < 0 )
    {
      v80 = v87 - ~v80 % v87 - 1;
    }
    v6 = (const unsigned __int8 *)(v14 + v80 * *((_DWORD *)a1 + 29));
    goto LABEL_7;
  }
  v81 = *((_DWORD *)a1 + 37);
  v15 = *((_DWORD *)a1 + 26);
LABEL_7:
  if ( v15 <= 0 )
    v16 = bottom - 1;
  else
    v16 = top;
  v17 = *((_QWORD *)a1 + 9) + v16 * *((_DWORD *)a1 + 28);
  v18 = *((_QWORD *)a1 + 8);
  if ( v18 )
  {
    v132 = *((_QWORD *)a1 + 6);
    v19 = *((_DWORD *)a1 + 36) - *((_DWORD *)a1 + 1) + top;
    *((_DWORD *)a1 + 50) = v19;
    v20 = a2->left + *((_DWORD *)a1 + 35) - *(_DWORD *)a1;
    *((_DWORD *)a1 + 47) = v20;
    *((_DWORD *)a1 + 48) = v20 + v11;
    v21 = *((_DWORD *)a1 + 27);
    if ( v15 <= 0 )
      v22 = v21 * (v19 + v9 - 1);
    else
      v22 = v19 * v21;
    v5 = (char *)(v22 + v18);
  }
  v23 = *((_DWORD *)a1 + 56);
  if ( v23 )
  {
    v39 = a2->left + *((_DWORD *)a1 + 44) - *(_DWORD *)a1;
    v40 = a2->top + *((_DWORD *)a1 + 45) - *((_DWORD *)a1 + 1);
    v79 = v40;
    if ( v15 < 0 )
    {
      v40 = v9 + v40 - 1;
      v79 = v40;
    }
    v41 = *((_DWORD *)a1 + 42);
    v94 = v41;
    if ( v39 >= v41 )
    {
      v39 %= v41;
      v40 = v79;
    }
    v42 = *((_DWORD *)a1 + 43);
    if ( v40 >= v42 )
    {
      v79 = v40 % v42;
    }
    else if ( v40 < 0 )
    {
      v79 = v42 - ~v40 % v42 - 1;
    }
    v107 = *((_QWORD *)a1 + 10);
    v106 = v107 + v79 * *((_DWORD *)a1 + 30);
    v111 = v39;
    v110 = v94;
    v109 = v79;
    v108 = v42;
    v113 = *((_BYTE *)a1 + 229);
    v112 = *((_DWORD *)a1 + 34);
    v43 = *(_DWORD *)(v12 + 96);
    if ( v43 == 6 )
    {
      v99 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk32;
    }
    else
    {
      v48 = v43 - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( v49 )
        {
          v50 = v49 - 1;
          if ( v50 )
          {
            v51 = v50 - 1;
            if ( v51 )
            {
              if ( v51 == 1 )
                v99 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk24;
            }
            else
            {
              v99 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk16;
            }
          }
          else
          {
            v99 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk8;
          }
        }
        else
        {
          v99 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk4;
        }
      }
      else
      {
        v99 = BltLnkSrcCopyMsk1;
      }
    }
  }
  else
  {
    v79 = v78;
  }
  if ( *((int *)a1 + 25) <= 0 || v15 <= 0 )
    goto LABEL_24;
  v24 = *((_BYTE *)a1 + 228);
  if ( v24 == -52
    && v23
    && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == *(_DWORD *)(v12 + 96)
    && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
  {
    v120 = v17;
    v119 = v5;
    v121 = 1;
    v124 = v15;
    v122 = v11;
    v123 = v9;
    v125 = *((_DWORD *)a1 + 31);
    v126 = *((_DWORD *)a1 + 32);
    v127 = *((_DWORD *)a1 + 47);
    v128 = v11 + v127;
    v129 = a2->left;
    v130 = 0;
    v118 = xloIdent;
    ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _DWORD *))v99)(&v118, &v106, v146, v148);
    return;
  }
  if ( v24 != -72 && v24 != -30 )
    goto LABEL_20;
  if ( v23 )
  {
LABEL_24:
    v25 = *((_DWORD *)a1 + 53);
    if ( v25 )
    {
      v134 = (char *)v146 + v105;
      v133 = v5;
      v135 = 1;
      v26 = *((_DWORD *)a1 + 26);
      v138 = v26;
      v136 = v11;
      v137 = 1;
      v139 = 1;
      v140 = 1;
      v141 = *((_DWORD *)a1 + 47);
      v142 = v11 + v141;
      v143 = v84;
      v144 = 1;
      v132 = *((_QWORD *)a1 + 6);
      v27 = 4 * (*(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) | (8 * *(_DWORD *)(v12 + 96)));
      v28 = v27 + 1;
      if ( (*(_DWORD *)(v132 + 4) & 1) == 0 )
        v28 = v27;
      m = 0x1C0000000uLL;
      v116 = (&SrcCopyFunctionTable)[v28];
    }
    else
    {
      v26 = *((_DWORD *)a1 + 26);
      m = 0x1C0000000uLL;
    }
    v120 = v17;
    v119 = (char *)v148 + v105;
    v121 = 1;
    v124 = v26;
    v122 = v11;
    v123 = 1;
    v125 = 1;
    v126 = 1;
    v127 = v84;
    v128 = v84 + v11;
    v129 = a2->left;
    v130 = 0;
    v118 = xloIdent;
    v30 = v12;
    if ( !v23 )
      v115 = (&SrcCopyFunctionTable)[4 * (*(_DWORD *)(v12 + 96) | (unsigned int)(8 * *(_DWORD *)(v12 + 96))) + 1];
    if ( *((_DWORD *)a1 + 55) )
    {
      if ( *((_DWORD *)a1 + 54) )
      {
        if ( v25 )
        {
          v103 = (&RopFunctionTable)[*((_BYTE *)a1 + 228) & 0xF];
          v117 = (&RopFunctionTable)[(unsigned __int64)*((unsigned __int8 *)a1 + 228) >> 4];
          v97 = v9;
          v92 = v17;
          v69 = v79;
          while ( v97-- )
          {
            ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))v116)(&v132, m, v30);
            v133 += *((int *)a1 + 31);
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v103)(v149, v92 + 4LL * v83, v146, v82);
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v117)(v147, v92 + 4LL * v83, v146, v82);
            if ( v6 )
            {
              v104((unsigned __int8 *)v146 + v85, v84, v6, v86, v81, v11, v98);
              if ( *((_DWORD *)a1 + 26) == 1 )
              {
                v6 += *((int *)a1 + 33);
                if ( v80 + 1 >= v87 )
                  v6 = (const unsigned __int8 *)*((_QWORD *)a1 + 11);
                v72 = 0;
                if ( v80 + 1 < v87 )
                  v72 = v80 + 1;
                v80 = v72;
              }
              else
              {
                v73 = *((int *)v114 + 29);
                if ( v80 )
                {
                  --v80;
                  v6 -= v73;
                }
                else
                {
                  v80 = v87 - 1;
                  v6 = (const unsigned __int8 *)(*((_QWORD *)a1 + 11) + (v87 - 1) * (int)v73);
                }
              }
              v74 = v82;
              v75 = 0LL;
              while ( v74 )
              {
                i = *(_DWORD *)((char *)v146 + v75) & *(_DWORD *)((char *)v147 + v75) | (unsigned int)~*(_DWORD *)((char *)v146 + v75) & *(_DWORD *)((char *)v149 + v75);
                *(_DWORD *)((char *)v148 + v75) = i;
                v75 += 4LL;
                --v74;
              }
            }
            else if ( *(_DWORD *)(*((_QWORD *)a1 + 2) + 96LL) == 5 )
            {
              v76 = (char *)v146 + v105;
              for ( i = v11; (_DWORD)i; i = (unsigned int)(i - 1) )
              {
                *(_WORD *)v76 = v81;
                v76[2] = BYTE2(v81);
                v76 += 3;
              }
              v77 = v82;
              v75 = 0LL;
              while ( v77 )
              {
                i = *(_DWORD *)((char *)v146 + v75) & *(_DWORD *)((char *)v147 + v75) | (unsigned int)~*(_DWORD *)((char *)v146 + v75) & *(_DWORD *)((char *)v149 + v75);
                *(_DWORD *)((char *)v148 + v75) = i;
                v75 += 4LL;
                --v77;
              }
            }
            else
            {
              v75 = v82;
              i = 0LL;
              while ( (_DWORD)v75 )
              {
                *(_DWORD *)((char *)v148 + i) = v81 & *(_DWORD *)((char *)v147 + i) | ~v81 & *(_DWORD *)((char *)v149 + i);
                i += 4LL;
                v75 = (unsigned int)(v75 - 1);
              }
            }
            if ( *((_DWORD *)a1 + 56) )
            {
              ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v99)(&v118, &v106, v146, 0LL);
              if ( *((int *)a1 + 26) <= 0 )
              {
                if ( v69 )
                {
                  --v69;
                  v106 += *((int *)a1 + 34);
                }
                else
                {
                  v69 = *((_DWORD *)a1 + 43) - 1;
                  v106 = *((_QWORD *)a1 + 10) + v69 * *((_DWORD *)a1 + 30);
                }
              }
              else
              {
                ++v69;
                v106 += *((int *)a1 + 34);
                if ( v69 >= *((_DWORD *)a1 + 43) )
                {
                  v69 = 0;
                  v106 = *((_QWORD *)a1 + 10);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(XLATEOBJ **, __int64, __int64))v115)(&v118, i, v75);
            }
            v92 += *((int *)a1 + 32);
            v120 = v92;
          }
        }
        else
        {
          if ( !v6 )
          {
            if ( *(_DWORD *)(v12 + 96) == 5 )
            {
              v63 = (char *)v147 + v105;
              for ( j = v11; j; --j )
              {
                *(_WORD *)v63 = v81;
                v63[2] = BYTE2(v81);
                v63 += 3;
              }
            }
            else
            {
              for ( k = v82; k; v147[k] = v81 )
                --k;
            }
          }
          v102 = (&RopFunctionTable)[*((_DWORD *)a1 + 51) & 0xF];
          v96 = v9;
          v91 = v17;
          v65 = v79;
          while ( v96-- )
          {
            if ( *((_DWORD *)a1 + 55) && v6 )
            {
              v104((unsigned __int8 *)v147 + v85, v84, v6, v86, v81, v11, v98);
              if ( *((_DWORD *)a1 + 26) == 1 )
              {
                v6 += *((int *)a1 + 33);
                if ( v80 + 1 >= v87 )
                  v6 = (const unsigned __int8 *)*((_QWORD *)a1 + 11);
                v67 = 0;
                if ( v80 + 1 < v87 )
                  v67 = v80 + 1;
                v80 = v67;
              }
              else
              {
                v68 = *((int *)v114 + 29);
                if ( v80 )
                {
                  --v80;
                  v6 -= v68;
                }
                else
                {
                  v80 = v87 - 1;
                  v6 = (const unsigned __int8 *)(*((_QWORD *)a1 + 11) + (v87 - 1) * (int)v68);
                }
              }
            }
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v102)(v148, v91 + 4LL * v83, v147, v82);
            if ( *((_DWORD *)a1 + 56) )
            {
              ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v99)(&v118, &v106, v146, 0LL);
              if ( *((int *)a1 + 26) <= 0 )
              {
                if ( v65 )
                {
                  --v65;
                  v106 += *((int *)a1 + 34);
                }
                else
                {
                  v65 = *((_DWORD *)a1 + 43) - 1;
                  v106 = *((_QWORD *)a1 + 10) + v65 * *((_DWORD *)a1 + 30);
                }
              }
              else
              {
                ++v65;
                v106 += *((int *)a1 + 34);
                if ( v65 >= *((_DWORD *)a1 + 43) )
                {
                  v65 = 0;
                  v106 = *((_QWORD *)a1 + 10);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(XLATEOBJ **))v115)(&v118);
            }
            v91 += *((int *)a1 + 32);
            v120 = v91;
          }
        }
      }
      else
      {
        v101 = (&RopFunctionTable)[*((_DWORD *)a1 + 52) & 0xF];
        if ( !v6 )
        {
          if ( *(_DWORD *)(v12 + 96) == 5 )
          {
            v59 = (char *)v147 + v105;
            for ( m = v11; (_DWORD)m; m = (unsigned int)(m - 1) )
            {
              *(_WORD *)v59 = v81;
              v59[2] = BYTE2(v81);
              v59 += 3;
            }
          }
          else
          {
            for ( n = v82; n; v147[n] = v81 )
              --n;
          }
        }
        for ( ii = v17; v9--; v120 = ii )
        {
          if ( *((_DWORD *)a1 + 53) )
          {
            ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))v116)(&v132, m, v30);
            v133 += *((int *)a1 + 31);
          }
          if ( v6 )
          {
            v104((unsigned __int8 *)v147 + v85, v84, v6, v86, v81, v11, v98);
            if ( *((_DWORD *)a1 + 26) == 1 )
            {
              v6 += *((int *)a1 + 33);
              if ( v80 + 1 >= v87 )
                v6 = (const unsigned __int8 *)*((_QWORD *)a1 + 11);
              v33 = 0;
              if ( v80 + 1 < v87 )
                v33 = v80 + 1;
              v80 = v33;
            }
            else
            {
              v60 = *((int *)v114 + 29);
              if ( v80 )
              {
                --v80;
                v6 -= v60;
              }
              else
              {
                v80 = v87 - 1;
                v6 = (const unsigned __int8 *)(*((_QWORD *)a1 + 11) + (v87 - 1) * (int)v60);
              }
            }
          }
          ((void (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _QWORD))v101)(v148, v147, v146, v82);
          if ( *((_DWORD *)a1 + 56) )
          {
            ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v99)(&v118, &v106, v146, 0LL);
            v61 = v79;
            if ( *((int *)a1 + 26) <= 0 )
            {
              if ( v79 )
              {
                --v79;
                v106 += *((int *)a1 + 34);
              }
              else
              {
                v79 = *((_DWORD *)a1 + 43) - 1;
                v106 = *((_QWORD *)a1 + 10) + v79 * *((_DWORD *)a1 + 30);
              }
            }
            else
            {
              ++v79;
              v106 += *((int *)a1 + 34);
              if ( v61 + 1 >= *((_DWORD *)a1 + 43) )
              {
                v79 = 0;
                v106 = *((_QWORD *)a1 + 10);
              }
            }
          }
          else
          {
            ((void (__fastcall *)(XLATEOBJ **))v115)(&v118);
          }
          ii += *((int *)a1 + 32);
        }
      }
    }
    else
    {
      v100 = (&RopFunctionTable)[*((_BYTE *)a1 + 228) & 0xF];
      v93 = v9;
      for ( jj = v17; v93--; v120 = jj )
      {
        if ( *((_DWORD *)a1 + 53) )
        {
          ((void (__fastcall *)(__int64 *, unsigned __int64, __int64))v116)(&v132, m, v30);
          v133 += *((int *)a1 + 31);
        }
        ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v100)(v148, jj + 4LL * v83, v146, v82);
        if ( *((_DWORD *)a1 + 56) )
        {
          ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v99)(&v118, &v106, v149, 0LL);
          v38 = v79;
          if ( *((int *)a1 + 26) <= 0 )
          {
            if ( v79 )
            {
              --v79;
              v106 += *((int *)a1 + 34);
            }
            else
            {
              v79 = *((_DWORD *)a1 + 43) - 1;
              v106 = *((_QWORD *)a1 + 10) + v79 * *((_DWORD *)a1 + 30);
            }
          }
          else
          {
            ++v79;
            v106 += *((int *)a1 + 34);
            if ( v38 + 1 >= *((_DWORD *)a1 + 43) )
            {
              v79 = 0;
              v106 = *((_QWORD *)a1 + 10);
            }
          }
        }
        else
        {
          ((void (__fastcall *)(XLATEOBJ **))v115)(&v118);
        }
        jj += *((int *)a1 + 32);
      }
    }
    return;
  }
  v90 = *((_DWORD *)a1 + 37);
  if ( v90 == -1
    || *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) != 1
    || (v44 = *(_DWORD *)(v12 + 96), (unsigned int)(v44 - 3) > 3) )
  {
LABEL_20:
    if ( !v23
      && *((_DWORD *)a1 + 53)
      && *((_DWORD *)a1 + 54)
      && *(_DWORD *)(v12 + 96) == 3
      && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == 3
      && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
    {
      switch ( v24 )
      {
        case 102:
          BltLnkAccel6666(
            (unsigned __int8 *)&v5[*((int *)a1 + 47)],
            (unsigned __int8 *)(v17 + a2->left),
            *((_DWORD *)a1 + 31),
            *((_DWORD *)a1 + 32),
            v11,
            v9);
          return;
        case -120:
          BltLnkAccel8888(
            (unsigned __int8 *)&v5[*((int *)a1 + 47)],
            (unsigned __int8 *)(v17 + a2->left),
            *((_DWORD *)a1 + 31),
            *((_DWORD *)a1 + 32),
            v11,
            v9);
          return;
        case -18:
          BltLnkAccelEEEE(
            (unsigned __int8 *)&v5[*((int *)a1 + 47)],
            (unsigned __int8 *)(v17 + a2->left),
            *((_DWORD *)a1 + 31),
            *((_DWORD *)a1 + 32),
            v11,
            v9);
          return;
      }
    }
    goto LABEL_24;
  }
  v45 = 0LL;
  v46 = -1;
  if ( v44 == 6 )
  {
    v45 = BltLnkPatMaskCopy32;
  }
  else
  {
    v52 = v44 - 3;
    if ( !v52 )
    {
      v45 = BltLnkPatMaskCopy8;
      v47 = 255;
      goto LABEL_101;
    }
    v53 = v52 - 1;
    if ( !v53 )
    {
      v45 = BltLnkPatMaskCopy16;
      v47 = 0xFFFF;
      goto LABEL_101;
    }
    if ( v53 != 1 )
    {
      v47 = *((_DWORD *)a1 + 37);
      goto LABEL_101;
    }
    v45 = BltLnkPatMaskCopy24;
  }
  v47 = 0xFFFFFF;
LABEL_101:
  v117 = (void (* near *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))*((_QWORD *)a1 + 6);
  v95 = v117[2];
  if ( (v47 & *((_DWORD *)v95 + 1)) != v47 || (*(_DWORD *)v95 & v47) != 0 )
    goto LABEL_20;
  if ( v24 != -30 )
    v46 = 0;
  v120 = v17;
  v119 = v5;
  v121 = 1;
  v124 = *((_DWORD *)a1 + 26);
  v122 = v11;
  v123 = v9;
  v125 = *((_DWORD *)a1 + 31);
  v126 = *((_DWORD *)a1 + 32);
  v127 = *((_DWORD *)a1 + 47);
  v128 = v11 + v127;
  v129 = a2->left;
  v130 = 0;
  v118 = (XLATEOBJ *)v117;
  v45((struct BLTINFO *)&v118, v90, v146, v46);
}
