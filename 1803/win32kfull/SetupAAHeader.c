/*
 * XREFs of SetupAAHeader @ 0x1C00D1908
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00D09A8 (AAHalftoneBitmap.c)
 * Callees:
 *     _ALIGN_MEM @ 0x1C00D2228 (_ALIGN_MEM.c)
 *     ComputeByteOffset @ 0x1C00D2254 (ComputeByteOffset.c)
 *     ComputeInputColorInfo @ 0x1C00D22A8 (ComputeInputColorInfo.c)
 *     ComputeAABBP @ 0x1C00D23D0 (ComputeAABBP.c)
 *     ComputeBytesPerScanLine @ 0x1C00D37A8 (ComputeBytesPerScanLine.c)
 *     CheckBMPNeedFixup @ 0x1C0125748 (CheckBMPNeedFixup.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SetupAAHeader(_QWORD *a1, __int64 a2, __int64 a3, __int64 (__fastcall **a4)(__int128 *a1))
{
  int v4; // r13d
  _BYTE *v5; // r10
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // esi
  int v11; // r15d
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // r13
  __int64 v17; // rdx
  char v18; // al
  int v19; // r14d
  int v20; // ecx
  __int64 v21; // r13
  unsigned int *v22; // r15
  __int16 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r13
  unsigned int v27; // esi
  char v28; // al
  __int64 (__fastcall *v29)(); // r8
  __int64 (__fastcall *v30)(); // rdx
  __int64 v31; // r14
  __int64 (__fastcall *v32)(int, int, int, int, int); // rax
  __int64 (__fastcall *v33)(int, int, int, int, int); // rcx
  unsigned int v34; // ecx
  unsigned __int64 v35; // rax
  unsigned int v36; // r11d
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r10
  int v42; // eax
  int v43; // esi
  _QWORD *v44; // r13
  int v45; // r11d
  int v46; // r12d
  int v47; // r13d
  unsigned __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // r14d
  __int64 v52; // rax
  int *v53; // rsi
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  size_t v62; // r8
  unsigned int v63; // r13d
  int v64; // eax
  unsigned int v65; // r14d
  int v66; // r10d
  int v67; // eax
  __int64 v68; // rdi
  __int64 v69; // rdx
  int v70; // r9d
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rdi
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
  __int64 v84; // rdx
  int v85; // eax
  __int64 (__fastcall **v86)(__int128 *); // rcx
  int v87; // eax
  __int64 (__fastcall *v88)(__int128 *); // rax
  __int64 result; // rax
  unsigned int v90; // ecx
  unsigned int v91; // eax
  unsigned int v92; // ecx
  bool v93; // cf
  int v94; // eax
  unsigned __int64 v95; // rcx
  _QWORD *v96; // rax
  __int64 v97; // r9
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned int v101; // eax
  __int64 (__fastcall *v102)(); // r9
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // r8
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rcx
  int v107; // edx
  unsigned int v108; // ecx
  int v109; // eax
  int *v110; // rcx
  __int64 (__fastcall *v111)(); // r8
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rcx
  unsigned int v114; // edx
  unsigned int v115; // eax
  unsigned int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rax
  int v120; // eax
  int v121; // r12d
  unsigned int v122; // r9d
  int v123; // edi
  __int64 v124; // r8
  int v125; // eax
  _DWORD *v126; // r8
  int v127; // r9d
  __int64 v128; // rcx
  _BYTE *v129; // rax
  int v130; // [rsp+60h] [rbp-A0h] BYREF
  int v131; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v132; // [rsp+68h] [rbp-98h]
  int v133; // [rsp+6Ch] [rbp-94h] BYREF
  signed int v134; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v135)(__int128 *); // [rsp+78h] [rbp-88h]
  _QWORD *v136; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v137; // [rsp+88h] [rbp-78h]
  int v138; // [rsp+8Ch] [rbp-74h]
  int v139; // [rsp+90h] [rbp-70h] BYREF
  int v140; // [rsp+94h] [rbp-6Ch]
  unsigned int v141; // [rsp+98h] [rbp-68h]
  __int64 v142; // [rsp+A0h] [rbp-60h]
  _DWORD *v143; // [rsp+A8h] [rbp-58h]
  __int64 v144; // [rsp+B0h] [rbp-50h]
  _BYTE *v145; // [rsp+B8h] [rbp-48h]
  __int64 v146; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall **v147)(__int128 *); // [rsp+C8h] [rbp-38h]
  unsigned int v148; // [rsp+D0h] [rbp-30h] BYREF
  char v149; // [rsp+D4h] [rbp-2Ch]
  char v150; // [rsp+D5h] [rbp-2Bh]
  __int64 (__fastcall *v151)(int, int, int, int, int); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v152)(__int64, __int64, unsigned int *, _BYTE *, int, int, int, int *, int *, int); // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v153)(__int64, _QWORD, int *, char *, _DWORD, int, int, int *, int *, unsigned int); // [rsp+E8h] [rbp-18h]
  __int64 v154; // [rsp+F0h] [rbp-10h]
  __int64 v155; // [rsp+F8h] [rbp-8h]
  __int64 v156; // [rsp+100h] [rbp+0h]
  __int64 v157; // [rsp+108h] [rbp+8h]
  unsigned int v158; // [rsp+110h] [rbp+10h] BYREF
  int v159; // [rsp+114h] [rbp+14h] BYREF
  _BYTE v160[4]; // [rsp+118h] [rbp+18h] BYREF
  char v161[4]; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v162; // [rsp+120h] [rbp+20h] BYREF
  int v163; // [rsp+124h] [rbp+24h] BYREF
  int v164; // [rsp+128h] [rbp+28h] BYREF
  int v165; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v166; // [rsp+130h] [rbp+30h]
  int v167; // [rsp+134h] [rbp+34h]
  int v168; // [rsp+138h] [rbp+38h]
  int v169; // [rsp+13Ch] [rbp+3Ch]
  int v170; // [rsp+140h] [rbp+40h]
  int v171; // [rsp+144h] [rbp+44h]
  int v172; // [rsp+150h] [rbp+50h]
  int v173; // [rsp+154h] [rbp+54h]
  int v174; // [rsp+158h] [rbp+58h]
  int v175; // [rsp+15Ch] [rbp+5Ch]

  v4 = (int)a1;
  v5 = (_BYTE *)a1[2];
  v142 = a1[3];
  v7 = (_DWORD *)a1[4];
  v136 = a1;
  v143 = v7;
  v144 = a2;
  v8 = a1[5];
  v147 = a4;
  v145 = v5;
  v146 = v8;
  v141 = *(unsigned __int8 *)(v8 + 10);
  v9 = a1[1];
  v10 = *(_DWORD *)(v9 + 56);
  v11 = 2 * ((*(_BYTE *)(v9 + 24) & 1) == 0) + 1;
  v132 = v11;
  v148 = (v10 & 0x80000) != 0 ? 0x200 : 0;
  if ( (*v5 & 0x40) != 0 )
    v148 = 1536;
  v12 = 0;
  if ( (int)ComputeAABBP(v5, v8, &v148, v11 == 1) <= 0 )
    return 0LL;
  v13 = v148;
  v14 = 3100LL;
  v130 = 3100;
  if ( (v10 & 0x100000) != 0 )
  {
    v13 = v148 | 0x800;
    v148 |= 0x800u;
    if ( (v10 & 0x200000) != 0 )
    {
      v13 |= 0x1000u;
      v14 = 5148LL;
      v148 = v13;
    }
    else
    {
      if ( (v10 & 0x800000) != 0 )
        *(_BYTE *)(a3 + 8) |= 8u;
      if ( (v10 & 0x1000000) != 0 )
      {
        v13 |= 0x100000u;
        v148 = v13;
      }
      v14 = 3868LL;
    }
    v130 = v14;
  }
  if ( (v10 & 0x40000000) != 0 )
    v148 = v13 & 0xFFFFFFE7;
  if ( (int)ALIGN_MEM(&v130, v14) < 0 )
    return 4294967294LL;
  v15 = v4 + 64;
  v16 = v142;
  ComputeInputColorInfo(
    *(_QWORD *)(*(_QWORD *)(v142 + 32) + 16LL),
    *(unsigned __int8 *)(*(_QWORD *)(v142 + 32) + 2LL),
    *(unsigned __int8 *)(*(_QWORD *)(v142 + 32) + 3LL),
    v15,
    a3 + 8);
  v17 = v148;
  v18 = 6;
  if ( v11 != 1 )
    v18 = 2;
  *(_BYTE *)(a3 + 8) |= v18;
  if ( (v10 & 0x4000) != 0 )
  {
    v17 = (unsigned int)v17 | 4;
    v148 = v17;
  }
  if ( (*v145 & 0x40) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v148 = v17;
  }
  if ( (v17 & 0x200) != 0 )
  {
    v17 = (unsigned int)v17 & 0xFFFFFFBF;
    v148 = v17;
  }
  if ( (v17 & 0x40) != 0 )
  {
    CheckBMPNeedFixup(4294967231LL, a3, v16, &v148);
    v17 = v148;
    if ( (v148 & 0x80000) != 0 )
    {
      if ( (v10 & 0x80000) != 0 )
        v17 = v148 | 0x200;
      else
        LODWORD(v17) = v148 & 0xFFFFFDFF;
      v148 = v17;
    }
  }
  if ( (v17 & 0x200) != 0 )
  {
    LODWORD(v17) = v17 & 0xFFFFBFFF;
    v148 = v17;
  }
  if ( v143 )
  {
    LODWORD(v17) = v17 | 0x80;
    v148 = v17;
  }
  v19 = v130;
  v20 = *(_DWORD *)(v16 + 12);
  v21 = v144;
  v22 = (unsigned int *)v152(v144, v17, &v158, v160, v20, v166, v168, &v162, &v164, v130);
  if ( !v22 )
  {
    v19 = 0;
    v22 = (unsigned int *)v152(v21, v148, &v158, v160, *(_DWORD *)(v142 + 12), v166, v168, &v162, &v164, 0);
    if ( !v22 )
      return 4294967294LL;
  }
  if ( !*v22 || !v22[1] )
    goto LABEL_181;
  v23 = v148;
  if ( !v19 )
  {
    v148 |= 0x80000000;
    v23 = v148;
    v24 = v21 + 856;
    *(_QWORD *)(a3 + 376) = v21 + 856;
    if ( (v23 & 0x800) == 0 )
      goto LABEL_26;
    v100 = *(_QWORD *)(v21 + 7064);
    *(_QWORD *)(a3 + 336) = v100;
    if ( (v10 & 0x200000) == 0 )
      goto LABEL_26;
    v99 = v100 + 768;
    goto LABEL_149;
  }
  v24 = *((_QWORD *)v22 + 4);
  *(_QWORD *)(a3 + 376) = v24;
  if ( (v23 & 0x800) != 0 )
  {
    v99 = v24 + 3100;
LABEL_149:
    *(_QWORD *)(a3 + 336) = v99;
  }
LABEL_26:
  *(_QWORD *)(a3 + 384) = v24 + 28;
  if ( (v23 & 1) != 0 )
  {
    v162 = v170 - v162 - 1;
    v164 = v170 - v164 - 1;
  }
  v25 = *v22;
  v26 = v22[1];
  v137 = v25;
  v138 = v26;
  if ( (int)v25 + 6 < (unsigned int)v25 )
    goto LABEL_181;
  v27 = v25 + 6;
  v28 = v149;
  v131 = 0;
  v29 = BltDIB_CY;
  v135 = 0LL;
  if ( (v23 & 0x200) != 0 )
  {
    if ( v149 == 1 )
    {
      v135 = (__int64 (__fastcall *)(__int128 *))BltDIB_CY;
LABEL_38:
      v31 = v132;
      if ( v150 )
      {
        if ( v150 == 1 )
        {
          v32 = SkipDIB_CX;
          v33 = GraySkipDIB_CX;
        }
        else
        {
          if ( v150 != 2 )
          {
LABEL_45:
            v28 = -1;
            v149 = -1;
            goto LABEL_46;
          }
          v32 = RepDIB_CX;
          v33 = GrayRepDIB_CX;
        }
      }
      else
      {
        v32 = CopyDIB_CX;
        v33 = GrayCopyDIB_CXGray;
      }
      if ( v132 == 1 )
        v32 = v33;
      v151 = v32;
      goto LABEL_45;
    }
    if ( (unsigned __int8)v149 > 1u )
    {
      if ( (unsigned __int8)v149 <= 3u )
      {
        v30 = SkipDIB_CY;
LABEL_37:
        v135 = (__int64 (__fastcall *)(__int128 *))v30;
        goto LABEL_38;
      }
      if ( (unsigned __int8)v149 <= 5u )
      {
        if ( (v23 & 0x800) != 0 )
        {
          v101 = v26 + 6;
          if ( (int)v26 + 6 < (unsigned int)v26 || 3 * (unsigned __int64)v101 > 0xFFFFFFFF )
            goto LABEL_181;
          v131 = 3 * v101;
        }
        else
        {
          v131 = 0;
        }
        v30 = RepDIB_CY;
        goto LABEL_37;
      }
    }
  }
  v31 = v132;
LABEL_46:
  switch ( v28 )
  {
    case 0:
      v135 = (__int64 (__fastcall *)(__int128 *))TileDIB_CY;
      if ( (_DWORD)v31 != 1 )
      {
        v131 = 0;
        goto LABEL_52;
      }
      if ( (unsigned __int64)(2 * v25) <= 0xFFFFFFFF )
      {
        v131 = 2 * v25;
        goto LABEL_52;
      }
      goto LABEL_181;
    case 1:
LABEL_118:
      v135 = (__int64 (__fastcall *)(__int128 *))v29;
      goto LABEL_52;
    case 2:
      if ( (_DWORD)v31 == 1 )
      {
        v135 = (__int64 (__fastcall *)(__int128 *))GrayShrinkDIB_CY;
        if ( (unsigned __int64)(12 * v26) > 0xFFFFFFFF )
          goto LABEL_181;
        v114 = 12 * v26;
        if ( (int)v26 + 6 < (unsigned int)v26 )
          goto LABEL_181;
        v115 = v26 + 2054;
      }
      else
      {
        v135 = (__int64 (__fastcall *)(__int128 *))ShrinkDIB_CY;
        if ( (unsigned int)v31 * (unsigned __int64)v27 > 0xFFFFFFFF )
          goto LABEL_181;
        v114 = v31 * v27;
        if ( (unsigned __int64)(36 * v25) > 0xFFFFFFFF )
          goto LABEL_181;
        v115 = 36 * v25 + 2048;
      }
      if ( v115 < 0x800 )
      {
LABEL_181:
        EngFreeMem(v22);
        return 0LL;
      }
      v92 = v114 + v115;
      goto LABEL_174;
    case 3:
      v90 = v22[5];
      v135 = ShrinkDIB_CY_SrkCX;
      v91 = v90 + 2;
      if ( v90 + 2 < v90 || 36 * (unsigned __int64)v91 > 0xFFFFFFFF )
        goto LABEL_181;
      v92 = 36 * v91 + 2048;
      v93 = 36 * v91 >= 0xFFFFF800;
      goto LABEL_108;
    case 4:
      v111 = GrayExpandDIB_CY;
      if ( (_DWORD)v31 != 1 )
        v111 = ExpandDIB_CY;
      v135 = (__int64 (__fastcall *)(__int128 *))v111;
      if ( (int)v26 + 6 < (unsigned int)v26 )
        goto LABEL_181;
      v112 = (unsigned int)v31 * (unsigned __int64)(unsigned int)(v26 + 6);
      if ( v112 > 0xFFFFFFFF )
        goto LABEL_181;
      v113 = 6LL * (unsigned int)v112;
      if ( v113 > 0xFFFFFFFF )
        goto LABEL_181;
      v92 = v113 + 4096;
      v114 = 4096;
LABEL_174:
      v93 = v92 < v114;
LABEL_108:
      v94 = -1;
      if ( !v93 )
        v94 = v92;
      v131 = v94;
      if ( !v93 )
        goto LABEL_52;
      goto LABEL_181;
  }
  if ( v28 != 5 )
    goto LABEL_52;
  if ( (v23 & 0x4000) != 0 )
  {
    v95 = (unsigned int)v31 * (unsigned __int64)v27;
    if ( v95 <= 0xFFFFFFFF && 5 * (unsigned __int64)(unsigned int)v95 <= 0xFFFFFFFF )
    {
      v131 = 5 * v95;
      v29 = FastExpAA_CY;
      goto LABEL_118;
    }
    goto LABEL_181;
  }
  v102 = GrayExpandDIB_CY_ExpCX;
  if ( (_DWORD)v31 != 1 )
    v102 = ExpandDIB_CY_ExpCX;
  v135 = (__int64 (__fastcall *)(__int128 *))v102;
  if ( (int)v26 + 6 < (unsigned int)v26 )
    goto LABEL_166;
  v103 = (unsigned int)v31 * (unsigned __int64)(unsigned int)(v26 + 6);
  if ( v103 > 0xFFFFFFFF )
    goto LABEL_166;
  v104 = 4LL * (unsigned int)v103;
  if ( v104 > 0xFFFFFFFF )
    goto LABEL_166;
  v105 = (unsigned int)v31 * (unsigned __int64)v27;
  if ( v105 > 0xFFFFFFFF )
    goto LABEL_166;
  v106 = 3LL * (unsigned int)v105;
  if ( v106 > 0xFFFFFFFF )
    goto LABEL_166;
  v107 = 3 * v105;
  if ( (int)v104 + (int)v106 < (unsigned int)v106 )
    goto LABEL_166;
  v108 = v104 + v106 + 4096;
  v109 = -1;
  if ( v108 >= 0x1000 )
    v109 = v104 + v107 + 4096;
  v131 = v109;
  if ( v108 < 0x1000 )
    goto LABEL_166;
LABEL_52:
  v34 = (v23 & 0x800) != 0 ? v26 : 0;
  *(_BYTE *)(a3 + 96) = (_DWORD)v31 != 1 ? 0 : 4;
  *(_DWORD *)(a3 + 152) = v34 * v31;
  if ( v34 + 8 < v34 )
    goto LABEL_128;
  v35 = v31 * (v34 + 8);
  if ( v35 > 0xFFFFFFFF )
    goto LABEL_128;
  v130 = v31 * (v34 + 8);
  if ( (int)ALIGN_MEM(&v130, (unsigned int)v35) < 0 )
    goto LABEL_128;
  if ( (int)ALIGN_MEM(&v131, v36) < 0 )
    goto LABEL_128;
  if ( v27 + 2 < v27 )
    goto LABEL_128;
  v38 = v31 * (v27 + 2);
  if ( v38 > v37 )
    goto LABEL_128;
  v133 = v31 * (v27 + 2);
  if ( (int)ALIGN_MEM(&v133, (unsigned int)v38) < 0 )
    goto LABEL_128;
  if ( (unsigned int)v26 >= 0xFFFFFFF6 )
    goto LABEL_128;
  v40 = 4LL * (unsigned int)(v26 + 10);
  if ( v40 > v39 )
    goto LABEL_128;
  v139 = 4 * (v26 + 10);
  if ( (int)ALIGN_MEM(&v139, (unsigned int)v40) < 0 )
    goto LABEL_128;
  if ( (v23 & 0x80u) != 0 )
  {
    v116 = ComputeBytesPerScanLine(1LL, 4LL, v137);
    v117 = v116 + 4;
    if ( (unsigned int)v117 < v116 )
      goto LABEL_128;
    v134 = v116 + 4;
    if ( (int)ALIGN_MEM(&v134, v117) < 0 )
      goto LABEL_128;
  }
  else
  {
    v134 = 0;
  }
  v42 = v133;
  if ( v133 < v130 )
    v42 = v130;
  v140 = v42;
  if ( (v23 & 0x1800) == 0x800 )
  {
    if ( (int)ALIGN_MEM(&v130, (unsigned int)v26) < 0 )
      goto LABEL_128;
    v43 = v130;
  }
  else
  {
    v43 = 0;
    v130 = 0;
  }
  v44 = v136;
  if ( v141 == 254 && v136[7] )
  {
    if ( (int)ALIGN_MEM(&v136, 366LL) < 0 )
      goto LABEL_128;
    v45 = (int)v136;
  }
  else
  {
    v45 = 0;
    LODWORD(v136) = 0;
  }
  if ( (v23 & 0x40) != 0 )
  {
    if ( v137 + 4 >= v137 )
    {
      v98 = v31 * (v137 + 4);
      if ( v98 <= v41 )
      {
        v133 = v31 * (v137 + 4);
        if ( (int)ALIGN_MEM(&v133, (unsigned int)v98) >= 0 )
        {
          v46 = v133;
          goto LABEL_72;
        }
      }
    }
LABEL_128:
    v12 = -2;
LABEL_166:
    v110 = (int *)v22;
LABEL_167:
    EngFreeMem(v110);
    return v12;
  }
  v46 = 0;
LABEL_72:
  if ( (*(_BYTE *)(a3 + 8) & 4) != 0 && (v44[8] & 1) != 0 && (*(_BYTE *)(a3 + 72) & 1) != 0 && *((_BYTE *)v44 + 84) != 4 )
  {
    if ( (int)ALIGN_MEM(&v133, 3072LL) >= 0 )
    {
      v47 = v133;
      goto LABEL_74;
    }
    goto LABEL_128;
  }
  v47 = 0;
LABEL_74:
  v48 = 6LL * (unsigned int)v46;
  if ( v48 > v41
    || (v49 = v48 + v140, (int)v48 + v140 < (unsigned int)v48)
    || (v50 = v49 + v139, v49 + v139 < v49)
    || v50 + v134 < v50
    || v50 + v134 + v43 < v50 + v134
    || v50 + v134 + v43 + v47 < v50 + v134 + v43
    || v50 + v134 + v43 + v47 + v45 < v50 + v134 + v43 + v47
    || (v51 = v131, v50 + v134 + v43 + v47 + v45 + v131 < v50 + v134 + v43 + v47 + v45)
    || (v52 = v153(
                v144,
                v148,
                &v159,
                v161,
                *(_DWORD *)(v142 + 16),
                v167,
                v169,
                &v163,
                &v165,
                v50 + v134 + v43 + v47 + v45 + v131),
        (v53 = (int *)v52) == 0LL) )
  {
    EngFreeMem(v22);
    return 4294967294LL;
  }
  if ( !*(_DWORD *)v52 || !*(_DWORD *)(v52 + 4) )
    goto LABEL_215;
  v54 = *(_QWORD *)(v52 + 32) + v51;
  v55 = v137 * v132;
  *(_DWORD *)a3 = v148;
  v56 = v130;
  *(_QWORD *)(a3 + 536) = v54;
  *(_DWORD *)(a3 + 64) = v55;
  v57 = v140 + v54;
  if ( (_DWORD)v56 )
  {
    v58 = v138;
    *(_QWORD *)(a3 + 352) = v57;
    *(_QWORD *)(a3 + 344) = v57;
    *(_DWORD *)(a3 + 368) = 1;
    v118 = v57 + v58;
    v57 += v56;
    *(_QWORD *)(a3 + 360) = v118;
  }
  else
  {
    LODWORD(v58) = v138;
  }
  if ( v46 )
  {
    *(_QWORD *)(a3 + 264) = v57;
    v96 = (_QWORD *)(a3 + 480);
    *(_DWORD *)(a3 + 528) = v46;
    v97 = 6LL;
    do
    {
      *v96 = v57;
      v57 += v46;
      ++v96;
      --v97;
    }
    while ( v97 );
  }
  v59 = (int)v136;
  if ( (_DWORD)v136 )
  {
    *(_QWORD *)(a3 + 400) = v57;
    v57 += v59;
  }
  v60 = v134;
  if ( v134 )
  {
    *(_QWORD *)(a3 + 208) = v57;
    v57 += v60;
  }
  v61 = v57;
  if ( v47 )
    v57 += v47;
  else
    v61 = *(_QWORD *)(a3 + 384);
  *(_QWORD *)(a3 + 16) = v61;
  v62 = 4LL * (int)v58;
  *(_QWORD *)(a3 + 576) = v57 + 20;
  *(_QWORD *)(a3 + 544) = v57 + 20;
  *(_QWORD *)(a3 + 560) = v57 + 20;
  *(_QWORD *)(a3 + 568) = v62 + v57 + 20;
  *(_QWORD *)(a3 + 552) = v62 + v57 + 20;
  *(_QWORD *)(a3 + 584) = v62 + v57 + 20;
  memset((void *)(v57 + 20), 255, v62);
  v63 = v162;
  if ( v162 > v164 )
  {
    v63 = v164;
    v164 = v162;
    v119 = *(_QWORD *)(a3 + 568) - 4LL;
    v162 = v63;
    *(_QWORD *)(a3 + 576) = v119;
    *(_QWORD *)(a3 + 584) = *(_QWORD *)(a3 + 560) - 4LL;
    *(_QWORD *)(a3 + 352) = *(_QWORD *)(a3 + 360) - 1LL;
    *(_QWORD *)(a3 + 360) = *(_QWORD *)(a3 + 344) - 1LL;
    *(_DWORD *)(a3 + 368) = -*(_DWORD *)(a3 + 368);
    v64 = -4;
  }
  else
  {
    v64 = 4;
  }
  *(_DWORD *)(a3 + 592) = v64;
  v65 = v148;
  *(_DWORD *)(a3 + 328) = v63 - v172;
  if ( (v65 & 2) != 0 )
  {
    v66 = v171 - v163 - 1;
    v163 = v66;
    v165 = v171 - v165 - 1;
  }
  else
  {
    v66 = v163;
  }
  *(_QWORD *)(a3 + 304) = v22;
  *(_DWORD *)(a3 + 332) = v66 - v173;
  *(_QWORD *)(a3 + 288) = v151;
  *(_QWORD *)(a3 + 312) = v53;
  *(_DWORD *)(a3 + 56) = *v22;
  v67 = *v53;
  *(_DWORD *)(a3 + 60) = *v53;
  *(_DWORD *)(a3 + 40) = v67;
  if ( (v65 & 0x80u) == 0 )
    goto LABEL_99;
  v120 = v143[5];
  v174 += v22[30];
  v121 = v175 + v53[30];
  v175 = v121;
  v122 = v174 + v22[31];
  if ( v174 < 0 || v121 < 0 || (signed int)v122 > v143[3] || v121 + v53[31] > v143[4] )
  {
    v12 = -13;
LABEL_215:
    EngFreeMem(v22);
    v110 = v53;
    goto LABEL_167;
  }
  v123 = v120;
  *(_DWORD *)(a3 + 224) = v120;
  *(_DWORD *)(a3 + 228) = v53[31];
  ComputeByteOffset(1LL, v122, a3 + 4);
  v125 = ComputeByteOffset(1LL, (unsigned int)v174, v124);
  v126 = v143;
  *(_DWORD *)(a3 + 200) = v127 - v125 + 1;
  v128 = v125 + *((_QWORD *)v126 + 3) + v121 * v123;
  v129 = v145;
  *(_QWORD *)(a3 + 216) = v128;
  if ( (*v129 & 8) != 0 )
  {
    v65 |= 0x100u;
    v148 = v65;
  }
  *(_QWORD *)(a3 + 184) = v154;
  *(_QWORD *)(a3 + 192) = v155;
LABEL_99:
  v68 = v142;
  v69 = v158;
  v70 = *(_DWORD *)(v142 + 20);
  *(_DWORD *)(a3 + 68) = v70;
  *(_DWORD *)(a3 + 260) = v70;
  v71 = ComputeByteOffset(*(unsigned __int8 *)(v68 + 10), v69, a3 + 9);
  v72 = *(_QWORD *)(v68 + 24);
  v73 = v146;
  v75 = v74 * v159 + (__int64)v71;
  *(_QWORD *)(a3 + 232) = v156;
  v76 = v75 + v72;
  *(_QWORD *)(a3 + 240) = v157;
  *(_QWORD *)(a3 + 48) = v76;
  *(_QWORD *)(a3 + 32) = v76;
  v77 = *(_DWORD *)(v73 + 20);
  if ( v78 > v79 )
    v77 = -v77;
  v80 = v141;
  *(_DWORD *)(a3 + 156) = v77;
  v81 = ComputeByteOffset(v80, v63, a3 + 97);
  v84 = v83 * v82 + (__int64)v81 + *(_QWORD *)(v73 + 24);
  *(_QWORD *)(a3 + 136) = v84;
  *(_QWORD *)(a3 + 120) = v84;
  v85 = v138;
  *(_QWORD *)(a3 + 320) = v84 + *(_DWORD *)(a3 + 156) * v53[1];
  v86 = v147;
  *(_DWORD *)(a3 + 144) = v85;
  v87 = v53[1];
  *(_DWORD *)(a3 + 148) = v87;
  *(_DWORD *)(a3 + 128) = v87;
  v88 = v135;
  *(_DWORD *)a3 = v65;
  *v86 = v88;
  if ( (v65 & 0x400) != 0 )
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
