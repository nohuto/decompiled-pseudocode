/*
 * XREFs of ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C00D3AF0
 * Callers:
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00D32E8 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?BltLnkAccel6666@@YAXPEAE0JJJJ@Z @ 0x1C02D0DA4 (-BltLnkAccel6666@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccel8888@@YAXPEAE0JJJJ@Z @ 0x1C02D0E44 (-BltLnkAccel8888@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z @ 0x1C02D0EEC (-BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z.c)
 */

void __fastcall BltLnkRect(struct _BLTLNKINFO *a1, struct _RECTL *a2)
{
  char *v4; // r12
  const unsigned __int8 *v5; // rsi
  LONG top; // r9d
  int v7; // ebx
  LONG left; // edx
  unsigned int v9; // r14d
  __int64 v10; // r11
  int v11; // r8d
  __int64 v12; // r10
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  int v16; // r9d
  int v17; // ecx
  int v18; // eax
  int v19; // r9d
  char v20; // dl
  int v21; // r10d
  int v22; // r11d
  __int64 v23; // r12
  unsigned int v24; // ecx
  __int64 v25; // rax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  void (__fastcall *v32)(unsigned __int8 *, __int64, const unsigned __int8 *, int, unsigned int, unsigned int, unsigned int); // rax
  int v33; // ecx
  unsigned int v34; // r10d
  int v35; // edx
  unsigned int v36; // ecx
  int v37; // r13d
  int v38; // eax
  unsigned int v39; // r13d
  int v40; // ecx
  void (__fastcall *v41)(struct BLTINFO *, unsigned int, unsigned int *, unsigned __int8); // r10
  unsigned __int8 v42; // r8
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // r8d
  int v50; // r8d
  int v51; // r8d
  int v52; // r8d
  int v53; // ecx
  int v54; // ecx
  unsigned int n; // ecx
  char *v56; // rcx
  unsigned int m; // edx
  int v58; // ecx
  unsigned int k; // ecx
  char *v60; // rcx
  unsigned int j; // r8d
  int v62; // ebx
  int v64; // eax
  int v65; // r13d
  __int64 i; // rdx
  int v68; // eax
  unsigned int v69; // r9d
  __int64 v70; // r8
  char *v71; // rcx
  unsigned int v72; // r9d
  int v73; // [rsp+40h] [rbp-638h]
  int v74; // [rsp+44h] [rbp-634h]
  int v75; // [rsp+48h] [rbp-630h]
  unsigned int v76; // [rsp+4Ch] [rbp-62Ch]
  unsigned int v77; // [rsp+50h] [rbp-628h]
  unsigned int v78; // [rsp+54h] [rbp-624h]
  unsigned int v79; // [rsp+68h] [rbp-610h]
  unsigned int v80; // [rsp+6Ch] [rbp-60Ch]
  unsigned int v81; // [rsp+70h] [rbp-608h]
  int v82; // [rsp+74h] [rbp-604h]
  __int64 v83; // [rsp+78h] [rbp-600h]
  int v84; // [rsp+90h] [rbp-5E8h]
  void (*v85)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+90h] [rbp-5E8h]
  int v86; // [rsp+90h] [rbp-5E8h]
  int v87; // [rsp+90h] [rbp-5E8h]
  int v88; // [rsp+98h] [rbp-5E0h]
  void (*v89)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *); // [rsp+A0h] [rbp-5D8h]
  __int64 v90; // [rsp+A8h] [rbp-5D0h]
  void (* near *v91)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5D0h]
  void (* near *v92)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5D0h]
  void (* near *v93)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5D0h]
  void (* near *v94)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5D0h]
  unsigned int v95; // [rsp+B0h] [rbp-5C8h]
  void (__fastcall *v96)(unsigned __int8 *, __int64, const unsigned __int8 *, int, unsigned int, unsigned int, unsigned int); // [rsp+B8h] [rbp-5C0h]
  _QWORD v97[5]; // [rsp+C0h] [rbp-5B8h] BYREF
  void (* near *v98)(struct BLTINFO *); // [rsp+E8h] [rbp-590h]
  void (* near *v99)(struct BLTINFO *); // [rsp+F0h] [rbp-588h]
  void (* near *v100)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+F8h] [rbp-580h]
  XLATEOBJ *v101; // [rsp+100h] [rbp-578h] BYREF
  char *v102; // [rsp+108h] [rbp-570h]
  __int64 v103; // [rsp+110h] [rbp-568h]
  int v104; // [rsp+118h] [rbp-560h]
  unsigned int v105; // [rsp+11Ch] [rbp-55Ch]
  int v106; // [rsp+120h] [rbp-558h]
  int v107; // [rsp+124h] [rbp-554h]
  int v108; // [rsp+128h] [rbp-550h]
  int v109; // [rsp+12Ch] [rbp-54Ch]
  unsigned int v110; // [rsp+130h] [rbp-548h]
  unsigned int v111; // [rsp+134h] [rbp-544h]
  LONG v112; // [rsp+138h] [rbp-540h]
  int v113; // [rsp+13Ch] [rbp-53Ch]
  int v114; // [rsp+140h] [rbp-538h]
  __int64 v115; // [rsp+1A0h] [rbp-4D8h] BYREF
  char *v116; // [rsp+1A8h] [rbp-4D0h]
  char *v117; // [rsp+1B0h] [rbp-4C8h]
  int v118; // [rsp+1B8h] [rbp-4C0h]
  unsigned int v119; // [rsp+1BCh] [rbp-4BCh]
  int v120; // [rsp+1C0h] [rbp-4B8h]
  int v121; // [rsp+1C4h] [rbp-4B4h]
  int v122; // [rsp+1C8h] [rbp-4B0h]
  int v123; // [rsp+1CCh] [rbp-4ACh]
  int v124; // [rsp+1D0h] [rbp-4A8h]
  int v125; // [rsp+1D4h] [rbp-4A4h]
  unsigned int v126; // [rsp+1D8h] [rbp-4A0h]
  int v127; // [rsp+1DCh] [rbp-49Ch]
  int v128; // [rsp+1E0h] [rbp-498h]
  _DWORD v129[64]; // [rsp+240h] [rbp-438h] BYREF
  _DWORD v130[64]; // [rsp+340h] [rbp-338h] BYREF
  _DWORD v131[64]; // [rsp+440h] [rbp-238h] BYREF
  _DWORD v132[64]; // [rsp+540h] [rbp-138h] BYREF

  v80 = 0;
  v128 = 0;
  v114 = 0;
  v99 = 0LL;
  v98 = 0LL;
  v96 = 0LL;
  v89 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v78 = 0;
  v88 = 0;
  v95 = 0;
  memset(v97, 0, sizeof(v97));
  top = a2->top;
  v7 = a2->bottom - top;
  left = a2->left;
  v9 = a2->right - a2->left;
  v10 = *((_QWORD *)a1 + 2);
  v90 = v10;
  v11 = *(_DWORD *)(v10 + 96);
  switch ( v11 )
  {
    case 6:
      v78 = a2->left;
      v77 = a2->right - a2->left;
      v80 = 0;
      v79 = 0;
      v88 = 4;
      break;
    case 1:
      v78 = left >> 5;
      v80 = (left >> 3) & 3;
      v79 = a2->left & 0x1F;
      v77 = (v79 + v9 + 31) >> 5;
      break;
    case 2:
      v78 = left >> 3;
      v80 = (left >> 1) & 3;
      v79 = a2->left & 7;
      v77 = (v79 + v9 + 7) >> 3;
      break;
    case 3:
      v78 = left >> 2;
      v80 = a2->left & 3;
      v79 = v80;
      v77 = (v80 + v9 + 3) >> 2;
      v88 = 1;
      break;
    case 4:
      v78 = left >> 1;
      v48 = a2->left & 1;
      v80 = 2 * v48;
      v79 = v48;
      v77 = (v48 + v9 + 1) >> 1;
      v88 = 2;
      break;
    case 5:
      v78 = (3 * left) >> 2;
      v80 = -left & 3;
      v79 = 0;
      v95 = v80;
      v88 = 3;
      v77 = (v80 + 2 * (v9 + 1) + v9 + 1) >> 2;
      break;
  }
  v12 = *((_QWORD *)a1 + 11);
  if ( v12 )
  {
    if ( v11 == 6 )
    {
      v81 = 4 * *((_DWORD *)a1 + 38);
      v29 = 4 * *((_DWORD *)a1 + 40);
      v30 = 4 * left;
    }
    else
    {
      v49 = v11 - 1;
      if ( !v49 )
      {
        v81 = *((_DWORD *)a1 + 38);
        v76 = left - *((_DWORD *)a1 + 40);
        v32 = (void (__fastcall *)(unsigned __int8 *, __int64, const unsigned __int8 *, int, unsigned int, unsigned int, unsigned int))BltLnkReadPat1;
        goto LABEL_67;
      }
      v50 = v49 - 1;
      if ( !v50 )
      {
        v81 = *((_DWORD *)a1 + 38);
        v76 = left - *((_DWORD *)a1 + 40);
        v32 = (void (__fastcall *)(unsigned __int8 *, __int64, const unsigned __int8 *, int, unsigned int, unsigned int, unsigned int))BltLnkReadPat4;
        goto LABEL_67;
      }
      v51 = v50 - 1;
      if ( !v51 )
      {
        v81 = *((_DWORD *)a1 + 38);
        v76 = left - *((_DWORD *)a1 + 40);
        goto LABEL_66;
      }
      v52 = v51 - 1;
      if ( v52 )
      {
        if ( v52 != 1 )
          goto LABEL_68;
        v81 = 3 * *((_DWORD *)a1 + 38);
        v31 = 3 * (left - *((_DWORD *)a1 + 40));
        goto LABEL_65;
      }
      v81 = 2 * *((_DWORD *)a1 + 38);
      v29 = 2 * *((_DWORD *)a1 + 40);
      v30 = 2 * left;
    }
    v31 = v30 - v29;
LABEL_65:
    v76 = v31;
LABEL_66:
    v32 = BltLnkReadPat;
LABEL_67:
    v96 = v32;
LABEL_68:
    if ( v76 >= v81 )
      v76 %= v81;
    v82 = *((_DWORD *)a1 + 39);
    v75 = top - *((_DWORD *)a1 + 41);
    v13 = *((_DWORD *)a1 + 26);
    if ( v13 < 0 )
      v75 = a2->bottom + -*((_DWORD *)a1 + 41) - 1;
    if ( v75 >= v82 )
    {
      v75 %= v82;
    }
    else if ( v75 < 0 )
    {
      v75 = v82 - ~v75 % v82 - 1;
    }
    v5 = (const unsigned __int8 *)(v12 + v75 * *((_DWORD *)a1 + 29));
    goto LABEL_5;
  }
  v76 = *((_DWORD *)a1 + 37);
  v13 = *((_DWORD *)a1 + 26);
LABEL_5:
  if ( v13 <= 0 )
    v14 = *((_DWORD *)a1 + 28) * (a2->bottom - 1);
  else
    v14 = top * *((_DWORD *)a1 + 28);
  v83 = *((_QWORD *)a1 + 9) + v14;
  v15 = *((_QWORD *)a1 + 8);
  if ( v15 )
  {
    v115 = *((_QWORD *)a1 + 6);
    v16 = *((_DWORD *)a1 + 36) - *((_DWORD *)a1 + 1) + top;
    *((_DWORD *)a1 + 50) = v16;
    v17 = a2->left + *((_DWORD *)a1 + 35) - *(_DWORD *)a1;
    *((_DWORD *)a1 + 47) = v17;
    *((_DWORD *)a1 + 48) = v17 + v9;
    if ( v13 <= 0 )
      v18 = *((_DWORD *)a1 + 27) * (v16 + v7 - 1);
    else
      v18 = v16 * *((_DWORD *)a1 + 27);
    v4 = (char *)(v18 + v15);
  }
  v19 = *((_DWORD *)a1 + 56);
  if ( v19 )
  {
    v34 = a2->left + *((_DWORD *)a1 + 44) - *(_DWORD *)a1;
    v35 = a2->top + *((_DWORD *)a1 + 45) - *((_DWORD *)a1 + 1);
    v74 = v35;
    if ( v13 < 0 )
    {
      v35 = v7 + v35 - 1;
      v74 = v35;
    }
    v36 = *((_DWORD *)a1 + 42);
    if ( v34 >= v36 )
    {
      v34 %= v36;
      v35 = v74;
    }
    v37 = *((_DWORD *)a1 + 43);
    if ( v35 >= v37 )
    {
      v74 = v35 % v37;
    }
    else if ( v35 < 0 )
    {
      v74 = v37 - ~v35 % v37 - 1;
    }
    v97[1] = *((_QWORD *)a1 + 10);
    v97[0] = v97[1] + v74 * *((_DWORD *)a1 + 30);
    v97[3] = __PAIR64__(v34, v36);
    v97[2] = __PAIR64__(v74, v37);
    BYTE4(v97[4]) = *((_BYTE *)a1 + 229);
    LODWORD(v97[4]) = *((_DWORD *)a1 + 34);
    v38 = *(_DWORD *)(v10 + 96);
    if ( v38 == 6 )
    {
      v89 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk32;
    }
    else
    {
      v44 = v38 - 1;
      if ( v44 )
      {
        v45 = v44 - 1;
        if ( v45 )
        {
          v46 = v45 - 1;
          if ( v46 )
          {
            v47 = v46 - 1;
            if ( v47 )
            {
              if ( v47 == 1 )
                v89 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk24;
            }
            else
            {
              v89 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk16;
            }
          }
          else
          {
            v89 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk8;
          }
        }
        else
        {
          v89 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk4;
        }
      }
      else
      {
        v89 = BltLnkSrcCopyMsk1;
      }
    }
  }
  else
  {
    v74 = v73;
  }
  if ( *((int *)a1 + 25) <= 0 || v13 <= 0 )
    goto LABEL_22;
  v20 = *((_BYTE *)a1 + 228);
  if ( v20 == -52
    && v19
    && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == *(_DWORD *)(v10 + 96)
    && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
  {
    v103 = v83;
    v102 = v4;
    v104 = 1;
    v107 = v13;
    v105 = v9;
    v106 = v7;
    v108 = *((_DWORD *)a1 + 31);
    v109 = *((_DWORD *)a1 + 32);
    v110 = *((_DWORD *)a1 + 47);
    v111 = v9 + v110;
    v112 = a2->left;
    v113 = 0;
    v101 = xloIdent;
    ((void (__fastcall *)(XLATEOBJ **, _QWORD *, _DWORD *, _DWORD *))v89)(&v101, v97, v129, v131);
    return;
  }
  if ( v20 != -72 && v20 != -30 )
    goto LABEL_18;
  if ( v19 )
  {
LABEL_22:
    v21 = *((_DWORD *)a1 + 53);
    v22 = *((_DWORD *)a1 + 26);
    if ( v21 )
    {
      v117 = (char *)v129 + v95;
      v116 = v4;
      v118 = 1;
      v121 = v22;
      v119 = v9;
      v120 = 1;
      v122 = 1;
      v123 = 1;
      v124 = *((_DWORD *)a1 + 47);
      v125 = v9 + v124;
      v126 = v79;
      v127 = 1;
      v115 = *((_QWORD *)a1 + 6);
      v23 = v90;
      v24 = 4 * (*(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) | (8 * *(_DWORD *)(v90 + 96)));
      v25 = v24 + 1;
      if ( (*(_DWORD *)(v115 + 4) & 1) == 0 )
        v25 = v24;
      v99 = (&SrcCopyFunctionTable)[v25];
    }
    else
    {
      v23 = v90;
    }
    v103 = v83;
    v102 = (char *)v131 + v95;
    v104 = 1;
    v107 = v22;
    v105 = v9;
    v106 = 1;
    v108 = 1;
    v109 = 1;
    v110 = v79;
    v111 = v79 + v9;
    v112 = a2->left;
    v113 = 0;
    v101 = xloIdent;
    if ( !v19 )
      v98 = (&SrcCopyFunctionTable)[4 * (*(_DWORD *)(v23 + 96) | (unsigned int)(8 * *(_DWORD *)(v23 + 96))) + 1];
    if ( *((_DWORD *)a1 + 55) )
    {
      if ( *((_DWORD *)a1 + 54) )
      {
        if ( v21 )
        {
          v94 = (&RopFunctionTable)[*((_BYTE *)a1 + 228) & 0xF];
          v100 = (&RopFunctionTable)[(unsigned __int64)*((unsigned __int8 *)a1 + 228) >> 4];
          v87 = v7;
          v65 = v74;
          while ( v87-- )
          {
            ((void (__fastcall *)(__int64 *))v99)(&v115);
            v116 += *((int *)a1 + 31);
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v94)(v132, v83 + 4LL * v78, v129, v77);
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v100)(v130, v83 + 4LL * v78, v129, v77);
            if ( v5 )
            {
              v96((unsigned __int8 *)v129 + v80, v79, v5, v81, v76, v9, v88);
              if ( *((_DWORD *)a1 + 26) == 1 )
              {
                v5 += *((int *)a1 + 33);
                if ( v75 + 1 >= v82 )
                  v5 = (const unsigned __int8 *)*((_QWORD *)a1 + 11);
                v68 = 0;
                if ( v75 + 1 < v82 )
                  v68 = v75 + 1;
                v75 = v68;
              }
              else if ( v75 )
              {
                --v75;
                v5 -= *((int *)a1 + 29);
              }
              else
              {
                v75 = v82 - 1;
                v5 = (const unsigned __int8 *)(*((_QWORD *)a1 + 11) + (v82 - 1) * *((_DWORD *)a1 + 29));
              }
              v69 = v77;
              v70 = 0LL;
              while ( v69 )
              {
                i = *(_DWORD *)((char *)v129 + v70) & *(_DWORD *)((char *)v130 + v70) | (unsigned int)~*(_DWORD *)((char *)v129 + v70) & *(_DWORD *)((char *)v132 + v70);
                *(_DWORD *)((char *)v131 + v70) = i;
                v70 += 4LL;
                --v69;
              }
            }
            else if ( *(_DWORD *)(*((_QWORD *)a1 + 2) + 96LL) == 5 )
            {
              v71 = (char *)v129 + v95;
              for ( i = v9; (_DWORD)i; i = (unsigned int)(i - 1) )
              {
                *(_WORD *)v71 = v76;
                v71[2] = BYTE2(v76);
                v71 += 3;
              }
              v72 = v77;
              v70 = 0LL;
              while ( v72 )
              {
                i = *(_DWORD *)((char *)v129 + v70) & *(_DWORD *)((char *)v130 + v70) | (unsigned int)~*(_DWORD *)((char *)v129 + v70) & *(_DWORD *)((char *)v132 + v70);
                *(_DWORD *)((char *)v131 + v70) = i;
                v70 += 4LL;
                --v72;
              }
            }
            else
            {
              v70 = v77;
              i = 0LL;
              while ( (_DWORD)v70 )
              {
                *(_DWORD *)((char *)v131 + i) = v76 & *(_DWORD *)((char *)v130 + i) | ~v76 & *(_DWORD *)((char *)v132 + i);
                i += 4LL;
                v70 = (unsigned int)(v70 - 1);
              }
            }
            if ( *((_DWORD *)a1 + 56) )
            {
              ((void (__fastcall *)(XLATEOBJ **, _QWORD *, _DWORD *, _QWORD))v89)(&v101, v97, v129, 0LL);
              if ( *((int *)a1 + 26) <= 0 )
              {
                if ( v65 )
                {
                  --v65;
                  v97[0] += *((int *)a1 + 34);
                }
                else
                {
                  v65 = *((_DWORD *)a1 + 43) - 1;
                  v97[0] = *((_QWORD *)a1 + 10) + v65 * *((_DWORD *)a1 + 30);
                }
              }
              else
              {
                ++v65;
                v97[0] += *((int *)a1 + 34);
                if ( v65 >= *((_DWORD *)a1 + 43) )
                {
                  v65 = 0;
                  v97[0] = *((_QWORD *)a1 + 10);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(XLATEOBJ **, __int64, __int64))v98)(&v101, i, v70);
            }
            v83 += *((int *)a1 + 32);
            v103 = v83;
          }
        }
        else
        {
          if ( !v5 )
          {
            if ( *(_DWORD *)(v23 + 96) == 5 )
            {
              v60 = (char *)v130 + v95;
              for ( j = v9; j; --j )
              {
                *(_WORD *)v60 = v76;
                v60[2] = BYTE2(v76);
                v60 += 3;
              }
            }
            else
            {
              for ( k = v77; k; v130[k] = v76 )
                --k;
            }
          }
          v93 = (&RopFunctionTable)[*((_DWORD *)a1 + 51) & 0xF];
          v86 = v7;
          v62 = v74;
          while ( v86-- )
          {
            if ( *((_DWORD *)a1 + 55) && v5 )
            {
              v96((unsigned __int8 *)v130 + v80, v79, v5, v81, v76, v9, v88);
              if ( *((_DWORD *)a1 + 26) == 1 )
              {
                v5 += *((int *)a1 + 33);
                if ( v75 + 1 >= v82 )
                  v5 = (const unsigned __int8 *)*((_QWORD *)a1 + 11);
                v64 = 0;
                if ( v75 + 1 < v82 )
                  v64 = v75 + 1;
                v75 = v64;
              }
              else if ( v75 )
              {
                --v75;
                v5 -= *((int *)a1 + 29);
              }
              else
              {
                v75 = v82 - 1;
                v5 = (const unsigned __int8 *)(*((_QWORD *)a1 + 11) + (v82 - 1) * *((_DWORD *)a1 + 29));
              }
            }
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v93)(v131, v83 + 4LL * v78, v130, v77);
            if ( *((_DWORD *)a1 + 56) )
            {
              ((void (__fastcall *)(XLATEOBJ **, _QWORD *, _DWORD *, _QWORD))v89)(&v101, v97, v129, 0LL);
              if ( *((int *)a1 + 26) <= 0 )
              {
                if ( v62 )
                {
                  --v62;
                  v97[0] += *((int *)a1 + 34);
                }
                else
                {
                  v62 = *((_DWORD *)a1 + 43) - 1;
                  v97[0] = *((_QWORD *)a1 + 10) + v62 * *((_DWORD *)a1 + 30);
                }
              }
              else
              {
                ++v62;
                v97[0] += *((int *)a1 + 34);
                if ( v62 >= *((_DWORD *)a1 + 43) )
                {
                  v62 = 0;
                  v97[0] = *((_QWORD *)a1 + 10);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(XLATEOBJ **))v98)(&v101);
            }
            v83 += *((int *)a1 + 32);
            v103 = v83;
          }
        }
      }
      else
      {
        v92 = (&RopFunctionTable)[*((_DWORD *)a1 + 52) & 0xF];
        if ( !v5 )
        {
          if ( *(_DWORD *)(v23 + 96) == 5 )
          {
            v56 = (char *)v130 + v95;
            for ( m = v9; m; --m )
            {
              *(_WORD *)v56 = v76;
              v56[2] = BYTE2(v76);
              v56 += 3;
            }
          }
          else
          {
            for ( n = v77; n; v130[n] = v76 )
              --n;
          }
        }
        while ( v7-- )
        {
          if ( *((_DWORD *)a1 + 53) )
          {
            ((void (__fastcall *)(__int64 *))v99)(&v115);
            v116 += *((int *)a1 + 31);
          }
          if ( v5 )
          {
            v96((unsigned __int8 *)v130 + v80, v79, v5, v81, v76, v9, v88);
            if ( *((_DWORD *)a1 + 26) == 1 )
            {
              v5 += *((int *)a1 + 33);
              if ( v75 + 1 >= v82 )
                v5 = (const unsigned __int8 *)*((_QWORD *)a1 + 11);
              v28 = 0;
              if ( v75 + 1 < v82 )
                v28 = v75 + 1;
              v75 = v28;
            }
            else if ( v75 )
            {
              --v75;
              v5 -= *((int *)a1 + 29);
            }
            else
            {
              v75 = v82 - 1;
              v5 = (const unsigned __int8 *)(*((_QWORD *)a1 + 11) + (v82 - 1) * *((_DWORD *)a1 + 29));
            }
          }
          ((void (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _QWORD))v92)(v131, v130, v129, v77);
          if ( *((_DWORD *)a1 + 56) )
          {
            ((void (__fastcall *)(XLATEOBJ **, _QWORD *, _DWORD *, _QWORD))v89)(&v101, v97, v129, 0LL);
            v58 = v74;
            if ( *((int *)a1 + 26) <= 0 )
            {
              if ( v74 )
              {
                --v74;
                v97[0] += *((int *)a1 + 34);
              }
              else
              {
                v74 = *((_DWORD *)a1 + 43) - 1;
                v97[0] = *((_QWORD *)a1 + 10) + v74 * *((_DWORD *)a1 + 30);
              }
            }
            else
            {
              ++v74;
              v97[0] += *((int *)a1 + 34);
              if ( v58 + 1 >= *((_DWORD *)a1 + 43) )
              {
                v74 = 0;
                v97[0] = *((_QWORD *)a1 + 10);
              }
            }
          }
          else
          {
            ((void (__fastcall *)(XLATEOBJ **))v98)(&v101);
          }
          v83 += *((int *)a1 + 32);
          v103 = v83;
        }
      }
    }
    else
    {
      v91 = (&RopFunctionTable)[*((_BYTE *)a1 + 228) & 0xF];
      v84 = v7;
      while ( v84-- )
      {
        if ( *((_DWORD *)a1 + 53) )
        {
          ((void (__fastcall *)(__int64 *))v99)(&v115);
          v116 += *((int *)a1 + 31);
        }
        ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v91)(v131, v83 + 4LL * v78, v129, v77);
        if ( *((_DWORD *)a1 + 56) )
        {
          ((void (__fastcall *)(XLATEOBJ **, _QWORD *, _DWORD *, _QWORD))v89)(&v101, v97, v132, 0LL);
          v33 = v74;
          if ( *((int *)a1 + 26) <= 0 )
          {
            if ( v74 )
            {
              --v74;
              v97[0] += *((int *)a1 + 34);
            }
            else
            {
              v74 = *((_DWORD *)a1 + 43) - 1;
              v97[0] = *((_QWORD *)a1 + 10) + v74 * *((_DWORD *)a1 + 30);
            }
          }
          else
          {
            ++v74;
            v97[0] += *((int *)a1 + 34);
            if ( v33 + 1 >= *((_DWORD *)a1 + 43) )
            {
              v74 = 0;
              v97[0] = *((_QWORD *)a1 + 10);
            }
          }
        }
        else
        {
          ((void (__fastcall *)(XLATEOBJ **))v98)(&v101);
        }
        v83 += *((int *)a1 + 32);
        v103 = v83;
      }
    }
    return;
  }
  v39 = *((_DWORD *)a1 + 37);
  if ( v39 == -1
    || *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) != 1
    || (v40 = *(_DWORD *)(v10 + 96), (unsigned int)(v40 - 3) > 3) )
  {
LABEL_18:
    if ( !v19
      && *((_DWORD *)a1 + 53)
      && *((_DWORD *)a1 + 54)
      && *(_DWORD *)(v10 + 96) == 3
      && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == 3
      && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
    {
      switch ( v20 )
      {
        case 102:
          BltLnkAccel6666(
            (unsigned __int8 *)&v4[*((int *)a1 + 47)],
            (unsigned __int8 *)(v83 + a2->left),
            *((_DWORD *)a1 + 31),
            *((_DWORD *)a1 + 32),
            v9,
            v7);
          return;
        case -120:
          BltLnkAccel8888(
            (unsigned __int8 *)&v4[*((int *)a1 + 47)],
            (unsigned __int8 *)(v83 + a2->left),
            *((_DWORD *)a1 + 31),
            *((_DWORD *)a1 + 32),
            v9,
            v7);
          return;
        case -18:
          BltLnkAccelEEEE(
            (unsigned __int8 *)&v4[*((int *)a1 + 47)],
            (unsigned __int8 *)(v83 + a2->left),
            *((_DWORD *)a1 + 31),
            *((_DWORD *)a1 + 32),
            v9,
            v7);
          return;
      }
    }
    goto LABEL_22;
  }
  v41 = 0LL;
  v42 = -1;
  if ( v40 == 6 )
  {
    v41 = BltLnkPatMaskCopy32;
  }
  else
  {
    v53 = v40 - 3;
    if ( !v53 )
    {
      v41 = BltLnkPatMaskCopy8;
      v43 = 255;
      goto LABEL_99;
    }
    v54 = v53 - 1;
    if ( !v54 )
    {
      v41 = BltLnkPatMaskCopy16;
      v43 = 0xFFFF;
      goto LABEL_99;
    }
    if ( v54 != 1 )
    {
      v43 = v82;
      goto LABEL_99;
    }
    v41 = BltLnkPatMaskCopy24;
  }
  v43 = 0xFFFFFF;
LABEL_99:
  v100 = (void (* near *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))*((_QWORD *)a1 + 6);
  v85 = v100[2];
  if ( (v43 & *((_DWORD *)v85 + 1)) != v43 || (*(_DWORD *)v85 & v43) != 0 )
    goto LABEL_18;
  if ( v20 != -30 )
    v42 = 0;
  v103 = v83;
  v102 = v4;
  v104 = 1;
  v107 = *((_DWORD *)a1 + 26);
  v105 = v9;
  v106 = v7;
  v108 = *((_DWORD *)a1 + 31);
  v109 = *((_DWORD *)a1 + 32);
  v110 = *((_DWORD *)a1 + 47);
  v111 = v9 + v110;
  v112 = a2->left;
  v113 = 0;
  v101 = (XLATEOBJ *)v100;
  v41((struct BLTINFO *)&v101, v39, v129, v42);
}
