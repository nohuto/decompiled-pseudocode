/*
 * XREFs of pDCIAdjClr @ 0x1C00390BC
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C0036ED8 (HT_HalftoneBitmap.c)
 *     HT_CreateStandardMonoPattern @ 0x1C003A4B0 (HT_CreateStandardMonoPattern.c)
 *     HT_CreateHalftoneBrush @ 0x1C025DA70 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     AdjustSrcDevGamma @ 0x1C0039A5C (AdjustSrcDevGamma.c)
 *     DivFD6 @ 0x1C0039CA8 (DivFD6.c)
 *     RaisePower @ 0x1C0039EF4 (RaisePower.c)
 *     Log @ 0x1C003A14C (Log.c)
 *     ComputeColorSpaceXForm @ 0x1C003ACF4 (ComputeColorSpaceXForm.c)
 *     CompareMemory @ 0x1C003C964 (CompareMemory.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     GenCMYMaskXlate @ 0x1C025ECA0 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C025EED0 (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(__int64 a1, __m128i *a2, char **a3, unsigned int a4, __int16 a5, int a6, _DWORD *a7)
{
  __int64 v11; // rdi
  char *v12; // rax
  char *v13; // r13
  int v14; // r12d
  __int16 v15; // r8
  __int16 v16; // dx
  __int16 v17; // r14
  __m128i v18; // xmm1
  __int64 v19; // xmm0_8
  int v20; // ebx
  __int8 v21; // r8d^2
  __int64 v22; // xmm1_8
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
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // ecx
  int v38; // r9d
  __int16 v39; // cx
  char v40; // si
  int v41; // eax
  __int64 v42; // rdx
  __m128i v43; // xmm2
  __int8 v44; // cl
  char v45; // al
  unsigned int v46; // ebx
  int v47; // ebx
  int v48; // eax
  int v49; // eax
  __int16 v50; // r11
  __int64 v51; // rax
  __int16 v52; // cx
  __int128 v53; // xmm0
  unsigned int v54; // r10d
  unsigned int v55; // r9d
  __int64 v56; // r8
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  int v69; // ebx
  char v70; // r12
  unsigned __int64 v71; // r12
  unsigned __int16 epi16; // ax
  unsigned int v73; // ebx
  unsigned int v74; // r13d
  unsigned __int16 v75; // ax
  int v76; // r12d
  int v77; // ecx
  unsigned int v78; // ecx
  __int64 v79; // xmm0_8
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  int v93; // eax
  unsigned int *v94; // r8
  unsigned int i; // ecx
  unsigned int v96; // eax
  int v97; // ebx
  char v98; // r8
  unsigned __int8 v99; // r9
  char v100; // dl
  int v101; // eax
  char *v102; // rcx
  __int64 v103; // rax
  char v104; // al
  int v105; // ecx
  int v106; // ecx
  int v107; // ecx
  char v108; // al
  __int16 v109; // [rsp+30h] [rbp-D0h]
  int v110; // [rsp+30h] [rbp-D0h]
  _OWORD v111[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v112; // [rsp+58h] [rbp-A8h]
  int v113; // [rsp+5Ch] [rbp-A4h]
  char *v114; // [rsp+60h] [rbp-A0h]
  __int128 v115; // [rsp+70h] [rbp-90h] BYREF
  __int128 v116; // [rsp+80h] [rbp-80h]
  __int128 v117; // [rsp+90h] [rbp-70h] BYREF
  __m256i v118; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v119; // [rsp+C0h] [rbp-40h]
  __int128 v120; // [rsp+D0h] [rbp-30h]
  __int128 v121; // [rsp+E0h] [rbp-20h]
  __int128 v122; // [rsp+F0h] [rbp-10h]
  __int128 v123; // [rsp+100h] [rbp+0h] BYREF
  __int128 v124; // [rsp+110h] [rbp+10h]
  __int128 v125; // [rsp+120h] [rbp+20h]
  __int128 v126; // [rsp+130h] [rbp+30h]
  __int128 v127; // [rsp+140h] [rbp+40h]
  int v128; // [rsp+150h] [rbp+50h]
  __int128 v129; // [rsp+160h] [rbp+60h] BYREF
  __int64 v130; // [rsp+170h] [rbp+70h]
  __int128 v131; // [rsp+178h] [rbp+78h]
  __int64 v132; // [rsp+188h] [rbp+88h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    memset(v111, 0, sizeof(v111));
    if ( (a5 & 0x200) != 0 && dwABPreMul )
    {
      dwABPreMul = 0;
      v94 = (unsigned int *)&unk_1C0325BB4;
      for ( i = 1; i < 0x100; ++i )
      {
        v96 = (i - 16777217) / i;
        *v94++ = v96;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v12 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      v114 = v12;
      *a3 = v12;
      v13 = v12;
      if ( v12 )
      {
        v14 = *(_DWORD *)(v11 + 184);
        DWORD1(v111[0]) = a6;
        v15 = a5 | 8;
        v109 = v14;
        if ( (v14 & 0x80u) == 0 )
          v15 = a5;
        if ( HIBYTE(a6) == 1 || (v16 = v15, HIBYTE(a6) == 0xFE) && (v16 = v15, (v14 & 0x300) == 0x300) )
          v16 = v15 | 0x41;
        v112 = v16 & 0x10;
        v17 = v16 & 0xFFEF;
        if ( (v16 & 8) == 0 )
          v17 = v16;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v18 = *a2;
        v19 = a2[1].m128i_i64[0];
        v20 = 24;
        v129 = (__int128)v18;
        v130 = v19;
        if ( (unsigned __int16)_mm_cvtsi128_si32(v18) != 24 || (v21 = BYTE2(v129), (WORD1(v129) & 0xFFFC) != 0) )
        {
          v129 = DefaultCA;
          v21 = BYTE2(DefaultCA);
          v130 = 0LL;
        }
        v22 = *(_QWORD *)(v11 + 212);
        v131 = *(_OWORD *)(v11 + 196);
        v23 = *(_OWORD *)(v11 + 220);
        v132 = v22;
        v24 = *(_OWORD *)(v11 + 236);
        WORD1(v129) = v21 & 3;
        v115 = v23;
        v25 = *(_OWORD *)(v11 + 252);
        v116 = v24;
        v26 = *(_OWORD *)(v11 + 268);
        v117 = v25;
        v27 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v118.m256i_i8 = v26;
        v28 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v118.m256i_u64[2] = v27;
        v29 = *(_OWORD *)(v11 + 316);
        v119 = v28;
        v30 = *(_OWORD *)(v11 + 332);
        v120 = v29;
        v31 = *(_OWORD *)(v11 + 348);
        v121 = v30;
        v32 = *(_OWORD *)(v11 + 364);
        v122 = v31;
        v33 = *(_OWORD *)(v11 + 380);
        v123 = v32;
        v34 = *(_OWORD *)(v11 + 396);
        v124 = v33;
        v35 = *(_OWORD *)(v11 + 412);
        v125 = v34;
        v36 = *(_OWORD *)(v11 + 428);
        v37 = *(_DWORD *)(v11 + 444);
        v126 = v35;
        v127 = v36;
        v128 = v37;
        if ( WORD2(v129) > 8u )
          WORD2(v129) = 0;
        if ( WORD3(v129) < 0x540u )
        {
          WORD3(v129) = 1344;
        }
        else if ( WORD3(v129) > 0xFDE8u )
        {
          WORD3(v129) = -536;
        }
        if ( WORD4(v129) < 0x540u )
        {
          WORD4(v129) = 1344;
        }
        else if ( WORD4(v129) > 0xFDE8u )
        {
          WORD4(v129) = -536;
        }
        if ( WORD5(v129) < 0x540u )
        {
          WORD5(v129) = 1344;
        }
        else if ( WORD5(v129) > 0xFDE8u )
        {
          WORD5(v129) = -536;
        }
        if ( WORD6(v129) > 0xFA0u )
          WORD6(v129) = 4000;
        if ( HIWORD(v129) < 0x1770u )
        {
          HIWORD(v129) = 6000;
        }
        else if ( HIWORD(v129) > 0x2710u )
        {
          HIWORD(v129) = 10000;
        }
        v38 = 100;
        if ( (__int16)v130 < -100 )
        {
          LOWORD(v130) = -100;
        }
        else if ( (__int16)v130 > 100 )
        {
          LOWORD(v130) = 100;
        }
        if ( SWORD1(v130) < -100 )
        {
          WORD1(v130) = -100;
        }
        else if ( SWORD1(v130) > 100 )
        {
          WORD1(v130) = 100;
        }
        v39 = WORD2(v130);
        if ( SWORD2(v130) < -100 )
        {
          v39 = -100;
          WORD2(v130) = -100;
        }
        else if ( SWORD2(v130) > 100 )
        {
          v39 = 100;
          WORD2(v130) = 100;
        }
        if ( SHIWORD(v130) < -100 )
        {
          HIWORD(v130) = -100;
        }
        else if ( SHIWORD(v130) > 100 )
        {
          HIWORD(v130) = 100;
        }
        if ( (v17 & 1) != 0 || v39 == -100 )
          HIDWORD(v130) = 65436;
        v40 = 2;
        if ( (v17 & 2) != 0 )
          WORD1(v129) = v21 & 2 | 1;
        LOBYTE(v38) = HIBYTE(a6);
        LOWORD(v129) = v17 & 0x8059;
        v41 = AdjustSrcDevGamma(v11, (unsigned int)&v115, (unsigned int)&v129, v38, v17);
        v43 = (__m128i)v129;
        if ( !v41 )
        {
          v42 = 0LL;
          while ( 1 )
          {
            v44 = *((_BYTE *)&v129 + v42);
            --v20;
            v45 = *((_BYTE *)&v131 + v42++);
            if ( v44 != v45 )
              break;
            if ( !v20 )
            {
              v46 = v115;
              goto LABEL_54;
            }
          }
        }
        v69 = v115 & 0x1007;
        LODWORD(v115) = v69;
        if ( (v17 & 0x40) != 0 )
        {
          v69 |= 0x2000u;
          LODWORD(v115) = v69;
        }
        v70 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v129, 2));
        if ( (v70 & 2) != 0 )
        {
          if ( !LogFilterMax )
            LogFilterMax = Log(8000000LL);
          v69 |= 0x100u;
          LODWORD(v115) = v69;
        }
        if ( (v70 & 1) != 0 )
        {
          v69 |= 0x200u;
          LODWORD(v115) = v69;
        }
        v71 = (-(__int64)((v69 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + v11 + 72;
        if ( (((unsigned __int16)_mm_cvtsi128_si32(v43) ^ (unsigned __int16)v131) & 0x8008) != 0 )
        {
          ComputeColorSpaceXForm(
            v11,
            (-(__int64)((v69 & 1) != 0) & 0xFFFFFFFFFFFFFFDCuLL) + v11 + 72,
            (char *)&v123 + 4,
            0xFFFFFFFFLL);
          v69 = v115;
        }
        epi16 = _mm_extract_epi16(v43, 2);
        if ( epi16 != WORD2(v131) )
        {
          ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v118.m256i_u64[2] + 4, epi16);
          v69 = v115;
        }
        if ( (v69 & 0x2000) != 0 || (unsigned int)CompareMemory(v71, v11 + 36, 36LL) )
          v73 = v69 & 0xFFFF7FFF;
        else
          v73 = v69 | 0x8000;
        v74 = 100 * (unsigned __int16)_mm_extract_epi16(v43, 6);
        v75 = _mm_extract_epi16(v43, 7);
        v76 = 100 * v75;
        v118.m256i_i64[0] = __PAIR64__(v76, v74);
        v113 = v75;
        if ( v74 || v76 != 1000000 )
        {
          v46 = v73 | 8;
          LODWORD(v115) = v46;
          v118.m256i_i32[2] = DivFD6(0LL, v74);
          v118.m256i_i32[3] = DivFD6(0LL, (unsigned int)(100 * (10000 - v113)));
          v118.m256i_i32[4] = DivFD6(1000000LL, v76 - v74);
        }
        else
        {
          v46 = v73 & 0xFFFFFFF7;
          v118.m256i_i32[0] = 0;
          *(__int64 *)((char *)&v118.m256i_i64[1] + 4) = 0LL;
          LODWORD(v115) = v46;
          *(__int64 *)((char *)v118.m256i_i64 + 4) = 1000000LL;
        }
        if ( (_WORD)v130 )
        {
          v46 |= 0x10u;
          HIDWORD(v116) = RaisePower(1015000LL, (unsigned int)(__int16)v130, 2LL);
          LODWORD(v115) = v46;
        }
        if ( WORD1(v130) )
        {
          v46 |= 0x20u;
          LODWORD(v115) = v46;
          LODWORD(v117) = 3750 * SWORD1(v130);
        }
        if ( (v46 & 0x2000) != 0 )
        {
          LOWORD(v14) = v109;
        }
        else
        {
          v77 = 10000 * SWORD2(v130);
          DWORD1(v117) = v77 + 1000000;
          if ( v77 )
          {
            v46 |= 0x40u;
            LODWORD(v115) = v46;
          }
          if ( HIWORD(v130) )
          {
            TintAngle((unsigned int)SHIWORD(v130), v42, (char *)&v117 + 8, (char *)&v117 + 12);
            v46 = v115 | 0x80;
            LODWORD(v115) = v115 | 0x80;
          }
          LOWORD(v14) = v109;
          v78 = v46;
          if ( (v109 & 4) != 0 && (v46 & 0x1001) == 0x1000 )
          {
            v46 |= 0x400u;
            LODWORD(v115) = v46;
            if ( (v109 & 1) != 0 )
            {
              v46 = v78 | 0xC00;
              LODWORD(v115) = v78 | 0xC00;
            }
          }
        }
        v79 = v130;
        v80 = v116;
        v13 = v114;
        *(__m128i *)(v11 + 196) = v43;
        *(_QWORD *)(v11 + 212) = v79;
        *(_OWORD *)(v11 + 220) = v115;
        v81 = v117;
        *(_OWORD *)(v11 + 236) = v80;
        v82 = *(_OWORD *)v118.m256i_i8;
        *(_OWORD *)(v11 + 252) = v81;
        v83 = *(_OWORD *)&v118.m256i_u64[2];
        *(_OWORD *)(v11 + 268) = v82;
        v84 = v119;
        *(_OWORD *)(v11 + 284) = v83;
        v85 = v120;
        *(_OWORD *)(v11 + 300) = v84;
        v86 = v121;
        *(_OWORD *)(v11 + 316) = v85;
        v87 = v122;
        *(_OWORD *)(v11 + 332) = v86;
        v88 = v123;
        *(_OWORD *)(v11 + 348) = v87;
        v89 = v124;
        *(_OWORD *)(v11 + 364) = v88;
        v90 = v125;
        *(_OWORD *)(v11 + 380) = v89;
        v91 = v126;
        *(_OWORD *)(v11 + 396) = v90;
        v92 = v127;
        v93 = v128;
        *(_OWORD *)(v11 + 412) = v91;
        *(_OWORD *)(v11 + 428) = v92;
        *(_DWORD *)(v11 + 444) = v93;
LABEL_54:
        v47 = v46 & 0x3DB4BFFF;
        LODWORD(v115) = v47;
        if ( (v47 & 0x97FE) == 0 )
        {
          v47 |= 0x80000000;
          LODWORD(v115) = v47;
        }
        if ( (v47 & 0x84C0) == 0 || (v47 & 0x2000) != 0 )
        {
          v47 |= 0x40000000u;
          LODWORD(v115) = v47;
        }
        if ( (v17 & 0x20) != 0 || (v14 & 0x1000) != 0 )
        {
          v47 |= 0x80000u;
          LODWORD(v115) = v47;
        }
        v48 = v47;
        if ( (v17 & 0x80u) == 0 )
        {
LABEL_61:
          if ( (v17 & 4) != 0 )
          {
            v47 |= 0x4000u;
            LODWORD(v115) = v47;
          }
          HIDWORD(v111[1]) = 1000000;
          v131 = 0uLL;
          v132 = 0LL;
          LODWORD(v111[0]) = 67372032;
          BYTE4(v111[0]) = 3;
          if ( (v47 & 0x2000) != 0 )
          {
            v47 |= 0x40000u;
            LOBYTE(v111[0]) = 1;
            LODWORD(v115) = v47;
            v49 = 0xFFFF;
            DWORD1(v111[1]) = 0;
          }
          else
          {
            DWORD1(v111[1]) = 4096;
            v49 = 4095;
          }
          DWORD2(v111[0]) = v49;
          HIDWORD(v111[0]) = v49;
          LODWORD(v111[1]) = v49;
          switch ( BYTE7(v111[0]) )
          {
            case 1u:
              BYTE6(v111[0]) = 0;
              goto LABEL_69;
            case 2u:
LABEL_140:
              LODWORD(v131) = 0x100000;
              *(_QWORD *)((char *)&v131 + 4) = 0x40000000200000LL;
              HIDWORD(v131) = 0x10000;
              v132 = 0x4000000020000LL;
              WORD1(v111[0]) = 1541;
              DWORD1(v111[1]) = 0;
              goto LABEL_69;
            case 5u:
            case 6u:
              WORD1(v111[0]) = 0;
              *(_QWORD *)&v111[1] = 255LL;
              BYTE1(v111[0]) = 0;
              *((_QWORD *)&v111[0] + 1) = 0xFF000000FFLL;
              *(_QWORD *)((char *)&v131 + 4) = 0x200000001LL;
              goto LABEL_69;
            case 0xFCu:
              if ( BYTE6(v111[0]) )
              {
                v108 = BYTE6(v111[0]);
                if ( BYTE6(v111[0]) != 4 )
                  v108 = 0;
                BYTE6(v111[0]) = v108;
              }
              LODWORD(v111[1]) = 126975;
              *((_QWORD *)&v111[0] + 1) = 0x3EFFF0001EFFFLL;
              v132 = -1LL;
              *(_QWORD *)&v131 = 0x7E00000001F0000LL;
              *((_QWORD *)&v131 + 1) = -134217728LL;
              WORD1(v111[0]) = 3849;
              goto LABEL_69;
            case 0xFDu:
              *(_QWORD *)&v131 = 0x3E00000001F0000LL;
              LODWORD(v111[1]) = 126975;
              *((_QWORD *)&v111[0] + 1) = 0x1EFFF0001EFFFLL;
              v132 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v131 + 1) = 0x7FFF7FFF7C000000LL;
              WORD1(v111[0]) = 3593;
              goto LABEL_69;
          }
          if ( BYTE7(v111[0]) != 254 )
          {
            if ( BYTE7(v111[0]) == 255 )
            {
              BYTE6(v111[0]) = 4;
              LODWORD(v115) = v47 | 0x4000;
              goto LABEL_140;
            }
LABEL_69:
            v50 = v112;
            v51 = BYTE6(v111[0]);
            v52 = v112;
            v53 = v111[0];
            *(__m128i *)v13 = v43;
            LODWORD(v51) = DstOrderTable[v51];
            *(_OWORD *)(v13 + 24) = v53;
            v54 = (unsigned int)v51 >> 8;
            *((_QWORD *)v13 + 2) = v130;
            DWORD2(v111[1]) = v51;
            v55 = WORD1(v51);
            *(_OWORD *)(v13 + 40) = v111[1];
            *(_DWORD *)((-(__int64)(v52 != 0) & 0xC1C) + v11 + 868) = *((_DWORD *)&v131 + BYTE1(v51));
            v56 = BYTE2(v51);
            LODWORD(v51) = BYTE3(v51);
            *(_DWORD *)((-(__int64)(v50 != 0) & 0xC1C) + v11 + 864) = *((_DWORD *)&v131 + v56);
            *(_DWORD *)((-(__int64)(v50 != 0) & 0xC1C) + v11 + 860) = *((_DWORD *)&v131 + (unsigned __int8)v51);
            *(_DWORD *)((-(__int64)(v50 != 0) & 0xC1C) + v11 + 880) = *((_DWORD *)&v131 + (unsigned __int8)v54 + 3);
            *(_DWORD *)((-(__int64)(v50 != 0) & 0xC1C) + v11 + 876) = *((_DWORD *)&v131 + (unsigned __int8)v55 + 3);
            *(_DWORD *)((-(__int64)(v50 != 0) & 0xC1C) + v11 + 872) = *((_DWORD *)&v131 + (unsigned __int8)v51 + 3);
            v57 = v116;
            *(_OWORD *)(v13 + 56) = v115;
            v58 = v117;
            *(_OWORD *)(v13 + 72) = v57;
            v59 = *(_OWORD *)v118.m256i_i8;
            *(_OWORD *)(v13 + 88) = v58;
            v60 = *(_OWORD *)&v118.m256i_u64[2];
            *(_OWORD *)(v13 + 104) = v59;
            v61 = v119;
            *(_OWORD *)(v13 + 120) = v60;
            v62 = v120;
            *(_OWORD *)(v13 + 136) = v61;
            v63 = v121;
            *(_OWORD *)(v13 + 152) = v62;
            *(_OWORD *)(v13 + 168) = v63;
            *(_OWORD *)(v13 + 184) = v122;
            v64 = v124;
            *(_OWORD *)(v13 + 200) = v123;
            v65 = v125;
            *(_OWORD *)(v13 + 216) = v64;
            v66 = v126;
            *(_OWORD *)(v13 + 232) = v65;
            v67 = v127;
            LODWORD(v51) = v128;
            *(_OWORD *)(v13 + 248) = v66;
            *(_OWORD *)(v13 + 264) = v67;
            *((_DWORD *)v13 + 70) = v51;
            *((_QWORD *)v13 + 36) = v11 + 32;
            *((_QWORD *)v13 + 37) = v11 + 808;
            *((_QWORD *)v13 + 38) = v11 + 832;
            return v11;
          }
          if ( (v14 & 0x100) == 0 )
          {
            *(_QWORD *)&v131 = 0x38000000070000LL;
            LODWORD(v111[1]) = 20479;
            *((_QWORD *)&v111[0] + 1) = 0x4FFF00004FFFLL;
            LODWORD(v115) = v47 & 0xFFFEFFFF;
            DWORD2(v131) = 29360128;
            WORD1(v111[0]) = 2567;
            BYTE6(v111[0]) = 4;
            goto LABEL_69;
          }
          v97 = v47 | 0x10000;
          LOWORD(v110) = 0;
          LODWORD(v115) = v97;
          if ( *(_BYTE *)(v11 + 804) )
          {
            GenCMYMaskXlate(
              v11 + 548,
              v14 & 0x2000,
              *(unsigned __int8 *)(v11 + 448),
              *(unsigned __int8 *)(v11 + 449),
              *(unsigned __int8 *)(v11 + 450));
            *(_BYTE *)(v11 + 804) = 0;
          }
          if ( (v14 & 0x2000) != 0 )
            LOWORD(v110) = -254;
          else
            v40 = 0;
          HIBYTE(v110) = -((v14 & 0x2000) != 0);
          BYTE2(v110) = HIBYTE(v110) ^ *(_BYTE *)(v11 + 452);
          if ( (v14 & 0x200) != 0 )
          {
            WORD3(v111[0]) = -1280;
            *(_QWORD *)((char *)&v131 + 4) = 0xFF000000FF0000LL;
            LODWORD(v131) = 16711680;
LABEL_168:
            HIDWORD(v132) = v110;
            LODWORD(v132) = v110;
            HIDWORD(v131) = v110;
            goto LABEL_69;
          }
          v98 = 7;
          v99 = *(_BYTE *)(v11 + 453);
          v100 = 10;
          v101 = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
          WORD1(v111[0]) = 2567;
          DWORD2(v111[0]) = v101;
          HIDWORD(v111[0]) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
          LODWORD(v111[1]) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
          LODWORD(v131) = *(unsigned __int16 *)(v11 + 458);
          DWORD1(v131) = *(unsigned __int16 *)(v11 + 456);
          DWORD2(v131) = *(unsigned __int16 *)(v11 + 454);
          if ( v99 < 4u || v99 > 5u )
          {
            WORD1(v111[0]) = 2310;
            v105 = 250;
            BYTE7(v111[0]) = -6;
            v98 = 6;
            v100 = 9;
            if ( (v14 & 0x2000) == 0 )
            {
LABEL_160:
              if ( *(_DWORD *)(v11 + 472) )
              {
                HIDWORD(v111[1]) = *(_DWORD *)(v11 + 472);
                LODWORD(v115) = v97 | 0x20000;
                BYTE1(v111[0]) = 0;
                BYTE2(v111[0]) = v98 - 4;
                BYTE3(v111[0]) = v100 - 4;
                v106 = v105 - 248;
                if ( v106 )
                {
                  v107 = v106 - 1;
                  if ( v107 )
                  {
                    if ( v107 == 1 )
                      BYTE7(v111[0]) = -9;
                  }
                  else
                  {
                    BYTE7(v111[0]) = -10;
                  }
                }
                else
                {
                  BYTE7(v111[0]) = -11;
                }
              }
              BYTE6(v111[0]) = 0;
              goto LABEL_168;
            }
            v97 |= 0x2000000u;
            BYTE2(v110) = *(_BYTE *)(v11 + 803);
            v104 = *(_BYTE *)(v11 + 548);
          }
          else
          {
            if ( v99 == 4 )
            {
              BYTE7(v111[0]) = -7;
            }
            else
            {
              BYTE7(v111[0]) = -8;
              v40 |= 1u;
            }
            v97 |= 0x400000u;
            LOBYTE(v110) = v40 & 3;
            v102 = (char *)*(&p8BPPXlate + (v40 & 3));
            v103 = 292LL;
            if ( v99 != 4 )
              v103 = 365LL;
            BYTE2(v110) = v102[v103];
            v104 = *v102;
            v105 = 249 - (v99 != 4);
          }
          HIBYTE(v110) = v104;
          LODWORD(v115) = v97;
          goto LABEL_160;
        }
        v47 |= 0x100000u;
        LODWORD(v115) = v47;
        if ( (v17 & 0x100) != 0 )
        {
          v47 = v48 | 0x300000;
        }
        else
        {
          if ( (v17 & 0x200) != 0 )
          {
            v47 = v48 | 0x900000;
            LODWORD(v115) = v48 | 0x900000;
          }
          if ( (v17 & 0x400) == 0 )
            goto LABEL_61;
          v47 |= 0x1000000u;
        }
        LODWORD(v115) = v47;
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
