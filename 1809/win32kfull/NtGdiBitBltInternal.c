/*
 * XREFs of NtGdiBitBltInternal @ 0x1C00624D0
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C0010BC4 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C003A0C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     NtGdiBitBlt @ 0x1C00659E0 (NtGdiBitBlt.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C006CF78 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007AC3C (-UT_InvertCaret@@YAXXZ.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     NtUserBitBltSysBmp @ 0x1C01065C0 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     RecolorDeskPattern @ 0x1C01369F0 (RecolorDeskPattern.c)
 *     xxxClientExtTextOutW @ 0x1C0151824 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0151B08 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C0151E08 (CreateCompatiblePublicDC.c)
 *     UpdateSpriteArea @ 0x1C0152170 (UpdateSpriteArea.c)
 *     StopFade @ 0x1C0152D60 (StopFade.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0157150 (CreateSpb.c)
 *     xxxPrintWindow @ 0x1C01D43EC (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C01F2E30 (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0207A40 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0207E64 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C020ADFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C02230E0 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0223BD4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02278E0 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022AF18 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     BltColor @ 0x1C023020C (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0230A0C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C0231404 (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 *     DxgkEngBltViaGDI @ 0x1C025A990 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     GreClientRgnUpdatedStable @ 0x1C003AAF8 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C003DCB4 (GreClientRgnUpdated.c)
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C004AB70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00591F0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0065A50 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009FF7C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C009FFE4 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00E503C (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E51A4 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FC050 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C01208D4 (--1CAutoTGO@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E24 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E68 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015F4B8 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01B8390 (--1SEMOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C0252DEC (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C025BFC0 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C025C140 (SimBitBlt.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027F300 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02818F4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
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
  int v11; // ebx
  unsigned int v12; // r12d
  int v13; // r15d
  signed int left; // edi
  signed int top; // esi
  int v18; // r14d
  __int64 v19; // rdx
  DC *v20; // r9
  __int64 v21; // r10
  int v22; // r8d
  __int64 v23; // rbx
  unsigned int v24; // eax
  struct MATRIX *v25; // rdx
  int v26; // ecx
  int v27; // edx
  int v28; // r8d
  signed int bottom; // r8d
  signed int right; // edx
  LONG v31; // eax
  LONG v32; // eax
  DC *v33; // rcx
  int v34; // eax
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // r9
  DC *v38; // r8
  HDC v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // r15
  unsigned __int8 v42; // cl
  __int64 v43; // rdx
  char *v44; // rdi
  int v45; // ecx
  __int64 v46; // rcx
  int v47; // r10d
  HDC v48; // r14
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdi
  _DWORD *v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  int v57; // r12d
  int v58; // r11d
  int v59; // ebx
  int v60; // eax
  int v61; // ecx
  LONG v62; // edx
  char *v63; // r13
  struct REGION *v64; // rax
  int v65; // r11d
  _DWORD *v66; // rcx
  LONG v67; // r10d
  int v68; // edx
  struct _RECTL *v69; // rax
  LONG v70; // r11d
  int v71; // ecx
  __int64 v72; // rcx
  DC *v73; // rdx
  SURFACE *v74; // rbx
  int v75; // eax
  XLATEOBJ *v76; // rbx
  __int64 v77; // r14
  __int64 v78; // rax
  int v79; // ecx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // edx
  __int64 v84; // rax
  int v85; // ecx
  unsigned int v86; // r13d
  __int64 v87; // r12
  unsigned int i; // r11d
  int v89; // eax
  __int64 v90; // rax
  int v91; // ecx
  unsigned int v92; // eax
  __int64 v93; // r8
  __int64 v94; // r9
  XLATEOBJ *v95; // rdx
  FLONG flXlate; // r10d
  unsigned int v97; // eax
  XLATEOBJ *XlateObject; // rax
  int v99; // eax
  HDC v100; // r14
  SURFACE *v101; // r15
  int v102; // edi
  int v103; // esi
  __m128i v104; // xmm6
  __int64 v105; // rax
  int v106; // edx
  int v107; // r8d
  _DWORD *v108; // rax
  int v109; // eax
  int v110; // eax
  __int32 v111; // r15d
  __int64 v112; // rax
  int v113; // edx
  unsigned int v114; // r8d
  _DWORD *v115; // rax
  float v116; // xmm4_4
  int v117; // eax
  DC *v118; // r14
  int v119; // eax
  float v120; // xmm2_4
  __int64 v121; // r13
  unsigned int v122; // eax
  float v123; // xmm1_4
  float v124; // xmm4_4
  int v125; // ecx
  int v126; // r10d
  int v127; // eax
  int v128; // edx
  __m128i v129; // xmm0
  int v130; // r11d
  __m128i v131; // xmm6
  bool v132; // cc
  int v133; // ecx
  __int32 v134; // edi
  int v135; // eax
  int v136; // eax
  __int32 v137; // edx
  int v138; // eax
  int v139; // ecx
  __int32 v140; // r8d
  __m128i v141; // xmm6
  int v142; // eax
  int v143; // ecx
  struct _RECTL v144; // xmm7
  SURFACE *v145; // rsi
  char v146; // r15
  __int64 v147; // rdx
  __int64 v148; // r8
  __int128 *v149; // rax
  bool v150; // zf
  __int64 v151; // rdi
  __int64 ThreadWin32Thread; // rax
  unsigned int v153; // eax
  __int64 v154; // rax
  int (*v155)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v156; // rdx
  int v157; // r8d
  __int64 v158; // r10
  __int64 cEntries; // rax
  int v160; // r12d
  DC *v161; // r8
  SURFACE *v162; // rbx
  __int64 v163; // rdx
  __int64 v164; // rdx
  __int64 v165; // rbx
  __int64 CurrentProcess; // rax
  __int64 v167; // rdx
  __int64 v168; // rbx
  __int64 v169; // rax
  __int64 v170; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 *v174; // rax
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rax
  __int64 v178; // rdx
  HSURF v179; // rbx
  char v180; // bl
  __int64 v181; // rax
  DCVISRGNSHARELOCK *v182; // rcx
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rax
  __int64 v186; // rdx
  HSURF v187; // rbx
  char v188; // bl
  __int64 v189; // rax
  DCVISRGNSHARELOCK *v190; // rcx
  __int64 v191; // rax
  signed __int32 v192[8]; // [rsp+0h] [rbp-100h] BYREF
  int v193[2]; // [rsp+20h] [rbp-E0h]
  HDC v194; // [rsp+28h] [rbp-D8h]
  int v195[2]; // [rsp+30h] [rbp-D0h]
  int v196[2]; // [rsp+70h] [rbp-90h]
  XLATEOBJ *v197; // [rsp+78h] [rbp-88h] BYREF
  int v198; // [rsp+80h] [rbp-80h]
  unsigned int v199; // [rsp+84h] [rbp-7Ch]
  int v200; // [rsp+88h] [rbp-78h]
  int v201; // [rsp+8Ch] [rbp-74h]
  _QWORD *v202; // [rsp+90h] [rbp-70h]
  char v203[4]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v204; // [rsp+9Ch] [rbp-64h]
  int v205; // [rsp+A0h] [rbp-60h]
  char v206[4]; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v207; // [rsp+A8h] [rbp-58h]
  HDC v208; // [rsp+B0h] [rbp-50h]
  DC *v209[6]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v210; // [rsp+E8h] [rbp-18h] BYREF
  __int32 v211; // [rsp+F0h] [rbp-10h]
  int v212; // [rsp+F4h] [rbp-Ch]
  unsigned __int64 v213; // [rsp+F8h] [rbp-8h] BYREF
  int v214; // [rsp+100h] [rbp+0h]
  int v215; // [rsp+104h] [rbp+4h]
  SURFACE *v216; // [rsp+108h] [rbp+8h]
  char *v217; // [rsp+110h] [rbp+10h]
  __int64 v218; // [rsp+118h] [rbp+18h] BYREF
  float v219[2]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v220[2]; // [rsp+128h] [rbp+28h] BYREF
  char *v221; // [rsp+130h] [rbp+30h]
  HDC v222; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v223; // [rsp+140h] [rbp+40h] BYREF
  int v224; // [rsp+148h] [rbp+48h]
  int v225; // [rsp+14Ch] [rbp+4Ch]
  __int128 v226; // [rsp+150h] [rbp+50h] BYREF
  __int128 v227; // [rsp+160h] [rbp+60h]
  __int64 v228; // [rsp+170h] [rbp+70h]
  __int64 v229; // [rsp+178h] [rbp+78h] BYREF
  char v230; // [rsp+180h] [rbp+80h]
  int v231; // [rsp+184h] [rbp+84h]
  _BYTE v232[32]; // [rsp+188h] [rbp+88h] BYREF
  int v233; // [rsp+1A8h] [rbp+A8h]
  __int128 v234; // [rsp+1B0h] [rbp+B0h]
  unsigned int v235; // [rsp+1C0h] [rbp+C0h]
  int v236; // [rsp+1C4h] [rbp+C4h]
  DC *v237[6]; // [rsp+1C8h] [rbp+C8h] BYREF
  DC *v238[6]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v239; // [rsp+228h] [rbp+128h]
  __int128 v240; // [rsp+230h] [rbp+130h]
  HDC v241; // [rsp+240h] [rbp+140h]
  __int64 v242; // [rsp+248h] [rbp+148h]
  __int64 v243; // [rsp+250h] [rbp+150h]
  HDC v244; // [rsp+258h] [rbp+158h]
  struct MATRIX *v245; // [rsp+260h] [rbp+160h] BYREF
  int v246; // [rsp+268h] [rbp+168h]
  int v247; // [rsp+26Ch] [rbp+16Ch]
  _QWORD v248[2]; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v249[2]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v250[6]; // [rsp+290h] [rbp+190h] BYREF
  struct _RECTL v251; // [rsp+2C0h] [rbp+1C0h]
  __int64 v252; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v253; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v254; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v255; // [rsp+2E8h] [rbp+1E8h] BYREF
  __m128i v256; // [rsp+2F0h] [rbp+1F0h]
  _BYTE v257[32]; // [rsp+300h] [rbp+200h] BYREF
  HSURF *v258; // [rsp+320h] [rbp+220h]
  _BYTE v259[32]; // [rsp+328h] [rbp+228h] BYREF
  HSURF *v260; // [rsp+348h] [rbp+248h]
  DC *v261[6]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v262[32]; // [rsp+380h] [rbp+280h] BYREF
  struct SURFACE *v263; // [rsp+3A0h] [rbp+2A0h]
  _BYTE v264[32]; // [rsp+3A8h] [rbp+2A8h] BYREF
  struct SURFACE *v265; // [rsp+3C8h] [rbp+2C8h]
  DC *v266[6]; // [rsp+3D0h] [rbp+2D0h] BYREF
  struct _RECTL v267; // [rsp+400h] [rbp+300h] BYREF
  __m128i v268; // [rsp+410h] [rbp+310h] BYREF
  __m128i v269; // [rsp+420h] [rbp+320h] BYREF
  struct _RECTL v270; // [rsp+430h] [rbp+330h] BYREF
  __m128i v271; // [rsp+440h] [rbp+340h] BYREF
  int v272; // [rsp+520h] [rbp+420h]

  v11 = a8;
  v12 = 0;
  v13 = a7;
  v222 = a1;
  left = a2;
  v198 = a8;
  v208 = a6;
  v196[0] = a5;
  top = a3;
  if ( (a9 & 0x40000000) != 0 )
    return GreStretchBltInternal(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a4,
             a5,
             a9 & 0xDFFFFFFF,
             a10,
             (a9 & 0x20000000) != 0 ? 2 : 0);
  v201 = a9 & 0xDFFFFFFF;
  v18 = a9 & 0x5FFFFFFF;
  DCOBJ::DCOBJ((DCOBJ *)v209, a1);
  if ( v209[0] && (*((_DWORD *)v209[0] + 9) & 0x10000) == 0 )
  {
    if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v18 != 16711778 && v18 != 66 )
      bSpDwmValidateSurface((struct XDCOBJ *)v209, left, top, a4, v196[0]);
    DCOBJ::DCOBJ((DCOBJ *)v250, v208);
    if ( !v250[0] )
      goto LABEL_374;
    bSpDwmValidateSurface((struct XDCOBJ *)v250, a7, a8, a4, v196[0]);
    v19 = v250[0];
    v20 = v209[0];
    v21 = *((_QWORD *)v209[0] + 122);
    v22 = *(_DWORD *)(v21 + 108);
    if ( (((unsigned __int8)v22 ^ *(_BYTE *)(*(_QWORD *)(v250[0] + 976LL) + 108LL)) & 7) != 0
      && (v201 < 0 && (v22 & 1) != 0 || (v22 & 9) == 9) )
    {
      v23 = *(_QWORD *)(v21 + 308);
      v24 = DC::dwSetLayout(v209[0], -1, 0);
      v20 = v209[0];
      v19 = v250[0];
      left = v23 - a4 - left;
      v207 = 0x80000000;
      v11 = v198;
    }
    else
    {
      v24 = v200;
      v207 = 0;
    }
    v201 = v24;
    v224 = *(_DWORD *)(*((_QWORD *)v20 + 122) + 208LL);
    v225 = *(_DWORD *)(*((_QWORD *)v20 + 122) + 108LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 122) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v223, (struct XDCOBJ *)v209, 0x204u, 0);
      v19 = v250[0];
    }
    else
    {
      v223 = (unsigned __int64)v20 + 320;
    }
    v246 = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 208LL);
    v247 = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 108LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 976) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v245, (struct XDCOBJ *)v250, 0x204u, 0);
      v25 = v245;
    }
    else
    {
      v25 = (struct MATRIX *)(v19 + 320);
      v245 = v25;
    }
    if ( (*(_DWORD *)(v223 + 32) & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v223, v25) )
    {
      v26 = v196[0];
      v27 = a7 + a4;
      v268.m128i_i64[0] = __PAIR64__(v11, a7);
      v28 = v11 + v196[0];
      v268.m128i_i32[2] = a7 + a4;
      v268.m128i_i32[3] = v11 + v196[0];
      if ( (*((_BYTE *)v245 + 32) & 0x43) != 0x43 )
      {
        bCvtPts1((unsigned __int64)v245, &v268, 2LL);
        v28 = v268.m128i_i32[3];
        v27 = v268.m128i_i32[2];
        v26 = v196[0];
        v11 = v268.m128i_i32[1];
        v13 = v268.m128i_i32[0];
      }
      if ( v247 )
      {
        ++v13;
        ++v27;
        v268.m128i_i32[0] = v13;
        v268.m128i_i32[2] = v27;
      }
      if ( v13 > v27 )
      {
        v268.m128i_i32[0] = v27;
        v268.m128i_i32[2] = v13;
      }
      if ( v11 > v28 )
      {
        v268.m128i_i32[1] = v28;
        v268.m128i_i32[3] = v11;
      }
      bottom = v26 + top;
      *(_QWORD *)&v267.left = __PAIR64__(top, left);
      right = left + a4;
      v267.right = left + a4;
      v267.bottom = v26 + top;
      if ( (*(_BYTE *)(v223 + 32) & 0x43) != 0x43 )
      {
        bCvtPts1(v223, &v267, 2LL);
        bottom = v267.bottom;
        right = v267.right;
        top = v267.top;
        left = v267.left;
      }
      if ( v225 )
      {
        ++left;
        ++right;
        v267.left = left;
        v267.right = right;
      }
      if ( left > right )
      {
        v31 = left;
        v267.left = right;
        left = right;
        v267.right = v31;
        right = v31;
      }
      if ( top > bottom )
      {
        v32 = top;
        v267.top = bottom;
        top = bottom;
        v267.bottom = v32;
        bottom = v32;
      }
      if ( left != right && top != bottom )
      {
        v33 = v209[0];
        v34 = *((_DWORD *)v209[0] + 9);
        if ( (v34 & 0xE0) != 0 )
        {
          if ( (v34 & 0x20) != 0 )
          {
            ERECTL::operator|=((char *)v209[0] + 1064, &v267);
            v33 = v209[0];
          }
          if ( (*((_DWORD *)v33 + 9) & 0x80u) != 0 )
            ERECTL::operator|=((char *)v33 + 1096, &v267);
        }
        v230 = 0;
        v229 = 0LL;
        v231 = 0;
        v233 = 0;
        DCOBJ::DCOBJ((DCOBJ *)v237);
        DCOBJ::DCOBJ((DCOBJ *)v238);
        v228 = 0LL;
        v226 = 0LL;
        v227 = 0LL;
        v234 = 0LL;
        v240 = 0LL;
        v235 = 0;
        v239 = 0LL;
        v241 = 0LL;
        v244 = 0LL;
        v242 = 0LL;
        v243 = 0LL;
        v237[0] = 0LL;
        v238[0] = 0LL;
        if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                              (DEVLOCKBLTOBJ *)&v226,
                              (struct XDCOBJ *)v209,
                              (struct XDCOBJ *)v250,
                              v35) )
        {
          v160 = XDCOBJ::bFullScreen((XDCOBJ *)v250);
          v12 = XDCOBJ::bFullScreen((XDCOBJ *)v209) | v160;
          goto LABEL_115;
        }
        v38 = v209[0];
        v39 = (HDC)*((_QWORD *)v209[0] + 62);
        v216 = (SURFACE *)v39;
        if ( !v39 )
        {
          v12 = 1;
          goto LABEL_115;
        }
        v40 = *((_QWORD *)v39 + 16);
        v41 = *((_QWORD *)v209[0] + 11);
        v42 = (a9 & 0x5FFFFFFFu) >> 16;
        v198 = (v42 << 8) | v42;
        if ( ((v42 ^ (unsigned __int8)(16 * v42)) & 0xF0) != 0 )
        {
          v43 = *((_QWORD *)v209[0] + 122);
          v44 = (char *)v209[0] + 1208;
          v221 = (char *)v209[0] + 1208;
          if ( (*(_DWORD *)(v43 + 152) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v209[0], *(_QWORD *)(v43 + 160));
            v38 = v209[0];
          }
          v36 = *((_QWORD *)v38 + 122);
          v45 = *(_DWORD *)(v36 + 152);
          if ( (v45 & 1) != 0 || (*((_DWORD *)v38 + 79) & 1) != 0 )
          {
            v195[0] = 1;
            *(_DWORD *)(v36 + 152) = v45 & 0xFFFFFFFE;
            v194 = v39;
            *(_QWORD *)v193 = v40;
            *((_DWORD *)v209[0] + 79) &= ~1u;
            EBRUSHOBJ::vInitBrush(v44, v209[0], *((_QWORD *)v209[0] + 17), v41, *(_QWORD *)v193, v194, v195[0]);
            v38 = v209[0];
          }
        }
        else
        {
          v221 = 0LL;
        }
        v46 = (__int64)v38 + 1024;
        if ( (*((_DWORD *)v38 + 10) & 1) == 0 )
          v46 = (__int64)v38 + 1016;
        v47 = *(_DWORD *)v46 + v267.left;
        v267.left = v47;
        v267.right += *(_DWORD *)v46;
        v37 = (unsigned int)(*(_DWORD *)(v46 + 4) + v267.top);
        v267.top += *(_DWORD *)(v46 + 4);
        v267.bottom += *(_DWORD *)(v46 + 4);
        v48 = *(HDC *)(v250[0] + 496LL);
        v208 = v48;
        if ( !v48 )
          goto LABEL_273;
        if ( (a11 & 2) != 0 )
        {
LABEL_78:
          v53 = *((_QWORD *)v48 + 16);
          v54 = (_DWORD *)(v250[0] + 1024LL);
          if ( (*(_DWORD *)(v250[0] + 40LL) & 1) == 0 )
            v54 = (_DWORD *)(v250[0] + 1016LL);
          v55 = *((_QWORD *)v48 + 6);
          v56 = 0;
          v57 = v37 - *(_DWORD *)(v250[0] + 8LL * (*(_DWORD *)(v250[0] + 40LL) & 1) + 1020) - v268.m128i_i32[1];
          v58 = 0;
          v59 = v47 - *v54 - v268.m128i_i32[0];
          v205 = v59;
          v200 = v57;
          if ( v55 && v48 == *(HDC *)(v55 + 2552) && (*(_DWORD *)(v55 + 40) & 0x20000) != 0 )
          {
            v56 = *(_DWORD *)(v55 + 2584);
            v58 = *(_DWORD *)(v55 + 2588);
          }
          if ( v59 + v56 > v47 )
            v47 = v59 + v56;
          v267.left = v47;
          if ( v57 + v58 > (int)v37 )
            v37 = (unsigned int)(v57 + v58);
          v60 = v267.bottom;
          v267.top = v37;
          v61 = v56 + v59 + *((_DWORD *)v48 + 14);
          v62 = v267.right;
          if ( v61 < v267.right )
            v62 = v61;
          v267.right = v62;
          if ( v58 + v57 + *((_DWORD *)v48 + 15) < v267.bottom )
            v60 = v58 + v57 + *((_DWORD *)v48 + 15);
          v267.bottom = v60;
          if ( v47 < v62 && (int)v37 < v60 )
          {
            v217 = 0LL;
            if ( v47 >= *((_DWORD *)v38 + 250)
              && v62 <= *((_DWORD *)v38 + 252)
              && (int)v37 >= *((_DWORD *)v38 + 251)
              && v60 <= *((_DWORD *)v38 + 253) )
            {
              goto LABEL_100;
            }
            v63 = (char *)v38 + 1776;
            v217 = (char *)v38 + 1776;
            v64 = XDCOBJ::prgnEffRao(v209);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v63, v64, (struct ERECTL *)&v267, 2);
            v267 = *(struct _RECTL *)(v63 + 4);
            if ( !ERECTL::bEmpty((ERECTL *)&v267) )
            {
              v38 = v209[0];
LABEL_100:
              v65 = *((_DWORD *)v38 + 9);
              if ( (v65 & 0xE0) == 0 )
                goto LABEL_136;
              v66 = (_DWORD *)((char *)v38 + 1024);
              v270 = v267;
              if ( (*((_DWORD *)v38 + 10) & 1) == 0 )
                v66 = (_DWORD *)((char *)v38 + 1016);
              v67 = v267.left - *v66;
              v270.left = v67;
              v68 = v267.right - *v66;
              v270.right = v68;
              v37 = (unsigned int)(v267.top - v66[1]);
              v270.top = v267.top - v66[1];
              v270.bottom -= v66[1];
              if ( (v65 & 0x40) == 0 )
              {
LABEL_136:
                v75 = v267.left - v59;
                v76 = 0LL;
                v268.m128i_i32[0] = v75;
                v197 = 0LL;
                v268.m128i_i32[1] = v267.top - v57;
                if ( *(_QWORD *)(v250[0] + 496LL) == *((_QWORD *)v38 + 62) )
                {
                  *(_QWORD *)v196 = 0LL;
                  v12 = 1;
                  goto LABEL_194;
                }
                v196[0] = a10;
                v77 = *(_QWORD *)(v250[0] + 88LL);
                if ( a10 == -1 )
                  v196[0] = *(_DWORD *)(*(_QWORD *)(v250[0] + 976LL) + 180LL);
                v78 = *((_QWORD *)v38 + 122);
                v79 = *(_DWORD *)(v78 + 176);
                v199 = *(_DWORD *)(v78 + 184);
                v204 = *((_DWORD *)v38 + 30);
                LODWORD(v202) = v79;
                if ( (v53
                   || v40
                   && ((*(_DWORD *)(v40 + 24) & 0x800) == 0
                    || (v80 = *(_QWORD *)(v41 + 80)) != 0 && v80 != *(_QWORD *)(v41 + 72)))
                  && (v40
                   || (*(_DWORD *)(v53 + 24) & 0x800) == 0
                   || (v81 = *(_QWORD *)(v41 + 80)) != 0 && v81 != *(_QWORD *)(v41 + 72)) )
                {
                  if ( !v53 || !v40 )
                  {
LABEL_181:
                    XlateObject = (XLATEOBJ *)CreateXlateObject(
                                                0LL,
                                                v204,
                                                v53,
                                                v40,
                                                v77,
                                                v41,
                                                v199,
                                                (unsigned int)v202,
                                                v196[0],
                                                0);
                    v197 = XlateObject;
                    v76 = XlateObject;
                    if ( XlateObject )
                    {
                      if ( v53 && v40 && (XlateObject[3].flXlate & 0x200) == 0 )
                        EXLATEOBJ::vAddToCache(&v197, v53, v40, v77, v41);
                      v12 = 1;
                    }
                    else
                    {
                      v12 = 0;
                    }
LABEL_189:
                    v38 = v209[0];
                    goto LABEL_190;
                  }
                  v82 = *(_QWORD *)(v53 + 120);
                  if ( v82 == v53 )
                    v83 = *(_DWORD *)(v53 + 32);
                  else
                    v83 = *(_DWORD *)(v82 + 32);
                  v84 = *(_QWORD *)(v40 + 120);
                  if ( v84 == v40 )
                    v85 = *(_DWORD *)(v40 + 32);
                  else
                    v85 = *(_DWORD *)(v84 + 32);
                  if ( v83 != v85 )
                  {
                    v86 = *(_DWORD *)(v53 + 56);
                    v252 = v41;
                    v253 = v77;
                    v254 = ghsemPalette;
                    GreAcquireSemaphore(ghsemPalette);
                    v87 = *(_QWORD *)(v53 + 120);
                    for ( i = 0; i < 8; ++i )
                    {
                      if ( v87 == v53 )
                        v89 = *(_DWORD *)(v53 + 32);
                      else
                        v89 = *(_DWORD *)(v87 + 32);
                      if ( *((_DWORD *)&xlateTable + 8 * v86 + 4) == v89 )
                      {
                        v90 = *(_QWORD *)(v40 + 120);
                        v91 = v90 == v40 ? *(_DWORD *)(v40 + 32) : *(_DWORD *)(v90 + 32);
                        if ( *((_DWORD *)&xlateTable + 8 * v86 + 5) == v91 )
                        {
                          v92 = XEPALOBJ::ulTime((XEPALOBJ *)&v252);
                          if ( *(_DWORD *)(v93 + v94 + 28) == v92 )
                          {
                            v95 = *(XLATEOBJ **)(v93 + v94 + 8);
                            v197 = v95;
                            flXlate = v95[3].flXlate;
                            if ( (flXlate & 0x6000) == 0 )
                            {
                              if ( (v95->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                                || (v95->flXlate & 4) != 0
                                && v196[0] == v95[1].iUniq
                                && (v97 = XEPALOBJ::ulTime((XEPALOBJ *)&v253), *(_DWORD *)(v93 + v94 + 24) == v97)
                                || (flXlate & 0x100) != 0
                                && v199 == v95[1].flXlate
                                && (_DWORD)v202 == *(_DWORD *)&v95[1].iSrcType )
                              {
                                _InterlockedIncrement((volatile signed __int32 *)(v93 + v94));
                                *(_DWORD *)(v53 + 56) = v86;
                                SEMOBJ::~SEMOBJ((SEMOBJ *)&v254);
                                v76 = v197;
                                v12 = 1;
                                goto LABEL_189;
                              }
                            }
                          }
                        }
                      }
                      v86 = ((_BYTE)v86 + 1) & 7;
                    }
                    if ( ghsemPalette )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                      GreReleaseSemaphoreInternal(ghsemPalette);
                    }
                    goto LABEL_181;
                  }
                }
                v76 = xloIdent;
                v12 = 1;
                v197 = xloIdent;
LABEL_190:
                v99 = *((_DWORD *)v38 + 9);
                *(_QWORD *)v196 = v76;
                if ( (v99 & 1) == 0 )
                {
                  v268.m128i_i32[2] = v267.right - v205;
                  v268.m128i_i32[3] = v267.bottom - v200;
                }
                if ( !v12 )
                  goto LABEL_268;
                v48 = v208;
LABEL_194:
                v100 = v48 + 6;
                v101 = v216;
                v102 = 0;
                v103 = 0;
                v104 = (__m128i)v267;
                v251 = v267;
                v256 = v268;
                v202 = v100;
                v269 = (__m128i)v267;
                v271 = v268;
                v213 = 0LL;
                v105 = SURFOBJ_TO_SURFACE_NOT_NULL((char *)v216 + 24);
                v106 = 0;
                v107 = 0;
                if ( *(int *)(v105 + 112) < 0 )
                {
                  v108 = (_DWORD *)*((_QWORD *)v101 + 6);
                  if ( v108 )
                  {
                    if ( (v108[10] & 0x20000) != 0 )
                    {
                      v102 = v108[646];
                      v106 = v102;
                      v103 = v108[647];
                      v107 = v103;
                      v213 = __PAIR64__(v103, v102);
                    }
                  }
                }
                v109 = v106 + *((_DWORD *)v101 + 14);
                v210 = 0LL;
                v214 = v109;
                v110 = *((_DWORD *)v101 + 15);
                v111 = 0;
                v215 = v107 + v110;
                v112 = SURFOBJ_TO_SURFACE_NOT_NULL(v100);
                v113 = 0;
                v114 = 0;
                if ( *(int *)(v112 + 112) < 0 )
                {
                  v115 = (_DWORD *)*((_QWORD *)v100 + 3);
                  if ( v115 )
                  {
                    if ( (v115[10] & 0x20000) != 0 )
                    {
                      v111 = v115[646];
                      v113 = v111;
                      v114 = v115[647];
                      v210 = __PAIR64__(v114, v111);
                    }
                  }
                }
                v116 = FLOAT_1_0;
                v211 = v113 + *((_DWORD *)v100 + 8);
                v117 = *((_DWORD *)v100 + 9);
                v118 = v209[0];
                v212 = v114 + v117;
                v119 = *((_DWORD *)v209[0] + 130);
                v205 = v119;
                v200 = v119 & 1;
                if ( (v119 & 1) != 0 && (v119 & 2) == 0 )
                {
                  v120 = 1.0 / *((float *)v209[0] + 132);
                  v219[0] = 1.0 / *((float *)v209[0] + 131);
                  v219[1] = v120;
                  ERECTL::vScale((ERECTL *)&v213, (const struct POINTFL *)v219);
                  ERECTL::vScale((ERECTL *)&v269, (const struct POINTFL *)v219);
                  v103 = HIDWORD(v213);
                  v102 = v213;
                  v104 = v269;
                }
                v121 = v250[0];
                v122 = *(_DWORD *)(v250[0] + 520LL);
                v199 = v122;
                v204 = v122 & 1;
                if ( (v122 & 1) != 0 && (v122 & 2) == 0 )
                {
                  v123 = v116 / *(float *)(v250[0] + 524LL);
                  v124 = v116 / *(float *)(v250[0] + 528LL);
                  *(float *)v220 = v123;
                  *(float *)&v220[1] = v124;
                  ERECTL::vScale((ERECTL *)&v210, (const struct POINTFL *)v220);
                  ERECTL::vScale((ERECTL *)&v271, (const struct POINTFL *)v220);
                  v111 = v210;
                }
                v125 = _mm_cvtsi128_si32(v104);
                v269 = v104;
                v37 = v104.m128i_u32[1];
                v126 = v271.m128i_i32[0] - v125;
                v127 = _mm_cvtsi128_si32(_mm_srli_si128(v104, 4));
                v128 = v125;
                v129 = _mm_srli_si128(v104, 8);
                v130 = v271.m128i_i32[1] - v127;
                v131 = _mm_srli_si128(v104, 12);
                v132 = v102 <= v125;
                v133 = v269.m128i_i32[3];
                if ( !v132 )
                  v128 = v102;
                v134 = v269.m128i_i32[2];
                v132 = v103 <= v127;
                v135 = _mm_cvtsi128_si32(v129);
                if ( !v132 )
                  v37 = (unsigned int)v103;
                v132 = v214 < v135;
                v136 = _mm_cvtsi128_si32(v131);
                if ( v132 )
                  v134 = v214;
                if ( v215 < v136 )
                  v133 = v215;
                if ( v134 >= v128 )
                {
                  if ( v133 < (int)v37 )
                    v37 = (unsigned int)v133;
                }
                else
                {
                  v128 = v134;
                }
                v137 = v126 + v128;
                v138 = v37 + v130;
                v139 = v130 + v133;
                v140 = v126 + v134;
                if ( v111 > v137 )
                  v137 = v111;
                v269.m128i_i32[0] = v137;
                if ( SHIDWORD(v210) > v138 )
                  v138 = HIDWORD(v210);
                v269.m128i_i32[1] = v138;
                if ( v211 < v140 )
                  v140 = v211;
                v269.m128i_i32[2] = v140;
                if ( v212 < v139 )
                  v139 = v212;
                v269.m128i_i32[3] = v139;
                if ( v140 >= v137 )
                {
                  if ( v139 < v138 )
                    v138 = v139;
                  v269.m128i_i32[1] = v138;
                }
                else
                {
                  v137 = v140;
                  v269.m128i_i32[0] = v140;
                }
                v141 = v269;
                v269.m128i_i32[0] = v137 - v126;
                v142 = v138 - v130;
                v269.m128i_i32[2] = v140 - v126;
                v143 = v139 - v130;
                v269.m128i_i32[1] = v142;
                v269.m128i_i32[3] = v143;
                v144 = (struct _RECTL)v269;
                v271 = v141;
                if ( v137 - v126 >= v140 - v126 || v142 >= v143 )
                {
                  v145 = v216;
                  v146 = 0;
                }
                else
                {
                  if ( v200 && (v205 & 2) == 0 )
                  {
                    v255 = *(_QWORD *)((char *)v118 + 524);
                    ERECTL::vScale((ERECTL *)&v269, (const struct POINTFL *)&v255);
                    v144 = (struct _RECTL)v269;
                  }
                  if ( v204 && (v199 & 2) == 0 )
                  {
                    v222 = *(HDC *)(v121 + 524);
                    ERECTL::vScale((ERECTL *)&v271, (const struct POINTFL *)&v222);
                    v141 = v271;
                  }
                  v145 = v216;
                  v146 = 1;
                  v268 = v141;
                  v267 = v144;
                  ++*((_DWORD *)v216 + 23);
                  v118 = v209[0];
                  v121 = v250[0];
                }
                if ( *((_QWORD *)v118 + 6) == *(_QWORD *)(v121 + 48)
                  || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v209) && *(_QWORD *)(v147 + 3520) == v148
                  || !*((_WORD *)v208 + 50) && !*v202 && (*(_DWORD *)(v147 + 40) & 0x80u) == 0 )
                {
                  if ( v198 == 52428 )
                  {
                    v150 = (a11 & 1) == 0;
                    v272 = a11 & 1;
                    v151 = *((_QWORD *)v145 + 6);
                    if ( !v150 )
                    {
                      EtwWindowRendering(
                        *((_QWORD *)v118 + 58),
                        *((_QWORD *)v118 + 59),
                        **((_QWORD **)v118 + 62),
                        (unsigned int)v251.left,
                        v251.top,
                        v251.right,
                        v251.bottom,
                        *(_QWORD *)(v121 + 464),
                        *(_QWORD *)(v121 + 472),
                        **(_QWORD **)(v121 + 496),
                        v256.m128i_i32[0],
                        v256.m128i_i32[1],
                        v256.m128i_i32[0] + abs32(v251.right - v251.bottom),
                        v256.m128i_i32[1] + abs32(v251.bottom - v251.top));
                      v145 = v216;
                      *((_WORD *)v216 + 51) |= 0x40u;
                      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                      if ( ThreadWin32Thread )
                        *(_BYTE *)(ThreadWin32Thread + 328) = 0;
                      GreClientRgnUpdated(0);
                      GreClientRgnUpdatedStable();
                      v76 = v197;
                    }
                    if ( v146 )
                    {
                      if ( (*((_DWORD *)v145 + 28) & 0x400) != 0 )
                        v153 = (*(__int64 (__fastcall **)(__int64, _QWORD *, char *, _QWORD, struct _RECTL *, __m128i *))(v151 + 2840))(
                                 (__int64)v145 + 24,
                                 v202,
                                 v217,
                                 *(_QWORD *)v196,
                                 &v267,
                                 &v268);
                      else
                        v153 = ((__int64 (__fastcall *)(char *, _QWORD *, char *, _QWORD, struct _RECTL *, __m128i *))EngCopyBits)(
                                 (char *)v145 + 24,
                                 v202,
                                 v217,
                                 *(_QWORD *)v196,
                                 &v267,
                                 &v268);
                      v12 = v153;
                    }
                    if ( v272 )
                    {
                      *((_WORD *)v145 + 51) &= ~0x40u;
                      v154 = W32GetThreadWin32Thread(KeGetCurrentThread());
                      v76 = v197;
                      if ( v154 )
                        *(_BYTE *)(v154 + 328) = 1;
                    }
                  }
                  else if ( v146 )
                  {
                    v155 = SURFACE::pfnBitBlt(v145);
                    v12 = ((__int64 (__fastcall *)(char *, __int64, _QWORD, char *, _QWORD, struct _RECTL *, __m128i *, _QWORD, char *, __int64, int))v155)(
                            (char *)v145 + 24,
                            v158,
                            0LL,
                            v217,
                            *(_QWORD *)v196,
                            &v267,
                            &v268,
                            0LL,
                            v221,
                            v156,
                            v157);
                  }
                }
                else if ( v146 )
                {
                  v149 = &v226;
                  if ( (*(_DWORD *)(*((_QWORD *)v145 + 6) + 40LL) & 0x80u) == 0 )
                    v149 = 0LL;
                  v12 = SimBitBlt(
                          (char *)v145 + 24,
                          v202,
                          0LL,
                          v217,
                          *(_QWORD *)v196,
                          &v267,
                          &v268,
                          0LL,
                          v221,
                          (char *)v118 + 1200,
                          v198,
                          v149);
                }
LABEL_268:
                if ( v76 )
                {
                  cEntries = (int)v76[1].cEntries;
                  if ( (int)cEntries < 0 )
                  {
                    if ( (_DWORD)cEntries == -1 )
                      FreeThreadBufferWithTag(v76);
                  }
                  else
                  {
                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                  }
                }
LABEL_115:
                v72 = v235;
                if ( (v235 & 0x1000) == 0 )
                  goto LABEL_294;
                if ( (v235 & 0x8000) != 0 )
                {
                  v73 = v237[0];
                  if ( v237[0] )
                  {
                    v74 = (SURFACE *)*((_QWORD *)v237[0] + 62);
                    if ( (v235 & 0x400) != 0 )
                    {
                      bUnHookRedir((struct XDCOBJ *)v237);
                      v73 = v237[0];
                      LOWORD(v72) = v235 & 0xFBFF;
                      v235 &= ~0x400u;
                    }
                    if ( (v72 & 0x2000) != 0 )
                    {
                      bUnHookBmpDrv((struct XDCOBJ *)v237);
                      v73 = v237[0];
                      LOWORD(v72) = v235 & 0xDFFF;
                      v235 &= ~0x2000u;
                    }
                    if ( (v72 & 0x1000) != 0 )
                    {
                      if ( (*((_DWORD *)v73 + 11) & 1) == 0 )
                      {
                        SURFACE::bUnMap(v74, &v226, v73);
                        v73 = v237[0];
                      }
                      *((_DWORD *)v73 + 11) &= ~1u;
                    }
                  }
                  _InterlockedOr(v192, 0);
                  if ( v238[0] )
                    DEVLOCKBLTOBJ::bUnMapSrcSurfaceView((DEVLOCKBLTOBJ *)&v226);
                }
                else
                {
                  if ( v238[0] )
                    DEVLOCKBLTOBJ::bUnMapSrcSurfaceView((DEVLOCKBLTOBJ *)&v226);
                  _InterlockedOr(v192, 0);
                  v161 = v237[0];
                  v72 = v235;
                  if ( !v237[0] )
                    goto LABEL_295;
                  v162 = (SURFACE *)*((_QWORD *)v237[0] + 62);
                  if ( (v235 & 0x400) != 0 )
                  {
                    bUnHookRedir((struct XDCOBJ *)v237);
                    v72 = v235;
                    v161 = v237[0];
                    LODWORD(v72) = v235 & 0xFFFFFBFF;
                    v235 &= ~0x400u;
                  }
                  if ( (v72 & 0x2000) != 0 )
                  {
                    bUnHookBmpDrv((struct XDCOBJ *)v237);
                    v72 = v235;
                    v161 = v237[0];
                    LODWORD(v72) = v235 & 0xFFFFDFFF;
                    v235 &= ~0x2000u;
                  }
                  if ( (v72 & 0x1000) == 0 )
                    goto LABEL_288;
                  if ( (*((_DWORD *)v161 + 11) & 1) == 0 )
                  {
                    SURFACE::bUnMap(v162, &v226, v161);
                    v161 = v237[0];
                  }
                  *((_DWORD *)v161 + 11) &= ~1u;
                }
                v161 = v237[0];
                v72 = v235;
LABEL_288:
                if ( !v161
                  || (v72 & 0x1000) == 0
                  || (*((_DWORD *)v161 + 9) & 0x4000) == 0
                  || !*((_QWORD *)v161 + 59)
                  || !*((_DWORD *)v161 + 122) )
                {
                  goto LABEL_295;
                }
                GreUpdateSpriteDevLockEnd((struct XDCOBJ *)v237, v72 & 0x400000);
                v72 = v235;
LABEL_294:
                v161 = v237[0];
LABEL_295:
                if ( v229 )
                {
                  CAutoTGO::~CAutoTGO((CAutoTGO *)v232);
                  DEVLOCKBLTOBJ::TmpSrcCleanup((DEVLOCKBLTOBJ *)&v226);
                  v161 = v237[0];
                  v72 = v235;
                }
                if ( (v72 & 0x1000) != 0 )
                {
                  if ( (v72 & 0x8000) != 0 )
                  {
                    if ( v161 )
                    {
                      v163 = *((_QWORD *)v161 + 6);
                      if ( (v72 & 0x10) != 0 )
                      {
                        *((_DWORD *)v161 + 9) &= ~0x4000u;
                        DC::pSurface(v237[0], *(struct SURFACE **)(v163 + 2552));
                      }
                      DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v226, (struct XDCOBJ *)v237);
                      XDCOBJ::vUnlock((XDCOBJ *)v237);
                      v237[0] = 0LL;
                    }
                    _InterlockedOr(v192, 0);
                    if ( v238[0] )
                    {
                      v164 = *((_QWORD *)v238[0] + 6);
                      if ( (v235 & 0x20) != 0 )
                      {
                        *((_DWORD *)v238[0] + 9) &= ~0x4000u;
                        DC::pSurface(v238[0], *(struct SURFACE **)(v164 + 2552));
                      }
                      if ( v239 )
                      {
                        v165 = *(_QWORD *)(v239 + 72);
                        CurrentProcess = PsGetCurrentProcess(v72, v164, v161, v37);
                        MmUnmapViewOfSection(CurrentProcess, v165);
                      }
                      DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v226, (struct XDCOBJ *)v238);
                      XDCOBJ::vUnlock((XDCOBJ *)v238);
                      v238[0] = 0LL;
                    }
                    v235 &= ~0x8000u;
                  }
                  else
                  {
                    if ( v238[0] )
                    {
                      v167 = *((_QWORD *)v238[0] + 6);
                      if ( (v72 & 0x20) != 0 )
                      {
                        *((_DWORD *)v238[0] + 9) &= ~0x4000u;
                        DC::pSurface(v238[0], *(struct SURFACE **)(v167 + 2552));
                      }
                      if ( v239 )
                      {
                        v168 = *(_QWORD *)(v239 + 72);
                        v169 = PsGetCurrentProcess(v72, v167, v161, v37);
                        MmUnmapViewOfSection(v169, v168);
                      }
                      DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v226, (struct XDCOBJ *)v238);
                      XDCOBJ::vUnlock((XDCOBJ *)v238);
                      v238[0] = 0LL;
                    }
                    _InterlockedOr(v192, 0);
                    if ( v237[0] )
                    {
                      v170 = *((_QWORD *)v237[0] + 6);
                      if ( (v235 & 0x10) != 0 )
                      {
                        *((_DWORD *)v237[0] + 9) &= ~0x4000u;
                        DC::pSurface(v237[0], *(struct SURFACE **)(v170 + 2552));
                      }
                      DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v226, (struct XDCOBJ *)v237);
                      XDCOBJ::vUnlock((XDCOBJ *)v237);
                      v237[0] = 0LL;
                    }
                  }
                  GreDecLockCount();
                  v235 &= ~0x1000u;
                  CurrentThread = KeGetCurrentThread();
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v173, v172) )
                  {
                    v174 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                    if ( v174 )
                    {
                      v175 = *v174;
                      if ( v175 )
                      {
                        *(_QWORD *)(v175 + 320) = 0LL;
                        *(_QWORD *)(v175 + 312) = 0LL;
                      }
                    }
                  }
                  LODWORD(v72) = v235;
                }
                else if ( (v72 & 0x800000) != 0 )
                {
                  GreDecLockCount();
                  LODWORD(v72) = v235 & 0xFF7FFFFF;
                  v235 &= ~0x800000u;
                }
                if ( (_QWORD)v226 )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v226);
                  GreReleaseSemaphoreInternal(v226);
                  LODWORD(v72) = v235;
                }
                if ( *((_QWORD *)&v226 + 1) )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)&v226 + 1));
                  GreReleaseSemaphoreInternal(*((_QWORD *)&v226 + 1));
                  LODWORD(v72) = v235;
                }
                if ( (v72 & 8) != 0 )
                  v235 = v72 & 0xFFFFFFF7;
                if ( (_QWORD)v227 )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v227);
                  GreReleaseSemaphoreInternal(v227);
                }
                if ( *((_QWORD *)&v240 + 1) )
                {
                  DCOBJ::DCOBJ((DCOBJ *)v261, v241);
                  SURFREF::SURFREF((SURFREF *)v257);
                  SURFREF::SURFREF((SURFREF *)v262);
                  LOBYTE(v176) = 5;
                  v177 = HmgShareLock(v240, v176);
                  LOBYTE(v178) = 5;
                  v258 = (HSURF *)v177;
                  v263 = (struct SURFACE *)HmgShareLock(*((_QWORD *)&v240 + 1), v178);
                  v179 = *v258;
                  DC::pSurface(v261[0], v263);
                  DEC_SHARE_REF_CNT(v258);
                  v258 = 0LL;
                  DEC_SHARE_REF_CNT(v263);
                  v263 = 0LL;
                  GreDereferenceObject(v179, 1u);
                  v241 = 0LL;
                  *(_QWORD *)&v240 = 0LL;
                  *((_DWORD *)v261[0] + 9) |= v236;
                  if ( (*((_DWORD *)v261[0] + 9) & 0x200) != 0 )
                  {
                    v180 = 0;
                    if ( !(unsigned int)GreGetLockCount()
                      && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                    {
                      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                      v180 = 1;
                    }
                    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v206);
                    LOBYTE(v193[0]) = 5;
                    v181 = HmgShareUnlockRemoveObject(*((_QWORD *)&v240 + 1), 0LL, 0LL, 0LL, v193[0]);
                    if ( v181 )
                      SURFACE::bDeleteSurface(v181, 0LL, 1LL);
                    *((_QWORD *)v261[0] + 63) = 0LL;
                    DC::vClearRendering(v261[0]);
                    *((_QWORD *)&v240 + 1) = 0LL;
                    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v182);
                    if ( v180 )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                      GreReleaseSemaphoreInternal(ghsemGreLock);
                    }
                  }
                  else
                  {
                    LOBYTE(v193[0]) = 5;
                    v183 = HmgShareUnlockRemoveObject(*((_QWORD *)&v240 + 1), 0LL, 0LL, 0LL, v193[0]);
                    if ( v183 )
                      SURFACE::bDeleteSurface(v183, 0LL, 1LL);
                    *((_QWORD *)v261[0] + 63) = 0LL;
                    *((_QWORD *)&v240 + 1) = 0LL;
                  }
                  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                  if ( v263 )
                    DEC_SHARE_REF_CNT(v263);
                  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v262);
                  if ( v258 )
                    DEC_SHARE_REF_CNT(v258);
                  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v257);
                  DCOBJ::~DCOBJ((DCOBJ *)v261);
                }
                if ( v243 )
                {
                  DCOBJ::DCOBJ((DCOBJ *)v266, v244);
                  SURFREF::SURFREF((SURFREF *)v259);
                  SURFREF::SURFREF((SURFREF *)v264);
                  LOBYTE(v184) = 5;
                  v185 = HmgShareLock(v242, v184);
                  LOBYTE(v186) = 5;
                  v260 = (HSURF *)v185;
                  v265 = (struct SURFACE *)HmgShareLock(v243, v186);
                  v187 = *v260;
                  DC::pSurface(v266[0], v265);
                  DEC_SHARE_REF_CNT(v260);
                  v260 = 0LL;
                  DEC_SHARE_REF_CNT(v265);
                  v265 = 0LL;
                  GreDereferenceObject(v187, 1u);
                  v244 = 0LL;
                  v242 = 0LL;
                  if ( (*((_DWORD *)v266[0] + 9) & 0x200) != 0 )
                  {
                    v188 = 0;
                    if ( !(unsigned int)GreGetLockCount()
                      && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                    {
                      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                      v188 = 1;
                    }
                    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v203);
                    LOBYTE(v193[0]) = 5;
                    v189 = HmgShareUnlockRemoveObject(v243, 0LL, 0LL, 0LL, v193[0]);
                    if ( v189 )
                      SURFACE::bDeleteSurface(v189, 0LL, 1LL);
                    *((_QWORD *)v266[0] + 63) = 0LL;
                    DC::vClearRendering(v266[0]);
                    v243 = 0LL;
                    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v190);
                    if ( v188 )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                      GreReleaseSemaphoreInternal(ghsemGreLock);
                    }
                  }
                  else
                  {
                    LOBYTE(v193[0]) = 5;
                    v191 = HmgShareUnlockRemoveObject(v243, 0LL, 0LL, 0LL, v193[0]);
                    if ( v191 )
                      SURFACE::bDeleteSurface(v191, 0LL, 1LL);
                    *((_QWORD *)v266[0] + 63) = 0LL;
                    v243 = 0LL;
                  }
                  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                  if ( v265 )
                    DEC_SHARE_REF_CNT(v265);
                  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v264);
                  if ( v260 )
                    DEC_SHARE_REF_CNT(v260);
                  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v259);
                  DCOBJ::~DCOBJ((DCOBJ *)v266);
                }
                DCOBJ::~DCOBJ((DCOBJ *)v238);
                DCOBJ::~DCOBJ((DCOBJ *)v237);
                CAutoTGO::~CAutoTGO((CAutoTGO *)v232);
                SURFMEM::~SURFMEM((SURFMEM *)&v229);
                goto LABEL_372;
              }
              v69 = (struct _RECTL *)((char *)v38 + 1080);
              v70 = *((_DWORD *)v38 + 270);
              if ( v70 == *((_DWORD *)v38 + 272) || (v71 = *((_DWORD *)v38 + 271), v71 == *((_DWORD *)v38 + 273)) )
              {
                *v69 = v270;
              }
              else
              {
                if ( v67 < v70 )
                {
                  v69->left = v67;
                  v38 = v209[0];
                  v68 = v270.right;
                  v37 = (unsigned int)v270.top;
                }
                if ( (int)v37 < v71 )
                {
                  v69->top = v37;
                  v38 = v209[0];
                  v68 = v270.right;
                }
                if ( v68 > v69->right )
                {
                  v69->right = v68;
                  v38 = v209[0];
                }
                if ( v270.bottom <= v69->bottom )
                  goto LABEL_130;
                v69->bottom = v270.bottom;
              }
              v38 = v209[0];
LABEL_130:
              v218 = *((_QWORD *)v38 + 149);
              if ( v218 )
              {
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v249);
                RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v249);
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v248);
                RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v248);
                if ( v249[0] )
                {
                  if ( v248[0] )
                  {
                    RGNOBJ::vSet((RGNOBJ *)v248, &v270);
                    if ( RGNOBJ::bMerge((RGNOBJ *)v249, (struct RGNOBJ *)&v218, (struct RGNOBJ *)v248, BYTE2(gafjRgnOp)) )
                    {
                      RGNOBJ::vSwap((RGNOBJ *)&v218, (struct RGNOBJ *)v249);
                      *((_QWORD *)v209[0] + 149) = v218;
                    }
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v248);
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v249);
                v38 = v209[0];
              }
              goto LABEL_136;
            }
          }
LABEL_273:
          v12 = 1;
          goto LABEL_115;
        }
        if ( *((_DWORD *)v48 + 164) )
        {
          if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v48 + 164) )
            goto LABEL_114;
          v38 = v209[0];
          v37 = (unsigned int)v267.top;
          v47 = v267.left;
        }
        v49 = *((_DWORD *)v48 + 28);
        if ( (v49 & 0x800) != 0 )
        {
          v50 = UserSurfaceAccessCheck(*((_QWORD *)v48 + 81), v36, v38, v37);
        }
        else
        {
          if ( (v49 & 0x10000000) == 0 )
          {
LABEL_69:
            if ( ((_DWORD)v39[29] & 8) == 0 && !*((_QWORD *)v39 + 28)
              || (v46 = 512LL, (*((_WORD *)v39 + 51) & 0x200) == 0) )
            {
              v51 = *((_DWORD *)v39 + 28);
              if ( (v51 & 0x800) != 0 )
              {
                v52 = UserSurfaceAccessCheck(*((_QWORD *)v39 + 81), v36, v38, v37);
              }
              else
              {
                if ( (v51 & 0x10000000) == 0 )
                  goto LABEL_78;
                v52 = UserScreenAccessCheck(v46, v36, v38, v37);
              }
              if ( v52 )
              {
                v38 = v209[0];
                v37 = (unsigned int)v267.top;
                v47 = v267.left;
                goto LABEL_78;
              }
            }
LABEL_114:
            EngSetLastError(6u);
            goto LABEL_115;
          }
          v50 = UserScreenAccessCheck(v46, v36, v38, v37);
        }
        if ( !v50 )
          goto LABEL_114;
        v38 = v209[0];
        v37 = (unsigned int)v267.top;
        v47 = v267.left;
        goto LABEL_69;
      }
      v12 = 1;
    }
    else
    {
      v12 = GreStretchBltInternal(v222, left, top, a4, v196[0], v208, a7, v11, a4, v196[0], v18, a10, 0);
    }
LABEL_372:
    if ( v207 )
      DC::dwSetLayout(v209[0], -1, v201);
LABEL_374:
    DCOBJ::~DCOBJ((DCOBJ *)v250);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v209);
  return v12;
}
