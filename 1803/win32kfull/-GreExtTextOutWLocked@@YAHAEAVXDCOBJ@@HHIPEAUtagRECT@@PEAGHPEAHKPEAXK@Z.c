/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0
 * Callers:
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0089030 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009D650 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GrePolyTextOutW @ 0x1C00DB94C (GrePolyTextOutW.c)
 * Callees:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00024CC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0002A08 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0002A3C (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0046E70 (IsMulDestroyBrushInternalSupported.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C008B6A0 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BC88 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C008BCB4 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0094290 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A5154 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A51B0 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E1AE4 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C011CF20 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C011CF50 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     RFONTOBJ_dtorHelperWrap @ 0x1C013C1C0 (RFONTOBJ_dtorHelperWrap.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02576B8 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0257810 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C0289E10 (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C0289E74 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C028BD5C (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C028C12C (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C028C34C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
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
        void *a10,
        unsigned int a11)
{
  unsigned int v11; // r15d
  struct tagRECT *v12; // r13
  struct XDCOBJ *v13; // r12
  int v14; // r14d
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v19; // r9d
  __int64 v20; // rdx
  int v21; // eax
  struct _XLATEOBJ *v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  _DWORD *v30; // rcx
  struct XDCOBJ *v31; // rsi
  int v32; // eax
  LONG v33; // ebx
  int v34; // edi
  int v35; // r13d
  int bottom; // r8d
  LONG left; // edx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  LONG top; // ecx
  LONG right; // eax
  int v45; // r9d
  int v46; // r10d
  int v47; // ecx
  int v48; // ebx
  int v49; // edi
  int v50; // ecx
  int v51; // r13d
  int v52; // r8d
  struct EXFORMOBJ *v53; // rdx
  int v54; // r9d
  __int64 v55; // rcx
  unsigned int v56; // eax
  int v57; // eax
  LONG v58; // eax
  LONG v59; // eax
  LONG v60; // eax
  LONG v61; // ecx
  LONG v62; // r9d
  LONG v63; // edx
  ERECTL *v64; // rbx
  RECTL *p_rclBkGround; // r13
  struct DC *v66; // r8
  SURFACE *v67; // rdi
  int v68; // eax
  __int64 v69; // rcx
  int v70; // eax
  int v71; // edi
  int v72; // r8d
  DC *v73; // rdx
  int v74; // edi
  int v75; // r8d
  __int64 v76; // rcx
  _DWORD *v77; // r13
  DC *v78; // rdi
  int v79; // eax
  __int64 v80; // r8
  _DWORD *v81; // r13
  int v82; // eax
  int v83; // r8d
  __int64 v84; // rcx
  __int64 v85; // r8
  DC *v86; // rdx
  int v87; // eax
  int v88; // r8d
  int v89; // ecx
  LONG v90; // eax
  LONG v91; // r9d
  LONG v92; // r10d
  int v93; // eax
  LONG v94; // r9d
  ERECTL *v95; // rdi
  LONG v96; // r8d
  LONG v97; // eax
  LONG v98; // eax
  DC *v99; // r9
  int v100; // eax
  char v101; // di
  struct EXFORMOBJ *v102; // rdx
  struct XDCOBJ *v103; // r8
  int v104; // r9d
  int v105; // eax
  int v106; // edx
  __int64 v107; // rcx
  int v108; // eax
  __int64 v109; // r8
  int v110; // eax
  int v111; // r11d
  DC *v112; // rdx
  __int64 v113; // r10
  __int64 v114; // rax
  struct REGION *v115; // r10
  RECTL rclBounds; // xmm2
  LONG v117; // r8d
  __m128i v118; // xmm0
  DC *v119; // rcx
  DC *v120; // r13
  int v121; // r10d
  __int64 v122; // rax
  LONG v123; // r8d
  int v124; // edx
  int v125; // r9d
  LONG v126; // r10d
  int v127; // eax
  __int64 v128; // r13
  int v129; // eax
  int v130; // eax
  DC *v131; // r10
  int v132; // r9d
  DC *v133; // r8
  struct _CLIPOBJ *v134; // rbx
  __int64 iUniq; // rcx
  char *v136; // r11
  __int64 v137; // rdi
  __int64 v138; // rax
  struct _BRUSHOBJ *v139; // rbx
  struct _POINTL *v140; // rdi
  LONG v141; // r8d
  int v142; // r11d
  int v143; // eax
  __m128i si128; // xmm1
  __int64 flXlate; // rdx
  __m128i v146; // xmm0
  struct _SURFOBJ *v147; // r8
  unsigned __int64 v148; // r9
  int v149; // r10d
  struct EXFORMOBJ *v150; // rdx
  int v151; // r9d
  int v152; // eax
  LONG v153; // eax
  unsigned __int64 cEntries; // r8
  struct _RECTL *v155; // rbx
  struct XDCOBJ *v156; // r8
  int v157; // eax
  __int64 v158; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  BOOL (__stdcall *v162)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rcx
  int v163; // edx
  DC *v164; // rax
  bool v165; // zf
  __int64 v166; // rax
  int v167; // eax
  __int64 v168; // rdx
  __int64 v169; // rcx
  struct XDCOBJ *v170; // r8
  int v171; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v174; // eax
  struct _KTHREAD *v175; // rbx
  __int64 *v176; // rax
  __int64 v177; // rax
  ERECTL *v178; // rcx
  RECTL v179; // xmm6
  __int64 v180; // rcx
  struct _SURFOBJ *v181; // r8
  LONG *v182; // rbx
  LONG v183; // edx
  struct _SURFOBJ *v184; // r9
  LONG v185; // eax
  struct _BRUSHOBJ *v186; // r12
  LONG v187; // ecx
  LONG v188; // eax
  LONG v189; // ecx
  LONG v190; // eax
  __int64 v191; // rcx
  __int64 v192; // rax
  struct _CLIPOBJ *v193; // [rsp+20h] [rbp-F0h]
  struct _XLATEOBJ *v194; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v195; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v196; // [rsp+40h] [rbp-D0h]
  unsigned int v197; // [rsp+48h] [rbp-C8h]
  unsigned int v198; // [rsp+58h] [rbp-B8h]
  unsigned int v199[2]; // [rsp+90h] [rbp-80h] BYREF
  struct _BRUSHOBJ *v200; // [rsp+98h] [rbp-78h]
  unsigned int v201; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v202; // [rsp+A8h] [rbp-68h] BYREF
  int v203; // [rsp+B0h] [rbp-60h]
  struct _BRUSHOBJ *v204; // [rsp+B8h] [rbp-58h]
  __int64 v205; // [rsp+C0h] [rbp-50h] BYREF
  ERECTL *v206; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v207; // [rsp+D0h] [rbp-40h]
  int v208; // [rsp+D8h] [rbp-38h] BYREF
  unsigned int v209; // [rsp+DCh] [rbp-34h] BYREF
  int v210; // [rsp+E0h] [rbp-30h] BYREF
  int v211; // [rsp+E4h] [rbp-2Ch]
  struct _XLATEOBJ *v212; // [rsp+E8h] [rbp-28h]
  int v213[4]; // [rsp+F0h] [rbp-20h] BYREF
  struct _SURFOBJ *v214[2]; // [rsp+100h] [rbp-10h] BYREF
  int v215; // [rsp+110h] [rbp+0h]
  struct tagRECT *v216; // [rsp+118h] [rbp+8h] BYREF
  _DWORD *v217; // [rsp+120h] [rbp+10h] BYREF
  int v218; // [rsp+128h] [rbp+18h]
  int v219; // [rsp+12Ch] [rbp+1Ch]
  struct _RECTL *v220; // [rsp+130h] [rbp+20h] BYREF
  int v221; // [rsp+138h] [rbp+28h] BYREF
  int v222; // [rsp+13Ch] [rbp+2Ch] BYREF
  unsigned __int16 *CurrentThread; // [rsp+140h] [rbp+30h] BYREF
  void *v224; // [rsp+148h] [rbp+38h] BYREF
  int *v225; // [rsp+150h] [rbp+40h] BYREF
  _QWORD v226[2]; // [rsp+158h] [rbp+48h] BYREF
  _QWORD v227[2]; // [rsp+168h] [rbp+58h] BYREF
  __int64 v228; // [rsp+178h] [rbp+68h] BYREF
  int v229; // [rsp+180h] [rbp+70h]
  struct XDCOBJ *v230; // [rsp+188h] [rbp+78h]
  char v231[8]; // [rsp+190h] [rbp+80h] BYREF
  __int64 v232; // [rsp+198h] [rbp+88h]
  PATHOBJ v233; // [rsp+210h] [rbp+100h] BYREF
  __int64 v234; // [rsp+218h] [rbp+108h]
  PATHOBJ v235; // [rsp+290h] [rbp+180h] BYREF
  __int64 v236; // [rsp+298h] [rbp+188h]
  PATHOBJ ppo; // [rsp+310h] [rbp+200h] BYREF
  __int64 v238; // [rsp+318h] [rbp+208h]
  char v239[8]; // [rsp+390h] [rbp+280h] BYREF
  __int64 v240; // [rsp+398h] [rbp+288h]
  PATHOBJ v241; // [rsp+410h] [rbp+300h] BYREF
  __int64 v242; // [rsp+418h] [rbp+308h]
  PATHOBJ v243; // [rsp+490h] [rbp+380h] BYREF
  __int64 v244; // [rsp+498h] [rbp+388h]
  struct _RECTL rclBkGround; // [rsp+510h] [rbp+400h] BYREF
  struct _RECTL v246; // [rsp+520h] [rbp+410h] BYREF
  RECTL v247; // [rsp+530h] [rbp+420h] BYREF
  struct _CLIPOBJ v248; // [rsp+540h] [rbp+430h] BYREF
  __int64 v249; // [rsp+590h] [rbp+480h]
  int v250; // [rsp+598h] [rbp+488h]
  int v251; // [rsp+5C0h] [rbp+4B0h]
  __int64 v252; // [rsp+5D0h] [rbp+4C0h]
  struct _RECTL v253; // [rsp+5E0h] [rbp+4D0h] BYREF
  STROBJ pstro; // [rsp+5F0h] [rbp+4E0h] BYREF
  __int64 v255; // [rsp+630h] [rbp+520h]
  int v256; // [rsp+640h] [rbp+530h]
  int v257; // [rsp+644h] [rbp+534h]
  int v258; // [rsp+670h] [rbp+560h]
  _BYTE v259[100]; // [rsp+674h] [rbp+564h] BYREF
  int v260; // [rsp+6D8h] [rbp+5C8h]
  __int64 v261; // [rsp+6F8h] [rbp+5E8h]
  struct _POINTL v262; // [rsp+730h] [rbp+620h] BYREF
  LONG v263; // [rsp+738h] [rbp+628h]
  LONG v264; // [rsp+73Ch] [rbp+62Ch]
  LONG v265; // [rsp+740h] [rbp+630h]
  LONG v266; // [rsp+744h] [rbp+634h]
  int v267; // [rsp+748h] [rbp+638h]
  int v268; // [rsp+74Ch] [rbp+63Ch]
  struct _POINTL v269; // [rsp+750h] [rbp+640h] BYREF

  v11 = 0;
  v12 = a5;
  v13 = a1;
  CurrentThread = a6;
  v14 = 128;
  v224 = a10;
  v15 = 4;
  v230 = a1;
  if ( (a4 & 0x10) == 0 )
    v15 = 2;
  v201 = a3;
  v16 = *(_QWORD *)a1;
  v199[0] = v15;
  v209 = a2;
  v216 = a5;
  v17 = *(_DWORD *)(v16 + 256);
  v225 = a8;
  v215 = 0;
  if ( (v17 & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v16 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  v211 = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_5:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v19 = a4 & 0xFFFFC36F;
  LODWORD(v200) = v19;
  if ( !a5 )
  {
    v19 &= 0xFFFFFFF9;
LABEL_16:
    LODWORD(v200) = v19;
    goto LABEL_17;
  }
  if ( a5->left == a5->right || a5->top == a5->bottom )
  {
    a5->right = a2;
    a5->left = a2;
    a5->bottom = a3;
    a5->top = a3;
    if ( (v19 & 6) == 2 )
    {
      v12 = 0LL;
      v216 = 0LL;
      v19 &= ~2u;
      goto LABEL_16;
    }
  }
LABEL_17:
  v20 = *(_QWORD *)v13;
  if ( *(_QWORD *)v13 && (!v19 || v12 && (v19 & 0xFFFFFFF9) == 0) )
  {
    v21 = *(_DWORD *)(v20 + 256) & 1;
    if ( !v21 || (v19 & 4) == 0 )
    {
      rclBkGround = 0LL;
      LODWORD(v204) = 0;
      if ( v21 )
      {
        v22 = 0LL;
        v208 = 0;
        v212 = 0LL;
        v23 = 0;
        LODWORD(v206) = 0;
        LODWORD(v24) = 0;
        LODWORD(v25) = 0;
        LODWORD(v26) = 0;
        LODWORD(v27) = 0;
        LODWORD(v28) = 0;
      }
      else
      {
        v207 = *(_QWORD *)(v20 + 8LL * (*(_DWORD *)(v20 + 40) & 1) + 1424);
        v23 = v207;
        v24 = HIDWORD(v207);
        v25 = HIDWORD(v207);
        v26 = HIDWORD(v207);
        v27 = HIDWORD(v207);
        v22 = (struct _XLATEOBJ *)v207;
        LODWORD(v206) = HIDWORD(v207);
        v28 = HIDWORD(v207);
        v212 = (struct _XLATEOBJ *)v207;
        v208 = v207;
      }
      v205 = (unsigned int)(16 * v23);
      v29 = *(_QWORD *)(v20 + 80);
      v207 = (unsigned int)(16 * v24);
      v218 = *(_DWORD *)(v29 + 68);
      v219 = *(_DWORD *)(*(_QWORD *)(v20 + 80) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v20 + 80) + 352LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v217, v13, 0x204u, 0);
        LOBYTE(v19) = (_BYTE)v200;
        LODWORD(v25) = v26;
        v30 = v217;
        LODWORD(v27) = v28;
        v212 = v22;
      }
      else
      {
        v30 = (_DWORD *)(v20 + 328);
        v217 = (_DWORD *)(v20 + 328);
      }
      v31 = 0LL;
      if ( v12 )
      {
        v213[0] = v19 & 2;
        v14 = 136;
        if ( (v19 & 2) == 0 )
          v14 = 128;
        v32 = v30[8];
        v210 = v14;
        if ( (v32 & 2) != 0 )
        {
          v33 = v12->left + (_DWORD)v22 + ((v30[6] + 8) >> 4);
          v246.left = v33;
          v34 = v12->right + (_DWORD)v212 + ((v30[6] + 8) >> 4);
          v246.right = v34;
          v35 = v25 + v216->top + ((v30[7] + 8) >> 4);
          v246.top = v35;
          bottom = v27 + v216->bottom + ((v30[7] + 8) >> 4);
          v246.bottom = bottom;
        }
        else
        {
          left = v12->left;
          if ( (v32 & 1) != 0 )
          {
            v208 = 0;
            bFToL(v30, &v208, 0LL);
            v33 = (_DWORD)v22 + ((v217[6] + v208 + 8) >> 4);
            v221 = 0;
            v246.left = v33;
            bFToL(v38, &v221, v39);
            v34 = (_DWORD)v212 + ((v217[6] + v221 + 8) >> 4);
            v246.right = v34;
            v222 = 0;
            bFToL(v217, &v222, v40);
            LODWORD(v220) = 0;
            v35 = (_DWORD)v206 + ((v217[7] + v222 + 8) >> 4);
            v246.top = v35;
            bFToL(v41, &v220, v42);
            bottom = (_DWORD)v206 + (((int)v220 + 8 + v217[7]) >> 4);
            v246.bottom = bottom;
          }
          else
          {
            top = v12->top;
            v262.y = v12->bottom;
            right = v12->right;
            v264 = top;
            v266 = top;
            v262.x = left;
            v263 = left;
            v265 = right;
            EXFORMOBJ::bXform((EXFORMOBJ *)&v217, &v262, (struct _POINTFIX *)&v262, 3uLL);
            v45 = v262.x + v265 - v263;
            v46 = v262.y + v266 - v264;
            v267 = v45;
            v268 = v46;
            v47 = (v263 > v262.x) ^ (v263 <= v265);
            v48 = *(&v262.x + 2 * v47);
            v49 = *((_DWORD *)&v262 + 2 * v47 + 4);
            if ( v48 > v49 )
              v48 += 15;
            else
              v49 += 15;
            v33 = v208 + (v48 >> 4);
            v34 = v208 + (v49 >> 4);
            v246.right = v34;
            v246.left = v33;
            v50 = (v264 > v262.y) ^ (v264 <= v266);
            v51 = *(&v262.y + 2 * v50);
            v52 = *((_DWORD *)&v262 + 2 * v50 + 5);
            if ( v51 > v52 )
              v51 += 15;
            else
              v52 += 15;
            v35 = (_DWORD)v206 + (v51 >> 4);
            bottom = (_DWORD)v206 + (v52 >> 4);
            v246.bottom = bottom;
            v246.top = v35;
            if ( ((unsigned __int8)v200 & 4) != 0 )
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v239);
              if ( v240 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v239, v53, &v262, v54) )
              {
                v55 = *(_QWORD *)v13;
                v253.top = 16 * (*(_DWORD *)(*(_QWORD *)v13 + 1412LL) - (_DWORD)v206);
                v253.bottom = 16 * (*(_DWORD *)(v55 + 1420) - (_DWORD)v206);
                v229 = 0;
                RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v228, (struct EPATHOBJ *)v239, 1u, &v253);
                if ( v228 )
                {
                  v31 = v13;
                  *(_QWORD *)(*(_QWORD *)v13 + 1520LL) = v228;
                  if ( (unsigned int)DC::bTightenRao(*(DC **)v13) )
                    LODWORD(v200) = (unsigned int)v200 & 0xFFFFFFFB;
                }
                if ( v229 == 1 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v228);
              }
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v239);
              bottom = v246.bottom;
              v34 = v246.right;
              v14 = 0;
              if ( ((unsigned __int8)v200 & 4) == 0 )
                v14 = v210;
              v56 = 0;
              v35 = v246.top;
              v33 = v246.left;
              if ( ((unsigned __int8)v200 & 4) == 0 )
                v56 = a7;
              a7 = v56;
              v57 = 0;
              if ( ((unsigned __int8)v200 & 4) == 0 )
                v57 = (int)v200;
              LODWORD(v200) = v57;
            }
            else if ( v213[0] )
            {
              v262.x += v205;
              v262.y += v207;
              v263 += v205;
              v14 = v14 & 0xFFFFFFF5 | 2;
              v265 += v205;
              v264 += v207;
              v268 = v207 + v46;
              v266 += v207;
              v267 = v205 + v45;
            }
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 312LL) & 1) != 0 )
        {
          ++v33;
          ++v34;
          v246.left = v33;
          v246.right = v34;
        }
        if ( v33 > v34 )
        {
          v58 = v33;
          v33 = v34;
          v246.left = v34;
          v34 = v58;
          v246.right = v58;
        }
        if ( v35 > bottom )
        {
          v59 = v35;
          v246.top = bottom;
          v35 = bottom;
          v246.bottom = v59;
          bottom = v59;
        }
        if ( (v14 & 0xA) != 0 )
        {
          v60 = rclBkGround.left;
          v61 = rclBkGround.right;
          if ( rclBkGround.left != rclBkGround.right )
          {
            v62 = rclBkGround.top;
            v63 = rclBkGround.bottom;
            if ( rclBkGround.top != rclBkGround.bottom )
            {
              if ( v33 < rclBkGround.left )
                v60 = v33;
              rclBkGround.left = v60;
              if ( v35 < rclBkGround.top )
                v62 = v35;
              rclBkGround.top = v62;
              if ( v34 > rclBkGround.right )
                v61 = v34;
              rclBkGround.right = v61;
              if ( bottom > rclBkGround.bottom )
              {
                v63 = bottom;
                rclBkGround.bottom = bottom;
              }
LABEL_78:
              v64 = 0LL;
              v212 = 0LL;
              p_rclBkGround = 0LL;
              v220 = 0LL;
              v203 = 0;
              v202 = 0LL;
              v260 = 0;
              LODWORD(v206) = 1;
              if ( !a7 )
                goto LABEL_166;
              v66 = *(struct DC **)v13;
              v67 = 0LL;
              v165 = (*(_DWORD *)(*(_QWORD *)v13 + 36LL) & 0x4000) == 0;
              v210 = *(_DWORD *)(*(_QWORD *)v13 + 256LL) & 1;
              if ( !v165 )
              {
                v67 = (SURFACE *)*((_QWORD *)v66 + 63);
                SURFACE::bUnMap(v67, 0LL, v66);
              }
              if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v202, v13, v210, v199[0]) )
                GreAcquireSemaphore(*(_QWORD *)(v202 + 496));
              if ( v67 )
                SURFACE::Map(v67, 0LL);
              if ( !v202 )
              {
                LODWORD(v206) = 1;
                goto LABEL_165;
              }
              v215 = *(_DWORD *)(v202 + 72) & 2;
              if ( !v215 || (v68 = *(_DWORD *)(v202 + 460), LODWORD(v206) = 0, (v68 & 0x8000) != 0) )
                LODWORD(v206) = 1;
              v69 = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
              LODWORD(v204) = *(_DWORD *)(*(_QWORD *)v13 + 2144LL) | *(_DWORD *)(v69 + 152) & 0x11F;
              if ( ((unsigned __int8)v204 & 1) != 0 )
              {
                v70 = *(_DWORD *)(v69 + 8);
                if ( (v70 & 0x200) == 0 )
                {
                  v71 = v205;
                  v72 = v207;
                  *(_DWORD *)(v69 + 8) = v70 | 0x100;
                  v73 = *(DC **)v13;
                  v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 84LL) + v71;
                  v199[0] = v74;
                  v75 = *(_DWORD *)(*((_QWORD *)v73 + 10) + 88LL) + v72;
                  goto LABEL_104;
                }
                *(_DWORD *)(v69 + 8) = v70 & 0xFFFFFDFF;
                v76 = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
                *(_DWORD *)(v76 + 8) |= 0x100u;
                v77 = v217;
                v78 = *(DC **)v13;
                v79 = v217[8];
                if ( (v79 & 2) != 0 )
                {
                  v199[0] = v217[6] + 16 * *(_DWORD *)(*((_QWORD *)v78 + 10) + 76LL);
                  v199[1] = v217[7] + 16 * *(_DWORD *)(*((_QWORD *)v78 + 10) + 80LL);
                  *(_QWORD *)(*((_QWORD *)v78 + 10) + 84LL) = *(_QWORD *)v199;
                }
                else if ( (v79 & 1) != 0 )
                {
                  v201 = 0;
                  bFToL(v76, &v201, 0LL);
                  v199[0] = v77[6] + v201;
                  v209 = 0;
                  bFToL(v199[0], &v209, v80);
                  v199[1] = v77[7] + v209;
                  *(_QWORD *)(*((_QWORD *)v78 + 10) + 84LL) = *(_QWORD *)v199;
                }
                else
                {
                  EXFORMOBJ::bXform(
                    (EXFORMOBJ *)&v217,
                    (struct _POINTL *)(*((_QWORD *)v78 + 10) + 76LL),
                    (struct _POINTFIX *)v199,
                    1uLL);
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 84LL) = *(_QWORD *)v199;
                }
                goto LABEL_102;
              }
              v81 = v217;
              v82 = v217[8];
              if ( (v82 & 2) != 0 )
              {
                v74 = v205 + 16 * v209 + v217[6];
                v199[0] = v74;
                v83 = 16 * v201 + v217[7];
              }
              else
              {
                if ( (v82 & 1) == 0 )
                {
                  v199[0] = v209;
                  v199[1] = v201;
                  EXFORMOBJ::bXform((EXFORMOBJ *)&v217, (struct _POINTL *)v199, (struct _POINTFIX *)v199, 1uLL);
LABEL_102:
                  v83 = v199[1];
                  v74 = v205 + v199[0];
                  v199[0] += v205;
                  goto LABEL_103;
                }
                v213[0] = 0;
                bFToL(v69, v213, 0LL);
                v74 = v205 + v213[0] + v81[6];
                v210 = 0;
                v199[0] = v74;
                bFToL(v84, &v210, v85);
                v83 = v210 + v81[7];
              }
LABEL_103:
              p_rclBkGround = 0LL;
              v75 = v207 + v83;
LABEL_104:
              v86 = *(DC **)v13;
              v199[1] = v75;
              ESTROBJ::vInit(
                (ESTROBJ *)&pstro,
                CurrentThread,
                a7,
                v13,
                (struct RFONTOBJ *)&v202,
                (struct EXFORMOBJ *)&v217,
                v225,
                v211,
                *((_DWORD *)v86 + 537),
                *(_DWORD *)(*((_QWORD *)v86 + 10) + 160LL),
                *(_DWORD *)(*((_QWORD *)v86 + 10) + 168LL),
                *(_DWORD *)(*((_QWORD *)v86 + 10) + 172LL),
                v74,
                v75,
                (unsigned int)v204,
                0LL,
                v224,
                a11);
              if ( (v260 & 4) != 0 )
              {
                v87 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v269, &pstro.rclBkGround);
                v88 = pstro.rclBkGround.right;
                v211 = v87;
                v89 = pstro.rclBkGround.left;
                if ( (*(_DWORD *)(v202 + 12) & 0x10000000) != 0 )
                {
                  v89 = pstro.rclBkGround.left - 1;
                  v88 = pstro.rclBkGround.right + 1;
                  --pstro.rclBkGround.left;
                  ++pstro.rclBkGround.right;
                }
                if ( (v260 & 0x1400) != 0 )
                {
                  ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v269, v87);
                  v88 = pstro.rclBkGround.right;
                  v89 = pstro.rclBkGround.left;
                }
                v90 = rclBkGround.left;
                v91 = rclBkGround.right;
                if ( rclBkGround.left == rclBkGround.right
                  || (v92 = rclBkGround.top, v63 = rclBkGround.bottom, rclBkGround.top == rclBkGround.bottom) )
                {
                  rclBkGround = pstro.rclBkGround;
                  v63 = pstro.rclBkGround.bottom;
                }
                else
                {
                  if ( v89 < rclBkGround.left )
                    v90 = v89;
                  rclBkGround.left = v90;
                  if ( pstro.rclBkGround.top < rclBkGround.top )
                    v92 = pstro.rclBkGround.top;
                  rclBkGround.top = v92;
                  if ( v88 > rclBkGround.right )
                    v91 = v88;
                  rclBkGround.right = v91;
                  if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
                  {
                    v63 = pstro.rclBkGround.bottom;
                    rclBkGround.bottom = pstro.rclBkGround.bottom;
                  }
                }
                if ( a9 == 2 )
                {
                  if ( v211 )
                  {
                    v14 |= 0x10u;
                  }
                  else
                  {
                    p_rclBkGround = &pstro.rclBkGround;
                    v212 = (struct _XLATEOBJ *)&pstro.rclBkGround;
                  }
                }
                if ( v89 >= v88 || (v93 = 0, pstro.rclBkGround.top >= pstro.rclBkGround.bottom) )
                  v93 = 1;
                v94 = v246.bottom;
                if ( (v14 & 8) == 0
                  || v246.left > v89
                  || v246.right < v88
                  || v246.top > pstro.rclBkGround.top
                  || v246.bottom < pstro.rclBkGround.bottom
                  || v93 )
                {
                  if ( !p_rclBkGround )
                  {
                    if ( v93 )
                    {
LABEL_140:
                      if ( ((unsigned __int8)v204 & 0xA0) != 0 )
                      {
                        if ( v258 )
                        {
                          v64 = (ERECTL *)v259;
                          v220 = (struct _RECTL *)v259;
                          v95 = (ERECTL *)v259;
                          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v259) )
                          {
                            do
                            {
                              ERECTL::operator+=(&rclBkGround, v95);
                              v95 = (ERECTL *)((char *)v95 + 16);
                            }
                            while ( !(unsigned int)ERECTL::bEmpty(v95) );
                            v63 = rclBkGround.bottom;
                            v94 = v246.bottom;
                          }
                        }
                        else
                        {
                          v220 = 0LL;
                          v14 |= 4u;
                        }
                      }
                      if ( ((unsigned __int8)v200 & 4) != 0 )
                      {
                        if ( v246.left > rclBkGround.left
                          || v246.right < rclBkGround.right
                          || v246.top > rclBkGround.top
                          || v94 < v63 )
                        {
                          v96 = rclBkGround.left;
                          v97 = rclBkGround.top;
                          if ( v246.left > rclBkGround.left )
                            v96 = v246.left;
                          rclBkGround.left = v96;
                          if ( v246.top > rclBkGround.top )
                            v97 = v246.top;
                          rclBkGround.top = v97;
                          v98 = rclBkGround.right;
                          if ( v246.right < rclBkGround.right )
                            v98 = v246.right;
                          rclBkGround.right = v98;
                          if ( v94 < v63 )
                            v63 = v94;
                          rclBkGround.bottom = v63;
                          if ( v98 >= v96 )
                          {
                            if ( v63 < rclBkGround.top )
                              rclBkGround.top = v63;
                          }
                          else
                          {
                            rclBkGround.left = v98;
                          }
                        }
                        else
                        {
                          LODWORD(v200) = -5;
                        }
                      }
LABEL_166:
                      if ( ((unsigned __int8)v204 & 1) != 0 )
                      {
                        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 84LL) += v256;
                        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 80LL) + 88LL) += v257;
                        v63 = rclBkGround.bottom;
                      }
                      v99 = *(DC **)v13;
                      if ( (*(_DWORD *)(*(_QWORD *)v13 + 256LL) & 1) != 0 )
                      {
                        v100 = 0;
                        if ( ((unsigned __int8)v200 & 4) == 0 )
                          v100 = v14;
                        v14 = v100;
                        v101 = v100;
                        XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v231, v13);
                        if ( !v232 )
                          goto LABEL_197;
                        if ( (v101 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v231, &v246) )
                          v14 = 0;
                        if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v231, v102, &v262, v104) )
                          v14 = 0;
                        if ( (v14 & 0x10) != 0
                          && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v231, v102, &v269, v104) )
                        {
                          v14 = 0;
                        }
                        if ( (v14 & 1) != 0
                          && (!p_rclBkGround || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v231, p_rclBkGround)) )
                        {
                          if ( (v260 & 0x1400) != 0 )
                            v105 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)v231, v103);
                          else
                            v105 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v231);
                          if ( !v105 )
                          {
LABEL_193:
                            v14 = 0;
                            goto LABEL_194;
                          }
                          if ( v64 && !(unsigned int)ERECTL::bEmpty(v64) )
                          {
                            while ( (unsigned int)bAddRectToPath((struct EPATHOBJ *)v231, (struct _RECTL *)v64) )
                            {
                              v64 = (ERECTL *)((char *)v64 + 16);
                              if ( (unsigned int)ERECTL::bEmpty(v64) )
                                goto LABEL_194;
                            }
                            goto LABEL_193;
                          }
                        }
LABEL_194:
                        if ( (v14 & 4) != 0
                          && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v231) )
                        {
                          v14 = 0;
                        }
LABEL_197:
                        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v231);
LABEL_415:
                        if ( (v260 & 0x801) != 0 )
                        {
                          if ( (v260 & 1) != 0 )
                            FreeTmpBuffer(v255);
                          if ( (v260 & 0x800) != 0 )
                            Win32FreePool(v261);
                        }
                        if ( v202 )
                        {
                          if ( (*(_DWORD *)(v202 + 696) & 0x81) != 0 && (int)IsMulDestroyBrushInternalSupported() >= 0 )
                            RFONTOBJ_dtorHelperWrap(&v202);
                          v191 = *(_QWORD *)(v202 + 608);
                          if ( v191 )
                          {
                            Win32FreePool(v191);
                            *(_QWORD *)(v202 + 616) = 0LL;
                            *(_QWORD *)(v202 + 608) = 0LL;
                          }
                          EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v202 + 496));
                          GreReleaseSemaphoreInternal(*(_QWORD *)(v202 + 496));
                        }
                        if ( v31 )
                        {
                          v224 = *(void **)(*(_QWORD *)v31 + 1520LL);
                          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v224);
                          v192 = *(_QWORD *)v31;
                          *(_DWORD *)(v192 + 36) |= 0x10u;
                          *(_QWORD *)(v192 + 1520) = 0LL;
                        }
                        goto LABEL_430;
                      }
                      if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == v63 )
                        goto LABEL_415;
                      v106 = *((_DWORD *)v99 + 9);
                      if ( (v106 & 0xE0) != 0 )
                      {
                        v107 = *((_DWORD *)v99 + 10) & 1;
                        *(struct _RECTL *)v214 = rclBkGround;
                        v108 = *((_DWORD *)v99 + 2 * v107 + 356);
                        v109 = (unsigned int)(rclBkGround.left - v108);
                        LODWORD(v214[1]) = rclBkGround.right - v108;
                        v110 = *((_DWORD *)v99 + 2 * v107 + 357);
                        HIDWORD(v214[0]) = rclBkGround.top - v110;
                        HIDWORD(v214[1]) = rclBkGround.bottom - v110;
                        LODWORD(v214[0]) = v109;
                        if ( (v106 & 0x20) != 0 )
                        {
                          ERECTL::operator|=((char *)v99 + 1472, v214, v109);
                          v99 = *(DC **)v13;
                        }
                        if ( (*((_DWORD *)v99 + 9) & 0x80u) != 0 )
                          ERECTL::operator|=((char *)v99 + 1504, v214, v109);
                      }
                      if ( v215 || (v111 = 0, ((unsigned __int8)v200 & 4) != 0) )
                        v111 = 1;
                      v112 = *(DC **)v13;
                      v113 = *(_QWORD *)(*(_QWORD *)v13 + 1560LL);
                      if ( !v113
                        || (*((_DWORD *)v112 + 10) & 2) == 0
                        || (v165 = (unsigned int)DC::bDpiScaledSurface(*(DC **)v13) == 0, v114 = v113, v165) )
                      {
                        v114 = *((_QWORD *)v112 + 193);
                      }
                      if ( v114 )
                      {
                        if ( !v113 || (*((_DWORD *)v112 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v112) )
                          v115 = (struct REGION *)*((_QWORD *)v112 + 193);
                      }
                      else
                      {
                        v115 = DC::prgnVisSnap(v112);
                      }
                      v249 = 0LL;
                      v250 = 0;
                      v251 = 1;
                      v252 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)&v248, v115, (struct ERECTL *)&rclBkGround, v111);
                      rclBounds = v248.rclBounds;
                      v117 = _mm_cvtsi128_si32((__m128i)v248.rclBounds);
                      v118 = _mm_srli_si128((__m128i)v248.rclBounds, 8);
                      rclBkGround = v248.rclBounds;
                      v248.rclBounds.left = v117;
                      if ( v117 == _mm_cvtsi128_si32(v118)
                        || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                         _mm_srli_si128(
                                                                                           (__m128i)rclBounds,
                                                                                           12)) )
                      {
                        goto LABEL_415;
                      }
                      v119 = *(DC **)v13;
                      v120 = *(DC **)v13;
                      v121 = *(_DWORD *)(*(_QWORD *)v13 + 36LL);
                      if ( (v121 & 0xE0) != 0 )
                      {
                        v247 = rclBounds;
                        v122 = *((_DWORD *)v119 + 10) & 1;
                        v123 = v117 - *((_DWORD *)v119 + 2 * v122 + 356);
                        v247.left = v123;
                        v124 = rclBounds.right - *((_DWORD *)v119 + 2 * v122 + 356);
                        v247.right = v124;
                        v125 = rclBounds.top - *((_DWORD *)v119 + 2 * v122 + 357);
                        v247.top = v125;
                        v247.bottom = rclBounds.bottom - *((_DWORD *)v119 + 2 * v122 + 357);
                        if ( (v121 & 0x40) != 0 )
                        {
                          v126 = *((_DWORD *)v119 + 372);
                          if ( v126 == *((_DWORD *)v119 + 374)
                            || (v127 = *((_DWORD *)v119 + 373), v127 == *((_DWORD *)v119 + 375)) )
                          {
                            *((RECTL *)v119 + 93) = v247;
                          }
                          else
                          {
                            if ( v123 < v126 )
                            {
                              *((_DWORD *)v119 + 372) = v123;
                              v124 = v247.right;
                              v125 = v247.top;
                            }
                            if ( v125 < v127 )
                            {
                              *((_DWORD *)v119 + 373) = v125;
                              v124 = v247.right;
                            }
                            if ( v124 > *((_DWORD *)v119 + 374) )
                              *((_DWORD *)v119 + 374) = v124;
                            if ( v247.bottom > *((_DWORD *)v119 + 375) )
                              *((_DWORD *)v119 + 375) = v247.bottom;
                          }
                          v120 = *(DC **)v13;
                          v216 = *(struct tagRECT **)(*(_QWORD *)v13 + 1576LL);
                          if ( v216 )
                          {
                            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v227);
                            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v227);
                            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v226);
                            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v226);
                            if ( v227[0] )
                            {
                              if ( v226[0] )
                              {
                                RGNOBJ::vSet((RGNOBJ *)v226, &v247);
                                if ( RGNOBJ::bMerge(
                                       (RGNOBJ *)v227,
                                       (struct RGNOBJ *)&v216,
                                       (struct RGNOBJ *)v226,
                                       BYTE2(gafjRgnOp)) )
                                {
                                  RGNOBJ::vSwap((RGNOBJ *)&v216, (struct RGNOBJ *)v227);
                                  *(_QWORD *)(*(_QWORD *)v13 + 1576LL) = v216;
                                }
                              }
                            }
                            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v226);
                            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v227);
                            v120 = *(DC **)v13;
                          }
                        }
                      }
                      v128 = *((_QWORD *)v120 + 63);
                      if ( !v128
                        || ((*(_DWORD *)(v128 + 116) & 8) != 0 || *(_QWORD *)(v128 + 224))
                        && (*(_WORD *)(v128 + 102) & 0x200) != 0 )
                      {
                        goto LABEL_415;
                      }
                      v129 = *(_DWORD *)(v128 + 112);
                      if ( (v129 & 0x800) != 0 )
                      {
                        v130 = UserSurfaceAccessCheck(*(_QWORD *)(v128 + 648));
                      }
                      else
                      {
                        if ( (v129 & 0x10000000) == 0 )
                          goto LABEL_248;
                        v130 = UserScreenAccessCheck();
                      }
                      if ( !v130 )
                        goto LABEL_415;
LABEL_248:
                      v131 = *(DC **)v13;
                      v132 = 0;
                      v133 = v131;
                      v134 = *(struct _CLIPOBJ **)(v128 + 128);
                      v205 = *(_QWORD *)(v128 + 48);
                      iUniq = *((unsigned int *)v131 + 18);
                      v136 = (char *)v131 + 1864;
                      v137 = *((_QWORD *)v131 + 12);
                      v204 = (struct _BRUSHOBJ *)((char *)v131 + 1864);
                      v200 = (struct _BRUSHOBJ *)((char *)v131 + 2000);
                      v201 = iUniq;
                      if ( (iUniq & 0x10000000) != 0 )
                      {
                        v132 = (int)v206;
                        *(_DWORD *)(*((_QWORD *)v131 + 10) + 8LL) |= 4u;
                        --*((_DWORD *)v131 + 497);
                        v131 = *(DC **)v13;
                        v133 = *(DC **)v13;
                      }
                      v138 = *((_QWORD *)v131 + 10);
                      if ( ((*((_BYTE *)v131 + 324) | *(_BYTE *)(v138 + 8)) & 0xC) != 0 )
                      {
                        if ( ((*((_BYTE *)v131 + 324) | *(_BYTE *)(v138 + 8)) & 4) != 0 )
                        {
                          EBRUSHOBJ::vInitBrush(v136, v131, gpbrText, v137, v134, v128, v132);
                          v131 = *(DC **)v13;
                        }
                        if ( ((*((_BYTE *)v131 + 324) | *(_BYTE *)(*((_QWORD *)v131 + 10) + 8LL)) & 8) != 0 )
                        {
                          v193 = v134;
                          v139 = v200;
                          EBRUSHOBJ::vInitBrush(v200, v131, gpbrBackground, v137, v193, v128, (v201 >> 15) & 1);
                          v131 = *(DC **)v13;
                        }
                        else
                        {
                          v139 = v200;
                        }
                        *(_DWORD *)(*((_QWORD *)v131 + 10) + 8LL) &= 0xFFFFFFF3;
                        *(_DWORD *)(*(_QWORD *)v13 + 324LL) &= 0xFFFFFFF3;
                        v133 = *(DC **)v13;
                      }
                      else
                      {
                        v139 = v200;
                      }
                      v140 = (struct _POINTL *)((char *)v133 + 1584);
                      if ( (v14 & 0x1A) != 0 )
                      {
                        if ( (v14 & 8) == 0
                          || (v141 = v246.left, v142 = v246.right, v246.left == v246.right)
                          || (v143 = v246.top, iUniq = (unsigned int)v246.bottom, v246.top == v246.bottom) )
                        {
                          v149 = rclBkGround.bottom;
                          LODWORD(v147) = rclBkGround.right;
                          v148 = (unsigned int)rclBkGround.top;
                          flXlate = (unsigned int)rclBkGround.left;
                        }
                        else
                        {
                          si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                          flXlate = (unsigned int)_mm_cvtsi128_si32(si128);
                          v146 = _mm_srli_si128(si128, 8);
                          rclBkGround.left = flXlate;
                          if ( (int)flXlate > v246.left )
                            v141 = flXlate;
                          v211 = v141;
                          v248.rclBounds.left = v141;
                          v147 = (struct _SURFOBJ *)(unsigned int)_mm_cvtsi128_si32(v146);
                          v148 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
                          v149 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
                          if ( (int)v147 < v246.right )
                            v142 = (int)v147;
                          rclBkGround.right = (int)v147;
                          v248.rclBounds.right = v142;
                          rclBkGround.top = v148;
                          if ( (int)v148 > v246.top )
                            v143 = v148;
                          rclBkGround.bottom = v149;
                          v248.rclBounds.top = v143;
                          if ( v149 < v246.bottom )
                            iUniq = (unsigned int)v149;
                          v248.rclBounds.bottom = iUniq;
                          if ( v211 < v142 && v143 < (int)iUniq )
                          {
                            ++*(_DWORD *)(v128 + 92);
                            TextOutBitBlt(
                              (struct SURFACE *)v128,
                              (struct RFONTOBJ *)&v202,
                              v147,
                              (struct _SURFOBJ *)v148,
                              &v248,
                              v194,
                              &v248.rclBounds,
                              v195,
                              v196,
                              v139,
                              v140,
                              v198);
                            v149 = rclBkGround.bottom;
                            LODWORD(v147) = rclBkGround.right;
                            v148 = (unsigned int)rclBkGround.top;
                            flXlate = (unsigned int)rclBkGround.left;
                          }
                          v248.rclBounds = rclBkGround;
                        }
                        if ( (v14 & 0x12) == 0 )
                        {
LABEL_288:
                          if ( (v14 & 1) == 0 )
                          {
LABEL_409:
                            if ( (v14 & 4) != 0 )
                            {
                              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v243);
                              if ( !v244
                                || !(unsigned int)ESTROBJ::bExtraRectsToPath(
                                                    (ESTROBJ *)&pstro,
                                                    (struct EPATHOBJ *)&v243)
                                || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                    &v243,
                                                    v13,
                                                    (struct RFONTOBJ *)&v202,
                                                    (struct PDEVOBJ *)&v205,
                                                    (struct SURFACE *)v128,
                                                    &v248,
                                                    v204,
                                                    v140,
                                                    (unsigned int)v196,
                                                    v197) )
                              {
                                v14 = 0;
                              }
                              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v243);
                            }
                            goto LABEL_415;
                          }
                          v206 = 0LL;
                          if ( v215 )
                          {
                            iUniq = 32LL;
                            v201 = -257;
                            v152 = 64;
                            if ( (*(_DWORD *)(v202 + 460) & 0x8000) == 0 )
                              v152 = 32;
                            v14 |= v152;
                          }
                          if ( v212 && (v201 & 0x100) == 0 )
                          {
                            iUniq = v212->iUniq;
                            v153 = *(_DWORD *)&v212->iSrcType;
                            if ( (int)flXlate > (int)iUniq )
                              iUniq = (unsigned int)flXlate;
                            flXlate = v212->flXlate;
                            v248.rclBounds.left = iUniq;
                            if ( (int)v147 < v153 )
                              v153 = (int)v147;
                            cEntries = v212->cEntries;
                            v248.rclBounds.right = v153;
                            if ( (int)v148 > (int)flXlate )
                              flXlate = (unsigned int)v148;
                            v248.rclBounds.top = flXlate;
                            if ( v149 < (int)cEntries )
                              cEntries = (unsigned int)v149;
                            v248.rclBounds.bottom = cEntries;
                            if ( (int)iUniq < v153 && (int)flXlate < (int)cEntries )
                            {
                              ++*(_DWORD *)(v128 + 92);
                              TextOutBitBlt(
                                (struct SURFACE *)v128,
                                (struct RFONTOBJ *)&v202,
                                (struct _SURFOBJ *)cEntries,
                                (struct _SURFOBJ *)v148,
                                &v248,
                                v194,
                                &v248.rclBounds,
                                v195,
                                v196,
                                v139,
                                v140,
                                v198);
                            }
                            v248.rclBounds = rclBkGround;
                            v212 = 0LL;
                          }
                          v155 = v220;
                          if ( v220 && *(_DWORD *)(v205 + 2132) != 4 )
                          {
                            v206 = (ERECTL *)v220;
                            v155 = 0LL;
                          }
                          if ( (v14 & 0x20) != 0 )
                          {
                            if ( (v260 & 0x1400) != 0 )
                            {
                              if ( !(unsigned int)bProxyDrvTextOut(
                                                    v13,
                                                    (struct SURFACE *)v128,
                                                    (struct ESTROBJ *)&pstro,
                                                    &v248,
                                                    0LL,
                                                    0LL,
                                                    v204,
                                                    v200,
                                                    v140,
                                                    (struct RFONTOBJ *)&v202,
                                                    (struct PDEVOBJ *)&v205,
                                                    *(_DWORD *)(*(_QWORD *)v13 + 72LL),
                                                    &rclBkGround) )
                                v14 = 0;
                            }
                            else
                            {
                              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v235);
                              if ( !v236
                                || ((v260 & 0x1400) == 0
                                  ? (v157 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v235))
                                  : (v157 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v235, v156)),
                                    !v157
                                 || !(unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                                     &v235,
                                                     v13,
                                                     (struct RFONTOBJ *)&v202,
                                                     (struct PDEVOBJ *)&v205,
                                                     (struct SURFACE *)v128,
                                                     &v248,
                                                     v204,
                                                     v140,
                                                     (unsigned int)v196)) )
                              {
                                v14 = 0;
                              }
                              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v235);
                            }
LABEL_392:
                            v178 = v206;
                            if ( v206 )
                            {
                              v179 = v248.rclBounds;
                              ++*(_DWORD *)(v128 + 92);
                              *(RECTL *)v214 = v179;
                              if ( !(unsigned int)ERECTL::bEmpty(v178) )
                              {
                                v181 = (struct _SURFOBJ *)HIDWORD(v214[1]);
                                v182 = (LONG *)(v180 + 4);
                                v183 = (LONG)v214[1];
                                v184 = (struct _SURFOBJ *)HIDWORD(v214[0]);
                                v185 = (LONG)v214[0];
                                v186 = v204;
                                do
                                {
                                  v187 = *(v182 - 1);
                                  if ( v185 > v187 )
                                    v187 = v185;
                                  v188 = v182[1];
                                  v248.rclBounds.left = v187;
                                  if ( v183 < v188 )
                                    v188 = v183;
                                  v248.rclBounds.right = v188;
                                  if ( v187 < v188 )
                                  {
                                    v189 = *v182;
                                    v190 = v182[2];
                                    if ( (int)v184 > *v182 )
                                      v189 = (int)v184;
                                    v248.rclBounds.top = v189;
                                    if ( (int)v181 < v190 )
                                      v190 = (int)v181;
                                    v248.rclBounds.bottom = v190;
                                    if ( v189 < v190 )
                                      TextOutBitBlt(
                                        (struct SURFACE *)v128,
                                        (struct RFONTOBJ *)&v202,
                                        v181,
                                        v184,
                                        &v248,
                                        v194,
                                        &v248.rclBounds,
                                        v195,
                                        v196,
                                        v186,
                                        v140,
                                        v198);
                                  }
                                  v182 += 4;
                                  v165 = (unsigned int)ERECTL::bEmpty((ERECTL *)(v182 - 1)) == 0;
                                  v185 = (LONG)v214[0];
                                }
                                while ( v165 );
                                v13 = v230;
                              }
                              v248.rclBounds = v179;
                            }
                            goto LABEL_409;
                          }
                          CurrentThread = (unsigned __int16 *)KeGetCurrentThread();
                          if ( !(unsigned int)IsThreadCrossSessionAttached(iUniq, flXlate)
                            && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
                            && (v160 = *ThreadWin32Thread) != 0 )
                          {
                            v161 = *(_QWORD *)(v160 + 304);
                          }
                          else
                          {
                            v161 = *(_QWORD *)(v128 + 104);
                          }
                          if ( v161 )
                            SURFACE::pdcoAA((SURFACE *)v128, 0LL);
                          if ( (*(_DWORD *)(v128 + 112) & 8) != 0 )
                            v162 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v128 + 48) + 2864LL);
                          else
                            v162 = EngTextOut;
                          v207 = (unsigned __int64)v162;
                          if ( (char *)v162 == (char *)SpTextOut || (char *)v162 == (char *)BmpDevTextOut )
                          {
                            if ( (*(_DWORD *)(v202 + 12) & 0x10010000) != 0 )
                            {
                              *(_QWORD *)(v128 + 104) = v13;
                              v166 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v158);
                              if ( v166 )
                                *(_QWORD *)(v166 + 304) = v13;
                            }
                          }
                          else
                          {
                            v163 = *(_DWORD *)(v202 + 12);
                            if ( (v163 & 0x10000) != 0 )
                            {
                              v164 = *(DC **)v13;
                              v165 = (v163 & 0x10000000) != 0
                                   ? (*((_DWORD *)v164 + 19) & 0x4000) == 0
                                   : (*((_DWORD *)v164 + 18) & 0x1000000) == 0;
                              if ( v165 )
                              {
                                if ( v162 != EngTextOut )
                                  SURFACE::pdcoAA((SURFACE *)v128, v13);
                                v207 = (unsigned __int64)SpTextOut;
                              }
                            }
                          }
                          if ( (v14 & 0x40) != 0 )
                          {
                            if ( (v260 & 0x1400) == 0 )
                            {
                              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v233);
                              if ( !v234
                                || ((v260 & 0x1400) == 0
                                  ? (v171 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v233))
                                  : (v171 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v233, v170)),
                                    !v171
                                 || v233.cCurves > 1
                                 && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                     &v233,
                                                     v13,
                                                     (struct RFONTOBJ *)&v202,
                                                     (struct PDEVOBJ *)&v205,
                                                     (struct SURFACE *)v128,
                                                     &v248,
                                                     v204,
                                                     v140,
                                                     (unsigned int)v196,
                                                     v197)) )
                              {
                                v14 = 0;
                              }
                              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v233);
                              goto LABEL_388;
                            }
                            v167 = bProxyDrvTextOut(
                                     v13,
                                     (struct SURFACE *)v128,
                                     (struct ESTROBJ *)&pstro,
                                     &v248,
                                     0LL,
                                     0LL,
                                     v204,
                                     v200,
                                     v140,
                                     (struct RFONTOBJ *)&v202,
                                     (struct PDEVOBJ *)&v205,
                                     *(_DWORD *)(*(_QWORD *)v13 + 72LL),
                                     &rclBkGround);
                            goto LABEL_369;
                          }
                          ++*(_DWORD *)(v128 + 92);
                          if ( (v14 & 4) == 0 )
                          {
                            if ( (v260 & 0x1400) == 0 )
                            {
                              if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 48LL) + 40LL) & 0x8080) == 0x80
                                && !*(_DWORD *)(v202 + 76) )
                              {
                                CurrentThread = (unsigned __int16 *)ghsemPrintKView;
                                GreAcquireSemaphore(ghsemPrintKView);
                                for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                                {
                                  if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v202 + 112) + 80LL) )
                                    ++*(_DWORD *)(i + 12);
                                }
                                SEMOBJ::vUnlock((SEMOBJ *)&CurrentThread);
                              }
                              v197 = 3341;
                              v196 = v140;
                              v195 = (struct _POINTL *)v200;
                              v194 = v212;
                              if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v207)(
                                      v128 + 24,
                                      &pstro,
                                      v202,
                                      &v248,
                                      v155) )
                                v14 = 0;
                              v169 = *(_QWORD *)(*(_QWORD *)v13 + 48LL);
                              if ( (*(_DWORD *)(v169 + 40) & 0x8080) == 0x80 && !*(_DWORD *)(v202 + 76) )
                              {
                                v225 = (int *)ghsemPrintKView;
                                GreAcquireSemaphore(ghsemPrintKView);
                                for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                                {
                                  if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v202 + 112) + 80LL) )
                                  {
                                    v174 = *(_DWORD *)(j + 12);
                                    if ( v174 )
                                      *(_DWORD *)(j + 12) = v174 - 1;
                                  }
                                }
                                SEMOBJ::vUnlock((SEMOBJ *)&v225);
                              }
                              goto LABEL_388;
                            }
                            v167 = bProxyDrvTextOut(
                                     v13,
                                     (struct SURFACE *)v128,
                                     (struct ESTROBJ *)&pstro,
                                     &v248,
                                     v155,
                                     (struct _RECTL *)v212,
                                     v204,
                                     v200,
                                     v140,
                                     (struct RFONTOBJ *)&v202,
                                     (struct PDEVOBJ *)&v205,
                                     0,
                                     &rclBkGround);
LABEL_369:
                            if ( !v167 )
                              v14 = 0;
                            goto LABEL_388;
                          }
                          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v241);
                          if ( !v242
                            || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v241) )
                          {
                            goto LABEL_365;
                          }
                          if ( (v260 & 0x1400) != 0 )
                          {
                            if ( !(unsigned int)bProxyDrvTextOut(
                                                  v13,
                                                  (struct SURFACE *)v128,
                                                  (struct ESTROBJ *)&pstro,
                                                  &v248,
                                                  v155,
                                                  (struct _RECTL *)v212,
                                                  v204,
                                                  v200,
                                                  v140,
                                                  (struct RFONTOBJ *)&v202,
                                                  0LL,
                                                  0,
                                                  &rclBkGround) )
                              goto LABEL_365;
                          }
                          else
                          {
                            v197 = 3341;
                            v196 = v140;
                            v195 = (struct _POINTL *)v200;
                            v194 = v212;
                            if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v207)(
                                    v128 + 24,
                                    &pstro,
                                    v202,
                                    &v248,
                                    v155) )
                              goto LABEL_365;
                          }
                          if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                               &v241,
                                               v13,
                                               (struct RFONTOBJ *)&v202,
                                               (struct PDEVOBJ *)&v205,
                                               (struct SURFACE *)v128,
                                               &v248,
                                               v204,
                                               v140,
                                               (unsigned int)v196,
                                               v197) )
                          {
LABEL_366:
                            v14 &= ~4u;
                            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v241);
LABEL_388:
                            *(_QWORD *)(v128 + 104) = 0LL;
                            v175 = KeGetCurrentThread();
                            if ( !(unsigned int)IsThreadCrossSessionAttached(v169, v168) )
                            {
                              v176 = (__int64 *)PsGetThreadWin32Thread(v175);
                              if ( v176 )
                              {
                                v177 = *v176;
                                if ( v177 )
                                  *(_QWORD *)(v177 + 304) = 0LL;
                              }
                            }
                            goto LABEL_392;
                          }
LABEL_365:
                          v14 = 0;
                          goto LABEL_366;
                        }
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                        if ( v238 )
                        {
                          if ( (v14 & 2) != 0
                            && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v150, &v262, v151) )
                          {
                            v14 = 0;
                          }
                          if ( (v14 & 0x10) != 0
                            && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v150, &v269, v151) )
                          {
                            v14 = 0;
                          }
                          if ( (v14 & 0x12) != 0
                            && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                &ppo,
                                                v13,
                                                (struct RFONTOBJ *)&v202,
                                                (struct PDEVOBJ *)&v205,
                                                (struct SURFACE *)v128,
                                                &v248,
                                                v139,
                                                v140,
                                                (unsigned int)v196,
                                                v197) )
                          {
                            v14 = 0;
                          }
                        }
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                      }
                      flXlate = (unsigned int)rclBkGround.left;
                      v148 = (unsigned int)rclBkGround.top;
                      LODWORD(v147) = rclBkGround.right;
                      v149 = rclBkGround.bottom;
                      goto LABEL_288;
                    }
LABEL_139:
                    v14 |= 1u;
                    goto LABEL_140;
                  }
                }
                else
                {
                  p_rclBkGround = &v246;
                  v14 &= ~8u;
                  v212 = (struct _XLATEOBJ *)&v246;
                }
                if ( p_rclBkGround->left >= p_rclBkGround->right || p_rclBkGround->top >= p_rclBkGround->bottom )
                  goto LABEL_140;
                goto LABEL_139;
              }
LABEL_165:
              v63 = rclBkGround.bottom;
              v14 = 0;
              goto LABEL_166;
            }
          }
          rclBkGround = v246;
        }
      }
      v63 = rclBkGround.bottom;
      goto LABEL_78;
    }
  }
  v14 = 0;
LABEL_430:
  LOBYTE(v11) = v14 != 0;
  return v11;
}
