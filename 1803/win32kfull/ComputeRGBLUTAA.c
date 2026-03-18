/*
 * XREFs of ComputeRGBLUTAA @ 0x1C00D12C0
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C00D1038 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C0230298 (CreateHalftoneBrushPat.c)
 * Callees:
 *     ComputeChecksum @ 0x1C00D177C (ComputeChecksum.c)
 *     MulFD6 @ 0x1C00D17C8 (MulFD6.c)
 *     DivFD6 @ 0x1C00D331C (DivFD6.c)
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 *     Log @ 0x1C0133680 (Log.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  int v57; // eax
  int v58; // edi
  int v59; // ebx
  bool v60; // zf
  __int64 v61; // rax
  __int128 v62; // xmm1
  __int64 v63; // rdx
  unsigned int v64; // eax
  unsigned int v65; // ebx
  int v66; // eax
  int v67; // eax
  unsigned int v68; // eax
  int v69; // ecx
  unsigned int v70; // ebx
  unsigned int v71; // eax
  unsigned int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // ecx
  __int64 v76; // rbx
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  __int64 v80; // rbx
  int v81; // r8d
  unsigned int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // eax
  unsigned __int8 *v85; // rbx
  char v86; // r13
  int v87; // r11d
  _OWORD *v88; // r8
  _WORD *v89; // r10
  int v90; // edi
  _WORD *v91; // rsi
  __int64 v92; // r14
  unsigned int v93; // ecx
  unsigned int v94; // r9d
  unsigned int v95; // kr00_4
  __int64 v96; // rcx
  _OWORD *v97; // rax
  __int128 v98; // xmm1
  int v99; // edx
  __int64 v100; // rax
  unsigned int v101; // kr04_4
  int v102; // [rsp+24h] [rbp-DCh]
  int v103; // [rsp+28h] [rbp-D8h]
  _BYTE *v104; // [rsp+30h] [rbp-D0h]
  int v105; // [rsp+30h] [rbp-D0h]
  unsigned int v106; // [rsp+38h] [rbp-C8h]
  int v107; // [rsp+3Ch] [rbp-C4h]
  int v108; // [rsp+40h] [rbp-C0h]
  int v109; // [rsp+44h] [rbp-BCh]
  int v110; // [rsp+48h] [rbp-B8h]
  int v111; // [rsp+4Ch] [rbp-B4h]
  int v112; // [rsp+50h] [rbp-B0h]
  unsigned int v113; // [rsp+54h] [rbp-ACh]
  unsigned int v114; // [rsp+58h] [rbp-A8h]
  int v115; // [rsp+5Ch] [rbp-A4h]
  unsigned int v116; // [rsp+60h] [rbp-A0h]
  int v117; // [rsp+64h] [rbp-9Ch]
  char v118; // [rsp+68h] [rbp-98h]
  unsigned int v119; // [rsp+6Ch] [rbp-94h]
  int v120; // [rsp+70h] [rbp-90h]
  int v121; // [rsp+74h] [rbp-8Ch]
  int v122; // [rsp+78h] [rbp-88h]
  _DWORD *v123; // [rsp+80h] [rbp-80h]
  _OWORD v124[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v125; // [rsp+A8h] [rbp-58h]
  char *v126; // [rsp+B0h] [rbp-50h]
  char *v127; // [rsp+B8h] [rbp-48h]
  __int64 v128; // [rsp+C0h] [rbp-40h]
  __int128 v129; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v130; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v131; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v132; // [rsp+F8h] [rbp-8h]
  __int128 v133; // [rsp+100h] [rbp+0h] BYREF
  __int128 v134; // [rsp+110h] [rbp+10h] BYREF
  __int128 v135; // [rsp+120h] [rbp+20h]
  __int128 v136; // [rsp+130h] [rbp+30h]
  __int128 v137; // [rsp+140h] [rbp+40h]
  __int128 v138; // [rsp+150h] [rbp+50h]
  __int128 v139; // [rsp+160h] [rbp+60h]
  __int128 v140; // [rsp+170h] [rbp+70h]
  __int128 v141; // [rsp+180h] [rbp+80h]
  __int128 v142; // [rsp+190h] [rbp+90h]
  __int128 v143; // [rsp+1A0h] [rbp+A0h]
  __int128 v144; // [rsp+1B0h] [rbp+B0h]
  __int128 v145; // [rsp+1C0h] [rbp+C0h]
  __int128 v146; // [rsp+1D0h] [rbp+D0h]
  int v147; // [rsp+1E0h] [rbp+E0h]
  int v148; // [rsp+1F0h] [rbp+F0h]
  int v149; // [rsp+1F4h] [rbp+F4h]
  int v150; // [rsp+1F8h] [rbp+F8h]
  _DWORD v151[4]; // [rsp+200h] [rbp+100h]
  __int64 v152; // [rsp+210h] [rbp+110h]
  __int64 v153; // [rsp+218h] [rbp+118h]
  __int64 v154; // [rsp+220h] [rbp+120h]

  v128 = a1;
  v5 = a1;
  memset(v124, 0, sizeof(v124));
  v6 = *(__int128 *)((char *)a2 + 72);
  v133 = *(__int128 *)((char *)a2 + 56);
  v7 = *(__int128 *)((char *)a2 + 88);
  v134 = v6;
  v8 = *(__int128 *)((char *)a2 + 104);
  v135 = v7;
  v9 = *(__int128 *)((char *)a2 + 120);
  v136 = v8;
  v10 = *(__int128 *)((char *)a2 + 136);
  v137 = v9;
  v11 = *(__int128 *)((char *)a2 + 152);
  v138 = v10;
  v12 = *(__int128 *)((char *)a2 + 184);
  v139 = v11;
  v140 = *(__int128 *)((char *)a2 + 168);
  v13 = *(__int128 *)((char *)a2 + 200);
  v141 = v12;
  v14 = *(__int128 *)((char *)a2 + 216);
  v142 = v13;
  v15 = *(__int128 *)((char *)a2 + 232);
  v143 = v14;
  v16 = *(__int128 *)((char *)a2 + 248);
  v144 = v15;
  v17 = *(__int128 *)((char *)a2 + 264);
  v18 = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v145 = v16;
  *(_QWORD *)&v16 = *((_QWORD *)a2 + 2);
  v146 = v17;
  v147 = v18;
  v19 = 255;
  v20 = *a2;
  v21 = v133;
  v132 = v16;
  v22 = *(__int128 *)((char *)a2 + 40);
  v131 = v20;
  v23 = *(__int128 *)((char *)a2 + 24);
  v130 = v22;
  v129 = v23;
  if ( (v133 & 0x2000) == 0 )
    v19 = 0;
  HIWORD(v132) = v19;
  WORD2(v132) = v19;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  *((_WORD *)a2 + 8) = -21555;
  *((_WORD *)a2 + 9) = -1;
  v24 = DWORD1(v130);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  v150 = 1000000;
  v149 = 1000000;
  v148 = 1000000;
  v151[2] = v24;
  v151[1] = v24;
  v151[0] = v24;
  v154 = 0LL;
  v153 = 0LL;
  v152 = 0LL;
  if ( (v21 & 0x40000) != 0 )
  {
    v57 = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v129 + 1)));
    v58 = HIDWORD(v129);
    DWORD2(v129) = v57;
    v59 = v57;
    LODWORD(v130) = MulFD6(114000LL, HIDWORD(v129));
    *(_WORD *)((char *)&v130 + 9) = 256;
    HIDWORD(v129) = v58 - (v59 + v130);
    WORD1(v129) = 0;
    BYTE1(v129) = 0;
    BYTE11(v130) = 2;
  }
  else if ( (v21 & 0x10000) != 0 )
  {
    v60 = (*(_DWORD *)(v5 + 184) & 0x4000) == 0;
    v148 = *(_DWORD *)(v5 + 468);
    v149 = *(_DWORD *)(v5 + 464);
    v150 = *(_DWORD *)(v5 + 460);
    if ( !v60 )
    {
      v152 = v5 + 524;
      v153 = v5 + 500;
      v154 = v5 + 476;
    }
  }
  v25 = HIDWORD(v130);
  if ( (v21 & 0x20000) == 0 )
    v25 = 1000000;
  HIDWORD(v130) = v25;
  v26 = ComputeChecksum((char *)&v133 + 4, v21 & 0x40321000, 12LL);
  v28 = ComputeChecksum(&v134, v26, v27);
  v30 = ComputeChecksum(&v131, v28, (unsigned int)(v29 + 12));
  v31 = ComputeChecksum(&v129, v30, 32LL);
  v33 = 256LL;
  v34 = *(unsigned __int16 *)(v5 + 7058);
  v35 = *(unsigned __int16 *)(v5 + 7056);
  v36 = v129;
  v122 = v34;
  if ( *a3 != v31 )
  {
    *a3 = v31;
    v38 = v21 & 0x1000;
    *(_WORD *)(v5 + 7056) = 256;
    v103 = v38;
    if ( (v21 & 0x1000) != 0 )
    {
      v61 = 32LL * *(unsigned __int8 *)(v5 + 34);
      v62 = *(_OWORD *)((char *)&RegData + v61 + 16);
      v124[0] = *(_OWORD *)((char *)&RegData + v61);
      v124[1] = v62;
    }
    v123 = a3 + 7;
    v115 = DWORD1(v130) - 1;
    v39 = 3;
    v119 = 1000000 - v32;
    if ( (v21 & 0x100000) == 0 || (v36 & 1) != 0 )
      v104 = 0LL;
    else
      v104 = *(_BYTE **)(v5 + 7064);
    v40 = HIDWORD(v130);
    v121 = v21 & 2;
    v107 = v21 & 8;
    v108 = v21 & 0x10;
    v109 = v21 & 0x20;
    v110 = v21 & 0x100;
    v111 = v21 & 0x200;
    v41 = v21;
    v42 = v104;
    v112 = v41 & 4;
    v43 = (char *)&v130 + 12;
    v117 = ~(DWORD1(v130) - 1);
    v44 = (char *)&v134 + 12;
    while ( 1 )
    {
      v105 = v39 - 1;
      v126 = v44 - 4;
      v127 = v43 - 1;
      v45 = *((_DWORD *)v44 - 4);
      v113 = *((_DWORD *)v44 - 1);
      v46 = (unsigned __int8)*(v43 - 1);
      v106 = v45;
      v47 = v151[v46];
      v116 = *(&v148 + v46);
      DWORD1(v130) = v47;
      v118 = *((_BYTE *)&v129 + v46 + 1);
      v48 = *((_DWORD *)&v129 + v46 + 2);
      v125 = *(&v152 + v46);
      v49 = 0;
      v102 = 0;
      v120 = v47;
      v114 = v48;
      do
      {
        v50 = DivFD6(v49, 255LL);
        v51 = 0;
        v52 = v50;
        if ( v121 )
        {
          v50 = RaisePower((unsigned int)v50, v106, 0LL);
          v51 = 0;
        }
        if ( v107 )
        {
          if ( v50 <= (int)v136 )
          {
            v63 = DWORD2(v136);
            goto LABEL_57;
          }
          if ( v50 < SDWORD1(v136) )
          {
            v50 -= v136;
            v63 = (unsigned int)v137;
LABEL_57:
            v50 = MulFD6((unsigned int)v50, v63);
          }
          else
          {
            v50 = MulFD6((unsigned int)(v50 - DWORD1(v136)), HIDWORD(v136)) + 1000000;
          }
          v51 = 0;
        }
        if ( v108 )
        {
          v50 = MulFD6((unsigned int)v50, HIDWORD(v134));
          v51 = 0;
        }
        if ( v109 )
          v50 += v135;
        if ( v110 )
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
        if ( !v111 )
          v53 = (unsigned int)v50;
        if ( v38 )
        {
          v65 = DWORD1(v124[0]);
          if ( (int)v53 > SDWORD1(v124[0]) )
          {
            if ( (int)v53 < SDWORD2(v124[0]) )
            {
              if ( (int)v53 <= 79996 )
              {
                v78 = DivFD6(v53, 9033000LL);
              }
              else
              {
                v76 = (unsigned int)DivFD6((unsigned int)(v53 + 160000), 1160000LL);
                v77 = MulFD6(v76, v76);
                v78 = MulFD6((unsigned int)v76, v77);
              }
              v79 = Log(v78);
              v74 = MulFD6(v79, HIDWORD(v124[1]));
              v75 = DWORD2(v124[1]);
            }
            else
            {
              v70 = 1000000 - DWORD2(v124[0]);
              v71 = DivFD6((unsigned int)(v53 - DWORD2(v124[0])), (unsigned int)(1000000 - DWORD2(v124[0])));
              v72 = RaisePower(v71, 2000000LL, 0LL);
              v73 = MulFD6(v72, v70);
              v74 = MulFD6((unsigned int)(DWORD2(v124[0]) + v73), DWORD1(v124[1]));
              v75 = v124[1];
            }
            v69 = v74 + v75 + 50;
          }
          else
          {
            v66 = DivFD6(v53, DWORD1(v124[0]));
            v67 = RaisePower((unsigned int)(1000000 - v66), 1500000LL, 0LL);
            v68 = MulFD6((unsigned int)(1000000 - v67), v65);
            v69 = MulFD6(v68, HIDWORD(v124[0])) + 50;
          }
          v53 = (unsigned int)(v69 / 100);
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
        if ( v112 )
        {
          v53 = (unsigned int)RaisePower(v53, v113, 0LL);
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
        if ( v125 )
        {
          LODWORD(v80) = -1;
          do
          {
            v80 = (unsigned int)(v80 + 1);
            v81 = v51;
            v51 = *(_DWORD *)(v125 + 4 * v80);
          }
          while ( v54 > v51 );
          v82 = DivFD6((unsigned int)(v54 - v81), (unsigned int)(v51 - v81));
          v55 = v47 + MulFD6(v82, 4095LL) + ((_DWORD)v80 << 12);
        }
        else
        {
          v55 = v47 + MulFD6((unsigned int)v54, v114);
        }
        v56 = ((v55 & v117) << v118) | MulFD6(v115 & v55, v116);
        if ( v54 > v40 )
        {
          v83 = DivFD6((unsigned int)(v54 - v40), v119);
          v84 = RaisePower(v83, 2000000LL, 0LL);
          v56 |= (unsigned int)MulFD6(v84, 1365LL) << 21;
        }
        v38 = v103;
        v49 = ++v102;
        *v123 = v56;
        v47 = v120;
        ++v123;
      }
      while ( v102 < 256 );
      v39 = v105;
      v44 = v126;
      v43 = v127;
      if ( !v105 )
      {
        v5 = v128;
        v35 = 256;
        v21 = v133;
        v36 = v129;
        v34 = v122;
        break;
      }
    }
  }
  result = 3145728LL;
  if ( (v21 & 0x300000) == 0x300000 && v35 != v34 )
  {
    v85 = *(unsigned __int8 **)(v5 + 7064);
    v86 = v36 & 1;
    *(_WORD *)(v5 + 7056) = v34;
    *(_WORD *)(v5 + 7058) = v34;
    v87 = 127;
    v88 = v85 + 768;
    v89 = v85 + 2304;
    v90 = 127;
    v91 = v85 + 2304;
    v92 = 256LL;
    v93 = (v34 * ((unsigned int)(unsigned __int8)-(v86 != 0) + 65280) + 127) / 0xFF;
    v94 = (unsigned __int8)-(v86 != 0) + 65280 - v93;
    do
    {
      v95 = v90;
      v90 += v93;
      *v91++ = v95 / 0xFF;
      --v92;
    }
    while ( v92 );
    if ( v86 )
    {
      v96 = 4LL;
      v97 = v85 + 2304;
      do
      {
        *v88 = *v97;
        v88[1] = v97[1];
        v88[2] = v97[2];
        v88[3] = v97[3];
        v88[4] = v97[4];
        v88[5] = v97[5];
        v88[6] = v97[6];
        v88 += 8;
        v98 = v97[7];
        v97 += 8;
        *(v88 - 1) = v98;
        --v96;
      }
      while ( v96 );
    }
    else
    {
      v99 = 768;
      do
      {
        v100 = *v85++;
        *(_WORD *)v88 = v89[v100];
        v88 = (_OWORD *)((char *)v88 + 2);
        --v99;
      }
      while ( v99 );
    }
    do
    {
      v101 = v87;
      result = (unsigned int)(-2139062143 * v87);
      v87 += v94;
      *v89++ = v101 / 0xFF;
      --v33;
    }
    while ( v33 );
  }
  return result;
}
