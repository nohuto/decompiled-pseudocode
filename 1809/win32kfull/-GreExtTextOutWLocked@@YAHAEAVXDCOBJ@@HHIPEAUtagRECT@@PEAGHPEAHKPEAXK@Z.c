/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C004CE40 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C005ADA0 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GrePolyTextOutW @ 0x1C009B4AC (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 * Callees:
 *     IsMulDestroyBrushInternalSupported @ 0x1C0005990 (IsMulDestroyBrushInternalSupported.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0005BD4 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0006118 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0006688 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005426C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C005B6A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C005C44C (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00875F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C00877C8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C009DE80 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C009FFE4 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00E3444 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C011B2B4 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0140BAC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0140C0C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     RFONTOBJ_dtorHelperWrap @ 0x1C01618D0 (RFONTOBJ_dtorHelperWrap.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026A760 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C026A8C0 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02906CC (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C029DAC4 (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C029DB3C (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1C029DCF8 (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C029F5C4 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C029F9B8 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C029FBF0 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall GreExtTextOutWLocked(
        struct XDCOBJ *a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        ERECTL *a10,
        unsigned int a11)
{
  unsigned int v11; // r14d
  struct tagRECT *v12; // r13
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // esi
  unsigned int v18; // edi
  __int64 v19; // rdx
  int v20; // eax
  int v21; // ebx
  unsigned __int64 v22; // rax
  int v23; // r15d
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  struct _BRUSHOBJ *v27; // rbx
  int *v28; // rax
  __int64 v29; // rcx
  int v30; // ebx
  int v31; // edi
  signed int v32; // r15d
  signed int bottom; // r8d
  LONG left; // edx
  int *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  LONG top; // ecx
  LONG right; // eax
  int v43; // r10d
  int v44; // r11d
  unsigned __int64 v45; // rcx
  int v46; // ebx
  int v47; // edi
  unsigned __int64 v48; // rcx
  int v49; // r15d
  int v50; // r8d
  unsigned int v51; // r13d
  struct EXFORMOBJ *v52; // rdx
  int v53; // r9d
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // eax
  unsigned int v57; // eax
  LONG v58; // eax
  LONG v59; // eax
  LONG v60; // eax
  LONG v61; // ecx
  LONG v62; // r9d
  LONG v63; // edx
  ERECTL *v64; // r13
  RECTL *p_rclBkGround; // r15
  struct DC *v66; // r8
  int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  int v70; // r8d
  __int64 v71; // rdx
  unsigned int v72; // ebx
  int v73; // r8d
  __int64 v74; // rcx
  int *v75; // r15
  __int64 v76; // rbx
  int v77; // eax
  __int64 v78; // r8
  int *v79; // r15
  int v80; // eax
  int v81; // r8d
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rdx
  int v85; // eax
  int v86; // r15d
  int v87; // r8d
  int v88; // ecx
  LONG v89; // eax
  LONG v90; // r9d
  LONG v91; // r10d
  int v92; // eax
  LONG v93; // r9d
  ERECTL *v94; // rbx
  LONG v95; // r8d
  LONG v96; // eax
  LONG v97; // eax
  __int64 v98; // r9
  int v99; // eax
  char v100; // bl
  struct EXFORMOBJ *v101; // rdx
  struct XDCOBJ *v102; // r8
  int v103; // r9d
  int v104; // eax
  int v105; // edx
  __int64 v106; // rcx
  int v107; // eax
  int v108; // r8d
  int v109; // eax
  int v110; // r11d
  __int64 v111; // rdx
  __int64 v112; // r10
  __int64 v113; // rax
  struct REGION *v114; // r10
  __int64 v115; // rdx
  __int64 v116; // r9
  RECTL rclBounds; // xmm2
  __int64 v118; // r8
  __m128i v119; // xmm0
  __int64 v120; // rcx
  __int64 v121; // r15
  int v122; // r10d
  __int64 v123; // rax
  int v124; // r10d
  int v125; // eax
  __int64 v126; // r15
  int v127; // eax
  int v128; // eax
  __int64 v129; // r10
  unsigned __int64 v130; // r9
  struct _POINTL *v131; // r8
  __int64 v132; // rbx
  __int64 iUniq; // rcx
  __int64 v134; // r11
  __int64 v135; // rdi
  __int64 v136; // rax
  struct _POINTL *v137; // rdi
  LONG v138; // r8d
  LONG v139; // edx
  int v140; // eax
  __m128i si128; // xmm1
  int v142; // r9d
  __m128i v143; // xmm0
  int v144; // r9d
  __m128i v145; // xmm0
  __m128i v146; // xmm1
  int v147; // r9d
  int *v148; // rbx
  __int64 v149; // rax
  int v150; // ecx
  int v151; // eax
  BOOL (__stdcall *v152)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  struct EXFORMOBJ *v153; // rdx
  int v154; // r9d
  __int64 flXlate; // rdx
  int v156; // eax
  int v157; // eax
  unsigned __int64 cEntries; // r8
  struct _BRUSHOBJ *v159; // rax
  struct _BRUSHOBJ *v160; // r13
  struct XDCOBJ *v161; // r8
  int v162; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  BOOL (__stdcall *v167)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rbx
  int v168; // ecx
  __int64 v169; // rax
  bool v170; // zf
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  struct XDCOBJ *v174; // r8
  int v175; // eax
  int v176; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v179; // eax
  struct _KTHREAD *v180; // rbx
  __int64 *v181; // rax
  __int64 v182; // rax
  ERECTL *v183; // rcx
  RECTL v184; // xmm6
  __int64 v185; // rcx
  struct _SURFOBJ *v186; // r8
  LONG *v187; // rbx
  LONG v188; // edx
  struct _SURFOBJ *v189; // r9
  LONG v190; // eax
  LONG v191; // ecx
  LONG v192; // eax
  LONG v193; // ecx
  LONG v194; // eax
  __int64 v195; // rcx
  struct _XLATEOBJ *p_rclBounds; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v197; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v198; // [rsp+40h] [rbp-D0h]
  unsigned int v199; // [rsp+48h] [rbp-C8h]
  unsigned int v200; // [rsp+58h] [rbp-B8h]
  unsigned int v201; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v202[2]; // [rsp+98h] [rbp-78h] BYREF
  struct _BRUSHOBJ *v203; // [rsp+A0h] [rbp-70h]
  unsigned int v204; // [rsp+A8h] [rbp-68h] BYREF
  struct _BRUSHOBJ *v205; // [rsp+B0h] [rbp-60h]
  int v206; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v207; // [rsp+C0h] [rbp-50h] BYREF
  int v208; // [rsp+C8h] [rbp-48h]
  __int64 v209; // [rsp+D0h] [rbp-40h] BYREF
  unsigned int v210; // [rsp+D8h] [rbp-38h] BYREF
  unsigned int v211; // [rsp+DCh] [rbp-34h] BYREF
  int v212; // [rsp+E0h] [rbp-30h] BYREF
  unsigned int v213; // [rsp+E4h] [rbp-2Ch] BYREF
  unsigned int v214; // [rsp+E8h] [rbp-28h] BYREF
  struct _XLATEOBJ *v215; // [rsp+F0h] [rbp-20h]
  struct _SURFOBJ *v216[2]; // [rsp+100h] [rbp-10h] BYREF
  int *v217; // [rsp+110h] [rbp+0h] BYREF
  int v218; // [rsp+118h] [rbp+8h]
  int v219; // [rsp+11Ch] [rbp+Ch]
  int v220[2]; // [rsp+120h] [rbp+10h] BYREF
  unsigned __int64 v221; // [rsp+128h] [rbp+18h] BYREF
  __int64 v222; // [rsp+130h] [rbp+20h] BYREF
  int v223; // [rsp+138h] [rbp+28h] BYREF
  int v224; // [rsp+13Ch] [rbp+2Ch] BYREF
  int *v225; // [rsp+140h] [rbp+30h] BYREF
  ERECTL *v226; // [rsp+148h] [rbp+38h]
  unsigned __int16 *v227; // [rsp+150h] [rbp+40h] BYREF
  __int64 v228; // [rsp+158h] [rbp+48h] BYREF
  int v229; // [rsp+160h] [rbp+50h]
  _QWORD v230[2]; // [rsp+168h] [rbp+58h] BYREF
  _QWORD v231[3]; // [rsp+178h] [rbp+68h] BYREF
  _BYTE v232[8]; // [rsp+190h] [rbp+80h] BYREF
  __int64 v233; // [rsp+198h] [rbp+88h]
  PATHOBJ v234; // [rsp+210h] [rbp+100h] BYREF
  __int64 v235; // [rsp+218h] [rbp+108h]
  PATHOBJ v236; // [rsp+290h] [rbp+180h] BYREF
  __int64 v237; // [rsp+298h] [rbp+188h]
  PATHOBJ ppo; // [rsp+310h] [rbp+200h] BYREF
  __int64 v239; // [rsp+318h] [rbp+208h]
  _BYTE v240[8]; // [rsp+390h] [rbp+280h] BYREF
  __int64 v241; // [rsp+398h] [rbp+288h]
  PATHOBJ v242; // [rsp+410h] [rbp+300h] BYREF
  __int64 v243; // [rsp+418h] [rbp+308h]
  PATHOBJ v244; // [rsp+490h] [rbp+380h] BYREF
  __int64 v245; // [rsp+498h] [rbp+388h]
  struct _RECTL rclBkGround; // [rsp+510h] [rbp+400h] BYREF
  struct _RECTL v247; // [rsp+520h] [rbp+410h] BYREF
  RECTL v248; // [rsp+530h] [rbp+420h] BYREF
  struct _CLIPOBJ v249; // [rsp+540h] [rbp+430h] BYREF
  __int64 v250; // [rsp+578h] [rbp+468h]
  __int64 v251; // [rsp+590h] [rbp+480h]
  int v252; // [rsp+598h] [rbp+488h]
  int v253; // [rsp+5C0h] [rbp+4B0h]
  __int64 v254; // [rsp+5D0h] [rbp+4C0h]
  struct _RECTL v255; // [rsp+5E0h] [rbp+4D0h] BYREF
  STROBJ pstro; // [rsp+5F0h] [rbp+4E0h] BYREF
  __int64 v257; // [rsp+630h] [rbp+520h]
  int v258; // [rsp+640h] [rbp+530h]
  int v259; // [rsp+644h] [rbp+534h]
  int v260; // [rsp+670h] [rbp+560h]
  _BYTE v261[100]; // [rsp+674h] [rbp+564h] BYREF
  int v262; // [rsp+6D8h] [rbp+5C8h]
  __int64 v263; // [rsp+6F8h] [rbp+5E8h]
  struct _POINTL v264; // [rsp+730h] [rbp+620h] BYREF
  LONG v265; // [rsp+738h] [rbp+628h]
  LONG v266; // [rsp+73Ch] [rbp+62Ch]
  LONG v267; // [rsp+740h] [rbp+630h]
  LONG v268; // [rsp+744h] [rbp+634h]
  int v269; // [rsp+748h] [rbp+638h]
  int v270; // [rsp+74Ch] [rbp+63Ch]
  struct _POINTL v271; // [rsp+750h] [rbp+640h] BYREF
  int v272[10]; // [rsp+770h] [rbp+660h] BYREF

  v11 = 0;
  v12 = a5;
  v227 = a6;
  v226 = a10;
  v14 = 4;
  v214 = a3;
  if ( (a4 & 0x10) == 0 )
    v14 = 2;
  v213 = a2;
  v15 = *(_QWORD *)a1;
  v16 = 128;
  v202[0] = v14;
  v225 = a8;
  LODWORD(v222) = 0;
  if ( (*(_DWORD *)(v15 + 248) & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_9;
  if ( (*(_DWORD *)(v15 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  v220[0] = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_9:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v18 = a4 & 0xFFFFC36F;
  v204 = a4 & 0xFFFFC36F;
  if ( !a5 )
  {
    v18 = a4 & 0xFFFFC369;
LABEL_16:
    v204 = v18;
    goto LABEL_17;
  }
  if ( a5->left == a5->right || a5->top == a5->bottom )
  {
    a5->right = a2;
    a5->left = a2;
    a5->bottom = a3;
    a5->top = a3;
    if ( (a4 & 6) == 2 )
    {
      v12 = 0LL;
      v18 = a4 & 0xFFFFC36D;
      goto LABEL_16;
    }
  }
LABEL_17:
  v19 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && (!v18 || v12 && (v18 & 0xFFFFFFF9) == 0) )
  {
    v20 = *(_DWORD *)(v19 + 248) & 1;
    if ( !v20 || (v18 & 4) == 0 )
    {
      rclBkGround = 0LL;
      v210 = 0;
      if ( v20 )
      {
        v212 = 0;
        v21 = 0;
        v201 = 0;
        LODWORD(v22) = 0;
        v23 = 0;
        LODWORD(v215) = 0;
        LODWORD(v24) = 0;
        LODWORD(v203) = 0;
        LODWORD(v25) = 0;
      }
      else
      {
        v221 = *(_QWORD *)(v19 + 8LL * (*(_DWORD *)(v19 + 40) & 1) + 1016);
        v21 = v221;
        v215 = (struct _XLATEOBJ *)HIDWORD(v221);
        v22 = HIDWORD(v221);
        v24 = HIDWORD(v221);
        v23 = v221;
        v25 = HIDWORD(v221);
        v203 = (struct _BRUSHOBJ *)HIDWORD(v221);
        v201 = HIDWORD(v221);
        v212 = v221;
      }
      v209 = (unsigned int)(16 * v22);
      v26 = *(_QWORD *)(v19 + 976);
      v27 = (struct _BRUSHOBJ *)(unsigned int)(16 * v21);
      v205 = v27;
      v218 = *(_DWORD *)(v26 + 208);
      v219 = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 108LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 976) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v217, a1, 0x204u, 0);
        LODWORD(v24) = (_DWORD)v215;
        LODWORD(v25) = (_DWORD)v203;
        v28 = v217;
      }
      else
      {
        v28 = (int *)(v19 + 320);
        v217 = (int *)(v19 + 320);
      }
      v221 = 0LL;
      if ( v12 )
      {
        v16 = 136;
        v211 = v18 & 2;
        v29 = (unsigned int)v28[8];
        if ( (v18 & 2) == 0 )
          v16 = 128;
        v206 = v16;
        if ( (v29 & 2) != 0 )
        {
          v30 = v12->left + v23 + ((v28[6] + 8) >> 4);
          v247.left = v30;
          v31 = v12->right + v23 + ((v28[6] + 8) >> 4);
          v247.right = v31;
          v32 = v24 + v12->top + ((v28[7] + 8) >> 4);
          v247.top = v32;
          bottom = v25 + v12->bottom + ((v28[7] + 8) >> 4);
          v247.bottom = bottom;
        }
        else
        {
          left = v12->left;
          if ( (v29 & 1) != 0 )
          {
            v212 = 0;
            bFToL(v29, &v212, 0LL);
            v35 = v217;
            v30 = v23 + ((v217[6] + v212 + 8) >> 4);
            v223 = 0;
            v247.left = v30;
            bFToL(v36, &v223, v37);
            LODWORD(v35) = v35[6] + v223 + 8;
            v224 = 0;
            v31 = v23 + ((int)v35 >> 4);
            v247.right = v31;
            bFToL(v38, &v224, 0LL);
            v32 = v201 + ((v217[7] + v224 + 8) >> 4);
            v247.top = v32;
            v211 = 0;
            bFToL(v39, &v211, v40);
            bottom = v201 + ((int)(v211 + 8 + v217[7]) >> 4);
            v247.bottom = bottom;
          }
          else
          {
            top = v12->top;
            v264.y = v12->bottom;
            right = v12->right;
            v266 = top;
            v268 = top;
            v264.x = left;
            v265 = left;
            v267 = right;
            EXFORMOBJ::bXform((EXFORMOBJ *)&v217, &v264, (struct _POINTFIX *)&v264, 3uLL);
            v43 = v264.x + v267 - v265;
            v44 = v264.y + v268 - v266;
            v269 = v43;
            v270 = v44;
            v45 = (v265 > v264.x) ^ (unsigned __int64)(v265 <= v267);
            v46 = *(&v264.x + 2 * v45);
            v47 = *(&v267 + 2 * v45);
            if ( v46 > v47 )
              v46 += 15;
            else
              v47 += 15;
            v30 = v212 + (v46 >> 4);
            v31 = v212 + (v47 >> 4);
            v247.right = v31;
            v247.left = v30;
            v48 = (v266 > v264.y) ^ (unsigned __int64)(v266 <= v268);
            v49 = *(&v264.y + 2 * v48);
            v50 = *(&v268 + 2 * v48);
            if ( v49 > v50 )
              v49 += 15;
            else
              v50 += 15;
            v51 = v204;
            v32 = v201 + (v49 >> 4);
            bottom = v201 + (v50 >> 4);
            v247.bottom = bottom;
            v247.top = v32;
            if ( (v204 & 4) != 0 )
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v240);
              if ( v241 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v240, v52, &v264, v53) )
              {
                v54 = *(_QWORD *)a1;
                v255.top = 16 * (*(_DWORD *)(*(_QWORD *)a1 + 1004LL) - v201);
                v255.bottom = 16 * (*(_DWORD *)(v54 + 1012) - v201);
                v228 = 0LL;
                v229 = 0;
                RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v228, (struct EPATHOBJ *)v240, 1u, &v255);
                if ( v228 )
                {
                  v55 = *(_QWORD *)a1;
                  v221 = (unsigned __int64)a1;
                  *(_QWORD *)(v55 + 1136) = v228;
                  if ( (unsigned int)DC::bTightenRao(*(DC **)a1) )
                    v51 &= ~4u;
                }
                if ( v229 == 1 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v228);
              }
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v240);
              bottom = v247.bottom;
              v31 = v247.right;
              v16 = 0;
              if ( (v51 & 4) == 0 )
                v16 = v206;
              v56 = 0;
              v32 = v247.top;
              v30 = v247.left;
              if ( (v51 & 4) == 0 )
                v56 = a7;
              a7 = v56;
              v57 = 0;
              if ( (v51 & 4) == 0 )
                v57 = v51;
              v204 = v57;
            }
            else if ( v211 )
            {
              v264.x += (int)v205;
              v264.y += v209;
              v16 = v16 & 0xFFFFFFF5 | 2;
              v265 += (int)v205;
              v267 += (int)v205;
              v268 += v209;
              v266 += v209;
              v270 = v209 + v44;
              v269 = (_DWORD)v205 + v43;
            }
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 108LL) & 1) != 0 )
        {
          ++v30;
          ++v31;
          v247.left = v30;
          v247.right = v31;
        }
        if ( v30 > v31 )
        {
          v58 = v30;
          v30 = v31;
          v247.left = v31;
          v31 = v58;
          v247.right = v58;
        }
        if ( v32 > bottom )
        {
          v59 = v32;
          v247.top = bottom;
          v32 = bottom;
          v247.bottom = v59;
          bottom = v59;
        }
        if ( (v16 & 0xA) != 0 )
        {
          v60 = rclBkGround.left;
          v61 = rclBkGround.right;
          if ( rclBkGround.left != rclBkGround.right )
          {
            v62 = rclBkGround.top;
            v63 = rclBkGround.bottom;
            if ( rclBkGround.top != rclBkGround.bottom )
            {
              if ( v30 < rclBkGround.left )
                v60 = v30;
              LODWORD(v27) = (_DWORD)v205;
              rclBkGround.left = v60;
              if ( v32 < rclBkGround.top )
                v62 = v32;
              rclBkGround.top = v62;
              if ( v31 > rclBkGround.right )
                v61 = v31;
              LOBYTE(v18) = v204;
              rclBkGround.right = v61;
              if ( bottom > rclBkGround.bottom )
              {
                v63 = bottom;
                rclBkGround.bottom = bottom;
              }
LABEL_79:
              v64 = 0LL;
              v215 = 0LL;
              p_rclBkGround = 0LL;
              v208 = 0;
              v207 = 0LL;
              v262 = 0;
              v201 = 1;
              if ( !a7 )
                goto LABEL_168;
              v66 = *(struct DC **)a1;
              v170 = (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) == 0;
              v206 = *(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1;
              if ( !v170 )
              {
                p_rclBkGround = (RECTL *)*((_QWORD *)v66 + 62);
                SURFACE::bUnMap((SURFACE *)p_rclBkGround, 0LL, v66);
              }
              if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v207, a1, v206, v202[0]) )
                GreAcquireSemaphore(*(_QWORD *)(v207 + 504));
              if ( p_rclBkGround )
                SURFACE::Map(p_rclBkGround, 0LL, *(_QWORD *)a1);
              if ( !v207 )
              {
                v201 = 1;
                goto LABEL_167;
              }
              LODWORD(v222) = *(_DWORD *)(v207 + 88) & 2;
              if ( !(_DWORD)v222 || (v67 = *(_DWORD *)(v207 + 716), v201 = 0, (v67 & 0x8000) != 0) )
                v201 = 1;
              v68 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
              v210 = *(_DWORD *)(*(_QWORD *)a1 + 1760LL) | *(_DWORD *)(v68 + 272) & 0x11F;
              if ( (v210 & 1) != 0 )
              {
                v69 = *(_DWORD *)(v68 + 152);
                if ( (v69 & 0x200) == 0 )
                {
                  v70 = v209;
                  *(_DWORD *)(v68 + 152) = v69 | 0x100;
                  v71 = *(_QWORD *)a1;
                  v72 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) + (_DWORD)v27;
                  v202[0] = v72;
                  v73 = *(_DWORD *)(*(_QWORD *)(v71 + 976) + 12LL) + v70;
                  goto LABEL_105;
                }
                *(_DWORD *)(v68 + 152) = v69 & 0xFFFFFDFF;
                v74 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
                *(_DWORD *)(v74 + 152) |= 0x100u;
                v75 = v217;
                v76 = *(_QWORD *)a1;
                v77 = v217[8];
                if ( (v77 & 2) != 0 )
                {
                  v202[0] = v217[6] + 16 * *(_DWORD *)(*(_QWORD *)(v76 + 976) + 216LL);
                  v202[1] = v217[7] + 16 * *(_DWORD *)(*(_QWORD *)(v76 + 976) + 220LL);
                  *(_QWORD *)(*(_QWORD *)(v76 + 976) + 8LL) = *(_QWORD *)v202;
                }
                else if ( (v77 & 1) != 0 )
                {
                  v214 = 0;
                  bFToL(v74, &v214, 0LL);
                  v202[0] = v75[6] + v214;
                  v213 = 0;
                  bFToL(v202[0], &v213, v78);
                  v202[1] = v75[7] + v213;
                  *(_QWORD *)(*(_QWORD *)(v76 + 976) + 8LL) = *(_QWORD *)v202;
                }
                else
                {
                  EXFORMOBJ::bXform(
                    (EXFORMOBJ *)&v217,
                    (struct _POINTL *)(*(_QWORD *)(v76 + 976) + 216LL),
                    (struct _POINTFIX *)v202,
                    1uLL);
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) = *(_QWORD *)v202;
                }
                goto LABEL_103;
              }
              v79 = v217;
              v80 = v217[8];
              if ( (v80 & 2) != 0 )
              {
                v72 = (_DWORD)v205 + 16 * v213 + v217[6];
                v202[0] = v72;
                v81 = 16 * v214 + v217[7];
              }
              else
              {
                if ( (v80 & 1) == 0 )
                {
                  v202[0] = v213;
                  v202[1] = v214;
                  EXFORMOBJ::bXform((EXFORMOBJ *)&v217, (struct _POINTL *)v202, (struct _POINTFIX *)v202, 1uLL);
LABEL_103:
                  v81 = v202[1];
                  v72 = (_DWORD)v205 + v202[0];
                  v202[0] += (unsigned int)v205;
                  goto LABEL_104;
                }
                v204 = 0;
                bFToL(v68, &v204, 0LL);
                v72 = (_DWORD)v205 + v204 + v79[6];
                v206 = 0;
                v202[0] = v72;
                bFToL(v82, &v206, v83);
                v81 = v206 + v79[7];
              }
LABEL_104:
              v73 = v209 + v81;
LABEL_105:
              v84 = *(_QWORD *)a1;
              v202[1] = v73;
              ESTROBJ::vInit(
                (ESTROBJ *)&pstro,
                v227,
                a7,
                a1,
                (struct RFONTOBJ *)&v207,
                &v217,
                (__m128i *)v225,
                v220[0],
                *(_DWORD *)(v84 + 1764),
                *(_DWORD *)(*(_QWORD *)(v84 + 976) + 280LL),
                *(_DWORD *)(*(_QWORD *)(v84 + 976) + 284LL),
                *(_DWORD *)(*(_QWORD *)(v84 + 976) + 288LL),
                v72,
                v73,
                v210,
                0LL,
                v226,
                a11);
              if ( (v262 & 4) != 0 )
              {
                v85 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v271, &pstro.rclBkGround);
                v86 = v85;
                v87 = pstro.rclBkGround.right;
                v88 = pstro.rclBkGround.left;
                if ( (*(_DWORD *)(v207 + 12) & 0x10000000) != 0 )
                {
                  v88 = pstro.rclBkGround.left - 1;
                  v87 = pstro.rclBkGround.right + 1;
                  --pstro.rclBkGround.left;
                  ++pstro.rclBkGround.right;
                }
                if ( (v262 & 0x1400) != 0 )
                {
                  ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v271, v85);
                  v87 = pstro.rclBkGround.right;
                  v88 = pstro.rclBkGround.left;
                }
                v89 = rclBkGround.left;
                v90 = rclBkGround.right;
                if ( rclBkGround.left == rclBkGround.right
                  || (v91 = rclBkGround.top, v63 = rclBkGround.bottom, rclBkGround.top == rclBkGround.bottom) )
                {
                  rclBkGround = pstro.rclBkGround;
                  v63 = pstro.rclBkGround.bottom;
                }
                else
                {
                  if ( v88 < rclBkGround.left )
                    v89 = v88;
                  rclBkGround.left = v89;
                  if ( pstro.rclBkGround.top < rclBkGround.top )
                    v91 = pstro.rclBkGround.top;
                  rclBkGround.top = v91;
                  if ( v87 > rclBkGround.right )
                    v90 = v87;
                  rclBkGround.right = v90;
                  if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
                  {
                    v63 = pstro.rclBkGround.bottom;
                    rclBkGround.bottom = pstro.rclBkGround.bottom;
                  }
                }
                if ( a9 == 2 )
                {
                  if ( !v86 )
                  {
                    p_rclBkGround = &pstro.rclBkGround;
                    v215 = (struct _XLATEOBJ *)&pstro.rclBkGround;
                    goto LABEL_125;
                  }
                  v16 |= 0x10u;
                }
                p_rclBkGround = 0LL;
LABEL_125:
                if ( v88 >= v87 || (v92 = 0, pstro.rclBkGround.top >= pstro.rclBkGround.bottom) )
                  v92 = 1;
                v93 = v247.bottom;
                if ( (v16 & 8) == 0
                  || v247.left > v88
                  || v247.right < v87
                  || v247.top > pstro.rclBkGround.top
                  || v247.bottom < pstro.rclBkGround.bottom
                  || v92 )
                {
                  if ( !p_rclBkGround )
                  {
                    if ( v92 )
                    {
LABEL_142:
                      if ( (v210 & 0xA0) != 0 )
                      {
                        if ( v260 )
                        {
                          v64 = (ERECTL *)v261;
                          v94 = (ERECTL *)v261;
                          if ( !ERECTL::bEmpty((ERECTL *)v261) )
                          {
                            do
                            {
                              ERECTL::operator+=(&rclBkGround, v94);
                              v94 = (ERECTL *)((char *)v94 + 16);
                            }
                            while ( !ERECTL::bEmpty(v94) );
                            v63 = rclBkGround.bottom;
                            v93 = v247.bottom;
                          }
                        }
                        else
                        {
                          v16 |= 4u;
                        }
                      }
                      if ( (v18 & 4) != 0 )
                      {
                        if ( v247.left > rclBkGround.left
                          || v247.right < rclBkGround.right
                          || v247.top > rclBkGround.top
                          || v93 < v63 )
                        {
                          v95 = rclBkGround.left;
                          v96 = rclBkGround.top;
                          if ( v247.left > rclBkGround.left )
                            v95 = v247.left;
                          rclBkGround.left = v95;
                          if ( v247.top > rclBkGround.top )
                            v96 = v247.top;
                          rclBkGround.top = v96;
                          v97 = rclBkGround.right;
                          if ( v247.right < rclBkGround.right )
                            v97 = v247.right;
                          rclBkGround.right = v97;
                          if ( v93 < v63 )
                            v63 = v93;
                          rclBkGround.bottom = v63;
                          if ( v97 >= v95 )
                          {
                            if ( v63 < rclBkGround.top )
                              rclBkGround.top = v63;
                          }
                          else
                          {
                            rclBkGround.left = v97;
                          }
                        }
                        else
                        {
                          LOBYTE(v18) = -5;
                        }
                      }
LABEL_168:
                      if ( (v210 & 1) != 0 )
                      {
                        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) += v258;
                        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 12LL) += v259;
                        v63 = rclBkGround.bottom;
                      }
                      v98 = *(_QWORD *)a1;
                      if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0 )
                      {
                        v99 = 0;
                        if ( (v18 & 4) == 0 )
                          v99 = v16;
                        v16 = v99;
                        v100 = v99;
                        XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v232, a1);
                        if ( !v233 )
                          goto LABEL_199;
                        if ( (v100 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v232, &v247) )
                          v16 = 0;
                        if ( (v16 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v232, v101, &v264, v103) )
                          v16 = 0;
                        if ( (v16 & 0x10) != 0
                          && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v232, v101, &v271, v103) )
                        {
                          v16 = 0;
                        }
                        if ( (v16 & 1) != 0
                          && (!p_rclBkGround || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v232, p_rclBkGround)) )
                        {
                          if ( (v262 & 0x1400) != 0 )
                            v104 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)v232, v102);
                          else
                            v104 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v232);
                          if ( !v104 )
                          {
LABEL_195:
                            v16 = 0;
                            goto LABEL_196;
                          }
                          if ( v64 && !ERECTL::bEmpty(v64) )
                          {
                            while ( (unsigned int)bAddRectToPath((struct EPATHOBJ *)v232, (struct _RECTL *)v64) )
                            {
                              v64 = (ERECTL *)((char *)v64 + 16);
                              if ( ERECTL::bEmpty(v64) )
                                goto LABEL_196;
                            }
                            goto LABEL_195;
                          }
                        }
LABEL_196:
                        if ( (v16 & 4) != 0
                          && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v232) )
                        {
                          v16 = 0;
                        }
LABEL_199:
                        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v232);
LABEL_426:
                        if ( (v262 & 0x801) != 0 )
                        {
                          if ( (v262 & 1) != 0 )
                            FreeTmpBuffer(v257);
                          if ( (v262 & 0x800) != 0 )
                            Win32FreePool(v263);
                        }
                        if ( v207 )
                        {
                          if ( (*(_DWORD *)(v207 + 712) & 0x81) != 0 && (int)IsMulDestroyBrushInternalSupported() >= 0 )
                            RFONTOBJ_dtorHelperWrap(&v207);
                          v195 = *(_QWORD *)(v207 + 616);
                          if ( v195 )
                          {
                            Win32FreePool(v195);
                            *(_QWORD *)(v207 + 624) = 0LL;
                            *(_QWORD *)(v207 + 616) = 0LL;
                          }
                          EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v207 + 504));
                          GreReleaseSemaphoreInternal(*(_QWORD *)(v207 + 504));
                        }
                        if ( v221 )
                          TXTCLEANUP::vMopUp((TXTCLEANUP *)&v221);
                        goto LABEL_441;
                      }
                      if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == v63 )
                        goto LABEL_426;
                      v105 = *(_DWORD *)(v98 + 36);
                      if ( (v105 & 0xE0) != 0 )
                      {
                        v106 = *(_DWORD *)(v98 + 40) & 1;
                        *(struct _RECTL *)v216 = rclBkGround;
                        v107 = *(_DWORD *)(v98 + 8 * v106 + 1016);
                        v108 = rclBkGround.left - v107;
                        LODWORD(v216[1]) = rclBkGround.right - v107;
                        v109 = *(_DWORD *)(v98 + 8 * v106 + 1020);
                        HIDWORD(v216[0]) = rclBkGround.top - v109;
                        HIDWORD(v216[1]) = rclBkGround.bottom - v109;
                        LODWORD(v216[0]) = v108;
                        if ( (v105 & 0x20) != 0 )
                        {
                          ERECTL::operator|=(v98 + 1064, v216);
                          v98 = *(_QWORD *)a1;
                        }
                        if ( (*(_DWORD *)(v98 + 36) & 0x80u) != 0 )
                          ERECTL::operator|=(v98 + 1096, v216);
                      }
                      if ( (_DWORD)v222 || (v110 = 0, (v18 & 4) != 0) )
                        v110 = 1;
                      v111 = *(_QWORD *)a1;
                      v112 = *(_QWORD *)(*(_QWORD *)a1 + 1176LL);
                      if ( !v112
                        || (*(_DWORD *)(v111 + 40) & 2) == 0
                        || (v170 = (unsigned int)DC::bDpiScaledSurface(*(DC **)a1) == 0, v113 = v112, v170) )
                      {
                        v113 = *(_QWORD *)(v111 + 1160);
                      }
                      if ( v113 )
                      {
                        if ( !v112
                          || (*(_DWORD *)(v111 + 40) & 2) == 0
                          || !(unsigned int)DC::bDpiScaledSurface((DC *)v111) )
                        {
                          v114 = *(struct REGION **)(v111 + 1160);
                        }
                      }
                      else
                      {
                        v114 = DC::prgnVisSnap((DC *)v111);
                      }
                      v250 = 0LL;
                      v251 = 0LL;
                      v252 = 0;
                      v253 = 1;
                      v254 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)&v249, v114, (struct ERECTL *)&rclBkGround, v110);
                      rclBounds = v249.rclBounds;
                      v118 = (unsigned int)_mm_cvtsi128_si32((__m128i)v249.rclBounds);
                      v119 = _mm_srli_si128((__m128i)v249.rclBounds, 8);
                      rclBkGround = v249.rclBounds;
                      v249.rclBounds.left = v118;
                      if ( (_DWORD)v118 == _mm_cvtsi128_si32(v119)
                        || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                         _mm_srli_si128(
                                                                                           (__m128i)rclBounds,
                                                                                           12)) )
                      {
                        goto LABEL_426;
                      }
                      v120 = *(_QWORD *)a1;
                      v121 = *(_QWORD *)a1;
                      v122 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
                      if ( (v122 & 0xE0) != 0 )
                      {
                        v248 = rclBounds;
                        v123 = *(_DWORD *)(v120 + 40) & 1;
                        v118 = (unsigned int)(v118 - *(_DWORD *)(v120 + 8 * v123 + 1016));
                        v248.left = v118;
                        v115 = (unsigned int)(rclBounds.right - *(_DWORD *)(v120 + 8 * v123 + 1016));
                        v248.right = rclBounds.right - *(_DWORD *)(v120 + 8 * v123 + 1016);
                        v116 = (unsigned int)(rclBounds.top - *(_DWORD *)(v120 + 8 * v123 + 1020));
                        v248.top = rclBounds.top - *(_DWORD *)(v120 + 8 * v123 + 1020);
                        v248.bottom = rclBounds.bottom - *(_DWORD *)(v120 + 8 * v123 + 1020);
                        if ( (v122 & 0x40) != 0 )
                        {
                          v124 = *(_DWORD *)(v120 + 1080);
                          if ( v124 == *(_DWORD *)(v120 + 1088)
                            || (v125 = *(_DWORD *)(v120 + 1084), v125 == *(_DWORD *)(v120 + 1092)) )
                          {
                            *(RECTL *)(v120 + 1080) = v248;
                          }
                          else
                          {
                            if ( (int)v118 < v124 )
                            {
                              *(_DWORD *)(v120 + 1080) = v118;
                              v115 = (unsigned int)v248.right;
                              v116 = (unsigned int)v248.top;
                            }
                            if ( (int)v116 < v125 )
                            {
                              *(_DWORD *)(v120 + 1084) = v116;
                              v115 = (unsigned int)v248.right;
                            }
                            if ( (int)v115 > *(_DWORD *)(v120 + 1088) )
                              *(_DWORD *)(v120 + 1088) = v115;
                            if ( v248.bottom > *(_DWORD *)(v120 + 1092) )
                              *(_DWORD *)(v120 + 1092) = v248.bottom;
                          }
                          v121 = *(_QWORD *)a1;
                          *(_QWORD *)v220 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
                          if ( *(_QWORD *)v220 )
                          {
                            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v231);
                            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v231);
                            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v230);
                            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v230);
                            if ( v231[0] )
                            {
                              if ( v230[0] )
                              {
                                RGNOBJ::vSet((RGNOBJ *)v230, &v248);
                                if ( RGNOBJ::bMerge(
                                       (RGNOBJ *)v231,
                                       (struct RGNOBJ *)v220,
                                       (struct RGNOBJ *)v230,
                                       BYTE2(gafjRgnOp)) )
                                {
                                  RGNOBJ::vSwap((RGNOBJ *)v220, (struct RGNOBJ *)v231);
                                  *(_QWORD *)(*(_QWORD *)a1 + 1192LL) = *(_QWORD *)v220;
                                }
                              }
                            }
                            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v230);
                            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v231);
                            v121 = *(_QWORD *)a1;
                          }
                        }
                      }
                      v126 = *(_QWORD *)(v121 + 496);
                      if ( !v126 )
                        goto LABEL_426;
                      if ( (*(_DWORD *)(v126 + 116) & 8) != 0 || *(_QWORD *)(v126 + 224) )
                      {
                        v120 = 512LL;
                        if ( (*(_WORD *)(v126 + 102) & 0x200) != 0 )
                          goto LABEL_426;
                      }
                      v127 = *(_DWORD *)(v126 + 112);
                      if ( (v127 & 0x800) != 0 )
                      {
                        v128 = UserSurfaceAccessCheck(*(_QWORD *)(v126 + 648), v115, v118, v116);
                      }
                      else
                      {
                        if ( (v127 & 0x10000000) == 0 )
                          goto LABEL_250;
                        v128 = UserScreenAccessCheck(v120, v115, v118, v116);
                      }
                      if ( !v128 )
                        goto LABEL_426;
LABEL_250:
                      v129 = *(_QWORD *)a1;
                      v130 = 0LL;
                      v131 = (struct _POINTL *)v129;
                      v132 = *(_QWORD *)(v126 + 128);
                      v209 = *(_QWORD *)(v126 + 48);
                      iUniq = *(unsigned int *)(v129 + 72);
                      v134 = v129 + 1480;
                      v135 = *(_QWORD *)(v129 + 88);
                      v203 = (struct _BRUSHOBJ *)(v129 + 1480);
                      v205 = (struct _BRUSHOBJ *)(v129 + 1616);
                      v211 = iUniq;
                      if ( (iUniq & 0x10000000) != 0 )
                      {
                        v130 = v201;
                        *(_DWORD *)(*(_QWORD *)(v129 + 976) + 152LL) |= 4u;
                        --*(_DWORD *)(v129 + 1604);
                        v129 = *(_QWORD *)a1;
                        v131 = *(struct _POINTL **)a1;
                      }
                      v136 = *(_QWORD *)(v129 + 976);
                      if ( ((*(_BYTE *)(v129 + 316) | *(_BYTE *)(v136 + 152)) & 0xC) != 0 )
                      {
                        if ( ((*(_BYTE *)(v129 + 316) | *(_BYTE *)(v136 + 152)) & 4) != 0 )
                        {
                          EBRUSHOBJ::vInitBrush(v134, v129, gpbrText, v135, v132, v126, v130);
                          v129 = *(_QWORD *)a1;
                        }
                        if ( ((*(_BYTE *)(v129 + 316) | *(_BYTE *)(*(_QWORD *)(v129 + 976) + 152LL)) & 8) != 0 )
                        {
                          EBRUSHOBJ::vInitBrush(v205, v129, gpbrBackground, v135, v132, v126, (v211 >> 15) & 1);
                          v129 = *(_QWORD *)a1;
                        }
                        *(_DWORD *)(*(_QWORD *)(v129 + 976) + 152LL) &= 0xFFFFFFF3;
                        *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= 0xFFFFFFF3;
                        v131 = *(struct _POINTL **)a1;
                      }
                      v137 = v131 + 150;
                      if ( (v16 & 0x1A) != 0 )
                      {
                        if ( (v16 & 8) != 0 )
                        {
                          v138 = v247.left;
                          v139 = v247.right;
                          if ( v247.left != v247.right )
                          {
                            v140 = v247.top;
                            iUniq = (unsigned int)v247.bottom;
                            if ( v247.top != v247.bottom )
                            {
                              si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                              v142 = _mm_cvtsi128_si32(si128);
                              v143 = _mm_srli_si128(si128, 8);
                              rclBkGround.left = v142;
                              if ( v142 > v247.left )
                                v138 = v142;
                              v144 = _mm_cvtsi128_si32(v143);
                              v249.rclBounds.left = v138;
                              v145 = _mm_srli_si128(si128, 4);
                              rclBkGround.right = v144;
                              v146 = _mm_srli_si128(si128, 12);
                              if ( v144 < v247.right )
                                v139 = v144;
                              v147 = _mm_cvtsi128_si32(v145);
                              v249.rclBounds.right = v139;
                              rclBkGround.top = v147;
                              if ( v147 > v247.top )
                                v140 = v147;
                              v130 = (unsigned int)_mm_cvtsi128_si32(v146);
                              v249.rclBounds.top = v140;
                              rclBkGround.bottom = v130;
                              if ( (int)v130 < v247.bottom )
                                iUniq = (unsigned int)v130;
                              v249.rclBounds.bottom = iUniq;
                              if ( v138 < v139 && v140 < (int)iUniq )
                              {
                                ++*(_DWORD *)(v126 + 92);
                                v148 = v272;
                                v149 = *(_QWORD *)(v126 + 48);
                                v206 = 0;
                                v201 = 0;
                                v210 = 0;
                                v150 = *(_DWORD *)(v149 + 40) & 0x8080;
                                v225 = v272;
                                if ( v150 == 32896 && v207 )
                                {
                                  v151 = UMPDReleaseRFONTSem((struct RFONTOBJ *)&v207, 0LL, &v201, &v210, &v225);
                                  v148 = v225;
                                  v206 = v151;
                                }
                                if ( (*(_DWORD *)(v126 + 112) & 1) != 0 )
                                  v152 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v126 + 48) + 2832LL);
                                else
                                  v152 = EngBitBlt;
                                v199 = (unsigned int)v137;
                                v198 = (struct _POINTL *)v205;
                                v197 = 0LL;
                                p_rclBounds = (struct _XLATEOBJ *)&v249.rclBounds;
                                ((void (__fastcall *)(__int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD))v152)(
                                  v126 + 24,
                                  0LL,
                                  0LL,
                                  &v249,
                                  0LL);
                                if ( v206 )
                                {
                                  UMPDAcquireRFONTSem((struct RFONTOBJ *)&v207, 0LL, v201, v210, v148);
                                  if ( v148 )
                                  {
                                    if ( v148 != v272 )
                                      Win32FreePool(v148);
                                  }
                                }
                              }
                              v249.rclBounds = rclBkGround;
                            }
                          }
                        }
                        if ( (v16 & 0x12) != 0 )
                        {
                          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                          if ( v239 )
                          {
                            if ( (v16 & 2) != 0
                              && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v153, &v264, v154) )
                            {
                              v16 = 0;
                            }
                            if ( (v16 & 0x10) != 0
                              && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v153, &v271, v154) )
                            {
                              v16 = 0;
                            }
                            if ( (v16 & 0x12) != 0
                              && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                  &ppo,
                                                  a1,
                                                  (struct RFONTOBJ *)&v207,
                                                  (struct PDEVOBJ *)&v209,
                                                  (struct SURFACE *)v126,
                                                  &v249,
                                                  v205,
                                                  v137,
                                                  (unsigned int)v198,
                                                  v199) )
                            {
                              v16 = 0;
                            }
                          }
                          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                        }
                      }
                      if ( (v16 & 1) == 0 )
                        goto LABEL_420;
                      v226 = 0LL;
                      if ( (_DWORD)v222 )
                      {
                        iUniq = 32LL;
                        flXlate = 4294967039LL;
                        v156 = 64;
                        if ( (*(_DWORD *)(v207 + 716) & 0x8000) == 0 )
                          v156 = 32;
                        v16 |= v156;
                      }
                      else
                      {
                        flXlate = v211;
                      }
                      if ( v215 && (flXlate & 0x100) == 0 )
                      {
                        iUniq = v215->iUniq;
                        v157 = *(_DWORD *)&v215->iSrcType;
                        if ( rclBkGround.left > (int)iUniq )
                          iUniq = (unsigned int)rclBkGround.left;
                        flXlate = v215->flXlate;
                        if ( rclBkGround.right < v157 )
                          v157 = rclBkGround.right;
                        cEntries = v215->cEntries;
                        if ( rclBkGround.top > (int)flXlate )
                          flXlate = (unsigned int)rclBkGround.top;
                        v249.rclBounds.left = iUniq;
                        if ( rclBkGround.bottom < (int)cEntries )
                          cEntries = (unsigned int)rclBkGround.bottom;
                        v249.rclBounds.bottom = cEntries;
                        v249.rclBounds.right = v157;
                        v249.rclBounds.top = flXlate;
                        if ( (int)iUniq < v157 && (int)flXlate < (int)cEntries )
                        {
                          v159 = v205;
                          ++*(_DWORD *)(v126 + 92);
                          TextOutBitBlt(
                            (struct SURFACE *)v126,
                            (struct RFONTOBJ *)&v207,
                            (struct _SURFOBJ *)cEntries,
                            (struct _SURFOBJ *)v130,
                            &v249,
                            p_rclBounds,
                            &v249.rclBounds,
                            v197,
                            v198,
                            v159,
                            v137,
                            v200);
                        }
                        v249.rclBounds = rclBkGround;
                        v215 = 0LL;
                      }
                      if ( v64 && *(_DWORD *)(v209 + 2140) != 4 )
                      {
                        v226 = v64;
                        v64 = 0LL;
                      }
                      if ( (v16 & 0x20) != 0 )
                      {
                        if ( (v262 & 0x1400) != 0 )
                        {
                          v160 = v203;
                          if ( !(unsigned int)bProxyDrvTextOut(
                                                a1,
                                                (struct SURFACE *)v126,
                                                (struct ESTROBJ *)&pstro,
                                                &v249,
                                                0LL,
                                                0LL,
                                                v203,
                                                v205,
                                                v137,
                                                (struct RFONTOBJ *)&v207,
                                                (struct PDEVOBJ *)&v209,
                                                *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                                &rclBkGround) )
                            v16 = 0;
                          goto LABEL_404;
                        }
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v236);
                        if ( v237 )
                        {
                          if ( (v262 & 0x1400) != 0 )
                            v162 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v236, v161);
                          else
                            v162 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v236);
                          v160 = v203;
                          if ( v162
                            && (unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                               &v236,
                                               a1,
                                               (struct RFONTOBJ *)&v207,
                                               (struct PDEVOBJ *)&v209,
                                               (struct SURFACE *)v126,
                                               &v249,
                                               v203,
                                               v137,
                                               (unsigned int)v198) )
                          {
                            goto LABEL_331;
                          }
                        }
                        else
                        {
                          v160 = v203;
                        }
                        v16 = 0;
LABEL_331:
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v236);
LABEL_404:
                        v183 = v226;
                        if ( v226 )
                        {
                          v184 = v249.rclBounds;
                          ++*(_DWORD *)(v126 + 92);
                          *(RECTL *)v216 = v184;
                          if ( !ERECTL::bEmpty(v183) )
                          {
                            v186 = (struct _SURFOBJ *)HIDWORD(v216[1]);
                            v187 = (LONG *)(v185 + 4);
                            v188 = (LONG)v216[1];
                            v189 = (struct _SURFOBJ *)HIDWORD(v216[0]);
                            v190 = (LONG)v216[0];
                            do
                            {
                              v191 = *(v187 - 1);
                              if ( v190 > v191 )
                                v191 = v190;
                              v192 = v187[1];
                              v249.rclBounds.left = v191;
                              if ( v188 < v192 )
                                v192 = v188;
                              v249.rclBounds.right = v192;
                              if ( v191 < v192 )
                              {
                                v193 = *v187;
                                v194 = v187[2];
                                if ( (int)v189 > *v187 )
                                  v193 = (int)v189;
                                v249.rclBounds.top = v193;
                                if ( (int)v186 < v194 )
                                  v194 = (int)v186;
                                v249.rclBounds.bottom = v194;
                                if ( v193 < v194 )
                                  TextOutBitBlt(
                                    (struct SURFACE *)v126,
                                    (struct RFONTOBJ *)&v207,
                                    v186,
                                    v189,
                                    &v249,
                                    p_rclBounds,
                                    &v249.rclBounds,
                                    v197,
                                    v198,
                                    v160,
                                    v137,
                                    v200);
                              }
                              v187 += 4;
                              v170 = !ERECTL::bEmpty((ERECTL *)(v187 - 1));
                              v190 = (LONG)v216[0];
                            }
                            while ( v170 );
                          }
                          v249.rclBounds = v184;
                        }
LABEL_420:
                        if ( (v16 & 4) != 0 )
                        {
                          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v244);
                          if ( !v245
                            || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v244)
                            || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                &v244,
                                                a1,
                                                (struct RFONTOBJ *)&v207,
                                                (struct PDEVOBJ *)&v209,
                                                (struct SURFACE *)v126,
                                                &v249,
                                                v203,
                                                v137,
                                                (unsigned int)v198,
                                                v199) )
                          {
                            v16 = 0;
                          }
                          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v244);
                        }
                        goto LABEL_426;
                      }
                      CurrentThread = KeGetCurrentThread();
                      if ( !(unsigned int)IsThreadCrossSessionAttached(iUniq, flXlate)
                        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
                        && (v165 = *ThreadWin32Thread) != 0 )
                      {
                        v166 = *(_QWORD *)(v165 + 304);
                      }
                      else
                      {
                        v166 = *(_QWORD *)(v126 + 104);
                      }
                      if ( v166 )
                        SURFACE::pdcoAA((SURFACE *)v126, 0LL);
                      if ( (*(_DWORD *)(v126 + 112) & 8) != 0 )
                        v167 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v126 + 48) + 2872LL);
                      else
                        v167 = EngTextOut;
                      if ( (char *)v167 == (char *)SpTextOut || (char *)v167 == (char *)BmpDevTextOut )
                      {
                        if ( (*(_DWORD *)(v207 + 12) & 0x10010000) != 0 )
                        {
                          *(_QWORD *)(v126 + 104) = a1;
                          v171 = W32GetThreadWin32Thread(KeGetCurrentThread());
                          if ( v171 )
                            *(_QWORD *)(v171 + 304) = a1;
                        }
                      }
                      else
                      {
                        v168 = *(_DWORD *)(v207 + 12);
                        if ( (v168 & 0x10000) != 0 )
                        {
                          v169 = *(_QWORD *)a1;
                          v170 = (v168 & 0x10000000) != 0
                               ? (*(_DWORD *)(v169 + 76) & 0x4000) == 0
                               : (*(_DWORD *)(v169 + 72) & 0x1000000) == 0;
                          if ( v170 )
                          {
                            if ( v167 != EngTextOut )
                              SURFACE::pdcoAA((SURFACE *)v126, a1);
                            v167 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                          }
                        }
                      }
                      if ( (v16 & 0x40) != 0 )
                      {
                        if ( (v262 & 0x1400) != 0 )
                        {
                          v160 = v203;
                          if ( !(unsigned int)bProxyDrvTextOut(
                                                a1,
                                                (struct SURFACE *)v126,
                                                (struct ESTROBJ *)&pstro,
                                                &v249,
                                                0LL,
                                                0LL,
                                                v203,
                                                v205,
                                                v137,
                                                (struct RFONTOBJ *)&v207,
                                                (struct PDEVOBJ *)&v209,
                                                *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                                &rclBkGround) )
                            v16 = 0;
                          goto LABEL_400;
                        }
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v234);
                        if ( !v235
                          || ((v262 & 0x1400) == 0
                            ? (v175 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v234))
                            : (v175 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v234, v174)),
                              !v175
                           || v234.cCurves > 1
                           && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                               &v234,
                                               a1,
                                               (struct RFONTOBJ *)&v207,
                                               (struct PDEVOBJ *)&v209,
                                               (struct SURFACE *)v126,
                                               &v249,
                                               v203,
                                               v137,
                                               (unsigned int)v198,
                                               v199)) )
                        {
                          v16 = 0;
                        }
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v234);
                        goto LABEL_399;
                      }
                      ++*(_DWORD *)(v126 + 92);
                      if ( (v16 & 4) == 0 )
                      {
                        if ( (v262 & 0x1400) != 0 )
                        {
                          v176 = bProxyDrvTextOut(
                                   a1,
                                   (struct SURFACE *)v126,
                                   (struct ESTROBJ *)&pstro,
                                   &v249,
                                   (struct _RECTL *)v64,
                                   (struct _RECTL *)v215,
                                   v203,
                                   v205,
                                   v137,
                                   (struct RFONTOBJ *)&v207,
                                   (struct PDEVOBJ *)&v209,
                                   0,
                                   &rclBkGround);
                          v160 = v203;
                          if ( !v176 )
                            v16 = 0;
                          goto LABEL_400;
                        }
                        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8080) == 0x80
                          && !*(_DWORD *)(v207 + 92) )
                        {
                          v227 = (unsigned __int16 *)ghsemPrintKView;
                          GreAcquireSemaphore(ghsemPrintKView);
                          for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                          {
                            if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v207 + 128) + 80LL) )
                              ++*(_DWORD *)(i + 12);
                          }
                          SEMOBJ::vUnlock((SEMOBJ *)&v227);
                        }
                        v199 = 3341;
                        v198 = v137;
                        v197 = (struct _POINTL *)v205;
                        p_rclBounds = v215;
                        if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, ERECTL *))v167)(
                                v126 + 24,
                                &pstro,
                                v207,
                                &v249,
                                v64) )
                          v16 = 0;
                        v173 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
                        if ( (*(_DWORD *)(v173 + 40) & 0x8080) == 0x80 && !*(_DWORD *)(v207 + 92) )
                        {
                          v222 = ghsemPrintKView;
                          GreAcquireSemaphore(ghsemPrintKView);
                          for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                          {
                            if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v207 + 128) + 80LL) )
                            {
                              v179 = *(_DWORD *)(j + 12);
                              if ( v179 )
                                *(_DWORD *)(j + 12) = v179 - 1;
                            }
                          }
                          SEMOBJ::vUnlock((SEMOBJ *)&v222);
                        }
LABEL_399:
                        v160 = v203;
                        goto LABEL_400;
                      }
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v242);
                      if ( !v243
                        || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v242) )
                      {
                        goto LABEL_373;
                      }
                      if ( (v262 & 0x1400) != 0 )
                      {
                        if ( !(unsigned int)bProxyDrvTextOut(
                                              a1,
                                              (struct SURFACE *)v126,
                                              (struct ESTROBJ *)&pstro,
                                              &v249,
                                              (struct _RECTL *)v64,
                                              (struct _RECTL *)v215,
                                              v203,
                                              v205,
                                              v137,
                                              (struct RFONTOBJ *)&v207,
                                              0LL,
                                              0,
                                              &rclBkGround) )
                        {
LABEL_373:
                          v160 = v203;
LABEL_374:
                          v16 = 0;
LABEL_375:
                          v16 &= ~4u;
                          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v242);
LABEL_400:
                          *(_QWORD *)(v126 + 104) = 0LL;
                          v180 = KeGetCurrentThread();
                          if ( !(unsigned int)IsThreadCrossSessionAttached(v173, v172) )
                          {
                            v181 = (__int64 *)PsGetThreadWin32Thread(v180);
                            if ( v181 )
                            {
                              v182 = *v181;
                              if ( v182 )
                                *(_QWORD *)(v182 + 304) = 0LL;
                            }
                          }
                          goto LABEL_404;
                        }
                      }
                      else
                      {
                        v199 = 3341;
                        v198 = v137;
                        v197 = (struct _POINTL *)v205;
                        p_rclBounds = v215;
                        if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, ERECTL *))v167)(
                                v126 + 24,
                                &pstro,
                                v207,
                                &v249,
                                v64) )
                          goto LABEL_373;
                      }
                      v160 = v203;
                      if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                           &v242,
                                           a1,
                                           (struct RFONTOBJ *)&v207,
                                           (struct PDEVOBJ *)&v209,
                                           (struct SURFACE *)v126,
                                           &v249,
                                           v203,
                                           v137,
                                           (unsigned int)v198,
                                           v199) )
                        goto LABEL_375;
                      goto LABEL_374;
                    }
LABEL_141:
                    v16 |= 1u;
                    goto LABEL_142;
                  }
                }
                else
                {
                  p_rclBkGround = &v247;
                  v16 &= ~8u;
                  v215 = (struct _XLATEOBJ *)&v247;
                }
                if ( p_rclBkGround->left >= p_rclBkGround->right || p_rclBkGround->top >= p_rclBkGround->bottom )
                  goto LABEL_142;
                goto LABEL_141;
              }
LABEL_167:
              v63 = rclBkGround.bottom;
              p_rclBkGround = 0LL;
              v16 = 0;
              goto LABEL_168;
            }
          }
          rclBkGround = v247;
        }
        LODWORD(v27) = (_DWORD)v205;
        LOBYTE(v18) = v204;
      }
      v63 = rclBkGround.bottom;
      goto LABEL_79;
    }
  }
  v16 = 0;
LABEL_441:
  LOBYTE(v11) = v16 != 0;
  return v11;
}
