/*
 * XREFs of pDCIAdjClr @ 0x1C00141A0
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x1C00114C8 (HT_CreateStandardMonoPattern.c)
 *     HT_HalftoneBitmap @ 0x1C001358C (HT_HalftoneBitmap.c)
 *     HT_CreateHalftoneBrush @ 0x1C0244BD0 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     Log @ 0x1C0012490 (Log.c)
 *     RaisePower @ 0x1C00126AC (RaisePower.c)
 *     AdjustSrcDevGamma @ 0x1C00151F8 (AdjustSrcDevGamma.c)
 *     DivFD6 @ 0x1C0015444 (DivFD6.c)
 *     ComputeColorSpaceXForm @ 0x1C011AB08 (ComputeColorSpaceXForm.c)
 *     CompareMemory @ 0x1C0125C9C (CompareMemory.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GenCMYMaskXlate @ 0x1C0245E5C (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C024608C (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(__int64 a1, __m128i *a2, _QWORD *a3, unsigned int a4, __int16 a5, int a6, _DWORD *a7)
{
  __int64 v11; // rdi
  int v12; // r13d
  __int16 v13; // dx
  __int16 v14; // r8
  __int16 v15; // r14
  int v16; // ebx
  __int64 v17; // xmm0_8
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
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int8 v42; // cl
  char v43; // al
  unsigned int v44; // ebx
  __m128i v45; // xmm2
  int v46; // ebx
  int v47; // eax
  int v48; // eax
  unsigned __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // rdx
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
  char v67; // r15
  unsigned __int64 v68; // r15
  unsigned __int16 epi16; // ax
  unsigned int v70; // ebx
  unsigned int v71; // r12d
  int v72; // r13d
  int v73; // r15d
  int v74; // ecx
  unsigned int v75; // ecx
  __int64 v76; // xmm0_8
  __int128 v77; // xmm1
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
  __int64 v91; // r8
  __int64 v92; // r8
  unsigned int *v93; // r8
  unsigned int i; // ecx
  unsigned int v95; // eax
  int v96; // ebx
  char v97; // dl
  unsigned __int8 v98; // r9
  char v99; // r8
  char *v100; // rcx
  __int64 v101; // rax
  char v102; // al
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  char v106; // al
  __int16 v107; // [rsp+30h] [rbp-D0h]
  int v108; // [rsp+30h] [rbp-D0h]
  __int128 v109; // [rsp+38h] [rbp-C8h]
  __int128 v110; // [rsp+48h] [rbp-B8h]
  __int16 v111; // [rsp+58h] [rbp-A8h]
  char *v112; // [rsp+60h] [rbp-A0h]
  __int128 v113; // [rsp+70h] [rbp-90h] BYREF
  __int128 v114; // [rsp+80h] [rbp-80h]
  __int128 v115; // [rsp+90h] [rbp-70h] BYREF
  __m256i v116; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v117; // [rsp+C0h] [rbp-40h]
  __int128 v118; // [rsp+D0h] [rbp-30h]
  __int128 v119; // [rsp+E0h] [rbp-20h]
  __int128 v120; // [rsp+F0h] [rbp-10h]
  __int128 v121; // [rsp+100h] [rbp+0h] BYREF
  __int128 v122; // [rsp+110h] [rbp+10h]
  __int128 v123; // [rsp+120h] [rbp+20h]
  __int128 v124; // [rsp+130h] [rbp+30h]
  __int128 v125; // [rsp+140h] [rbp+40h]
  int v126; // [rsp+150h] [rbp+50h]
  __int128 v127; // [rsp+160h] [rbp+60h] BYREF
  __int64 v128; // [rsp+170h] [rbp+70h]
  __int128 v129; // [rsp+178h] [rbp+78h]
  __int64 v130; // [rsp+188h] [rbp+88h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    if ( (a5 & 0x200) != 0 && dwABPreMul )
    {
      dwABPreMul = 0;
      v93 = (unsigned int *)&unk_1C0310B84;
      for ( i = 1; i < 0x100; ++i )
      {
        v95 = (i - 16777217) / i;
        *v93++ = v95;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v112 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      *a3 = v112;
      if ( v112 )
      {
        v12 = *(_DWORD *)(v11 + 184);
        DWORD1(v109) = a6;
        v107 = v12;
        v13 = a5 | 8;
        if ( (v12 & 0x80u) == 0 )
          v13 = a5;
        if ( HIBYTE(a6) == 1 || (v14 = v13, HIBYTE(a6) == 0xFE) && (v14 = v13, (v12 & 0x300) == 0x300) )
          v14 = v13 | 0x41;
        v111 = v14 & 0x10;
        v15 = v14 & 0xFFEF;
        if ( (v14 & 8) == 0 )
          v15 = v14;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v16 = 24;
        v17 = a2[1].m128i_i64[0];
        v18 = _mm_cvtsi128_si32(*a2);
        v127 = (__int128)*a2;
        v128 = v17;
        if ( v18 != 24 || (v19 = BYTE2(v127), (WORD1(v127) & 0xFFFC) != 0) )
        {
          v127 = DefaultCA;
          v19 = BYTE2(DefaultCA);
          v128 = 0LL;
        }
        v20 = *(_QWORD *)(v11 + 212);
        v129 = *(_OWORD *)(v11 + 196);
        v21 = *(_OWORD *)(v11 + 220);
        WORD1(v127) = v19 & 3;
        v130 = v20;
        v22 = *(_OWORD *)(v11 + 236);
        v113 = v21;
        v23 = *(_OWORD *)(v11 + 252);
        v114 = v22;
        v24 = *(_OWORD *)(v11 + 268);
        v115 = v23;
        v25 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v116.m256i_i8 = v24;
        v26 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v116.m256i_u64[2] = v25;
        v27 = *(_OWORD *)(v11 + 316);
        v117 = v26;
        v28 = *(_OWORD *)(v11 + 332);
        v118 = v27;
        v29 = *(_OWORD *)(v11 + 348);
        v119 = v28;
        v30 = *(_OWORD *)(v11 + 364);
        v120 = v29;
        v31 = *(_OWORD *)(v11 + 380);
        v121 = v30;
        v32 = *(_OWORD *)(v11 + 396);
        v122 = v31;
        v33 = *(_OWORD *)(v11 + 412);
        v123 = v32;
        v34 = *(_OWORD *)(v11 + 428);
        v35 = *(_DWORD *)(v11 + 444);
        v124 = v33;
        v125 = v34;
        v126 = v35;
        if ( WORD2(v127) > 8u )
          WORD2(v127) = 0;
        if ( WORD3(v127) < 0x540u )
        {
          WORD3(v127) = 1344;
        }
        else if ( WORD3(v127) > 0xFDE8u )
        {
          WORD3(v127) = -536;
        }
        if ( WORD4(v127) < 0x540u )
        {
          WORD4(v127) = 1344;
        }
        else if ( WORD4(v127) > 0xFDE8u )
        {
          WORD4(v127) = -536;
        }
        if ( WORD5(v127) < 0x540u )
        {
          WORD5(v127) = 1344;
        }
        else if ( WORD5(v127) > 0xFDE8u )
        {
          WORD5(v127) = -536;
        }
        if ( WORD6(v127) > 0xFA0u )
          WORD6(v127) = 4000;
        if ( HIWORD(v127) < 0x1770u )
        {
          HIWORD(v127) = 6000;
        }
        else if ( HIWORD(v127) > 0x2710u )
        {
          HIWORD(v127) = 10000;
        }
        v36 = 100;
        if ( (__int16)v128 < -100 )
        {
          LOWORD(v128) = -100;
        }
        else if ( (__int16)v128 > 100 )
        {
          LOWORD(v128) = 100;
        }
        if ( SWORD1(v128) < -100 )
        {
          WORD1(v128) = -100;
        }
        else if ( SWORD1(v128) > 100 )
        {
          WORD1(v128) = 100;
        }
        v37 = WORD2(v128);
        if ( SWORD2(v128) < -100 )
        {
          v37 = -100;
          WORD2(v128) = -100;
        }
        else if ( SWORD2(v128) > 100 )
        {
          v37 = 100;
          WORD2(v128) = 100;
        }
        if ( SHIWORD(v128) < -100 )
        {
          HIWORD(v128) = -100;
        }
        else if ( SHIWORD(v128) > 100 )
        {
          HIWORD(v128) = 100;
        }
        if ( (v15 & 1) != 0 || v37 == -100 )
          HIDWORD(v128) = 65436;
        v38 = 2;
        if ( (v15 & 2) != 0 )
          WORD1(v127) = v19 & 2 | 1;
        LOBYTE(v36) = HIBYTE(a6);
        LOWORD(v127) = v15 & 0x8059;
        v39 = AdjustSrcDevGamma(v11, (unsigned int)&v113, (unsigned int)&v127, v36, v15);
        v41 = 1024LL;
        if ( !v39 )
        {
          v40 = 0LL;
          while ( 1 )
          {
            v42 = *((_BYTE *)&v127 + v40);
            --v16;
            v43 = *((_BYTE *)&v129 + v40++);
            if ( v42 != v43 )
              break;
            if ( !v16 )
            {
              v44 = v113;
              v45 = (__m128i)v127;
              goto LABEL_54;
            }
          }
        }
        v66 = v113 & 0x1007;
        LODWORD(v113) = v66;
        if ( (v15 & 0x40) != 0 )
        {
          v66 |= 0x2000u;
          LODWORD(v113) = v66;
        }
        v45 = (__m128i)v127;
        v67 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v127, 2));
        if ( (v67 & 2) != 0 )
        {
          if ( !LogFilterMax )
            LogFilterMax = Log(8000000);
          v66 |= 0x100u;
          LODWORD(v113) = v66;
        }
        if ( (v67 & 1) != 0 )
        {
          v66 |= 0x200u;
          LODWORD(v113) = v66;
        }
        v68 = (-(__int64)((v66 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + v11 + 72;
        if ( (((unsigned __int16)_mm_cvtsi128_si32(v45) ^ (unsigned __int16)v129) & 0x8008) != 0 )
        {
          ComputeColorSpaceXForm(
            v11,
            (-(__int64)((v66 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + v11 + 72,
            (char *)&v121 + 4,
            0xFFFFFFFFLL);
          v45 = (__m128i)v127;
          v66 = v113;
        }
        epi16 = _mm_extract_epi16(v45, 2);
        if ( epi16 != WORD2(v129) )
        {
          ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v116.m256i_u64[2] + 4, epi16);
          v45 = (__m128i)v127;
          v66 = v113;
        }
        if ( (v66 & 0x2000) != 0 || (unsigned int)CompareMemory(v68, v11 + 36, 36LL) )
          v70 = v66 & 0xFFFF7FFF;
        else
          v70 = v66 | 0x8000;
        v71 = 100 * (unsigned __int16)_mm_extract_epi16(v45, 6);
        v72 = (unsigned __int16)_mm_extract_epi16(v45, 7);
        v73 = 100 * v72;
        v116.m256i_i32[0] = v71;
        v116.m256i_i32[1] = 100 * v72;
        if ( v71 || v73 != 1000000 )
        {
          v44 = v70 | 8;
          LODWORD(v113) = v44;
          v116.m256i_i32[2] = DivFD6(0LL, v71, v41);
          v116.m256i_i32[3] = DivFD6(0LL, (unsigned int)(100 * (10000 - v72)), v91);
          v116.m256i_i32[4] = DivFD6(1000000LL, v73 - v71, v92);
        }
        else
        {
          v44 = v70 & 0xFFFFFFF7;
          *(__int64 *)((char *)v116.m256i_i64 + 4) = 1000000LL;
          LODWORD(v113) = v44;
          v116.m256i_i32[0] = 0;
          *(__int64 *)((char *)&v116.m256i_i64[1] + 4) = 0LL;
        }
        if ( (_WORD)v128 )
        {
          v44 |= 0x10u;
          HIDWORD(v114) = RaisePower(1015000, (__int16)v128, 2);
          LODWORD(v113) = v44;
        }
        if ( WORD1(v128) )
        {
          v44 |= 0x20u;
          LODWORD(v113) = v44;
          LODWORD(v115) = 3750 * SWORD1(v128);
        }
        if ( (v44 & 0x2000) != 0 )
        {
          LOWORD(v12) = v107;
        }
        else
        {
          v74 = 10000 * SWORD2(v128);
          DWORD1(v115) = v74 + 1000000;
          if ( v74 )
          {
            v44 |= 0x40u;
            LODWORD(v113) = v44;
          }
          if ( HIWORD(v128) )
          {
            TintAngle((unsigned int)SHIWORD(v128), v40, (char *)&v115 + 8, (char *)&v115 + 12);
            v44 = v113 | 0x80;
            LODWORD(v113) = v113 | 0x80;
          }
          LOWORD(v12) = v107;
          v75 = v44;
          if ( (v107 & 4) != 0 && (v44 & 0x1001) == 0x1000 )
          {
            v44 |= 0x400u;
            LODWORD(v113) = v44;
            if ( (v107 & 1) != 0 )
            {
              v44 = v75 | 0xC00;
              LODWORD(v113) = v75 | 0xC00;
            }
          }
        }
        v76 = v128;
        v77 = v114;
        *(__m128i *)(v11 + 196) = v45;
        *(_QWORD *)(v11 + 212) = v76;
        *(_OWORD *)(v11 + 220) = v113;
        v78 = v115;
        *(_OWORD *)(v11 + 236) = v77;
        v79 = *(_OWORD *)v116.m256i_i8;
        *(_OWORD *)(v11 + 252) = v78;
        v80 = *(_OWORD *)&v116.m256i_u64[2];
        *(_OWORD *)(v11 + 268) = v79;
        v81 = v117;
        *(_OWORD *)(v11 + 284) = v80;
        v82 = v118;
        *(_OWORD *)(v11 + 300) = v81;
        v83 = v119;
        *(_OWORD *)(v11 + 316) = v82;
        v84 = v120;
        *(_OWORD *)(v11 + 332) = v83;
        v85 = v121;
        *(_OWORD *)(v11 + 348) = v84;
        v86 = v122;
        *(_OWORD *)(v11 + 364) = v85;
        v87 = v123;
        *(_OWORD *)(v11 + 380) = v86;
        v88 = v124;
        *(_OWORD *)(v11 + 396) = v87;
        v89 = v125;
        v90 = v126;
        *(_OWORD *)(v11 + 412) = v88;
        *(_OWORD *)(v11 + 428) = v89;
        *(_DWORD *)(v11 + 444) = v90;
LABEL_54:
        v46 = v44 & 0x3DB4BFFF;
        LODWORD(v113) = v46;
        if ( (v46 & 0x97FE) == 0 )
        {
          v46 |= 0x80000000;
          LODWORD(v113) = v46;
        }
        if ( (v46 & 0x84C0) == 0 || (v46 & 0x2000) != 0 )
        {
          v46 |= 0x40000000u;
          LODWORD(v113) = v46;
        }
        if ( (v15 & 0x20) != 0 || (v12 & 0x1000) != 0 )
        {
          v46 |= 0x80000u;
          LODWORD(v113) = v46;
        }
        v47 = v46;
        if ( (v15 & 0x80u) == 0 )
        {
LABEL_61:
          if ( (v15 & 4) != 0 )
          {
            v46 |= 0x4000u;
            LODWORD(v113) = v46;
          }
          HIDWORD(v110) = 1000000;
          v129 = 0uLL;
          v130 = 0LL;
          LODWORD(v109) = 67372032;
          BYTE4(v109) = 3;
          if ( (v46 & 0x2000) != 0 )
          {
            v46 |= 0x40000u;
            LOBYTE(v109) = 1;
            LODWORD(v113) = v46;
            v48 = 0xFFFF;
            DWORD1(v110) = 0;
          }
          else
          {
            DWORD1(v110) = 4096;
            v48 = 4095;
          }
          DWORD2(v109) = v48;
          HIDWORD(v109) = v48;
          LODWORD(v110) = v48;
          switch ( HIBYTE(a6) )
          {
            case 1u:
              BYTE6(v109) = 0;
              goto LABEL_69;
            case 2u:
LABEL_139:
              LODWORD(v129) = 0x100000;
              BYTE3(v109) = 6;
              *(_QWORD *)((char *)&v129 + 4) = 0x40000000200000LL;
              HIDWORD(v129) = 0x10000;
              v130 = 0x4000000020000LL;
              *(_WORD *)((char *)&v109 + 1) = 1284;
              DWORD1(v110) = 0;
              goto LABEL_69;
            case 5u:
            case 6u:
              WORD1(v109) = 0;
              *(_QWORD *)&v110 = 255LL;
              BYTE1(v109) = 0;
              *((_QWORD *)&v109 + 1) = 0xFF000000FFLL;
              *(_QWORD *)&v129 = 0x100000000LL;
              DWORD2(v129) = 2;
              goto LABEL_69;
            case 0xFCu:
              if ( BYTE2(a6) )
              {
                v106 = BYTE2(a6);
                if ( BYTE2(a6) != 4 )
                  v106 = 0;
                BYTE6(v109) = v106;
              }
              LODWORD(v110) = 126975;
              *((_QWORD *)&v109 + 1) = 0x3EFFF0001EFFFLL;
              v130 = -1LL;
              *(_QWORD *)&v129 = 0x7E00000001F0000LL;
              *((_QWORD *)&v129 + 1) = -134217728LL;
              *(_WORD *)((char *)&v109 + 1) = 2308;
              BYTE3(v109) = 15;
              goto LABEL_69;
            case 0xFDu:
              *(_QWORD *)&v129 = 0x3E00000001F0000LL;
              LODWORD(v110) = 126975;
              *((_QWORD *)&v109 + 1) = 0x1EFFF0001EFFFLL;
              v130 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v129 + 1) = 0x7FFF7FFF7C000000LL;
              *(_WORD *)((char *)&v109 + 1) = 2308;
              BYTE3(v109) = 14;
              goto LABEL_69;
          }
          if ( HIBYTE(a6) != 254 )
          {
            if ( HIBYTE(a6) == 255 )
            {
              BYTE6(v109) = 4;
              LODWORD(v113) = v46 | 0x4000;
              goto LABEL_139;
            }
LABEL_69:
            *(__m128i *)v112 = v45;
            v49 = (unsigned int)DstOrderTable[BYTE6(v109)];
            *(_OWORD *)(v112 + 24) = v109;
            DWORD2(v110) = v49;
            v50 = BYTE1(v49);
            *((_QWORD *)v112 + 2) = v128;
            *(_OWORD *)(v112 + 40) = v110;
            *(_DWORD *)((-(__int64)(v111 != 0) & 0xC1C) + v11 + 868) = *((_DWORD *)&v129 + BYTE1(v49));
            v51 = BYTE2(v49);
            v49 >>= 24;
            *(_DWORD *)((-(__int64)(v111 != 0) & 0xC1C) + v11 + 864) = *((_DWORD *)&v129 + v51);
            *(_DWORD *)((-(__int64)(v111 != 0) & 0xC1C) + v11 + 860) = *((_DWORD *)&v129 + v49);
            *(_DWORD *)((-(__int64)(v111 != 0) & 0xC1C) + v11 + 880) = *((_DWORD *)&v129 + v50 + 3);
            *(_DWORD *)((-(__int64)(v111 != 0) & 0xC1C) + v11 + 876) = *((_DWORD *)&v129 + v51 + 3);
            *(_DWORD *)((-(__int64)(v111 != 0) & 0xC1C) + v11 + 872) = *((_DWORD *)&v129 + v49 + 3);
            v52 = v114;
            *(_OWORD *)(v112 + 56) = v113;
            v53 = v115;
            *(_OWORD *)(v112 + 72) = v52;
            v54 = *(_OWORD *)v116.m256i_i8;
            *(_OWORD *)(v112 + 88) = v53;
            v55 = *(_OWORD *)&v116.m256i_u64[2];
            *(_OWORD *)(v112 + 104) = v54;
            v56 = v117;
            *(_OWORD *)(v112 + 120) = v55;
            v57 = v118;
            *(_OWORD *)(v112 + 136) = v56;
            v58 = v119;
            *(_OWORD *)(v112 + 152) = v57;
            *(_OWORD *)(v112 + 168) = v58;
            v59 = v121;
            *(_OWORD *)(v112 + 184) = v120;
            v60 = v122;
            *(_OWORD *)(v112 + 200) = v59;
            v61 = v123;
            *(_OWORD *)(v112 + 216) = v60;
            v62 = v124;
            *(_OWORD *)(v112 + 232) = v61;
            v63 = v125;
            v64 = v126;
            *(_OWORD *)(v112 + 248) = v62;
            *(_OWORD *)(v112 + 264) = v63;
            *((_DWORD *)v112 + 70) = v64;
            *((_QWORD *)v112 + 36) = v11 + 32;
            *((_QWORD *)v112 + 37) = v11 + 808;
            *((_QWORD *)v112 + 38) = v11 + 832;
            return v11;
          }
          if ( (v12 & 0x100) == 0 )
          {
            *(_QWORD *)&v129 = 0x38000000070000LL;
            LODWORD(v110) = 20479;
            *((_QWORD *)&v109 + 1) = 0x4FFF00004FFFLL;
            BYTE3(v109) = 10;
            LODWORD(v113) = v46 & 0xFFFEFFFF;
            DWORD2(v129) = 29360128;
            *(_WORD *)((char *)&v109 + 1) = 1796;
            BYTE6(v109) = 4;
            goto LABEL_69;
          }
          v96 = v46 | 0x10000;
          LOBYTE(v108) = 0;
          LODWORD(v113) = v96;
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
            LOWORD(v108) = -254;
          }
          else
          {
            v38 = 0;
            BYTE1(v108) = 0;
          }
          HIBYTE(v108) = -((v12 & 0x2000) != 0);
          BYTE2(v108) = HIBYTE(v108) ^ *(_BYTE *)(v11 + 452);
          if ( (v12 & 0x200) != 0 )
          {
            WORD3(v109) = -1280;
            *(_QWORD *)((char *)&v129 + 4) = 0xFF000000FF0000LL;
            LODWORD(v129) = 16711680;
LABEL_167:
            HIDWORD(v130) = v108;
            LODWORD(v130) = v108;
            HIDWORD(v129) = v108;
            goto LABEL_69;
          }
          v97 = 10;
          v98 = *(_BYTE *)(v11 + 453);
          v99 = 7;
          *(_WORD *)((char *)&v109 + 1) = 1796;
          DWORD2(v109) = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
          BYTE3(v109) = 10;
          HIDWORD(v109) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
          LODWORD(v110) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
          LODWORD(v129) = *(unsigned __int16 *)(v11 + 458);
          DWORD1(v129) = *(unsigned __int16 *)(v11 + 456);
          DWORD2(v129) = *(unsigned __int16 *)(v11 + 454);
          if ( v98 < 4u || v98 > 5u )
          {
            WORD1(v109) = 2310;
            v103 = 250;
            BYTE7(v109) = -6;
            v99 = 6;
            v97 = 9;
            if ( (v12 & 0x2000) == 0 )
            {
LABEL_159:
              if ( *(_DWORD *)(v11 + 472) )
              {
                HIDWORD(v110) = *(_DWORD *)(v11 + 472);
                LODWORD(v113) = v96 | 0x20000;
                BYTE1(v109) = 0;
                BYTE2(v109) = v99 - 4;
                BYTE3(v109) = v97 - 4;
                v104 = v103 - 248;
                if ( v104 )
                {
                  v105 = v104 - 1;
                  if ( v105 )
                  {
                    if ( v105 == 1 )
                      BYTE7(v109) = -9;
                  }
                  else
                  {
                    BYTE7(v109) = -10;
                  }
                }
                else
                {
                  BYTE7(v109) = -11;
                }
              }
              BYTE6(v109) = 0;
              goto LABEL_167;
            }
            v96 |= 0x2000000u;
            BYTE2(v108) = *(_BYTE *)(v11 + 803);
            v102 = *(_BYTE *)(v11 + 548);
          }
          else
          {
            if ( v98 == 4 )
            {
              BYTE7(v109) = -7;
            }
            else
            {
              BYTE7(v109) = -8;
              v38 |= 1u;
            }
            v96 |= 0x400000u;
            LOBYTE(v108) = v38 & 3;
            v100 = (char *)*(&p8BPPXlate + (v38 & 3));
            v101 = 292LL;
            if ( v98 != 4 )
              v101 = 365LL;
            BYTE2(v108) = v100[v101];
            v102 = *v100;
            v103 = 249 - (v98 != 4);
          }
          HIBYTE(v108) = v102;
          LODWORD(v113) = v96;
          goto LABEL_159;
        }
        v46 |= 0x100000u;
        LODWORD(v113) = v46;
        if ( (v15 & 0x100) != 0 )
        {
          v46 = v47 | 0x300000;
        }
        else
        {
          if ( (v15 & 0x200) != 0 )
          {
            v46 = v47 | 0x900000;
            LODWORD(v113) = v47 | 0x900000;
          }
          if ( (v15 & 0x400) == 0 )
            goto LABEL_61;
          v46 |= 0x1000000u;
        }
        LODWORD(v113) = v46;
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
