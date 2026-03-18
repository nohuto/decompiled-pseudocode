/*
 * XREFs of ComputeBGRMappingTable @ 0x1C022F1B4
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C00D1038 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C0230298 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x1C00D17C8 (MulFD6.c)
 *     DivFD6 @ 0x1C00D331C (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C00D4A84 (MulDivFD6Pairs.c)
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 *     FD6DivL @ 0x1C0133720 (FD6DivL.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     CacheRGBToXYZ @ 0x1C022F0C4 (CacheRGBToXYZ.c)
 *     ScaleRGB @ 0x1C022FF8C (ScaleRGB.c)
 */

__int64 __fastcall ComputeBGRMappingTable(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  unsigned __int8 v4; // al
  char v5; // cl
  unsigned __int64 *v7; // xmm1_8
  unsigned __int8 v8; // r13
  int v9; // edx
  char v10; // r8
  unsigned __int64 *v11; // r15
  int v12; // r10d
  __int64 v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // rax
  char v20; // cl
  int v21; // edi
  __int16 v22; // bx
  __int16 v23; // r15
  int v24; // eax
  int v25; // edi
  int v26; // r13d
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rbx
  int v31; // eax
  unsigned int v32; // ebx
  __int64 v33; // rax
  int v34; // edi
  unsigned int v35; // r14d
  int v36; // r8d
  int v37; // r9d
  int v38; // r10d
  int v39; // ecx
  _DWORD *v40; // rdx
  __int64 v41; // r11
  _BYTE *v42; // r13
  int v43; // eax
  int v44; // r12d
  int v45; // r14d
  int v46; // r15d
  int v47; // r8d
  int v48; // r13d
  int v49; // edi
  int v50; // ebx
  int v51; // edx
  int v52; // r14d
  int v53; // r15d
  int v54; // edx
  int v55; // ecx
  int v56; // r14d
  int v57; // eax
  int v58; // ebx
  int v59; // r14d
  int v60; // r15d
  int v61; // eax
  int v62; // eax
  int v63; // ebx
  int v64; // r14d
  int v65; // eax
  int v66; // r14d
  int v67; // ebx
  int v68; // eax
  int v69; // eax
  int v70; // edx
  int v71; // r14d
  int v72; // eax
  int v73; // eax
  int v74; // edx
  int v75; // ebx
  int v76; // eax
  int v77; // edx
  int v78; // ebx
  int v79; // edx
  int v80; // eax
  int v81; // r13d
  int v82; // ecx
  _DWORD *v83; // r14
  int v84; // ebx
  int v85; // eax
  int v86; // r13d
  char v87; // al
  __int64 v88; // rbx
  PVOID v89; // rax
  size_t v90; // r8
  unsigned __int8 v91; // [rsp+20h] [rbp-E0h]
  char v92; // [rsp+21h] [rbp-DFh]
  int v93; // [rsp+24h] [rbp-DCh]
  int v94; // [rsp+28h] [rbp-D8h]
  int v95; // [rsp+2Ch] [rbp-D4h]
  int v96; // [rsp+2Ch] [rbp-D4h]
  int v97; // [rsp+30h] [rbp-D0h]
  int v98; // [rsp+34h] [rbp-CCh]
  int v99; // [rsp+38h] [rbp-C8h]
  int v100; // [rsp+3Ch] [rbp-C4h]
  int v101; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v102; // [rsp+48h] [rbp-B8h]
  _BYTE *v103; // [rsp+48h] [rbp-B8h]
  _DWORD *Src; // [rsp+50h] [rbp-B0h]
  __int16 v105; // [rsp+58h] [rbp-A8h]
  int v106; // [rsp+5Ch] [rbp-A4h] BYREF
  _DWORD *v107; // [rsp+60h] [rbp-A0h]
  _DWORD *v108; // [rsp+68h] [rbp-98h]
  _DWORD *v109; // [rsp+70h] [rbp-90h]
  int v110; // [rsp+78h] [rbp-88h]
  __int64 v111; // [rsp+80h] [rbp-80h]
  _DWORD *v112; // [rsp+88h] [rbp-78h]
  __int64 v113; // [rsp+90h] [rbp-70h]
  _DWORD *v114; // [rsp+98h] [rbp-68h]
  _DWORD *v115; // [rsp+A0h] [rbp-60h]
  _DWORD *v116; // [rsp+A8h] [rbp-58h]
  __int64 v117; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v118; // [rsp+B8h] [rbp-48h] BYREF
  int v119; // [rsp+C0h] [rbp-40h]
  int v120; // [rsp+C8h] [rbp-38h] BYREF
  int v121; // [rsp+D0h] [rbp-30h]
  int v122; // [rsp+D4h] [rbp-2Ch]
  int v123; // [rsp+D8h] [rbp-28h]
  int v124; // [rsp+DCh] [rbp-24h]
  int v125; // [rsp+E0h] [rbp-20h]
  int v126; // [rsp+E4h] [rbp-1Ch]
  __int128 v127; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 *v128; // [rsp+F8h] [rbp-8h]
  int v129; // [rsp+100h] [rbp+0h] BYREF
  int v130; // [rsp+104h] [rbp+4h]
  int v131; // [rsp+108h] [rbp+8h]
  int v132; // [rsp+10Ch] [rbp+Ch]
  int v133; // [rsp+110h] [rbp+10h]
  int v134; // [rsp+114h] [rbp+14h]

  v111 = a4;
  v107 = 0LL;
  v108 = 0LL;
  v4 = 0;
  v114 = 0LL;
  v5 = 0;
  v112 = 0LL;
  v109 = 0LL;
  Src = 0LL;
  v115 = 0LL;
  v106 = 0;
  v118 = 0LL;
  v119 = 0;
  v97 = 0;
  if ( a3 )
  {
    v7 = (unsigned __int64 *)*((_QWORD *)a3 + 2);
    v127 = *a3;
    v8 = BYTE2(v127);
    v9 = DWORD1(v127);
    v4 = BYTE3(v127);
    v10 = BYTE1(v127);
    v5 = v127;
    v128 = v7;
    v11 = v7;
    v91 = BYTE2(v127);
    v101 = DWORD2(v127);
  }
  else
  {
    v10 = 0;
    v91 = 0;
    v8 = 0;
    v101 = 0x8000;
    v9 = 255;
    v11 = &v118;
  }
  v102 = v11;
  v94 = v9;
  if ( v5 )
    return 4294967267LL;
  v12 = *(_DWORD *)(a2 + 56);
  v105 = v12;
  if ( !a4 )
    return 4294967267LL;
  if ( !v11 )
    return 4294967278LL;
  v113 = 0LL;
  v14 = 0LL;
  if ( v10 )
  {
    if ( v4 > 5u )
      return 4294967273LL;
    v15 = SrcOrderTable[v4];
    v16 = v15 >> 8;
    if ( BYTE1(v15) >= 3u )
      return 4294967273LL;
    v17 = HIWORD(v15);
    if ( BYTE2(v15) >= 3u )
      return 4294967273LL;
    v18 = HIBYTE(v15);
    if ( (unsigned __int8)v18 >= 3u )
      return 4294967273LL;
    v107 = (_DWORD *)&v118 + (unsigned __int8)v16;
    v108 = (_DWORD *)&v118 + (unsigned __int8)v17;
    v109 = (_DWORD *)&v118 + (unsigned __int8)v18;
  }
  if ( v10 )
  {
    switch ( v10 )
    {
      case 1:
        v98 = 1;
        break;
      case 2:
        v98 = 2;
        break;
      case 4:
        v98 = 3;
        break;
      default:
        return 4294957292LL;
    }
  }
  else
  {
    v14 = *(_QWORD *)(a2 + 304);
    v94 = 31;
    v8 = 0;
    v113 = v14;
    v91 = 0;
    v98 = 0;
  }
  v110 = v12 & 0x400;
  v19 = *(_QWORD *)(a2 + 288);
  if ( (v12 & 0x400) != 0 )
    v112 = (_DWORD *)(v19 + 76);
  v20 = *(_BYTE *)(v19 + 1);
  v92 = v20;
  if ( !v20 && (*(_DWORD *)(a2 + 192) != *(_DWORD *)(a2 + 272) || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 276))
    || (v21 = v12 & 0x80C0, v93 = v21, (v12 & 0x80C0) != 0) )
  {
    v95 = 1000000;
    v22 = 1;
    v23 = v20 == 0;
    v24 = 1000000;
    if ( (v12 & 0x40) != 0 )
      v25 = *(_DWORD *)(a2 + 92);
    else
      v25 = 1000000;
    v26 = v25;
    if ( (v12 & 0x80u) != 0 )
    {
      if ( v20 == 1 )
      {
        v26 = 500 * v25;
        v25 *= 200;
      }
      v23 = 1;
      v27 = *(_DWORD *)(a2 + 96);
      LODWORD(v128) = MulFD6(v25, -v27);
      v28 = MulFD6(v26, v27);
      v22 = 2;
      v133 = v28;
      v24 = *(_DWORD *)(a2 + 100);
      v95 = v24;
      DWORD1(v127) = 500000000;
      v130 = 200000000;
    }
    DWORD2(v127) = MulFD6(v26, v24);
    v29 = MulFD6(v25, v95);
    v8 = v91;
    v21 = v105 & 0x80C0;
    WORD1(v127) = v23;
    HIWORD(v129) = v23;
    v11 = v102;
    v93 = v21;
    v131 = v29;
    LOWORD(v127) = v22;
    LOWORD(v129) = v22;
  }
  if ( v14 )
  {
    v30 = EngAllocMem(0, *(unsigned __int16 *)(v14 + 18), 0x31355448u);
    Src = v30;
    v31 = v21;
    v93 = v21;
    if ( v30 )
    {
      v32 = *(unsigned __int16 *)(v14 + 16) + 1;
      v113 = CacheRGBToXYZ(v14, Src, (__int64)&v106, a2);
      v33 = 3LL * v32;
      v94 = 0;
      v30 = Src;
      v115 = &Src[v33];
      v114 = &v115[v33];
      v31 = v21;
      v93 = v21;
    }
  }
  else
  {
    v31 = v93;
    v30 = 0LL;
  }
  v34 = v94;
  if ( v94 == 1000000 )
  {
    v34 = 0;
    v94 = 0;
    v93 = v31;
  }
  v35 = v101;
  v36 = 0;
  v120 = 3;
  v37 = 0;
  v99 = 0;
  v38 = 0;
  v100 = 0;
  v39 = v101;
  v96 = 0;
  if ( v101 )
  {
    v40 = (_DWORD *)v11 + 1;
    v41 = v8;
    v42 = (_BYTE *)(v111 + 1);
    v117 = v41;
    v103 = (_BYTE *)(v111 + 1);
    while ( 1 )
    {
      LODWORD(v111) = v39 - 1;
      if ( v98 )
      {
        if ( v98 == 1 )
        {
          *v107 = *((unsigned __int8 *)v40 - 4);
          *v108 = *((unsigned __int8 *)v40 - 3);
          v43 = *((unsigned __int8 *)v40 - 2);
        }
        else if ( v98 == 2 )
        {
          *v107 = *((__int16 *)v40 - 2);
          *v108 = *((__int16 *)v40 - 1);
          v43 = *(__int16 *)v40;
        }
        else
        {
          *v107 = *(v40 - 1);
          *v108 = *v40;
          v43 = v40[1];
        }
        *v109 = v43;
        v44 = v119;
        v45 = HIDWORD(v118);
        v46 = v118;
      }
      else
      {
        v46 = v38;
        v118 = __PAIR64__(v37, v38);
        v119 = v36;
        v45 = v37;
        v96 = v38 + 1;
        v44 = v36;
        if ( v38 + 1 >= 32 )
        {
          v96 = 0;
          v100 = v37 + 1;
          if ( v37 + 1 >= 32 )
          {
            v47 = v36 + 1;
            v100 = 0;
            if ( v47 >= 32 )
              v47 = 0;
            v99 = v47;
          }
        }
      }
      v116 = (_DWORD *)((char *)v40 + v41);
      if ( v34 )
      {
        LODWORD(v118) = DivFD6(v46, v34);
        v46 = v118;
        HIDWORD(v118) = DivFD6(v45, v34);
        v45 = HIDWORD(v118);
        v44 = DivFD6(v44, v34);
        v119 = v44;
      }
      if ( !v93 )
        goto LABEL_103;
      if ( v30 )
      {
        v48 = v30[3 * v46] + v115[3 * v45] + v114[3 * v44];
        v49 = v114[3 * v44 + 1] + v115[3 * v45 + 1] + v30[3 * v46 + 1];
        v50 = v114[3 * v44 + 2] + v115[3 * v45 + 2] + v30[3 * v46 + 2];
      }
      else
      {
        v121 = *(_DWORD *)(a2 + 124);
        v123 = *(_DWORD *)(a2 + 128);
        v125 = *(_DWORD *)(a2 + 132);
        HIWORD(v120) = 0;
        v122 = v46;
        v124 = v45;
        v126 = v44;
        v48 = MulDivFD6Pairs(&v120);
        v122 = v46;
        v121 = *(_DWORD *)(a2 + 136);
        v123 = *(_DWORD *)(a2 + 140);
        v125 = *(_DWORD *)(a2 + 144);
        v124 = v45;
        v126 = v44;
        v49 = MulDivFD6Pairs(&v120);
        v121 = *(_DWORD *)(a2 + 148);
        v123 = *(_DWORD *)(a2 + 152);
        v125 = *(_DWORD *)(a2 + 156);
        v122 = v46;
        v124 = v45;
        v126 = v44;
        v50 = MulDivFD6Pairs(&v120);
      }
      if ( v92 )
      {
        v51 = *(_DWORD *)(a2 + 160);
        if ( v51 != 1000000 )
          v48 = DivFD6(v48, v51);
        if ( v48 < 8856 )
          v52 = MulFD6(v48, 7787000) + 137931;
        else
          v52 = RaisePower(v48, 3, 3);
        if ( v49 < 8856 )
          v53 = MulFD6(v49, 7787000) + 137931;
        else
          v53 = RaisePower(v49, 3, 3);
        v54 = *(_DWORD *)(a2 + 168);
        v97 = v53;
        if ( v54 != 1000000 )
          v50 = DivFD6(v50, v54);
        if ( v50 < 8856 )
          v55 = MulFD6(v50, 7787000) + 137931;
        else
          v55 = RaisePower(v50, 3, 3);
        v56 = v52 - v53;
        v57 = v53 - v55;
      }
      else
      {
        v58 = v48 + 2 * (v49 + v50 + 4 * v49) + v49 + v50 + 4 * v49;
        v59 = DivFD6(4 * v48, v58) - *(_DWORD *)(a2 + 184);
        v60 = DivFD6(9 * v49, v58) - *(_DWORD *)(a2 + 188);
        if ( v49 <= 8856 )
        {
          v62 = MulFD6(v49, 9033000);
        }
        else
        {
          v61 = RaisePower(v49, 3, 3);
          v62 = MulFD6(v61, 1160000) - 160000;
        }
        v63 = 13 * v62;
        v56 = MulFD6(13 * v62, v59);
        v57 = MulFD6(v63, v60);
        v53 = v97;
        DWORD1(v127) = v63;
        v130 = v63;
      }
      v134 = v56;
      HIDWORD(v127) = v56;
      v132 = v57;
      HIDWORD(v128) = v57;
      v64 = MulDivFD6Pairs((int *)&v127);
      v65 = MulDivFD6Pairs(&v129);
      if ( v92 )
      {
        v66 = v53 + v64;
        v67 = v53 - v65;
        if ( v66 <= 206893 )
        {
          v69 = DivFD6(v66 - 137931, 7787000);
        }
        else
        {
          v68 = MulFD6(v66, v66);
          v69 = MulFD6(v66, v68);
        }
        v70 = *(_DWORD *)(a2 + 240);
        v71 = v69;
        if ( v70 != 1000000 )
          v71 = MulFD6(v69, v70);
        if ( v67 <= 206893 )
        {
          v73 = DivFD6(v67 - 137931, 7787000);
        }
        else
        {
          v72 = MulFD6(v67, v67);
          v73 = MulFD6(v67, v72);
        }
        v74 = *(_DWORD *)(a2 + 248);
        v75 = v73;
        if ( v74 == 1000000 )
          goto LABEL_102;
        v76 = MulFD6(v73, v74);
      }
      else
      {
        v77 = v65 + *(_DWORD *)(a2 + 268);
        if ( v77 < 0 || (v78 = DivFD6(9 * v49, v77), v78 < 0) )
          v78 = 2147000000;
        v79 = v64 + *(_DWORD *)(a2 + 264);
        if ( v79 >= 0 )
        {
          v80 = MulFD6(v78, v79);
          v71 = FD6DivL(v80, 4);
        }
        else
        {
          v71 = 0;
        }
        v76 = FD6DivL(v78 - 15 * v49 - v71, 3);
      }
      v75 = v76;
LABEL_102:
      v121 = *(_DWORD *)(a2 + 204);
      v123 = *(_DWORD *)(a2 + 208);
      v125 = *(_DWORD *)(a2 + 212);
      HIWORD(v120) = 0;
      v122 = v71;
      v124 = v49;
      v126 = v75;
      LODWORD(v118) = MulDivFD6Pairs(&v120);
      v121 = *(_DWORD *)(a2 + 216);
      v123 = *(_DWORD *)(a2 + 220);
      v125 = *(_DWORD *)(a2 + 224);
      v122 = v71;
      v124 = v49;
      v126 = v75;
      HIDWORD(v118) = MulDivFD6Pairs(&v120);
      v121 = *(_DWORD *)(a2 + 228);
      v123 = *(_DWORD *)(a2 + 232);
      v125 = *(_DWORD *)(a2 + 236);
      v122 = v71;
      v124 = v49;
      v126 = v75;
      v119 = MulDivFD6Pairs(&v120);
      ScaleRGB(&v118);
      v44 = v119;
      v45 = HIDWORD(v118);
      v46 = v118;
      v42 = v103;
LABEL_103:
      if ( v110 )
      {
        if ( (v105 & 0x800) != 0 )
        {
          v81 = v45;
          if ( v46 > v45 )
            v81 = v46;
          if ( v44 > v81 )
            v81 = v44;
        }
        else
        {
          v81 = 1000000;
        }
        v82 = v81 - v45;
        HIWORD(v120) = 0;
        v83 = v112;
        v97 = v82;
        v124 = v82;
        v84 = v81 - v46;
        v122 = v81 - v46;
        v121 = *v112;
        v123 = v112[1];
        v125 = v112[2];
        v126 = v81 - v44;
        v85 = MulDivFD6Pairs(&v120);
        v122 = v81 - v46;
        v46 = v81 - v85;
        v124 = v97;
        v121 = v83[3];
        v123 = v83[4];
        v125 = v83[5];
        v126 = v81 - v44;
        v45 = v81 - MulDivFD6Pairs(&v120);
        v122 = v84;
        v124 = v97;
        v126 = v81 - v44;
        v121 = v112[6];
        v123 = v112[7];
        v125 = v112[8];
        v86 = v81 - MulDivFD6Pairs(&v120);
        if ( v46 >= 0 )
        {
          if ( v46 > 1000000 )
            v46 = 1000000;
          LODWORD(v118) = v46;
        }
        else
        {
          v46 = 0;
          LODWORD(v118) = 0;
        }
        if ( v45 >= 0 )
        {
          if ( v45 > 1000000 )
            v45 = 1000000;
          HIDWORD(v118) = v45;
        }
        else
        {
          v45 = 0;
          HIDWORD(v118) = 0;
        }
        if ( v86 >= 0 )
        {
          if ( v86 > 1000000 )
            v86 = 1000000;
          v44 = v86;
          v119 = v86;
        }
        else
        {
          v44 = 0;
          v119 = 0;
        }
        v42 = v103;
      }
      v42[1] = MulFD6(v46, 255);
      *v42 = MulFD6(v45, 255);
      v87 = MulFD6(v44, 255);
      v39 = v111;
      v40 = v116;
      v30 = Src;
      v36 = v99;
      v34 = v94;
      v37 = v100;
      v38 = v96;
      v41 = v117;
      *(v42 - 1) = v87;
      v42 += 3;
      v103 = v42;
      if ( !v39 )
      {
        v35 = v101;
        break;
      }
    }
  }
  if ( Src )
  {
    v88 = v113;
    if ( v113 )
    {
      v89 = *(PVOID *)(v113 + 8);
      if ( v89
        || (v89 = EngAllocMem(0, *(unsigned __int16 *)(v113 + 18), 0x32345448u), (*(_QWORD *)(v88 + 8) = v89) != 0LL) )
      {
        v90 = *(unsigned __int16 *)(v88 + 18);
        *(_DWORD *)v88 = v106;
        memmove(v89, Src, v90);
      }
    }
    EngFreeMem(Src);
  }
  return v35;
}
