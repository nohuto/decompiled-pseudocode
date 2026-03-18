/*
 * XREFs of NtGdiBitBltInternal @ 0x1C0097220
 * Callers:
 *     NtUserBitBltSysBmp @ 0x1C000D180 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     _InternalGetIconInfo @ 0x1C0015C34 (_InternalGetIconInfo.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C002C73C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0063E88 (-UT_InvertCaret@@YAXXZ.c)
 *     NtGdiBitBlt @ 0x1C00971B0 (NtGdiBitBlt.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     UpdateSpriteArea @ 0x1C00E7B80 (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E8CB4 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     RecolorDeskPattern @ 0x1C0113100 (RecolorDeskPattern.c)
 *     xxxClientExtTextOutW @ 0x1C0132C8C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C0133238 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0136078 (CreateSpb.c)
 *     StopFade @ 0x1C01B18B0 (StopFade.c)
 *     xxxPrintWindow @ 0x1C01B1C10 (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C01CE808 (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C01E1E54 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C01E2234 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01E4EFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C01FAF90 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C01FB318 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C01FEB40 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0202548 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     BltColor @ 0x1C020708C (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0207838 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C02081FC (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 *     DxgkEngBltViaGDI @ 0x1C0242BA0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0017DC8 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GreClientRgnUpdatedStable @ 0x1C0034634 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C00346AC (GreClientRgnUpdated.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00893D0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009AB6C (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009AF40 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A51B0 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00A7A4C (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00AB618 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C615C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C023BCB0 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0243E8C (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C0243FDC (SimBitBlt.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C026B380 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C026D8E0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        int left,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10,
        char a11)
{
  int v12; // r15d
  int top; // esi
  __int64 v15; // rdx
  unsigned int v16; // r12d
  int v18; // r14d
  DC *v19; // rcx
  __int64 v20; // rdx
  DC *v21; // rax
  int v22; // ebx
  int v23; // ebx
  DC *v24; // rdx
  DC *v25; // r9
  __int64 v26; // r10
  int v27; // r8d
  __int64 v28; // rbx
  unsigned int v29; // eax
  int v30; // edi
  struct MATRIX *v31; // rdx
  int v32; // ecx
  int v33; // edx
  int v34; // r9d
  int v35; // r8d
  __int64 bottom; // r8
  int right; // edx
  LONG v38; // eax
  unsigned int v39; // eax
  DC *v40; // rcx
  int v41; // eax
  DC *v42; // r8
  HDC v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // r15
  unsigned __int8 v46; // cl
  __int64 v47; // rdx
  char *v48; // rdi
  __int64 v49; // rdx
  int v50; // ecx
  __int64 v51; // rcx
  int v52; // r9d
  int v53; // edx
  HDC v54; // r13
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  __int64 v59; // rdi
  int v60; // r10d
  int v61; // r11d
  __int64 v62; // rax
  int v63; // ebx
  int v64; // r14d
  __int64 v65; // rax
  int v66; // eax
  int v67; // ecx
  LONG v68; // r10d
  int v69; // ecx
  char *v70; // r12
  struct REGION *v71; // rax
  int v72; // r10d
  __int64 v73; // rax
  LONG v74; // r9d
  int v75; // ecx
  int v76; // edx
  struct _RECTL *v77; // rax
  LONG v78; // r11d
  int v79; // r10d
  __int64 v80; // rcx
  DC *v81; // rdx
  SURFACE *v82; // rbx
  int v83; // eax
  XLATEOBJ *v84; // rbx
  __int64 v85; // r14
  __int64 v86; // rax
  int v87; // ecx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // edx
  __int64 v92; // rax
  int v93; // ecx
  unsigned int v94; // r13d
  unsigned int v95; // r11d
  __int64 v96; // r12
  int v97; // eax
  int v98; // eax
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // eax
  __int64 v102; // r8
  __int64 v103; // r9
  XLATEOBJ *v104; // rdx
  FLONG flXlate; // r10d
  int v106; // eax
  XLATEOBJ *XlateObject; // rax
  int v108; // eax
  SURFACE *v109; // r15
  int v110; // edi
  __m128i v111; // xmm6
  int v112; // esi
  __int64 v113; // rax
  int v114; // edx
  int v115; // r8d
  _DWORD *v116; // rax
  int v117; // eax
  int v118; // eax
  __int32 v119; // r15d
  __int64 v120; // rax
  int v121; // edx
  unsigned int v122; // r8d
  _DWORD *v123; // rax
  float v124; // xmm4_4
  DC *v125; // r14
  int v126; // eax
  float v127; // xmm2_4
  DC *v128; // r13
  unsigned int v129; // eax
  float v130; // xmm1_4
  float v131; // xmm4_4
  int v132; // ecx
  __int32 v133; // r9d
  int v134; // r10d
  int v135; // eax
  int v136; // edx
  __m128i v137; // xmm0
  int v138; // r11d
  __m128i v139; // xmm6
  bool v140; // cc
  int v141; // ecx
  __int32 v142; // edi
  int v143; // eax
  int v144; // eax
  __int32 v145; // edx
  int v146; // eax
  int v147; // ecx
  __int32 v148; // r8d
  __m128i v149; // xmm6
  int v150; // eax
  int v151; // ecx
  struct _RECTL v152; // xmm7
  SURFACE *v153; // rsi
  char v154; // r15
  __int64 v155; // rdx
  __int64 v156; // r8
  __int128 *v157; // rax
  bool v158; // zf
  __int64 v159; // rdi
  __int64 v160; // rdx
  __int64 ThreadWin32Thread; // rax
  unsigned int v162; // eax
  __int64 v163; // rax
  int (*v164)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v165; // rdx
  int v166; // r8d
  __int64 v167; // r10
  __int64 cEntries; // rax
  int v169; // r12d
  DC *v170; // rdx
  SURFACE *v171; // rcx
  DC *v172; // rdx
  SURFACE *v173; // rbx
  __int64 v174; // r8
  __int64 v175; // rax
  DC *v176; // rcx
  __int64 v177; // rbx
  DC *v178; // rcx
  __int64 v179; // rax
  DC *v180; // rcx
  __int64 v181; // rbx
  __int64 CurrentProcess; // rax
  __int64 v183; // rbx
  DC *v184; // rdx
  __int64 v185; // rax
  DC *v186; // rcx
  __int64 v187; // rbx
  __int64 v188; // rax
  __int64 v189; // rbx
  __int64 v190; // rax
  DC *v191; // rcx
  __int64 v192; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 *v196; // rax
  __int64 v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rax
  __int64 v200; // rdx
  HSURF *v201; // rdi
  __int64 v202; // rax
  DC *v203; // r14
  __int64 v204; // rbx
  HSURF v205; // rsi
  DC *v206; // rcx
  char v207; // bl
  __int64 v208; // rax
  DCVISRGNSHARELOCK *v209; // rcx
  __int64 v210; // rax
  __int64 v211; // rdx
  __int64 v212; // rax
  __int64 v213; // rdx
  HSURF *v214; // rdi
  __int64 v215; // rax
  DC *v216; // r14
  __int64 v217; // rbx
  HSURF v218; // rsi
  DC *v219; // rcx
  char v220; // bl
  __int64 v221; // rax
  DCVISRGNSHARELOCK *v222; // rcx
  __int64 v223; // rax
  __int64 v224; // rbx
  __int64 v225; // rbx
  signed __int32 v226[8]; // [rsp+0h] [rbp-100h] BYREF
  int v227[2]; // [rsp+20h] [rbp-E0h]
  HDC v228; // [rsp+28h] [rbp-D8h]
  int v229[2]; // [rsp+30h] [rbp-D0h]
  int v230[2]; // [rsp+38h] [rbp-C8h]
  int v231[2]; // [rsp+40h] [rbp-C0h]
  int v232[2]; // [rsp+48h] [rbp-B8h]
  int v233; // [rsp+70h] [rbp-90h] BYREF
  DC *v234; // [rsp+78h] [rbp-88h] BYREF
  __int64 v235; // [rsp+80h] [rbp-80h]
  int v236; // [rsp+88h] [rbp-78h] BYREF
  int v237; // [rsp+8Ch] [rbp-74h] BYREF
  DC *v238; // [rsp+90h] [rbp-70h] BYREF
  __int64 v239; // [rsp+98h] [rbp-68h]
  int v240; // [rsp+A0h] [rbp-60h] BYREF
  XLATEOBJ *v241; // [rsp+A8h] [rbp-58h] BYREF
  char v242; // [rsp+B0h] [rbp-50h] BYREF
  char v243[3]; // [rsp+B1h] [rbp-4Fh] BYREF
  int v244; // [rsp+B4h] [rbp-4Ch]
  int v245; // [rsp+B8h] [rbp-48h]
  __int128 v246; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v247; // [rsp+D0h] [rbp-30h]
  __int64 v248; // [rsp+E0h] [rbp-20h]
  __int64 v249; // [rsp+E8h] [rbp-18h] BYREF
  char v250; // [rsp+F0h] [rbp-10h]
  int v251; // [rsp+F4h] [rbp-Ch]
  __int64 v252; // [rsp+F8h] [rbp-8h]
  _QWORD **v253; // [rsp+100h] [rbp+0h]
  unsigned int v254; // [rsp+108h] [rbp+8h]
  int v255; // [rsp+10Ch] [rbp+Ch]
  DC *v256; // [rsp+110h] [rbp+10h] BYREF
  __int64 v257; // [rsp+118h] [rbp+18h]
  DC *v258; // [rsp+120h] [rbp+20h] BYREF
  __int64 v259; // [rsp+128h] [rbp+28h]
  __int64 v260; // [rsp+130h] [rbp+30h]
  __int64 v261; // [rsp+138h] [rbp+38h]
  __int64 v262; // [rsp+140h] [rbp+40h]
  HDC v263; // [rsp+148h] [rbp+48h]
  __int128 v264; // [rsp+150h] [rbp+50h]
  HDC v265; // [rsp+160h] [rbp+60h]
  int v266; // [rsp+170h] [rbp+70h]
  unsigned int v267; // [rsp+174h] [rbp+74h]
  unsigned int v268; // [rsp+178h] [rbp+78h]
  int v269; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v270; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v271; // [rsp+184h] [rbp+84h]
  _QWORD *v272; // [rsp+188h] [rbp+88h]
  HDC v273; // [rsp+190h] [rbp+90h]
  unsigned __int64 v274; // [rsp+198h] [rbp+98h] BYREF
  __int32 v275; // [rsp+1A0h] [rbp+A0h]
  int v276; // [rsp+1A4h] [rbp+A4h]
  unsigned __int64 v277; // [rsp+1A8h] [rbp+A8h] BYREF
  int v278; // [rsp+1B0h] [rbp+B0h]
  int v279; // [rsp+1B4h] [rbp+B4h]
  SURFACE *v280; // [rsp+1B8h] [rbp+B8h]
  char *v281; // [rsp+1C0h] [rbp+C0h]
  XLATEOBJ *v282; // [rsp+1C8h] [rbp+C8h]
  HDC v283; // [rsp+1D0h] [rbp+D0h] BYREF
  char *v284; // [rsp+1D8h] [rbp+D8h]
  _DWORD v285[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  float v286[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v287; // [rsp+1F0h] [rbp+F0h] BYREF
  int v288; // [rsp+1F8h] [rbp+F8h]
  char *v289; // [rsp+200h] [rbp+100h] BYREF
  int v290; // [rsp+208h] [rbp+108h]
  int v291; // [rsp+20Ch] [rbp+10Ch]
  struct MATRIX *v292; // [rsp+210h] [rbp+110h] BYREF
  int v293; // [rsp+218h] [rbp+118h]
  int v294; // [rsp+21Ch] [rbp+11Ch]
  _QWORD v295[2]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v296[2]; // [rsp+230h] [rbp+130h] BYREF
  struct _RECTL v297; // [rsp+240h] [rbp+140h]
  DC *v298[2]; // [rsp+250h] [rbp+150h] BYREF
  DC *v299[2]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v300; // [rsp+270h] [rbp+170h] BYREF
  __int64 v301; // [rsp+278h] [rbp+178h] BYREF
  __int64 v302; // [rsp+280h] [rbp+180h] BYREF
  __int64 v303; // [rsp+288h] [rbp+188h] BYREF
  __int64 v304; // [rsp+290h] [rbp+190h] BYREF
  struct _RECTL v305; // [rsp+2A0h] [rbp+1A0h]
  struct _RECTL v306; // [rsp+2B0h] [rbp+1B0h] BYREF
  __m128i v307; // [rsp+2C0h] [rbp+1C0h] BYREF
  __m128i v308; // [rsp+2D0h] [rbp+1D0h] BYREF
  struct _RECTL v309; // [rsp+2E0h] [rbp+1E0h] BYREF
  __m128i v310; // [rsp+2F0h] [rbp+1F0h] BYREF
  int v311; // [rsp+3D0h] [rbp+2D0h]

  v12 = a7;
  v283 = a1;
  top = a3;
  v233 = a5;
  v273 = a6;
  v15 = a8;
  v16 = 0;
  v236 = a8;
  if ( (a9 & 0x40000000) != 0 )
    return GreStretchBltInternal(
             a1,
             left,
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
  v237 = a9 & 0xDFFFFFFF;
  LOBYTE(v15) = 1;
  v235 = 0LL;
  v18 = a9 & 0x5FFFFFFF;
  v234 = (DC *)HmgLockEx(a1, v15);
  if ( !v234 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_10;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v234) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v234 + 3);
    v19 = 0LL;
    v234 = 0LL;
    goto LABEL_402;
  }
  v19 = v234;
  if ( (*((_DWORD *)v234 + 132) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v234);
LABEL_10:
    v19 = v234;
  }
  if ( v19 )
  {
    if ( (*((_DWORD *)v19 + 9) & 0x10000) == 0 )
    {
      v20 = BYTE1(v18);
      if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v18 != 16711778 && v18 != 66 )
        bSpDwmValidateSurface((struct XDCOBJ *)&v234, left, top, a4, a5);
      v239 = 0LL;
      LOBYTE(v20) = 1;
      v21 = (DC *)HmgLockEx(v273, v20);
      v238 = v21;
      if ( v21 )
      {
        if ( HIDWORD(v239) )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v21 + 6) + 40LL) & 0x8000) == 0 )
          {
LABEL_22:
            _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
            v238 = 0LL;
            goto LABEL_399;
          }
          v22 = *((_DWORD *)v21 + 626);
          if ( v22 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            v21 = v238;
            goto LABEL_22;
          }
        }
        if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v238) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v238 + 3);
          v238 = 0LL;
          goto LABEL_399;
        }
        if ( (*((_DWORD *)v238 + 132) & 4) != 0 )
          DC::vMarkTransformDirty(v238);
      }
      else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      {
        PsGetWin32KFilterSet();
      }
      if ( !v238 )
      {
LABEL_399:
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v234);
        v237 = 0;
        v225 = *(_QWORD *)v234;
        HmgDecrementExclusiveReferenceCountEx(v234, HIDWORD(v235), &v237);
        if ( v237 )
          bDeleteDCInternalEx(v225, 0LL);
        return v16;
      }
      v23 = v236;
      bSpDwmValidateSurface((struct XDCOBJ *)&v238, a7, v236, a4, v233);
      v24 = v238;
      v25 = v234;
      v26 = *((_QWORD *)v234 + 10);
      v27 = *(_DWORD *)(v26 + 312);
      if ( (((unsigned __int8)v27 ^ *(_BYTE *)(*((_QWORD *)v238 + 10) + 312LL)) & 7) != 0
        && (v237 < 0 && (v27 & 1) != 0 || (v27 & 9) == 9) )
      {
        v28 = *(_QWORD *)(v26 + 320);
        v29 = DC::dwSetLayout(v234, -1, 0);
        v25 = v234;
        v24 = v238;
        v30 = v28 - left;
        v23 = v236;
        left = v30 - a4;
        v267 = 0x80000000;
      }
      else
      {
        v29 = v271;
        v267 = 0;
      }
      v268 = v29;
      v290 = *(_DWORD *)(*((_QWORD *)v25 + 10) + 68LL);
      v291 = *(_DWORD *)(*((_QWORD *)v25 + 10) + 312LL) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v25 + 10) + 352LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v289, (struct XDCOBJ *)&v234, 0x204u, 0);
        v24 = v238;
      }
      else
      {
        v289 = (char *)v25 + 328;
      }
      v293 = *(_DWORD *)(*((_QWORD *)v24 + 10) + 68LL);
      v294 = *(_DWORD *)(*((_QWORD *)v24 + 10) + 312LL) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v24 + 10) + 352LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v292, (struct XDCOBJ *)&v238, 0x204u, 0);
        v31 = v292;
      }
      else
      {
        v31 = (DC *)((char *)v24 + 328);
        v292 = v31;
      }
      if ( (*((_DWORD *)v289 + 8) & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v289, v31) )
      {
        v32 = v233;
        v33 = a7 + a4;
        v34 = (int)v292;
        v307.m128i_i64[0] = __PAIR64__(v23, a7);
        v35 = v23 + v233;
        v307.m128i_i32[2] = a7 + a4;
        v307.m128i_i32[3] = v23 + v233;
        if ( (*((_BYTE *)v292 + 32) & 0x43) != 0x43 )
        {
          bCvtPts1(v292, &v307, 2LL);
          v35 = v307.m128i_i32[3];
          v33 = v307.m128i_i32[2];
          v32 = v233;
          v23 = v307.m128i_i32[1];
          v12 = v307.m128i_i32[0];
        }
        if ( v294 )
        {
          ++v12;
          ++v33;
          v307.m128i_i32[0] = v12;
          v307.m128i_i32[2] = v33;
        }
        if ( v12 > v33 )
        {
          v307.m128i_i32[0] = v33;
          v307.m128i_i32[2] = v12;
        }
        if ( v23 > v35 )
        {
          v307.m128i_i32[1] = v35;
          v307.m128i_i32[3] = v23;
        }
        bottom = (unsigned int)(v32 + top);
        *(_QWORD *)&v306.left = __PAIR64__(top, left);
        right = left + a4;
        v306.right = left + a4;
        v306.bottom = v32 + top;
        if ( (v289[32] & 0x43) != 0x43 )
        {
          bCvtPts1(v289, &v306, 2LL);
          bottom = (unsigned int)v306.bottom;
          right = v306.right;
          top = v306.top;
          left = v306.left;
        }
        if ( v291 )
        {
          ++left;
          ++right;
          v306.left = left;
          v306.right = right;
        }
        if ( left > right )
        {
          v38 = left;
          v306.left = right;
          left = right;
          v306.right = v38;
          right = v38;
        }
        if ( top > (int)bottom )
        {
          v39 = top;
          v306.top = bottom;
          top = bottom;
          v306.bottom = v39;
          bottom = v39;
        }
        if ( left != right && top != (_DWORD)bottom )
        {
          v40 = v234;
          v41 = *((_DWORD *)v234 + 9);
          if ( (v41 & 0xE0) != 0 )
          {
            if ( (v41 & 0x20) != 0 )
            {
              ERECTL::operator|=((char *)v234 + 1472, &v306, bottom);
              v40 = v234;
            }
            if ( (*((_DWORD *)v40 + 9) & 0x80u) != 0 )
              ERECTL::operator|=((char *)v40 + 1504, &v306, bottom);
          }
          v250 = 0;
          v249 = 0LL;
          v251 = 0;
          v257 = 0LL;
          v259 = 0LL;
          v246 = 0LL;
          v247 = 0LL;
          v248 = 0LL;
          v254 = 0;
          v252 = 0LL;
          v253 = 0LL;
          v260 = 0LL;
          v263 = 0LL;
          v261 = 0LL;
          v262 = 0LL;
          v265 = 0LL;
          v264 = 0LL;
          v256 = 0LL;
          v258 = 0LL;
          if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                (DEVLOCKBLTOBJ *)&v246,
                                (struct XDCOBJ *)&v234,
                                (struct XDCOBJ *)&v238,
                                v34) )
          {
            v169 = XDCOBJ::bFullScreen((XDCOBJ *)&v238);
            v16 = XDCOBJ::bFullScreen((XDCOBJ *)&v234) | v169;
            goto LABEL_130;
          }
          v42 = v234;
          v43 = (HDC)*((_QWORD *)v234 + 63);
          v280 = (SURFACE *)v43;
          if ( !v43 )
          {
            v16 = 1;
            goto LABEL_130;
          }
          v44 = *((_QWORD *)v43 + 16);
          v45 = *((_QWORD *)v234 + 12);
          v46 = (a9 & 0x5FFFFFFFu) >> 16;
          v266 = (v46 << 8) | v46;
          if ( ((v46 ^ (unsigned __int8)(16 * v46)) & 0xF0) != 0 )
          {
            v47 = *((_QWORD *)v234 + 10);
            v48 = (char *)v234 + 1592;
            v284 = (char *)v234 + 1592;
            if ( (*(_DWORD *)(v47 + 8) & 0x1000) != 0 )
            {
              GreDCSelectBrush(v234, *(_QWORD *)(v47 + 16));
              v42 = v234;
            }
            v49 = *((_QWORD *)v42 + 10);
            v50 = *(_DWORD *)(v49 + 8);
            if ( (v50 & 1) != 0 || (*((_DWORD *)v42 + 81) & 1) != 0 )
            {
              v229[0] = 1;
              *(_DWORD *)(v49 + 8) = v50 & 0xFFFFFFFE;
              v228 = v43;
              *(_QWORD *)v227 = v44;
              *((_DWORD *)v234 + 81) &= ~1u;
              EBRUSHOBJ::vInitBrush(v48, v234, *((_QWORD *)v234 + 18), v45, *(_QWORD *)v227, v228, v229[0]);
              v42 = v234;
            }
          }
          else
          {
            v284 = 0LL;
          }
          v51 = *((_DWORD *)v42 + 10) & 1;
          v52 = *((_DWORD *)v42 + 2 * v51 + 356) + v306.left;
          v306.left = v52;
          v306.right += *((_DWORD *)v42 + 2 * v51 + 356);
          v53 = *((_DWORD *)v42 + 2 * v51 + 357) + v306.top;
          v306.top = v53;
          v306.bottom += *((_DWORD *)v42 + 2 * v51 + 357);
          v54 = (HDC)*((_QWORD *)v238 + 63);
          v273 = v54;
          if ( !v54 )
            goto LABEL_285;
          if ( (a11 & 2) != 0 )
            goto LABEL_97;
          if ( *((_DWORD *)v54 + 164) )
          {
            if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v54 + 164) )
              goto LABEL_129;
            v42 = v234;
            v53 = v306.top;
            v52 = v306.left;
          }
          v55 = *((_DWORD *)v54 + 28);
          if ( (v55 & 0x800) != 0 )
          {
            v56 = UserSurfaceAccessCheck(*((_QWORD *)v54 + 81));
          }
          else
          {
            if ( (v55 & 0x10000000) == 0 )
            {
LABEL_88:
              if ( ((_DWORD)v43[29] & 8) != 0 || *((_QWORD *)v43 + 28) )
              {
                v51 = 512LL;
                if ( (*((_WORD *)v43 + 51) & 0x200) != 0 )
                  goto LABEL_129;
              }
              v57 = *((_DWORD *)v43 + 28);
              if ( (v57 & 0x800) != 0 )
              {
                v58 = UserSurfaceAccessCheck(*((_QWORD *)v43 + 81));
                goto LABEL_95;
              }
              if ( (v57 & 0x10000000) != 0 )
              {
                v58 = UserScreenAccessCheck(v51);
LABEL_95:
                if ( v58 )
                {
                  v42 = v234;
                  v53 = v306.top;
                  v52 = v306.left;
                  goto LABEL_97;
                }
LABEL_129:
                EngSetLastError(6u);
                goto LABEL_130;
              }
LABEL_97:
              v59 = *((_QWORD *)v54 + 16);
              v60 = 0;
              v61 = 0;
              v62 = *((_DWORD *)v238 + 10) & 1;
              v63 = v52 - *((_DWORD *)v238 + 2 * v62 + 356) - v307.m128i_i32[0];
              v64 = v53 - *((_DWORD *)v238 + 2 * v62 + 357) - v307.m128i_i32[1];
              v65 = *((_QWORD *)v54 + 6);
              v245 = v63;
              v244 = v64;
              if ( v65 && v54 == *(HDC *)(v65 + 2544) && (*(_DWORD *)(v65 + 40) & 0x20000) != 0 )
              {
                v60 = *(_DWORD *)(v65 + 2576);
                v61 = *(_DWORD *)(v65 + 2580);
              }
              if ( v63 + v60 > v52 )
                v52 = v63 + v60;
              v306.left = v52;
              if ( v61 + v64 > v53 )
                v53 = v61 + v64;
              v66 = v306.bottom;
              v306.top = v53;
              v67 = v60 + *((_DWORD *)v54 + 14);
              v68 = v306.right;
              v69 = v63 + v67;
              if ( v69 < v306.right )
                v68 = v69;
              v306.right = v68;
              if ( v64 + v61 + *((_DWORD *)v54 + 15) < v306.bottom )
                v66 = v64 + v61 + *((_DWORD *)v54 + 15);
              v306.bottom = v66;
              if ( v52 < v68 && v53 < v66 )
              {
                v281 = 0LL;
                if ( v52 >= *((_DWORD *)v42 + 352)
                  && v68 <= *((_DWORD *)v42 + 354)
                  && v53 >= *((_DWORD *)v42 + 353)
                  && v66 <= *((_DWORD *)v42 + 355) )
                {
LABEL_117:
                  v72 = *((_DWORD *)v42 + 9);
                  if ( (v72 & 0xE0) == 0 )
                    goto LABEL_151;
                  v309 = v306;
                  v73 = *((_DWORD *)v42 + 10) & 1;
                  v74 = v306.left - *((_DWORD *)v42 + 2 * v73 + 356);
                  v309.left = v74;
                  v75 = v306.right - *((_DWORD *)v42 + 2 * v73 + 356);
                  v309.right = v75;
                  v76 = v306.top - *((_DWORD *)v42 + 2 * v73 + 357);
                  v309.top = v76;
                  v309.bottom = v306.bottom - *((_DWORD *)v42 + 2 * v73 + 357);
                  if ( (v72 & 0x40) == 0 )
                    goto LABEL_151;
                  v77 = (struct _RECTL *)((char *)v42 + 1488);
                  v78 = *((_DWORD *)v42 + 372);
                  if ( v78 == *((_DWORD *)v42 + 374) || (v79 = *((_DWORD *)v42 + 373), v79 == *((_DWORD *)v42 + 375)) )
                  {
                    *v77 = v309;
                  }
                  else
                  {
                    if ( v74 < v78 )
                    {
                      v77->left = v74;
                      v42 = v234;
                      v75 = v309.right;
                      v76 = v309.top;
                    }
                    if ( v76 < v79 )
                    {
                      v77->top = v76;
                      v42 = v234;
                      v75 = v309.right;
                    }
                    if ( v75 > v77->right )
                    {
                      v77->right = v75;
                      v42 = v234;
                    }
                    if ( v309.bottom <= v77->bottom )
                      goto LABEL_145;
                    v77->bottom = v309.bottom;
                  }
                  v42 = v234;
LABEL_145:
                  v287 = *((_QWORD *)v42 + 197);
                  if ( v287 )
                  {
                    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v296);
                    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v296);
                    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v295);
                    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v295);
                    if ( v296[0] )
                    {
                      if ( v295[0] )
                      {
                        RGNOBJ::vSet((RGNOBJ *)v295, &v309);
                        if ( RGNOBJ::bMerge(
                               (RGNOBJ *)v296,
                               (struct RGNOBJ *)&v287,
                               (struct RGNOBJ *)v295,
                               BYTE2(gafjRgnOp)) )
                        {
                          RGNOBJ::vSwap((RGNOBJ *)&v287, (struct RGNOBJ *)v296);
                          *((_QWORD *)v234 + 197) = v287;
                        }
                      }
                    }
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v295);
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v296);
                    v42 = v234;
                  }
LABEL_151:
                  v83 = v306.left - v63;
                  v84 = 0LL;
                  v307.m128i_i32[0] = v83;
                  v241 = 0LL;
                  v307.m128i_i32[1] = v306.top - v64;
                  if ( *((_QWORD *)v238 + 63) == *((_QWORD *)v42 + 63) )
                  {
                    v282 = 0LL;
                    v16 = 1;
                    goto LABEL_205;
                  }
                  v233 = a10;
                  v85 = *((_QWORD *)v238 + 12);
                  if ( a10 == -1 )
                    v233 = *(_DWORD *)(*((_QWORD *)v238 + 10) + 36LL);
                  v86 = *((_QWORD *)v42 + 10);
                  v87 = *(_DWORD *)(v86 + 32);
                  v240 = *(_DWORD *)(v86 + 40);
                  v237 = *((_DWORD *)v42 + 32);
                  v236 = v87;
                  if ( (v59
                     || v44
                     && ((*(_DWORD *)(v44 + 24) & 0x800) == 0
                      || (v88 = *(_QWORD *)(v45 + 80)) != 0 && v88 != *(_QWORD *)(v45 + 72)))
                    && (v44
                     || (*(_DWORD *)(v59 + 24) & 0x800) == 0
                     || (v89 = *(_QWORD *)(v45 + 80)) != 0 && v89 != *(_QWORD *)(v45 + 72)) )
                  {
                    if ( !v59 || !v44 )
                    {
LABEL_194:
                      v232[0] = 0;
                      v231[0] = v233;
                      v230[0] = v236;
                      v229[0] = v240;
                      XlateObject = (XLATEOBJ *)CreateXlateObject(
                                                  0LL,
                                                  v237,
                                                  v59,
                                                  v44,
                                                  v85,
                                                  v45,
                                                  *(_QWORD *)v229,
                                                  *(_QWORD *)v230,
                                                  *(_QWORD *)v231,
                                                  *(_QWORD *)v232);
                      v241 = XlateObject;
                      v84 = XlateObject;
                      if ( XlateObject )
                      {
                        if ( v59 && v44 && (XlateObject[3].flXlate & 0x200) == 0 )
                          EXLATEOBJ::vAddToCache(&v241, v59, v44, v85, v45);
LABEL_199:
                        v16 = 1;
                      }
                      v42 = v234;
                      goto LABEL_201;
                    }
                    v90 = *(_QWORD *)(v59 + 120);
                    if ( v90 == v59 )
                      v91 = *(_DWORD *)(v59 + 32);
                    else
                      v91 = *(_DWORD *)(v90 + 32);
                    v92 = *(_QWORD *)(v44 + 120);
                    if ( v92 == v44 )
                      v93 = *(_DWORD *)(v44 + 32);
                    else
                      v93 = *(_DWORD *)(v92 + 32);
                    if ( v91 != v93 )
                    {
                      v94 = *(_DWORD *)(v59 + 56);
                      v301 = v45;
                      v302 = v85;
                      v300 = v44;
                      v303 = ghsemPalette;
                      GreAcquireSemaphore(ghsemPalette);
                      v95 = 0;
                      v96 = *(_QWORD *)(v59 + 120);
                      do
                      {
                        if ( v96 == v59 )
                          v97 = *(_DWORD *)(v59 + 32);
                        else
                          v97 = *(_DWORD *)(v96 + 32);
                        if ( *((_DWORD *)&xlateTable + 8 * v94 + 4) == v97 )
                        {
                          v98 = XEPALOBJ::ulTime((XEPALOBJ *)&v300);
                          if ( *(_DWORD *)(v99 + v100 + 20) == v98 )
                          {
                            v101 = XEPALOBJ::ulTime((XEPALOBJ *)&v301);
                            if ( *(_DWORD *)(v102 + v103 + 28) == v101 )
                            {
                              v104 = *(XLATEOBJ **)(v102 + v103 + 8);
                              v241 = v104;
                              flXlate = v104[3].flXlate;
                              if ( (flXlate & 0x6000) == 0 )
                              {
                                if ( (v104->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                                  || (v104->flXlate & 4) != 0
                                  && v233 == v104[1].iUniq
                                  && (v106 = XEPALOBJ::ulTime((XEPALOBJ *)&v302), *(_DWORD *)(v102 + v103 + 24) == v106)
                                  || (flXlate & 0x100) != 0
                                  && v240 == v104[1].flXlate
                                  && v236 == *(_DWORD *)&v104[1].iSrcType )
                                {
                                  _InterlockedIncrement((volatile signed __int32 *)(v102 + v103));
                                  *(_DWORD *)(v59 + 56) = v94;
                                  SEMOBJ::vUnlock((SEMOBJ *)&v303);
                                  v84 = v241;
                                  goto LABEL_199;
                                }
                              }
                            }
                          }
                        }
                        ++v95;
                        v94 = ((_BYTE)v94 + 1) & 7;
                      }
                      while ( v95 < 8 );
                      if ( ghsemPalette )
                      {
                        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                        GreReleaseSemaphoreInternal(ghsemPalette);
                      }
                      v16 = 0;
                      goto LABEL_194;
                    }
                  }
                  v84 = xloIdent;
                  v16 = 1;
                  v241 = xloIdent;
LABEL_201:
                  v108 = *((_DWORD *)v42 + 9);
                  v282 = v84;
                  if ( (v108 & 1) == 0 )
                  {
                    v307.m128i_i32[2] = v306.right - v245;
                    v307.m128i_i32[3] = v306.bottom - v244;
                  }
                  if ( !v16 )
                    goto LABEL_280;
                  v54 = v273;
LABEL_205:
                  v109 = v280;
                  v110 = 0;
                  v111 = (__m128i)v306;
                  v112 = 0;
                  v297 = v306;
                  v305 = v306;
                  v272 = v54 + 6;
                  v308 = (__m128i)v306;
                  v310 = v307;
                  v277 = 0LL;
                  v113 = SURFOBJ_TO_SURFACE_NOT_NULL((char *)v280 + 24);
                  v114 = 0;
                  v115 = 0;
                  if ( *(int *)(v113 + 112) < 0 )
                  {
                    v116 = (_DWORD *)*((_QWORD *)v109 + 6);
                    if ( v116 )
                    {
                      if ( (v116[10] & 0x20000) != 0 )
                      {
                        v110 = v116[644];
                        v114 = v110;
                        v112 = v116[645];
                        v115 = v112;
                        v277 = __PAIR64__(v112, v110);
                      }
                    }
                  }
                  v117 = v114 + *((_DWORD *)v109 + 14);
                  v274 = 0LL;
                  v278 = v117;
                  v118 = *((_DWORD *)v109 + 15);
                  v119 = 0;
                  v279 = v115 + v118;
                  v120 = SURFOBJ_TO_SURFACE_NOT_NULL(v54 + 6);
                  v121 = 0;
                  v122 = 0;
                  if ( *(int *)(v120 + 112) < 0 )
                  {
                    v123 = (_DWORD *)*((_QWORD *)v54 + 6);
                    if ( v123 )
                    {
                      if ( (v123[10] & 0x20000) != 0 )
                      {
                        v119 = v123[644];
                        v121 = v119;
                        v122 = v123[645];
                        v274 = __PAIR64__(v122, v119);
                      }
                    }
                  }
                  v124 = FLOAT_1_0;
                  v275 = v121 + *((_DWORD *)v54 + 14);
                  v125 = v234;
                  v276 = v122 + *((_DWORD *)v54 + 15);
                  v126 = *((_DWORD *)v234 + 132);
                  v245 = v126;
                  v244 = v126 & 1;
                  if ( (v126 & 1) != 0 && (v126 & 2) == 0 )
                  {
                    v127 = 1.0 / *((float *)v234 + 134);
                    v286[0] = 1.0 / *((float *)v234 + 133);
                    v286[1] = v127;
                    ERECTL::vScale((ERECTL *)&v277, (const struct POINTFL *)v286);
                    ERECTL::vScale((ERECTL *)&v308, (const struct POINTFL *)v286);
                    v112 = HIDWORD(v277);
                    v110 = v277;
                    v111 = v308;
                  }
                  v128 = v238;
                  v129 = *((_DWORD *)v238 + 132);
                  v271 = v129;
                  v288 = v129 & 1;
                  if ( (v129 & 1) != 0 && (v129 & 2) == 0 )
                  {
                    v130 = v124 / *((float *)v238 + 133);
                    v131 = v124 / *((float *)v238 + 134);
                    *(float *)v285 = v130;
                    *(float *)&v285[1] = v131;
                    ERECTL::vScale((ERECTL *)&v274, (const struct POINTFL *)v285);
                    ERECTL::vScale((ERECTL *)&v310, (const struct POINTFL *)v285);
                    v119 = v274;
                  }
                  v132 = _mm_cvtsi128_si32(v111);
                  v308 = v111;
                  v133 = v111.m128i_i32[1];
                  v134 = v310.m128i_i32[0] - v132;
                  v135 = _mm_cvtsi128_si32(_mm_srli_si128(v111, 4));
                  v136 = v132;
                  v137 = _mm_srli_si128(v111, 8);
                  v138 = v310.m128i_i32[1] - v135;
                  v139 = _mm_srli_si128(v111, 12);
                  v140 = v110 <= v132;
                  v141 = v308.m128i_i32[3];
                  if ( !v140 )
                    v136 = v110;
                  v142 = v308.m128i_i32[2];
                  v140 = v112 <= v135;
                  v143 = _mm_cvtsi128_si32(v137);
                  if ( !v140 )
                    v133 = v112;
                  v140 = v278 < v143;
                  v144 = _mm_cvtsi128_si32(v139);
                  if ( v140 )
                    v142 = v278;
                  if ( v279 < v144 )
                    v141 = v279;
                  if ( v142 >= v136 )
                  {
                    if ( v141 < v133 )
                      v133 = v141;
                  }
                  else
                  {
                    v136 = v142;
                  }
                  v145 = v134 + v136;
                  v146 = v133 + v138;
                  v147 = v138 + v141;
                  v148 = v134 + v142;
                  if ( v119 > v145 )
                    v145 = v119;
                  v308.m128i_i32[0] = v145;
                  if ( SHIDWORD(v274) > v146 )
                    v146 = HIDWORD(v274);
                  v308.m128i_i32[1] = v146;
                  if ( v275 < v148 )
                    v148 = v275;
                  v308.m128i_i32[2] = v148;
                  if ( v276 < v147 )
                    v147 = v276;
                  v308.m128i_i32[3] = v147;
                  if ( v148 >= v145 )
                  {
                    if ( v147 < v146 )
                      v146 = v147;
                    v308.m128i_i32[1] = v146;
                  }
                  else
                  {
                    v145 = v148;
                    v308.m128i_i32[0] = v148;
                  }
                  v149 = v308;
                  v308.m128i_i32[0] = v145 - v134;
                  v150 = v146 - v138;
                  v308.m128i_i32[2] = v148 - v134;
                  v151 = v147 - v138;
                  v308.m128i_i32[1] = v150;
                  v308.m128i_i32[3] = v151;
                  v152 = (struct _RECTL)v308;
                  v310 = v149;
                  if ( v145 - v134 >= v148 - v134 || v150 >= v151 )
                  {
                    v153 = v280;
                    v154 = 0;
                  }
                  else
                  {
                    if ( v244 && (v245 & 2) == 0 )
                    {
                      v304 = *(_QWORD *)((char *)v125 + 532);
                      ERECTL::vScale((ERECTL *)&v308, (const struct POINTFL *)&v304);
                      v152 = (struct _RECTL)v308;
                    }
                    if ( v288 && (v271 & 2) == 0 )
                    {
                      v283 = *(HDC *)((char *)v128 + 532);
                      ERECTL::vScale((ERECTL *)&v310, (const struct POINTFL *)&v283);
                      v149 = v310;
                    }
                    v153 = v280;
                    v154 = 1;
                    v307 = v149;
                    v306 = v152;
                    ++*((_DWORD *)v280 + 23);
                    v125 = v234;
                    v128 = v238;
                  }
                  v155 = *((_QWORD *)v125 + 6);
                  if ( v155 == *((_QWORD *)v128 + 6)
                    || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v234) && *(_QWORD *)(v155 + 3512) == v156
                    || !*((_WORD *)v273 + 50) && !*v272 && (*(_DWORD *)(v155 + 40) & 0x80u) == 0 )
                  {
                    if ( v266 == 52428 )
                    {
                      v158 = (a11 & 1) == 0;
                      v311 = a11 & 1;
                      v159 = *((_QWORD *)v153 + 6);
                      if ( !v158 )
                      {
                        EtwWindowRendering(
                          *((_QWORD *)v125 + 59),
                          *((_QWORD *)v125 + 60),
                          **((_QWORD **)v125 + 63),
                          (unsigned int)v297.left,
                          v297.top,
                          v297.right,
                          v297.bottom,
                          *((_QWORD *)v128 + 59),
                          *((_QWORD *)v128 + 60),
                          **((_QWORD **)v128 + 63),
                          v305.left,
                          v305.top,
                          v305.left + abs32(v297.right - v297.bottom),
                          v305.top + abs32(v297.bottom - v297.top));
                        v153 = v280;
                        *((_WORD *)v280 + 51) |= 0x40u;
                        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v160);
                        if ( ThreadWin32Thread )
                          *(_BYTE *)(ThreadWin32Thread + 328) = 0;
                        GreClientRgnUpdated(0);
                        GreClientRgnUpdatedStable();
                        v84 = v241;
                      }
                      if ( v154 )
                      {
                        if ( (*((_DWORD *)v153 + 28) & 0x400) != 0 )
                          v162 = (*(__int64 (__fastcall **)(__int64, _QWORD *, char *, XLATEOBJ *, struct _RECTL *, __m128i *))(v159 + 2832))(
                                   (__int64)v153 + 24,
                                   v272,
                                   v281,
                                   v282,
                                   &v306,
                                   &v307);
                        else
                          v162 = ((__int64 (__fastcall *)(char *, _QWORD *, char *, XLATEOBJ *, struct _RECTL *, __m128i *))EngCopyBits)(
                                   (char *)v153 + 24,
                                   v272,
                                   v281,
                                   v282,
                                   &v306,
                                   &v307);
                        v16 = v162;
                      }
                      if ( v311 )
                      {
                        *((_WORD *)v153 + 51) &= ~0x40u;
                        v163 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v155);
                        v84 = v241;
                        if ( v163 )
                          *(_BYTE *)(v163 + 328) = 1;
                      }
                    }
                    else if ( v154 )
                    {
                      v164 = SURFACE::pfnBitBlt(v153);
                      v16 = ((__int64 (__fastcall *)(char *, __int64, _QWORD, char *, XLATEOBJ *, struct _RECTL *, __m128i *, _QWORD, char *, __int64, int))v164)(
                              (char *)v153 + 24,
                              v167,
                              0LL,
                              v281,
                              v282,
                              &v306,
                              &v307,
                              0LL,
                              v284,
                              v165,
                              v166);
                    }
                  }
                  else if ( v154 )
                  {
                    v157 = &v246;
                    if ( (*(_DWORD *)(*((_QWORD *)v153 + 6) + 40LL) & 0x80u) == 0 )
                      v157 = 0LL;
                    v16 = SimBitBlt(
                            (char *)v153 + 24,
                            v272,
                            0LL,
                            v281,
                            v282,
                            &v306,
                            &v307,
                            0LL,
                            v284,
                            (char *)v125 + 1584,
                            v266,
                            v157);
                  }
LABEL_280:
                  if ( v84 )
                  {
                    cEntries = (int)v84[1].cEntries;
                    if ( (int)cEntries < 0 )
                    {
                      if ( (_DWORD)cEntries == -1 )
                        FreeThreadBufferWithTag(v84);
                    }
                    else
                    {
                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                    }
                  }
LABEL_130:
                  v80 = v254;
                  if ( (v254 & 0x1000) == 0 )
                    goto LABEL_309;
                  if ( (v254 & 0x8000) != 0 )
                  {
                    v81 = v256;
                    if ( v256 )
                    {
                      v82 = (SURFACE *)*((_QWORD *)v256 + 63);
                      if ( (v254 & 0x400) != 0 )
                      {
                        bUnHookRedir((struct XDCOBJ *)&v256);
                        v81 = v256;
                        LOWORD(v80) = v254 & 0xFBFF;
                        v254 &= ~0x400u;
                      }
                      if ( (v80 & 0x2000) != 0 )
                      {
                        bUnHookBmpDrv((struct XDCOBJ *)&v256);
                        v81 = v256;
                        LOWORD(v80) = v254 & 0xDFFF;
                        v254 &= ~0x2000u;
                      }
                      if ( (v80 & 0x1000) != 0 )
                      {
                        if ( (*((_DWORD *)v81 + 11) & 1) == 0 )
                        {
                          SURFACE::bUnMap(v82, &v246, v81);
                          v81 = v256;
                        }
                        *((_DWORD *)v81 + 11) &= ~1u;
                      }
                    }
                    _InterlockedOr(v226, 0);
                    if ( v258 )
                      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView((DEVLOCKBLTOBJ *)&v246);
                  }
                  else
                  {
                    v170 = v258;
                    if ( v258 )
                    {
                      if ( (*((_DWORD *)v258 + 11) & 1) == 0 )
                      {
                        v171 = (SURFACE *)*((_QWORD *)v258 + 63);
                        if ( v171 )
                        {
                          SURFACE::bUnMap(v171, &v246, 0LL);
                          v170 = v258;
                        }
                      }
                      *((_DWORD *)v170 + 11) &= ~1u;
                    }
                    _InterlockedOr(v226, 0);
                    v172 = v256;
                    v80 = v254;
                    if ( !v256 )
                      goto LABEL_310;
                    v173 = (SURFACE *)*((_QWORD *)v256 + 63);
                    if ( (v254 & 0x400) != 0 )
                    {
                      bUnHookRedir((struct XDCOBJ *)&v256);
                      v80 = v254;
                      v172 = v256;
                      LODWORD(v80) = v254 & 0xFFFFFBFF;
                      v254 &= ~0x400u;
                    }
                    if ( (v80 & 0x2000) != 0 )
                    {
                      bUnHookBmpDrv((struct XDCOBJ *)&v256);
                      v80 = v254;
                      v172 = v256;
                      LODWORD(v80) = v254 & 0xFFFFDFFF;
                      v254 &= ~0x2000u;
                    }
                    if ( (v80 & 0x1000) == 0 )
                      goto LABEL_303;
                    if ( (*((_DWORD *)v172 + 11) & 1) == 0 )
                    {
                      SURFACE::bUnMap(v173, &v246, v172);
                      v172 = v256;
                    }
                    *((_DWORD *)v172 + 11) &= ~1u;
                  }
                  v172 = v256;
                  v80 = v254;
LABEL_303:
                  if ( !v172
                    || (v80 & 0x1000) == 0
                    || (*((_DWORD *)v172 + 9) & 0x4000) == 0
                    || !*((_QWORD *)v172 + 60)
                    || !*((_DWORD *)v172 + 124) )
                  {
                    goto LABEL_310;
                  }
                  GreUpdateSpriteDevLockEnd((struct XDCOBJ *)&v256, v80 & 0x400000);
                  v80 = v254;
LABEL_309:
                  v172 = v256;
LABEL_310:
                  v174 = v249;
                  if ( v249 )
                  {
                    if ( *v253 )
                    {
                      hbmSelectBitmap(**v253, v252, 1LL, 0LL);
                      v174 = v249;
                    }
                    if ( v174 )
                    {
                      DEC_SHARE_REF_CNT(v174);
                      v174 = v249;
                    }
                    bDeleteSurface(*(_QWORD *)(v174 + 32));
                    v172 = v256;
                    v80 = v254;
                    v249 = 0LL;
                    v253 = 0LL;
                  }
                  if ( (v80 & 0x1000) != 0 )
                  {
                    if ( (v80 & 0x8000) != 0 )
                    {
                      if ( v172 )
                      {
                        v175 = *((_QWORD *)v172 + 6);
                        if ( (v80 & 0x10) != 0 )
                        {
                          *((_DWORD *)v172 + 9) &= ~0x4000u;
                          v176 = v256;
                          *((_QWORD *)v256 + 63) = *(_QWORD *)(v175 + 2544);
                          DC::vInheritSurfaceDpiScale(v176);
                        }
                        DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v246, (struct XDCOBJ *)&v256);
                        if ( v256 )
                        {
                          XDCOBJ::RestoreAttributes((XDCOBJ *)&v256);
                          v240 = 0;
                          v177 = *(_QWORD *)v256;
                          HmgDecrementExclusiveReferenceCountEx(v256, HIDWORD(v257), &v240);
                          if ( v240 )
                            bDeleteDCInternalEx(v177, 0LL);
                        }
                        v256 = 0LL;
                      }
                      _InterlockedOr(v226, 0);
                      v178 = v258;
                      if ( v258 )
                      {
                        v179 = *((_QWORD *)v258 + 6);
                        if ( (v254 & 0x20) != 0 )
                        {
                          *((_DWORD *)v258 + 9) &= ~0x4000u;
                          v180 = v258;
                          *((_QWORD *)v258 + 63) = *(_QWORD *)(v179 + 2544);
                          DC::vInheritSurfaceDpiScale(v180);
                        }
                        if ( v260 )
                        {
                          v181 = *(_QWORD *)(v260 + 72);
                          CurrentProcess = PsGetCurrentProcess(v178, v172);
                          MmUnmapViewOfSection(CurrentProcess, v181);
                        }
                        DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v246, (struct XDCOBJ *)&v258);
                        if ( v258 )
                        {
                          XDCOBJ::RestoreAttributes((XDCOBJ *)&v258);
                          v236 = 0;
                          v183 = *(_QWORD *)v258;
                          HmgDecrementExclusiveReferenceCountEx(v258, HIDWORD(v259), &v236);
                          if ( v236 )
                            bDeleteDCInternalEx(v183, 0LL);
                        }
                        v258 = 0LL;
                      }
                      v254 &= ~0x8000u;
                    }
                    else
                    {
                      v184 = v258;
                      if ( v258 )
                      {
                        v185 = *((_QWORD *)v258 + 6);
                        if ( (v80 & 0x20) != 0 )
                        {
                          *((_DWORD *)v258 + 9) &= ~0x4000u;
                          v186 = v258;
                          *((_QWORD *)v258 + 63) = *(_QWORD *)(v185 + 2544);
                          DC::vInheritSurfaceDpiScale(v186);
                        }
                        if ( v260 )
                        {
                          v187 = *(_QWORD *)(v260 + 72);
                          v188 = PsGetCurrentProcess(v80, v184);
                          MmUnmapViewOfSection(v188, v187);
                        }
                        DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v246, (struct XDCOBJ *)&v258);
                        if ( v258 )
                        {
                          XDCOBJ::RestoreAttributes((XDCOBJ *)&v258);
                          v233 = 0;
                          v189 = *(_QWORD *)v258;
                          HmgDecrementExclusiveReferenceCountEx(v258, HIDWORD(v259), &v233);
                          if ( v233 )
                            bDeleteDCInternalEx(v189, 0LL);
                        }
                        v258 = 0LL;
                      }
                      _InterlockedOr(v226, 0);
                      if ( v256 )
                      {
                        v190 = *((_QWORD *)v256 + 6);
                        if ( (v254 & 0x10) != 0 )
                        {
                          *((_DWORD *)v256 + 9) &= ~0x4000u;
                          v191 = v256;
                          *((_QWORD *)v256 + 63) = *(_QWORD *)(v190 + 2544);
                          DC::vInheritSurfaceDpiScale(v191);
                        }
                        DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v246, (struct XDCOBJ *)&v256);
                        if ( v256 )
                        {
                          XDCOBJ::RestoreAttributes((XDCOBJ *)&v256);
                          v270 = 0;
                          v192 = *(_QWORD *)v256;
                          HmgDecrementExclusiveReferenceCountEx(v256, HIDWORD(v257), &v270);
                          if ( v270 )
                            bDeleteDCInternalEx(v192, 0LL);
                        }
                        v256 = 0LL;
                      }
                    }
                    GreDecLockCount();
                    v254 &= ~0x1000u;
                    CurrentThread = KeGetCurrentThread();
                    if ( !(unsigned int)IsThreadCrossSessionAttached(v195, v194) )
                    {
                      v196 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                      if ( v196 )
                      {
                        v197 = *v196;
                        if ( v197 )
                        {
                          *(_QWORD *)(v197 + 320) = 0LL;
                          *(_QWORD *)(v197 + 312) = 0LL;
                        }
                      }
                    }
                    LODWORD(v80) = v254;
                  }
                  else if ( (v80 & 0x800000) != 0 )
                  {
                    GreDecLockCount();
                    LODWORD(v80) = v254 & 0xFF7FFFFF;
                    v254 &= ~0x800000u;
                  }
                  if ( (_QWORD)v246 )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v246);
                    GreReleaseSemaphoreInternal(v246);
                    LODWORD(v80) = v254;
                  }
                  if ( *((_QWORD *)&v246 + 1) )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)&v246 + 1));
                    GreReleaseSemaphoreInternal(*((_QWORD *)&v246 + 1));
                    LODWORD(v80) = v254;
                  }
                  if ( (v80 & 8) != 0 )
                    v254 = v80 & 0xFFFFFFF7;
                  if ( (_QWORD)v247 )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v247);
                    GreReleaseSemaphoreInternal(v247);
                  }
                  if ( v262 )
                  {
                    v298[1] = 0LL;
                    XDCOBJ::vLock((XDCOBJ *)v298, v263);
                    LOBYTE(v198) = 5;
                    v199 = HmgShareLock(v261, v198);
                    LOBYTE(v200) = 5;
                    v201 = (HSURF *)v199;
                    v202 = HmgShareLock(v262, v200);
                    v203 = v298[0];
                    v204 = v202;
                    v205 = *v201;
                    v206 = v298[0];
                    *((_QWORD *)v298[0] + 63) = v202;
                    DC::vInheritSurfaceDpiScale(v206);
                    DEC_SHARE_REF_CNT(v201);
                    DEC_SHARE_REF_CNT(v204);
                    GreDereferenceObject(v205);
                    v263 = 0LL;
                    v261 = 0LL;
                    *((_DWORD *)v203 + 9) |= v255;
                    if ( (*((_DWORD *)v203 + 9) & 0x200) != 0 )
                    {
                      v207 = 0;
                      if ( !(unsigned int)GreGetLockCount()
                        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                      {
                        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                        v207 = 1;
                      }
                      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v242);
                      LOBYTE(v227[0]) = 5;
                      v208 = HmgShareUnlockRemoveObject(v262, 0LL, 0LL, 0LL, v227[0]);
                      if ( v208 )
                        SURFACE::bDeleteSurface(v208, 0LL, 1LL);
                      *((_QWORD *)v203 + 64) = 0LL;
                      DC::vClearRendering(v203);
                      v262 = 0LL;
                      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v209);
                      if ( v207 )
                      {
                        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                        GreReleaseSemaphoreInternal(ghsemGreLock);
                      }
                    }
                    else
                    {
                      LOBYTE(v227[0]) = 5;
                      v210 = HmgShareUnlockRemoveObject(v262, 0LL, 0LL, 0LL, v227[0]);
                      if ( v210 )
                        SURFACE::bDeleteSurface(v210, 0LL, 1LL);
                      *((_QWORD *)v203 + 64) = 0LL;
                      v262 = 0LL;
                    }
                    XDCOBJ::vUnlockFast((XDCOBJ *)v298);
                    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                  }
                  if ( *((_QWORD *)&v264 + 1) )
                  {
                    v299[1] = 0LL;
                    XDCOBJ::vLock((XDCOBJ *)v299, v265);
                    LOBYTE(v211) = 5;
                    v212 = HmgShareLock(v264, v211);
                    LOBYTE(v213) = 5;
                    v214 = (HSURF *)v212;
                    v215 = HmgShareLock(*((_QWORD *)&v264 + 1), v213);
                    v216 = v299[0];
                    v217 = v215;
                    v218 = *v214;
                    v219 = v299[0];
                    *((_QWORD *)v299[0] + 63) = v215;
                    DC::vInheritSurfaceDpiScale(v219);
                    DEC_SHARE_REF_CNT(v214);
                    DEC_SHARE_REF_CNT(v217);
                    GreDereferenceObject(v218);
                    v265 = 0LL;
                    *(_QWORD *)&v264 = 0LL;
                    if ( (*((_DWORD *)v216 + 9) & 0x200) != 0 )
                    {
                      v220 = 0;
                      if ( !(unsigned int)GreGetLockCount()
                        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                      {
                        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                        v220 = 1;
                      }
                      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v243);
                      LOBYTE(v227[0]) = 5;
                      v221 = HmgShareUnlockRemoveObject(*((_QWORD *)&v264 + 1), 0LL, 0LL, 0LL, v227[0]);
                      if ( v221 )
                        SURFACE::bDeleteSurface(v221, 0LL, 1LL);
                      *((_QWORD *)v216 + 64) = 0LL;
                      DC::vClearRendering(v216);
                      *((_QWORD *)&v264 + 1) = 0LL;
                      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v222);
                      if ( v220 )
                      {
                        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                        GreReleaseSemaphoreInternal(ghsemGreLock);
                      }
                    }
                    else
                    {
                      LOBYTE(v227[0]) = 5;
                      v223 = HmgShareUnlockRemoveObject(*((_QWORD *)&v264 + 1), 0LL, 0LL, 0LL, v227[0]);
                      if ( v223 )
                        SURFACE::bDeleteSurface(v223, 0LL, 1LL);
                      *((_QWORD *)v216 + 64) = 0LL;
                      *((_QWORD *)&v264 + 1) = 0LL;
                    }
                    XDCOBJ::vUnlockFast((XDCOBJ *)v299);
                    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                  }
                  SURFMEM::~SURFMEM((SURFMEM *)&v249);
                  goto LABEL_395;
                }
                v70 = (char *)v42 + 2160;
                v281 = (char *)v42 + 2160;
                v71 = XDCOBJ::prgnEffRao(&v234);
                XCLIPOBJ::vSetup((XCLIPOBJ *)v70, v71, (struct ERECTL *)&v306, 2);
                v306 = *(struct _RECTL *)(v70 + 4);
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v306) )
                {
                  v42 = v234;
                  v16 = 0;
                  goto LABEL_117;
                }
              }
LABEL_285:
              v16 = 1;
              goto LABEL_130;
            }
            v56 = UserScreenAccessCheck(v51);
          }
          if ( !v56 )
            goto LABEL_129;
          v42 = v234;
          v53 = v306.top;
          v52 = v306.left;
          goto LABEL_88;
        }
        v16 = 1;
      }
      else
      {
        v16 = GreStretchBltInternal(v283, left, top, a4, v233, v273, a7, v23, a4, v233, v18, a10, 0);
      }
LABEL_395:
      if ( v267 )
        DC::dwSetLayout(v234, -1, v268);
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v238);
      v269 = 0;
      v224 = *(_QWORD *)v238;
      HmgDecrementExclusiveReferenceCountEx(v238, HIDWORD(v239), &v269);
      if ( v269 )
        bDeleteDCInternalEx(v224, 0LL);
      goto LABEL_399;
    }
LABEL_402:
    if ( v19 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v234);
  }
  return v16;
}
