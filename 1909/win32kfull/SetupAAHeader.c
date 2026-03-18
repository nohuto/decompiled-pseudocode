/*
 * XREFs of SetupAAHeader @ 0x1C00C28DC
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00C18CC (AAHalftoneBitmap.c)
 * Callees:
 *     _ALIGN_MEM @ 0x1C00C317C (_ALIGN_MEM.c)
 *     ComputeByteOffset @ 0x1C00C31A8 (ComputeByteOffset.c)
 *     ComputeInputColorInfo @ 0x1C00C31FC (ComputeInputColorInfo.c)
 *     ComputeAABBP @ 0x1C00C3340 (ComputeAABBP.c)
 *     ComputeBytesPerScanLine @ 0x1C00C4DF4 (ComputeBytesPerScanLine.c)
 *     CheckBMPNeedFixup @ 0x1C00C7124 (CheckBMPNeedFixup.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)(__int128 *a1))
{
  __int64 v7; // rdx
  _BYTE *v8; // r10
  __int64 v9; // rax
  int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  _BYTE *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rdx
  char v18; // al
  int v19; // r14d
  unsigned int *v20; // r8
  bool v21; // zf
  __int16 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // r13
  unsigned int v26; // esi
  char v27; // al
  unsigned int v28; // r10d
  __int64 (__fastcall *v29)(__int128 *); // r9
  __int64 (__fastcall *v30)(); // rdx
  __int64 (__fastcall *v31)(int, int, int, int, int); // rax
  __int64 (__fastcall *v32)(int, int, int, int, int); // rcx
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned int v36; // r10d
  __int64 v37; // r11
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // r11
  int v42; // r15d
  int v43; // esi
  int v44; // r10d
  int v45; // r13d
  int v46; // r14d
  unsigned __int64 v47; // r11
  int v48; // r12d
  unsigned __int64 v49; // rcx
  unsigned int v50; // edx
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // r15d
  __int64 v57; // rax
  int *v58; // rsi
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // r15
  __int64 v64; // rax
  __int64 v65; // rcx
  size_t v66; // r8
  unsigned int v67; // r12d
  int v68; // eax
  int v69; // r14d
  int v70; // r10d
  _DWORD *v71; // r9
  int v72; // eax
  __int64 v73; // rdi
  __int64 v74; // rdx
  int v75; // r9d
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rdi
  int v79; // r9d
  __int64 v80; // rcx
  __int64 v81; // rdx
  int v82; // eax
  int v83; // r10d
  int v84; // r11d
  __int64 v85; // rcx
  int v86; // eax
  int v87; // r9d
  int v88; // r10d
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rdx
  int v92; // eax
  int v93; // eax
  __int64 (__fastcall **v94)(__int128 *); // rcx
  __int64 (__fastcall *v95)(__int128 *); // rax
  __int64 result; // rax
  unsigned int v97; // eax
  __int64 v98; // rcx
  unsigned __int64 v99; // rcx
  unsigned int v100; // eax
  bool v101; // cf
  _QWORD *v102; // rax
  __int64 v103; // r8
  __int64 v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // rcx
  __int64 (__fastcall *v110)(); // r9
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rdx
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rcx
  unsigned int v116; // ecx
  __int64 (__fastcall *v117)(); // r9
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // rcx
  int v120; // eax
  unsigned __int64 v121; // rcx
  unsigned int v122; // eax
  unsigned int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rax
  int v127; // r13d
  int v128; // r8d
  int v129; // r15d
  __int64 v130; // rdx
  _DWORD *v131; // rdi
  __int64 v132; // r8
  int v133; // eax
  int v134; // r15d
  int v135; // r9d
  __int64 v136; // rcx
  _BYTE *v137; // rax
  int *v138; // rcx
  unsigned int v139; // [rsp+60h] [rbp-A0h] BYREF
  int v140; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID pv; // [rsp+68h] [rbp-98h]
  int v142; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v143)(__int128 *); // [rsp+78h] [rbp-88h]
  int v144; // [rsp+80h] [rbp-80h] BYREF
  int v145; // [rsp+84h] [rbp-7Ch]
  int v146; // [rsp+88h] [rbp-78h]
  int v147; // [rsp+8Ch] [rbp-74h] BYREF
  int v148; // [rsp+90h] [rbp-70h]
  unsigned int v149; // [rsp+94h] [rbp-6Ch]
  unsigned int v150; // [rsp+98h] [rbp-68h]
  int v151; // [rsp+9Ch] [rbp-64h]
  _DWORD *v152; // [rsp+A0h] [rbp-60h]
  __int64 v153; // [rsp+A8h] [rbp-58h]
  _QWORD *v154; // [rsp+B0h] [rbp-50h]
  _BYTE *v155; // [rsp+B8h] [rbp-48h]
  _BYTE *v156; // [rsp+C0h] [rbp-40h]
  __int64 v157; // [rsp+C8h] [rbp-38h]
  __int64 v158; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall **v159)(__int128 *); // [rsp+D8h] [rbp-28h]
  _QWORD v160[18]; // [rsp+E0h] [rbp-20h] BYREF

  v157 = a2;
  v154 = a1;
  v159 = a4;
  memset(v160, 0, sizeof(v160));
  v7 = a1[5];
  v8 = (_BYTE *)a1[2];
  v153 = a1[3];
  v152 = (_DWORD *)a1[4];
  v149 = *(unsigned __int8 *)(v7 + 10);
  v9 = a1[1];
  v155 = v8;
  v158 = v7;
  v10 = *(_DWORD *)(v9 + 56);
  v11 = 2 * ((*(_BYTE *)(v9 + 24) & 1) == 0) + 1;
  v150 = v11;
  LODWORD(v160[0]) = (v10 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v8 & 0x40) != 0 )
    LODWORD(v160[0]) = 1536;
  v12 = 0;
  if ( (int)ComputeAABBP(v8, v7, v160, v11 == 1) <= 0 )
    return 0LL;
  v13 = v160[0];
  v14 = 3100LL;
  v140 = 3100;
  if ( (v10 & 0x100000) != 0 )
  {
    v13 = LODWORD(v160[0]) | 0x800;
    LODWORD(v160[0]) |= 0x800u;
    if ( (v10 & 0x200000) != 0 )
    {
      v13 |= 0x1000u;
      v14 = 5148LL;
      LODWORD(v160[0]) = v13;
    }
    else
    {
      if ( (v10 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v10 & 0x1000000) != 0 )
      {
        v13 |= 0x100000u;
        LODWORD(v160[0]) = v13;
      }
      v14 = 3868LL;
    }
    v140 = v14;
  }
  if ( (v10 & 0x40000000) != 0 )
    LODWORD(v160[0]) = v13 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v140, v14) < 0 )
    return 4294967294LL;
  v15 = a1 + 8;
  v16 = v153;
  v156 = v15;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v153 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v153 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v153 + 32) + 3LL),
    (_DWORD)v15,
    a3 + 8);
  v17 = LODWORD(v160[0]);
  v18 = 6;
  if ( v11 != 1 )
    v18 = 2;
  *(_BYTE *)(a3 + 8) |= v18;
  if ( (v10 & 0x4000) != 0 )
  {
    v17 = (unsigned int)v17 | 4;
    LODWORD(v160[0]) = v17;
  }
  if ( (*v155 & 0x40) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    LODWORD(v160[0]) = v17;
  }
  if ( (v17 & 0x200) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    LODWORD(v160[0]) = v17;
  }
  if ( (v17 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v16, v160);
    v17 = LODWORD(v160[0]);
    if ( (v160[0] & 0x80000) != 0 )
    {
      if ( (v10 & 0x80000) != 0 )
        LODWORD(v17) = LODWORD(v160[0]) | 0x200;
      else
        LODWORD(v17) = v160[0] & 0xFFFFFDFF;
      LODWORD(v160[0]) = v17;
    }
  }
  if ( (v17 & 0x200) != 0 )
  {
    LODWORD(v17) = v17 & 0xFFFFBFFF;
    LODWORD(v160[0]) = v17;
  }
  if ( v152 )
  {
    LODWORD(v17) = v17 | 0x80;
    LODWORD(v160[0]) = v17;
  }
  v19 = v140;
  pv = (PVOID)((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD *, _DWORD, _DWORD, _DWORD, _QWORD *, _QWORD *, int))v160[2])(
                a2,
                v17,
                &v160[8],
                &v160[9],
                *(_DWORD *)(v16 + 12),
                v160[12],
                v160[13],
                &v160[10],
                &v160[11],
                v140);
  v20 = (unsigned int *)pv;
  if ( !pv )
  {
    v19 = 0;
    pv = (PVOID)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *, _QWORD *, _DWORD, _DWORD, _DWORD, _QWORD *, _QWORD *, _DWORD))v160[2])(
                  a2,
                  LODWORD(v160[0]),
                  &v160[8],
                  &v160[9],
                  *(_DWORD *)(v16 + 12),
                  v160[12],
                  v160[13],
                  &v160[10],
                  &v160[11],
                  0);
    v20 = (unsigned int *)pv;
    if ( !pv )
      return 4294967294LL;
  }
  if ( !*v20 || !v20[1] )
    goto LABEL_123;
  v21 = v19 == 0;
  v22 = v160[0];
  if ( !v21 )
  {
    v23 = *((_QWORD *)v20 + 4);
    *(_QWORD *)(a3 + 376) = v23;
    if ( (v22 & 0x800) == 0 )
      goto LABEL_26;
    v106 = v23 + 3100;
    goto LABEL_143;
  }
  LODWORD(v160[0]) |= 0x80000000;
  v22 = v160[0];
  v23 = a2 + 856;
  *(_QWORD *)(a3 + 376) = a2 + 856;
  if ( (v22 & 0x800) != 0 )
  {
    v107 = *(_QWORD *)(a2 + 7064);
    *(_QWORD *)(a3 + 336) = v107;
    if ( (v10 & 0x200000) != 0 )
    {
      v106 = v107 + 768;
LABEL_143:
      *(_QWORD *)(a3 + 336) = v106;
    }
  }
LABEL_26:
  *(_QWORD *)(a3 + 384) = v23 + 28;
  if ( (v22 & 1) != 0 )
  {
    LODWORD(v160[10]) = LODWORD(v160[14]) - LODWORD(v160[10]) - 1;
    LODWORD(v160[11]) = LODWORD(v160[14]) - LODWORD(v160[11]) - 1;
  }
  v24 = *v20;
  v25 = v20[1];
  v151 = v24;
  v145 = v25;
  v26 = v24 + 6;
  if ( (int)v24 + 6 < (unsigned int)v24 )
    goto LABEL_123;
  v27 = BYTE4(v160[0]);
  v28 = 0;
  v139 = 0;
  v143 = 0LL;
  v29 = BltDIB_CY;
  if ( (v22 & 0x200) != 0 )
  {
    if ( BYTE4(v160[0]) == 1 )
    {
      v143 = BltDIB_CY;
    }
    else
    {
      if ( BYTE4(v160[0]) <= 1u )
        goto LABEL_45;
      if ( BYTE4(v160[0]) <= 3u )
      {
        v30 = SkipDIB_CY;
      }
      else
      {
        if ( BYTE4(v160[0]) > 5u )
          goto LABEL_45;
        if ( (v22 & 0x800) != 0 )
        {
          v108 = (unsigned int)(v25 + 6);
          if ( (unsigned int)v108 < (unsigned int)v25 )
            goto LABEL_123;
          v28 = 3 * v108;
          if ( (unsigned __int64)(3 * v108) > 0xFFFFFFFF )
            goto LABEL_123;
        }
        v139 = v28;
        v30 = RepDIB_CY;
      }
      v143 = (__int64 (__fastcall *)(__int128 *))v30;
    }
    if ( BYTE5(v160[0]) )
    {
      if ( BYTE5(v160[0]) == 1 )
      {
        v31 = SkipDIB_CX;
        v32 = GraySkipDIB_CX;
      }
      else
      {
        if ( BYTE5(v160[0]) != 2 )
        {
LABEL_44:
          v27 = -1;
          BYTE4(v160[0]) = -1;
          goto LABEL_45;
        }
        v31 = RepDIB_CX;
        v32 = GrayRepDIB_CX;
      }
    }
    else
    {
      v31 = CopyDIB_CX;
      v32 = (__int64 (__fastcall *)(int, int, int, int, int))GrayCopyDIB_CXGray;
    }
    if ( v11 == 1 )
      v31 = v32;
    v160[1] = v31;
    goto LABEL_44;
  }
LABEL_45:
  switch ( v27 )
  {
    case 0:
      v143 = (__int64 (__fastcall *)(__int128 *))TileDIB_CY;
      if ( v11 == 1 )
      {
        if ( (unsigned __int64)(2 * v24) > 0xFFFFFFFF )
        {
LABEL_213:
          v138 = (int *)v20;
          goto LABEL_214;
        }
        v139 = 2 * v24;
      }
      else
      {
        v139 = 0;
      }
      goto LABEL_51;
    case 1:
LABEL_110:
      v143 = v29;
      goto LABEL_51;
    case 2:
      if ( v11 == 1 )
      {
        LODWORD(v121) = 12 * v25;
        v143 = (__int64 (__fastcall *)(__int128 *))GrayShrinkDIB_CY;
        if ( (unsigned __int64)(12 * v25) > 0xFFFFFFFF || (int)v25 + 6 < (unsigned int)v25 )
          goto LABEL_123;
        v122 = v25 + 2054;
      }
      else
      {
        v143 = (__int64 (__fastcall *)(__int128 *))ShrinkDIB_CY;
        v121 = v11 * (unsigned __int64)v26;
        if ( v121 > 0xFFFFFFFF || (unsigned __int64)(36 * v24) > 0xFFFFFFFF )
          goto LABEL_123;
        v122 = 36 * v24 + 2048;
      }
      if ( v122 < 0x800 )
      {
LABEL_123:
        EngFreeMem(v20);
        return 0LL;
      }
      v100 = v121 + v122;
      v101 = v100 < (unsigned int)v121;
LABEL_106:
      if ( !v101 )
      {
        v139 = v100;
        goto LABEL_51;
      }
      goto LABEL_123;
    case 3:
      v97 = v20[5];
      v143 = ShrinkDIB_CY_SrkCX;
      v98 = v97 + 2;
      if ( (unsigned int)v98 < v97 )
        goto LABEL_123;
      v99 = 36 * v98;
      if ( v99 > 0xFFFFFFFF )
        goto LABEL_123;
      v100 = v99 + 2048;
      v101 = (unsigned int)v99 >= 0xFFFFF800;
      goto LABEL_106;
  }
  if ( v27 != 4 )
  {
    if ( v27 != 5 )
      goto LABEL_51;
    if ( (v22 & 0x4000) != 0 )
    {
      v109 = v11 * (unsigned __int64)v26;
      if ( v109 <= 0xFFFFFFFF && 5 * (unsigned __int64)(unsigned int)v109 <= 0xFFFFFFFF )
      {
        v139 = 5 * v109;
        v29 = (__int64 (__fastcall *)(__int128 *))FastExpAA_CY;
        goto LABEL_110;
      }
      goto LABEL_123;
    }
    v110 = GrayExpandDIB_CY_ExpCX;
    if ( v11 != 1 )
      v110 = ExpandDIB_CY_ExpCX;
    v111 = (unsigned int)(v25 + 6);
    v143 = (__int64 (__fastcall *)(__int128 *))v110;
    if ( (unsigned int)v111 >= (unsigned int)v25 )
    {
      v112 = v11 * v111;
      if ( v112 <= 0xFFFFFFFF )
      {
        v113 = 4LL * (unsigned int)v112;
        if ( v113 <= 0xFFFFFFFF )
        {
          v114 = v11 * (unsigned __int64)v26;
          if ( v114 <= 0xFFFFFFFF )
          {
            v115 = 3LL * (unsigned int)v114;
            if ( v115 <= 0xFFFFFFFF && (int)v113 + (int)v115 >= (unsigned int)v115 )
            {
              v116 = v113 + v115 + 4096;
              goto LABEL_168;
            }
          }
        }
      }
    }
    goto LABEL_123;
  }
  v117 = GrayExpandDIB_CY;
  if ( v11 != 1 )
    v117 = ExpandDIB_CY;
  v143 = (__int64 (__fastcall *)(__int128 *))v117;
  if ( (int)v25 + 6 < (unsigned int)v25 )
    goto LABEL_123;
  v118 = v11 * (unsigned __int64)(unsigned int)(v25 + 6);
  if ( v118 > 0xFFFFFFFF )
    goto LABEL_123;
  v119 = 6LL * (unsigned int)v118;
  if ( v119 > 0xFFFFFFFF )
    goto LABEL_123;
  v116 = v119 + 4096;
LABEL_168:
  v120 = -1;
  if ( v116 >= 0x1000 )
    v120 = v116;
  v139 = v120;
  if ( v116 < 0x1000 )
    goto LABEL_123;
LABEL_51:
  v33 = (v22 & 0x800) != 0 ? v25 : 0;
  *(_BYTE *)(a3 + 96) = v11 != 1 ? 0 : 4;
  *(_DWORD *)(a3 + 152) = v11 * v33;
  v34 = v33 + 8;
  if ( (unsigned int)v34 < v33 )
    goto LABEL_212;
  v35 = v11 * v34;
  if ( v35 > 0xFFFFFFFF )
    goto LABEL_212;
  v140 = v35;
  if ( (int)ALIGN_MEM(&v140, (unsigned int)v35) < 0 )
    goto LABEL_122;
  if ( (int)ALIGN_MEM(&v139, v36) < 0 )
    goto LABEL_122;
  v38 = (unsigned int)(v24 + 8);
  if ( (unsigned int)v38 < v26 )
    goto LABEL_122;
  v39 = v37 * v38;
  if ( v39 > 0xFFFFFFFF )
    goto LABEL_122;
  v142 = v39;
  if ( (int)ALIGN_MEM(&v142, (unsigned int)v39) < 0 )
    goto LABEL_122;
  if ( (unsigned int)v25 >= 0xFFFFFFF6 )
    goto LABEL_122;
  v40 = 4LL * (unsigned int)(v25 + 10);
  if ( v40 > 0xFFFFFFFF )
    goto LABEL_122;
  v147 = 4 * (v25 + 10);
  if ( (int)ALIGN_MEM(&v147, (unsigned int)v40) < 0 )
    goto LABEL_122;
  if ( (v22 & 0x80u) != 0 )
  {
    v123 = ComputeBytesPerScanLine(1LL, 4LL, (unsigned int)v24);
    v124 = v123 + 4;
    if ( (unsigned int)v124 < v123 )
      goto LABEL_122;
    v144 = v123 + 4;
    if ( (int)ALIGN_MEM(&v144, v124) < 0 )
      goto LABEL_122;
    v42 = v144;
    v148 = v144;
  }
  else
  {
    v42 = 0;
    v148 = 0;
  }
  v43 = v142;
  if ( v142 < v140 )
    v43 = v140;
  v146 = v43;
  if ( (v22 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v140, (unsigned int)v25) < 0 )
      goto LABEL_122;
    v44 = v140;
    v144 = v140;
  }
  else
  {
    v44 = 0;
    v144 = 0;
  }
  if ( v149 == 254 && v154[7] )
  {
    if ( (int)ALIGN_MEM(&v142, 366LL) < 0 )
      goto LABEL_122;
    v45 = v142;
  }
  else
  {
    v45 = 0;
  }
  if ( (v22 & 0x40) != 0 )
  {
    v104 = (unsigned int)(v24 + 4);
    if ( (unsigned int)v104 >= (unsigned int)v24 )
    {
      v105 = v41 * v104;
      if ( v105 <= 0xFFFFFFFF )
      {
        v142 = v105;
        if ( (int)ALIGN_MEM(&v142, (unsigned int)v105) >= 0 )
        {
          v46 = v142;
          goto LABEL_71;
        }
      }
    }
LABEL_122:
    v20 = (unsigned int *)pv;
LABEL_212:
    v12 = -2;
    goto LABEL_213;
  }
  v46 = 0;
  v47 = 0xFFFFFFFFLL;
LABEL_71:
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 && (*v156 & 1) != 0 && (*(_BYTE *)(a3 + 72) & 1) != 0 && *((_BYTE *)v154 + 84) != 4 )
  {
    if ( (int)ALIGN_MEM(&v142, 3072LL) >= 0 )
    {
      v48 = v142;
      goto LABEL_73;
    }
    goto LABEL_122;
  }
  v48 = 0;
LABEL_73:
  v49 = 6LL * (unsigned int)v46;
  if ( v49 > v47 )
    goto LABEL_211;
  v50 = v49 + v43;
  if ( (int)v49 + v43 < (unsigned int)v49 )
    goto LABEL_211;
  v51 = v50 + v147;
  if ( v50 + v147 < v50
    || (v52 = v51 + v42, v51 + v42 < v51)
    || (v53 = v52 + v44, v52 + v44 < v52)
    || (v54 = v53 + v48, v53 + v48 < v53)
    || (v55 = v54 + v45, v54 + v45 < v54)
    || (v56 = v139, v55 + v139 < v55)
    || (v57 = ((__int64 (__fastcall *)(__int64, _QWORD, char *, char *, _DWORD, _DWORD, _DWORD, char *, char *, unsigned int))v160[3])(
                v157,
                LODWORD(v160[0]),
                (char *)&v160[8] + 4,
                (char *)&v160[9] + 4,
                *(_DWORD *)(v153 + 16),
                HIDWORD(v160[12]),
                HIDWORD(v160[13]),
                (char *)&v160[10] + 4,
                (char *)&v160[11] + 4,
                v55 + v139),
        (v58 = (int *)v57) == 0LL) )
  {
LABEL_211:
    EngFreeMem(pv);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v57 || !*(_DWORD *)(v57 + 4) )
  {
    v71 = pv;
    goto LABEL_210;
  }
  v59 = *(_QWORD *)(v57 + 32) + v56;
  v60 = v151 * v150;
  *(_DWORD *)a3 = v160[0];
  v61 = v144;
  *(_QWORD *)(a3 + 536) = v59;
  *(_DWORD *)(a3 + 64) = v60;
  v62 = v146 + v59;
  if ( (_DWORD)v61 )
  {
    v63 = v145;
    *(_QWORD *)(a3 + 352) = v62;
    *(_QWORD *)(a3 + 344) = v62;
    *(_DWORD *)(a3 + 368) = 1;
    v125 = v62 + v63;
    v62 += v61;
    *(_QWORD *)(a3 + 360) = v125;
  }
  else
  {
    LODWORD(v63) = v145;
  }
  if ( v46 )
  {
    *(_QWORD *)(a3 + 264) = v62;
    v102 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v46;
    v103 = 6LL;
    do
    {
      *v102 = v62;
      v62 += v46;
      ++v102;
      --v103;
    }
    while ( v103 );
  }
  if ( v45 )
  {
    *(_QWORD *)(a3 + 400) = v62;
    v62 += v45;
  }
  v64 = v148;
  if ( v148 )
  {
    *(_QWORD *)(a3 + 208) = v62;
    v62 += v64;
  }
  v65 = v62;
  if ( v48 )
    v62 += v48;
  else
    v65 = *(_QWORD *)(a3 + 384);
  *(_QWORD *)(a3 + 16) = v65;
  v66 = 4LL * (int)v63;
  *(_QWORD *)(a3 + 576) = v62 + 20;
  *(_QWORD *)(a3 + 544) = v62 + 20;
  *(_QWORD *)(a3 + 560) = v62 + 20;
  *(_QWORD *)(a3 + 568) = v66 + v62 + 20;
  *(_QWORD *)(a3 + 552) = v66 + v62 + 20;
  *(_QWORD *)(a3 + 584) = v66 + v62 + 20;
  memset((void *)(v62 + 20), 255, v66);
  v67 = v160[10];
  if ( SLODWORD(v160[10]) > SLODWORD(v160[11]) )
  {
    v67 = v160[11];
    LODWORD(v160[11]) = v160[10];
    v126 = *(_QWORD *)(a3 + 568) - 4LL;
    LODWORD(v160[10]) = v67;
    *(_QWORD *)(a3 + 576) = v126;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
    v68 = -4;
  }
  else
  {
    v68 = 4;
  }
  *(_DWORD *)(a3 + 592) = v68;
  v69 = v160[0];
  *(_DWORD *)(a3 + 328) = v67 - LODWORD(v160[16]);
  if ( (v69 & 2) != 0 )
  {
    v70 = HIDWORD(v160[14]) - HIDWORD(v160[10]) - 1;
    HIDWORD(v160[10]) = v70;
    HIDWORD(v160[11]) = HIDWORD(v160[14]) - HIDWORD(v160[11]) - 1;
  }
  else
  {
    v70 = HIDWORD(v160[10]);
  }
  v71 = pv;
  *(_DWORD *)(a3 + 332) = v70 - HIDWORD(v160[16]);
  *(_QWORD *)(a3 + 288) = v160[1];
  *(_QWORD *)(a3 + 304) = v71;
  *(_QWORD *)(a3 + 312) = v58;
  *(_DWORD *)(a3 + 56) = *v71;
  v72 = *v58;
  *(_DWORD *)(a3 + 60) = *v58;
  *(_DWORD *)(a3 + 40) = v72;
  if ( (v69 & 0x80u) == 0 )
    goto LABEL_98;
  v127 = LODWORD(v160[17]) + v71[30];
  v128 = v152[5];
  LODWORD(v160[17]) = v127;
  v129 = HIDWORD(v160[17]) + v58[30];
  HIDWORD(v160[17]) = v129;
  v130 = (unsigned int)(v127 + v71[31]);
  v146 = v128;
  if ( v127 < 0 || v129 < 0 || (v131 = v152, (int)v130 > v152[3]) || v129 + v58[31] > v152[4] )
  {
    v12 = -13;
LABEL_210:
    EngFreeMem(v71);
    v138 = v58;
LABEL_214:
    EngFreeMem(v138);
    return v12;
  }
  *(_DWORD *)(a3 + 224) = v128;
  *(_DWORD *)(a3 + 228) = v58[31];
  ComputeByteOffset(1LL, v130, a3 + 4);
  v133 = ComputeByteOffset(1LL, (unsigned int)v127, v132);
  v134 = v146 * v129;
  *(_DWORD *)(a3 + 200) = v135 - v133 + 1;
  v136 = v133 + *((_QWORD *)v131 + 3) + v134;
  v137 = v155;
  *(_QWORD *)(a3 + 216) = v136;
  if ( (*v137 & 8) != 0 )
  {
    v69 |= 0x100u;
    LODWORD(v160[0]) = v69;
  }
  LODWORD(v63) = v145;
  *(_QWORD *)(a3 + 184) = v160[4];
  *(_QWORD *)(a3 + 192) = v160[5];
LABEL_98:
  v73 = v153;
  v74 = LODWORD(v160[8]);
  v75 = *(_DWORD *)(v153 + 20);
  *(_DWORD *)(a3 + 68) = v75;
  *(_DWORD *)(a3 + 260) = v75;
  v76 = ComputeByteOffset(*(unsigned __int8 *)(v73 + 10), v74, a3 + 9);
  v77 = *(_QWORD *)(v73 + 24);
  v78 = v158;
  v80 = v79 * HIDWORD(v160[8]) + (__int64)v76;
  *(_QWORD *)(a3 + 232) = v160[6];
  v81 = v80 + v77;
  *(_QWORD *)(a3 + 240) = v160[7];
  *(_QWORD *)(a3 + 48) = v81;
  *(_QWORD *)(a3 + 32) = v81;
  v82 = *(_DWORD *)(v78 + 20);
  if ( v83 > v84 )
    v82 = -v82;
  v85 = v149;
  *(_DWORD *)(a3 + 156) = v82;
  v86 = ComputeByteOffset(v85, v67, a3 + 97);
  v89 = v88 * v87 + (__int64)v86;
  v90 = *(_DWORD *)(a3 + 156);
  v91 = v89 + *(_QWORD *)(v78 + 24);
  *(_QWORD *)(a3 + 136) = v91;
  *(_QWORD *)(a3 + 120) = v91;
  v92 = v58[1] * v90;
  *(_DWORD *)(a3 + 144) = v63;
  *(_QWORD *)(a3 + 320) = v91 + v92;
  v93 = v58[1];
  v94 = v159;
  *(_DWORD *)(a3 + 148) = v93;
  *(_DWORD *)(a3 + 128) = v93;
  v95 = v143;
  *(_DWORD *)a3 = v69;
  *v94 = v95;
  if ( (v69 & 0x400) != 0 )
  {
    *(_BYTE *)(a3 + 8) |= 1u;
    *(_QWORD *)(a3 + 48) += v58[6] * *(_DWORD *)(a3 + 68);
    *(_DWORD *)(a3 + 60) -= v58[6];
  }
  result = 1LL;
  *(_QWORD *)(a3 + 248) = *(_QWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 256) = *(_DWORD *)(a3 + 60);
  return result;
}
