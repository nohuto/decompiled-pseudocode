/*
 * XREFs of NtGdiBitBltInternal @ 0x1C00B6CF0
 * Callers:
 *     _DrawIconEx @ 0x1C00226D0 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00250E0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067CB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     NtGdiBitBlt @ 0x1C00B8F10 (NtGdiBitBlt.c)
 *     UpdateSpriteArea @ 0x1C00CB6CC (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00CC7A0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00EAB30 (NtUserBitBltSysBmp.c)
 *     RecolorDeskPattern @ 0x1C011BBA0 (RecolorDeskPattern.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C012B6F0 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C0158BC0 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C015DA3C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C015E86C (CreateSpb.c)
 *     StopFade @ 0x1C01E9510 (StopFade.c)
 *     xxxPrintWindow @ 0x1C01E97EC (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C0208E30 (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021EE84 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F2E8 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02223D8 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C023B074 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023BA94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023F184 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243808 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     BltColor @ 0x1C02486DC (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0248EFC (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C0249908 (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 *     DxgkEngBltViaGDI @ 0x1C0273B20 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GreClientRgnUpdatedStable @ 0x1C006498C (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C0067A38 (GreClientRgnUpdated.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A1AC4 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B5580 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B7F30 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B8F80 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     bCvtPts1 @ 0x1C00BC6A0 (bCvtPts1.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00D0344 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D04D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00E4D80 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026BEF4 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0274FC0 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C0275140 (SimBitBlt.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  int v11; // esi
  int v12; // ebx
  int v13; // r15d
  int v14; // r12d
  char v16; // al
  HDC v18; // rdx
  int v19; // edi
  DC *v20; // r8
  struct _DC_ATTR *UserAttr; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  DC *v24; // r8
  int v25; // ecx
  struct _DC_ATTR *v26; // rax
  DC *v27; // rdx
  DC *v28; // r9
  __int64 v29; // rbx
  int v30; // r8d
  struct MATRIX *v31; // rdx
  int v32; // r9d
  int v33; // ebx
  int v34; // edx
  int v35; // r8d
  int v36; // r8d
  int v37; // edx
  DC *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v45; // r15
  unsigned __int8 v46; // cl
  _DWORD *v47; // rcx
  DC *v48; // r11
  int v49; // r10d
  __int64 v50; // rbx
  int v51; // eax
  int v52; // eax
  __int64 v53; // rbx
  _DWORD *v54; // rcx
  int v55; // edi
  int v56; // r14d
  int v57; // r13d
  __int64 v58; // rax
  XLATEOBJ *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // rax
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // ecx
  int v67; // r14d
  int v68; // eax
  int v69; // esi
  __int64 v70; // r13
  __m128i v71; // xmm6
  int v72; // r15d
  __int64 v73; // rax
  int v74; // edx
  int v75; // r8d
  int v76; // r14d
  int v77; // ebx
  __int64 v78; // rax
  unsigned int v79; // edx
  __int32 v80; // r8d
  __int32 v81; // r11d
  __int32 v82; // r10d
  int v83; // ecx
  DC *v84; // r13
  int v85; // ecx
  int v86; // eax
  int v87; // ecx
  int v88; // edx
  int v89; // r8d
  int v90; // esi
  int v91; // ecx
  int v92; // eax
  int v93; // ebx
  __m128i v94; // xmm6
  __int32 v95; // eax
  __int32 v96; // ebx
  __m128i v97; // xmm7
  char v98; // r14
  _QWORD *v99; // r10
  __int64 v100; // rbx
  int v101; // esi
  int v102; // eax
  unsigned int v103; // esi
  __int64 cEntries; // rax
  struct _DC_ATTR *v105; // rax
  __int64 v106; // rbx
  struct _DC_ATTR *v107; // rax
  __int64 v108; // rbx
  unsigned int v110; // r13d
  unsigned int v111; // r9d
  __int64 v112; // rax
  int v113; // eax
  XLATEOBJ *XlateObject; // rax
  int v115; // eax
  __int64 v116; // rax
  int v117; // ecx
  unsigned int v118; // eax
  __int64 v119; // r8
  __int64 v120; // r10
  XLATEOBJ *v121; // rdx
  FLONG flXlate; // r11d
  __int64 v123; // rdi
  struct REGION *v124; // rax
  int v125; // eax
  int (*v126)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v127; // rdx
  int v128; // r8d
  __int64 v129; // r10
  __int64 v130; // rdx
  char *v131; // rdi
  int v132; // ecx
  _DWORD *v133; // rax
  int v134; // ebx
  unsigned int CurrentProcessId; // eax
  __int64 v136; // rbx
  unsigned int v137; // eax
  int v138; // eax
  int v139; // eax
  __int64 v140; // rax
  __int64 v141; // rax
  unsigned int v142; // eax
  _DWORD *v143; // rax
  float v144; // xmm1_4
  float v145; // xmm3_4
  _OWORD *v146; // rax
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v150; // rax
  int v151; // esi
  int v152[2]; // [rsp+30h] [rbp-D0h]
  int v153; // [rsp+70h] [rbp-90h]
  int v154; // [rsp+70h] [rbp-90h]
  DC *v155; // [rsp+78h] [rbp-88h] BYREF
  __int64 v156; // [rsp+80h] [rbp-80h]
  int v157; // [rsp+88h] [rbp-78h] BYREF
  DC *v158; // [rsp+90h] [rbp-70h] BYREF
  __int64 v159; // [rsp+98h] [rbp-68h]
  int v160; // [rsp+A0h] [rbp-60h] BYREF
  XLATEOBJ *v161; // [rsp+A8h] [rbp-58h] BYREF
  int v162; // [rsp+B0h] [rbp-50h]
  int v163; // [rsp+B4h] [rbp-4Ch]
  int v164; // [rsp+B8h] [rbp-48h]
  int v165; // [rsp+BCh] [rbp-44h]
  unsigned __int64 v166; // [rsp+C0h] [rbp-40h] BYREF
  __int32 v167; // [rsp+C8h] [rbp-38h]
  __int32 v168; // [rsp+CCh] [rbp-34h]
  __int64 v169; // [rsp+D0h] [rbp-30h]
  HDC v170; // [rsp+D8h] [rbp-28h]
  unsigned int v171; // [rsp+E0h] [rbp-20h]
  unsigned int v172; // [rsp+E4h] [rbp-1Ch]
  int v173; // [rsp+E8h] [rbp-18h]
  _QWORD *v174; // [rsp+F0h] [rbp-10h]
  __int64 i; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v176; // [rsp+100h] [rbp+0h] BYREF
  int v177; // [rsp+108h] [rbp+8h]
  int v178; // [rsp+10Ch] [rbp+Ch]
  XLATEOBJ *v179; // [rsp+110h] [rbp+10h]
  __int64 v180; // [rsp+118h] [rbp+18h]
  float v181[2]; // [rsp+120h] [rbp+20h] BYREF
  HDC v182; // [rsp+128h] [rbp+28h] BYREF
  char *v183; // [rsp+130h] [rbp+30h] BYREF
  int v184; // [rsp+138h] [rbp+38h]
  int v185; // [rsp+13Ch] [rbp+3Ch]
  struct MATRIX *v186; // [rsp+140h] [rbp+40h] BYREF
  int v187; // [rsp+148h] [rbp+48h]
  int v188; // [rsp+14Ch] [rbp+4Ch]
  __m128i v189; // [rsp+150h] [rbp+50h]
  __int64 v190; // [rsp+160h] [rbp+60h] BYREF
  __int64 v191; // [rsp+168h] [rbp+68h] BYREF
  __int64 v192; // [rsp+170h] [rbp+70h] BYREF
  __int64 v193; // [rsp+178h] [rbp+78h] BYREF
  __m128i v194; // [rsp+180h] [rbp+80h]
  _OWORD v195[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v196; // [rsp+1B0h] [rbp+B0h]
  __int64 v197; // [rsp+1B8h] [rbp+B8h]
  char v198; // [rsp+1C0h] [rbp+C0h]
  int v199; // [rsp+1C4h] [rbp+C4h]
  __int64 v200; // [rsp+1C8h] [rbp+C8h]
  __int64 v201; // [rsp+1D0h] [rbp+D0h]
  int v202; // [rsp+1D8h] [rbp+D8h]
  __int64 v203; // [rsp+1E0h] [rbp+E0h]
  __int64 v204; // [rsp+1E8h] [rbp+E8h]
  __int16 v205; // [rsp+1F0h] [rbp+F0h]
  __int64 v206; // [rsp+1F8h] [rbp+F8h]
  __int64 v207; // [rsp+200h] [rbp+100h]
  __int16 v208; // [rsp+208h] [rbp+108h]
  __int64 v209; // [rsp+210h] [rbp+110h]
  __int64 v210; // [rsp+218h] [rbp+118h]
  __int64 v211; // [rsp+220h] [rbp+120h]
  __int64 v212; // [rsp+228h] [rbp+128h]
  __int128 v213; // [rsp+230h] [rbp+130h]
  __int64 v214; // [rsp+240h] [rbp+140h]
  __m128i v215; // [rsp+250h] [rbp+150h] BYREF
  __m128i v216; // [rsp+260h] [rbp+160h] BYREF
  __m128i v217; // [rsp+270h] [rbp+170h] BYREF
  __m128i v218; // [rsp+280h] [rbp+180h]
  __m128i v219; // [rsp+290h] [rbp+190h] BYREF
  __m128i v220; // [rsp+2A0h] [rbp+1A0h] BYREF

  v11 = a3;
  v12 = a5;
  v13 = a7;
  v14 = a8;
  v182 = a1;
  v16 = 0;
  v157 = a5;
  if ( (a9 & 0x20000000) != 0 )
    v16 = 2;
  v18 = a6;
  v170 = a6;
  if ( (a9 & 0x40000000) == 0 )
  {
    v162 = a9 & 0xDFFFFFFF;
    LOBYTE(v18) = 1;
    v19 = a9 & 0x5FFFFFFF;
    v156 = 0LL;
    v155 = (DC *)HmgLockEx(a1, v18, 0LL);
    v20 = v155;
    if ( v155 )
    {
      if ( (*((_DWORD *)v155 + 11) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v155);
        if ( UserAttr && !DC::SaveAttributes(v155, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v155 + 3);
          v20 = 0LL;
          v155 = 0LL;
          goto LABEL_231;
        }
        *((_DWORD *)v155 + 11) |= 2u;
        v20 = v155;
        LODWORD(v156) = 1;
      }
      if ( (*((_DWORD *)v20 + 130) & 4) == 0 )
      {
LABEL_10:
        if ( !v20 )
          return 0;
        if ( (*((_DWORD *)v20 + 9) & 0x10000) == 0 )
        {
          v22 = BYTE1(v19);
          if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v19 != 16711778 && v19 != 66 )
            bSpDwmValidateSurface((struct XDCOBJ *)&v155, a2, v11, a4, a5);
          v159 = 0LL;
          LOBYTE(v22) = 1;
          v23 = HmgLockEx(v170, v22, 0LL);
          v158 = (DC *)v23;
          v24 = (DC *)v23;
          if ( v23 )
          {
            v25 = HIDWORD(v159);
            if ( HIDWORD(v159) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v23 + 48) + 40LL) & 0x8000) == 0
                || (v134 = *(_DWORD *)(v23 + 2096),
                    CurrentProcessId = (unsigned int)PsGetCurrentProcessId(),
                    v24 = v158,
                    v134 != (CurrentProcessId & 0xFFFFFFFC)) )
              {
                _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
                v158 = 0LL;
                v103 = 0;
                goto LABEL_158;
              }
              v25 = HIDWORD(v159);
              v12 = v157;
            }
            if ( (*((_DWORD *)v24 + 11) & 2) == 0 )
            {
              if ( !v25 )
              {
                v26 = XDCOBJ::GetUserAttr((XDCOBJ *)&v158);
                if ( v26 && !DC::SaveAttributes(v158, v26) )
                {
                  _InterlockedDecrement((volatile signed __int32 *)v158 + 3);
                  v158 = 0LL;
                  v103 = 0;
                  goto LABEL_158;
                }
                v24 = v158;
              }
              *((_DWORD *)v24 + 11) |= 2u;
              v24 = v158;
              LODWORD(v159) = 1;
            }
            if ( (*((_DWORD *)v24 + 130) & 4) == 0 )
            {
LABEL_22:
              if ( v24 )
              {
                bSpDwmValidateSurface((struct XDCOBJ *)&v158, a7, a8, a4, v12);
                v27 = v158;
                v28 = v155;
                v29 = *((_QWORD *)v155 + 122);
                v30 = *(_DWORD *)(v29 + 108);
                if ( (((unsigned __int8)v30 ^ *(_BYTE *)(*((_QWORD *)v158 + 122) + 108LL)) & 7) != 0
                  && (v162 < 0 && (v30 & 1) != 0 || (v30 & 9) == 9) )
                {
                  v136 = *(_QWORD *)(v29 + 308);
                  v137 = DC::dwSetLayout(v155, -1, 0);
                  v28 = v155;
                  v27 = v158;
                  a2 = v136 - a2 - a4;
                  v162 = v137;
                  v172 = 0x80000000;
                }
                else
                {
                  v172 = 0;
                  v162 = v173;
                }
                v184 = *(_DWORD *)(*((_QWORD *)v28 + 122) + 208LL);
                v185 = *(_DWORD *)(*((_QWORD *)v28 + 122) + 108LL) & 1;
                if ( (*(_DWORD *)(*((_QWORD *)v28 + 122) + 340LL) & 0x1E000) != 0 )
                {
                  EXFORMOBJ::vInit((EXFORMOBJ *)&v183, (struct XDCOBJ *)&v155, 0x204u, 0);
                  v27 = v158;
                }
                else
                {
                  v183 = (char *)v28 + 320;
                }
                v187 = *(_DWORD *)(*((_QWORD *)v27 + 122) + 208LL);
                v188 = *(_DWORD *)(*((_QWORD *)v27 + 122) + 108LL) & 1;
                if ( (*(_DWORD *)(*((_QWORD *)v27 + 122) + 340LL) & 0x1E000) != 0 )
                {
                  EXFORMOBJ::vInit((EXFORMOBJ *)&v186, (struct XDCOBJ *)&v158, 0x204u, 0);
                  v31 = v186;
                }
                else
                {
                  v31 = (DC *)((char *)v27 + 320);
                  v186 = v31;
                }
                if ( (*((_DWORD *)v183 + 8) & 1) == 0 || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v183, v31) )
                {
                  v103 = GreStretchBltInternal(v182, a2, v11, v157, v170, a7, a8, a4, v157, v19, a10, 0);
                  goto LABEL_148;
                }
                v33 = v157;
                v34 = a7 + a4;
                v217.m128i_i64[0] = __PAIR64__(a8, a7);
                v35 = a8 + v157;
                v217.m128i_i32[2] = a7 + a4;
                v217.m128i_i32[3] = a8 + v157;
                if ( (*((_BYTE *)v186 + 32) & 0x43) != 0x43 )
                {
                  bCvtPts1(v186, &v217, 2LL);
                  v35 = v217.m128i_i32[3];
                  v34 = v217.m128i_i32[2];
                  v14 = v217.m128i_i32[1];
                  v13 = v217.m128i_i32[0];
                }
                if ( v188 )
                {
                  ++v13;
                  ++v34;
                  v217.m128i_i32[0] = v13;
                  v217.m128i_i32[2] = v34;
                }
                if ( v13 > v34 )
                {
                  v217.m128i_i32[0] = v34;
                  v217.m128i_i32[2] = v13;
                }
                if ( v14 > v35 )
                {
                  v217.m128i_i32[1] = v35;
                  v217.m128i_i32[3] = v14;
                }
                v36 = a2 + a4;
                v37 = v33 + v11;
                v216.m128i_i64[0] = __PAIR64__(v11, a2);
                v216.m128i_i32[2] = a2 + a4;
                v216.m128i_i32[3] = v33 + v11;
                if ( (v183[32] & 0x43) != 0x43 )
                {
                  bCvtPts1(v183, &v216, 2LL);
                  v37 = v216.m128i_i32[3];
                  v36 = v216.m128i_i32[2];
                  v11 = v216.m128i_i32[1];
                  a2 = v216.m128i_i32[0];
                }
                if ( v185 )
                {
                  ++a2;
                  ++v36;
                  v216.m128i_i32[0] = a2;
                  v216.m128i_i32[2] = v36;
                }
                if ( a2 > v36 )
                {
                  v138 = a2;
                  v216.m128i_i32[0] = v36;
                  a2 = v36;
                  v216.m128i_i32[2] = v138;
                  v36 = v138;
                }
                if ( v11 > v37 )
                {
                  v139 = v11;
                  v216.m128i_i32[1] = v37;
                  v11 = v37;
                  v216.m128i_i32[3] = v139;
                  v37 = v139;
                }
                if ( a2 == v36 || v11 == v37 )
                {
                  v103 = 1;
                  goto LABEL_148;
                }
                v38 = v155;
                v39 = *((_DWORD *)v155 + 9);
                if ( (v39 & 0xE0) != 0 )
                {
                  if ( (v39 & 0x20) != 0 )
                  {
                    ERECTL::operator|=((_DWORD *)v155 + 266, &v216);
                    v38 = v155;
                  }
                  if ( (*((_DWORD *)v38 + 9) & 0x80u) != 0 )
                    ERECTL::operator|=((_DWORD *)v38 + 274, &v216);
                }
                v205 = 256;
                v197 = 0LL;
                v198 = 0;
                v199 = 0;
                v204 = 0LL;
                v207 = 0LL;
                memset(v195, 0, sizeof(v195));
                v196 = 0LL;
                v202 = 0;
                v200 = 0LL;
                v201 = 0LL;
                v209 = 0LL;
                v212 = 0LL;
                v210 = 0LL;
                v211 = 0LL;
                v214 = 0LL;
                v213 = 0LL;
                v203 = 0LL;
                v206 = 0LL;
                v208 = 256;
                if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                      (DEVLOCKBLTOBJ *)v195,
                                      (struct XDCOBJ *)&v155,
                                      (struct XDCOBJ *)&v158,
                                      v32) )
                {
                  v151 = XDCOBJ::bFullScreen((XDCOBJ *)&v158);
                  v103 = XDCOBJ::bFullScreen((XDCOBJ *)&v155) | v151;
                  goto LABEL_147;
                }
                v42 = (__int64)v155;
                v43 = *((_QWORD *)v155 + 62);
                if ( !v43 )
                  goto LABEL_215;
                v44 = *(_QWORD *)(v43 + 128);
                v45 = *((_QWORD *)v155 + 11);
                v46 = (a9 & 0x5FFFFFFFu) >> 16;
                v171 = (v46 << 8) | v46;
                if ( ((v46 ^ (unsigned __int8)(16 * v46)) & 0xF0) != 0 )
                {
                  v130 = *((_QWORD *)v155 + 122);
                  v131 = (char *)v155 + 1184;
                  v170 = (HDC)((char *)v155 + 1184);
                  if ( (*(_DWORD *)(v130 + 152) & 0x1000) != 0 )
                  {
                    GreDCSelectBrush(v155, *(_QWORD *)(v130 + 160));
                    v42 = (__int64)v155;
                  }
                  v40 = *(_QWORD *)(v42 + 976);
                  v132 = *(_DWORD *)(v40 + 152);
                  if ( (v132 & 1) != 0 || (*(_DWORD *)(v42 + 316) & 1) != 0 )
                  {
                    *(_DWORD *)(v40 + 152) = v132 & 0xFFFFFFFE;
                    *((_DWORD *)v155 + 79) &= ~1u;
                    EBRUSHOBJ::vInitBrush(v131, v155, *((_QWORD *)v155 + 17), v45, v44, v43, 1);
                    v42 = (__int64)v155;
                  }
                }
                else
                {
                  v170 = 0LL;
                }
                v47 = (_DWORD *)(v42 + 1024);
                v48 = v158;
                if ( (*(_DWORD *)(v42 + 40) & 1) == 0 )
                  v47 = (_DWORD *)(v42 + 1016);
                v49 = *v47 + v216.m128i_i32[0];
                v216.m128i_i32[0] = v49;
                v216.m128i_i32[2] += *v47;
                v41 = (unsigned int)(v47[1] + v216.m128i_i32[1]);
                v216.m128i_i32[1] += v47[1];
                v216.m128i_i32[3] += v47[1];
                v50 = *((_QWORD *)v158 + 62);
                v169 = v50;
                if ( !v50 )
                  goto LABEL_215;
                if ( (a11 & 2) != 0 )
                {
LABEL_65:
                  v53 = *(_QWORD *)(v50 + 128);
                  v54 = (_DWORD *)((char *)v48 + 1024);
                  if ( (*((_DWORD *)v48 + 10) & 1) == 0 )
                    v54 = (_DWORD *)((char *)v48 + 1016);
                  v55 = 0;
                  v40 = 0LL;
                  v56 = v41 - *((_DWORD *)v48 + 2 * (*((_DWORD *)v48 + 10) & 1) + 255) - v217.m128i_i32[1];
                  v57 = v49 - *v54 - v217.m128i_i32[0];
                  v164 = v57;
                  v165 = v56;
                  v58 = *(_QWORD *)(v169 + 48);
                  if ( v58 && v169 == *(_QWORD *)(v58 + 2552) && (*(_DWORD *)(v58 + 40) & 0x20000) != 0 )
                  {
                    v55 = *(_DWORD *)(v58 + 2584);
                    v40 = *(unsigned int *)(v58 + 2588);
                  }
                  if ( v55 + v57 > v49 )
                  {
                    v49 = v55 + v57;
                    v216.m128i_i32[0] = v55 + v57;
                  }
                  if ( v56 + (int)v40 > (int)v41 )
                  {
                    v41 = (unsigned int)(v56 + v40);
                    v216.m128i_i32[1] = v56 + v40;
                  }
                  if ( v55 + v57 + *(_DWORD *)(v169 + 56) < v216.m128i_i32[2] )
                    v216.m128i_i32[2] = v55 + v57 + *(_DWORD *)(v169 + 56);
                  if ( (int)v40 + v56 + *(_DWORD *)(v169 + 60) < v216.m128i_i32[3] )
                    v216.m128i_i32[3] = v40 + v56 + *(_DWORD *)(v169 + 60);
                  if ( v49 < v216.m128i_i32[2] && (int)v41 < v216.m128i_i32[3] )
                  {
                    v40 = 0LL;
                    v180 = 0LL;
                    if ( v49 >= *(_DWORD *)(v42 + 1000)
                      && v216.m128i_i32[2] <= *(_DWORD *)(v42 + 1008)
                      && (int)v41 >= *(_DWORD *)(v42 + 1004)
                      && v216.m128i_i32[3] <= *(_DWORD *)(v42 + 1012) )
                    {
LABEL_83:
                      if ( (*(_DWORD *)(v42 + 36) & 0xE0) != 0 )
                      {
                        v215 = v216;
                        XDCOBJ::vAccumulateTight((XDCOBJ *)&v155, (struct ECLIPOBJ *)v40, &v215);
                        v42 = (__int64)v155;
                        v48 = v158;
                        LODWORD(v41) = v216.m128i_i32[1];
                        v49 = v216.m128i_i32[0];
                      }
                      v41 = (unsigned int)(v41 - v56);
                      v217.m128i_i32[0] = v49 - v57;
                      v217.m128i_i32[1] = v41;
                      v59 = 0LL;
                      v60 = *(_QWORD *)(v42 + 496);
                      v161 = 0LL;
                      if ( *((_QWORD *)v48 + 62) == v60 )
                      {
                        v179 = 0LL;
                        v154 = 1;
LABEL_101:
                        v69 = 0;
                        v70 = v169 + 24;
                        v71 = v216;
                        v72 = 0;
                        v174 = (_QWORD *)(v169 + 24);
                        v189 = v216;
                        v194 = v217;
                        v219 = v216;
                        v220 = v217;
                        v176 = 0LL;
                        v73 = SURFOBJ_TO_SURFACE_NOT_NULL(v43 + 24);
                        v74 = 0;
                        v75 = 0;
                        if ( *(int *)(v73 + 112) < 0 )
                        {
                          v133 = *(_DWORD **)(v43 + 48);
                          if ( v133 )
                          {
                            if ( (v133[10] & 0x20000) != 0 )
                            {
                              v69 = v133[646];
                              v74 = v69;
                              v72 = v133[647];
                              v75 = v72;
                              v176 = __PAIR64__(v72, v69);
                            }
                          }
                        }
                        v76 = v74 + *(_DWORD *)(v43 + 56);
                        v77 = v75 + *(_DWORD *)(v43 + 60);
                        v177 = v76;
                        v178 = v77;
                        v166 = 0LL;
                        v78 = SURFOBJ_TO_SURFACE_NOT_NULL(v70);
                        v79 = 0;
                        v80 = 0;
                        if ( *(int *)(v78 + 112) < 0
                          && (v143 = *(_DWORD **)(v70 + 24)) != 0LL
                          && (v143[10] & 0x20000) != 0 )
                        {
                          v79 = v143[646];
                          v81 = v143[647];
                          v80 = v81;
                          v166 = __PAIR64__(v81, v79);
                        }
                        else
                        {
                          v81 = HIDWORD(v166);
                        }
                        v41 = (__int64)v155;
                        v82 = v79 + *(_DWORD *)(v70 + 32);
                        v83 = *((_DWORD *)v155 + 130);
                        v168 = v80 + *(_DWORD *)(v70 + 36);
                        v167 = v82;
                        v165 = v83 & 1;
                        v164 = v83;
                        if ( (v83 & 1) != 0 && (v83 & 2) == 0 )
                        {
                          v144 = 1.0 / *((float *)v155 + 132);
                          v181[0] = 1.0 / *((float *)v155 + 131);
                          v181[1] = v144;
                          ERECTL::vScale((ERECTL *)&v176, (const struct POINTFL *)v181);
                          ERECTL::vScale((ERECTL *)&v219, (const struct POINTFL *)v181);
                          v41 = (__int64)v155;
                          v82 = v167;
                          v81 = HIDWORD(v166);
                          v77 = v178;
                          v76 = v177;
                          v72 = HIDWORD(v176);
                          v69 = v176;
                          v71 = v219;
                        }
                        v84 = v158;
                        v85 = *((_DWORD *)v158 + 130);
                        v173 = v85;
                        v163 = v85 & 1;
                        if ( (v85 & 1) != 0 && (v85 & 2) == 0 )
                        {
                          v145 = 1.0 / *((float *)v158 + 132);
                          *(float *)&i = 1.0 / *((float *)v158 + 131);
                          *((float *)&i + 1) = v145;
                          ERECTL::vScale((ERECTL *)&v166, (const struct POINTFL *)&i);
                          ERECTL::vScale((ERECTL *)&v220, (const struct POINTFL *)&i);
                          v41 = (__int64)v155;
                          v82 = v167;
                          v81 = HIDWORD(v166);
                        }
                        v86 = _mm_cvtsi128_si32(v71);
                        v87 = _mm_cvtsi128_si32(_mm_srli_si128(v71, 4));
                        v88 = v220.m128i_i32[0] - v86;
                        v218 = v71;
                        v89 = v220.m128i_i32[1] - v87;
                        if ( v69 <= v86 )
                          v69 = v218.m128i_i32[0];
                        if ( v72 <= v87 )
                          v72 = v218.m128i_i32[1];
                        if ( v76 >= v219.m128i_i32[2] )
                          v76 = v218.m128i_i32[2];
                        if ( v77 >= v219.m128i_i32[3] )
                          v77 = v218.m128i_i32[3];
                        if ( v76 < v69 )
                        {
                          v69 = v76;
                        }
                        else if ( v77 < v72 )
                        {
                          v72 = v77;
                        }
                        v90 = v88 + v69;
                        v91 = v88 + v76;
                        v92 = v89 + v72;
                        v93 = v89 + v77;
                        v218.m128i_i32[0] = v90;
                        v218.m128i_i32[2] = v88 + v76;
                        v218.m128i_i32[1] = v89 + v72;
                        v218.m128i_i32[3] = v93;
                        if ( (int)v166 > v90 )
                        {
                          v90 = v166;
                          v218.m128i_i32[0] = v166;
                        }
                        if ( v81 > v92 )
                        {
                          v92 = v81;
                          v218.m128i_i32[1] = v81;
                        }
                        if ( v82 < v91 )
                        {
                          v91 = v82;
                          v218.m128i_i32[2] = v82;
                        }
                        if ( v168 < v93 )
                        {
                          v93 = v168;
                          v218.m128i_i32[3] = v168;
                        }
                        if ( v91 < v90 )
                        {
                          v90 = v91;
                          v218.m128i_i32[0] = v91;
                        }
                        else if ( v93 < v92 )
                        {
                          v92 = v93;
                          v218.m128i_i32[1] = v93;
                        }
                        v94 = v218;
                        v218.m128i_i32[0] = v90 - v88;
                        v95 = v92 - v89;
                        v218.m128i_i32[2] = v91 - v88;
                        v96 = v93 - v89;
                        v218.m128i_i32[1] = v95;
                        v218.m128i_i32[3] = v96;
                        v97 = v218;
                        v219 = v218;
                        v220 = v94;
                        if ( v90 - v88 >= v91 - v88 || v95 >= v96 )
                        {
                          v98 = 0;
                        }
                        else
                        {
                          if ( v165 && (v164 & 2) == 0 )
                          {
                            v193 = *(_QWORD *)(v41 + 524);
                            ERECTL::vScale((ERECTL *)&v219, (const struct POINTFL *)&v193);
                            v97 = v219;
                          }
                          if ( v163 && (v173 & 2) == 0 )
                          {
                            v182 = *(HDC *)((char *)v84 + 524);
                            ERECTL::vScale((ERECTL *)&v220, (const struct POINTFL *)&v182);
                            v94 = v220;
                          }
                          v217 = v94;
                          v98 = 1;
                          v216 = v97;
                          ++*(_DWORD *)(v43 + 92);
                          v84 = v158;
                          v41 = (__int64)v155;
                        }
                        v40 = *(_QWORD *)(v41 + 48);
                        if ( v40 == *((_QWORD *)v84 + 6)
                          || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v155) && *(_QWORD *)(v40 + 3520) == v42 )
                        {
                          v99 = v174;
                        }
                        else
                        {
                          v99 = v174;
                          if ( *(_WORD *)(v169 + 100) || *v174 || (*(_DWORD *)(v40 + 40) & 0x80u) != 0 )
                          {
                            if ( v98 )
                            {
                              v146 = v195;
                              if ( (*(_DWORD *)(*(_QWORD *)(v43 + 48) + 40LL) & 0x80u) == 0 )
                                v146 = 0LL;
                              v103 = SimBitBlt(
                                       v43 + 24,
                                       v174,
                                       0LL,
                                       v180,
                                       v179,
                                       &v216,
                                       &v217,
                                       0LL,
                                       v170,
                                       v41 + 1176,
                                       v171,
                                       v146);
                              goto LABEL_143;
                            }
                            goto LABEL_142;
                          }
                        }
                        v42 = v171;
                        if ( v171 == 52428 )
                        {
                          v100 = *(_QWORD *)(v43 + 48);
                          v101 = a11 & 1;
                          if ( v101 )
                          {
                            EtwWindowRendering(
                              *((_QWORD *)v155 + 58),
                              *((_QWORD *)v155 + 59),
                              **((_QWORD **)v155 + 62),
                              v189.m128i_u32[0],
                              v189.m128i_i32[1],
                              v189.m128i_i32[2],
                              v189.m128i_i32[3],
                              *((_QWORD *)v84 + 58),
                              *((_QWORD *)v84 + 59),
                              **((_QWORD **)v84 + 62),
                              v194.m128i_i32[0],
                              v194.m128i_i32[1],
                              v194.m128i_i32[0] + abs32(v189.m128i_i32[2] - v189.m128i_i32[3]),
                              v194.m128i_i32[1] + abs32(v189.m128i_i32[3] - v189.m128i_i32[1]));
                            *(_WORD *)(v43 + 102) |= 0x40u;
                            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v147, v148);
                            if ( ThreadWin32Thread )
                              *(_DWORD *)(ThreadWin32Thread + 328) &= ~1u;
                            GreClientRgnUpdated(0);
                            GreClientRgnUpdatedStable();
                            v99 = v174;
                            v59 = v161;
                          }
                          if ( v98 )
                          {
                            if ( (*(_DWORD *)(v43 + 112) & 0x400) != 0 )
                              v102 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, XLATEOBJ *, __m128i *, __m128i *))(v100 + 2840))(
                                       v43 + 24,
                                       v99,
                                       v180,
                                       v179,
                                       &v216,
                                       &v217);
                            else
                              v102 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, XLATEOBJ *, __m128i *, __m128i *))EngCopyBits)(
                                       v43 + 24,
                                       v99,
                                       v180,
                                       v179,
                                       &v216,
                                       &v217);
                            v154 = v102;
                          }
                          if ( v101 )
                          {
                            *(_WORD *)(v43 + 102) &= ~0x40u;
                            v150 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v42);
                            v59 = v161;
                            v103 = v154;
                            if ( v150 )
                              *(_DWORD *)(v150 + 328) |= 1u;
                            goto LABEL_143;
                          }
                        }
                        else if ( v98 )
                        {
                          v126 = SURFACE::pfnBitBlt((SURFACE *)v43);
                          v103 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, XLATEOBJ *, __m128i *, __m128i *, _QWORD, HDC, __int64, int))v126)(
                                   v43 + 24,
                                   v129,
                                   0LL,
                                   v180,
                                   v179,
                                   &v216,
                                   &v217,
                                   0LL,
                                   v170,
                                   v127,
                                   v128);
LABEL_143:
                          if ( v59 )
                          {
                            cEntries = (int)v59[1].cEntries;
                            if ( (int)cEntries >= 0 )
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                            }
                            else if ( (_DWORD)cEntries == -1 )
                            {
                              FreeThreadBufferWithTag(v59);
                            }
                          }
                          goto LABEL_147;
                        }
LABEL_142:
                        v103 = v154;
                        goto LABEL_143;
                      }
                      v61 = *((_QWORD *)v48 + 11);
                      v157 = a10;
                      if ( a10 == -1 )
                        v157 = *(_DWORD *)(*((_QWORD *)v48 + 122) + 180LL);
                      v62 = *(_QWORD *)(v42 + 976);
                      v63 = *(_DWORD *)(v62 + 176);
                      v160 = *(_DWORD *)(v62 + 184);
                      v163 = *(_DWORD *)(v42 + 120);
                      v153 = v63;
                      if ( !v53 )
                      {
                        if ( !v44 )
                          goto LABEL_97;
                        if ( (*(_DWORD *)(v44 + 24) & 0x800) != 0 )
                        {
                          v140 = *(_QWORD *)(v45 + 80);
                          if ( !v140 || v140 == *(_QWORD *)(v45 + 72) )
                            goto LABEL_97;
                        }
                      }
                      if ( !v44 && (*(_DWORD *)(v53 + 24) & 0x800) != 0 )
                      {
                        v141 = *(_QWORD *)(v45 + 80);
                        if ( !v141 || v141 == *(_QWORD *)(v45 + 72) )
                          goto LABEL_97;
                      }
                      if ( v53 && v44 )
                      {
                        v64 = *(_QWORD *)(v53 + 120);
                        if ( v64 == v53 )
                          v40 = *(unsigned int *)(v53 + 32);
                        else
                          v40 = *(unsigned int *)(v64 + 32);
                        v65 = *(_QWORD *)(v44 + 120);
                        if ( v65 == v44 )
                          v66 = *(_DWORD *)(v44 + 32);
                        else
                          v66 = *(_DWORD *)(v65 + 32);
                        if ( (_DWORD)v40 == v66 )
                        {
LABEL_97:
                          v59 = xloIdent;
                          v67 = 1;
                          v161 = xloIdent;
                          v154 = 1;
                          goto LABEL_98;
                        }
                        v110 = *(_DWORD *)(v53 + 56);
                        v190 = v45;
                        v191 = v61;
                        v192 = ghsemPalette;
                        GreAcquireSemaphore(ghsemPalette);
                        v111 = 0;
                        v112 = *(_QWORD *)(v53 + 120);
                        for ( i = v112; ; v112 = i )
                        {
                          if ( v112 == v53 )
                            v113 = *(_DWORD *)(v53 + 32);
                          else
                            v113 = *(_DWORD *)(v112 + 32);
                          if ( *((_DWORD *)&xlateTable + 8 * v110 + 4) == v113 )
                          {
                            v116 = *(_QWORD *)(v44 + 120);
                            v117 = v116 == v44 ? *(_DWORD *)(v44 + 32) : *(_DWORD *)(v116 + 32);
                            if ( *((_DWORD *)&xlateTable + 8 * v110 + 5) == v117 )
                            {
                              v118 = XEPALOBJ::ulTime((XEPALOBJ *)&v190);
                              if ( *(_DWORD *)(v119 + v120 + 28) == v118 )
                              {
                                v121 = *(XLATEOBJ **)(v119 + v120 + 8);
                                v161 = v121;
                                flXlate = v121[3].flXlate;
                                if ( (flXlate & 0x6000) == 0 )
                                {
                                  if ( (v121->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                                    || (v121->flXlate & 4) != 0
                                    && v157 == v121[1].iUniq
                                    && (v142 = XEPALOBJ::ulTime((XEPALOBJ *)&v191), *(_DWORD *)(v119 + v120 + 24) == v142)
                                    || (flXlate & 0x100) != 0
                                    && v160 == v121[1].flXlate
                                    && v153 == *(_DWORD *)&v121[1].iSrcType )
                                  {
                                    _InterlockedIncrement((volatile signed __int32 *)(v119 + v120));
                                    *(_DWORD *)(v53 + 56) = v110;
                                    SEMOBJ::vUnlock((SEMOBJ *)&v192);
                                    v59 = v161;
                                    v67 = 1;
                                    v42 = (__int64)v155;
                                    v154 = 1;
                                    goto LABEL_98;
                                  }
                                }
                              }
                            }
                          }
                          ++v111;
                          v110 = ((_BYTE)v110 + 1) & 7;
                          if ( v111 >= 8 )
                            break;
                        }
                        if ( ghsemPalette )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                          GreReleaseSemaphoreInternal(ghsemPalette);
                        }
                      }
                      v152[0] = v160;
                      XlateObject = (XLATEOBJ *)CreateXlateObject(
                                                  0LL,
                                                  v163,
                                                  v53,
                                                  v44,
                                                  v61,
                                                  v45,
                                                  *(_QWORD *)v152,
                                                  v153,
                                                  v157,
                                                  0);
                      v161 = XlateObject;
                      v59 = XlateObject;
                      if ( XlateObject )
                      {
                        if ( v53 && v44 && (XlateObject[3].flXlate & 0x200) == 0 )
                          EXLATEOBJ::vAddToCache(&v161, v53, v44, v61, v45);
                        v67 = 1;
                        v154 = 1;
                      }
                      else
                      {
                        v67 = 0;
                        v154 = 0;
                      }
                      v42 = (__int64)v155;
LABEL_98:
                      v68 = *(_DWORD *)(v42 + 36);
                      v179 = v59;
                      if ( (v68 & 1) == 0 )
                      {
                        v217.m128i_i32[2] = v216.m128i_i32[2] - v164;
                        v217.m128i_i32[3] = v216.m128i_i32[3] - v165;
                      }
                      if ( !v67 )
                        goto LABEL_142;
                      goto LABEL_101;
                    }
                    v123 = v42 + 1752;
                    v180 = v42 + 1752;
                    v124 = XDCOBJ::prgnEffRao(&v155);
                    XCLIPOBJ::vSetup((XCLIPOBJ *)v123, v124, (struct ERECTL *)&v216, 2);
                    v216 = *(__m128i *)(v123 + 4);
                    if ( !ERECTL::bEmpty((ERECTL *)&v216) )
                    {
                      v42 = (__int64)v155;
                      v48 = v158;
                      LODWORD(v41) = v216.m128i_i32[1];
                      v49 = v216.m128i_i32[0];
                      goto LABEL_83;
                    }
                  }
LABEL_215:
                  v103 = 1;
LABEL_147:
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v195, v40, (SURFACE **)v42, v41);
LABEL_148:
                  if ( v172 )
                    DC::dwSetLayout(v155, -1, v162);
                  if ( (_DWORD)v159 && (*((_DWORD *)v158 + 11) & 2) != 0 )
                  {
                    if ( !HIDWORD(v159) )
                    {
                      v105 = XDCOBJ::GetUserAttr((XDCOBJ *)&v158);
                      if ( v105 )
                        DC::RestoreAttributes(v158, v105);
                    }
                    *((_DWORD *)v158 + 11) &= ~2u;
                    LODWORD(v159) = 0;
                  }
                  v160 = 0;
                  v106 = *(_QWORD *)v158;
                  HmgDecrementExclusiveReferenceCountEx(v158, HIDWORD(v159), &v160);
                  if ( v160 )
                    bDeleteDCInternalEx(v106, 0LL);
                  goto LABEL_158;
                }
                if ( *(_DWORD *)(v50 + 656) )
                {
                  if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v50 + 656) )
                    goto LABEL_257;
                  v42 = (__int64)v155;
                  v48 = v158;
                  v41 = v216.m128i_u32[1];
                  v49 = v216.m128i_i32[0];
                }
                v51 = *(_DWORD *)(v50 + 112);
                if ( (v51 & 0x800) != 0 )
                {
                  v125 = UserSurfaceAccessCheck(*(_QWORD *)(v50 + 648));
                }
                else
                {
                  if ( (v51 & 0x10000000) == 0 )
                    goto LABEL_61;
                  v125 = UserScreenAccessCheck(512LL, v40);
                }
                if ( !v125 )
                  goto LABEL_257;
                v42 = (__int64)v155;
                v48 = v158;
                v41 = v216.m128i_u32[1];
                v49 = v216.m128i_i32[0];
LABEL_61:
                if ( ((*(_DWORD *)(v43 + 116) & 8) != 0 || *(_QWORD *)(v43 + 224))
                  && (*(_WORD *)(v43 + 102) & 0x200) != 0 )
                {
                  goto LABEL_257;
                }
                v52 = *(_DWORD *)(v43 + 112);
                if ( (v52 & 0x800) != 0 )
                {
                  v115 = UserSurfaceAccessCheck(*(_QWORD *)(v43 + 648));
                }
                else
                {
                  if ( (v52 & 0x10000000) == 0 )
                    goto LABEL_65;
                  v115 = UserScreenAccessCheck(512LL, v40);
                }
                if ( v115 )
                {
                  v42 = (__int64)v155;
                  v48 = v158;
                  v41 = v216.m128i_u32[1];
                  v49 = v216.m128i_i32[0];
                  goto LABEL_65;
                }
LABEL_257:
                EngSetLastError(6u);
                v103 = 0;
                goto LABEL_147;
              }
              v103 = 0;
LABEL_158:
              if ( (_DWORD)v156 && (*((_DWORD *)v155 + 11) & 2) != 0 )
              {
                if ( !HIDWORD(v156) )
                {
                  v107 = XDCOBJ::GetUserAttr((XDCOBJ *)&v155);
                  if ( v107 )
                    DC::RestoreAttributes(v155, v107);
                }
                *((_DWORD *)v155 + 11) &= ~2u;
                LODWORD(v156) = 0;
              }
              v157 = 0;
              v108 = *(_QWORD *)v155;
              HmgDecrementExclusiveReferenceCountEx(v155, HIDWORD(v156), &v157);
              if ( v157 )
                bDeleteDCInternalEx(v108, 0LL);
              return v103;
            }
            DC::vMarkTransformDirty(v24);
          }
          else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
          {
            PsGetWin32KFilterSet();
          }
          v24 = v158;
          goto LABEL_22;
        }
LABEL_231:
        if ( v20 )
          XDCOBJ::vUnlockFast((XDCOBJ *)&v155);
        return 0;
      }
      DC::vMarkTransformDirty(v20);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v20 = v155;
    goto LABEL_10;
  }
  return GreStretchBltInternal(a1, a2, a3, a5, a6, a7, a8, a4, a5, a9 & 0xDFFFFFFF, a10, v16);
}
