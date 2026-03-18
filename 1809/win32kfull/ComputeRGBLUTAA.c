/*
 * XREFs of ComputeRGBLUTAA @ 0x1C0014B24
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C0013F18 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C02462E8 (CreateHalftoneBrushPat.c)
 * Callees:
 *     Log @ 0x1C0012490 (Log.c)
 *     RaisePower @ 0x1C00126AC (RaisePower.c)
 *     ComputeChecksum @ 0x1C0015078 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C00150C4 (MulFD6.c)
 *     DivFD6 @ 0x1C0015444 (DivFD6.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall ComputeRGBLUTAA(__int64 a1, __int128 *a2, _DWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v19; // eax
  __int16 v20; // ax
  __int128 v21; // xmm0
  int v22; // r14d
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  unsigned __int64 v25; // rax
  int v26; // r10d
  unsigned int v27; // eax
  unsigned int v28; // r11d
  unsigned int v29; // eax
  int v30; // r11d
  unsigned int v31; // eax
  int v32; // eax
  __int64 v33; // r8
  int v34; // r10d
  __int64 v35; // r12
  int v36; // edx
  int v37; // ecx
  char v38; // r13
  __int64 result; // rax
  int v40; // ebx
  int v41; // ecx
  int v42; // esi
  char v43; // al
  _BYTE *v44; // r14
  char *v45; // rdx
  char *v46; // rax
  signed int v47; // ecx
  __int64 v48; // rax
  int v49; // r15d
  unsigned int v50; // ecx
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // r8
  unsigned int v54; // edx
  int v55; // edi
  __int64 v56; // r8
  __int64 v57; // rcx
  signed int v58; // edi
  unsigned int v59; // ebx
  __int64 v60; // r8
  int v61; // r15d
  __int64 v62; // rdx
  int v63; // eax
  int v64; // edi
  int v65; // ebx
  __int64 v66; // r8
  bool v67; // zf
  __int64 v68; // rax
  __int128 v69; // xmm1
  unsigned int v70; // eax
  __int64 v71; // r8
  unsigned int v72; // ebx
  int v73; // eax
  int v74; // eax
  __int64 v75; // r8
  unsigned int v76; // eax
  __int64 v77; // r8
  int v78; // eax
  unsigned int v79; // ebx
  int v80; // eax
  unsigned int v81; // eax
  __int64 v82; // r8
  int v83; // eax
  __int64 v84; // r8
  int v85; // eax
  unsigned int v86; // ebx
  __int64 v87; // r8
  unsigned int v88; // eax
  __int64 v89; // r8
  int v90; // eax
  unsigned int v91; // eax
  __int64 v92; // r8
  int v93; // eax
  __int64 v94; // rbx
  __int64 v95; // r8
  unsigned int v96; // eax
  __int64 v97; // r8
  int v98; // eax
  unsigned int v99; // eax
  __int64 v100; // r8
  unsigned __int8 *v101; // rbx
  char v102; // r13
  int v103; // r11d
  _OWORD *v104; // r8
  _WORD *v105; // r10
  int v106; // edi
  _WORD *v107; // rsi
  __int64 v108; // r14
  unsigned int v109; // ecx
  unsigned int v110; // r9d
  unsigned int v111; // kr04_4
  __int64 v112; // rcx
  _OWORD *v113; // rax
  __int128 v114; // xmm1
  int v115; // edx
  __int64 v116; // rax
  unsigned int v117; // kr08_4
  int v118; // [rsp+24h] [rbp-DCh]
  int v119; // [rsp+28h] [rbp-D8h]
  _BYTE *v120; // [rsp+30h] [rbp-D0h]
  int v121; // [rsp+30h] [rbp-D0h]
  signed int v122; // [rsp+38h] [rbp-C8h]
  int v123; // [rsp+3Ch] [rbp-C4h]
  int v124; // [rsp+40h] [rbp-C0h]
  int v125; // [rsp+44h] [rbp-BCh]
  int v126; // [rsp+48h] [rbp-B8h]
  int v127; // [rsp+4Ch] [rbp-B4h]
  int v128; // [rsp+50h] [rbp-B0h]
  signed int v129; // [rsp+54h] [rbp-ACh]
  unsigned int v130; // [rsp+58h] [rbp-A8h]
  int v131; // [rsp+5Ch] [rbp-A4h]
  unsigned int v132; // [rsp+60h] [rbp-A0h]
  int v133; // [rsp+64h] [rbp-9Ch]
  char v134; // [rsp+68h] [rbp-98h]
  unsigned int v135; // [rsp+6Ch] [rbp-94h]
  int v136; // [rsp+70h] [rbp-90h]
  int v137; // [rsp+74h] [rbp-8Ch]
  int v138; // [rsp+78h] [rbp-88h]
  _DWORD *v139; // [rsp+80h] [rbp-80h]
  _OWORD v140[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v141; // [rsp+A8h] [rbp-58h]
  char *v142; // [rsp+B0h] [rbp-50h]
  char *v143; // [rsp+B8h] [rbp-48h]
  __int64 v144; // [rsp+C0h] [rbp-40h]
  __int128 v145; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v146; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v147; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-8h]
  __int128 v149; // [rsp+100h] [rbp+0h] BYREF
  __int128 v150; // [rsp+110h] [rbp+10h] BYREF
  __int128 v151; // [rsp+120h] [rbp+20h]
  __int128 v152; // [rsp+130h] [rbp+30h]
  __int128 v153; // [rsp+140h] [rbp+40h]
  __int128 v154; // [rsp+150h] [rbp+50h]
  __int128 v155; // [rsp+160h] [rbp+60h]
  __int128 v156; // [rsp+170h] [rbp+70h]
  __int128 v157; // [rsp+180h] [rbp+80h]
  __int128 v158; // [rsp+190h] [rbp+90h]
  __int128 v159; // [rsp+1A0h] [rbp+A0h]
  __int128 v160; // [rsp+1B0h] [rbp+B0h]
  __int128 v161; // [rsp+1C0h] [rbp+C0h]
  __int128 v162; // [rsp+1D0h] [rbp+D0h]
  int v163; // [rsp+1E0h] [rbp+E0h]
  int v164; // [rsp+1F0h] [rbp+F0h]
  int v165; // [rsp+1F4h] [rbp+F4h]
  int v166; // [rsp+1F8h] [rbp+F8h]
  _DWORD v167[4]; // [rsp+200h] [rbp+100h]
  __int64 v168; // [rsp+210h] [rbp+110h]
  __int64 v169; // [rsp+218h] [rbp+118h]
  __int64 v170; // [rsp+220h] [rbp+120h]

  v144 = a1;
  v5 = a1;
  memset(v140, 0, sizeof(v140));
  v7 = *(__int128 *)((char *)a2 + 72);
  v149 = *(__int128 *)((char *)a2 + 56);
  v8 = *(__int128 *)((char *)a2 + 88);
  v150 = v7;
  v9 = *(__int128 *)((char *)a2 + 104);
  v151 = v8;
  v10 = *(__int128 *)((char *)a2 + 120);
  v152 = v9;
  v11 = *(__int128 *)((char *)a2 + 136);
  v153 = v10;
  v12 = *(__int128 *)((char *)a2 + 152);
  v154 = v11;
  v13 = *(__int128 *)((char *)a2 + 184);
  v155 = v12;
  v156 = *(__int128 *)((char *)a2 + 168);
  v14 = *(__int128 *)((char *)a2 + 200);
  v157 = v13;
  v15 = *(__int128 *)((char *)a2 + 216);
  v158 = v14;
  v16 = *(__int128 *)((char *)a2 + 232);
  v159 = v15;
  v17 = *(__int128 *)((char *)a2 + 248);
  v160 = v16;
  v18 = *(__int128 *)((char *)a2 + 264);
  v19 = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v161 = v17;
  *(_QWORD *)&v17 = *((_QWORD *)a2 + 2);
  v162 = v18;
  v163 = v19;
  v20 = 255;
  v21 = *a2;
  v22 = v149;
  v148 = v17;
  v23 = *(__int128 *)((char *)a2 + 40);
  v147 = v21;
  v24 = *(__int128 *)((char *)a2 + 24);
  v146 = v23;
  v145 = v24;
  if ( (v149 & 0x2000) == 0 )
    v20 = 0;
  HIWORD(v148) = v20;
  WORD2(v148) = v20;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v25 = DWORD1(v146);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v166 = 1000000;
  v165 = 1000000;
  v164 = 1000000;
  v167[2] = v25;
  v167[1] = v25;
  v167[0] = v25;
  v170 = 0LL;
  v169 = 0LL;
  v168 = 0LL;
  if ( (v22 & 0x40000) != 0 )
  {
    v63 = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v145 + 1)), v6);
    v64 = HIDWORD(v145);
    DWORD2(v145) = v63;
    v65 = v63;
    LODWORD(v146) = MulFD6(114000LL, HIDWORD(v145), v66);
    *(_WORD *)((char *)&v146 + 9) = 256;
    HIDWORD(v145) = v64 - (v65 + v146);
    WORD1(v145) = 0;
    BYTE1(v145) = 0;
    BYTE11(v146) = 2;
  }
  else if ( (v22 & 0x10000) != 0 )
  {
    v67 = (*(_DWORD *)(v5 + 184) & 0x4000) == 0;
    v164 = *(_DWORD *)(v5 + 468);
    v165 = *(_DWORD *)(v5 + 464);
    v166 = *(_DWORD *)(v5 + 460);
    if ( !v67 )
    {
      v168 = v5 + 524;
      v169 = v5 + 500;
      v170 = v5 + 476;
    }
  }
  v26 = HIDWORD(v146);
  if ( (v22 & 0x20000) == 0 )
    v26 = 1000000;
  HIDWORD(v146) = v26;
  v27 = ComputeChecksum((char *)&v149 + 4, v22 & 0x40321000, 12LL);
  v29 = ComputeChecksum(&v150, v27, v28);
  v31 = ComputeChecksum(&v147, v29, (unsigned int)(v30 + 12));
  v32 = ComputeChecksum(&v145, v31, 32LL);
  v35 = 256LL;
  v36 = *(unsigned __int16 *)(v5 + 7058);
  v37 = *(unsigned __int16 *)(v5 + 7056);
  v38 = v145;
  v138 = v36;
  if ( *a3 != v32 )
  {
    *a3 = v32;
    v40 = v22 & 0x1000;
    *(_WORD *)(v5 + 7056) = 256;
    v119 = v40;
    if ( (v22 & 0x1000) != 0 )
    {
      v68 = 32LL * *(unsigned __int8 *)(v5 + 34);
      v69 = *(_OWORD *)((char *)&RegData + v68 + 16);
      v140[0] = *(_OWORD *)((char *)&RegData + v68);
      v140[1] = v69;
    }
    v139 = a3 + 7;
    v131 = DWORD1(v146) - 1;
    v41 = 3;
    v135 = 1000000 - v34;
    if ( (v22 & 0x100000) == 0 || (v38 & 1) != 0 )
      v120 = 0LL;
    else
      v120 = *(_BYTE **)(v5 + 7064);
    v42 = HIDWORD(v146);
    v137 = v22 & 2;
    v123 = v22 & 8;
    v124 = v22 & 0x10;
    v125 = v22 & 0x20;
    v126 = v22 & 0x100;
    v127 = v22 & 0x200;
    v43 = v22;
    v44 = v120;
    v128 = v43 & 4;
    v45 = (char *)&v146 + 12;
    v133 = ~(DWORD1(v146) - 1);
    v46 = (char *)&v150 + 12;
    while ( 1 )
    {
      v121 = v41 - 1;
      v142 = v46 - 4;
      v143 = v45 - 1;
      v47 = *((_DWORD *)v46 - 4);
      v129 = *((_DWORD *)v46 - 1);
      v48 = (unsigned __int8)*(v45 - 1);
      v122 = v47;
      v49 = v167[v48];
      v132 = *(&v164 + v48);
      DWORD1(v146) = v49;
      v134 = *((_BYTE *)&v145 + v48 + 1);
      v50 = *((_DWORD *)&v145 + v48 + 2);
      v141 = *(&v168 + v48);
      v51 = 0;
      v118 = 0;
      v136 = v49;
      v130 = v50;
      do
      {
        v52 = DivFD6(v51, 255LL, v33);
        v54 = 0;
        v55 = v52;
        if ( v137 )
        {
          v52 = RaisePower(v52, v122, 0);
          v54 = 0;
        }
        if ( v123 )
        {
          if ( v52 <= (int)v152 )
          {
            v62 = DWORD2(v152);
LABEL_50:
            v52 = MulFD6((unsigned int)v52, v62, v53);
          }
          else
          {
            if ( v52 < SDWORD1(v152) )
            {
              v52 -= v152;
              v62 = (unsigned int)v153;
              goto LABEL_50;
            }
            v52 = MulFD6((unsigned int)(v52 - DWORD1(v152)), HIDWORD(v152), v53) + 1000000;
          }
          v54 = 0;
        }
        if ( v124 )
        {
          v52 = MulFD6((unsigned int)v52, HIDWORD(v150), v53);
          v54 = 0;
        }
        if ( v125 )
          v52 += v151;
        if ( v126 )
        {
          v70 = Log(7 * v52 + 1000000);
          v52 = DivFD6(v70, (unsigned int)LogFilterMax, v71);
          v54 = 0;
        }
        v56 = 1000000LL;
        if ( v52 < 0 )
        {
          v52 = 0;
        }
        else if ( v52 > 1000000 )
        {
          v52 = 1000000;
        }
        v57 = (unsigned int)(1000000 - v52);
        if ( !v127 )
          v57 = (unsigned int)v52;
        if ( v40 )
        {
          v72 = DWORD1(v140[0]);
          if ( (int)v57 > SDWORD1(v140[0]) )
          {
            if ( (int)v57 < SDWORD2(v140[0]) )
            {
              if ( (int)v57 <= 79996 )
              {
                v90 = DivFD6(v57, 9033000LL, 1000000LL);
              }
              else
              {
                v86 = DivFD6((unsigned int)(v57 + 160000), 1160000LL, 1000000LL);
                v88 = MulFD6(v86, v86, v87);
                v90 = MulFD6(v86, v88, v89);
              }
              v91 = Log(v90);
              v93 = MulFD6(v91, HIDWORD(v140[1]), v92);
              v78 = DWORD2(v140[1]) + v93;
            }
            else
            {
              v79 = 1000000 - DWORD2(v140[0]);
              v80 = DivFD6((unsigned int)(v57 - DWORD2(v140[0])), (unsigned int)(1000000 - DWORD2(v140[0])), 1000000LL);
              v81 = RaisePower(v80, 2000000, 0);
              v83 = MulFD6(v81, v79, v82);
              v85 = MulFD6((unsigned int)(DWORD2(v140[0]) + v83), DWORD1(v140[1]), v84);
              v78 = LODWORD(v140[1]) + v85;
            }
          }
          else
          {
            v73 = DivFD6(v57, DWORD1(v140[0]), 1000000LL);
            v74 = RaisePower(1000000 - v73, 1500000, 0);
            v76 = MulFD6((unsigned int)(1000000 - v74), v72, v75);
            v78 = MulFD6(v76, HIDWORD(v140[0]), v77);
          }
          v56 = 1000000LL;
          v57 = (unsigned int)((v78 + 50) / 100);
          v54 = 0;
        }
        if ( (int)v57 < 0 )
        {
          v57 = 0LL;
        }
        else if ( (int)v57 > 1000000 )
        {
          v57 = 1000000LL;
        }
        if ( v128 )
        {
          v57 = (unsigned int)RaisePower(v57, v129, 0);
          v54 = 0;
        }
        if ( v44 )
        {
          *v44 = MulFD6(v57, 255LL, v56);
          LODWORD(v57) = v55;
          ++v44;
          v54 = 0;
        }
        v58 = 1000000 - v57;
        if ( (v38 & 1) != 0 )
          v58 = v57;
        if ( v141 )
        {
          LODWORD(v94) = -1;
          do
          {
            v94 = (unsigned int)(v94 + 1);
            v95 = v54;
            v54 = *(_DWORD *)(v141 + 4 * v94);
          }
          while ( v58 > (int)v54 );
          v96 = DivFD6((unsigned int)(v58 - v95), v54 - (unsigned int)v95, v95);
          v59 = v49 + MulFD6(v96, 4095LL, v97) + ((_DWORD)v94 << 12);
        }
        else
        {
          v59 = v49 + MulFD6((unsigned int)v58, v130, v56);
        }
        v61 = ((v59 & v133) << v134) | MulFD6(v131 & v59, v132, v60);
        if ( v58 > v42 )
        {
          v98 = DivFD6((unsigned int)(v58 - v42), v135, v33);
          v99 = RaisePower(v98, 2000000, 0);
          v61 |= (unsigned int)MulFD6(v99, 1365LL, v100) << 21;
        }
        v40 = v119;
        v51 = ++v118;
        *v139 = v61;
        v49 = v136;
        ++v139;
      }
      while ( v118 < 256 );
      v41 = v121;
      v46 = v142;
      v45 = v143;
      if ( !v121 )
      {
        v5 = v144;
        v37 = 256;
        v22 = v149;
        v38 = v145;
        v36 = v138;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v22 & 0x300000) == 0x300000 && v37 != v36 )
  {
    v101 = *(unsigned __int8 **)(v5 + 7064);
    v102 = v38 & 1;
    *(_WORD *)(v5 + 7056) = v36;
    *(_WORD *)(v5 + 7058) = v36;
    v103 = 127;
    v104 = v101 + 768;
    v105 = v101 + 2304;
    v106 = 127;
    v107 = v101 + 2304;
    v108 = 256LL;
    v109 = (v36 * ((unsigned int)(unsigned __int8)-(v102 != 0) + 65280) + 127) / 0xFF;
    v110 = (unsigned __int8)-(v102 != 0) + 65280 - v109;
    do
    {
      v111 = v106;
      v106 += v109;
      *v107++ = v111 / 0xFF;
      --v108;
    }
    while ( v108 );
    if ( v102 )
    {
      v112 = 4LL;
      v113 = v101 + 2304;
      do
      {
        *v104 = *v113;
        v104[1] = v113[1];
        v104[2] = v113[2];
        v104[3] = v113[3];
        v104[4] = v113[4];
        v104[5] = v113[5];
        v104[6] = v113[6];
        v104 += 8;
        v114 = v113[7];
        v113 += 8;
        *(v104 - 1) = v114;
        --v112;
      }
      while ( v112 );
    }
    else
    {
      v115 = 768;
      do
      {
        v116 = *v101++;
        *(_WORD *)v104 = v105[v116];
        v104 = (_OWORD *)((char *)v104 + 2);
        --v115;
      }
      while ( v115 );
    }
    do
    {
      v117 = v103;
      result = (unsigned int)(-2139062143 * v103);
      v103 += v110;
      *v105++ = v117 / 0xFF;
      --v35;
    }
    while ( v35 );
  }
  return result;
}
