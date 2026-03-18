/*
 * XREFs of ComputeRGBLUTAA @ 0x1C0037AF4
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C003786C (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C025F130 (CreateHalftoneBrushPat.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0038048 (ComputeChecksum.c)
 *     MulFD6 @ 0x1C0038094 (MulFD6.c)
 *     DivFD6 @ 0x1C0039CA8 (DivFD6.c)
 *     RaisePower @ 0x1C0039EF4 (RaisePower.c)
 *     Log @ 0x1C003A14C (Log.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall ComputeRGBLUTAA(__int64 a1, __int128 *a2, _DWORD *a3)
{
  __int64 v5; // rsi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // eax
  __int16 v19; // ax
  __int128 v20; // xmm0
  int v21; // r14d
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  unsigned __int64 v24; // rax
  int v25; // r10d
  unsigned int v26; // eax
  unsigned int v27; // r11d
  unsigned int v28; // eax
  int v29; // r11d
  unsigned int v30; // eax
  int v31; // eax
  int v32; // r10d
  __int64 v33; // r12
  int v34; // edx
  int v35; // ecx
  char v36; // r13
  __int64 result; // rax
  int v38; // ebx
  int v39; // ecx
  int v40; // esi
  char v41; // al
  _BYTE *v42; // r14
  char *v43; // rdx
  char *v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rax
  int v47; // r15d
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // eax
  int v51; // edx
  int v52; // edi
  __int64 v53; // rcx
  signed int v54; // edi
  unsigned int v55; // ebx
  int v56; // r15d
  __int64 v57; // rdx
  int v58; // eax
  int v59; // edi
  int v60; // ebx
  bool v61; // zf
  __int64 v62; // rax
  __int128 v63; // xmm1
  unsigned int v64; // eax
  unsigned int v65; // ebx
  int v66; // eax
  int v67; // eax
  unsigned int v68; // eax
  int v69; // eax
  unsigned int v70; // ebx
  unsigned int v71; // eax
  unsigned int v72; // eax
  int v73; // eax
  __int64 v74; // rbx
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rbx
  int v79; // r8d
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // eax
  unsigned __int8 *v83; // rbx
  char v84; // r13
  int v85; // r11d
  _OWORD *v86; // r8
  _WORD *v87; // r10
  int v88; // edi
  _WORD *v89; // rsi
  __int64 v90; // r14
  unsigned int v91; // ecx
  unsigned int v92; // r9d
  unsigned int v93; // kr04_4
  __int64 v94; // rcx
  _OWORD *v95; // rax
  __int128 v96; // xmm1
  int v97; // edx
  __int64 v98; // rax
  unsigned int v99; // kr08_4
  int v100; // [rsp+24h] [rbp-DCh]
  int v101; // [rsp+28h] [rbp-D8h]
  _BYTE *v102; // [rsp+30h] [rbp-D0h]
  int v103; // [rsp+30h] [rbp-D0h]
  unsigned int v104; // [rsp+38h] [rbp-C8h]
  int v105; // [rsp+3Ch] [rbp-C4h]
  int v106; // [rsp+40h] [rbp-C0h]
  int v107; // [rsp+44h] [rbp-BCh]
  int v108; // [rsp+48h] [rbp-B8h]
  int v109; // [rsp+4Ch] [rbp-B4h]
  int v110; // [rsp+50h] [rbp-B0h]
  unsigned int v111; // [rsp+54h] [rbp-ACh]
  unsigned int v112; // [rsp+58h] [rbp-A8h]
  int v113; // [rsp+5Ch] [rbp-A4h]
  unsigned int v114; // [rsp+60h] [rbp-A0h]
  int v115; // [rsp+64h] [rbp-9Ch]
  char v116; // [rsp+68h] [rbp-98h]
  unsigned int v117; // [rsp+6Ch] [rbp-94h]
  int v118; // [rsp+70h] [rbp-90h]
  int v119; // [rsp+74h] [rbp-8Ch]
  int v120; // [rsp+78h] [rbp-88h]
  _DWORD *v121; // [rsp+80h] [rbp-80h]
  _OWORD v122[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v123; // [rsp+A8h] [rbp-58h]
  char *v124; // [rsp+B0h] [rbp-50h]
  char *v125; // [rsp+B8h] [rbp-48h]
  __int64 v126; // [rsp+C0h] [rbp-40h]
  __int128 v127; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v128; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v129; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v130; // [rsp+F8h] [rbp-8h]
  __int128 v131; // [rsp+100h] [rbp+0h] BYREF
  __int128 v132; // [rsp+110h] [rbp+10h] BYREF
  __int128 v133; // [rsp+120h] [rbp+20h]
  __int128 v134; // [rsp+130h] [rbp+30h]
  __int128 v135; // [rsp+140h] [rbp+40h]
  __int128 v136; // [rsp+150h] [rbp+50h]
  __int128 v137; // [rsp+160h] [rbp+60h]
  __int128 v138; // [rsp+170h] [rbp+70h]
  __int128 v139; // [rsp+180h] [rbp+80h]
  __int128 v140; // [rsp+190h] [rbp+90h]
  __int128 v141; // [rsp+1A0h] [rbp+A0h]
  __int128 v142; // [rsp+1B0h] [rbp+B0h]
  __int128 v143; // [rsp+1C0h] [rbp+C0h]
  __int128 v144; // [rsp+1D0h] [rbp+D0h]
  int v145; // [rsp+1E0h] [rbp+E0h]
  int v146; // [rsp+1F0h] [rbp+F0h]
  int v147; // [rsp+1F4h] [rbp+F4h]
  int v148; // [rsp+1F8h] [rbp+F8h]
  _DWORD v149[4]; // [rsp+200h] [rbp+100h]
  __int64 v150; // [rsp+210h] [rbp+110h]
  __int64 v151; // [rsp+218h] [rbp+118h]
  __int64 v152; // [rsp+220h] [rbp+120h]

  v126 = a1;
  v5 = a1;
  memset(v122, 0, sizeof(v122));
  v6 = *(__int128 *)((char *)a2 + 72);
  v131 = *(__int128 *)((char *)a2 + 56);
  v7 = *(__int128 *)((char *)a2 + 88);
  v132 = v6;
  v8 = *(__int128 *)((char *)a2 + 104);
  v133 = v7;
  v9 = *(__int128 *)((char *)a2 + 120);
  v134 = v8;
  v10 = *(__int128 *)((char *)a2 + 136);
  v135 = v9;
  v11 = *(__int128 *)((char *)a2 + 152);
  v136 = v10;
  v12 = *(__int128 *)((char *)a2 + 184);
  v137 = v11;
  v138 = *(__int128 *)((char *)a2 + 168);
  v13 = *(__int128 *)((char *)a2 + 200);
  v139 = v12;
  v14 = *(__int128 *)((char *)a2 + 216);
  v140 = v13;
  v15 = *(__int128 *)((char *)a2 + 232);
  v141 = v14;
  v16 = *(__int128 *)((char *)a2 + 248);
  v142 = v15;
  v17 = *(__int128 *)((char *)a2 + 264);
  v18 = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v143 = v16;
  *(_QWORD *)&v16 = *((_QWORD *)a2 + 2);
  v144 = v17;
  v145 = v18;
  v19 = 255;
  v20 = *a2;
  v21 = v131;
  v130 = v16;
  v22 = *(__int128 *)((char *)a2 + 40);
  v129 = v20;
  v23 = *(__int128 *)((char *)a2 + 24);
  v128 = v22;
  v127 = v23;
  if ( (v131 & 0x2000) == 0 )
    v19 = 0;
  HIWORD(v130) = v19;
  WORD2(v130) = v19;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v24 = DWORD1(v128);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v148 = 1000000;
  v147 = 1000000;
  v146 = 1000000;
  v149[2] = v24;
  v149[1] = v24;
  v149[0] = v24;
  v152 = 0LL;
  v151 = 0LL;
  v150 = 0LL;
  if ( (v21 & 0x40000) != 0 )
  {
    v58 = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v127 + 1)));
    v59 = HIDWORD(v127);
    DWORD2(v127) = v58;
    v60 = v58;
    LODWORD(v128) = MulFD6(114000LL, HIDWORD(v127));
    *(_WORD *)((char *)&v128 + 9) = 256;
    HIDWORD(v127) = v59 - (v60 + v128);
    WORD1(v127) = 0;
    BYTE1(v127) = 0;
    BYTE11(v128) = 2;
  }
  else if ( (v21 & 0x10000) != 0 )
  {
    v61 = (*(_DWORD *)(v5 + 184) & 0x4000) == 0;
    v146 = *(_DWORD *)(v5 + 468);
    v147 = *(_DWORD *)(v5 + 464);
    v148 = *(_DWORD *)(v5 + 460);
    if ( !v61 )
    {
      v150 = v5 + 524;
      v151 = v5 + 500;
      v152 = v5 + 476;
    }
  }
  v25 = HIDWORD(v128);
  if ( (v21 & 0x20000) == 0 )
    v25 = 1000000;
  HIDWORD(v128) = v25;
  v26 = ComputeChecksum((char *)&v131 + 4, v21 & 0x40321000, 12LL);
  v28 = ComputeChecksum(&v132, v26, v27);
  v30 = ComputeChecksum(&v129, v28, (unsigned int)(v29 + 12));
  v31 = ComputeChecksum(&v127, v30, 32LL);
  v33 = 256LL;
  v34 = *(unsigned __int16 *)(v5 + 7058);
  v35 = *(unsigned __int16 *)(v5 + 7056);
  v36 = v127;
  v120 = v34;
  if ( *a3 != v31 )
  {
    *a3 = v31;
    v38 = v21 & 0x1000;
    *(_WORD *)(v5 + 7056) = 256;
    v101 = v38;
    if ( (v21 & 0x1000) != 0 )
    {
      v62 = 32LL * *(unsigned __int8 *)(v5 + 34);
      v63 = *(_OWORD *)((char *)&RegData + v62 + 16);
      v122[0] = *(_OWORD *)((char *)&RegData + v62);
      v122[1] = v63;
    }
    v121 = a3 + 7;
    v113 = DWORD1(v128) - 1;
    v39 = 3;
    v117 = 1000000 - v32;
    if ( (v21 & 0x100000) == 0 || (v36 & 1) != 0 )
      v102 = 0LL;
    else
      v102 = *(_BYTE **)(v5 + 7064);
    v40 = HIDWORD(v128);
    v119 = v21 & 2;
    v105 = v21 & 8;
    v106 = v21 & 0x10;
    v107 = v21 & 0x20;
    v108 = v21 & 0x100;
    v109 = v21 & 0x200;
    v41 = v21;
    v42 = v102;
    v110 = v41 & 4;
    v43 = (char *)&v128 + 12;
    v115 = ~(DWORD1(v128) - 1);
    v44 = (char *)&v132 + 12;
    while ( 1 )
    {
      v103 = v39 - 1;
      v124 = v44 - 4;
      v125 = v43 - 1;
      v45 = *((_DWORD *)v44 - 4);
      v111 = *((_DWORD *)v44 - 1);
      v46 = (unsigned __int8)*(v43 - 1);
      v104 = v45;
      v47 = v149[v46];
      v114 = *(&v146 + v46);
      DWORD1(v128) = v47;
      v116 = *((_BYTE *)&v127 + v46 + 1);
      v48 = *((_DWORD *)&v127 + v46 + 2);
      v123 = *(&v150 + v46);
      v49 = 0;
      v100 = 0;
      v118 = v47;
      v112 = v48;
      do
      {
        v50 = DivFD6(v49, 255LL);
        v51 = 0;
        v52 = v50;
        if ( v119 )
        {
          v50 = RaisePower((unsigned int)v50, v104, 0LL);
          v51 = 0;
        }
        if ( v105 )
        {
          if ( v50 <= (int)v134 )
          {
            v57 = DWORD2(v134);
LABEL_50:
            v50 = MulFD6((unsigned int)v50, v57);
          }
          else
          {
            if ( v50 < SDWORD1(v134) )
            {
              v50 -= v134;
              v57 = (unsigned int)v135;
              goto LABEL_50;
            }
            v50 = MulFD6((unsigned int)(v50 - DWORD1(v134)), HIDWORD(v134)) + 1000000;
          }
          v51 = 0;
        }
        if ( v106 )
        {
          v50 = MulFD6((unsigned int)v50, HIDWORD(v132));
          v51 = 0;
        }
        if ( v107 )
          v50 += v133;
        if ( v108 )
        {
          v64 = Log((unsigned int)(7 * v50 + 1000000));
          v50 = DivFD6(v64, (unsigned int)LogFilterMax);
          v51 = 0;
        }
        if ( v50 < 0 )
        {
          v50 = 0;
        }
        else if ( v50 > 1000000 )
        {
          v50 = 1000000;
        }
        v53 = (unsigned int)(1000000 - v50);
        if ( !v109 )
          v53 = (unsigned int)v50;
        if ( v38 )
        {
          v65 = DWORD1(v122[0]);
          if ( (int)v53 > SDWORD1(v122[0]) )
          {
            if ( (int)v53 < SDWORD2(v122[0]) )
            {
              if ( (int)v53 <= 79996 )
              {
                v76 = DivFD6(v53, 9033000LL);
              }
              else
              {
                v74 = (unsigned int)DivFD6((unsigned int)(v53 + 160000), 1160000LL);
                v75 = MulFD6(v74, v74);
                v76 = MulFD6((unsigned int)v74, v75);
              }
              v77 = Log(v76);
              v69 = DWORD2(v122[1]) + MulFD6(v77, HIDWORD(v122[1]));
            }
            else
            {
              v70 = 1000000 - DWORD2(v122[0]);
              v71 = DivFD6((unsigned int)(v53 - DWORD2(v122[0])), (unsigned int)(1000000 - DWORD2(v122[0])));
              v72 = RaisePower(v71, 2000000LL, 0LL);
              v73 = MulFD6(v72, v70);
              v69 = LODWORD(v122[1]) + MulFD6((unsigned int)(DWORD2(v122[0]) + v73), DWORD1(v122[1]));
            }
          }
          else
          {
            v66 = DivFD6(v53, DWORD1(v122[0]));
            v67 = RaisePower((unsigned int)(1000000 - v66), 1500000LL, 0LL);
            v68 = MulFD6((unsigned int)(1000000 - v67), v65);
            v69 = MulFD6(v68, HIDWORD(v122[0]));
          }
          v53 = (unsigned int)((v69 + 50) / 100);
          v51 = 0;
        }
        if ( (int)v53 < 0 )
        {
          v53 = 0LL;
        }
        else if ( (int)v53 > 1000000 )
        {
          v53 = 1000000LL;
        }
        if ( v110 )
        {
          v53 = (unsigned int)RaisePower(v53, v111, 0LL);
          v51 = 0;
        }
        if ( v42 )
        {
          *v42 = MulFD6(v53, 255LL);
          LODWORD(v53) = v52;
          ++v42;
          v51 = 0;
        }
        v54 = 1000000 - v53;
        if ( (v36 & 1) != 0 )
          v54 = v53;
        if ( v123 )
        {
          LODWORD(v78) = -1;
          do
          {
            v78 = (unsigned int)(v78 + 1);
            v79 = v51;
            v51 = *(_DWORD *)(v123 + 4 * v78);
          }
          while ( v54 > v51 );
          v80 = DivFD6((unsigned int)(v54 - v79), (unsigned int)(v51 - v79));
          v55 = v47 + MulFD6(v80, 4095LL) + ((_DWORD)v78 << 12);
        }
        else
        {
          v55 = v47 + MulFD6((unsigned int)v54, v112);
        }
        v56 = ((v55 & v115) << v116) | MulFD6(v113 & v55, v114);
        if ( v54 > v40 )
        {
          v81 = DivFD6((unsigned int)(v54 - v40), v117);
          v82 = RaisePower(v81, 2000000LL, 0LL);
          v56 |= (unsigned int)MulFD6(v82, 1365LL) << 21;
        }
        v38 = v101;
        v49 = ++v100;
        *v121 = v56;
        v47 = v118;
        ++v121;
      }
      while ( v100 < 256 );
      v39 = v103;
      v44 = v124;
      v43 = v125;
      if ( !v103 )
      {
        v5 = v126;
        v35 = 256;
        v21 = v131;
        v36 = v127;
        v34 = v120;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v21 & 0x300000) == 0x300000 && v35 != v34 )
  {
    v83 = *(unsigned __int8 **)(v5 + 7064);
    v84 = v36 & 1;
    *(_WORD *)(v5 + 7056) = v34;
    *(_WORD *)(v5 + 7058) = v34;
    v85 = 127;
    v86 = v83 + 768;
    v87 = v83 + 2304;
    v88 = 127;
    v89 = v83 + 2304;
    v90 = 256LL;
    v91 = (v34 * ((unsigned int)(unsigned __int8)-(v84 != 0) + 65280) + 127) / 0xFF;
    v92 = (unsigned __int8)-(v84 != 0) + 65280 - v91;
    do
    {
      v93 = v88;
      v88 += v91;
      *v89++ = v93 / 0xFF;
      --v90;
    }
    while ( v90 );
    if ( v84 )
    {
      v94 = 4LL;
      v95 = v83 + 2304;
      do
      {
        *v86 = *v95;
        v86[1] = v95[1];
        v86[2] = v95[2];
        v86[3] = v95[3];
        v86[4] = v95[4];
        v86[5] = v95[5];
        v86[6] = v95[6];
        v86 += 8;
        v96 = v95[7];
        v95 += 8;
        *(v86 - 1) = v96;
        --v94;
      }
      while ( v94 );
    }
    else
    {
      v97 = 768;
      do
      {
        v98 = *v83++;
        *(_WORD *)v86 = v87[v98];
        v86 = (_OWORD *)((char *)v86 + 2);
        --v97;
      }
      while ( v97 );
    }
    do
    {
      v99 = v85;
      result = (unsigned int)(-2139062143 * v85);
      v85 += v92;
      *v87++ = v99 / 0xFF;
      --v33;
    }
    while ( v33 );
  }
  return result;
}
