/*
 * XREFs of fs_FindBitMapSize @ 0x1C02B0CCC
 * Callers:
 *     lQueryTTOutline @ 0x1C021DB14 (lQueryTTOutline.c)
 *     bGetGlyphMetrics @ 0x1C021E594 (bGetGlyphMetrics.c)
 *     lGGOBitmap @ 0x1C021F1E4 (lGGOBitmap.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B1F84 (fs_SetUpKey.c)
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     mth_DivShiftLong @ 0x1C02B3504 (mth_DivShiftLong.c)
 *     mth_FixXYMul @ 0x1C02B3550 (mth_FixXYMul.c)
 *     scl_CalcLSBsAndAdvanceWidths @ 0x1C02B4150 (scl_CalcLSBsAndAdvanceWidths.c)
 *     scl_ScaleAdvanceWidth @ 0x1C02B51A4 (scl_ScaleAdvanceWidth.c)
 *     fsc_MeasureGlyph @ 0x1C02B6BE8 (fsc_MeasureGlyph.c)
 *     fsc_OverScaleOutline @ 0x1C02B7388 (fsc_OverScaleOutline.c)
 *     fsc_RemoveDups @ 0x1C02B74A0 (fsc_RemoveDups.c)
 *     sbit_GetMetrics @ 0x1C02BA440 (sbit_GetMetrics.c)
 *     fsg_CheckWorkSpaceForFit @ 0x1C02BC650 (fsg_CheckWorkSpaceForFit.c)
 *     fsg_GetContourData @ 0x1C02BD7DC (fsg_GetContourData.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C02BE848 (fsg_UpdateWorkSpaceElement.c)
 *     sfac_ReadGlyphMetrics @ 0x1C02C0AE0 (sfac_ReadGlyphMetrics.c)
 */

__int64 __fastcall fs_FindBitMapSize(_QWORD *a1, __int64 a2)
{
  __int16 v2; // bx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int16 *v9; // r14
  __int64 v10; // rsi
  __int16 v11; // r15
  int v12; // ebx
  int v13; // r11d
  int v14; // r10d
  int v15; // r9d
  __int64 v16; // kr08_8
  int v17; // ecx
  int v18; // eax
  int v19; // r8d
  __int16 v20; // ax
  _DWORD *v21; // rbx
  unsigned int v22; // r8d
  int v23; // eax
  int v24; // eax
  _WORD *v25; // r11
  _WORD *v26; // rbx
  __int16 *v27; // rsi
  __int16 *v28; // r15
  __int16 *v29; // r10
  int v30; // r9d
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  _DWORD *v34; // r8
  __int16 i; // dx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // rcx
  __int16 v41; // dx
  __int16 v42; // r8
  __int16 v43; // si
  __int16 v44; // cx
  int v45; // edx
  __int64 v46; // rdx
  unsigned __int16 v47; // r10
  unsigned __int16 v48; // r10
  unsigned __int16 v49; // r10
  int v50; // ebx
  int v51; // eax
  __int16 v52; // r11
  __int16 v53; // r9
  __int16 v54; // ax
  unsigned __int16 v55; // r10
  unsigned __int16 v56; // r10
  unsigned __int16 v57; // r10
  __int16 v58; // r9
  __int64 *v59; // rdx
  int v60; // r12d
  __int64 v61; // rbx
  __int64 v62; // r8
  __int16 v63; // r9
  __int64 v64; // rdi
  __int64 v65; // rcx
  int v66; // r10d
  int v67; // r11d
  int v68; // r15d
  int v69; // esi
  int v70; // r14d
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // r12d
  int v74; // r11d
  __int64 v75; // rbx
  __int16 v76; // ax
  _DWORD *v77; // rsi
  unsigned int v78; // r8d
  int v79; // eax
  int v80; // eax
  __int16 *v81; // r8
  int v82; // ecx
  unsigned int v83; // edx
  int v84; // ecx
  unsigned int v85; // edx
  int v86; // ecx
  unsigned int v87; // edx
  int v88; // ecx
  unsigned int v89; // edx
  int v90; // ecx
  unsigned int v91; // edx
  int v92; // ecx
  unsigned int v93; // edx
  int v94; // ecx
  unsigned int v95; // edx
  int v96; // ecx
  unsigned int v97; // edx
  int v98; // ecx
  __int64 v99; // kr10_8
  int v100; // ecx
  bool v101; // zf
  __int128 v102; // xmm1
  __int128 v103; // xmm0
  int v104; // ecx
  int v105; // edx
  int v106; // ecx
  int v107; // edx
  int v108; // ecx
  int v109; // edx
  int v110; // ecx
  int v111; // edx
  int v112; // ecx
  int v113; // edx
  int v114; // ecx
  int v115; // edx
  int v116; // ecx
  int v117; // edx
  int v118; // ecx
  int v119; // kr00_4
  int v120; // ecx
  __int64 v121; // kr20_8
  int v122; // ecx
  __int64 v123; // kr30_8
  int v124; // r9d
  int v125; // r9d
  int v126; // r9d
  int v127; // eax
  __int16 v128; // dx
  int v129; // eax
  __int16 v130; // dx
  int v131; // ecx
  int v132; // [rsp+60h] [rbp-59h] BYREF
  int v133; // [rsp+64h] [rbp-55h]
  __int64 v134; // [rsp+68h] [rbp-51h] BYREF
  int v135; // [rsp+70h] [rbp-49h] BYREF
  int v136; // [rsp+74h] [rbp-45h]
  int v137; // [rsp+78h] [rbp-41h] BYREF
  int v138; // [rsp+7Ch] [rbp-3Dh]
  int v139; // [rsp+80h] [rbp-39h] BYREF
  __int64 v140; // [rsp+88h] [rbp-31h] BYREF
  char v141[8]; // [rsp+90h] [rbp-29h] BYREF
  char v142[8]; // [rsp+98h] [rbp-21h] BYREF
  char v143[8]; // [rsp+A0h] [rbp-19h] BYREF
  char v144; // [rsp+A8h] [rbp-11h] BYREF
  char v145[8]; // [rsp+B0h] [rbp-9h] BYREF
  char v146[8]; // [rsp+B8h] [rbp-1h] BYREF
  char v147[80]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v148; // [rsp+120h] [rbp+67h] BYREF
  __int64 v149; // [rsp+128h] [rbp+6Fh]
  __int64 v150; // [rsp+130h] [rbp+77h] BYREF
  int v151; // [rsp+138h] [rbp+7Fh] BYREF
  int v152; // [rsp+13Ch] [rbp+83h]

  v149 = a2;
  v2 = 0;
  v3 = a2;
  if ( !a1[1] || !a1[4] || !a1[5] )
    return 4099LL;
  v4 = fs_SetUpKey(a1, 30LL, &v148);
  v5 = v4;
  if ( !v4 )
    return (unsigned int)v148;
  v7 = *(_QWORD *)(v4 + 232);
  v8 = *(_QWORD *)(v7 + 24);
  if ( *(_QWORD *)(v5 + 264) != v8 )
  {
    *(_QWORD *)(v5 + 432) = v8 + *(unsigned int *)(v5 + 480);
    *(_QWORD *)(v5 + 440) = v8 + *(unsigned int *)(v5 + 484);
    *(_QWORD *)(v5 + 448) = v8 + *(unsigned int *)(v5 + 488);
    *(_QWORD *)(v5 + 456) = v8 + *(unsigned int *)(v5 + 492);
    *(_QWORD *)(v5 + 464) = v8 + *(unsigned int *)(v5 + 496);
    *(_QWORD *)(v5 + 472) = v8 + *(unsigned int *)(v5 + 548);
    fsg_UpdateWorkSpaceElement();
    v7 = *(_QWORD *)(v5 + 232);
    *(_OWORD *)(v5 + 240) = *(_OWORD *)v7;
    *(_OWORD *)(v5 + 256) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(v5 + 272) = *(_OWORD *)(v7 + 32);
    *(_OWORD *)(v5 + 288) = *(_OWORD *)(v7 + 48);
    *(_QWORD *)(v5 + 304) = *(_QWORD *)(v7 + 64);
  }
  v9 = (__int16 *)(v5 + 694);
  v10 = *(_QWORD *)(v7 + 32) + *(unsigned int *)(v5 + 584);
  v11 = 1;
  v140 = v10;
  if ( *(_DWORD *)(v5 + 844) && (*(_BYTE *)(v5 + 1076) & 1) == 0 )
  {
    result = sbit_GetMetrics(
               (int)v5 + 964,
               v5,
               (unsigned int)&v150,
               (unsigned int)&v151,
               (__int64)&v132,
               (__int64)&v137,
               (__int64)&v134,
               (__int64)&v135,
               v5 + 694,
               (__int64)&v148,
               (__int64)&v139,
               (__int64)&v140);
    if ( (_DWORD)result )
      return result;
    v12 = v151;
    v13 = v152;
    v14 = v132;
    v15 = v133;
    v16 = v134;
    v17 = v135;
    *(_DWORD *)(v3 + 72) = (_DWORD)v150 << 10;
    *(_DWORD *)(v3 + 76) = HIDWORD(v150) << 10;
    *(_DWORD *)(v3 + 204) = v137 << 10;
    *(_DWORD *)(v3 + 208) = v138 << 10;
    v18 = v136 << 10;
    *(_DWORD *)(v3 + 184) = v136 << 10;
    *(_DWORD *)(v3 + 192) = v18;
    v15 <<= 10;
    v17 <<= 10;
    v12 <<= 10;
    *(_DWORD *)(v3 + 80) = v12;
    v13 <<= 10;
    v14 <<= 10;
    *(_DWORD *)(v3 + 64) = v12;
    *(_DWORD *)(v3 + 52) = v15;
    *(_DWORD *)(v3 + 212) = (_DWORD)v16 << 10;
    *(_DWORD *)(v3 + 180) = v17;
    *(_DWORD *)(v3 + 60) = v15;
    *(_DWORD *)(v3 + 196) = (_DWORD)v16 << 10;
    *(_DWORD *)(v3 + 188) = v17;
    *(_DWORD *)(v3 + 84) = v13;
    *(_DWORD *)(v3 + 48) = v14;
    *(_DWORD *)(v3 + 216) = HIDWORD(v16) << 10;
    *(_DWORD *)(v3 + 68) = v13;
    *(_DWORD *)(v3 + 56) = v14;
    *(_DWORD *)(v3 + 200) = HIDWORD(v16) << 10;
    result = sfac_ReadGlyphMetrics(
               v5,
               *(unsigned __int16 *)(v5 + 216),
               (int)v5 + 384,
               (int)v5 + 386,
               (__int64)&v151,
               (__int64)&v150);
    if ( (_DWORD)result )
      return result;
    v19 = *(unsigned __int16 *)(v5 + 384);
    *(_DWORD *)(v3 + 44) = 0;
    scl_ScaleAdvanceWidth(v10, v3 + 40, v19, *(_DWORD *)(v5 + 360), *(_WORD *)(v5 + 316), v5 + 320);
    v20 = *(_WORD *)(v5 + 386);
    v21 = (_DWORD *)(v3 + 176);
    *(_DWORD *)(v3 + 172) = 0;
    v22 = *(__int16 *)(v5 + 316);
    if ( *(_DWORD *)(v5 + 360) )
    {
      v23 = CompDiv(v22, v20 * (__int64)*(int *)(v10 + 388));
      *v21 = v23;
      if ( v23 )
        *v21 = v23 + 0x10000;
    }
    else
    {
      LODWORD(v150) = v20 << 16;
      HIDWORD(v150) = v20 >> 15;
      v24 = CompDiv(v22, v150);
      *v21 = v24;
      if ( v24 )
        *v21 = v24 + 0x10000;
      mth_FixXYMul(v3 + 172, v3 + 176, v5 + 320);
    }
    v25 = (_WORD *)(v3 + 100);
    *(_WORD *)(v3 + 100) = *(_WORD *)(v5 + 696);
    v26 = (_WORD *)(v3 + 104);
    v27 = (__int16 *)(v3 + 98);
    *(_WORD *)(v3 + 104) = *(_WORD *)(v5 + 700);
    v28 = (__int16 *)(v3 + 102);
    v29 = (__int16 *)(v3 + 96);
    *(_WORD *)(v3 + 98) = *(_WORD *)(v5 + 698);
    v30 = v3 + 24;
    *(_WORD *)(v3 + 102) = *v9;
    *(_WORD *)(v3 + 96) = v148;
    v31 = v139;
    *(_QWORD *)(v3 + 88) = 0LL;
    *(_DWORD *)(v3 + 20) = v31;
    *(_DWORD *)(v3 + 24) = v140;
    v32 = 0;
    *(_DWORD *)(v3 + 32) = 0;
    goto LABEL_75;
  }
  if ( *(_DWORD *)(v5 + 356) )
  {
    v33 = *(_QWORD *)(v5 + 448);
    v34 = *(_DWORD **)v33;
    for ( i = *(_WORD *)(*(_QWORD *)(v33 + 64) + 2LL * (*(__int16 *)(v33 + 80) - 1)); i >= 0; --i )
      ++*v34++;
  }
  fsg_GetContourData(
    v5 + 432,
    0,
    0,
    (unsigned int)&v144,
    (__int64)v145,
    (__int64)v142,
    (__int64)v143,
    (__int64)v146,
    (__int64)v147,
    (__int64)v141);
  result = fsc_RemoveDups(v141);
  if ( !(_DWORD)result )
  {
    if ( *(_DWORD *)(v5 + 836) )
    {
      result = fsc_OverScaleOutline(v141, *(unsigned __int16 *)(v5 + 832));
      if ( (_DWORD)result )
        return result;
      v11 = *(_WORD *)(v5 + 832);
      v36 = 784LL;
    }
    else
    {
      v36 = 688LL;
    }
    v37 = *(unsigned int *)(v5 + 548);
    v38 = v36 + v5;
    v39 = *(_QWORD *)(v5 + 232);
    v148 = v38;
    v40 = *(_QWORD *)(v39 + 24) + v37;
    LODWORD(v39) = *(_DWORD *)(v5 + 944);
    *(_QWORD *)(v5 + 760) = v40;
    *(_DWORD *)(v5 + 736) = v39;
    if ( *(_DWORD *)(v5 + 1068) )
    {
      v41 = *(_WORD *)(v5 + 1072);
      v42 = *(_WORD *)(v5 + 1074);
      if ( *(_DWORD *)(v5 + 836) )
      {
        v43 = *(_WORD *)(v5 + 832) * v41;
        v2 = *(_WORD *)(v5 + 832) * v42;
      }
      else
      {
        v44 = *(_WORD *)(v5 + 1076);
        v2 = *(_WORD *)(v5 + 1074);
        if ( (v44 & 1) != 0 )
        {
          v43 = 6 * v41;
          if ( (v44 & 0x10) != 0 )
            v2 = 5 * v42;
        }
        else
        {
          v43 = *(_WORD *)(v5 + 1072);
        }
      }
    }
    else
    {
      v43 = 0;
    }
    result = fsc_MeasureGlyph((unsigned int)v141, v38, (int)v5 + 736, *(unsigned __int16 *)(v5 + 312), v11, v43, v2);
    if ( (_DWORD)result == 4869 )
    {
      v45 = v148;
      *(_WORD *)(v5 + 312) &= ~4u;
      result = fsc_MeasureGlyph((unsigned int)v141, v45, (int)v5 + 736, *(unsigned __int16 *)(v5 + 312), v11, v43, v2);
    }
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(v5 + 836) )
      {
        v46 = *(unsigned __int16 *)(v5 + 832);
        if ( *(_DWORD *)(v5 + 840) )
        {
          *(_WORD *)(v5 + 696) = (int)(mth_DivShiftLong(*(unsigned int *)(v5 + 804), v46) + 31) >> 6;
          *(_WORD *)(v5 + 700) = (int)(mth_DivShiftLong(*(unsigned int *)(v5 + 808), v47) + 32) >> 6;
          v50 = (int)(mth_DivShiftLong(*(unsigned int *)(v5 + 812), v48) + 31) >> 6;
          *(_WORD *)(v5 + 698) = v50;
          v51 = (int)(mth_DivShiftLong(*(unsigned int *)(v5 + 816), v49) + 32) >> 6;
          *v9 = v51;
          if ( v53 == v52 )
            *(_WORD *)(v5 + 700) = v52 + 1;
          if ( (_WORD)v50 != (_WORD)v51 )
            goto LABEL_46;
          v54 = v51 + 1;
        }
        else
        {
          *(_WORD *)(v5 + 696) = mth_DivShiftLong((unsigned int)*(__int16 *)(v5 + 792), v46);
          *(_WORD *)(v5 + 700) = mth_DivShiftLong((unsigned int)(__int16)(v55 + *(_WORD *)(v5 + 796) - 1), v55);
          *(_WORD *)(v5 + 698) = mth_DivShiftLong((unsigned int)*(__int16 *)(v5 + 794), v56);
          v54 = mth_DivShiftLong((unsigned int)(__int16)(v57 + *(_WORD *)(v5 + 790) - v58), v57);
        }
        *v9 = v54;
      }
LABEL_46:
      scl_CalcLSBsAndAdvanceWidths(
        *(_QWORD *)(v5 + 448),
        *(__int16 *)(v5 + 696) << 6,
        *v9 << 6,
        (unsigned int)&v150,
        (__int64)&v151,
        (__int64)&v132,
        (__int64)&v148,
        (__int64)&v137);
      *(_DWORD *)(v3 + 72) = (_DWORD)v150 << 10;
      *(_DWORD *)(v3 + 76) = HIDWORD(v150) << 10;
      *(_DWORD *)(v3 + 80) = v151 << 10;
      *(_DWORD *)(v3 + 84) = v152 << 10;
      *(_DWORD *)(v3 + 48) = v132 << 10;
      *(_DWORD *)(v3 + 52) = v133 << 10;
      *(_DWORD *)(v3 + 64) = (_DWORD)v148 << 10;
      *(_DWORD *)(v3 + 68) = HIDWORD(v148) << 10;
      *(_DWORD *)(v3 + 56) = v137 << 10;
      *(_DWORD *)(v3 + 60) = v138 << 10;
      v59 = *(__int64 **)(v5 + 448);
      v60 = *(__int16 *)(v5 + 696) << 6;
      v61 = *v59;
      v62 = v59[1];
      v63 = *(_WORD *)(v59[8] + 2LL * (*((__int16 *)v59 + 40) - 1));
      v64 = (unsigned __int16)(v63 + 4);
      v65 = (unsigned __int16)(v63 + 3);
      v66 = *(_DWORD *)(v62 + 4 * v64);
      v67 = *(_DWORD *)(*v59 + 4 * v65);
      v68 = v60 - v67;
      v69 = *(_DWORD *)(v62 + 4 * v65);
      v70 = (*v9 << 6) - v69;
      v71 = (unsigned __int16)(v63 + 8);
      v72 = (unsigned __int16)(v63 + 7);
      LODWORD(v134) = v60 - v67;
      HIDWORD(v134) = v70;
      v73 = v60 - *(_DWORD *)(v61 + 4 * v72) - *(_DWORD *)(v61 + 4 * v71);
      LODWORD(v59) = *(_DWORD *)(v62 + 4 * v71) - *(_DWORD *)(v62 + 4 * v72);
      v135 = v73;
      v74 = v67 - *(_DWORD *)(v61 + 4 * v64);
      v3 = v149;
      v75 = v140;
      *(_DWORD *)(v149 + 200) = v70 << 10;
      v136 = (int)v59;
      *(_DWORD *)(v3 + 192) = (_DWORD)v59 << 10;
      v73 <<= 10;
      *(_DWORD *)(v3 + 180) = v73;
      *(_DWORD *)(v3 + 188) = v73;
      *(_DWORD *)(v3 + 184) = (_DWORD)v59 << 10;
      *(_DWORD *)(v3 + 204) = v74 << 10;
      v68 <<= 10;
      *(_DWORD *)(v3 + 212) = v68;
      *(_DWORD *)(v3 + 196) = v68;
      *(_DWORD *)(v3 + 208) = (v69 - v66) << 10;
      *(_DWORD *)(v3 + 216) = v70 << 10;
      LODWORD(v62) = *(unsigned __int16 *)(v5 + 384);
      *(_DWORD *)(v3 + 44) = 0;
      scl_ScaleAdvanceWidth(v75, v3 + 40, v62, *(_DWORD *)(v5 + 360), *(_WORD *)(v5 + 316), v5 + 320);
      v76 = *(_WORD *)(v5 + 386);
      v77 = (_DWORD *)(v3 + 176);
      *(_DWORD *)(v3 + 172) = 0;
      v78 = *(__int16 *)(v5 + 316);
      if ( *(_DWORD *)(v5 + 360) )
      {
        v79 = CompDiv(v78, v76 * (__int64)*(int *)(v75 + 388));
        *v77 = v79;
        if ( v79 )
          *v77 = v79 + 0x10000;
      }
      else
      {
        LODWORD(v148) = v76 << 16;
        HIDWORD(v148) = v76 >> 15;
        v80 = CompDiv(v78, v148);
        *v77 = v80;
        if ( v80 )
          *v77 = v80 + 0x10000;
        mth_FixXYMul(v3 + 172, v3 + 176, v5 + 320);
      }
      v81 = (__int16 *)(v5 + 694);
      v27 = (__int16 *)(v3 + 98);
      *(_OWORD *)(v5 + 848) = *(_OWORD *)(v3 + 40);
      v28 = (__int16 *)(v3 + 102);
      *(_OWORD *)(v5 + 864) = *(_OWORD *)(v3 + 56);
      *(_OWORD *)(v5 + 880) = *(_OWORD *)(v3 + 72);
      *(_OWORD *)(v5 + 896) = *(_OWORD *)(v3 + 172);
      *(_OWORD *)(v5 + 912) = *(_OWORD *)(v3 + 188);
      *(_OWORD *)(v5 + 928) = *(_OWORD *)(v3 + 204);
      *(_WORD *)(v3 + 98) = *(_WORD *)(v5 + 698);
      *(_WORD *)(v3 + 102) = *(_WORD *)(v5 + 694);
      *(_QWORD *)(v3 + 88) = 0LL;
      *(_WORD *)(v3 + 232) = 0;
      if ( (*(_BYTE *)(v5 + 1076) & 1) != 0 )
      {
        v82 = *(_DWORD *)(v3 + 80) + 3;
        *(_DWORD *)(v3 + 72) = (*(_DWORD *)(v3 + 72) + 3) / 6;
        v83 = (unsigned __int64)(715827883LL * v82) >> 32;
        v84 = *(_DWORD *)(v3 + 48) + 3;
        *(_DWORD *)(v3 + 80) = (v83 >> 31) + v83;
        v85 = (unsigned __int64)(715827883LL * v84) >> 32;
        v86 = *(_DWORD *)(v3 + 64) + 3;
        *(_DWORD *)(v3 + 48) = (v85 >> 31) + v85;
        v87 = (unsigned __int64)(715827883LL * v86) >> 32;
        v88 = *(_DWORD *)(v3 + 56) + 3;
        *(_DWORD *)(v3 + 64) = (v87 >> 31) + v87;
        v89 = (unsigned __int64)(715827883LL * v88) >> 32;
        v90 = *(_DWORD *)(v3 + 204) + 3;
        *(_DWORD *)(v3 + 56) = (v89 >> 31) + v89;
        v91 = (unsigned __int64)(715827883LL * v90) >> 32;
        v92 = *(_DWORD *)(v3 + 212) + 3;
        *(_DWORD *)(v3 + 204) = (v91 >> 31) + v91;
        v93 = (unsigned __int64)(715827883LL * v92) >> 32;
        v94 = *(_DWORD *)(v3 + 180) + 3;
        *(_DWORD *)(v3 + 212) = (v93 >> 31) + v93;
        v95 = (unsigned __int64)(715827883LL * v94) >> 32;
        v96 = *(_DWORD *)(v3 + 196) + 3;
        *(_DWORD *)(v3 + 180) = (v95 >> 31) + v95;
        v97 = (unsigned __int64)(715827883LL * v96) >> 32;
        v98 = *(_DWORD *)(v3 + 188) + 3;
        *(_DWORD *)(v3 + 196) = (v97 >> 31) + v97;
        *(_DWORD *)(v3 + 188) = v98 / 6;
        if ( *(__int16 *)(v5 + 696) >= 0 )
          v99 = 715827883LL * *(__int16 *)(v5 + 696);
        else
          v99 = -715827883LL * (5 - *(__int16 *)(v5 + 696));
        v25 = (_WORD *)(v3 + 100);
        *(_WORD *)(v3 + 100) = WORD2(v99) + (HIDWORD(v99) >> 31);
        v100 = *(__int16 *)(v5 + 700);
        if ( v100 >= -5 )
          LOWORD(v100) = v100 + 5;
        v26 = (_WORD *)(v3 + 104);
        v29 = (__int16 *)(v3 + 96);
        *(_WORD *)(v3 + 104) = (__int16)v100 / 6;
        *(_WORD *)(v3 + 96) = ((__int16)v100 / 6 - (WORD2(v99) + (HIDWORD(v99) >> 31)) + 3) & 0xFFFC;
        v101 = (*(_BYTE *)(v5 + 1076) & 0x10) == 0;
        v102 = *(_OWORD *)(v5 + 704);
        *(_OWORD *)(v5 + 784) = *(_OWORD *)(v5 + 688);
        v103 = *(_OWORD *)(v5 + 720);
        *(_OWORD *)(v5 + 800) = v102;
        *(_OWORD *)(v5 + 816) = v103;
        *(_WORD *)(v5 + 688) = *(_WORD *)(v3 + 96);
        *(_WORD *)(v5 + 696) = *v25;
        *(_WORD *)(v5 + 700) = *(_WORD *)(v3 + 104);
        if ( !v101 )
        {
          v104 = *(_DWORD *)(v3 + 84) + 2;
          *(_DWORD *)(v3 + 76) = (*(_DWORD *)(v3 + 76) + 2) / 5;
          v105 = (unsigned __int64)(1717986919LL * v104) >> 32;
          v106 = *(_DWORD *)(v3 + 52) + 2;
          *(_DWORD *)(v3 + 84) = ((unsigned int)v105 >> 31) + (v105 >> 1);
          v107 = (unsigned __int64)(1717986919LL * v106) >> 32;
          v108 = *(_DWORD *)(v3 + 68) + 2;
          *(_DWORD *)(v3 + 52) = ((unsigned int)v107 >> 31) + (v107 >> 1);
          v109 = (unsigned __int64)(1717986919LL * v108) >> 32;
          v110 = *(_DWORD *)(v3 + 60) + 2;
          *(_DWORD *)(v3 + 68) = ((unsigned int)v109 >> 31) + (v109 >> 1);
          v111 = (unsigned __int64)(1717986919LL * v110) >> 32;
          v112 = *(_DWORD *)(v3 + 208) + 2;
          *(_DWORD *)(v3 + 60) = ((unsigned int)v111 >> 31) + (v111 >> 1);
          v113 = (unsigned __int64)(1717986919LL * v112) >> 32;
          v114 = *(_DWORD *)(v3 + 216) + 2;
          *(_DWORD *)(v3 + 208) = ((unsigned int)v113 >> 31) + (v113 >> 1);
          v115 = (unsigned __int64)(1717986919LL * v114) >> 32;
          v116 = *(_DWORD *)(v3 + 184) + 2;
          *(_DWORD *)(v3 + 216) = ((unsigned int)v115 >> 31) + (v115 >> 1);
          v117 = (unsigned __int64)(1717986919LL * v116) >> 32;
          v118 = *(_DWORD *)(v3 + 200) + 2;
          *(_DWORD *)(v3 + 184) = ((unsigned int)v117 >> 31) + (v117 >> 1);
          v119 = v118;
          v120 = *(_DWORD *)(v3 + 192);
          *(_DWORD *)(v3 + 200) = v119 / 5;
          *(_DWORD *)(v3 + 192) = (v120 + 2) / 5;
          if ( *(__int16 *)(v5 + 698) >= 0 )
            v121 = 1717986919LL * *(__int16 *)(v5 + 698);
          else
            v121 = -1717986919LL * (4 - *(__int16 *)(v5 + 698));
          *v27 = (HIDWORD(v121) >> 31) + (SHIDWORD(v121) >> 1);
          v122 = *v81;
          if ( v122 + 4 >= 0 )
            v123 = 1717986919LL * (v122 + 4);
          else
            v123 = 1717986919LL * *v81;
          *v28 = (HIDWORD(v123) >> 31) + (SHIDWORD(v123) >> 1);
          *(_WORD *)(v3 + 232) = *v81 - *(_WORD *)(v5 + 698);
          v124 = *v81;
          if ( *v81 < 0 )
          {
            v126 = -v124 % 5;
            *(_WORD *)(v3 + 234) = 5 - v126;
            if ( (unsigned __int16)v126 > 5u && (_WORD)v126 != 0 )
              *(_WORD *)(v3 + 234) = 5;
          }
          else
          {
            v125 = v124 % 5;
            *(_WORD *)(v3 + 234) = v125;
            if ( !(_WORD)v125 )
              *(_WORD *)(v3 + 234) = 5;
          }
        }
        v127 = *(_DWORD *)(v5 + 820);
        *(_DWORD *)(v5 + 724) = *v29 * (*v81 - *(__int16 *)(v5 + 698));
        *(_DWORD *)(v3 + 32) = v127;
      }
      else
      {
        v25 = (_WORD *)(v3 + 100);
        *(_WORD *)(v3 + 100) = *(_WORD *)(v5 + 696);
        v26 = (_WORD *)(v3 + 104);
        v29 = (__int16 *)(v3 + 96);
        *(_WORD *)(v3 + 104) = *(_WORD *)(v5 + 700);
        *(_WORD *)(v3 + 96) = *(_WORD *)(v5 + 688);
      }
      if ( *(_DWORD *)(v5 + 836) )
      {
        v128 = (*(_WORD *)(v5 + 700) - *(_WORD *)(v5 + 696) + 3) & 0xFFFC;
        *v29 = v128;
        v129 = *(_DWORD *)(v5 + 820);
        *(_DWORD *)(v5 + 724) = v128 * (*(__int16 *)(v5 + 694) - *(__int16 *)(v5 + 698));
        *(_DWORD *)(v3 + 32) = v129;
      }
      v30 = v3 + 24;
      *(_WORD *)(v5 + 688) = *v29;
      *(_DWORD *)(v3 + 20) = *(_DWORD *)(v5 + 724);
      *(_DWORD *)(v3 + 24) = *(_DWORD *)(v5 + 740);
      v32 = *(_DWORD *)(v5 + 744);
LABEL_75:
      *(_DWORD *)(v3 + 28) = v32;
      if ( *(_DWORD *)(v5 + 1152) )
      {
        v130 = (*v26 - *v25 + 3) & 0xFFFC;
        v131 = v130 * (*v28 - *v27);
        *v29 = v130;
        *(_DWORD *)(v3 + 20) = v131;
      }
      fsg_CheckWorkSpaceForFit(v5 + 480, *(_DWORD *)(v5 + 944), *(_DWORD *)(v5 + 736), v30, v3 + 28);
      *(_DWORD *)(v5 + 680) = 0;
      result = 0LL;
      *(_DWORD *)(v5 + 948) = 0;
      *(_DWORD *)(v5 + 420) = 62;
    }
  }
  return result;
}
