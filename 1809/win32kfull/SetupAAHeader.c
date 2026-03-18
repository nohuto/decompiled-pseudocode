/*
 * XREFs of SetupAAHeader @ 0x1C0015694
 * Callers:
 *     AAHalftoneBitmap @ 0x1C0013864 (AAHalftoneBitmap.c)
 * Callees:
 *     ComputeBytesPerScanLine @ 0x1C00116F8 (ComputeBytesPerScanLine.c)
 *     _ALIGN_MEM @ 0x1C0015FFC (_ALIGN_MEM.c)
 *     ComputeByteOffset @ 0x1C0016028 (ComputeByteOffset.c)
 *     ComputeInputColorInfo @ 0x1C001607C (ComputeInputColorInfo.c)
 *     ComputeAABBP @ 0x1C00161A4 (ComputeAABBP.c)
 *     CheckBMPNeedFixup @ 0x1C00FAEE8 (CheckBMPNeedFixup.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)(__int128 *a1))
{
  _BYTE *v5; // r10
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // edi
  int v11; // r15d
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // r15
  int v18; // r14d
  __int64 v19; // r13
  unsigned int *v20; // r12
  __int16 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r13
  unsigned int v25; // edi
  char v26; // al
  __int64 (__fastcall *v27)(__int128 *); // r8
  __int64 (__fastcall *v28)(); // rdx
  __int64 v29; // r14
  __int64 (__fastcall *v30)(int, int, int, int, int); // rax
  __int64 (__fastcall *v31)(int, int, int, int, int); // rcx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned int v35; // r11d
  unsigned __int64 v36; // r10
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  int v43; // edi
  int v44; // r11d
  int v45; // r13d
  int v46; // r15d
  int v47; // r12d
  unsigned __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // r14d
  __int64 v52; // rax
  int *v53; // rdi
  __int64 v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rcx
  size_t v61; // r8
  unsigned int v62; // r12d
  int v63; // eax
  unsigned int v64; // r14d
  int v65; // r10d
  _DWORD *v66; // r9
  int v67; // eax
  __int64 v68; // rsi
  __int64 v69; // rdx
  int v70; // r9d
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rsi
  int v74; // r9d
  __int64 v75; // rcx
  __int64 v76; // rdx
  int v77; // eax
  int v78; // r10d
  int v79; // r11d
  __int64 v80; // rcx
  int v81; // eax
  int v82; // r9d
  int v83; // r10d
  __int64 v84; // rcx
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  int v88; // eax
  __int64 (__fastcall **v89)(__int128 *); // rcx
  int v90; // eax
  __int64 (__fastcall *v91)(__int128 *); // rax
  __int64 result; // rax
  unsigned int v93; // ecx
  __int64 v94; // rdx
  unsigned int v95; // eax
  bool v96; // cf
  int v97; // r11d
  unsigned __int64 v98; // rcx
  int v99; // r11d
  _QWORD *v100; // rax
  __int64 v101; // r9
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // r11d
  unsigned __int64 v107; // rcx
  __int64 (__fastcall *v108)(); // r9
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rax
  int v111; // r8d
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rcx
  __int64 (__fastcall *v114)(); // r8
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rcx
  unsigned int v117; // ecx
  unsigned int v118; // edx
  int v119; // ecx
  int v120; // r11d
  int v121; // r11d
  unsigned int v122; // eax
  unsigned int v123; // r10d
  __int64 v124; // rdx
  unsigned int v125; // ecx
  __int64 v126; // rax
  __int64 v127; // rax
  int v128; // r13d
  int v129; // r8d
  int v130; // r15d
  __int64 v131; // rdx
  _DWORD *v132; // rsi
  __int64 v133; // r8
  int v134; // eax
  int v135; // r15d
  int v136; // r9d
  __int64 v137; // rcx
  _BYTE *v138; // rax
  PVOID v139; // rcx
  int v140; // [rsp+60h] [rbp-A0h] BYREF
  int v141; // [rsp+64h] [rbp-9Ch] BYREF
  int v142; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v143; // [rsp+6Ch] [rbp-94h]
  int v144; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v145)(__int128 *); // [rsp+78h] [rbp-88h]
  unsigned int v146; // [rsp+80h] [rbp-80h]
  int v147; // [rsp+84h] [rbp-7Ch]
  int v148; // [rsp+88h] [rbp-78h]
  int v149; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v150; // [rsp+90h] [rbp-70h]
  __int64 v151; // [rsp+98h] [rbp-68h]
  PVOID pv; // [rsp+A0h] [rbp-60h]
  _DWORD *v153; // [rsp+A8h] [rbp-58h]
  _QWORD *v154; // [rsp+B0h] [rbp-50h]
  __int64 v155; // [rsp+B8h] [rbp-48h]
  _BYTE *v156; // [rsp+C0h] [rbp-40h]
  _BYTE *v157; // [rsp+C8h] [rbp-38h]
  __int64 v158; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall **v159)(__int128 *); // [rsp+D8h] [rbp-28h]
  unsigned int v160; // [rsp+E0h] [rbp-20h] BYREF
  char v161; // [rsp+E4h] [rbp-1Ch]
  char v162; // [rsp+E5h] [rbp-1Bh]
  __int64 (__fastcall *v163)(int, int, int, int, int); // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v164)(__int64, __int64, unsigned int *, _BYTE *, _DWORD, int, int, int *, int *, int); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v165)(__int64, _QWORD, int *, char *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+F8h] [rbp-8h]
  __int64 v166; // [rsp+100h] [rbp+0h]
  __int64 v167; // [rsp+108h] [rbp+8h]
  __int64 v168; // [rsp+110h] [rbp+10h]
  __int64 v169; // [rsp+118h] [rbp+18h]
  unsigned int v170; // [rsp+120h] [rbp+20h] BYREF
  int v171; // [rsp+124h] [rbp+24h] BYREF
  _BYTE v172[4]; // [rsp+128h] [rbp+28h] BYREF
  char v173[4]; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v174; // [rsp+130h] [rbp+30h] BYREF
  int v175; // [rsp+134h] [rbp+34h] BYREF
  int v176; // [rsp+138h] [rbp+38h] BYREF
  int v177; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v178; // [rsp+140h] [rbp+40h]
  int v179; // [rsp+144h] [rbp+44h]
  int v180; // [rsp+148h] [rbp+48h]
  int v181; // [rsp+14Ch] [rbp+4Ch]
  int v182; // [rsp+150h] [rbp+50h]
  int v183; // [rsp+154h] [rbp+54h]
  int v184; // [rsp+160h] [rbp+60h]
  int v185; // [rsp+164h] [rbp+64h]
  int v186; // [rsp+168h] [rbp+68h]
  int v187; // [rsp+16Ch] [rbp+6Ch]

  v5 = (_BYTE *)a1[2];
  v151 = a1[3];
  v7 = (_DWORD *)a1[4];
  v154 = a1;
  v153 = v7;
  v155 = a2;
  v8 = a1[5];
  v159 = a4;
  v156 = v5;
  v158 = v8;
  v150 = *(unsigned __int8 *)(v8 + 10);
  v9 = a1[1];
  v10 = *(_DWORD *)(v9 + 56);
  v11 = 2 * ((*(_BYTE *)(v9 + 24) & 1) == 0) + 1;
  v143 = v11;
  v160 = (v10 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v5 & 0x40) != 0 )
    v160 = 1536;
  v12 = 0;
  if ( (int)ComputeAABBP(v5, v8, &v160, v11 == 1) <= 0 )
    return 0LL;
  v13 = v160;
  v14 = 3100LL;
  v140 = 3100;
  if ( (v10 & 0x100000) != 0 )
  {
    v13 = v160 | 0x800;
    v160 |= 0x800u;
    if ( (v10 & 0x200000) != 0 )
    {
      v13 |= 0x1000u;
      v14 = 5148LL;
      v160 = v13;
    }
    else
    {
      if ( (v10 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v10 & 0x1000000) != 0 )
      {
        v13 |= 0x100000u;
        v160 = v13;
      }
      v14 = 3868LL;
    }
    v140 = v14;
  }
  if ( (v10 & 0x40000000) != 0 )
    v160 = v13 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v140, v14) < 0 )
    return 4294967294LL;
  v157 = a1 + 8;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v151 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v151 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v151 + 32) + 3LL),
    (_DWORD)a1 + 64,
    a3 + 8);
  v15 = v160;
  v16 = 6;
  if ( v11 != 1 )
    v16 = 2;
  *(_BYTE *)(a3 + 8) |= v16;
  if ( (v10 & 0x4000) != 0 )
  {
    v15 = (unsigned int)v15 | 4;
    v160 = v15;
  }
  if ( (*v156 & 0x40) != 0 )
  {
    v15 = (unsigned int)v15 & 0xFFFFFFBF;
    v160 = v15;
  }
  if ( (v15 & 0x200) != 0 )
  {
    v15 = (unsigned int)v15 & 0xFFFFFFBF;
    v160 = v15;
  }
  v17 = v151;
  if ( (v15 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v151, &v160);
    v15 = v160;
    if ( (v160 & 0x80000) != 0 )
    {
      if ( (v10 & 0x80000) != 0 )
        v15 = v160 | 0x200;
      else
        LODWORD(v15) = v160 & 0xFFFFFDFF;
      v160 = v15;
    }
  }
  if ( (v15 & 0x200) != 0 )
  {
    LODWORD(v15) = v15 & 0xFFFFBFFF;
    v160 = v15;
  }
  if ( v153 )
  {
    LODWORD(v15) = v15 | 0x80;
    v160 = v15;
  }
  v18 = v140;
  v19 = v155;
  pv = (PVOID)v164(v155, v15, &v170, v172, *(_DWORD *)(v17 + 12), v178, v180, &v174, &v176, v140);
  v20 = (unsigned int *)pv;
  if ( !pv )
  {
    v18 = 0;
    pv = (PVOID)v164(v19, v160, &v170, v172, *(_DWORD *)(v17 + 12), v178, v180, &v174, &v176, 0);
    v20 = (unsigned int *)pv;
    if ( !pv )
      return 4294967294LL;
  }
  if ( !*v20 || !v20[1] )
    goto LABEL_140;
  v21 = v160;
  if ( !v18 )
  {
    v160 |= 0x80000000;
    v21 = v160;
    v22 = v19 + 856;
    *(_QWORD *)(a3 + 376) = v19 + 856;
    if ( (v21 & 0x800) == 0 )
      goto LABEL_26;
    v105 = *(_QWORD *)(v19 + 7064);
    *(_QWORD *)(a3 + 336) = v105;
    if ( (v10 & 0x200000) == 0 )
      goto LABEL_26;
    v104 = v105 + 768;
    goto LABEL_160;
  }
  v22 = *((_QWORD *)v20 + 4);
  *(_QWORD *)(a3 + 376) = v22;
  if ( (v21 & 0x800) != 0 )
  {
    v104 = v22 + 3100;
LABEL_160:
    *(_QWORD *)(a3 + 336) = v104;
  }
LABEL_26:
  *(_QWORD *)(a3 + 384) = v22 + 28;
  if ( (v21 & 1) != 0 )
  {
    v174 = v182 - v174 - 1;
    v176 = v182 - v176 - 1;
  }
  v23 = *v20;
  v24 = v20[1];
  v146 = v23;
  v147 = v24;
  if ( (int)v23 + 6 < (unsigned int)v23 )
    goto LABEL_140;
  v25 = v23 + 6;
  v26 = v161;
  v141 = 0;
  v27 = BltDIB_CY;
  v145 = 0LL;
  if ( (v21 & 0x200) != 0 )
  {
    if ( v161 == 1 )
    {
      v145 = BltDIB_CY;
LABEL_38:
      v29 = v143;
      if ( v162 )
      {
        if ( v162 == 1 )
        {
          v30 = SkipDIB_CX;
          v31 = GraySkipDIB_CX;
        }
        else
        {
          if ( v162 != 2 )
          {
LABEL_45:
            v26 = -1;
            v161 = -1;
            goto LABEL_46;
          }
          v30 = RepDIB_CX;
          v31 = GrayRepDIB_CX;
        }
      }
      else
      {
        v30 = CopyDIB_CX;
        v31 = (__int64 (__fastcall *)(int, int, int, int, int))GrayCopyDIB_CXGray;
      }
      if ( v143 == 1 )
        v30 = v31;
      v163 = v30;
      goto LABEL_45;
    }
    if ( (unsigned __int8)v161 > 1u )
    {
      if ( (unsigned __int8)v161 <= 3u )
      {
        v28 = SkipDIB_CY;
LABEL_37:
        v145 = (__int64 (__fastcall *)(__int128 *))v28;
        goto LABEL_38;
      }
      if ( (unsigned __int8)v161 <= 5u )
      {
        if ( (v21 & 0x800) != 0 )
        {
          if ( (int)v24 + 6 < (unsigned int)v24 )
            goto LABEL_140;
          v106 = -1;
          v107 = 3LL * (unsigned int)(v24 + 6);
          if ( v107 <= 0xFFFFFFFF )
            v106 = 3 * (v24 + 6);
          v141 = v106;
          if ( v107 > 0xFFFFFFFF )
            goto LABEL_140;
        }
        else
        {
          v141 = 0;
        }
        v28 = RepDIB_CY;
        goto LABEL_37;
      }
    }
  }
  v29 = v143;
LABEL_46:
  if ( !v26 )
  {
    v145 = (__int64 (__fastcall *)(__int128 *))TileDIB_CY;
    if ( (_DWORD)v29 != 1 )
    {
      v141 = 0;
      goto LABEL_52;
    }
    v121 = -1;
    if ( (unsigned __int64)(2 * v23) <= 0xFFFFFFFF )
      v121 = 2 * v23;
    v141 = v121;
    if ( (unsigned __int64)(2 * v23) > 0xFFFFFFFF )
      goto LABEL_140;
    goto LABEL_52;
  }
  if ( v26 == 1 )
  {
LABEL_126:
    v145 = v27;
    goto LABEL_52;
  }
  if ( v26 != 2 )
  {
    switch ( v26 )
    {
      case 3:
        v93 = v20[5];
        v145 = ShrinkDIB_CY_SrkCX;
        if ( v93 + 2 >= v93 )
        {
          v94 = v93 + 2;
          if ( (unsigned __int64)(36 * v94) <= 0xFFFFFFFF )
          {
            v95 = 36 * v94 + 2048;
            v96 = (unsigned int)(36 * v94) >= 0xFFFFF800;
            goto LABEL_114;
          }
        }
        break;
      case 4:
        v114 = GrayExpandDIB_CY;
        if ( (_DWORD)v29 != 1 )
          v114 = ExpandDIB_CY;
        v145 = (__int64 (__fastcall *)(__int128 *))v114;
        if ( (int)v24 + 6 < (unsigned int)v24 )
          break;
        v115 = (unsigned int)v29 * (unsigned __int64)(unsigned int)(v24 + 6);
        if ( v115 > 0xFFFFFFFF )
          break;
        v116 = 6LL * (unsigned int)v115;
        if ( v116 > 0xFFFFFFFF )
          break;
        v95 = v116 + 4096;
        goto LABEL_177;
      case 5:
        if ( (v21 & 0x4000) != 0 )
        {
          v98 = (unsigned int)v29 * (unsigned __int64)v25;
          if ( v98 <= 0xFFFFFFFF )
          {
            v99 = -1;
            if ( 5 * (unsigned __int64)(unsigned int)v98 <= 0xFFFFFFFF )
              v99 = 5 * v98;
            v141 = v99;
            if ( 5 * (unsigned __int64)(unsigned int)v98 <= 0xFFFFFFFF )
            {
              v27 = (__int64 (__fastcall *)(__int128 *))FastExpAA_CY;
              goto LABEL_126;
            }
          }
          break;
        }
        v108 = GrayExpandDIB_CY_ExpCX;
        if ( (_DWORD)v29 != 1 )
          v108 = ExpandDIB_CY_ExpCX;
        v145 = (__int64 (__fastcall *)(__int128 *))v108;
        if ( (int)v24 + 6 >= (unsigned int)v24 )
        {
          v109 = (unsigned int)v29 * (unsigned __int64)(unsigned int)(v24 + 6);
          if ( v109 <= 0xFFFFFFFF )
          {
            v110 = 4LL * (unsigned int)v109;
            if ( v110 <= 0xFFFFFFFF )
            {
              v111 = v110;
              v112 = (unsigned int)v29 * (unsigned __int64)v25;
              if ( v112 <= 0xFFFFFFFF )
              {
                v113 = 3LL * (unsigned int)v112;
                if ( v113 <= 0xFFFFFFFF && v111 + (int)v113 >= (unsigned int)v113 )
                {
                  v95 = v111 + v113 + 4096;
LABEL_177:
                  v96 = v95 < 0x1000;
                  goto LABEL_114;
                }
              }
            }
          }
        }
        break;
      default:
        goto LABEL_52;
    }
LABEL_140:
    EngFreeMem(v20);
    return 0LL;
  }
  if ( (_DWORD)v29 != 1 )
  {
    v145 = (__int64 (__fastcall *)(__int128 *))ShrinkDIB_CY;
    if ( (unsigned int)v29 * (unsigned __int64)v25 > 0xFFFFFFFF )
      goto LABEL_140;
    v118 = v29 * v25;
    if ( (unsigned __int64)(36 * v23) > 0xFFFFFFFF )
      goto LABEL_140;
    v119 = 36 * v23;
    if ( (unsigned int)(36 * v23 + 2048) < 0x800 )
      goto LABEL_140;
    v120 = -1;
    if ( v119 + 2048 + v118 >= v118 )
      v120 = v119 + 2048 + v118;
    v141 = v120;
    if ( v119 + 2048 + v118 < v118 )
      goto LABEL_140;
    goto LABEL_52;
  }
  v145 = (__int64 (__fastcall *)(__int128 *))GrayShrinkDIB_CY;
  if ( (unsigned __int64)(12 * v24) > 0xFFFFFFFF )
    goto LABEL_140;
  v117 = 12 * v24;
  if ( (int)v24 + 6 < (unsigned int)v24 || (unsigned int)(v24 + 2054) < 0x800 )
    goto LABEL_140;
  v95 = v24 + 2054 + v117;
  v96 = v95 < v117;
LABEL_114:
  v97 = -1;
  if ( !v96 )
    v97 = v95;
  v141 = v97;
  if ( v96 )
    goto LABEL_140;
LABEL_52:
  v32 = (v21 & 0x800) != 0 ? v24 : 0;
  *(_BYTE *)(a3 + 96) = (_DWORD)v29 != 1 ? 0 : 4;
  *(_DWORD *)(a3 + 152) = v29 * v32;
  if ( v32 + 8 < v32 )
    goto LABEL_231;
  v33 = 0xFFFFFFFFLL;
  v34 = v29 * (v32 + 8);
  if ( v34 <= 0xFFFFFFFF )
    v33 = (unsigned int)v34;
  v140 = v33;
  if ( v34 > 0xFFFFFFFF || (int)ALIGN_MEM(&v140, v33) < 0 || (int)ALIGN_MEM(&v141, v35) < 0 || v25 + 2 < v25 )
    goto LABEL_231;
  v37 = (unsigned int)v36;
  v38 = v29 * (v25 + 2);
  if ( v38 <= v36 )
    v37 = (unsigned int)v38;
  v142 = v37;
  if ( v38 > v36 || (int)ALIGN_MEM(&v142, v37) < 0 || (unsigned int)v24 >= 0xFFFFFFF6 )
    goto LABEL_231;
  v40 = (unsigned int)v39;
  v41 = 4LL * (unsigned int)(v24 + 10);
  if ( v41 <= v39 )
    v40 = (unsigned int)v41;
  v149 = v40;
  if ( v41 > v39 || (int)ALIGN_MEM(&v149, v40) < 0 )
    goto LABEL_231;
  if ( (v21 & 0x80u) != 0 )
  {
    v122 = ComputeBytesPerScanLine(1u, 4u, v146);
    v124 = v123;
    v125 = v122 + 4;
    if ( v122 + 4 >= v122 )
      v124 = v125;
    v144 = v124;
    if ( v125 < v122 || (int)ALIGN_MEM(&v144, v124) < 0 )
      goto LABEL_231;
  }
  else
  {
    v144 = 0;
  }
  v43 = v142;
  if ( v142 < v140 )
    v43 = v140;
  v148 = v43;
  if ( (v21 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v140, (unsigned int)v24) < 0 )
      goto LABEL_231;
    v44 = v140;
  }
  else
  {
    v44 = 0;
    v140 = 0;
  }
  if ( v150 == 254 && v154[7] )
  {
    if ( (int)ALIGN_MEM(&v142, 366LL) < 0 )
      goto LABEL_231;
    v45 = v142;
  }
  else
  {
    v45 = 0;
  }
  if ( (v21 & 0x40) != 0 )
  {
    if ( v146 + 4 < v146 )
      goto LABEL_231;
    v102 = (unsigned int)v42;
    v103 = v29 * (v146 + 4);
    if ( v103 <= v42 )
      v102 = (unsigned int)v103;
    v142 = v102;
    if ( v103 > v42 || (int)ALIGN_MEM(&v142, v102) < 0 )
      goto LABEL_231;
    v46 = v142;
  }
  else
  {
    v46 = 0;
  }
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 && (*v157 & 1) != 0 && (*(_BYTE *)(a3 + 72) & 1) != 0 && *((_BYTE *)v154 + 84) != 4 )
  {
    if ( (int)ALIGN_MEM(&v142, 3072LL) >= 0 )
    {
      v47 = v142;
      goto LABEL_80;
    }
LABEL_231:
    v139 = v20;
    goto LABEL_232;
  }
  v47 = 0;
LABEL_80:
  v48 = 6LL * (unsigned int)v46;
  if ( v48 > v42
    || (v49 = v48 + v43, (int)v48 + v43 < (unsigned int)v48)
    || (v50 = v49 + v149, v49 + v149 < v49)
    || v50 + v144 < v50
    || v50 + v144 + v44 < v50 + v144
    || v50 + v144 + v44 + v47 < v50 + v144 + v44
    || v50 + v144 + v44 + v47 + v45 < v50 + v144 + v44 + v47
    || (v51 = v141, v50 + v144 + v44 + v47 + v45 + v141 < v50 + v144 + v44 + v47 + v45)
    || (v52 = v165(
                v155,
                v160,
                &v171,
                v173,
                *(_DWORD *)(v151 + 16),
                v179,
                v181,
                &v175,
                &v177,
                v50 + v144 + v44 + v47 + v45 + v141),
        (v53 = (int *)v52) == 0LL) )
  {
    v139 = pv;
LABEL_232:
    EngFreeMem(v139);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v52 || !*(_DWORD *)(v52 + 4) )
  {
    v66 = pv;
    goto LABEL_229;
  }
  v54 = *(_QWORD *)(v52 + 32) + v51;
  v55 = v146 * v143;
  *(_DWORD *)a3 = v160;
  v56 = v140;
  *(_QWORD *)(a3 + 536) = v54;
  *(_DWORD *)(a3 + 64) = v55;
  v57 = v148 + v54;
  if ( (_DWORD)v56 )
  {
    v58 = v147;
    *(_QWORD *)(a3 + 352) = v57;
    *(_QWORD *)(a3 + 344) = v57;
    *(_DWORD *)(a3 + 368) = 1;
    v126 = v57 + v58;
    v57 += v56;
    *(_QWORD *)(a3 + 360) = v126;
  }
  else
  {
    LODWORD(v58) = v147;
  }
  if ( v46 )
  {
    *(_QWORD *)(a3 + 264) = v57;
    v100 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v46;
    v101 = 6LL;
    do
    {
      *v100 = v57;
      v57 += v46;
      ++v100;
      --v101;
    }
    while ( v101 );
  }
  if ( v45 )
  {
    *(_QWORD *)(a3 + 400) = v57;
    v57 += v45;
  }
  v59 = v144;
  if ( v144 )
  {
    *(_QWORD *)(a3 + 208) = v57;
    v57 += v59;
  }
  v60 = v57;
  if ( v47 )
    v57 += v47;
  else
    v60 = *(_QWORD *)(a3 + 384);
  *(_QWORD *)(a3 + 16) = v60;
  v61 = 4LL * (int)v58;
  *(_QWORD *)(a3 + 576) = v57 + 20;
  *(_QWORD *)(a3 + 544) = v57 + 20;
  *(_QWORD *)(a3 + 560) = v57 + 20;
  *(_QWORD *)(a3 + 568) = v61 + v57 + 20;
  *(_QWORD *)(a3 + 552) = v61 + v57 + 20;
  *(_QWORD *)(a3 + 584) = v61 + v57 + 20;
  memset((void *)(v57 + 20), 255, v61);
  v62 = v174;
  if ( v174 > v176 )
  {
    v62 = v176;
    v176 = v174;
    v127 = *(_QWORD *)(a3 + 568) - 4LL;
    v174 = v62;
    *(_QWORD *)(a3 + 576) = v127;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
    v63 = -4;
  }
  else
  {
    v63 = 4;
  }
  *(_DWORD *)(a3 + 592) = v63;
  v64 = v160;
  *(_DWORD *)(a3 + 328) = v62 - v184;
  if ( (v64 & 2) != 0 )
  {
    v65 = v183 - v175 - 1;
    v175 = v65;
    v177 = v183 - v177 - 1;
  }
  else
  {
    v65 = v175;
  }
  v66 = pv;
  *(_DWORD *)(a3 + 332) = v65 - v185;
  *(_QWORD *)(a3 + 288) = v163;
  *(_QWORD *)(a3 + 304) = v66;
  *(_QWORD *)(a3 + 312) = v53;
  *(_DWORD *)(a3 + 56) = *v66;
  v67 = *v53;
  *(_DWORD *)(a3 + 60) = *v53;
  *(_DWORD *)(a3 + 40) = v67;
  if ( (v64 & 0x80u) == 0 )
    goto LABEL_105;
  v128 = v186 + v66[30];
  v129 = v153[5];
  v186 = v128;
  v130 = v187 + v53[30];
  v187 = v130;
  v131 = (unsigned int)(v128 + v66[31]);
  v148 = v129;
  if ( v128 < 0 || v130 < 0 || (v132 = v153, (int)v131 > v153[3]) || v130 + v53[31] > v153[4] )
  {
    v12 = -13;
LABEL_229:
    EngFreeMem(v66);
    EngFreeMem(v53);
    return v12;
  }
  *(_DWORD *)(a3 + 224) = v129;
  *(_DWORD *)(a3 + 228) = v53[31];
  ComputeByteOffset(1LL, v131, a3 + 4);
  v134 = ComputeByteOffset(1LL, (unsigned int)v128, v133);
  v135 = v148 * v130;
  *(_DWORD *)(a3 + 200) = v136 - v134 + 1;
  v137 = v134 + *((_QWORD *)v132 + 3) + v135;
  v138 = v156;
  *(_QWORD *)(a3 + 216) = v137;
  if ( (*v138 & 8) != 0 )
  {
    v64 |= 0x100u;
    v160 = v64;
  }
  *(_QWORD *)(a3 + 184) = v166;
  *(_QWORD *)(a3 + 192) = v167;
LABEL_105:
  v68 = v151;
  v69 = v170;
  v70 = *(_DWORD *)(v151 + 20);
  *(_DWORD *)(a3 + 68) = v70;
  *(_DWORD *)(a3 + 260) = v70;
  v71 = ComputeByteOffset(*(unsigned __int8 *)(v68 + 10), v69, a3 + 9);
  v72 = *(_QWORD *)(v68 + 24);
  v73 = v158;
  v75 = v74 * v171 + (__int64)v71;
  *(_QWORD *)(a3 + 232) = v168;
  v76 = v75 + v72;
  *(_QWORD *)(a3 + 240) = v169;
  *(_QWORD *)(a3 + 48) = v76;
  *(_QWORD *)(a3 + 32) = v76;
  v77 = *(_DWORD *)(v73 + 20);
  if ( v78 > v79 )
    v77 = -v77;
  v80 = v150;
  *(_DWORD *)(a3 + 156) = v77;
  v81 = ComputeByteOffset(v80, v62, a3 + 97);
  v84 = v83 * v82 + (__int64)v81;
  v85 = *(_DWORD *)(a3 + 156);
  v86 = v84 + *(_QWORD *)(v73 + 24);
  *(_QWORD *)(a3 + 136) = v86;
  *(_QWORD *)(a3 + 120) = v86;
  v87 = v53[1] * v85;
  v88 = v147;
  *(_QWORD *)(a3 + 320) = v86 + v87;
  v89 = v159;
  *(_DWORD *)(a3 + 144) = v88;
  v90 = v53[1];
  *(_DWORD *)(a3 + 148) = v90;
  *(_DWORD *)(a3 + 128) = v90;
  v91 = v145;
  *(_DWORD *)a3 = v64;
  *v89 = v91;
  if ( (v64 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += v53[6] * *(_DWORD *)(a3 + 68);
    *(_DWORD *)(a3 + 60) -= v53[6];
  }
  result = 1LL;
  *(_QWORD *)(a3 + 248) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  return result;
}
