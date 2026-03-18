/*
 * XREFs of pDCIAdjClr @ 0x1C00D2880
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00D06DC (HT_HalftoneBitmap.c)
 *     HT_CreateStandardMonoPattern @ 0x1C00D357C (HT_CreateStandardMonoPattern.c)
 *     HT_CreateHalftoneBrush @ 0x1C022EBD8 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     AdjustSrcDevGamma @ 0x1C00D3114 (AdjustSrcDevGamma.c)
 *     DivFD6 @ 0x1C00D331C (DivFD6.c)
 *     ComputeColorSpaceXForm @ 0x1C00D3BC8 (ComputeColorSpaceXForm.c)
 *     CompareMemory @ 0x1C00D4C50 (CompareMemory.c)
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 *     Log @ 0x1C0133680 (Log.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GenCMYMaskXlate @ 0x1C022FE34 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C0230058 (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(__int64 a1, __m128i *a2, _QWORD *a3, unsigned int a4, __int16 a5, int a6, _DWORD *a7)
{
  __int64 v11; // rdi
  int v12; // r14d
  __int16 v13; // dx
  __int16 v14; // r8
  __int16 v15; // r15
  int v16; // ebx
  __int64 v17; // xmm1_8
  __int16 v18; // cx
  __int8 v19; // r8d^2
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  int v35; // ecx
  int v36; // r9d
  __int16 v37; // cx
  char v38; // si
  __int64 v39; // rdx
  __int8 v40; // cl
  char v41; // al
  unsigned int v42; // ebx
  __m128i v43; // xmm2
  int v44; // ebx
  int v45; // eax
  int v46; // eax
  int v47; // r8d
  __int64 v48; // r9
  int v49; // eax
  int v50; // ecx
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  int v64; // eax
  int v66; // ebx
  char v67; // r14
  __int64 v68; // r14
  unsigned __int16 epi16; // ax
  unsigned int v70; // ebx
  unsigned int v71; // r12d
  unsigned __int16 v72; // ax
  int v73; // r14d
  __int64 v74; // rdx
  unsigned int v75; // ecx
  __int64 v76; // xmm1_8
  __int128 v77; // xmm0
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  int v90; // eax
  unsigned int *v91; // r8
  unsigned int i; // ecx
  unsigned int v93; // eax
  int v94; // ebx
  char v95; // dl
  unsigned __int8 v96; // r11
  char v97; // r8
  unsigned __int8 v98; // r9
  char *v99; // rcx
  __int64 v100; // rax
  char v101; // al
  int v102; // eax
  char v103; // al
  __int16 v104; // [rsp+30h] [rbp-D0h]
  int v105; // [rsp+30h] [rbp-D0h]
  __int128 v106; // [rsp+38h] [rbp-C8h]
  __int128 v107; // [rsp+48h] [rbp-B8h]
  int v108; // [rsp+58h] [rbp-A8h]
  char *v109; // [rsp+60h] [rbp-A0h]
  __int64 v110; // [rsp+68h] [rbp-98h]
  __int128 v111; // [rsp+70h] [rbp-90h] BYREF
  __int128 v112; // [rsp+80h] [rbp-80h]
  __int128 v113; // [rsp+90h] [rbp-70h] BYREF
  __m256i v114; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v115; // [rsp+C0h] [rbp-40h]
  __int128 v116; // [rsp+D0h] [rbp-30h]
  __int128 v117; // [rsp+E0h] [rbp-20h]
  __int128 v118; // [rsp+F0h] [rbp-10h]
  __int128 v119; // [rsp+100h] [rbp+0h] BYREF
  __int128 v120; // [rsp+110h] [rbp+10h]
  __int128 v121; // [rsp+120h] [rbp+20h]
  __int128 v122; // [rsp+130h] [rbp+30h]
  __int128 v123; // [rsp+140h] [rbp+40h]
  int v124; // [rsp+150h] [rbp+50h]
  __int128 v125; // [rsp+160h] [rbp+60h] BYREF
  __int64 v126; // [rsp+170h] [rbp+70h]
  __int128 v127; // [rsp+178h] [rbp+78h]
  __int64 v128; // [rsp+188h] [rbp+88h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    if ( (a5 & 0x200) != 0 && dwABPreMul )
    {
      dwABPreMul = 0;
      v91 = (unsigned int *)&unk_1C0320364;
      for ( i = 1; i < 0x100; ++i )
      {
        v93 = (i - 16777217) / i;
        *v91++ = v93;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v109 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      *a3 = v109;
      if ( v109 )
      {
        v12 = *(_DWORD *)(v11 + 184);
        v13 = a5 | 8;
        DWORD1(v106) = a6;
        v104 = v12;
        if ( (v12 & 0x80u) == 0 )
          v13 = a5;
        if ( HIBYTE(a6) == 1 || (v14 = v13, HIBYTE(a6) == 0xFE) && (v14 = v13, (v12 & 0x300) == 0x300) )
          v14 = v13 | 0x41;
        v15 = v14 & 0xFFEF;
        v110 = (v14 & 0x10) != 0 ? 3956LL : 856LL;
        v16 = 24;
        if ( (v14 & 8) == 0 )
          v15 = v14;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v17 = a2[1].m128i_i64[0];
        v18 = _mm_cvtsi128_si32(*a2);
        v125 = (__int128)*a2;
        v126 = v17;
        if ( v18 != 24 || (v19 = BYTE2(v125), (WORD1(v125) & 0xFFFC) != 0) )
        {
          v125 = DefaultCA;
          v19 = BYTE2(DefaultCA);
          v126 = 0LL;
        }
        v20 = *(_QWORD *)(v11 + 212);
        v127 = *(_OWORD *)(v11 + 196);
        v21 = *(_OWORD *)(v11 + 220);
        v128 = v20;
        v22 = *(_OWORD *)(v11 + 236);
        WORD1(v125) = v19 & 3;
        v111 = v21;
        v23 = *(_OWORD *)(v11 + 252);
        v112 = v22;
        v24 = *(_OWORD *)(v11 + 268);
        v113 = v23;
        v25 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v114.m256i_i8 = v24;
        v26 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v114.m256i_u64[2] = v25;
        v27 = *(_OWORD *)(v11 + 316);
        v115 = v26;
        v28 = *(_OWORD *)(v11 + 332);
        v116 = v27;
        v29 = *(_OWORD *)(v11 + 348);
        v117 = v28;
        v30 = *(_OWORD *)(v11 + 364);
        v118 = v29;
        v31 = *(_OWORD *)(v11 + 380);
        v119 = v30;
        v32 = *(_OWORD *)(v11 + 396);
        v120 = v31;
        v33 = *(_OWORD *)(v11 + 412);
        v121 = v32;
        v34 = *(_OWORD *)(v11 + 428);
        v35 = *(_DWORD *)(v11 + 444);
        v122 = v33;
        v123 = v34;
        v124 = v35;
        if ( WORD2(v125) > 8u )
          WORD2(v125) = 0;
        if ( WORD3(v125) < 0x540u )
        {
          WORD3(v125) = 1344;
        }
        else if ( WORD3(v125) > 0xFDE8u )
        {
          WORD3(v125) = -536;
        }
        if ( WORD4(v125) < 0x540u )
        {
          WORD4(v125) = 1344;
        }
        else if ( WORD4(v125) > 0xFDE8u )
        {
          WORD4(v125) = -536;
        }
        if ( WORD5(v125) < 0x540u )
        {
          WORD5(v125) = 1344;
        }
        else if ( WORD5(v125) > 0xFDE8u )
        {
          WORD5(v125) = -536;
        }
        if ( WORD6(v125) > 0xFA0u )
          WORD6(v125) = 4000;
        if ( HIWORD(v125) < 0x1770u )
        {
          HIWORD(v125) = 6000;
        }
        else if ( HIWORD(v125) > 0x2710u )
        {
          HIWORD(v125) = 10000;
        }
        v36 = 100;
        if ( (__int16)v126 < -100 )
        {
          LOWORD(v126) = -100;
        }
        else if ( (__int16)v126 > 100 )
        {
          LOWORD(v126) = 100;
        }
        if ( SWORD1(v126) < -100 )
        {
          WORD1(v126) = -100;
        }
        else if ( SWORD1(v126) > 100 )
        {
          WORD1(v126) = 100;
        }
        v37 = WORD2(v126);
        if ( SWORD2(v126) < -100 )
        {
          v37 = -100;
          WORD2(v126) = -100;
        }
        else if ( SWORD2(v126) > 100 )
        {
          v37 = 100;
          WORD2(v126) = 100;
        }
        if ( SHIWORD(v126) < -100 )
        {
          HIWORD(v126) = -100;
        }
        else if ( SHIWORD(v126) > 100 )
        {
          HIWORD(v126) = 100;
        }
        if ( (v15 & 1) != 0 || v37 == -100 )
          HIDWORD(v126) = 65436;
        v38 = 2;
        if ( (v15 & 2) != 0 )
          WORD1(v125) = v19 & 2 | 1;
        LOBYTE(v36) = HIBYTE(a6);
        LOWORD(v125) = v15 & 0x8059;
        if ( !(unsigned int)AdjustSrcDevGamma(v11, (unsigned int)&v111, (unsigned int)&v125, v36, v15) )
        {
          v39 = 0LL;
          while ( 1 )
          {
            v40 = *((_BYTE *)&v125 + v39);
            --v16;
            v41 = *((_BYTE *)&v127 + v39++);
            if ( v40 != v41 )
              break;
            if ( !v16 )
            {
              v42 = v111;
              v43 = (__m128i)v125;
              goto LABEL_54;
            }
          }
        }
        v66 = v111 & 0x1007;
        LODWORD(v111) = v66;
        if ( (v15 & 0x40) != 0 )
        {
          v66 |= 0x2000u;
          LODWORD(v111) = v66;
        }
        v43 = (__m128i)v125;
        v67 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v125, 2));
        if ( (v67 & 2) != 0 )
        {
          if ( !LogFilterMax )
            LogFilterMax = Log(8000000LL);
          v66 |= 0x100u;
          LODWORD(v111) = v66;
        }
        if ( (v67 & 1) != 0 )
        {
          v66 |= 0x200u;
          LODWORD(v111) = v66;
        }
        v68 = v11 + (-(__int64)((v66 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + 72;
        if ( (((unsigned __int16)_mm_cvtsi128_si32(v43) ^ (unsigned __int16)v127) & 0x8008) != 0 )
        {
          ComputeColorSpaceXForm(
            v11,
            v11 + (-(__int64)((v66 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + 72,
            (char *)&v119 + 4,
            0xFFFFFFFFLL);
          v43 = (__m128i)v125;
          v66 = v111;
        }
        epi16 = _mm_extract_epi16(v43, 2);
        if ( epi16 != WORD2(v127) )
        {
          ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v114.m256i_u64[2] + 4, epi16);
          v43 = (__m128i)v125;
          v66 = v111;
        }
        if ( (v66 & 0x2000) != 0 || (unsigned int)CompareMemory(v68, v11 + 36, 36LL) )
          v70 = v66 & 0xFFFF7FFF;
        else
          v70 = v66 | 0x8000;
        v71 = 100 * (unsigned __int16)_mm_extract_epi16(v43, 6);
        v72 = _mm_extract_epi16(v43, 7);
        v73 = 100 * v72;
        v114.m256i_i64[0] = __PAIR64__(v73, v71);
        v108 = v72;
        if ( v71 || v73 != 1000000 )
        {
          v42 = v70 | 8;
          LODWORD(v111) = v42;
          v114.m256i_i32[2] = DivFD6(0LL, v71);
          v114.m256i_i32[3] = DivFD6(0LL, (unsigned int)(100 * (10000 - v108)));
          v114.m256i_i32[4] = DivFD6(1000000LL, v73 - v71);
        }
        else
        {
          v42 = v70 & 0xFFFFFFF7;
          *(__int64 *)((char *)v114.m256i_i64 + 4) = 1000000LL;
          LODWORD(v111) = v42;
          v114.m256i_i32[0] = 0;
          *(__int64 *)((char *)&v114.m256i_i64[1] + 4) = 0LL;
        }
        if ( (_WORD)v126 )
        {
          v42 |= 0x10u;
          HIDWORD(v112) = RaisePower(1015000LL, (unsigned int)(__int16)v126, 2LL);
          LODWORD(v111) = v42;
        }
        if ( WORD1(v126) )
        {
          v42 |= 0x20u;
          LODWORD(v111) = v42;
          LODWORD(v113) = 3750 * SWORD1(v126);
        }
        if ( (v42 & 0x2000) != 0 )
        {
          LOWORD(v12) = v104;
        }
        else
        {
          v74 = (unsigned int)SWORD2(v126);
          DWORD1(v113) = 10000 * (v74 + 100);
          if ( WORD2(v126) )
          {
            v42 |= 0x40u;
            LODWORD(v111) = v42;
          }
          if ( HIWORD(v126) )
          {
            TintAngle((unsigned int)SHIWORD(v126), v74, (char *)&v113 + 8, (char *)&v113 + 12);
            v42 = v111 | 0x80;
            LODWORD(v111) = v111 | 0x80;
          }
          LOWORD(v12) = v104;
          v75 = v42;
          if ( (v104 & 4) != 0 && (v42 & 0x1001) == 0x1000 )
          {
            v42 |= 0x400u;
            LODWORD(v111) = v42;
            if ( (v104 & 1) != 0 )
            {
              v42 = v75 | 0xC00;
              LODWORD(v111) = v75 | 0xC00;
            }
          }
        }
        v76 = v126;
        v77 = v111;
        *(__m128i *)(v11 + 196) = v43;
        *(_OWORD *)(v11 + 220) = v77;
        v78 = v113;
        *(_QWORD *)(v11 + 212) = v76;
        *(_OWORD *)(v11 + 236) = v112;
        v79 = *(_OWORD *)v114.m256i_i8;
        *(_OWORD *)(v11 + 252) = v78;
        v80 = *(_OWORD *)&v114.m256i_u64[2];
        *(_OWORD *)(v11 + 268) = v79;
        v81 = v115;
        *(_OWORD *)(v11 + 284) = v80;
        v82 = v116;
        *(_OWORD *)(v11 + 300) = v81;
        v83 = v117;
        *(_OWORD *)(v11 + 316) = v82;
        v84 = v118;
        *(_OWORD *)(v11 + 332) = v83;
        v85 = v119;
        *(_OWORD *)(v11 + 348) = v84;
        v86 = v120;
        *(_OWORD *)(v11 + 364) = v85;
        v87 = v121;
        *(_OWORD *)(v11 + 380) = v86;
        v88 = v122;
        *(_OWORD *)(v11 + 396) = v87;
        v89 = v123;
        v90 = v124;
        *(_OWORD *)(v11 + 412) = v88;
        *(_OWORD *)(v11 + 428) = v89;
        *(_DWORD *)(v11 + 444) = v90;
LABEL_54:
        v44 = v42 & 0x3DB4BFFF;
        LODWORD(v111) = v44;
        if ( (v44 & 0x97FE) == 0 )
        {
          v44 |= 0x80000000;
          LODWORD(v111) = v44;
        }
        if ( (v44 & 0x84C0) == 0 || (v44 & 0x2000) != 0 )
        {
          v44 |= 0x40000000u;
          LODWORD(v111) = v44;
        }
        if ( (v15 & 0x20) != 0 || (v12 & 0x1000) != 0 )
        {
          v44 |= 0x80000u;
          LODWORD(v111) = v44;
        }
        if ( (v15 & 0x80u) == 0 )
        {
LABEL_61:
          if ( (v15 & 4) != 0 )
          {
            v44 |= 0x4000u;
            LODWORD(v111) = v44;
          }
          HIDWORD(v107) = 1000000;
          v127 = 0uLL;
          v128 = 0LL;
          LODWORD(v106) = 67372032;
          BYTE4(v106) = 3;
          if ( (v44 & 0x2000) != 0 )
          {
            v44 |= 0x40000u;
            LOBYTE(v106) = 1;
            LODWORD(v111) = v44;
            v45 = 0xFFFF;
            DWORD1(v107) = 0;
          }
          else
          {
            DWORD1(v107) = 4096;
            v45 = 4095;
          }
          DWORD2(v106) = v45;
          HIDWORD(v106) = v45;
          LODWORD(v107) = v45;
          switch ( HIBYTE(a6) )
          {
            case 1u:
              BYTE6(v106) = 0;
              goto LABEL_69;
            case 2u:
              goto LABEL_137;
            case 5u:
            case 6u:
              WORD1(v106) = 0;
              *(_QWORD *)&v107 = 255LL;
              BYTE1(v106) = 0;
              *((_QWORD *)&v106 + 1) = 0xFF000000FFLL;
              *(_QWORD *)&v127 = 0x100000000LL;
              DWORD2(v127) = 2;
              goto LABEL_69;
            case 0xFCu:
              if ( BYTE2(a6) )
              {
                v103 = BYTE2(a6);
                if ( BYTE2(a6) != 4 )
                  v103 = 0;
                BYTE6(v106) = v103;
              }
              LODWORD(v107) = 126975;
              *((_QWORD *)&v106 + 1) = 0x3EFFF0001EFFFLL;
              *(_QWORD *)&v127 = 0x7E00000001F0000LL;
              *((_QWORD *)&v127 + 1) = -134217728LL;
              v128 = -1LL;
              *(_WORD *)((char *)&v106 + 1) = 2308;
              BYTE3(v106) = 15;
              goto LABEL_69;
            case 0xFDu:
              *(_QWORD *)&v127 = 0x3E00000001F0000LL;
              LODWORD(v107) = 126975;
              *((_QWORD *)&v106 + 1) = 0x1EFFF0001EFFFLL;
              v128 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v127 + 1) = 0x7FFF7FFF7C000000LL;
              *(_WORD *)((char *)&v106 + 1) = 2308;
              BYTE3(v106) = 14;
              goto LABEL_69;
          }
          if ( HIBYTE(a6) != 254 )
          {
            if ( HIBYTE(a6) == 255 )
            {
              BYTE6(v106) = 4;
              LODWORD(v111) = v44 | 0x4000;
LABEL_137:
              *(_QWORD *)&v127 = 0x20000000100000LL;
              BYTE3(v106) = 6;
              *((_QWORD *)&v127 + 1) = 0x1000000400000LL;
              v128 = 0x4000000020000LL;
              *(_WORD *)((char *)&v106 + 1) = 1284;
              DWORD1(v107) = 0;
            }
LABEL_69:
            *(__m128i *)v109 = v43;
            v46 = DstOrderTable[BYTE6(v106)];
            *(_OWORD *)(v109 + 24) = v106;
            v47 = BYTE1(v46);
            v48 = HIBYTE(v46);
            DWORD2(v107) = v46;
            v49 = *((_DWORD *)&v127 + BYTE1(v46));
            v50 = *((_DWORD *)&v127 + (unsigned int)(v47 + 3));
            *(_OWORD *)(v109 + 40) = v107;
            *((_QWORD *)v109 + 2) = v126;
            *(_DWORD *)(v110 + v11 + 12) = v49;
            *(_DWORD *)(v110 + v11 + 8) = *((_DWORD *)&v127 + BYTE10(v107));
            *(_DWORD *)(v110 + v11 + 4) = *((_DWORD *)&v127 + v48);
            v51 = v111;
            *(_DWORD *)(v110 + v11 + 24) = v50;
            v52 = v112;
            *(_DWORD *)(v110 + v11 + 20) = *((_DWORD *)&v127 + (unsigned int)BYTE10(v107) + 3);
            *(_DWORD *)(v110 + v11 + 16) = *((_DWORD *)&v127 + (unsigned int)(v48 + 3));
            *(_OWORD *)(v109 + 56) = v51;
            v53 = v113;
            *(_OWORD *)(v109 + 72) = v52;
            v54 = *(_OWORD *)v114.m256i_i8;
            *(_OWORD *)(v109 + 88) = v53;
            v55 = *(_OWORD *)&v114.m256i_u64[2];
            *(_OWORD *)(v109 + 104) = v54;
            v56 = v115;
            *(_OWORD *)(v109 + 120) = v55;
            v57 = v116;
            *(_OWORD *)(v109 + 136) = v56;
            v58 = v117;
            *(_OWORD *)(v109 + 152) = v57;
            *(_OWORD *)(v109 + 168) = v58;
            v59 = v119;
            *(_OWORD *)(v109 + 184) = v118;
            v60 = v120;
            *(_OWORD *)(v109 + 200) = v59;
            v61 = v121;
            *(_OWORD *)(v109 + 216) = v60;
            v62 = v122;
            *(_OWORD *)(v109 + 232) = v61;
            v63 = v123;
            v64 = v124;
            *(_OWORD *)(v109 + 248) = v62;
            *(_OWORD *)(v109 + 264) = v63;
            *((_DWORD *)v109 + 70) = v64;
            *((_QWORD *)v109 + 36) = v11 + 32;
            *((_QWORD *)v109 + 37) = v11 + 808;
            *((_QWORD *)v109 + 38) = v11 + 832;
            return v11;
          }
          if ( (v12 & 0x100) == 0 )
          {
            *(_QWORD *)&v127 = 0x38000000070000LL;
            LODWORD(v107) = 20479;
            *((_QWORD *)&v106 + 1) = 0x4FFF00004FFFLL;
            BYTE3(v106) = 10;
            LODWORD(v111) = v44 & 0xFFFEFFFF;
            DWORD2(v127) = 29360128;
            *(_WORD *)((char *)&v106 + 1) = 1796;
            BYTE6(v106) = 4;
            goto LABEL_69;
          }
          v94 = v44 | 0x10000;
          LOBYTE(v105) = 0;
          LODWORD(v111) = v94;
          if ( *(_BYTE *)(v11 + 804) )
          {
            GenCMYMaskXlate(
              v11 + 548,
              v12 & 0x2000,
              *(unsigned __int8 *)(v11 + 448),
              *(unsigned __int8 *)(v11 + 449),
              *(unsigned __int8 *)(v11 + 450));
            *(_BYTE *)(v11 + 804) = 0;
          }
          if ( (v12 & 0x2000) != 0 )
          {
            LOWORD(v105) = -254;
          }
          else
          {
            v38 = 0;
            BYTE1(v105) = 0;
          }
          HIBYTE(v105) = -((v12 & 0x2000) != 0);
          BYTE2(v105) = HIBYTE(v105) ^ *(_BYTE *)(v11 + 452);
          if ( (v12 & 0x200) != 0 )
          {
            WORD3(v106) = -1280;
            *(_QWORD *)((char *)&v127 + 4) = 0xFF000000FF0000LL;
            LODWORD(v127) = 16711680;
LABEL_165:
            HIDWORD(v128) = v105;
            LODWORD(v128) = v105;
            HIDWORD(v127) = v105;
            goto LABEL_69;
          }
          v95 = 10;
          v96 = *(_BYTE *)(v11 + 453);
          v97 = 7;
          *(_WORD *)((char *)&v106 + 1) = 1796;
          DWORD2(v106) = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
          BYTE3(v106) = 10;
          HIDWORD(v106) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
          LODWORD(v107) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
          LODWORD(v127) = *(unsigned __int16 *)(v11 + 458);
          DWORD1(v127) = *(unsigned __int16 *)(v11 + 456);
          DWORD2(v127) = *(unsigned __int16 *)(v11 + 454);
          if ( v96 < 4u || v96 > 5u )
          {
            WORD1(v106) = 2310;
            v98 = -6;
            BYTE7(v106) = -6;
            v97 = 6;
            v95 = 9;
            if ( (v12 & 0x2000) == 0 )
            {
LABEL_157:
              v102 = *(_DWORD *)(v11 + 472);
              if ( v102 )
              {
                LODWORD(v111) = v94 | 0x20000;
                HIDWORD(v107) = v102;
                BYTE1(v106) = 0;
                BYTE2(v106) = v97 - 4;
                BYTE3(v106) = v95 - 4;
                switch ( v98 )
                {
                  case 0xF8u:
                    BYTE7(v106) = -11;
                    break;
                  case 0xF9u:
                    BYTE7(v106) = -10;
                    break;
                  case 0xFAu:
                    BYTE7(v106) = -9;
                    break;
                }
              }
              BYTE6(v106) = 0;
              goto LABEL_165;
            }
            v94 |= 0x2000000u;
            BYTE2(v105) = *(_BYTE *)(v11 + 803);
            v101 = *(_BYTE *)(v11 + 548);
          }
          else
          {
            if ( v96 == 4 )
            {
              v98 = -7;
            }
            else
            {
              v98 = -8;
              v38 |= 1u;
            }
            BYTE7(v106) = v98;
            v94 |= 0x400000u;
            LOBYTE(v105) = v38 & 3;
            v99 = (char *)*(&p8BPPXlate + (v38 & 3));
            v100 = 292LL;
            if ( v96 != 4 )
              v100 = 365LL;
            BYTE2(v105) = v99[v100];
            v101 = *v99;
          }
          HIBYTE(v105) = v101;
          LODWORD(v111) = v94;
          goto LABEL_157;
        }
        v44 |= 0x100000u;
        LODWORD(v111) = v44;
        if ( (v15 & 0x100) != 0 )
        {
          v44 |= 0x200000u;
        }
        else
        {
          if ( (v15 & 0x200) != 0 )
          {
            v44 |= 0x800000u;
            LODWORD(v111) = v44;
          }
          if ( (v15 & 0x400) == 0 )
            goto LABEL_61;
          v44 |= 0x1000000u;
        }
        LODWORD(v111) = v44;
        goto LABEL_61;
      }
    }
    *a7 = -2;
    EngReleaseSemaphore(*(HSEMAPHORE *)(v11 + 8));
  }
  else
  {
    *a7 = -12;
  }
  return 0LL;
}
