/*
 * XREFs of NtGdiBitBltInternal @ 0x1C006C930
 * Callers:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C000B9D0 (NtUserBitBltSysBmp.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     _DrawIconEx @ 0x1C002CFB4 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002FB20 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiBitBlt @ 0x1C006EF80 (NtGdiBitBlt.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C008D1A0 (-UT_InvertCaret@@YAXXZ.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00C65E0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateSpriteArea @ 0x1C00ECAF0 (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00EDBC0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     RecolorDeskPattern @ 0x1C01413C0 (RecolorDeskPattern.c)
 *     xxxClientExtTextOutW @ 0x1C0157790 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C0157E00 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C015CA8C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 *     StopFade @ 0x1C01E9690 (StopFade.c)
 *     xxxPrintWindow @ 0x1C01E996C (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C02090E0 (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021F3C4 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F828 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0222918 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C023B694 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023C0B4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023F7A4 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243F48 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     BltColor @ 0x1C0248E1C (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C024A048 (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 *     DxgkEngBltViaGDI @ 0x1C0274200 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006B1C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     bCvtPts1 @ 0x1C0072710 (bCvtPts1.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0073078 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C00C32BC (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C00C6368 (GreClientRgnUpdated.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00EF544 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00EF6D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C010A7E0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026C624 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0275680 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C0275800 (SimBitBlt.c)
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
  __int64 v149; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v151; // rax
  int v152; // esi
  int v153[2]; // [rsp+30h] [rbp-D0h]
  int v154; // [rsp+70h] [rbp-90h]
  int v155; // [rsp+70h] [rbp-90h]
  DC *v156; // [rsp+78h] [rbp-88h] BYREF
  __int64 v157; // [rsp+80h] [rbp-80h]
  int v158; // [rsp+88h] [rbp-78h] BYREF
  DC *v159; // [rsp+90h] [rbp-70h] BYREF
  __int64 v160; // [rsp+98h] [rbp-68h]
  int v161; // [rsp+A0h] [rbp-60h] BYREF
  XLATEOBJ *v162; // [rsp+A8h] [rbp-58h] BYREF
  int v163; // [rsp+B0h] [rbp-50h]
  int v164; // [rsp+B4h] [rbp-4Ch]
  int v165; // [rsp+B8h] [rbp-48h]
  int v166; // [rsp+BCh] [rbp-44h]
  unsigned __int64 v167; // [rsp+C0h] [rbp-40h] BYREF
  __int32 v168; // [rsp+C8h] [rbp-38h]
  __int32 v169; // [rsp+CCh] [rbp-34h]
  __int64 v170; // [rsp+D0h] [rbp-30h]
  HDC v171; // [rsp+D8h] [rbp-28h]
  unsigned int v172; // [rsp+E0h] [rbp-20h]
  unsigned int v173; // [rsp+E4h] [rbp-1Ch]
  int v174; // [rsp+E8h] [rbp-18h]
  _QWORD *v175; // [rsp+F0h] [rbp-10h]
  __int64 i; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v177; // [rsp+100h] [rbp+0h] BYREF
  int v178; // [rsp+108h] [rbp+8h]
  int v179; // [rsp+10Ch] [rbp+Ch]
  XLATEOBJ *v180; // [rsp+110h] [rbp+10h]
  __int64 v181; // [rsp+118h] [rbp+18h]
  float v182[2]; // [rsp+120h] [rbp+20h] BYREF
  HDC v183; // [rsp+128h] [rbp+28h] BYREF
  char *v184; // [rsp+130h] [rbp+30h] BYREF
  int v185; // [rsp+138h] [rbp+38h]
  int v186; // [rsp+13Ch] [rbp+3Ch]
  struct MATRIX *v187; // [rsp+140h] [rbp+40h] BYREF
  int v188; // [rsp+148h] [rbp+48h]
  int v189; // [rsp+14Ch] [rbp+4Ch]
  __m128i v190; // [rsp+150h] [rbp+50h]
  __int64 v191; // [rsp+160h] [rbp+60h] BYREF
  __int64 v192; // [rsp+168h] [rbp+68h] BYREF
  __int64 v193; // [rsp+170h] [rbp+70h] BYREF
  __int64 v194; // [rsp+178h] [rbp+78h] BYREF
  __m128i v195; // [rsp+180h] [rbp+80h]
  _OWORD v196[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v197; // [rsp+1B0h] [rbp+B0h]
  __int64 v198; // [rsp+1B8h] [rbp+B8h]
  char v199; // [rsp+1C0h] [rbp+C0h]
  int v200; // [rsp+1C4h] [rbp+C4h]
  __int64 v201; // [rsp+1C8h] [rbp+C8h]
  __int64 v202; // [rsp+1D0h] [rbp+D0h]
  int v203; // [rsp+1D8h] [rbp+D8h]
  __int64 v204; // [rsp+1E0h] [rbp+E0h]
  __int64 v205; // [rsp+1E8h] [rbp+E8h]
  __int16 v206; // [rsp+1F0h] [rbp+F0h]
  __int64 v207; // [rsp+1F8h] [rbp+F8h]
  __int64 v208; // [rsp+200h] [rbp+100h]
  __int16 v209; // [rsp+208h] [rbp+108h]
  __int64 v210; // [rsp+210h] [rbp+110h]
  __int64 v211; // [rsp+218h] [rbp+118h]
  __int64 v212; // [rsp+220h] [rbp+120h]
  __int64 v213; // [rsp+228h] [rbp+128h]
  __int128 v214; // [rsp+230h] [rbp+130h]
  __int64 v215; // [rsp+240h] [rbp+140h]
  __m128i v216; // [rsp+250h] [rbp+150h] BYREF
  __m128i v217; // [rsp+260h] [rbp+160h] BYREF
  __m128i v218; // [rsp+270h] [rbp+170h] BYREF
  __m128i v219; // [rsp+280h] [rbp+180h]
  __m128i v220; // [rsp+290h] [rbp+190h] BYREF
  __m128i v221; // [rsp+2A0h] [rbp+1A0h] BYREF

  v11 = a3;
  v12 = a5;
  v13 = a7;
  v14 = a8;
  v183 = a1;
  v16 = 0;
  v158 = a5;
  if ( (a9 & 0x20000000) != 0 )
    v16 = 2;
  v18 = a6;
  v171 = a6;
  if ( (a9 & 0x40000000) == 0 )
  {
    v163 = a9 & 0xDFFFFFFF;
    LOBYTE(v18) = 1;
    v19 = a9 & 0x5FFFFFFF;
    v157 = 0LL;
    v156 = (DC *)HmgLockEx(a1, v18, 0LL);
    v20 = v156;
    if ( v156 )
    {
      if ( (*((_DWORD *)v156 + 11) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v156);
        if ( UserAttr && !DC::SaveAttributes(v156, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v156 + 3);
          v20 = 0LL;
          v156 = 0LL;
          goto LABEL_231;
        }
        *((_DWORD *)v156 + 11) |= 2u;
        v20 = v156;
        LODWORD(v157) = 1;
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
            bSpDwmValidateSurface((struct XDCOBJ *)&v156, a2, v11, a4, a5);
          v160 = 0LL;
          LOBYTE(v22) = 1;
          v23 = HmgLockEx(v171, v22, 0LL);
          v159 = (DC *)v23;
          v24 = (DC *)v23;
          if ( v23 )
          {
            v25 = HIDWORD(v160);
            if ( HIDWORD(v160) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v23 + 48) + 40LL) & 0x8000) == 0
                || (v134 = *(_DWORD *)(v23 + 2096),
                    CurrentProcessId = (unsigned int)PsGetCurrentProcessId(),
                    v24 = v159,
                    v134 != (CurrentProcessId & 0xFFFFFFFC)) )
              {
                _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
                v159 = 0LL;
                v103 = 0;
                goto LABEL_158;
              }
              v25 = HIDWORD(v160);
              v12 = v158;
            }
            if ( (*((_DWORD *)v24 + 11) & 2) == 0 )
            {
              if ( !v25 )
              {
                v26 = XDCOBJ::GetUserAttr((XDCOBJ *)&v159);
                if ( v26 && !DC::SaveAttributes(v159, v26) )
                {
                  _InterlockedDecrement((volatile signed __int32 *)v159 + 3);
                  v159 = 0LL;
                  v103 = 0;
                  goto LABEL_158;
                }
                v24 = v159;
              }
              *((_DWORD *)v24 + 11) |= 2u;
              v24 = v159;
              LODWORD(v160) = 1;
            }
            if ( (*((_DWORD *)v24 + 130) & 4) == 0 )
            {
LABEL_22:
              if ( v24 )
              {
                bSpDwmValidateSurface((struct XDCOBJ *)&v159, a7, a8, a4, v12);
                v27 = v159;
                v28 = v156;
                v29 = *((_QWORD *)v156 + 122);
                v30 = *(_DWORD *)(v29 + 108);
                if ( (((unsigned __int8)v30 ^ *(_BYTE *)(*((_QWORD *)v159 + 122) + 108LL)) & 7) != 0
                  && (v163 < 0 && (v30 & 1) != 0 || (v30 & 9) == 9) )
                {
                  v136 = *(_QWORD *)(v29 + 308);
                  v137 = DC::dwSetLayout(v156, -1, 0);
                  v28 = v156;
                  v27 = v159;
                  a2 = v136 - a2 - a4;
                  v163 = v137;
                  v173 = 0x80000000;
                }
                else
                {
                  v173 = 0;
                  v163 = v174;
                }
                v185 = *(_DWORD *)(*((_QWORD *)v28 + 122) + 208LL);
                v186 = *(_DWORD *)(*((_QWORD *)v28 + 122) + 108LL) & 1;
                if ( (*(_DWORD *)(*((_QWORD *)v28 + 122) + 340LL) & 0x1E000) != 0 )
                {
                  EXFORMOBJ::vInit((EXFORMOBJ *)&v184, (struct XDCOBJ *)&v156, 0x204u, 0);
                  v27 = v159;
                }
                else
                {
                  v184 = (char *)v28 + 320;
                }
                v188 = *(_DWORD *)(*((_QWORD *)v27 + 122) + 208LL);
                v189 = *(_DWORD *)(*((_QWORD *)v27 + 122) + 108LL) & 1;
                if ( (*(_DWORD *)(*((_QWORD *)v27 + 122) + 340LL) & 0x1E000) != 0 )
                {
                  EXFORMOBJ::vInit((EXFORMOBJ *)&v187, (struct XDCOBJ *)&v159, 0x204u, 0);
                  v31 = v187;
                }
                else
                {
                  v31 = (DC *)((char *)v27 + 320);
                  v187 = v31;
                }
                if ( (*((_DWORD *)v184 + 8) & 1) == 0 || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v184, v31) )
                {
                  v103 = GreStretchBltInternal(v183, a2, v11, v158, v171, a7, a8, a4, v158, v19, a10, 0);
                  goto LABEL_148;
                }
                v33 = v158;
                v34 = a7 + a4;
                v218.m128i_i64[0] = __PAIR64__(a8, a7);
                v35 = a8 + v158;
                v218.m128i_i32[2] = a7 + a4;
                v218.m128i_i32[3] = a8 + v158;
                if ( (*((_BYTE *)v187 + 32) & 0x43) != 0x43 )
                {
                  bCvtPts1(v187, &v218, 2LL);
                  v35 = v218.m128i_i32[3];
                  v34 = v218.m128i_i32[2];
                  v14 = v218.m128i_i32[1];
                  v13 = v218.m128i_i32[0];
                }
                if ( v189 )
                {
                  ++v13;
                  ++v34;
                  v218.m128i_i32[0] = v13;
                  v218.m128i_i32[2] = v34;
                }
                if ( v13 > v34 )
                {
                  v218.m128i_i32[0] = v34;
                  v218.m128i_i32[2] = v13;
                }
                if ( v14 > v35 )
                {
                  v218.m128i_i32[1] = v35;
                  v218.m128i_i32[3] = v14;
                }
                v36 = a2 + a4;
                v37 = v33 + v11;
                v217.m128i_i64[0] = __PAIR64__(v11, a2);
                v217.m128i_i32[2] = a2 + a4;
                v217.m128i_i32[3] = v33 + v11;
                if ( (v184[32] & 0x43) != 0x43 )
                {
                  bCvtPts1(v184, &v217, 2LL);
                  v37 = v217.m128i_i32[3];
                  v36 = v217.m128i_i32[2];
                  v11 = v217.m128i_i32[1];
                  a2 = v217.m128i_i32[0];
                }
                if ( v186 )
                {
                  ++a2;
                  ++v36;
                  v217.m128i_i32[0] = a2;
                  v217.m128i_i32[2] = v36;
                }
                if ( a2 > v36 )
                {
                  v138 = a2;
                  v217.m128i_i32[0] = v36;
                  a2 = v36;
                  v217.m128i_i32[2] = v138;
                  v36 = v138;
                }
                if ( v11 > v37 )
                {
                  v139 = v11;
                  v217.m128i_i32[1] = v37;
                  v11 = v37;
                  v217.m128i_i32[3] = v139;
                  v37 = v139;
                }
                if ( a2 == v36 || v11 == v37 )
                {
                  v103 = 1;
                  goto LABEL_148;
                }
                v38 = v156;
                v39 = *((_DWORD *)v156 + 9);
                if ( (v39 & 0xE0) != 0 )
                {
                  if ( (v39 & 0x20) != 0 )
                  {
                    ERECTL::operator|=((char *)v156 + 1064, &v217);
                    v38 = v156;
                  }
                  if ( (*((_DWORD *)v38 + 9) & 0x80u) != 0 )
                    ERECTL::operator|=((char *)v38 + 1096, &v217);
                }
                v206 = 256;
                v198 = 0LL;
                v199 = 0;
                v200 = 0;
                v205 = 0LL;
                v208 = 0LL;
                memset(v196, 0, sizeof(v196));
                v197 = 0LL;
                v203 = 0;
                v201 = 0LL;
                v202 = 0LL;
                v210 = 0LL;
                v213 = 0LL;
                v211 = 0LL;
                v212 = 0LL;
                v215 = 0LL;
                v214 = 0LL;
                v204 = 0LL;
                v207 = 0LL;
                v209 = 256;
                if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                      (DEVLOCKBLTOBJ *)v196,
                                      (struct XDCOBJ *)&v156,
                                      (struct XDCOBJ *)&v159,
                                      v32) )
                {
                  v152 = XDCOBJ::bFullScreen((XDCOBJ *)&v159);
                  v103 = XDCOBJ::bFullScreen((XDCOBJ *)&v156) | v152;
                  goto LABEL_147;
                }
                v42 = (__int64)v156;
                v43 = *((_QWORD *)v156 + 62);
                if ( !v43 )
                  goto LABEL_215;
                v44 = *(_QWORD *)(v43 + 128);
                v45 = *((_QWORD *)v156 + 11);
                v46 = (a9 & 0x5FFFFFFFu) >> 16;
                v172 = (v46 << 8) | v46;
                if ( ((v46 ^ (unsigned __int8)(16 * v46)) & 0xF0) != 0 )
                {
                  v130 = *((_QWORD *)v156 + 122);
                  v131 = (char *)v156 + 1184;
                  v171 = (HDC)((char *)v156 + 1184);
                  if ( (*(_DWORD *)(v130 + 152) & 0x1000) != 0 )
                  {
                    GreDCSelectBrush(v156, *(_QWORD *)(v130 + 160));
                    v42 = (__int64)v156;
                  }
                  v40 = *(_QWORD *)(v42 + 976);
                  v132 = *(_DWORD *)(v40 + 152);
                  if ( (v132 & 1) != 0 || (*(_DWORD *)(v42 + 316) & 1) != 0 )
                  {
                    *(_DWORD *)(v40 + 152) = v132 & 0xFFFFFFFE;
                    *((_DWORD *)v156 + 79) &= ~1u;
                    EBRUSHOBJ::vInitBrush(v131, v156, *((_QWORD *)v156 + 17), v45, v44, v43, 1);
                    v42 = (__int64)v156;
                  }
                }
                else
                {
                  v171 = 0LL;
                }
                v47 = (_DWORD *)(v42 + 1024);
                v48 = v159;
                if ( (*(_DWORD *)(v42 + 40) & 1) == 0 )
                  v47 = (_DWORD *)(v42 + 1016);
                v49 = *v47 + v217.m128i_i32[0];
                v217.m128i_i32[0] = v49;
                v217.m128i_i32[2] += *v47;
                v41 = (unsigned int)(v47[1] + v217.m128i_i32[1]);
                v217.m128i_i32[1] += v47[1];
                v217.m128i_i32[3] += v47[1];
                v50 = *((_QWORD *)v159 + 62);
                v170 = v50;
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
                  v56 = v41 - *((_DWORD *)v48 + 2 * (*((_DWORD *)v48 + 10) & 1) + 255) - v218.m128i_i32[1];
                  v57 = v49 - *v54 - v218.m128i_i32[0];
                  v165 = v57;
                  v166 = v56;
                  v58 = *(_QWORD *)(v170 + 48);
                  if ( v58 && v170 == *(_QWORD *)(v58 + 2552) && (*(_DWORD *)(v58 + 40) & 0x20000) != 0 )
                  {
                    v55 = *(_DWORD *)(v58 + 2584);
                    v40 = *(unsigned int *)(v58 + 2588);
                  }
                  if ( v55 + v57 > v49 )
                  {
                    v49 = v55 + v57;
                    v217.m128i_i32[0] = v55 + v57;
                  }
                  if ( v56 + (int)v40 > (int)v41 )
                  {
                    v41 = (unsigned int)(v56 + v40);
                    v217.m128i_i32[1] = v56 + v40;
                  }
                  if ( v55 + v57 + *(_DWORD *)(v170 + 56) < v217.m128i_i32[2] )
                    v217.m128i_i32[2] = v55 + v57 + *(_DWORD *)(v170 + 56);
                  if ( (int)v40 + v56 + *(_DWORD *)(v170 + 60) < v217.m128i_i32[3] )
                    v217.m128i_i32[3] = v40 + v56 + *(_DWORD *)(v170 + 60);
                  if ( v49 < v217.m128i_i32[2] && (int)v41 < v217.m128i_i32[3] )
                  {
                    v40 = 0LL;
                    v181 = 0LL;
                    if ( v49 >= *(_DWORD *)(v42 + 1000)
                      && v217.m128i_i32[2] <= *(_DWORD *)(v42 + 1008)
                      && (int)v41 >= *(_DWORD *)(v42 + 1004)
                      && v217.m128i_i32[3] <= *(_DWORD *)(v42 + 1012) )
                    {
LABEL_83:
                      if ( (*(_DWORD *)(v42 + 36) & 0xE0) != 0 )
                      {
                        v216 = v217;
                        XDCOBJ::vAccumulateTight((XDCOBJ *)&v156, (struct ECLIPOBJ *)v40, &v216);
                        v42 = (__int64)v156;
                        v48 = v159;
                        LODWORD(v41) = v217.m128i_i32[1];
                        v49 = v217.m128i_i32[0];
                      }
                      v41 = (unsigned int)(v41 - v56);
                      v218.m128i_i32[0] = v49 - v57;
                      v218.m128i_i32[1] = v41;
                      v59 = 0LL;
                      v60 = *(_QWORD *)(v42 + 496);
                      v162 = 0LL;
                      if ( *((_QWORD *)v48 + 62) == v60 )
                      {
                        v180 = 0LL;
                        v155 = 1;
LABEL_101:
                        v69 = 0;
                        v70 = v170 + 24;
                        v71 = v217;
                        v72 = 0;
                        v175 = (_QWORD *)(v170 + 24);
                        v190 = v217;
                        v195 = v218;
                        v220 = v217;
                        v221 = v218;
                        v177 = 0LL;
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
                              v177 = __PAIR64__(v72, v69);
                            }
                          }
                        }
                        v76 = v74 + *(_DWORD *)(v43 + 56);
                        v77 = v75 + *(_DWORD *)(v43 + 60);
                        v178 = v76;
                        v179 = v77;
                        v167 = 0LL;
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
                          v167 = __PAIR64__(v81, v79);
                        }
                        else
                        {
                          v81 = HIDWORD(v167);
                        }
                        v41 = (__int64)v156;
                        v82 = v79 + *(_DWORD *)(v70 + 32);
                        v83 = *((_DWORD *)v156 + 130);
                        v169 = v80 + *(_DWORD *)(v70 + 36);
                        v168 = v82;
                        v166 = v83 & 1;
                        v165 = v83;
                        if ( (v83 & 1) != 0 && (v83 & 2) == 0 )
                        {
                          v144 = 1.0 / *((float *)v156 + 132);
                          v182[0] = 1.0 / *((float *)v156 + 131);
                          v182[1] = v144;
                          ERECTL::vScale((ERECTL *)&v177, (const struct POINTFL *)v182);
                          ERECTL::vScale((ERECTL *)&v220, (const struct POINTFL *)v182);
                          v41 = (__int64)v156;
                          v82 = v168;
                          v81 = HIDWORD(v167);
                          v77 = v179;
                          v76 = v178;
                          v72 = HIDWORD(v177);
                          v69 = v177;
                          v71 = v220;
                        }
                        v84 = v159;
                        v85 = *((_DWORD *)v159 + 130);
                        v174 = v85;
                        v164 = v85 & 1;
                        if ( (v85 & 1) != 0 && (v85 & 2) == 0 )
                        {
                          v145 = 1.0 / *((float *)v159 + 132);
                          *(float *)&i = 1.0 / *((float *)v159 + 131);
                          *((float *)&i + 1) = v145;
                          ERECTL::vScale((ERECTL *)&v167, (const struct POINTFL *)&i);
                          ERECTL::vScale((ERECTL *)&v221, (const struct POINTFL *)&i);
                          v41 = (__int64)v156;
                          v82 = v168;
                          v81 = HIDWORD(v167);
                        }
                        v86 = _mm_cvtsi128_si32(v71);
                        v87 = _mm_cvtsi128_si32(_mm_srli_si128(v71, 4));
                        v88 = v221.m128i_i32[0] - v86;
                        v219 = v71;
                        v89 = v221.m128i_i32[1] - v87;
                        if ( v69 <= v86 )
                          v69 = v219.m128i_i32[0];
                        if ( v72 <= v87 )
                          v72 = v219.m128i_i32[1];
                        if ( v76 >= v220.m128i_i32[2] )
                          v76 = v219.m128i_i32[2];
                        if ( v77 >= v220.m128i_i32[3] )
                          v77 = v219.m128i_i32[3];
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
                        v219.m128i_i32[0] = v90;
                        v219.m128i_i32[2] = v88 + v76;
                        v219.m128i_i32[1] = v89 + v72;
                        v219.m128i_i32[3] = v93;
                        if ( (int)v167 > v90 )
                        {
                          v90 = v167;
                          v219.m128i_i32[0] = v167;
                        }
                        if ( v81 > v92 )
                        {
                          v92 = v81;
                          v219.m128i_i32[1] = v81;
                        }
                        if ( v82 < v91 )
                        {
                          v91 = v82;
                          v219.m128i_i32[2] = v82;
                        }
                        if ( v169 < v93 )
                        {
                          v93 = v169;
                          v219.m128i_i32[3] = v169;
                        }
                        if ( v91 < v90 )
                        {
                          v90 = v91;
                          v219.m128i_i32[0] = v91;
                        }
                        else if ( v93 < v92 )
                        {
                          v92 = v93;
                          v219.m128i_i32[1] = v93;
                        }
                        v94 = v219;
                        v219.m128i_i32[0] = v90 - v88;
                        v95 = v92 - v89;
                        v219.m128i_i32[2] = v91 - v88;
                        v96 = v93 - v89;
                        v219.m128i_i32[1] = v95;
                        v219.m128i_i32[3] = v96;
                        v97 = v219;
                        v220 = v219;
                        v221 = v94;
                        if ( v90 - v88 >= v91 - v88 || v95 >= v96 )
                        {
                          v98 = 0;
                        }
                        else
                        {
                          if ( v166 && (v165 & 2) == 0 )
                          {
                            v194 = *(_QWORD *)(v41 + 524);
                            ERECTL::vScale((ERECTL *)&v220, (const struct POINTFL *)&v194);
                            v97 = v220;
                          }
                          if ( v164 && (v174 & 2) == 0 )
                          {
                            v183 = *(HDC *)((char *)v84 + 524);
                            ERECTL::vScale((ERECTL *)&v221, (const struct POINTFL *)&v183);
                            v94 = v221;
                          }
                          v218 = v94;
                          v98 = 1;
                          v217 = v97;
                          ++*(_DWORD *)(v43 + 92);
                          v84 = v159;
                          v41 = (__int64)v156;
                        }
                        v40 = *(_QWORD *)(v41 + 48);
                        if ( v40 == *((_QWORD *)v84 + 6)
                          || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v156) && *(_QWORD *)(v40 + 3520) == v42 )
                        {
                          v99 = v175;
                        }
                        else
                        {
                          v99 = v175;
                          if ( *(_WORD *)(v170 + 100) || *v175 || (*(_DWORD *)(v40 + 40) & 0x80u) != 0 )
                          {
                            if ( v98 )
                            {
                              v146 = v196;
                              if ( (*(_DWORD *)(*(_QWORD *)(v43 + 48) + 40LL) & 0x80u) == 0 )
                                v146 = 0LL;
                              v103 = SimBitBlt(
                                       v43 + 24,
                                       v175,
                                       0LL,
                                       v181,
                                       v180,
                                       &v217,
                                       &v218,
                                       0LL,
                                       v171,
                                       v41 + 1176,
                                       v172,
                                       v146);
                              goto LABEL_143;
                            }
                            goto LABEL_142;
                          }
                        }
                        v42 = v172;
                        if ( v172 == 52428 )
                        {
                          v100 = *(_QWORD *)(v43 + 48);
                          v101 = a11 & 1;
                          if ( v101 )
                          {
                            EtwWindowRendering(
                              *((_QWORD *)v156 + 58),
                              *((_QWORD *)v156 + 59),
                              **((_QWORD **)v156 + 62),
                              v190.m128i_u32[0],
                              v190.m128i_i32[1],
                              v190.m128i_i32[2],
                              v190.m128i_i32[3],
                              *((_QWORD *)v84 + 58),
                              *((_QWORD *)v84 + 59),
                              **((_QWORD **)v84 + 62),
                              v195.m128i_i32[0],
                              v195.m128i_i32[1],
                              v195.m128i_i32[0] + abs32(v190.m128i_i32[2] - v190.m128i_i32[3]),
                              v195.m128i_i32[1] + abs32(v190.m128i_i32[3] - v190.m128i_i32[1]));
                            *(_WORD *)(v43 + 102) |= 0x40u;
                            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v147, v148, v149);
                            if ( ThreadWin32Thread )
                              *(_DWORD *)(ThreadWin32Thread + 328) &= ~1u;
                            GreClientRgnUpdated(0LL);
                            GreClientRgnUpdatedStable();
                            v99 = v175;
                            v59 = v162;
                          }
                          if ( v98 )
                          {
                            if ( (*(_DWORD *)(v43 + 112) & 0x400) != 0 )
                              v102 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, XLATEOBJ *, __m128i *, __m128i *))(v100 + 2840))(
                                       v43 + 24,
                                       v99,
                                       v181,
                                       v180,
                                       &v217,
                                       &v218);
                            else
                              v102 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, XLATEOBJ *, __m128i *, __m128i *))EngCopyBits)(
                                       v43 + 24,
                                       v99,
                                       v181,
                                       v180,
                                       &v217,
                                       &v218);
                            v155 = v102;
                          }
                          if ( v101 )
                          {
                            *(_WORD *)(v43 + 102) &= ~0x40u;
                            v151 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v42, v41);
                            v59 = v162;
                            v103 = v155;
                            if ( v151 )
                              *(_DWORD *)(v151 + 328) |= 1u;
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
                                   v181,
                                   v180,
                                   &v217,
                                   &v218,
                                   0LL,
                                   v171,
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
                        v103 = v155;
                        goto LABEL_143;
                      }
                      v61 = *((_QWORD *)v48 + 11);
                      v158 = a10;
                      if ( a10 == -1 )
                        v158 = *(_DWORD *)(*((_QWORD *)v48 + 122) + 180LL);
                      v62 = *(_QWORD *)(v42 + 976);
                      v63 = *(_DWORD *)(v62 + 176);
                      v161 = *(_DWORD *)(v62 + 184);
                      v164 = *(_DWORD *)(v42 + 120);
                      v154 = v63;
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
                          v162 = xloIdent;
                          v155 = 1;
                          goto LABEL_98;
                        }
                        v110 = *(_DWORD *)(v53 + 56);
                        v191 = v45;
                        v192 = v61;
                        v193 = ghsemPalette;
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
                              v118 = XEPALOBJ::ulTime((XEPALOBJ *)&v191);
                              if ( *(_DWORD *)(v119 + v120 + 28) == v118 )
                              {
                                v121 = *(XLATEOBJ **)(v119 + v120 + 8);
                                v162 = v121;
                                flXlate = v121[3].flXlate;
                                if ( (flXlate & 0x6000) == 0 )
                                {
                                  if ( (v121->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                                    || (v121->flXlate & 4) != 0
                                    && v158 == v121[1].iUniq
                                    && (v142 = XEPALOBJ::ulTime((XEPALOBJ *)&v192), *(_DWORD *)(v119 + v120 + 24) == v142)
                                    || (flXlate & 0x100) != 0
                                    && v161 == v121[1].flXlate
                                    && v154 == *(_DWORD *)&v121[1].iSrcType )
                                  {
                                    _InterlockedIncrement((volatile signed __int32 *)(v119 + v120));
                                    *(_DWORD *)(v53 + 56) = v110;
                                    SEMOBJ::vUnlock((SEMOBJ *)&v193);
                                    v59 = v162;
                                    v67 = 1;
                                    v42 = (__int64)v156;
                                    v155 = 1;
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
                      v153[0] = v161;
                      XlateObject = (XLATEOBJ *)CreateXlateObject(
                                                  0LL,
                                                  v164,
                                                  v53,
                                                  v44,
                                                  v61,
                                                  v45,
                                                  *(_QWORD *)v153,
                                                  v154,
                                                  v158,
                                                  0);
                      v162 = XlateObject;
                      v59 = XlateObject;
                      if ( XlateObject )
                      {
                        if ( v53 && v44 && (XlateObject[3].flXlate & 0x200) == 0 )
                          EXLATEOBJ::vAddToCache(&v162, v53, v44, v61, v45);
                        v67 = 1;
                        v155 = 1;
                      }
                      else
                      {
                        v67 = 0;
                        v155 = 0;
                      }
                      v42 = (__int64)v156;
LABEL_98:
                      v68 = *(_DWORD *)(v42 + 36);
                      v180 = v59;
                      if ( (v68 & 1) == 0 )
                      {
                        v218.m128i_i32[2] = v217.m128i_i32[2] - v165;
                        v218.m128i_i32[3] = v217.m128i_i32[3] - v166;
                      }
                      if ( !v67 )
                        goto LABEL_142;
                      goto LABEL_101;
                    }
                    v123 = v42 + 1752;
                    v181 = v42 + 1752;
                    v124 = XDCOBJ::prgnEffRao(&v156);
                    XCLIPOBJ::vSetup((XCLIPOBJ *)v123, v124, (struct ERECTL *)&v217, 2);
                    v217 = *(__m128i *)(v123 + 4);
                    if ( !ERECTL::bEmpty((ERECTL *)&v217) )
                    {
                      v42 = (__int64)v156;
                      v48 = v159;
                      LODWORD(v41) = v217.m128i_i32[1];
                      v49 = v217.m128i_i32[0];
                      goto LABEL_83;
                    }
                  }
LABEL_215:
                  v103 = 1;
LABEL_147:
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v196, v40, (SURFACE **)v42, v41);
LABEL_148:
                  if ( v173 )
                    DC::dwSetLayout(v156, -1, v163);
                  if ( (_DWORD)v160 && (*((_DWORD *)v159 + 11) & 2) != 0 )
                  {
                    if ( !HIDWORD(v160) )
                    {
                      v105 = XDCOBJ::GetUserAttr((XDCOBJ *)&v159);
                      if ( v105 )
                        DC::RestoreAttributes(v159, v105);
                    }
                    *((_DWORD *)v159 + 11) &= ~2u;
                    LODWORD(v160) = 0;
                  }
                  v161 = 0;
                  v106 = *(_QWORD *)v159;
                  HmgDecrementExclusiveReferenceCountEx(v159, HIDWORD(v160), &v161);
                  if ( v161 )
                    bDeleteDCInternalEx(v106, 0LL);
                  goto LABEL_158;
                }
                if ( *(_DWORD *)(v50 + 656) )
                {
                  if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v50 + 656) )
                    goto LABEL_257;
                  v42 = (__int64)v156;
                  v48 = v159;
                  v41 = v217.m128i_u32[1];
                  v49 = v217.m128i_i32[0];
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
                v42 = (__int64)v156;
                v48 = v159;
                v41 = v217.m128i_u32[1];
                v49 = v217.m128i_i32[0];
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
                  v42 = (__int64)v156;
                  v48 = v159;
                  v41 = v217.m128i_u32[1];
                  v49 = v217.m128i_i32[0];
                  goto LABEL_65;
                }
LABEL_257:
                EngSetLastError(6u);
                v103 = 0;
                goto LABEL_147;
              }
              v103 = 0;
LABEL_158:
              if ( (_DWORD)v157 && (*((_DWORD *)v156 + 11) & 2) != 0 )
              {
                if ( !HIDWORD(v157) )
                {
                  v107 = XDCOBJ::GetUserAttr((XDCOBJ *)&v156);
                  if ( v107 )
                    DC::RestoreAttributes(v156, v107);
                }
                *((_DWORD *)v156 + 11) &= ~2u;
                LODWORD(v157) = 0;
              }
              v158 = 0;
              v108 = *(_QWORD *)v156;
              HmgDecrementExclusiveReferenceCountEx(v156, HIDWORD(v157), &v158);
              if ( v158 )
                bDeleteDCInternalEx(v108, 0LL);
              return v103;
            }
            DC::vMarkTransformDirty(v24);
          }
          else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
          {
            PsGetWin32KFilterSet();
          }
          v24 = v159;
          goto LABEL_22;
        }
LABEL_231:
        if ( v20 )
          XDCOBJ::vUnlockFast((XDCOBJ *)&v156);
        return 0;
      }
      DC::vMarkTransformDirty(v20);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v20 = v156;
    goto LABEL_10;
  }
  return GreStretchBltInternal(a1, a2, a3, a5, a6, a7, a8, a4, a5, a9 & 0xDFFFFFFF, a10, v16);
}
