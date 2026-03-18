/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AF610
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00A59CC (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00AF1F0 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GrePolyTextOutW @ 0x1C00BFF88 (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C0125908 (GreExtTextOutWInternal.c)
 * Callees:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0007BE4 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00080E0 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A1AC4 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00A417C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A6F14 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C00B2F0C (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00B3110 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E0D14 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00F8648 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C00F9478 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00FDDA0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014A204 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C014A240 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0282D94 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0282EF4 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02B4164 (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C02B41DC (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1C02B4398 (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B5D80 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B6174 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B6398 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
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
  __int64 *ThreadWin32Thread; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  BOOL (__stdcall *v157)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rbx
  int v158; // ecx
  __int64 v159; // rax
  bool v160; // zf
  __int64 *v161; // rax
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  struct XDCOBJ *v166; // r8
  int v167; // eax
  int v168; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v171; // eax
  struct _KTHREAD *v172; // rbx
  __int64 *v173; // rax
  __int64 v174; // rax
  ERECTL *v175; // rcx
  RECTL v176; // xmm6
  __int64 v177; // rcx
  struct _SURFOBJ *v178; // r8
  LONG *v179; // rbx
  LONG v180; // edx
  struct _SURFOBJ *v181; // r9
  LONG v182; // eax
  LONG v183; // ecx
  LONG v184; // eax
  LONG v185; // ecx
  LONG v186; // eax
  __int64 v187; // rcx
  struct _CLIPOBJ *v188; // [rsp+20h] [rbp-F0h]
  struct _XLATEOBJ *v189; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v190; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v191; // [rsp+40h] [rbp-D0h]
  unsigned int v192; // [rsp+48h] [rbp-C8h]
  unsigned int v193; // [rsp+58h] [rbp-B8h]
  __int64 v194; // [rsp+90h] [rbp-80h] BYREF
  struct _BRUSHOBJ *v195; // [rsp+98h] [rbp-78h]
  unsigned int v196[2]; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v197; // [rsp+A8h] [rbp-68h] BYREF
  unsigned int v198; // [rsp+ACh] [rbp-64h] BYREF
  struct _BRUSHOBJ *v199; // [rsp+B0h] [rbp-60h]
  __int64 v200; // [rsp+B8h] [rbp-58h] BYREF
  ERECTL *v201; // [rsp+C0h] [rbp-50h]
  int v202; // [rsp+C8h] [rbp-48h] BYREF
  unsigned int v203; // [rsp+CCh] [rbp-44h] BYREF
  struct _XLATEOBJ *v204; // [rsp+D0h] [rbp-40h]
  int v205[2]; // [rsp+D8h] [rbp-38h] BYREF
  int v206[4]; // [rsp+E0h] [rbp-30h] BYREF
  struct _SURFOBJ *v207[2]; // [rsp+F0h] [rbp-20h] BYREF
  int v208; // [rsp+100h] [rbp-10h]
  SURFACE *v209; // [rsp+108h] [rbp-8h] BYREF
  _DWORD *v210; // [rsp+110h] [rbp+0h] BYREF
  int v211; // [rsp+118h] [rbp+8h]
  int v212; // [rsp+11Ch] [rbp+Ch]
  unsigned __int64 v213; // [rsp+120h] [rbp+10h] BYREF
  int v214; // [rsp+128h] [rbp+18h] BYREF
  int v215; // [rsp+12Ch] [rbp+1Ch] BYREF
  unsigned __int16 *v216; // [rsp+130h] [rbp+20h] BYREF
  int *v217; // [rsp+138h] [rbp+28h] BYREF
  _QWORD v218[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v219[2]; // [rsp+150h] [rbp+40h] BYREF
  __int64 v220; // [rsp+160h] [rbp+50h] BYREF
  int v221; // [rsp+168h] [rbp+58h]
  char v222[8]; // [rsp+170h] [rbp+60h] BYREF
  __int64 v223; // [rsp+178h] [rbp+68h]
  PATHOBJ v224; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 v225; // [rsp+1F8h] [rbp+E8h]
  PATHOBJ ppo; // [rsp+270h] [rbp+160h] BYREF
  __int64 v227; // [rsp+278h] [rbp+168h]
  PATHOBJ v228; // [rsp+2F0h] [rbp+1E0h] BYREF
  __int64 v229; // [rsp+2F8h] [rbp+1E8h]
  char v230[8]; // [rsp+370h] [rbp+260h] BYREF
  __int64 v231; // [rsp+378h] [rbp+268h]
  PATHOBJ v232; // [rsp+3F0h] [rbp+2E0h] BYREF
  __int64 v233; // [rsp+3F8h] [rbp+2E8h]
  PATHOBJ v234; // [rsp+470h] [rbp+360h] BYREF
  __int64 v235; // [rsp+478h] [rbp+368h]
  struct _RECTL rclBkGround; // [rsp+4F0h] [rbp+3E0h] BYREF
  struct _RECTL v237; // [rsp+500h] [rbp+3F0h] BYREF
  void *v238[2]; // [rsp+510h] [rbp+400h] BYREF
  struct _RECTL v239; // [rsp+520h] [rbp+410h] BYREF
  struct _CLIPOBJ v240; // [rsp+530h] [rbp+420h] BYREF
  __int64 v241; // [rsp+580h] [rbp+470h]
  int v242; // [rsp+588h] [rbp+478h]
  int v243; // [rsp+5B0h] [rbp+4A0h]
  __int64 v244; // [rsp+5C0h] [rbp+4B0h]
  STROBJ pstro; // [rsp+5D0h] [rbp+4C0h] BYREF
  __int64 v246; // [rsp+610h] [rbp+500h]
  int v247; // [rsp+620h] [rbp+510h]
  int v248; // [rsp+624h] [rbp+514h]
  int v249; // [rsp+650h] [rbp+540h]
  _BYTE v250[100]; // [rsp+654h] [rbp+544h] BYREF
  int v251; // [rsp+6B8h] [rbp+5A8h]
  __int64 v252; // [rsp+6D8h] [rbp+5C8h]
  struct _POINTL v253; // [rsp+710h] [rbp+600h] BYREF
  LONG v254; // [rsp+718h] [rbp+608h]
  LONG v255; // [rsp+71Ch] [rbp+60Ch]
  LONG v256; // [rsp+720h] [rbp+610h]
  LONG v257; // [rsp+724h] [rbp+614h]
  int v258; // [rsp+728h] [rbp+618h]
  int v259; // [rsp+72Ch] [rbp+61Ch]
  struct _POINTL v260; // [rsp+730h] [rbp+620h] BYREF

  v11 = 0;
  v12 = a5;
  v216 = a6;
  v238[0] = a10;
  v14 = 4;
  v198 = a3;
  if ( (a4 & 0x10) == 0 )
    v14 = 2;
  v203 = a2;
  v15 = *(_QWORD *)a1;
  v16 = 128;
  v196[0] = v14;
  v217 = a8;
  v208 = 0;
  if ( (*(_DWORD *)(v15 + 248) & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_9;
  if ( (*(_DWORD *)(v15 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  v205[0] = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_9:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v18 = a4 & 0xFFFFC36F;
  v197 = a4 & 0xFFFFC36F;
  if ( !a5 )
  {
    v18 = a4 & 0xFFFFC369;
LABEL_16:
    v197 = v18;
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
      LODWORD(v195) = 0;
      if ( v20 )
      {
        v202 = 0;
        v21 = 0;
        LODWORD(v201) = 0;
        LODWORD(v22) = 0;
        v23 = 0;
        LODWORD(v204) = 0;
        LODWORD(v24) = 0;
        v206[0] = 0;
        LODWORD(v25) = 0;
      }
      else
      {
        v213 = *(_QWORD *)(v19 + 8LL * (*(_DWORD *)(v19 + 40) & 1) + 1016);
        v21 = v213;
        v204 = (struct _XLATEOBJ *)HIDWORD(v213);
        v22 = HIDWORD(v213);
        v24 = HIDWORD(v213);
        v23 = v213;
        v25 = HIDWORD(v213);
        *(_QWORD *)v206 = HIDWORD(v213);
        LODWORD(v201) = HIDWORD(v213);
        v202 = v213;
      }
      v200 = (unsigned int)(16 * v22);
      v26 = *(_QWORD *)(v19 + 976);
      v27 = (struct _BRUSHOBJ *)(unsigned int)(16 * v21);
      v199 = v27;
      v211 = *(_DWORD *)(v26 + 208);
      v212 = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 108LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 976) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v210, a1, 0x204u, 0);
        LODWORD(v24) = (_DWORD)v204;
        LODWORD(v25) = v206[0];
        v28 = v210;
      }
      else
      {
        v28 = (_DWORD *)(v19 + 320);
        v210 = (_DWORD *)(v19 + 320);
      }
      v213 = 0LL;
      if ( !v12 )
        goto LABEL_78;
      v16 = 136;
      LODWORD(v209) = v18 & 2;
      v29 = (unsigned int)v28[8];
      if ( (v18 & 2) == 0 )
        v16 = 128;
      v206[0] = v16;
      if ( (v29 & 2) != 0 )
      {
        v30 = v23 + v12->left + ((v28[6] + 8) >> 4);
        v237.left = v30;
        v31 = v23 + v12->right + ((v28[6] + 8) >> 4);
        v237.right = v31;
        v32 = v24 + v12->top + ((v28[7] + 8) >> 4);
        v237.top = v32;
        bottom = v25 + v12->bottom + ((v28[7] + 8) >> 4);
        v237.bottom = bottom;
      }
      else
      {
        left = v12->left;
        if ( (v29 & 1) != 0 )
        {
          v202 = 0;
          bFToL(v29, &v202, 0LL);
          v35 = v210;
          v30 = v23 + ((v210[6] + v202 + 8) >> 4);
          v214 = 0;
          v237.left = v30;
          bFToL(v36, &v214, v37);
          LODWORD(v35) = v35[6] + v214 + 8;
          v215 = 0;
          v31 = v23 + ((int)v35 >> 4);
          v237.right = v31;
          bFToL(v38, &v215, 0LL);
          v39 = v215 + 8 + v210[7];
          LODWORD(v209) = 0;
          v32 = (_DWORD)v201 + (v39 >> 4);
          v237.top = v32;
          bFToL(v40, &v209, v41);
          bottom = (_DWORD)v201 + (((int)v209 + 8 + v210[7]) >> 4);
          v237.bottom = bottom;
        }
        else
        {
          top = v12->top;
          v253.y = v12->bottom;
          right = v12->right;
          v255 = top;
          v257 = top;
          v253.x = left;
          v254 = left;
          v256 = right;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v210, &v253, (struct _POINTFIX *)&v253, 3uLL);
          v44 = v253.x + v256 - v254;
          v45 = v253.y + v257 - v255;
          v258 = v44;
          v259 = v45;
          v46 = (v254 > v253.x) ^ (unsigned __int64)(v254 <= v256);
          v47 = *(&v253.x + 2 * v46);
          v48 = *(&v256 + 2 * v46);
          if ( v47 > v48 )
            v47 += 15;
          else
            v48 += 15;
          v30 = v202 + (v47 >> 4);
          v31 = v202 + (v48 >> 4);
          v237.right = v31;
          v237.left = v30;
          v49 = (v255 > v253.y) ^ (unsigned __int64)(v255 <= v257);
          v50 = *(&v253.y + 2 * v49);
          v51 = *(&v257 + 2 * v49);
          if ( v50 > v51 )
            v50 += 15;
          else
            v51 += 15;
          v52 = v197;
          v32 = (_DWORD)v201 + (v50 >> 4);
          bottom = (_DWORD)v201 + (v51 >> 4);
          v237.bottom = bottom;
          v237.top = v32;
          if ( (v197 & 4) != 0 )
          {
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v230);
            if ( v231 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v230, v53, &v253, v54) )
            {
              v55 = *(_QWORD *)a1;
              *(_QWORD *)&v239.left = 0LL;
              *(_QWORD *)&v239.right = 0LL;
              v239.top = 16 * (*(_DWORD *)(v55 + 1004) - (_DWORD)v201);
              v239.bottom = 16 * (*(_DWORD *)(v55 + 1012) - (_DWORD)v201);
              v221 = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v220, (struct EPATHOBJ *)v230, 1u, &v239);
              if ( v220 )
              {
                v56 = *(_QWORD *)a1;
                v213 = (unsigned __int64)a1;
                *(_QWORD *)(v56 + 1112) = v220;
                if ( (unsigned int)DC::bTightenRao(*(DC **)a1) )
                  v52 &= ~4u;
              }
              if ( v221 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v220);
            }
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v230);
            bottom = v237.bottom;
            v31 = v237.right;
            v16 = 0;
            if ( (v52 & 4) == 0 )
              v16 = v206[0];
            v57 = 0;
            v32 = v237.top;
            v30 = v237.left;
            if ( (v52 & 4) == 0 )
              v57 = a7;
            a7 = v57;
            v58 = 0;
            if ( (v52 & 4) == 0 )
              v58 = v52;
            v197 = v58;
          }
          else if ( (_DWORD)v209 )
          {
            v253.x += (int)v199;
            v253.y += v200;
            v254 += (int)v199;
            v16 = v16 & 0xFFFFFFF5 | 2;
            v256 += (int)v199;
            v255 += v200;
            v259 = v200 + v45;
            v257 += v200;
            v258 = (_DWORD)v199 + v44;
          }
        }
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 108LL) & 1) != 0 )
      {
        ++v30;
        ++v31;
        v237.left = v30;
        v237.right = v31;
      }
      if ( v30 > v31 )
      {
        v59 = v30;
        v30 = v31;
        v237.left = v31;
        v31 = v59;
        v237.right = v59;
      }
      if ( v32 > bottom )
      {
        v60 = v32;
        v237.top = bottom;
        v32 = bottom;
        v237.bottom = v60;
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
            LODWORD(v27) = (_DWORD)v199;
            rclBkGround.left = v61;
            if ( v32 < rclBkGround.top )
              v63 = v32;
            rclBkGround.top = v63;
            if ( v31 > rclBkGround.right )
              v62 = v31;
            LOBYTE(v18) = v197;
            rclBkGround.right = v62;
            if ( bottom > rclBkGround.bottom )
              rclBkGround.bottom = bottom;
LABEL_78:
            v64 = 0LL;
            v204 = 0LL;
            p_rclBkGround = 0LL;
            v194 = 0LL;
            v251 = 0;
            LODWORD(v201) = 1;
            if ( !a7 )
              goto LABEL_155;
            v66 = *(_QWORD *)a1;
            v209 = 0LL;
            v160 = (*(_DWORD *)(v66 + 36) & 0x4000) == 0;
            v206[0] = *(_DWORD *)(v66 + 248) & 1;
            if ( !v160 )
            {
              v209 = *(SURFACE **)(v66 + 496);
              SURFACE::bUnMap(v209, 0LL, (struct DC *)v66);
            }
            if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v194, a1, v206[0], v196[0]) )
              GreAcquireSemaphore(*(_QWORD *)(v194 + 504));
            if ( v209 )
              SURFACE::Map(v209);
            if ( !v194 )
            {
              LODWORD(v201) = 1;
              goto LABEL_154;
            }
            v208 = *(_DWORD *)(v194 + 88) & 2;
            if ( !v208 || (v160 = (*(_DWORD *)(v194 + 716) & 0x8000) == 0, LODWORD(v201) = 0, !v160) )
              LODWORD(v201) = 1;
            v67 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
            LODWORD(v195) = *(_DWORD *)(*(_QWORD *)a1 + 1736LL) | *(_DWORD *)(v67 + 272) & 0x11F;
            if ( ((unsigned __int8)v195 & 1) != 0 )
            {
              v68 = *(_DWORD *)(v67 + 152);
              if ( (v68 & 0x200) == 0 )
              {
                v69 = v200;
                *(_DWORD *)(v67 + 152) = v68 | 0x100;
                v70 = *(_QWORD *)a1;
                v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) + (_DWORD)v27;
                v196[0] = v71;
                v72 = *(_DWORD *)(*(_QWORD *)(v70 + 976) + 12LL) + v69;
                goto LABEL_104;
              }
              *(_DWORD *)(v67 + 152) = v68 & 0xFFFFFDFF;
              v73 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
              *(_DWORD *)(v73 + 152) |= 0x100u;
              v74 = v210;
              v75 = *(_QWORD *)a1;
              v76 = v210[8];
              if ( (v76 & 2) != 0 )
              {
                v196[0] = v210[6] + 16 * *(_DWORD *)(*(_QWORD *)(v75 + 976) + 216LL);
                v196[1] = v210[7] + 16 * *(_DWORD *)(*(_QWORD *)(v75 + 976) + 220LL);
                *(_QWORD *)(*(_QWORD *)(v75 + 976) + 8LL) = *(_QWORD *)v196;
              }
              else if ( (v76 & 1) != 0 )
              {
                v198 = 0;
                bFToL(v73, &v198, 0LL);
                v196[0] = v74[6] + v198;
                v203 = 0;
                bFToL(v196[0], &v203, v77);
                v196[1] = v74[7] + v203;
                *(_QWORD *)(*(_QWORD *)(v75 + 976) + 8LL) = *(_QWORD *)v196;
              }
              else
              {
                EXFORMOBJ::bXform(
                  (EXFORMOBJ *)&v210,
                  (struct _POINTL *)(*(_QWORD *)(v75 + 976) + 216LL),
                  (struct _POINTFIX *)v196,
                  1uLL);
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) = *(_QWORD *)v196;
              }
              goto LABEL_102;
            }
            v78 = v210;
            v79 = v210[8];
            if ( (v79 & 2) != 0 )
            {
              v71 = (_DWORD)v199 + 16 * v203 + v210[6];
              v196[0] = v71;
              v80 = 16 * v198 + v210[7];
            }
            else
            {
              if ( (v79 & 1) == 0 )
              {
                v196[0] = v203;
                v196[1] = v198;
                EXFORMOBJ::bXform((EXFORMOBJ *)&v210, (struct _POINTL *)v196, (struct _POINTFIX *)v196, 1uLL);
LABEL_102:
                v80 = v196[1];
                v71 = (_DWORD)v199 + v196[0];
                v196[0] += (unsigned int)v199;
                goto LABEL_103;
              }
              v197 = 0;
              bFToL(v67, &v197, 0LL);
              v71 = (_DWORD)v199 + v197 + v78[6];
              v206[0] = 0;
              v196[0] = v71;
              bFToL(v81, v206, v82);
              v80 = v206[0] + v78[7];
            }
LABEL_103:
            p_rclBkGround = 0LL;
            v72 = v200 + v80;
LABEL_104:
            v83 = *(_QWORD *)a1;
            v196[1] = v72;
            ESTROBJ::vInit(
              (ESTROBJ *)&pstro,
              v216,
              a7,
              a1,
              (struct RFONTOBJ *)&v194,
              (struct EXFORMOBJ *)&v210,
              v217,
              v205[0],
              *(_DWORD *)(v83 + 1740),
              *(_DWORD *)(*(_QWORD *)(v83 + 976) + 280LL),
              *(_DWORD *)(*(_QWORD *)(v83 + 976) + 284LL),
              *(_DWORD *)(*(_QWORD *)(v83 + 976) + 288LL),
              v71,
              v72,
              (unsigned int)v195,
              0LL,
              v238[0],
              a11);
            if ( (v251 & 4) != 0 )
            {
              v84 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v260, &pstro.rclBkGround);
              v85 = pstro.rclBkGround.right;
              v205[0] = v84;
              v86 = pstro.rclBkGround.left;
              if ( (*(_DWORD *)(v194 + 12) & 0x10000000) != 0 )
              {
                v86 = pstro.rclBkGround.left - 1;
                v85 = pstro.rclBkGround.right + 1;
                --pstro.rclBkGround.left;
                ++pstro.rclBkGround.right;
              }
              if ( (v251 & 0x1400) != 0 )
              {
                ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v260, v84);
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
                if ( v205[0] )
                {
                  v16 |= 0x10u;
                }
                else
                {
                  p_rclBkGround = &pstro.rclBkGround;
                  v204 = (struct _XLATEOBJ *)&pstro.rclBkGround;
                }
              }
              if ( v86 >= v85 || (v90 = 0, pstro.rclBkGround.top >= pstro.rclBkGround.bottom) )
                v90 = 1;
              if ( (v16 & 8) != 0 && v237.left <= v86 && v237.right >= v85 )
              {
                v91 = v237.bottom;
                if ( v237.top <= pstro.rclBkGround.top && v237.bottom >= pstro.rclBkGround.bottom && !v90 )
                {
                  p_rclBkGround = &v237;
                  v16 &= ~8u;
                  v204 = (struct _XLATEOBJ *)&v237;
                  goto LABEL_136;
                }
              }
              else
              {
                v91 = v237.bottom;
              }
              if ( !p_rclBkGround )
              {
                if ( v90 )
                {
LABEL_141:
                  if ( ((unsigned __int8)v195 & 0xA0) != 0 )
                  {
                    if ( v249 )
                    {
                      v64 = (ERECTL *)v250;
                      if ( !ERECTL::bEmpty((ERECTL *)v250) )
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
                    if ( v237.left > rclBkGround.left
                      || v237.right < rclBkGround.right
                      || v237.top > rclBkGround.top
                      || v91 < rclBkGround.bottom )
                    {
                      ERECTL::operator*=(&rclBkGround.left, &v237.left);
                    }
                    else
                    {
                      LOBYTE(v18) = -5;
                    }
                  }
LABEL_155:
                  if ( ((unsigned __int8)v195 & 1) != 0 )
                  {
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) += v247;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 12LL) += v248;
                  }
                  v94 = *(_QWORD *)a1;
                  if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0 )
                  {
                    v95 = 0;
                    if ( (v18 & 4) == 0 )
                      v95 = v16;
                    v16 = v95;
                    v96 = v95;
                    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v222, a1);
                    if ( !v223 )
                      goto LABEL_186;
                    if ( (v96 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v222, &v237) )
                      v16 = 0;
                    if ( (v16 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v222, v97, &v253, v99) )
                      v16 = 0;
                    if ( (v16 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v222, v97, &v260, v99) )
                      v16 = 0;
                    if ( (v16 & 1) != 0
                      && (!p_rclBkGround || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v222, p_rclBkGround)) )
                    {
                      if ( (v251 & 0x1400) != 0 )
                        v100 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)v222, v98);
                      else
                        v100 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v222);
                      if ( !v100 )
                      {
LABEL_182:
                        v16 = 0;
                        goto LABEL_183;
                      }
                      if ( v64 && !ERECTL::bEmpty(v64) )
                      {
                        while ( (unsigned int)bAddRectToPath((struct EPATHOBJ *)v222, (struct _RECTL *)v64) )
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
                      && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v222) )
                    {
                      v16 = 0;
                    }
LABEL_186:
                    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v222);
LABEL_408:
                    if ( (v251 & 0x801) != 0 )
                    {
                      if ( (v251 & 1) != 0 )
                        FreeTmpBuffer(v246);
                      if ( (v251 & 0x800) != 0 )
                        Win32FreePool(v252);
                    }
                    if ( v194 )
                    {
                      if ( (*(_DWORD *)(v194 + 712) & 0x81) != 0 )
                        RFONTOBJ::dtorHelper((RFONTOBJ *)&v194);
                      v187 = *(_QWORD *)(v194 + 616);
                      if ( v187 )
                      {
                        Win32FreePool(v187);
                        *(_QWORD *)(v194 + 624) = 0LL;
                        *(_QWORD *)(v194 + 616) = 0LL;
                      }
                      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v194 + 504));
                      GreReleaseSemaphoreInternal(*(_QWORD *)(v194 + 504));
                    }
                    if ( v213 )
                      TXTCLEANUP::vMopUp((TXTCLEANUP *)&v213);
                    goto LABEL_422;
                  }
                  if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == rclBkGround.bottom )
                    goto LABEL_408;
                  v101 = *(_DWORD *)(v94 + 36);
                  if ( (v101 & 0xE0) != 0 )
                  {
                    v102 = *(_DWORD *)(v94 + 40) & 1;
                    *(struct _RECTL *)v207 = rclBkGround;
                    v103 = *(_DWORD *)(v94 + 8 * v102 + 1016);
                    v104 = rclBkGround.left - v103;
                    LODWORD(v207[1]) = rclBkGround.right - v103;
                    v105 = *(_DWORD *)(v94 + 8 * v102 + 1020);
                    v106 = v94;
                    HIDWORD(v207[0]) = rclBkGround.top - v105;
                    HIDWORD(v207[1]) = rclBkGround.bottom - v105;
                    LODWORD(v207[0]) = v104;
                    if ( (v101 & 0x20) != 0 )
                    {
                      ERECTL::operator|=((_DWORD *)(v94 + 1064), v207);
                      v106 = *(_QWORD *)a1;
                    }
                    v94 = v106;
                    if ( (*(_DWORD *)(v106 + 36) & 0x80u) != 0 )
                    {
                      ERECTL::operator|=((_DWORD *)(v106 + 1096), v207);
                      v94 = *(_QWORD *)a1;
                    }
                  }
                  if ( v208 || (v107 = 0, (v18 & 4) != 0) )
                    v107 = 1;
                  v108 = *(_QWORD *)(v94 + 1152);
                  if ( !v108
                    || (*(_DWORD *)(v94 + 40) & 2) == 0
                    || (v160 = (unsigned int)DC::bDpiScaledSurface((DC *)v94) == 0, v109 = v108, v160) )
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
                  v241 = 0LL;
                  v242 = 0;
                  v243 = 1;
                  v244 = 0LL;
                  XCLIPOBJ::vSetup((XCLIPOBJ *)&v240, v110, (struct ERECTL *)&rclBkGround, v107);
                  rclBounds = v240.rclBounds;
                  v113 = _mm_cvtsi128_si32((__m128i)v240.rclBounds);
                  v114 = _mm_srli_si128((__m128i)v240.rclBounds, 8);
                  rclBkGround = v240.rclBounds;
                  v240.rclBounds.left = v113;
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
                    *(RECTL *)v238 = rclBounds;
                    v118 = *(_DWORD *)(v115 + 40) & 1;
                    v119 = v113 - *(_DWORD *)(v115 + 8 * v118 + 1016);
                    LODWORD(v238[0]) = v119;
                    v111 = (unsigned int)(rclBounds.right - *(_DWORD *)(v115 + 8 * v118 + 1016));
                    LODWORD(v238[1]) = rclBounds.right - *(_DWORD *)(v115 + 8 * v118 + 1016);
                    v120 = rclBounds.top - *(_DWORD *)(v115 + 8 * v118 + 1020);
                    HIDWORD(v238[0]) = v120;
                    HIDWORD(v238[1]) = rclBounds.bottom - *(_DWORD *)(v115 + 8 * v118 + 1020);
                    if ( (v117 & 0x40) != 0 )
                    {
                      v121 = *(_DWORD *)(v115 + 1080);
                      if ( v121 == *(_DWORD *)(v115 + 1088)
                        || (v122 = *(_DWORD *)(v115 + 1084), v122 == *(_DWORD *)(v115 + 1092)) )
                      {
                        *(_OWORD *)(v115 + 1080) = *(_OWORD *)v238;
                      }
                      else
                      {
                        if ( v119 < v121 )
                        {
                          *(_DWORD *)(v115 + 1080) = v119;
                          v111 = LODWORD(v238[1]);
                          v120 = HIDWORD(v238[0]);
                        }
                        if ( v120 < v122 )
                        {
                          *(_DWORD *)(v115 + 1084) = v120;
                          v111 = LODWORD(v238[1]);
                        }
                        if ( (int)v111 > *(_DWORD *)(v115 + 1088) )
                          *(_DWORD *)(v115 + 1088) = v111;
                        if ( SHIDWORD(v238[1]) > *(_DWORD *)(v115 + 1092) )
                          *(_DWORD *)(v115 + 1092) = HIDWORD(v238[1]);
                      }
                      v116 = *(_QWORD *)a1;
                      *(_QWORD *)v205 = *(_QWORD *)(*(_QWORD *)a1 + 1168LL);
                      if ( *(_QWORD *)v205 )
                      {
                        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v219);
                        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v219);
                        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v218);
                        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v218);
                        if ( v219[0] )
                        {
                          if ( v218[0] )
                          {
                            RGNOBJ::vSet((RGNOBJ *)v218, (struct _RECTL *)v238);
                            if ( RGNOBJ::bMerge(
                                   (RGNOBJ *)v219,
                                   (struct RGNOBJ *)v205,
                                   (struct RGNOBJ *)v218,
                                   BYTE2(gafjRgnOp)) )
                            {
                              RGNOBJ::vSwap((RGNOBJ *)v205, (struct RGNOBJ *)v219);
                              *(_QWORD *)(*(_QWORD *)a1 + 1168LL) = *(_QWORD *)v205;
                            }
                          }
                        }
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v218);
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v219);
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
                  v200 = *(_QWORD *)(v123 + 48);
                  iUniq = *(unsigned int *)(v126 + 72);
                  v131 = v126 + 1456;
                  v132 = *(_QWORD *)(v126 + 88);
                  v195 = (struct _BRUSHOBJ *)(v126 + 1456);
                  v199 = (struct _BRUSHOBJ *)(v126 + 1592);
                  v198 = iUniq;
                  if ( (iUniq & 0x10000000) != 0 )
                  {
                    v127 = (int)v201;
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
                      v188 = v129;
                      v134 = v199;
                      EBRUSHOBJ::vInitBrush(v199, v126, gpbrBackground, v132, v188, v123, (v198 >> 15) & 1);
                      v126 = *(_QWORD *)a1;
                    }
                    else
                    {
                      v134 = v199;
                    }
                    *(_DWORD *)(*(_QWORD *)(v126 + 976) + 152LL) &= 0xFFFFFFF3;
                    *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= 0xFFFFFFF3;
                    v128 = *(struct _POINTL **)a1;
                  }
                  else
                  {
                    v134 = v199;
                  }
                  v135 = v128 + 147;
                  if ( (v16 & 0x1A) != 0 )
                  {
                    if ( (v16 & 8) == 0 || ERECTL::bEmpty((ERECTL *)&v237) )
                    {
                      v143 = rclBkGround.bottom;
                      cEntries = (unsigned int)rclBkGround.right;
                      v142 = (unsigned int)rclBkGround.top;
                      flXlate = (unsigned int)rclBkGround.left;
                    }
                    else
                    {
                      si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                      iUniq = (unsigned int)v237.left;
                      v137 = v237.right;
                      v138 = v237.top;
                      v139 = v237.bottom;
                      flXlate = (unsigned int)_mm_cvtsi128_si32(si128);
                      cEntries = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
                      v142 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
                      if ( (int)flXlate > v237.left )
                        iUniq = (unsigned int)flXlate;
                      v143 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
                      rclBkGround.left = flXlate;
                      if ( (int)cEntries < v237.right )
                        v137 = cEntries;
                      v240.rclBounds.left = iUniq;
                      rclBkGround.right = cEntries;
                      v240.rclBounds.right = v137;
                      if ( (int)v142 > v237.top )
                        v138 = v142;
                      rclBkGround.top = v142;
                      v240.rclBounds.top = v138;
                      if ( v143 < v237.bottom )
                        v139 = v143;
                      rclBkGround.bottom = v143;
                      v205[0] = v139;
                      v240.rclBounds.bottom = v139;
                      v134 = v199;
                      if ( (int)iUniq < v137 && v138 < v205[0] )
                      {
                        ++*(_DWORD *)(v123 + 92);
                        TextOutBitBlt(
                          (struct SURFACE *)v123,
                          (struct RFONTOBJ *)&v194,
                          (struct _SURFOBJ *)cEntries,
                          (struct _SURFOBJ *)v142,
                          &v240,
                          v189,
                          &v240.rclBounds,
                          v190,
                          v191,
                          v134,
                          v135,
                          v193);
                        v143 = rclBkGround.bottom;
                        cEntries = (unsigned int)rclBkGround.right;
                        v142 = (unsigned int)rclBkGround.top;
                        flXlate = (unsigned int)rclBkGround.left;
                      }
                      v240.rclBounds = rclBkGround;
                    }
                    if ( (v16 & 0x12) == 0 )
                    {
LABEL_276:
                      if ( (v16 & 1) == 0 )
                      {
LABEL_402:
                        if ( (v16 & 4) != 0 )
                        {
                          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v234);
                          if ( !v235
                            || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v234)
                            || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                &v234,
                                                a1,
                                                (struct RFONTOBJ *)&v194,
                                                (struct PDEVOBJ *)&v200,
                                                (struct SURFACE *)v123,
                                                &v240,
                                                v195,
                                                v135,
                                                (unsigned int)v191,
                                                v192) )
                          {
                            v16 = 0;
                          }
                          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v234);
                        }
                        goto LABEL_408;
                      }
                      v201 = 0LL;
                      if ( v208 )
                      {
                        iUniq = 32LL;
                        v198 = -257;
                        v146 = 64;
                        if ( (*(_DWORD *)(v194 + 716) & 0x8000) == 0 )
                          v146 = 32;
                        v16 |= v146;
                      }
                      if ( v204 && (v198 & 0x100) == 0 )
                      {
                        iUniq = v204->iUniq;
                        v147 = *(_DWORD *)&v204->iSrcType;
                        if ( (int)flXlate > (int)iUniq )
                          iUniq = (unsigned int)flXlate;
                        flXlate = v204->flXlate;
                        v240.rclBounds.left = iUniq;
                        if ( (int)cEntries < v147 )
                          v147 = cEntries;
                        cEntries = v204->cEntries;
                        v240.rclBounds.right = v147;
                        if ( (int)v142 > (int)flXlate )
                          flXlate = (unsigned int)v142;
                        v240.rclBounds.top = flXlate;
                        if ( v143 < (int)cEntries )
                          cEntries = (unsigned int)v143;
                        v240.rclBounds.bottom = cEntries;
                        if ( (int)iUniq < v147 && (int)flXlate < (int)cEntries )
                        {
                          ++*(_DWORD *)(v123 + 92);
                          TextOutBitBlt(
                            (struct SURFACE *)v123,
                            (struct RFONTOBJ *)&v194,
                            (struct _SURFOBJ *)cEntries,
                            (struct _SURFOBJ *)v142,
                            &v240,
                            v189,
                            &v240.rclBounds,
                            v190,
                            v191,
                            v134,
                            v135,
                            v193);
                        }
                        v240.rclBounds = rclBkGround;
                        v204 = 0LL;
                      }
                      if ( v64 && *(_DWORD *)(v200 + 2140) != 4 )
                      {
                        v201 = v64;
                        v64 = 0LL;
                      }
                      if ( (v16 & 0x20) != 0 )
                      {
                        if ( (v251 & 0x1400) != 0 )
                        {
                          v148 = v195;
                          if ( !(unsigned int)bProxyDrvTextOut(
                                                a1,
                                                (struct SURFACE *)v123,
                                                (struct ESTROBJ *)&pstro,
                                                &v240,
                                                0LL,
                                                0LL,
                                                v195,
                                                v134,
                                                v135,
                                                (struct RFONTOBJ *)&v194,
                                                (struct PDEVOBJ *)&v200,
                                                *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                                &rclBkGround) )
                            v16 = 0;
                          goto LABEL_386;
                        }
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v228);
                        if ( v229 )
                        {
                          if ( (v251 & 0x1400) != 0 )
                            v150 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v228, v149);
                          else
                            v150 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v228);
                          v148 = v195;
                          if ( v150
                            && (unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                               &v228,
                                               a1,
                                               (struct RFONTOBJ *)&v194,
                                               (struct PDEVOBJ *)&v200,
                                               (struct SURFACE *)v123,
                                               &v240,
                                               v195,
                                               v135,
                                               (unsigned int)v191) )
                          {
                            goto LABEL_311;
                          }
                        }
                        else
                        {
                          v148 = v195;
                        }
                        v16 = 0;
LABEL_311:
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v228);
LABEL_386:
                        v175 = v201;
                        if ( v201 )
                        {
                          v176 = v240.rclBounds;
                          ++*(_DWORD *)(v123 + 92);
                          *(RECTL *)v207 = v176;
                          if ( !ERECTL::bEmpty(v175) )
                          {
                            v178 = (struct _SURFOBJ *)HIDWORD(v207[1]);
                            v179 = (LONG *)(v177 + 4);
                            v180 = (LONG)v207[1];
                            v181 = (struct _SURFOBJ *)HIDWORD(v207[0]);
                            v182 = (LONG)v207[0];
                            do
                            {
                              v183 = *(v179 - 1);
                              if ( v182 > v183 )
                                v183 = v182;
                              v184 = v179[1];
                              v240.rclBounds.left = v183;
                              if ( v180 < v184 )
                                v184 = v180;
                              v240.rclBounds.right = v184;
                              if ( v183 < v184 )
                              {
                                v185 = *v179;
                                v186 = v179[2];
                                if ( (int)v181 > *v179 )
                                  v185 = (int)v181;
                                v240.rclBounds.top = v185;
                                if ( (int)v178 < v186 )
                                  v186 = (int)v178;
                                v240.rclBounds.bottom = v186;
                                if ( v185 < v186 )
                                  TextOutBitBlt(
                                    (struct SURFACE *)v123,
                                    (struct RFONTOBJ *)&v194,
                                    v178,
                                    v181,
                                    &v240,
                                    v189,
                                    &v240.rclBounds,
                                    v190,
                                    v191,
                                    v148,
                                    v135,
                                    v193);
                              }
                              v179 += 4;
                              v160 = !ERECTL::bEmpty((ERECTL *)(v179 - 1));
                              v182 = (LONG)v207[0];
                            }
                            while ( v160 );
                          }
                          v240.rclBounds = v176;
                        }
                        goto LABEL_402;
                      }
                      CurrentThread = KeGetCurrentThread();
                      if ( !(unsigned int)IsThreadCrossSessionAttached(iUniq, flXlate, cEntries)
                        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
                        && (v155 = *ThreadWin32Thread) != 0 )
                      {
                        v156 = *(_QWORD *)(v155 + 304);
                      }
                      else
                      {
                        v156 = *(_QWORD *)(v123 + 104);
                      }
                      if ( v156 )
                        SURFACE::pdcoAA((SURFACE *)v123, 0LL);
                      if ( (*(_DWORD *)(v123 + 112) & 8) != 0 )
                        v157 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v123 + 48) + 2872LL);
                      else
                        v157 = EngTextOut;
                      if ( (char *)v157 == (char *)SpTextOut || (char *)v157 == (char *)BmpDevTextOut )
                      {
                        if ( (*(_DWORD *)(v194 + 12) & 0x10010000) != 0 )
                        {
                          *(_QWORD *)(v123 + 104) = a1;
                          v216 = (unsigned __int16 *)KeGetCurrentThread();
                          if ( !(unsigned int)IsThreadCrossSessionAttached(v152, EngTextOut, v153) )
                          {
                            v161 = (__int64 *)PsGetThreadWin32Thread(v216);
                            if ( v161 )
                            {
                              v162 = *v161;
                              if ( v162 )
                                *(_QWORD *)(v162 + 304) = a1;
                            }
                          }
                        }
                      }
                      else
                      {
                        v158 = *(_DWORD *)(v194 + 12);
                        if ( (v158 & 0x10000) != 0 )
                        {
                          v159 = *(_QWORD *)a1;
                          v160 = (v158 & 0x10000000) != 0
                               ? (*(_DWORD *)(v159 + 76) & 0x4000) == 0
                               : (*(_DWORD *)(v159 + 72) & 0x1000000) == 0;
                          if ( v160 )
                          {
                            if ( v157 != EngTextOut )
                              SURFACE::pdcoAA((SURFACE *)v123, a1);
                            v157 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                          }
                        }
                      }
                      if ( (v16 & 0x40) != 0 )
                      {
                        if ( (v251 & 0x1400) != 0 )
                        {
                          v148 = v195;
                          if ( !(unsigned int)bProxyDrvTextOut(
                                                a1,
                                                (struct SURFACE *)v123,
                                                (struct ESTROBJ *)&pstro,
                                                &v240,
                                                0LL,
                                                0LL,
                                                v195,
                                                v199,
                                                v135,
                                                (struct RFONTOBJ *)&v194,
                                                (struct PDEVOBJ *)&v200,
                                                *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                                &rclBkGround) )
                            v16 = 0;
                          goto LABEL_382;
                        }
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v224);
                        if ( !v225
                          || ((v251 & 0x1400) == 0
                            ? (v167 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v224))
                            : (v167 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v224, v166)),
                              !v167
                           || v224.cCurves > 1
                           && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                               &v224,
                                               a1,
                                               (struct RFONTOBJ *)&v194,
                                               (struct PDEVOBJ *)&v200,
                                               (struct SURFACE *)v123,
                                               &v240,
                                               v195,
                                               v135,
                                               (unsigned int)v191,
                                               v192)) )
                        {
                          v16 = 0;
                        }
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v224);
                        goto LABEL_381;
                      }
                      ++*(_DWORD *)(v123 + 92);
                      if ( (v16 & 4) == 0 )
                      {
                        if ( (v251 & 0x1400) != 0 )
                        {
                          v168 = bProxyDrvTextOut(
                                   a1,
                                   (struct SURFACE *)v123,
                                   (struct ESTROBJ *)&pstro,
                                   &v240,
                                   (struct _RECTL *)v64,
                                   (struct _RECTL *)v204,
                                   v195,
                                   v199,
                                   v135,
                                   (struct RFONTOBJ *)&v194,
                                   (struct PDEVOBJ *)&v200,
                                   0,
                                   &rclBkGround);
                          v148 = v195;
                          if ( !v168 )
                            v16 = 0;
                          goto LABEL_382;
                        }
                        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8080) == 0x80
                          && !*(_DWORD *)(v194 + 92) )
                        {
                          v216 = (unsigned __int16 *)ghsemPrintKView;
                          GreAcquireSemaphore(ghsemPrintKView);
                          for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                          {
                            if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v194 + 128) + 80LL) )
                              ++*(_DWORD *)(i + 12);
                          }
                          SEMOBJ::vUnlock((SEMOBJ *)&v216);
                        }
                        v192 = 3341;
                        v191 = v135;
                        v190 = (struct _POINTL *)v199;
                        v189 = v204;
                        if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, ERECTL *))v157)(
                                v123 + 24,
                                &pstro,
                                v194,
                                &v240,
                                v64) )
                          v16 = 0;
                        v164 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
                        if ( (*(_DWORD *)(v164 + 40) & 0x8080) == 0x80 && !*(_DWORD *)(v194 + 92) )
                        {
                          v217 = (int *)ghsemPrintKView;
                          GreAcquireSemaphore(ghsemPrintKView);
                          for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                          {
                            if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v194 + 128) + 80LL) )
                            {
                              v171 = *(_DWORD *)(j + 12);
                              if ( v171 )
                                *(_DWORD *)(j + 12) = v171 - 1;
                            }
                          }
                          SEMOBJ::vUnlock((SEMOBJ *)&v217);
                        }
LABEL_381:
                        v148 = v195;
                        goto LABEL_382;
                      }
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v232);
                      if ( !v233
                        || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v232) )
                      {
                        goto LABEL_355;
                      }
                      if ( (v251 & 0x1400) != 0 )
                      {
                        if ( !(unsigned int)bProxyDrvTextOut(
                                              a1,
                                              (struct SURFACE *)v123,
                                              (struct ESTROBJ *)&pstro,
                                              &v240,
                                              (struct _RECTL *)v64,
                                              (struct _RECTL *)v204,
                                              v195,
                                              v199,
                                              v135,
                                              (struct RFONTOBJ *)&v194,
                                              0LL,
                                              0,
                                              &rclBkGround) )
                        {
LABEL_355:
                          v148 = v195;
LABEL_356:
                          v16 = 0;
LABEL_357:
                          v16 &= ~4u;
                          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v232);
LABEL_382:
                          *(_QWORD *)(v123 + 104) = 0LL;
                          v172 = KeGetCurrentThread();
                          if ( !(unsigned int)IsThreadCrossSessionAttached(v164, v163, v165) )
                          {
                            v173 = (__int64 *)PsGetThreadWin32Thread(v172);
                            if ( v173 )
                            {
                              v174 = *v173;
                              if ( v174 )
                                *(_QWORD *)(v174 + 304) = 0LL;
                            }
                          }
                          goto LABEL_386;
                        }
                      }
                      else
                      {
                        v192 = 3341;
                        v191 = v135;
                        v190 = (struct _POINTL *)v199;
                        v189 = v204;
                        if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, ERECTL *))v157)(
                                v123 + 24,
                                &pstro,
                                v194,
                                &v240,
                                v64) )
                          goto LABEL_355;
                      }
                      v148 = v195;
                      if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                           &v232,
                                           a1,
                                           (struct RFONTOBJ *)&v194,
                                           (struct PDEVOBJ *)&v200,
                                           (struct SURFACE *)v123,
                                           &v240,
                                           v195,
                                           v135,
                                           (unsigned int)v191,
                                           v192) )
                        goto LABEL_357;
                      goto LABEL_356;
                    }
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                    if ( v227 )
                    {
                      if ( (v16 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v144, &v253, v145) )
                        v16 = 0;
                      if ( (v16 & 0x10) != 0
                        && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v144, &v260, v145) )
                      {
                        v16 = 0;
                      }
                      if ( (v16 & 0x12) != 0
                        && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                            &ppo,
                                            a1,
                                            (struct RFONTOBJ *)&v194,
                                            (struct PDEVOBJ *)&v200,
                                            (struct SURFACE *)v123,
                                            &v240,
                                            v134,
                                            v135,
                                            (unsigned int)v191,
                                            v192) )
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
        rclBkGround = v237;
      }
      LODWORD(v27) = (_DWORD)v199;
      LOBYTE(v18) = v197;
      goto LABEL_78;
    }
  }
  v16 = 0;
LABEL_422:
  LOBYTE(v11) = v16 != 0;
  return v11;
}
