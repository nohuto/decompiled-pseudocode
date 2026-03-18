/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0065250
 * Callers:
 *     GrePolyTextOutW @ 0x1C003297C (GrePolyTextOutW.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C005C26C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0064E30 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GreExtTextOutWInternal @ 0x1C007F108 (GreExtTextOutWInternal.c)
 * Callees:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0007BE4 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00080E0 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C005A87C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005D7B4 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0068B4C (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0068D50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0073078 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C0105A68 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0106AB4 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C010FD94 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0123680 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0149454 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0149490 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0283454 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C02835B4 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02B4614 (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C02B468C (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1C02B4848 (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B6230 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B6624 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B6848 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
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
  unsigned int v11; // r14d
  struct tagRECT *v12; // r13
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // esi
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
  _DWORD *v28; // rax
  __int64 v29; // rcx
  LONG v30; // ebx
  LONG v31; // edi
  int v32; // r15d
  int bottom; // edx
  LONG left; // edx
  _DWORD *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  int v39; // r15d
  __int64 v40; // rcx
  __int64 v41; // r8
  LONG top; // ecx
  LONG right; // eax
  int v44; // r9d
  int v45; // r10d
  unsigned __int64 v46; // rcx
  int v47; // ebx
  int v48; // edi
  unsigned __int64 v49; // rcx
  int v50; // r15d
  int v51; // edx
  unsigned int v52; // r13d
  struct EXFORMOBJ *v53; // rdx
  int v54; // r9d
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // eax
  unsigned int v58; // eax
  LONG v59; // eax
  LONG v60; // eax
  LONG v61; // ecx
  LONG v62; // r8d
  LONG v63; // r9d
  ERECTL *v64; // r13
  RECTL *p_rclBkGround; // r15
  __int64 v66; // r8
  __int64 v67; // rcx
  int v68; // eax
  int v69; // r8d
  __int64 v70; // rdx
  int v71; // ebx
  int v72; // r8d
  __int64 v73; // rcx
  _DWORD *v74; // r15
  __int64 v75; // rbx
  int v76; // eax
  __int64 v77; // r8
  _DWORD *v78; // r15
  int v79; // eax
  int v80; // r8d
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rdx
  int v84; // eax
  int v85; // edx
  int v86; // ecx
  LONG v87; // r8d
  LONG v88; // r9d
  LONG v89; // r10d
  int v90; // eax
  LONG v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // r8
  unsigned int v95; // eax
  char v96; // bl
  struct EXFORMOBJ *v97; // rdx
  struct XDCOBJ *v98; // r8
  int v99; // r9d
  int v100; // eax
  int v101; // r9d
  __int64 v102; // rcx
  int v103; // eax
  int v104; // edx
  int v105; // eax
  __int64 v106; // rcx
  int v107; // r10d
  __int64 v108; // rdx
  __int64 v109; // rax
  struct REGION *v110; // rdx
  __int64 v111; // rdx
  RECTL rclBounds; // xmm2
  LONG v113; // r8d
  __m128i v114; // xmm0
  __int64 v115; // rcx
  __int64 v116; // r15
  int v117; // r10d
  __int64 v118; // rax
  int v119; // r8d
  int v120; // r9d
  int v121; // r10d
  int v122; // eax
  __int64 v123; // r15
  int v124; // eax
  int v125; // eax
  __int64 v126; // r10
  int v127; // r9d
  struct _POINTL *v128; // r8
  struct _CLIPOBJ *v129; // rbx
  __int64 iUniq; // rcx
  __int64 v131; // r11
  __int64 v132; // rdi
  __int64 v133; // rax
  struct _BRUSHOBJ *v134; // rbx
  struct _POINTL *v135; // rdi
  __m128i si128; // xmm1
  int v137; // eax
  int v138; // r11d
  int v139; // ebx
  __int64 flXlate; // rdx
  unsigned __int64 cEntries; // r8
  unsigned __int64 v142; // r9
  int v143; // r10d
  struct EXFORMOBJ *v144; // rdx
  int v145; // r9d
  int v146; // eax
  LONG v147; // eax
  struct _BRUSHOBJ *v148; // r13
  struct XDCOBJ *v149; // r8
  int v150; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  BOOL (__stdcall *v158)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rbx
  int v159; // ecx
  __int64 v160; // rax
  bool v161; // zf
  __int64 *v162; // rax
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  struct XDCOBJ *v168; // r8
  int v169; // eax
  int v170; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v173; // eax
  struct _KTHREAD *v174; // rbx
  __int64 *v175; // rax
  __int64 v176; // rax
  ERECTL *v177; // rcx
  RECTL v178; // xmm6
  __int64 v179; // rcx
  struct _SURFOBJ *v180; // r8
  LONG *v181; // rbx
  LONG v182; // edx
  struct _SURFOBJ *v183; // r9
  LONG v184; // eax
  LONG v185; // ecx
  LONG v186; // eax
  LONG v187; // ecx
  LONG v188; // eax
  __int64 v189; // rcx
  struct _CLIPOBJ *v190; // [rsp+20h] [rbp-F0h]
  struct _XLATEOBJ *v191; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v192; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v193; // [rsp+40h] [rbp-D0h]
  unsigned int v194; // [rsp+48h] [rbp-C8h]
  unsigned int v195; // [rsp+58h] [rbp-B8h]
  __int64 v196; // [rsp+90h] [rbp-80h] BYREF
  struct _BRUSHOBJ *v197; // [rsp+98h] [rbp-78h]
  unsigned int v198[2]; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v199; // [rsp+A8h] [rbp-68h] BYREF
  unsigned int v200; // [rsp+ACh] [rbp-64h] BYREF
  struct _BRUSHOBJ *v201; // [rsp+B0h] [rbp-60h]
  __int64 v202; // [rsp+B8h] [rbp-58h] BYREF
  ERECTL *v203; // [rsp+C0h] [rbp-50h]
  int v204; // [rsp+C8h] [rbp-48h] BYREF
  unsigned int v205; // [rsp+CCh] [rbp-44h] BYREF
  struct _XLATEOBJ *v206; // [rsp+D0h] [rbp-40h]
  int v207[2]; // [rsp+D8h] [rbp-38h] BYREF
  int v208[4]; // [rsp+E0h] [rbp-30h] BYREF
  struct _SURFOBJ *v209[2]; // [rsp+F0h] [rbp-20h] BYREF
  int v210; // [rsp+100h] [rbp-10h]
  SURFACE *v211; // [rsp+108h] [rbp-8h] BYREF
  _DWORD *v212; // [rsp+110h] [rbp+0h] BYREF
  int v213; // [rsp+118h] [rbp+8h]
  int v214; // [rsp+11Ch] [rbp+Ch]
  unsigned __int64 v215; // [rsp+120h] [rbp+10h] BYREF
  int v216; // [rsp+128h] [rbp+18h] BYREF
  int v217; // [rsp+12Ch] [rbp+1Ch] BYREF
  unsigned __int16 *v218; // [rsp+130h] [rbp+20h] BYREF
  int *v219; // [rsp+138h] [rbp+28h] BYREF
  _QWORD v220[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v221[2]; // [rsp+150h] [rbp+40h] BYREF
  __int64 v222; // [rsp+160h] [rbp+50h] BYREF
  int v223; // [rsp+168h] [rbp+58h]
  char v224[8]; // [rsp+170h] [rbp+60h] BYREF
  __int64 v225; // [rsp+178h] [rbp+68h]
  PATHOBJ v226; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 v227; // [rsp+1F8h] [rbp+E8h]
  PATHOBJ ppo; // [rsp+270h] [rbp+160h] BYREF
  __int64 v229; // [rsp+278h] [rbp+168h]
  PATHOBJ v230; // [rsp+2F0h] [rbp+1E0h] BYREF
  __int64 v231; // [rsp+2F8h] [rbp+1E8h]
  char v232[8]; // [rsp+370h] [rbp+260h] BYREF
  __int64 v233; // [rsp+378h] [rbp+268h]
  PATHOBJ v234; // [rsp+3F0h] [rbp+2E0h] BYREF
  __int64 v235; // [rsp+3F8h] [rbp+2E8h]
  PATHOBJ v236; // [rsp+470h] [rbp+360h] BYREF
  __int64 v237; // [rsp+478h] [rbp+368h]
  struct _RECTL rclBkGround; // [rsp+4F0h] [rbp+3E0h] BYREF
  struct _RECTL v239; // [rsp+500h] [rbp+3F0h] BYREF
  void *v240[2]; // [rsp+510h] [rbp+400h] BYREF
  struct _RECTL v241; // [rsp+520h] [rbp+410h] BYREF
  struct _CLIPOBJ v242; // [rsp+530h] [rbp+420h] BYREF
  __int64 v243; // [rsp+580h] [rbp+470h]
  int v244; // [rsp+588h] [rbp+478h]
  int v245; // [rsp+5B0h] [rbp+4A0h]
  __int64 v246; // [rsp+5C0h] [rbp+4B0h]
  STROBJ pstro; // [rsp+5D0h] [rbp+4C0h] BYREF
  __int64 v248; // [rsp+610h] [rbp+500h]
  int v249; // [rsp+620h] [rbp+510h]
  int v250; // [rsp+624h] [rbp+514h]
  int v251; // [rsp+650h] [rbp+540h]
  _BYTE v252[100]; // [rsp+654h] [rbp+544h] BYREF
  int v253; // [rsp+6B8h] [rbp+5A8h]
  __int64 v254; // [rsp+6D8h] [rbp+5C8h]
  struct _POINTL v255; // [rsp+710h] [rbp+600h] BYREF
  LONG v256; // [rsp+718h] [rbp+608h]
  LONG v257; // [rsp+71Ch] [rbp+60Ch]
  LONG v258; // [rsp+720h] [rbp+610h]
  LONG v259; // [rsp+724h] [rbp+614h]
  int v260; // [rsp+728h] [rbp+618h]
  int v261; // [rsp+72Ch] [rbp+61Ch]
  struct _POINTL v262; // [rsp+730h] [rbp+620h] BYREF

  v11 = 0;
  v12 = a5;
  v218 = a6;
  v240[0] = a10;
  v14 = 4;
  v200 = a3;
  if ( (a4 & 0x10) == 0 )
    v14 = 2;
  v205 = a2;
  v15 = *(_QWORD *)a1;
  v16 = 128;
  v198[0] = v14;
  v219 = a8;
  v210 = 0;
  if ( (*(_DWORD *)(v15 + 248) & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_9;
  if ( (*(_DWORD *)(v15 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  v207[0] = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_9:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v18 = a4 & 0xFFFFC36F;
  v199 = a4 & 0xFFFFC36F;
  if ( !a5 )
  {
    v18 = a4 & 0xFFFFC369;
LABEL_16:
    v199 = v18;
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
      LODWORD(v197) = 0;
      if ( v20 )
      {
        v204 = 0;
        v21 = 0;
        LODWORD(v203) = 0;
        LODWORD(v22) = 0;
        v23 = 0;
        LODWORD(v206) = 0;
        LODWORD(v24) = 0;
        v208[0] = 0;
        LODWORD(v25) = 0;
      }
      else
      {
        v215 = *(_QWORD *)(v19 + 8LL * (*(_DWORD *)(v19 + 40) & 1) + 1016);
        v21 = v215;
        v206 = (struct _XLATEOBJ *)HIDWORD(v215);
        v22 = HIDWORD(v215);
        v24 = HIDWORD(v215);
        v23 = v215;
        v25 = HIDWORD(v215);
        *(_QWORD *)v208 = HIDWORD(v215);
        LODWORD(v203) = HIDWORD(v215);
        v204 = v215;
      }
      v202 = (unsigned int)(16 * v22);
      v26 = *(_QWORD *)(v19 + 976);
      v27 = (struct _BRUSHOBJ *)(unsigned int)(16 * v21);
      v201 = v27;
      v213 = *(_DWORD *)(v26 + 208);
      v214 = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 108LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 976) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v212, a1, 0x204u, 0);
        LODWORD(v24) = (_DWORD)v206;
        LODWORD(v25) = v208[0];
        v28 = v212;
      }
      else
      {
        v28 = (_DWORD *)(v19 + 320);
        v212 = (_DWORD *)(v19 + 320);
      }
      v215 = 0LL;
      if ( !v12 )
        goto LABEL_78;
      v16 = 136;
      LODWORD(v211) = v18 & 2;
      v29 = (unsigned int)v28[8];
      if ( (v18 & 2) == 0 )
        v16 = 128;
      v208[0] = v16;
      if ( (v29 & 2) != 0 )
      {
        v30 = v23 + v12->left + ((v28[6] + 8) >> 4);
        v239.left = v30;
        v31 = v23 + v12->right + ((v28[6] + 8) >> 4);
        v239.right = v31;
        v32 = v24 + v12->top + ((v28[7] + 8) >> 4);
        v239.top = v32;
        bottom = v25 + v12->bottom + ((v28[7] + 8) >> 4);
        v239.bottom = bottom;
      }
      else
      {
        left = v12->left;
        if ( (v29 & 1) != 0 )
        {
          v204 = 0;
          bFToL(v29, &v204, 0LL);
          v35 = v212;
          v30 = v23 + ((v212[6] + v204 + 8) >> 4);
          v216 = 0;
          v239.left = v30;
          bFToL(v36, &v216, v37);
          LODWORD(v35) = v35[6] + v216 + 8;
          v217 = 0;
          v31 = v23 + ((int)v35 >> 4);
          v239.right = v31;
          bFToL(v38, &v217, 0LL);
          v39 = v217 + 8 + v212[7];
          LODWORD(v211) = 0;
          v32 = (_DWORD)v203 + (v39 >> 4);
          v239.top = v32;
          bFToL(v40, &v211, v41);
          bottom = (_DWORD)v203 + (((int)v211 + 8 + v212[7]) >> 4);
          v239.bottom = bottom;
        }
        else
        {
          top = v12->top;
          v255.y = v12->bottom;
          right = v12->right;
          v257 = top;
          v259 = top;
          v255.x = left;
          v256 = left;
          v258 = right;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v212, &v255, (struct _POINTFIX *)&v255, 3uLL);
          v44 = v255.x + v258 - v256;
          v45 = v255.y + v259 - v257;
          v260 = v44;
          v261 = v45;
          v46 = (v256 > v255.x) ^ (unsigned __int64)(v256 <= v258);
          v47 = *(&v255.x + 2 * v46);
          v48 = *(&v258 + 2 * v46);
          if ( v47 > v48 )
            v47 += 15;
          else
            v48 += 15;
          v30 = v204 + (v47 >> 4);
          v31 = v204 + (v48 >> 4);
          v239.right = v31;
          v239.left = v30;
          v49 = (v257 > v255.y) ^ (unsigned __int64)(v257 <= v259);
          v50 = *(&v255.y + 2 * v49);
          v51 = *(&v259 + 2 * v49);
          if ( v50 > v51 )
            v50 += 15;
          else
            v51 += 15;
          v52 = v199;
          v32 = (_DWORD)v203 + (v50 >> 4);
          bottom = (_DWORD)v203 + (v51 >> 4);
          v239.bottom = bottom;
          v239.top = v32;
          if ( (v199 & 4) != 0 )
          {
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v232);
            if ( v233 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v232, v53, &v255, v54) )
            {
              v55 = *(_QWORD *)a1;
              *(_QWORD *)&v241.left = 0LL;
              *(_QWORD *)&v241.right = 0LL;
              v241.top = 16 * (*(_DWORD *)(v55 + 1004) - (_DWORD)v203);
              v241.bottom = 16 * (*(_DWORD *)(v55 + 1012) - (_DWORD)v203);
              v223 = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v222, (struct EPATHOBJ *)v232, 1u, &v241);
              if ( v222 )
              {
                v56 = *(_QWORD *)a1;
                v215 = (unsigned __int64)a1;
                *(_QWORD *)(v56 + 1112) = v222;
                if ( (unsigned int)DC::bTightenRao(*(DC **)a1) )
                  v52 &= ~4u;
              }
              if ( v223 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v222);
            }
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v232);
            bottom = v239.bottom;
            v31 = v239.right;
            v16 = 0;
            if ( (v52 & 4) == 0 )
              v16 = v208[0];
            v57 = 0;
            v32 = v239.top;
            v30 = v239.left;
            if ( (v52 & 4) == 0 )
              v57 = a7;
            a7 = v57;
            v58 = 0;
            if ( (v52 & 4) == 0 )
              v58 = v52;
            v199 = v58;
          }
          else if ( (_DWORD)v211 )
          {
            v255.x += (int)v201;
            v255.y += v202;
            v256 += (int)v201;
            v16 = v16 & 0xFFFFFFF5 | 2;
            v258 += (int)v201;
            v257 += v202;
            v261 = v202 + v45;
            v259 += v202;
            v260 = (_DWORD)v201 + v44;
          }
        }
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 108LL) & 1) != 0 )
      {
        ++v30;
        ++v31;
        v239.left = v30;
        v239.right = v31;
      }
      if ( v30 > v31 )
      {
        v59 = v30;
        v30 = v31;
        v239.left = v31;
        v31 = v59;
        v239.right = v59;
      }
      if ( v32 > bottom )
      {
        v60 = v32;
        v239.top = bottom;
        v32 = bottom;
        v239.bottom = v60;
        bottom = v60;
      }
      if ( (v16 & 0xA) != 0 )
      {
        v61 = rclBkGround.left;
        v62 = rclBkGround.right;
        if ( rclBkGround.left != rclBkGround.right )
        {
          v63 = rclBkGround.top;
          if ( rclBkGround.top != rclBkGround.bottom )
          {
            if ( v30 < rclBkGround.left )
              v61 = v30;
            LODWORD(v27) = (_DWORD)v201;
            rclBkGround.left = v61;
            if ( v32 < rclBkGround.top )
              v63 = v32;
            rclBkGround.top = v63;
            if ( v31 > rclBkGround.right )
              v62 = v31;
            LOBYTE(v18) = v199;
            rclBkGround.right = v62;
            if ( bottom > rclBkGround.bottom )
              rclBkGround.bottom = bottom;
LABEL_78:
            v64 = 0LL;
            v206 = 0LL;
            p_rclBkGround = 0LL;
            v196 = 0LL;
            v253 = 0;
            LODWORD(v203) = 1;
            if ( !a7 )
              goto LABEL_155;
            v66 = *(_QWORD *)a1;
            v211 = 0LL;
            v161 = (*(_DWORD *)(v66 + 36) & 0x4000) == 0;
            v208[0] = *(_DWORD *)(v66 + 248) & 1;
            if ( !v161 )
            {
              v211 = *(SURFACE **)(v66 + 496);
              SURFACE::bUnMap(v211, 0LL, (struct DC *)v66);
            }
            if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v196, a1, v208[0], v198[0]) )
              GreAcquireSemaphore(*(_QWORD *)(v196 + 504));
            if ( v211 )
              SURFACE::Map(v211);
            if ( !v196 )
            {
              LODWORD(v203) = 1;
              goto LABEL_154;
            }
            v210 = *(_DWORD *)(v196 + 88) & 2;
            if ( !v210 || (v161 = (*(_DWORD *)(v196 + 716) & 0x8000) == 0, LODWORD(v203) = 0, !v161) )
              LODWORD(v203) = 1;
            v67 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
            LODWORD(v197) = *(_DWORD *)(*(_QWORD *)a1 + 1736LL) | *(_DWORD *)(v67 + 272) & 0x11F;
            if ( ((unsigned __int8)v197 & 1) != 0 )
            {
              v68 = *(_DWORD *)(v67 + 152);
              if ( (v68 & 0x200) == 0 )
              {
                v69 = v202;
                *(_DWORD *)(v67 + 152) = v68 | 0x100;
                v70 = *(_QWORD *)a1;
                v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) + (_DWORD)v27;
                v198[0] = v71;
                v72 = *(_DWORD *)(*(_QWORD *)(v70 + 976) + 12LL) + v69;
                goto LABEL_104;
              }
              *(_DWORD *)(v67 + 152) = v68 & 0xFFFFFDFF;
              v73 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
              *(_DWORD *)(v73 + 152) |= 0x100u;
              v74 = v212;
              v75 = *(_QWORD *)a1;
              v76 = v212[8];
              if ( (v76 & 2) != 0 )
              {
                v198[0] = v212[6] + 16 * *(_DWORD *)(*(_QWORD *)(v75 + 976) + 216LL);
                v198[1] = v212[7] + 16 * *(_DWORD *)(*(_QWORD *)(v75 + 976) + 220LL);
                *(_QWORD *)(*(_QWORD *)(v75 + 976) + 8LL) = *(_QWORD *)v198;
              }
              else if ( (v76 & 1) != 0 )
              {
                v200 = 0;
                bFToL(v73, &v200, 0LL);
                v198[0] = v74[6] + v200;
                v205 = 0;
                bFToL(v198[0], &v205, v77);
                v198[1] = v74[7] + v205;
                *(_QWORD *)(*(_QWORD *)(v75 + 976) + 8LL) = *(_QWORD *)v198;
              }
              else
              {
                EXFORMOBJ::bXform(
                  (EXFORMOBJ *)&v212,
                  (struct _POINTL *)(*(_QWORD *)(v75 + 976) + 216LL),
                  (struct _POINTFIX *)v198,
                  1uLL);
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) = *(_QWORD *)v198;
              }
              goto LABEL_102;
            }
            v78 = v212;
            v79 = v212[8];
            if ( (v79 & 2) != 0 )
            {
              v71 = (_DWORD)v201 + 16 * v205 + v212[6];
              v198[0] = v71;
              v80 = 16 * v200 + v212[7];
            }
            else
            {
              if ( (v79 & 1) == 0 )
              {
                v198[0] = v205;
                v198[1] = v200;
                EXFORMOBJ::bXform((EXFORMOBJ *)&v212, (struct _POINTL *)v198, (struct _POINTFIX *)v198, 1uLL);
LABEL_102:
                v80 = v198[1];
                v71 = (_DWORD)v201 + v198[0];
                v198[0] += (unsigned int)v201;
                goto LABEL_103;
              }
              v199 = 0;
              bFToL(v67, &v199, 0LL);
              v71 = (_DWORD)v201 + v199 + v78[6];
              v208[0] = 0;
              v198[0] = v71;
              bFToL(v81, v208, v82);
              v80 = v208[0] + v78[7];
            }
LABEL_103:
            p_rclBkGround = 0LL;
            v72 = v202 + v80;
LABEL_104:
            v83 = *(_QWORD *)a1;
            v198[1] = v72;
            ESTROBJ::vInit(
              (ESTROBJ *)&pstro,
              v218,
              a7,
              a1,
              (struct RFONTOBJ *)&v196,
              (struct EXFORMOBJ *)&v212,
              v219,
              v207[0],
              *(_DWORD *)(v83 + 1740),
              *(_DWORD *)(*(_QWORD *)(v83 + 976) + 280LL),
              *(_DWORD *)(*(_QWORD *)(v83 + 976) + 284LL),
              *(_DWORD *)(*(_QWORD *)(v83 + 976) + 288LL),
              v71,
              v72,
              (unsigned int)v197,
              0LL,
              v240[0],
              a11);
            if ( (v253 & 4) != 0 )
            {
              v84 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v262, &pstro.rclBkGround);
              v85 = pstro.rclBkGround.right;
              v207[0] = v84;
              v86 = pstro.rclBkGround.left;
              if ( (*(_DWORD *)(v196 + 12) & 0x10000000) != 0 )
              {
                v86 = pstro.rclBkGround.left - 1;
                v85 = pstro.rclBkGround.right + 1;
                --pstro.rclBkGround.left;
                ++pstro.rclBkGround.right;
              }
              if ( (v253 & 0x1400) != 0 )
              {
                ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v262, v84);
                v85 = pstro.rclBkGround.right;
                v86 = pstro.rclBkGround.left;
              }
              v87 = rclBkGround.left;
              v88 = rclBkGround.right;
              if ( rclBkGround.left == rclBkGround.right
                || (v89 = rclBkGround.top, rclBkGround.top == rclBkGround.bottom) )
              {
                rclBkGround = pstro.rclBkGround;
              }
              else
              {
                if ( v86 < rclBkGround.left )
                  v87 = v86;
                rclBkGround.left = v87;
                if ( pstro.rclBkGround.top < rclBkGround.top )
                  v89 = pstro.rclBkGround.top;
                rclBkGround.top = v89;
                if ( v85 > rclBkGround.right )
                  v88 = v85;
                rclBkGround.right = v88;
                if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
                  rclBkGround.bottom = pstro.rclBkGround.bottom;
              }
              if ( a9 == 2 )
              {
                if ( v207[0] )
                {
                  v16 |= 0x10u;
                }
                else
                {
                  p_rclBkGround = &pstro.rclBkGround;
                  v206 = (struct _XLATEOBJ *)&pstro.rclBkGround;
                }
              }
              if ( v86 >= v85 || (v90 = 0, pstro.rclBkGround.top >= pstro.rclBkGround.bottom) )
                v90 = 1;
              if ( (v16 & 8) != 0 && v239.left <= v86 && v239.right >= v85 )
              {
                v91 = v239.bottom;
                if ( v239.top <= pstro.rclBkGround.top && v239.bottom >= pstro.rclBkGround.bottom && !v90 )
                {
                  p_rclBkGround = &v239;
                  v16 &= ~8u;
                  v206 = (struct _XLATEOBJ *)&v239;
                  goto LABEL_136;
                }
              }
              else
              {
                v91 = v239.bottom;
              }
              if ( !p_rclBkGround )
              {
                if ( v90 )
                {
LABEL_141:
                  if ( ((unsigned __int8)v197 & 0xA0) != 0 )
                  {
                    if ( v251 )
                    {
                      v64 = (ERECTL *)v252;
                      if ( !ERECTL::bEmpty((ERECTL *)v252) )
                      {
                        do
                          ERECTL::operator+=(&rclBkGround, v92);
                        while ( !ERECTL::bEmpty((ERECTL *)(v93 + 16)) );
                      }
                    }
                    else
                    {
                      v16 |= 4u;
                    }
                  }
                  if ( (v18 & 4) != 0 )
                  {
                    if ( v239.left > rclBkGround.left
                      || v239.right < rclBkGround.right
                      || v239.top > rclBkGround.top
                      || v91 < rclBkGround.bottom )
                    {
                      ERECTL::operator*=(&rclBkGround.left, &v239.left);
                    }
                    else
                    {
                      LOBYTE(v18) = -5;
                    }
                  }
LABEL_155:
                  if ( ((unsigned __int8)v197 & 1) != 0 )
                  {
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) += v249;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 12LL) += v250;
                  }
                  v94 = *(_QWORD *)a1;
                  if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0 )
                  {
                    v95 = 0;
                    if ( (v18 & 4) == 0 )
                      v95 = v16;
                    v16 = v95;
                    v96 = v95;
                    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v224, a1);
                    if ( !v225 )
                      goto LABEL_186;
                    if ( (v96 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v224, &v239) )
                      v16 = 0;
                    if ( (v16 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v224, v97, &v255, v99) )
                      v16 = 0;
                    if ( (v16 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v224, v97, &v262, v99) )
                      v16 = 0;
                    if ( (v16 & 1) != 0
                      && (!p_rclBkGround || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v224, p_rclBkGround)) )
                    {
                      if ( (v253 & 0x1400) != 0 )
                        v100 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)v224, v98);
                      else
                        v100 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v224);
                      if ( !v100 )
                      {
LABEL_182:
                        v16 = 0;
                        goto LABEL_183;
                      }
                      if ( v64 && !ERECTL::bEmpty(v64) )
                      {
                        while ( (unsigned int)bAddRectToPath((struct EPATHOBJ *)v224, (struct _RECTL *)v64) )
                        {
                          v64 = (ERECTL *)((char *)v64 + 16);
                          if ( ERECTL::bEmpty(v64) )
                            goto LABEL_183;
                        }
                        goto LABEL_182;
                      }
                    }
LABEL_183:
                    if ( (v16 & 4) != 0
                      && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v224) )
                    {
                      v16 = 0;
                    }
LABEL_186:
                    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v224);
LABEL_408:
                    if ( (v253 & 0x801) != 0 )
                    {
                      if ( (v253 & 1) != 0 )
                        FreeTmpBuffer(v248);
                      if ( (v253 & 0x800) != 0 )
                        Win32FreePool(v254);
                    }
                    if ( v196 )
                    {
                      if ( (*(_DWORD *)(v196 + 712) & 0x81) != 0 )
                        RFONTOBJ::dtorHelper((RFONTOBJ *)&v196);
                      v189 = *(_QWORD *)(v196 + 616);
                      if ( v189 )
                      {
                        Win32FreePool(v189);
                        *(_QWORD *)(v196 + 624) = 0LL;
                        *(_QWORD *)(v196 + 616) = 0LL;
                      }
                      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v196 + 504));
                      GreReleaseSemaphoreInternal(*(_QWORD *)(v196 + 504));
                    }
                    if ( v215 )
                      TXTCLEANUP::vMopUp((TXTCLEANUP *)&v215);
                    goto LABEL_422;
                  }
                  if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == rclBkGround.bottom )
                    goto LABEL_408;
                  v101 = *(_DWORD *)(v94 + 36);
                  if ( (v101 & 0xE0) != 0 )
                  {
                    v102 = *(_DWORD *)(v94 + 40) & 1;
                    *(struct _RECTL *)v209 = rclBkGround;
                    v103 = *(_DWORD *)(v94 + 8 * v102 + 1016);
                    v104 = rclBkGround.left - v103;
                    LODWORD(v209[1]) = rclBkGround.right - v103;
                    v105 = *(_DWORD *)(v94 + 8 * v102 + 1020);
                    v106 = v94;
                    HIDWORD(v209[0]) = rclBkGround.top - v105;
                    HIDWORD(v209[1]) = rclBkGround.bottom - v105;
                    LODWORD(v209[0]) = v104;
                    if ( (v101 & 0x20) != 0 )
                    {
                      ERECTL::operator|=(v94 + 1064, v209);
                      v106 = *(_QWORD *)a1;
                    }
                    v94 = v106;
                    if ( (*(_DWORD *)(v106 + 36) & 0x80u) != 0 )
                    {
                      ERECTL::operator|=(v106 + 1096, v209);
                      v94 = *(_QWORD *)a1;
                    }
                  }
                  if ( v210 || (v107 = 0, (v18 & 4) != 0) )
                    v107 = 1;
                  v108 = *(_QWORD *)(v94 + 1152);
                  if ( !v108
                    || (*(_DWORD *)(v94 + 40) & 2) == 0
                    || (v161 = (unsigned int)DC::bDpiScaledSurface((DC *)v94) == 0, v109 = v108, v161) )
                  {
                    v109 = *(_QWORD *)(v94 + 1136);
                  }
                  if ( v109 )
                  {
                    if ( !v108 || (*(_DWORD *)(v94 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v94) )
                      v110 = *(struct REGION **)(v94 + 1136);
                  }
                  else
                  {
                    v110 = DC::prgnVisSnap((DC *)v94);
                  }
                  v243 = 0LL;
                  v244 = 0;
                  v245 = 1;
                  v246 = 0LL;
                  XCLIPOBJ::vSetup((XCLIPOBJ *)&v242, v110, (struct ERECTL *)&rclBkGround, v107);
                  rclBounds = v242.rclBounds;
                  v113 = _mm_cvtsi128_si32((__m128i)v242.rclBounds);
                  v114 = _mm_srli_si128((__m128i)v242.rclBounds, 8);
                  rclBkGround = v242.rclBounds;
                  v242.rclBounds.left = v113;
                  if ( v113 == _mm_cvtsi128_si32(v114)
                    || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                     _mm_srli_si128(
                                                                                       (__m128i)rclBounds,
                                                                                       12)) )
                  {
                    goto LABEL_408;
                  }
                  v115 = *(_QWORD *)a1;
                  v116 = *(_QWORD *)a1;
                  v117 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
                  if ( (v117 & 0xE0) != 0 )
                  {
                    *(RECTL *)v240 = rclBounds;
                    v118 = *(_DWORD *)(v115 + 40) & 1;
                    v119 = v113 - *(_DWORD *)(v115 + 8 * v118 + 1016);
                    LODWORD(v240[0]) = v119;
                    v111 = (unsigned int)(rclBounds.right - *(_DWORD *)(v115 + 8 * v118 + 1016));
                    LODWORD(v240[1]) = rclBounds.right - *(_DWORD *)(v115 + 8 * v118 + 1016);
                    v120 = rclBounds.top - *(_DWORD *)(v115 + 8 * v118 + 1020);
                    HIDWORD(v240[0]) = v120;
                    HIDWORD(v240[1]) = rclBounds.bottom - *(_DWORD *)(v115 + 8 * v118 + 1020);
                    if ( (v117 & 0x40) != 0 )
                    {
                      v121 = *(_DWORD *)(v115 + 1080);
                      if ( v121 == *(_DWORD *)(v115 + 1088)
                        || (v122 = *(_DWORD *)(v115 + 1084), v122 == *(_DWORD *)(v115 + 1092)) )
                      {
                        *(_OWORD *)(v115 + 1080) = *(_OWORD *)v240;
                      }
                      else
                      {
                        if ( v119 < v121 )
                        {
                          *(_DWORD *)(v115 + 1080) = v119;
                          v111 = LODWORD(v240[1]);
                          v120 = HIDWORD(v240[0]);
                        }
                        if ( v120 < v122 )
                        {
                          *(_DWORD *)(v115 + 1084) = v120;
                          v111 = LODWORD(v240[1]);
                        }
                        if ( (int)v111 > *(_DWORD *)(v115 + 1088) )
                          *(_DWORD *)(v115 + 1088) = v111;
                        if ( SHIDWORD(v240[1]) > *(_DWORD *)(v115 + 1092) )
                          *(_DWORD *)(v115 + 1092) = HIDWORD(v240[1]);
                      }
                      v116 = *(_QWORD *)a1;
                      *(_QWORD *)v207 = *(_QWORD *)(*(_QWORD *)a1 + 1168LL);
                      if ( *(_QWORD *)v207 )
                      {
                        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v221);
                        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v221);
                        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v220);
                        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v220);
                        if ( v221[0] )
                        {
                          if ( v220[0] )
                          {
                            RGNOBJ::vSet((RGNOBJ *)v220, (struct _RECTL *)v240);
                            if ( RGNOBJ::bMerge(
                                   (RGNOBJ *)v221,
                                   (struct RGNOBJ *)v207,
                                   (struct RGNOBJ *)v220,
                                   BYTE2(gafjRgnOp)) )
                            {
                              RGNOBJ::vSwap((RGNOBJ *)v207, (struct RGNOBJ *)v221);
                              *(_QWORD *)(*(_QWORD *)a1 + 1168LL) = *(_QWORD *)v207;
                            }
                          }
                        }
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v220);
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v221);
                        v116 = *(_QWORD *)a1;
                      }
                    }
                  }
                  v123 = *(_QWORD *)(v116 + 496);
                  if ( !v123 )
                    goto LABEL_408;
                  if ( (*(_DWORD *)(v123 + 116) & 8) != 0 || *(_QWORD *)(v123 + 224) )
                  {
                    v115 = 512LL;
                    if ( (*(_WORD *)(v123 + 102) & 0x200) != 0 )
                      goto LABEL_408;
                  }
                  v124 = *(_DWORD *)(v123 + 112);
                  if ( (v124 & 0x800) != 0 )
                  {
                    v125 = UserSurfaceAccessCheck(*(_QWORD *)(v123 + 648));
                  }
                  else
                  {
                    if ( (v124 & 0x10000000) == 0 )
                      goto LABEL_237;
                    v125 = UserScreenAccessCheck(v115, v111);
                  }
                  if ( !v125 )
                    goto LABEL_408;
LABEL_237:
                  v126 = *(_QWORD *)a1;
                  v127 = 0;
                  v128 = (struct _POINTL *)v126;
                  v129 = *(struct _CLIPOBJ **)(v123 + 128);
                  v202 = *(_QWORD *)(v123 + 48);
                  iUniq = *(unsigned int *)(v126 + 72);
                  v131 = v126 + 1456;
                  v132 = *(_QWORD *)(v126 + 88);
                  v197 = (struct _BRUSHOBJ *)(v126 + 1456);
                  v201 = (struct _BRUSHOBJ *)(v126 + 1592);
                  v200 = iUniq;
                  if ( (iUniq & 0x10000000) != 0 )
                  {
                    v127 = (int)v203;
                    *(_DWORD *)(*(_QWORD *)(v126 + 976) + 152LL) |= 4u;
                    --*(_DWORD *)(v126 + 1580);
                    v126 = *(_QWORD *)a1;
                    v128 = *(struct _POINTL **)a1;
                  }
                  v133 = *(_QWORD *)(v126 + 976);
                  if ( ((*(_BYTE *)(v126 + 316) | *(_BYTE *)(v133 + 152)) & 0xC) != 0 )
                  {
                    if ( ((*(_BYTE *)(v126 + 316) | *(_BYTE *)(v133 + 152)) & 4) != 0 )
                    {
                      EBRUSHOBJ::vInitBrush(v131, v126, gpbrText, v132, v129, v123, v127);
                      v126 = *(_QWORD *)a1;
                    }
                    if ( ((*(_BYTE *)(v126 + 316) | *(_BYTE *)(*(_QWORD *)(v126 + 976) + 152LL)) & 8) != 0 )
                    {
                      v190 = v129;
                      v134 = v201;
                      EBRUSHOBJ::vInitBrush(v201, v126, gpbrBackground, v132, v190, v123, (v200 >> 15) & 1);
                      v126 = *(_QWORD *)a1;
                    }
                    else
                    {
                      v134 = v201;
                    }
                    *(_DWORD *)(*(_QWORD *)(v126 + 976) + 152LL) &= 0xFFFFFFF3;
                    *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= 0xFFFFFFF3;
                    v128 = *(struct _POINTL **)a1;
                  }
                  else
                  {
                    v134 = v201;
                  }
                  v135 = v128 + 147;
                  if ( (v16 & 0x1A) != 0 )
                  {
                    if ( (v16 & 8) == 0 || ERECTL::bEmpty((ERECTL *)&v239) )
                    {
                      v143 = rclBkGround.bottom;
                      cEntries = (unsigned int)rclBkGround.right;
                      v142 = (unsigned int)rclBkGround.top;
                      flXlate = (unsigned int)rclBkGround.left;
                    }
                    else
                    {
                      si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                      iUniq = (unsigned int)v239.left;
                      v137 = v239.right;
                      v138 = v239.top;
                      v139 = v239.bottom;
                      flXlate = (unsigned int)_mm_cvtsi128_si32(si128);
                      cEntries = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
                      v142 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
                      if ( (int)flXlate > v239.left )
                        iUniq = (unsigned int)flXlate;
                      v143 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
                      rclBkGround.left = flXlate;
                      if ( (int)cEntries < v239.right )
                        v137 = cEntries;
                      v242.rclBounds.left = iUniq;
                      rclBkGround.right = cEntries;
                      v242.rclBounds.right = v137;
                      if ( (int)v142 > v239.top )
                        v138 = v142;
                      rclBkGround.top = v142;
                      v242.rclBounds.top = v138;
                      if ( v143 < v239.bottom )
                        v139 = v143;
                      rclBkGround.bottom = v143;
                      v207[0] = v139;
                      v242.rclBounds.bottom = v139;
                      v134 = v201;
                      if ( (int)iUniq < v137 && v138 < v207[0] )
                      {
                        ++*(_DWORD *)(v123 + 92);
                        TextOutBitBlt(
                          (struct SURFACE *)v123,
                          (struct RFONTOBJ *)&v196,
                          (struct _SURFOBJ *)cEntries,
                          (struct _SURFOBJ *)v142,
                          &v242,
                          v191,
                          &v242.rclBounds,
                          v192,
                          v193,
                          v134,
                          v135,
                          v195);
                        v143 = rclBkGround.bottom;
                        cEntries = (unsigned int)rclBkGround.right;
                        v142 = (unsigned int)rclBkGround.top;
                        flXlate = (unsigned int)rclBkGround.left;
                      }
                      v242.rclBounds = rclBkGround;
                    }
                    if ( (v16 & 0x12) == 0 )
                    {
LABEL_276:
                      if ( (v16 & 1) == 0 )
                      {
LABEL_402:
                        if ( (v16 & 4) != 0 )
                        {
                          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v236);
                          if ( !v237
                            || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v236)
                            || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                &v236,
                                                a1,
                                                (struct RFONTOBJ *)&v196,
                                                (struct PDEVOBJ *)&v202,
                                                (struct SURFACE *)v123,
                                                &v242,
                                                v197,
                                                v135,
                                                (unsigned int)v193,
                                                v194) )
                          {
                            v16 = 0;
                          }
                          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v236);
                        }
                        goto LABEL_408;
                      }
                      v203 = 0LL;
                      if ( v210 )
                      {
                        iUniq = 32LL;
                        v200 = -257;
                        v146 = 64;
                        if ( (*(_DWORD *)(v196 + 716) & 0x8000) == 0 )
                          v146 = 32;
                        v16 |= v146;
                      }
                      if ( v206 && (v200 & 0x100) == 0 )
                      {
                        iUniq = v206->iUniq;
                        v147 = *(_DWORD *)&v206->iSrcType;
                        if ( (int)flXlate > (int)iUniq )
                          iUniq = (unsigned int)flXlate;
                        flXlate = v206->flXlate;
                        v242.rclBounds.left = iUniq;
                        if ( (int)cEntries < v147 )
                          v147 = cEntries;
                        cEntries = v206->cEntries;
                        v242.rclBounds.right = v147;
                        if ( (int)v142 > (int)flXlate )
                          flXlate = (unsigned int)v142;
                        v242.rclBounds.top = flXlate;
                        if ( v143 < (int)cEntries )
                          cEntries = (unsigned int)v143;
                        v242.rclBounds.bottom = cEntries;
                        if ( (int)iUniq < v147 && (int)flXlate < (int)cEntries )
                        {
                          ++*(_DWORD *)(v123 + 92);
                          TextOutBitBlt(
                            (struct SURFACE *)v123,
                            (struct RFONTOBJ *)&v196,
                            (struct _SURFOBJ *)cEntries,
                            (struct _SURFOBJ *)v142,
                            &v242,
                            v191,
                            &v242.rclBounds,
                            v192,
                            v193,
                            v134,
                            v135,
                            v195);
                        }
                        v242.rclBounds = rclBkGround;
                        v206 = 0LL;
                      }
                      if ( v64 && *(_DWORD *)(v202 + 2140) != 4 )
                      {
                        v203 = v64;
                        v64 = 0LL;
                      }
                      if ( (v16 & 0x20) != 0 )
                      {
                        if ( (v253 & 0x1400) != 0 )
                        {
                          v148 = v197;
                          if ( !(unsigned int)bProxyDrvTextOut(
                                                a1,
                                                (struct SURFACE *)v123,
                                                (struct ESTROBJ *)&pstro,
                                                &v242,
                                                0LL,
                                                0LL,
                                                v197,
                                                v134,
                                                v135,
                                                (struct RFONTOBJ *)&v196,
                                                (struct PDEVOBJ *)&v202,
                                                *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                                &rclBkGround) )
                            v16 = 0;
                          goto LABEL_386;
                        }
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v230);
                        if ( v231 )
                        {
                          if ( (v253 & 0x1400) != 0 )
                            v150 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v230, v149);
                          else
                            v150 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v230);
                          v148 = v197;
                          if ( v150
                            && (unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                               &v230,
                                               a1,
                                               (struct RFONTOBJ *)&v196,
                                               (struct PDEVOBJ *)&v202,
                                               (struct SURFACE *)v123,
                                               &v242,
                                               v197,
                                               v135,
                                               (unsigned int)v193) )
                          {
                            goto LABEL_311;
                          }
                        }
                        else
                        {
                          v148 = v197;
                        }
                        v16 = 0;
LABEL_311:
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v230);
LABEL_386:
                        v177 = v203;
                        if ( v203 )
                        {
                          v178 = v242.rclBounds;
                          ++*(_DWORD *)(v123 + 92);
                          *(RECTL *)v209 = v178;
                          if ( !ERECTL::bEmpty(v177) )
                          {
                            v180 = (struct _SURFOBJ *)HIDWORD(v209[1]);
                            v181 = (LONG *)(v179 + 4);
                            v182 = (LONG)v209[1];
                            v183 = (struct _SURFOBJ *)HIDWORD(v209[0]);
                            v184 = (LONG)v209[0];
                            do
                            {
                              v185 = *(v181 - 1);
                              if ( v184 > v185 )
                                v185 = v184;
                              v186 = v181[1];
                              v242.rclBounds.left = v185;
                              if ( v182 < v186 )
                                v186 = v182;
                              v242.rclBounds.right = v186;
                              if ( v185 < v186 )
                              {
                                v187 = *v181;
                                v188 = v181[2];
                                if ( (int)v183 > *v181 )
                                  v187 = (int)v183;
                                v242.rclBounds.top = v187;
                                if ( (int)v180 < v188 )
                                  v188 = (int)v180;
                                v242.rclBounds.bottom = v188;
                                if ( v187 < v188 )
                                  TextOutBitBlt(
                                    (struct SURFACE *)v123,
                                    (struct RFONTOBJ *)&v196,
                                    v180,
                                    v183,
                                    &v242,
                                    v191,
                                    &v242.rclBounds,
                                    v192,
                                    v193,
                                    v148,
                                    v135,
                                    v195);
                              }
                              v181 += 4;
                              v161 = !ERECTL::bEmpty((ERECTL *)(v181 - 1));
                              v184 = (LONG)v209[0];
                            }
                            while ( v161 );
                          }
                          v242.rclBounds = v178;
                        }
                        goto LABEL_402;
                      }
                      CurrentThread = KeGetCurrentThread();
                      if ( !(unsigned int)IsThreadCrossSessionAttached(iUniq, flXlate, cEntries, v142)
                        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
                        && (v156 = *ThreadWin32Thread) != 0 )
                      {
                        v157 = *(_QWORD *)(v156 + 304);
                      }
                      else
                      {
                        v157 = *(_QWORD *)(v123 + 104);
                      }
                      if ( v157 )
                        SURFACE::pdcoAA((SURFACE *)v123, 0LL);
                      if ( (*(_DWORD *)(v123 + 112) & 8) != 0 )
                        v158 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v123 + 48) + 2872LL);
                      else
                        v158 = EngTextOut;
                      if ( (char *)v158 == (char *)SpTextOut || (char *)v158 == (char *)BmpDevTextOut )
                      {
                        if ( (*(_DWORD *)(v196 + 12) & 0x10010000) != 0 )
                        {
                          *(_QWORD *)(v123 + 104) = a1;
                          v218 = (unsigned __int16 *)KeGetCurrentThread();
                          if ( !(unsigned int)IsThreadCrossSessionAttached(v152, EngTextOut, v153, v154) )
                          {
                            v162 = (__int64 *)PsGetThreadWin32Thread(v218);
                            if ( v162 )
                            {
                              v163 = *v162;
                              if ( v163 )
                                *(_QWORD *)(v163 + 304) = a1;
                            }
                          }
                        }
                      }
                      else
                      {
                        v159 = *(_DWORD *)(v196 + 12);
                        if ( (v159 & 0x10000) != 0 )
                        {
                          v160 = *(_QWORD *)a1;
                          v161 = (v159 & 0x10000000) != 0
                               ? (*(_DWORD *)(v160 + 76) & 0x4000) == 0
                               : (*(_DWORD *)(v160 + 72) & 0x1000000) == 0;
                          if ( v161 )
                          {
                            if ( v158 != EngTextOut )
                              SURFACE::pdcoAA((SURFACE *)v123, a1);
                            v158 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                          }
                        }
                      }
                      if ( (v16 & 0x40) != 0 )
                      {
                        if ( (v253 & 0x1400) != 0 )
                        {
                          v148 = v197;
                          if ( !(unsigned int)bProxyDrvTextOut(
                                                a1,
                                                (struct SURFACE *)v123,
                                                (struct ESTROBJ *)&pstro,
                                                &v242,
                                                0LL,
                                                0LL,
                                                v197,
                                                v201,
                                                v135,
                                                (struct RFONTOBJ *)&v196,
                                                (struct PDEVOBJ *)&v202,
                                                *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                                &rclBkGround) )
                            v16 = 0;
                          goto LABEL_382;
                        }
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v226);
                        if ( !v227
                          || ((v253 & 0x1400) == 0
                            ? (v169 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v226))
                            : (v169 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v226, v168)),
                              !v169
                           || v226.cCurves > 1
                           && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                               &v226,
                                               a1,
                                               (struct RFONTOBJ *)&v196,
                                               (struct PDEVOBJ *)&v202,
                                               (struct SURFACE *)v123,
                                               &v242,
                                               v197,
                                               v135,
                                               (unsigned int)v193,
                                               v194)) )
                        {
                          v16 = 0;
                        }
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v226);
                        goto LABEL_381;
                      }
                      ++*(_DWORD *)(v123 + 92);
                      if ( (v16 & 4) == 0 )
                      {
                        if ( (v253 & 0x1400) != 0 )
                        {
                          v170 = bProxyDrvTextOut(
                                   a1,
                                   (struct SURFACE *)v123,
                                   (struct ESTROBJ *)&pstro,
                                   &v242,
                                   (struct _RECTL *)v64,
                                   (struct _RECTL *)v206,
                                   v197,
                                   v201,
                                   v135,
                                   (struct RFONTOBJ *)&v196,
                                   (struct PDEVOBJ *)&v202,
                                   0,
                                   &rclBkGround);
                          v148 = v197;
                          if ( !v170 )
                            v16 = 0;
                          goto LABEL_382;
                        }
                        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8080) == 0x80
                          && !*(_DWORD *)(v196 + 92) )
                        {
                          v218 = (unsigned __int16 *)ghsemPrintKView;
                          GreAcquireSemaphore(ghsemPrintKView);
                          for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                          {
                            if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v196 + 128) + 80LL) )
                              ++*(_DWORD *)(i + 12);
                          }
                          SEMOBJ::vUnlock((SEMOBJ *)&v218);
                        }
                        v194 = 3341;
                        v193 = v135;
                        v192 = (struct _POINTL *)v201;
                        v191 = v206;
                        if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, ERECTL *))v158)(
                                v123 + 24,
                                &pstro,
                                v196,
                                &v242,
                                v64) )
                          v16 = 0;
                        v165 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
                        if ( (*(_DWORD *)(v165 + 40) & 0x8080) == 0x80 && !*(_DWORD *)(v196 + 92) )
                        {
                          v219 = (int *)ghsemPrintKView;
                          GreAcquireSemaphore(ghsemPrintKView);
                          for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                          {
                            if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v196 + 128) + 80LL) )
                            {
                              v173 = *(_DWORD *)(j + 12);
                              if ( v173 )
                                *(_DWORD *)(j + 12) = v173 - 1;
                            }
                          }
                          SEMOBJ::vUnlock((SEMOBJ *)&v219);
                        }
LABEL_381:
                        v148 = v197;
                        goto LABEL_382;
                      }
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v234);
                      if ( !v235
                        || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v234) )
                      {
                        goto LABEL_355;
                      }
                      if ( (v253 & 0x1400) != 0 )
                      {
                        if ( !(unsigned int)bProxyDrvTextOut(
                                              a1,
                                              (struct SURFACE *)v123,
                                              (struct ESTROBJ *)&pstro,
                                              &v242,
                                              (struct _RECTL *)v64,
                                              (struct _RECTL *)v206,
                                              v197,
                                              v201,
                                              v135,
                                              (struct RFONTOBJ *)&v196,
                                              0LL,
                                              0,
                                              &rclBkGround) )
                        {
LABEL_355:
                          v148 = v197;
LABEL_356:
                          v16 = 0;
LABEL_357:
                          v16 &= ~4u;
                          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v234);
LABEL_382:
                          *(_QWORD *)(v123 + 104) = 0LL;
                          v174 = KeGetCurrentThread();
                          if ( !(unsigned int)IsThreadCrossSessionAttached(v165, v164, v166, v167) )
                          {
                            v175 = (__int64 *)PsGetThreadWin32Thread(v174);
                            if ( v175 )
                            {
                              v176 = *v175;
                              if ( v176 )
                                *(_QWORD *)(v176 + 304) = 0LL;
                            }
                          }
                          goto LABEL_386;
                        }
                      }
                      else
                      {
                        v194 = 3341;
                        v193 = v135;
                        v192 = (struct _POINTL *)v201;
                        v191 = v206;
                        if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, ERECTL *))v158)(
                                v123 + 24,
                                &pstro,
                                v196,
                                &v242,
                                v64) )
                          goto LABEL_355;
                      }
                      v148 = v197;
                      if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                           &v234,
                                           a1,
                                           (struct RFONTOBJ *)&v196,
                                           (struct PDEVOBJ *)&v202,
                                           (struct SURFACE *)v123,
                                           &v242,
                                           v197,
                                           v135,
                                           (unsigned int)v193,
                                           v194) )
                        goto LABEL_357;
                      goto LABEL_356;
                    }
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                    if ( v229 )
                    {
                      if ( (v16 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v144, &v255, v145) )
                        v16 = 0;
                      if ( (v16 & 0x10) != 0
                        && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v144, &v262, v145) )
                      {
                        v16 = 0;
                      }
                      if ( (v16 & 0x12) != 0
                        && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                            &ppo,
                                            a1,
                                            (struct RFONTOBJ *)&v196,
                                            (struct PDEVOBJ *)&v202,
                                            (struct SURFACE *)v123,
                                            &v242,
                                            v134,
                                            v135,
                                            (unsigned int)v193,
                                            v194) )
                      {
                        v16 = 0;
                      }
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                  }
                  flXlate = (unsigned int)rclBkGround.left;
                  v142 = (unsigned int)rclBkGround.top;
                  cEntries = (unsigned int)rclBkGround.right;
                  v143 = rclBkGround.bottom;
                  goto LABEL_276;
                }
LABEL_140:
                v16 |= 1u;
                goto LABEL_141;
              }
LABEL_136:
              if ( p_rclBkGround->left >= p_rclBkGround->right || p_rclBkGround->top >= p_rclBkGround->bottom )
                goto LABEL_141;
              goto LABEL_140;
            }
LABEL_154:
            v16 = 0;
            goto LABEL_155;
          }
        }
        rclBkGround = v239;
      }
      LODWORD(v27) = (_DWORD)v201;
      LOBYTE(v18) = v199;
      goto LABEL_78;
    }
  }
  v16 = 0;
LABEL_422:
  LOBYTE(v11) = v16 != 0;
  return v11;
}
