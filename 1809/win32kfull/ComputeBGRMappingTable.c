/*
 * XREFs of ComputeBGRMappingTable @ 0x1C02451CC
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C0013F18 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C02462E8 (CreateHalftoneBrushPat.c)
 * Callees:
 *     FD6DivL @ 0x1C0012450 (FD6DivL.c)
 *     RaisePower @ 0x1C00126AC (RaisePower.c)
 *     MulFD6 @ 0x1C00150C4 (MulFD6.c)
 *     DivFD6 @ 0x1C0015444 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C011AE9C (MulDivFD6Pairs.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     CacheRGBToXYZ @ 0x1C02450DC (CacheRGBToXYZ.c)
 *     ScaleRGB @ 0x1C0245FC0 (ScaleRGB.c)
 */

__int64 __fastcall ComputeBGRMappingTable(__int64 a1, __int64 a2, __int128 *a3, _BYTE *a4)
{
  unsigned __int8 v4; // al
  char v5; // cl
  char *v8; // r13
  unsigned __int64 *v9; // xmm1_8
  unsigned __int8 v10; // r15
  int v11; // ebx
  char v12; // r9
  unsigned __int64 *v13; // rdi
  unsigned int v14; // edx
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  char v19; // cl
  int v20; // eax
  __int16 v21; // bx
  __int16 v22; // r15
  int v23; // edi
  int v24; // r13d
  int v25; // ebx
  int v26; // eax
  int v27; // eax
  char *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // r14d
  int v32; // r8d
  int v33; // r9d
  int v34; // r10d
  int v35; // ecx
  _DWORD *v36; // rdx
  __int64 v37; // r11
  int v38; // eax
  int v39; // r12d
  int v40; // r14d
  int v41; // r15d
  int v42; // r8d
  int v43; // edi
  int v44; // r13d
  int v45; // ebx
  int v46; // edx
  int v47; // r14d
  int v48; // r15d
  int v49; // edx
  int v50; // ecx
  int v51; // r14d
  int v52; // eax
  int v53; // ebx
  int v54; // r14d
  int v55; // r15d
  int v56; // eax
  int v57; // eax
  int v58; // ebx
  int v59; // r14d
  int v60; // eax
  int v61; // r14d
  int v62; // ebx
  int v63; // eax
  int v64; // eax
  int v65; // edx
  int v66; // r14d
  int v67; // eax
  int v68; // eax
  int v69; // edx
  int v70; // ebx
  int v71; // eax
  int v72; // edx
  int v73; // ebx
  int v74; // edx
  int v75; // eax
  int v76; // r13d
  int v77; // ecx
  _DWORD *v78; // r14
  int v79; // ebx
  int v80; // eax
  int v81; // r13d
  char v82; // al
  _BYTE *v83; // rbx
  char v84; // al
  __int64 v85; // rbx
  PVOID v86; // rax
  size_t v87; // r8
  unsigned __int8 v88; // [rsp+20h] [rbp-E0h]
  char v89; // [rsp+21h] [rbp-DFh]
  int v90; // [rsp+24h] [rbp-DCh]
  int v91; // [rsp+24h] [rbp-DCh]
  int v92; // [rsp+28h] [rbp-D8h]
  int v93; // [rsp+2Ch] [rbp-D4h]
  int v94; // [rsp+2Ch] [rbp-D4h]
  int v95; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+34h] [rbp-CCh]
  int v97; // [rsp+38h] [rbp-C8h]
  int v98; // [rsp+3Ch] [rbp-C4h]
  int v99; // [rsp+40h] [rbp-C0h]
  int v100; // [rsp+44h] [rbp-BCh] BYREF
  char *v101; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v102; // [rsp+50h] [rbp-B0h]
  _DWORD *v103; // [rsp+58h] [rbp-A8h]
  _DWORD *v104; // [rsp+60h] [rbp-A0h]
  _DWORD *v105; // [rsp+68h] [rbp-98h]
  _BYTE *v106; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+78h] [rbp-88h]
  int v108; // [rsp+7Ch] [rbp-84h]
  _DWORD *v109; // [rsp+80h] [rbp-80h]
  __int64 v110; // [rsp+88h] [rbp-78h]
  char *v111; // [rsp+90h] [rbp-70h]
  char *v112; // [rsp+98h] [rbp-68h]
  _DWORD *v113; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v115; // [rsp+B0h] [rbp-50h] BYREF
  int v116; // [rsp+B8h] [rbp-48h]
  int v117; // [rsp+C0h] [rbp-40h] BYREF
  int v118; // [rsp+C8h] [rbp-38h]
  int v119; // [rsp+CCh] [rbp-34h]
  int v120; // [rsp+D0h] [rbp-30h]
  int v121; // [rsp+D4h] [rbp-2Ch]
  int v122; // [rsp+D8h] [rbp-28h]
  int v123; // [rsp+DCh] [rbp-24h]
  __int128 v124; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 *v125; // [rsp+F0h] [rbp-10h]
  int v126; // [rsp+F8h] [rbp-8h] BYREF
  int v127; // [rsp+FCh] [rbp-4h]
  int v128; // [rsp+100h] [rbp+0h]
  int v129; // [rsp+104h] [rbp+4h]
  int v130; // [rsp+108h] [rbp+8h]
  int v131; // [rsp+10Ch] [rbp+Ch]

  v106 = a4;
  v103 = 0LL;
  v104 = 0LL;
  v4 = 0;
  v111 = 0LL;
  v5 = 0;
  v109 = 0LL;
  v105 = 0LL;
  v101 = 0LL;
  v8 = 0LL;
  v112 = 0LL;
  v100 = 0;
  v115 = 0LL;
  v116 = 0;
  v92 = 0;
  if ( a3 )
  {
    v9 = (unsigned __int64 *)*((_QWORD *)a3 + 2);
    v124 = *a3;
    v10 = BYTE2(v124);
    v11 = DWORD1(v124);
    v4 = BYTE3(v124);
    v12 = BYTE1(v124);
    v5 = v124;
    v125 = v9;
    v13 = v9;
    v88 = BYTE2(v124);
    v99 = DWORD2(v124);
  }
  else
  {
    v12 = 0;
    v88 = 0;
    v10 = 0;
    v99 = 0x8000;
    v11 = 255;
    v13 = &v115;
  }
  v102 = v13;
  v93 = v11;
  if ( v5 )
    return 4294967267LL;
  v14 = *(_DWORD *)(a2 + 56);
  v97 = *(_DWORD *)(a2 + 56);
  if ( !a4 )
    return 4294967267LL;
  if ( !v13 )
    return 4294967278LL;
  v110 = 0LL;
  v16 = 0LL;
  if ( v12 )
  {
    if ( v4 > 5u )
      return 4294967273LL;
    v14 = SrcOrderTable[v4];
    if ( BYTE1(v14) >= 3u || BYTE2(v14) >= 3u || HIBYTE(v14) >= 3u )
      return 4294967273LL;
    v103 = (_DWORD *)&v115 + BYTE1(v14);
    v104 = (_DWORD *)&v115 + BYTE2(v14);
    v17 = v14;
    LOWORD(v14) = v97;
    v105 = (_DWORD *)&v115 + (v17 >> 24);
  }
  if ( v12 )
  {
    switch ( v12 )
    {
      case 1:
        v95 = 1;
        break;
      case 2:
        v95 = 2;
        break;
      case 4:
        v95 = 3;
        break;
      default:
        return 4294957292LL;
    }
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 304);
    v11 = 31;
    v93 = 31;
    v10 = 0;
    v110 = v16;
    v88 = 0;
    v95 = 0;
  }
  v108 = v14 & 0x400;
  v18 = *(_QWORD *)(a2 + 288);
  if ( (v14 & 0x400) != 0 )
    v109 = (_DWORD *)(v18 + 76);
  v19 = *(_BYTE *)(v18 + 1);
  v89 = v19;
  if ( !v19 && (*(_DWORD *)(a2 + 192) != *(_DWORD *)(a2 + 272) || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 276))
    || (v14 & 0x80C0) != 0 )
  {
    v20 = 1000000;
    v21 = 1;
    v22 = v19 == 0;
    v90 = 1000000;
    if ( (v14 & 0x40) != 0 )
      v23 = *(_DWORD *)(a2 + 92);
    else
      v23 = 1000000;
    v24 = v23;
    if ( (v14 & 0x80u) != 0 )
    {
      if ( v19 == 1 )
      {
        v24 = 500 * v23;
        v23 *= 200;
      }
      v22 = 1;
      v25 = *(_DWORD *)(a2 + 96);
      LODWORD(v125) = MulFD6(v23, -v25);
      v26 = MulFD6(v24, v25);
      v21 = 2;
      v130 = v26;
      v20 = *(_DWORD *)(a2 + 100);
      v90 = v20;
      DWORD1(v124) = 500000000;
      v127 = 200000000;
    }
    DWORD2(v124) = MulFD6(v24, v20);
    v27 = MulFD6(v23, v90);
    v13 = v102;
    LOWORD(v124) = v21;
    v8 = 0LL;
    WORD1(v124) = v22;
    LOWORD(v126) = v21;
    v11 = v93;
    HIWORD(v126) = v22;
    v10 = v88;
    v128 = v27;
  }
  if ( v16 )
  {
    v28 = (char *)EngAllocMem(0, *(unsigned __int16 *)(v16 + 18), 0x31355448u);
    v101 = v28;
    v8 = v28;
    if ( v28 )
    {
      v29 = *(unsigned __int16 *)(v16 + 16);
      v110 = CacheRGBToXYZ(v16, v28, (__int64)&v100, a2);
      v30 = 3 * (v29 + 1);
      v112 = &v8[12 * v29 + 12];
      v11 = 0;
      v111 = &v112[4 * v30];
    }
  }
  v31 = v99;
  v117 = 3;
  v32 = 0;
  if ( v11 == 1000000 )
    v11 = 0;
  v96 = 0;
  v94 = v11;
  v33 = 0;
  v98 = 0;
  v34 = 0;
  v91 = 0;
  v35 = v99;
  if ( v99 )
  {
    v36 = (_DWORD *)v13 + 1;
    v107 = v97 & 0x80C0;
    v37 = v10;
    ++v106;
    v114 = v10;
    while ( 1 )
    {
      LODWORD(v102) = v35 - 1;
      if ( v95 )
      {
        if ( v95 == 1 )
        {
          *v103 = *((unsigned __int8 *)v36 - 4);
          *v104 = *((unsigned __int8 *)v36 - 3);
          v38 = *((unsigned __int8 *)v36 - 2);
        }
        else if ( v95 == 2 )
        {
          *v103 = *((__int16 *)v36 - 2);
          *v104 = *((__int16 *)v36 - 1);
          v38 = *(__int16 *)v36;
        }
        else
        {
          *v103 = *(v36 - 1);
          *v104 = *v36;
          v38 = v36[1];
        }
        *v105 = v38;
        v39 = v116;
        v40 = HIDWORD(v115);
        v41 = v115;
      }
      else
      {
        v41 = v34;
        v115 = __PAIR64__(v33, v34);
        v116 = v32;
        v40 = v33;
        v91 = v34 + 1;
        v39 = v32;
        if ( v34 + 1 >= 32 )
        {
          v91 = 0;
          v98 = v33 + 1;
          if ( v33 + 1 >= 32 )
          {
            v42 = v32 + 1;
            v98 = 0;
            if ( v42 >= 32 )
              v42 = 0;
            v96 = v42;
          }
        }
      }
      v113 = (_DWORD *)((char *)v36 + v37);
      if ( v11 )
      {
        LODWORD(v115) = DivFD6(v41, v11);
        v41 = v115;
        HIDWORD(v115) = DivFD6(v40, v11);
        v40 = HIDWORD(v115);
        v39 = DivFD6(v39, v11);
        v116 = v39;
      }
      if ( !v107 )
        goto LABEL_102;
      if ( v8 )
      {
        v43 = *(_DWORD *)&v111[12 * v39 + 4] + *(_DWORD *)&v112[12 * v40 + 4] + *(_DWORD *)&v101[12 * v41 + 4];
        v44 = *(_DWORD *)&v101[12 * v41] + *(_DWORD *)&v112[12 * v40] + *(_DWORD *)&v111[12 * v39];
        v45 = *(_DWORD *)&v111[12 * v39 + 8] + *(_DWORD *)&v112[12 * v40 + 8] + *(_DWORD *)&v101[12 * v41 + 8];
      }
      else
      {
        v118 = *(_DWORD *)(a2 + 124);
        v120 = *(_DWORD *)(a2 + 128);
        v122 = *(_DWORD *)(a2 + 132);
        HIWORD(v117) = 0;
        v119 = v41;
        v121 = v40;
        v123 = v39;
        v44 = MulDivFD6Pairs(&v117);
        v119 = v41;
        v118 = *(_DWORD *)(a2 + 136);
        v120 = *(_DWORD *)(a2 + 140);
        v122 = *(_DWORD *)(a2 + 144);
        v121 = v40;
        v123 = v39;
        v43 = MulDivFD6Pairs(&v117);
        v118 = *(_DWORD *)(a2 + 148);
        v120 = *(_DWORD *)(a2 + 152);
        v122 = *(_DWORD *)(a2 + 156);
        v119 = v41;
        v121 = v40;
        v123 = v39;
        v45 = MulDivFD6Pairs(&v117);
      }
      if ( v89 )
      {
        v46 = *(_DWORD *)(a2 + 160);
        if ( v46 != 1000000 )
          v44 = DivFD6(v44, v46);
        if ( v44 < 8856 )
          v47 = MulFD6(v44, 7787000) + 137931;
        else
          v47 = RaisePower(v44, 3, 3);
        if ( v43 < 8856 )
          v48 = MulFD6(v43, 7787000) + 137931;
        else
          v48 = RaisePower(v43, 3, 3);
        v49 = *(_DWORD *)(a2 + 168);
        v92 = v48;
        if ( v49 != 1000000 )
          v45 = DivFD6(v45, v49);
        if ( v45 < 8856 )
          v50 = MulFD6(v45, 7787000) + 137931;
        else
          v50 = RaisePower(v45, 3, 3);
        v51 = v47 - v48;
        v52 = v48 - v50;
      }
      else
      {
        v53 = v44 + 2 * (v43 + v45 + 4 * v43) + v43 + v45 + 4 * v43;
        v54 = DivFD6(4 * v44, v53) - *(_DWORD *)(a2 + 184);
        v55 = DivFD6(9 * v43, v53) - *(_DWORD *)(a2 + 188);
        if ( v43 <= 8856 )
        {
          v57 = MulFD6(v43, 9033000);
        }
        else
        {
          v56 = RaisePower(v43, 3, 3);
          v57 = MulFD6(v56, 1160000) - 160000;
        }
        v58 = 13 * v57;
        v51 = MulFD6(13 * v57, v54);
        v52 = MulFD6(v58, v55);
        v48 = v92;
        DWORD1(v124) = v58;
        v127 = v58;
      }
      v131 = v51;
      HIDWORD(v124) = v51;
      v129 = v52;
      HIDWORD(v125) = v52;
      v59 = MulDivFD6Pairs((int *)&v124);
      v60 = MulDivFD6Pairs(&v126);
      if ( v89 )
      {
        v61 = v48 + v59;
        v62 = v48 - v60;
        if ( v61 <= 206893 )
        {
          v64 = DivFD6(v61 - 137931, 7787000);
        }
        else
        {
          v63 = MulFD6(v61, v61);
          v64 = MulFD6(v61, v63);
        }
        v65 = *(_DWORD *)(a2 + 240);
        v66 = v64;
        if ( v65 != 1000000 )
          v66 = MulFD6(v64, v65);
        if ( v62 <= 206893 )
        {
          v68 = DivFD6(v62 - 137931, 7787000);
        }
        else
        {
          v67 = MulFD6(v62, v62);
          v68 = MulFD6(v62, v67);
        }
        v69 = *(_DWORD *)(a2 + 248);
        v70 = v68;
        if ( v69 == 1000000 )
          goto LABEL_101;
        v71 = MulFD6(v68, v69);
      }
      else
      {
        v72 = v60 + *(_DWORD *)(a2 + 268);
        if ( v72 < 0 || (v73 = DivFD6(9 * v43, v72), v73 < 0) )
          v73 = 2147000000;
        v74 = v59 + *(_DWORD *)(a2 + 264);
        if ( v74 >= 0 )
        {
          v75 = MulFD6(v73, v74);
          v66 = FD6DivL(v75, 4);
        }
        else
        {
          v66 = 0;
        }
        v71 = FD6DivL(v73 - 15 * v43 - v66, 3);
      }
      v70 = v71;
LABEL_101:
      v118 = *(_DWORD *)(a2 + 204);
      v120 = *(_DWORD *)(a2 + 208);
      v122 = *(_DWORD *)(a2 + 212);
      HIWORD(v117) = 0;
      v119 = v66;
      v121 = v43;
      v123 = v70;
      LODWORD(v115) = MulDivFD6Pairs(&v117);
      v118 = *(_DWORD *)(a2 + 216);
      v120 = *(_DWORD *)(a2 + 220);
      v122 = *(_DWORD *)(a2 + 224);
      v119 = v66;
      v121 = v43;
      v123 = v70;
      HIDWORD(v115) = MulDivFD6Pairs(&v117);
      v118 = *(_DWORD *)(a2 + 228);
      v120 = *(_DWORD *)(a2 + 232);
      v122 = *(_DWORD *)(a2 + 236);
      v119 = v66;
      v121 = v43;
      v123 = v70;
      v116 = MulDivFD6Pairs(&v117);
      ScaleRGB(&v115);
      v39 = v116;
      v40 = HIDWORD(v115);
      v41 = v115;
LABEL_102:
      if ( v108 )
      {
        if ( (v97 & 0x800) != 0 )
        {
          v76 = v40;
          if ( v41 > v40 )
            v76 = v41;
          if ( v39 > v76 )
            v76 = v39;
        }
        else
        {
          v76 = 1000000;
        }
        v77 = v76 - v40;
        HIWORD(v117) = 0;
        v78 = v109;
        v92 = v77;
        v121 = v77;
        v79 = v76 - v41;
        v119 = v76 - v41;
        v118 = *v109;
        v120 = v109[1];
        v122 = v109[2];
        v123 = v76 - v39;
        v80 = MulDivFD6Pairs(&v117);
        v119 = v76 - v41;
        v41 = v76 - v80;
        v121 = v92;
        v118 = v78[3];
        v120 = v78[4];
        v122 = v78[5];
        v123 = v76 - v39;
        v40 = v76 - MulDivFD6Pairs(&v117);
        v119 = v79;
        v121 = v92;
        v123 = v76 - v39;
        v118 = v109[6];
        v120 = v109[7];
        v122 = v109[8];
        v81 = v76 - MulDivFD6Pairs(&v117);
        if ( v41 >= 0 )
        {
          if ( v41 > 1000000 )
            v41 = 1000000;
          LODWORD(v115) = v41;
        }
        else
        {
          v41 = 0;
          LODWORD(v115) = 0;
        }
        if ( v40 >= 0 )
        {
          if ( v40 > 1000000 )
            v40 = 1000000;
          HIDWORD(v115) = v40;
        }
        else
        {
          v40 = 0;
          HIDWORD(v115) = 0;
        }
        if ( v81 >= 0 )
        {
          if ( v81 > 1000000 )
            v81 = 1000000;
          v39 = v81;
          v116 = v81;
        }
        else
        {
          v39 = 0;
          v116 = 0;
        }
      }
      v82 = MulFD6(v41, 255);
      v83 = v106;
      v106[1] = v82;
      *v83 = MulFD6(v40, 255);
      v84 = MulFD6(v39, 255);
      v35 = (int)v102;
      v36 = v113;
      v8 = v101;
      v32 = v96;
      v33 = v98;
      v34 = v91;
      v37 = v114;
      *(v83 - 1) = v84;
      v106 = v83 + 3;
      v11 = v94;
      if ( !v35 )
      {
        v31 = v99;
        break;
      }
    }
  }
  if ( v8 )
  {
    v85 = v110;
    if ( v110 )
    {
      v86 = *(PVOID *)(v110 + 8);
      if ( v86
        || (v86 = EngAllocMem(0, *(unsigned __int16 *)(v110 + 18), 0x32345448u), (*(_QWORD *)(v85 + 8) = v86) != 0LL) )
      {
        v87 = *(unsigned __int16 *)(v85 + 18);
        *(_DWORD *)v85 = v100;
        memmove(v86, v8, v87);
      }
    }
    EngFreeMem(v8);
  }
  return v31;
}
