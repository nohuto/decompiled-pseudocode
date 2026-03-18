/*
 * XREFs of NtGdiAlphaBlend @ 0x1C0095810
 * Callers:
 *     BltIcon @ 0x1C001316C (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0207838 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0017DC8 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00893D0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BC88 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C008BCB4 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00A7A4C (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0119DA0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0119DF8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C023B610 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0243E8C (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
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
        int a11)
{
  int v12; // ebx
  char v13; // di
  __int64 v14; // rdx
  DC *v15; // rcx
  __int64 v16; // rax
  DC *v17; // rdx
  int v18; // r14d
  char *v19; // rbx
  int v20; // esi
  char *v21; // rcx
  int v22; // eax
  float v23; // xmm4_4
  LONG left; // r8d
  LONG top; // r10d
  LONG right; // edx
  LONG bottom; // r9d
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rbx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // r10
  int v48; // r10d
  __int64 v49; // r12
  LONG v50; // r9d
  LONG v51; // r11d
  LONG v52; // r8d
  bool v53; // zf
  _DWORD *v54; // rax
  int v55; // ebx
  unsigned int v56; // ebx
  int v57; // ecx
  __int64 v58; // rdi
  _DWORD *v59; // rax
  __int64 v60; // r13
  __int64 v61; // rax
  int v62; // edx
  __int64 v63; // rax
  int v64; // ecx
  unsigned int v65; // r12d
  __int64 v66; // r11
  unsigned int i; // r9d
  int v68; // eax
  _DWORD *XlateObject; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // edx
  __int64 v73; // rax
  int v74; // ecx
  unsigned int v75; // r12d
  __int64 v76; // r11
  unsigned int m; // r9d
  int v78; // eax
  XLATEOBJ *v79; // rax
  XLATEOBJ *v80; // r12
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84; // edx
  __int64 v85; // rax
  int v86; // ecx
  unsigned int v87; // r13d
  __int64 v88; // r11
  unsigned int j; // r9d
  int v90; // eax
  XLATEOBJ *v91; // rax
  XLATEOBJ *v92; // r13
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // edx
  __int64 v96; // rax
  int v97; // ecx
  int v98; // eax
  __int64 v99; // rax
  unsigned int v100; // r10d
  unsigned int v101; // r8d
  int v102; // eax
  XLATEOBJ *v103; // rax
  XLATEOBJ *v104; // r14
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rax
  struct REGION *v108; // rdx
  __int64 v109; // r9
  __int64 v110; // rbx
  HDC v111; // rsi
  DC *v112; // rdx
  __int64 v113; // rdi
  BOOL (__stdcall *v114)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v115; // rdx
  __int64 cEntries; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rdi
  __int64 v121; // rdi
  int v123; // eax
  int v124; // eax
  _DWORD *v125; // rcx
  ULONG v126; // ecx
  int v127; // ebx
  int v128; // eax
  int v129; // eax
  FIX x; // r9d
  FIX v131; // r8d
  FIX y; // r10d
  FIX v133; // ebx
  int v134; // r11d
  int v135; // r9d
  int v136; // r10d
  int v137; // eax
  __int64 v138; // r9
  int v139; // eax
  int v140; // eax
  int v141; // ecx
  LONG v142; // edx
  __int64 v143; // rax
  HDC v144; // rcx
  char v145; // di
  __int64 v146; // rax
  __int64 v147; // rax
  int v148; // eax
  __int64 v149; // r8
  __int64 v150; // r10
  int v151; // eax
  __int64 v152; // r8
  __int64 v153; // r10
  _DWORD *v154; // rdx
  int v155; // ecx
  int v156; // eax
  __int64 v157; // rax
  __int64 v158; // rax
  int v159; // eax
  __int64 v160; // r8
  __int64 v161; // r10
  int v162; // eax
  __int64 v163; // r8
  __int64 v164; // r10
  XLATEOBJ *v165; // rdx
  FLONG v166; // ecx
  int v167; // eax
  __int64 v168; // rax
  __int64 v169; // rax
  int v170; // eax
  __int64 v171; // r8
  __int64 v172; // r10
  int v173; // eax
  __int64 v174; // r8
  __int64 v175; // r10
  XLATEOBJ *v176; // rdx
  FLONG flXlate; // ecx
  int v178; // eax
  __int64 v179; // rax
  __int64 v180; // rax
  int v181; // eax
  __int64 v182; // r9
  __int64 v183; // r11
  int v184; // eax
  __int64 v185; // r9
  __int64 v186; // r11
  XLATEOBJ *v187; // rdx
  FLONG v188; // ecx
  int v189; // eax
  _QWORD *v190; // rax
  int v192; // edx
  int v193; // edx
  int v194; // r11d
  ULONG v195; // ecx
  SURFOBJ *v196; // rcx
  LONG v197; // r10d
  _DWORD *v198; // rcx
  _DWORD *v199; // r11
  __int64 v200; // rdi
  _DWORD *v201; // r9
  LONG v202; // r8d
  unsigned __int64 v203; // rdx
  _DWORD *v204; // rax
  unsigned __int64 v205; // rdx
  __int64 k; // rax
  _DWORD *v207; // r9
  unsigned __int64 v208; // r8
  SURFOBJ *v209; // rdx
  SURFOBJ *v210; // rcx
  __int64 v211; // rcx
  __int64 v212; // r8
  ULONG v213; // ecx
  __int64 v214; // rcx
  int v215; // ebx
  POINTL *pptlBrushOrg; // [rsp+30h] [rbp-D0h]
  POINTFIX *pptfx; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  POINTL *pptl; // [rsp+48h] [rbp-B8h]
  ULONG iMode; // [rsp+50h] [rbp-B0h]
  int v222; // [rsp+70h] [rbp-90h]
  int v224; // [rsp+74h] [rbp-8Ch]
  int v226; // [rsp+78h] [rbp-88h]
  int v227; // [rsp+78h] [rbp-88h]
  int v228; // [rsp+78h] [rbp-88h]
  int v229; // [rsp+78h] [rbp-88h]
  int v230; // [rsp+7Ch] [rbp-84h]
  int v231; // [rsp+7Ch] [rbp-84h]
  int v232; // [rsp+7Ch] [rbp-84h]
  int v233; // [rsp+7Ch] [rbp-84h]
  int v234; // [rsp+80h] [rbp-80h]
  int v235[2]; // [rsp+80h] [rbp-80h]
  int inited; // [rsp+80h] [rbp-80h]
  int DIB; // [rsp+80h] [rbp-80h]
  __int64 v238; // [rsp+88h] [rbp-78h]
  POINTFIX v239; // [rsp+88h] [rbp-78h]
  char v240; // [rsp+90h] [rbp-70h]
  int v241; // [rsp+94h] [rbp-6Ch]
  __int16 v242; // [rsp+94h] [rbp-6Ch]
  __int16 v243; // [rsp+94h] [rbp-6Ch]
  __int16 v244; // [rsp+94h] [rbp-6Ch]
  __int16 v245; // [rsp+94h] [rbp-6Ch]
  DC *v246; // [rsp+98h] [rbp-68h] BYREF
  __int64 v247; // [rsp+A0h] [rbp-60h]
  DC *v248; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v249; // [rsp+B0h] [rbp-50h]
  int v250; // [rsp+B8h] [rbp-48h] BYREF
  int v251; // [rsp+BCh] [rbp-44h] BYREF
  __int64 v252; // [rsp+C0h] [rbp-40h]
  XLATEOBJ *v253; // [rsp+C8h] [rbp-38h] BYREF
  XLATEOBJ *v254; // [rsp+D0h] [rbp-30h] BYREF
  HDC v255; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v256; // [rsp+E0h] [rbp-20h] BYREF
  XLATEOBJ *pxlo; // [rsp+F0h] [rbp-10h]
  int v258; // [rsp+F8h] [rbp-8h]
  XLATEOBJ *v259; // [rsp+100h] [rbp+0h] BYREF
  HDC v260; // [rsp+108h] [rbp+8h]
  int v261; // [rsp+110h] [rbp+10h]
  __int64 v262; // [rsp+118h] [rbp+18h]
  HDC v263; // [rsp+120h] [rbp+20h] BYREF
  HDC v264; // [rsp+128h] [rbp+28h]
  char *v265; // [rsp+130h] [rbp+30h] BYREF
  int v266; // [rsp+138h] [rbp+38h]
  int v267; // [rsp+13Ch] [rbp+3Ch]
  __int64 v268; // [rsp+140h] [rbp+40h] BYREF
  char v269; // [rsp+148h] [rbp+48h]
  int v270; // [rsp+14Ch] [rbp+4Ch]
  __int64 v271; // [rsp+150h] [rbp+50h] BYREF
  char v272; // [rsp+158h] [rbp+58h]
  int v273; // [rsp+15Ch] [rbp+5Ch]
  POINTL pptlSrc; // [rsp+160h] [rbp+60h] BYREF
  _DWORD *v275; // [rsp+168h] [rbp+68h]
  __int64 v276; // [rsp+170h] [rbp+70h] BYREF
  char *v277; // [rsp+178h] [rbp+78h] BYREF
  int v278; // [rsp+180h] [rbp+80h]
  int v279; // [rsp+184h] [rbp+84h]
  __int64 v280; // [rsp+188h] [rbp+88h] BYREF
  __int64 v281; // [rsp+190h] [rbp+90h] BYREF
  __int64 v282; // [rsp+198h] [rbp+98h] BYREF
  __int64 v283; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v284; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v285; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v286; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v287; // [rsp+1C0h] [rbp+C0h] BYREF
  struct PALETTE *v288; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v289; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v290; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v291; // [rsp+1E0h] [rbp+E0h] BYREF
  struct PALETTE *v292; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v293; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v294; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v295; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v296[4]; // [rsp+208h] [rbp+108h] BYREF
  _QWORD v297[4]; // [rsp+228h] [rbp+128h] BYREF
  _QWORD v298[5]; // [rsp+248h] [rbp+148h] BYREF
  RECTL v299; // [rsp+270h] [rbp+170h] BYREF
  __int128 v300; // [rsp+280h] [rbp+180h]
  int v301; // [rsp+290h] [rbp+190h] BYREF
  HDC v302; // [rsp+298h] [rbp+198h]
  XLATEOBJ *v303; // [rsp+2A0h] [rbp+1A0h]
  XLATEOBJ *v304; // [rsp+2A8h] [rbp+1A8h]
  _OWORD v305[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v306; // [rsp+2D0h] [rbp+1D0h]
  __int64 v307; // [rsp+2D8h] [rbp+1D8h]
  char v308; // [rsp+2E0h] [rbp+1E0h]
  int v309; // [rsp+2E4h] [rbp+1E4h]
  __int64 v310; // [rsp+2E8h] [rbp+1E8h]
  __int64 v311; // [rsp+2F0h] [rbp+1F0h]
  int v312; // [rsp+2F8h] [rbp+1F8h]
  __int64 v313; // [rsp+300h] [rbp+200h]
  __int64 v314; // [rsp+308h] [rbp+208h]
  __int64 v315; // [rsp+310h] [rbp+210h]
  __int64 v316; // [rsp+318h] [rbp+218h]
  __int64 v317; // [rsp+320h] [rbp+220h]
  __int64 v318; // [rsp+328h] [rbp+228h]
  __int64 v319; // [rsp+330h] [rbp+230h]
  __int64 v320; // [rsp+338h] [rbp+238h]
  __int128 v321; // [rsp+340h] [rbp+240h]
  __int64 v322; // [rsp+350h] [rbp+250h]
  __int64 v323; // [rsp+360h] [rbp+260h]
  __m128i v324; // [rsp+370h] [rbp+270h] BYREF
  RECTL prclDest; // [rsp+380h] [rbp+280h] BYREF
  int v326[4]; // [rsp+390h] [rbp+290h] BYREF
  __int64 v327; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v328; // [rsp+3A8h] [rbp+2A8h]
  int v329; // [rsp+3ACh] [rbp+2ACh]
  _BYTE v330[4]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v331; // [rsp+3B4h] [rbp+2B4h]
  int v332; // [rsp+3B8h] [rbp+2B8h]
  int v333; // [rsp+3BCh] [rbp+2BCh]
  int v334; // [rsp+3C0h] [rbp+2C0h]
  __int64 v335; // [rsp+400h] [rbp+300h]
  int v336; // [rsp+408h] [rbp+308h]
  int v337; // [rsp+430h] [rbp+330h]
  __int64 v338; // [rsp+440h] [rbp+340h]
  struct _POINTFIX v339; // [rsp+450h] [rbp+350h] BYREF
  FIX v340; // [rsp+458h] [rbp+358h]
  int v341; // [rsp+45Ch] [rbp+35Ch]
  int v342; // [rsp+460h] [rbp+360h]
  FIX v343; // [rsp+464h] [rbp+364h]
  FIX v344; // [rsp+468h] [rbp+368h]
  int v345; // [rsp+46Ch] [rbp+36Ch]
  struct _POINTL v346; // [rsp+470h] [rbp+370h] BYREF
  int v347; // [rsp+478h] [rbp+378h]
  int v348; // [rsp+47Ch] [rbp+37Ch]
  int v349; // [rsp+480h] [rbp+380h]
  int v350; // [rsp+484h] [rbp+384h]
  POINTFIX v351; // [rsp+488h] [rbp+388h] BYREF
  POINTFIX v352; // [rsp+490h] [rbp+390h]
  POINTFIX v353; // [rsp+498h] [rbp+398h]

  v12 = a4;
  v260 = a6;
  v250 = a7;
  v264 = a1;
  v251 = a5;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_474;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_474:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v13 = BYTE1(a11) & 0x7F;
  v258 = BYTE1(a11) & 0x80;
  BYTE1(a11) &= ~0x80u;
  v247 = 0LL;
  v246 = (DC *)HmgLockEx(a1, 1LL);
  if ( !v246 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_250;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v246) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v246 + 3);
    v246 = 0LL;
    goto LABEL_244;
  }
  v15 = v246;
  if ( (*((_DWORD *)v246 + 132) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v246);
LABEL_250:
    v15 = v246;
  }
  if ( v15 && (*((_DWORD *)v15 + 9) & 0x10000) == 0 )
  {
    LOBYTE(v14) = 1;
    v248 = 0LL;
    v249 = 0LL;
    v16 = HmgLockEx(v260, v14);
    v248 = (DC *)v16;
    v17 = (DC *)v16;
    if ( !v16 )
    {
      if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
        PsGetWin32KFilterSet();
LABEL_19:
      if ( v248 )
      {
        bSpDwmValidateSurface((struct XDCOBJ *)&v248, v250, a8, a9, a10);
        bSpDwmValidateSurface((struct XDCOBJ *)&v246, a2, a3, v12, a5);
        v266 = *(_DWORD *)(*((_QWORD *)v246 + 10) + 68LL);
        v18 = *(_DWORD *)(*((_QWORD *)v246 + 10) + 312LL) & 1;
        v267 = v18;
        if ( (*(_DWORD *)(*((_QWORD *)v246 + 10) + 352LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v265, (struct XDCOBJ *)&v246, 0x204u, 0);
          v18 = v267;
          v19 = v265;
        }
        else
        {
          v19 = (char *)v246 + 328;
          v265 = (char *)v246 + 328;
        }
        v278 = *(_DWORD *)(*((_QWORD *)v248 + 10) + 68LL);
        v20 = *(_DWORD *)(*((_QWORD *)v248 + 10) + 312LL) & 1;
        v279 = v20;
        if ( (*(_DWORD *)(*((_QWORD *)v248 + 10) + 352LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v277, (struct XDCOBJ *)&v248, 0x204u, 0);
          v21 = v277;
          v18 = v267;
          v19 = v265;
          v20 = v279;
        }
        else
        {
          v21 = (char *)v248 + 328;
          v277 = (char *)v248 + 328;
        }
        v22 = *((_DWORD *)v21 + 8);
        if ( (v22 & 1) != 0 )
        {
          v23 = 0.0;
          if ( v20 || *(float *)v21 >= 0.0 && *((float *)v21 + 3) >= 0.0 )
          {
            left = v250;
            prclDest.left = v250;
            top = a8;
            right = a9 + v250;
            prclDest.top = a8;
            bottom = a10 + a8;
            prclDest.right = a9 + v250;
            prclDest.bottom = a10 + a8;
            if ( (v22 & 0x43) != 0x43 )
            {
              bCvtPts1(v21, &prclDest, 2LL);
              bottom = prclDest.bottom;
              right = prclDest.right;
              top = prclDest.top;
              left = prclDest.left;
            }
            if ( v20 )
            {
              ++left;
              ++right;
              prclDest.left = left;
              prclDest.right = right;
            }
            if ( left > right )
            {
              prclDest.left = right;
              prclDest.right = left;
            }
            if ( top > bottom )
            {
              prclDest.top = bottom;
              prclDest.bottom = top;
            }
            if ( (*((_DWORD *)v19 + 8) & 1) != 0 && (v18 || v23 <= *(float *)v19 && v23 <= *((float *)v19 + 3)) )
            {
              DWORD2(v256) = a2 + a4;
              HIDWORD(v256) = a3 + v251;
              *(_QWORD *)&v256 = __PAIR64__(a3, a2);
              *(_OWORD *)v326 = v256;
              v28 = *((_DWORD *)v19 + 8) & 0x43;
              v261 = 0;
              if ( (_BYTE)v28 != 67 )
                bCvtPts1(v19, v326, 2LL);
              v29 = v326[0];
              v30 = v326[2];
              if ( v18 )
              {
                v29 = v326[0] + 1;
                v30 = v326[2] + 1;
                ++v326[0];
                ++v326[2];
              }
              if ( v29 > v30 )
              {
                v128 = v29;
                v326[0] = v30;
                v29 = v30;
                v326[2] = v128;
                v30 = v128;
              }
              v31 = v326[1];
              v32 = v326[3];
              if ( v326[1] > v326[3] )
              {
                v129 = v326[1];
                v326[1] = v326[3];
                v31 = v326[3];
                v326[3] = v129;
                v32 = v129;
              }
            }
            else
            {
              v346.x = a2;
              v347 = a2 + a4;
              v346.y = a3;
              v348 = a3;
              v349 = a2;
              v350 = a3 + v251;
              v261 = 1;
              EXFORMOBJ::bXform((EXFORMOBJ *)&v265, &v346, &v339, 3uLL);
              x = v339.x;
              v131 = v340;
              if ( (*((_DWORD *)v265 + 8) & 1) != 0 )
              {
                if ( v339.x > v340 )
                {
                  x = v339.x + 16;
                  v131 = v340 + 16;
                  v342 += 16;
                  v339.x += 16;
                  v340 += 16;
                }
                y = v339.y;
                v133 = v343;
                v134 = v341;
                if ( v339.y > v343 )
                {
                  y = v339.y + 16;
                  v134 = v341 + 16;
                  v133 = v343 + 16;
                  v339.y += 16;
                  v343 += 16;
                  v341 += 16;
                }
              }
              else
              {
                v133 = v343;
                v134 = v341;
                y = v339.y;
              }
              v344 = v131 + v342 - x;
              v345 = v133 + v134 - y;
              v135 = (v131 > x) ^ (v131 <= v344);
              v136 = (v134 > y) ^ (v134 <= v345);
              v137 = v135 ^ 3;
              if ( *(&v339.x + 2 * v135) <= *(&v339.x + 2 * (v135 ^ 3LL)) )
                v137 = v135;
              v138 = v137;
              LODWORD(v256) = (*(&v339.x + 2 * v137) + 15) >> 4;
              v139 = v136 ^ 3;
              if ( *(&v339.y + 2 * v136) <= *(&v339.y + 2 * (v136 ^ 3LL)) )
                v139 = v136;
              DWORD1(v256) = (*(&v339.y + 2 * v139) + 15) >> 4;
              DWORD2(v256) = (*(&v339.x + 2 * (v138 ^ 3)) + 15) >> 4;
              HIDWORD(v256) = (*(&v339.y + 2 * (v139 ^ 3LL)) + 15) >> 4;
              *(_OWORD *)v326 = v256;
              v32 = HIDWORD(v256);
              v30 = DWORD2(v256);
              v31 = DWORD1(v256);
              v29 = v256;
            }
            if ( v29 == v30 || v31 == v32 )
            {
              v56 = 1;
              goto LABEL_215;
            }
            if ( (*((_DWORD *)v246 + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)&v246, (struct ERECTL *)v326);
            v307 = 0LL;
            memset(v305, 0, sizeof(v305));
            v321 = 0LL;
            v308 = 0;
            v309 = 0;
            v314 = 0LL;
            v316 = 0LL;
            v306 = 0LL;
            v312 = 0;
            v310 = 0LL;
            v311 = 0LL;
            v317 = 0LL;
            v320 = 0LL;
            v318 = 0LL;
            v319 = 0LL;
            v322 = 0LL;
            v313 = 0LL;
            v315 = 0LL;
            if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                  (DEVLOCKBLTOBJ *)v305,
                                  (struct XDCOBJ *)&v246,
                                  (struct XDCOBJ *)&v248,
                                  v32) )
            {
              v215 = XDCOBJ::bFullScreen((XDCOBJ *)&v248);
              v56 = XDCOBJ::bFullScreen((XDCOBJ *)&v246) | v215;
              goto LABEL_214;
            }
            v33 = *((_QWORD *)v246 + 63);
            v262 = v33;
            if ( !v33
              || (v34 = *((_QWORD *)v246 + 12),
                  v35 = *(_QWORD *)(v33 + 128),
                  v238 = v34,
                  v36 = *((_QWORD *)v248 + 63),
                  (v252 = v36) == 0) )
            {
              v56 = 1;
              goto LABEL_214;
            }
            if ( *(_DWORD *)(v36 + 656)
              && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v36 + 656) )
            {
              goto LABEL_274;
            }
            v37 = *(_DWORD *)(v36 + 112);
            if ( (v37 & 0x800) != 0 )
            {
              v140 = UserSurfaceAccessCheck(*(_QWORD *)(v36 + 648));
            }
            else
            {
              if ( (v37 & 0x10000000) == 0 )
              {
LABEL_58:
                if ( ((*(_DWORD *)(v33 + 116) & 8) != 0 || *(_QWORD *)(v33 + 224))
                  && (*(_WORD *)(v33 + 102) & 0x200) != 0 )
                {
                  goto LABEL_274;
                }
                v38 = *(_DWORD *)(v33 + 112);
                if ( (v38 & 0x800) != 0 )
                {
                  v124 = UserSurfaceAccessCheck(*(_QWORD *)(v33 + 648));
                }
                else
                {
                  if ( (v38 & 0x10000000) == 0 )
                  {
LABEL_62:
                    v240 = HIBYTE(a11) & 1;
                    if ( (a11 & 0x1000000) != 0 )
                    {
                      if ( *(_DWORD *)(v36 + 96) != 6
                        || (v39 = *(_QWORD *)(v36 + 128)) == 0
                        || (v40 = *(_DWORD *)(v39 + 24), (v40 & 8) == 0)
                        && ((v40 & 2) == 0
                         || (v125 = *(_DWORD **)(v39 + 112), *v125 != 16711680)
                         || v125[1] != 65280
                         || v125[2] != 255) )
                      {
                        v126 = 87;
LABEL_470:
                        EngSetLastError(v126);
                        v56 = 0;
                        goto LABEL_214;
                      }
                    }
                    v41 = _mm_cvtsi128_si32(*(__m128i *)v326);
                    v300 = *(_OWORD *)v326;
                    v42 = *((_DWORD *)v246 + 10) & 1;
                    v43 = *((int *)v246 + 2 * v42 + 356);
                    v326[0] = v41;
                    if ( (unsigned __int64)(v43 + v41 + 0x80000000LL) > 0xFFFFFFFF )
                      goto LABEL_469;
                    if ( (unsigned __int64)(v43 + v326[2] + 0x80000000LL) > 0xFFFFFFFF )
                      goto LABEL_469;
                    v44 = *((int *)v246 + 2 * v42 + 357);
                    if ( (unsigned __int64)(v44 + v326[1] + 0x80000000LL) > 0xFFFFFFFF
                      || (unsigned __int64)(v44 + v326[3] + 0x80000000LL) > 0xFFFFFFFF
                      || (v326[0] = v43 + v41,
                          v326[2] += *((_DWORD *)v246 + 2 * v42 + 356),
                          v326[1] += *((_DWORD *)v246 + 2 * v42 + 357),
                          v326[3] += *((_DWORD *)v246 + 2 * v42 + 357),
                          v45 = *((_DWORD *)v248 + 10) & 1,
                          v46 = *((int *)v248 + 2 * v45 + 356),
                          (unsigned __int64)(v46 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF)
                      || (unsigned __int64)(v46 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                      || (v47 = *((int *)v248 + 2 * v45 + 357),
                          (unsigned __int64)(v47 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                      || (unsigned __int64)(v47 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
                    {
LABEL_469:
                      v126 = 534;
                      goto LABEL_470;
                    }
                    v48 = v46 + prclDest.left;
                    v49 = v252;
                    prclDest.left += v46;
                    v50 = *((_DWORD *)v248 + 2 * v45 + 356) + prclDest.right;
                    prclDest.right = v50;
                    v51 = *((_DWORD *)v248 + 2 * v45 + 357) + prclDest.top;
                    prclDest.top = v51;
                    v52 = *((_DWORD *)v248 + 2 * v45 + 357) + prclDest.bottom;
                    prclDest.bottom = v52;
                    v53 = *(_WORD *)(v252 + 100) == 1;
                    v54 = *(_DWORD **)(v252 + 48);
                    v275 = v54;
                    if ( v53 && v54 && (v54[10] & 0x20000) != 0 )
                    {
                      v141 = v54[644];
                      if ( v48 < v141 )
                        goto LABEL_285;
                      v142 = v54[645];
                      if ( v51 < v142 || v50 > *(_DWORD *)(v252 + 56) + v141 || v52 > v142 + *(_DWORD *)(v252 + 60) )
                        goto LABEL_285;
                    }
                    else if ( v48 < 0 || v51 < 0 || v50 > *(_DWORD *)(v252 + 56) || v52 > *(_DWORD *)(v252 + 60) )
                    {
LABEL_285:
                      v55 = 1;
                      goto LABEL_80;
                    }
                    v55 = 0;
LABEL_80:
                    if ( v252 == v262
                      && (v299 = prclDest, ERECTL::operator*=(&v299), !(unsigned int)ERECTL::bEmpty((ERECTL *)&v299))
                      || v55 )
                    {
                      EngSetLastError(0x57u);
                      v56 = 0;
                      goto LABEL_214;
                    }
                    if ( v240 || BYTE2(a11) != 0xFF || (v13 & 1) != 0 )
                    {
                      v56 = 1;
                      v57 = 1;
                    }
                    else
                    {
                      v143 = *((_QWORD *)v246 + 10);
                      v144 = v264;
                      v145 = *(_BYTE *)(v143 + 75);
                      *(_BYTE *)(v143 + 75) = 3;
                      v56 = GreStretchBltInternal(v144, a2, a3, a4, v251, v260, v250, a8, a9, a10, 13369376, -1, 0);
                      v57 = 0;
                      *(_BYTE *)(*((_QWORD *)v246 + 10) + 75LL) = v145;
                    }
                    if ( (v57 & v56) == 0 )
                      goto LABEL_214;
                    v58 = *(_QWORD *)(v49 + 128);
                    v263 = 0LL;
                    v59 = (_DWORD *)*((_QWORD *)v248 + 10);
                    v60 = *((_QWORD *)v248 + 12);
                    v224 = v59[9];
                    v226 = v59[10];
                    v230 = v59[8];
                    if ( !v58 )
                    {
                      if ( !v35 )
                        goto LABEL_294;
                      if ( (*(_DWORD *)(v35 + 24) & 0x800) != 0 )
                      {
                        v146 = *(_QWORD *)(v34 + 80);
                        if ( !v146 || v146 == *(_QWORD *)(v34 + 72) )
                          goto LABEL_294;
                      }
                    }
                    if ( v35 || (*(_DWORD *)(v58 + 24) & 0x800) == 0 )
                      goto LABEL_88;
                    v147 = *(_QWORD *)(v34 + 80);
                    if ( !v147 )
                    {
LABEL_294:
                      v255 = (HDC)xloIdent;
                      v234 = 1;
                      goto LABEL_107;
                    }
                    if ( v147 == *(_QWORD *)(v34 + 72) )
                    {
                      v255 = (HDC)xloIdent;
                      v234 = 1;
                    }
                    else
                    {
LABEL_88:
                      if ( v58 && v35 )
                      {
                        v61 = *(_QWORD *)(v58 + 120);
                        if ( v61 == v58 )
                          v62 = *(_DWORD *)(v58 + 32);
                        else
                          v62 = *(_DWORD *)(v61 + 32);
                        v63 = *(_QWORD *)(v35 + 120);
                        if ( v63 == v35 )
                          v64 = *(_DWORD *)(v35 + 32);
                        else
                          v64 = *(_DWORD *)(v63 + 32);
                        if ( v62 == v64 )
                        {
                          v255 = (HDC)xloIdent;
                          v234 = 1;
                          goto LABEL_107;
                        }
                        v65 = *(_DWORD *)(v58 + 56);
                        v289 = v34;
                        v290 = v60;
                        v280 = v35;
                        v291 = ghsemPalette;
                        GreAcquireSemaphore(ghsemPalette);
                        v66 = *(_QWORD *)(v58 + 120);
                        for ( i = 0; i < 8; ++i )
                        {
                          if ( v66 == v58 )
                            v68 = *(_DWORD *)(v58 + 32);
                          else
                            v68 = *(_DWORD *)(v66 + 32);
                          if ( *((_DWORD *)&xlateTable + 8 * v65 + 4) == v68 )
                          {
                            v148 = XEPALOBJ::ulTime((XEPALOBJ *)&v280);
                            if ( *(_DWORD *)(v149 + v150 + 20) == v148 )
                            {
                              v151 = XEPALOBJ::ulTime((XEPALOBJ *)&v289);
                              if ( *(_DWORD *)(v152 + v153 + 28) == v151 )
                              {
                                v154 = *(_DWORD **)(v152 + v153 + 8);
                                v255 = (HDC)v154;
                                v155 = v154[19];
                                v242 = v155;
                                if ( (v155 & 0x6000) == 0 )
                                {
                                  if ( (v154[1] & 4) == 0 && (v155 & 0x100) == 0 )
                                    goto LABEL_314;
                                  if ( (v154[1] & 4) != 0 && v224 == v154[6] )
                                  {
                                    v156 = XEPALOBJ::ulTime((XEPALOBJ *)&v290);
                                    if ( *(_DWORD *)(v152 + v153 + 24) == v156 )
                                      goto LABEL_314;
                                    LOWORD(v155) = v242;
                                  }
                                  if ( (v155 & 0x100) != 0 && v226 == v154[7] && v230 == v154[8] )
                                  {
LABEL_314:
                                    _InterlockedIncrement((volatile signed __int32 *)(v152 + v153));
                                    *(_DWORD *)(v58 + 56) = v65;
                                    SEMOBJ::vUnlock((SEMOBJ *)&v291);
                                    v234 = 1;
                                    goto LABEL_107;
                                  }
                                }
                              }
                            }
                          }
                          v65 = ((_BYTE)v65 + 1) & 7;
                        }
                        if ( ghsemPalette )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                          GreReleaseSemaphoreInternal(ghsemPalette);
                        }
                      }
                      LODWORD(pptl) = 0;
                      LODWORD(prcl) = v224;
                      LODWORD(pptfx) = v230;
                      LODWORD(pptlBrushOrg) = v226;
                      XlateObject = CreateXlateObject(0LL, 0, v58, v35, v60, v34, pptlBrushOrg, pptfx, prcl, pptl);
                      v255 = (HDC)XlateObject;
                      if ( XlateObject )
                      {
                        if ( v58 && v35 && (XlateObject[19] & 0x200) == 0 )
                          EXLATEOBJ::vAddToCache(&v255, v58, v35, v60, v34);
                        v234 = 1;
                      }
                      else
                      {
                        v234 = 0;
                      }
                    }
LABEL_107:
                    v264 = v255;
                    v70 = *((_QWORD *)v248 + 10);
                    v231 = *(_DWORD *)(v70 + 32);
                    v227 = *(_DWORD *)(v70 + 40);
                    if ( (v58
                       || gppalRGB
                       && ((*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                        || (v157 = *(_QWORD *)(v60 + 80)) != 0 && v157 != *(_QWORD *)(v60 + 72)))
                      && (gppalRGB
                       || (*(_DWORD *)(v58 + 24) & 0x800) == 0
                       || (v158 = *(_QWORD *)(v60 + 80)) != 0 && v158 != *(_QWORD *)(v60 + 72)) )
                    {
                      if ( !v58 || !gppalRGB )
                      {
LABEL_124:
                        LODWORD(pptl) = 0;
                        LODWORD(prcl) = v224;
                        LODWORD(pptfx) = v231;
                        LODWORD(pptlBrushOrg) = v227;
                        v79 = (XLATEOBJ *)CreateXlateObject(
                                            0LL,
                                            0,
                                            v58,
                                            gppalRGB,
                                            v60,
                                            v60,
                                            pptlBrushOrg,
                                            pptfx,
                                            prcl,
                                            pptl);
                        pxlo = v79;
                        v80 = v79;
                        v253 = v79;
                        if ( v79 )
                        {
                          if ( v58 && gppalRGB && (v79[3].flXlate & 0x200) == 0 )
                            EXLATEOBJ::vAddToCache(&v253, v58, gppalRGB, v60, v60);
                          v81 = 1;
                        }
                        else
                        {
                          v81 = 0;
                        }
LABEL_130:
                        v222 = v234 & v81;
                        v260 = (HDC)v80;
                        v82 = *((_QWORD *)v248 + 10);
                        v232 = *(_DWORD *)(v82 + 32);
                        v228 = *(_DWORD *)(v82 + 40);
                        if ( !v35
                          && (!gppalRGB
                           || (*((_DWORD *)gppalRGB + 6) & 0x800) != 0
                           && ((v168 = *(_QWORD *)(v34 + 80)) == 0 || v168 == *(_QWORD *)(v34 + 72))) )
                        {
                          v92 = xloIdent;
                          v254 = xloIdent;
                          goto LABEL_152;
                        }
                        if ( !gppalRGB && (*(_DWORD *)(v35 + 24) & 0x800) != 0 )
                        {
                          v169 = *(_QWORD *)(v34 + 80);
                          if ( !v169 || v169 == *(_QWORD *)(v34 + 72) )
                            goto LABEL_350;
                        }
                        if ( v35 && gppalRGB )
                        {
                          v83 = *(_QWORD *)(v35 + 120);
                          if ( v83 == v35 )
                            v84 = *(_DWORD *)(v35 + 32);
                          else
                            v84 = *(_DWORD *)(v83 + 32);
                          v85 = *((_QWORD *)gppalRGB + 15);
                          if ( (struct PALETTE *)v85 == gppalRGB )
                            v86 = *((_DWORD *)gppalRGB + 8);
                          else
                            v86 = *(_DWORD *)(v85 + 32);
                          if ( v84 == v86 )
                          {
LABEL_350:
                            v92 = xloIdent;
                            v254 = xloIdent;
                            goto LABEL_152;
                          }
                          if ( gppalRGB )
                          {
                            v87 = *(_DWORD *)(v35 + 56);
                            v281 = v34;
                            v282 = v34;
                            v288 = gppalRGB;
                            v283 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v88 = *(_QWORD *)(v35 + 120);
                            for ( j = 0; j < 8; ++j )
                            {
                              if ( v88 == v35 )
                                v90 = *(_DWORD *)(v35 + 32);
                              else
                                v90 = *(_DWORD *)(v88 + 32);
                              if ( *((_DWORD *)&xlateTable + 8 * v87 + 4) == v90 )
                              {
                                v170 = XEPALOBJ::ulTime((XEPALOBJ *)&v288);
                                if ( *(_DWORD *)(v171 + v172 + 20) == v170 )
                                {
                                  v173 = XEPALOBJ::ulTime((XEPALOBJ *)&v281);
                                  if ( *(_DWORD *)(v174 + v175 + 28) == v173 )
                                  {
                                    v176 = *(XLATEOBJ **)(v174 + v175 + 8);
                                    v254 = v176;
                                    flXlate = v176[3].flXlate;
                                    v244 = flXlate;
                                    if ( (flXlate & 0x6000) == 0 )
                                    {
                                      if ( (v176->flXlate & 4) == 0 && (flXlate & 0x100) == 0 )
                                        goto LABEL_366;
                                      if ( (v176->flXlate & 4) != 0 && v224 == v176[1].iUniq )
                                      {
                                        v178 = XEPALOBJ::ulTime((XEPALOBJ *)&v282);
                                        if ( *(_DWORD *)(v174 + v175 + 24) == v178 )
                                          goto LABEL_366;
                                        LOWORD(flXlate) = v244;
                                      }
                                      if ( (flXlate & 0x100) != 0
                                        && v228 == v176[1].flXlate
                                        && v232 == *(_DWORD *)&v176[1].iSrcType )
                                      {
LABEL_366:
                                        _InterlockedIncrement((volatile signed __int32 *)(v174 + v175));
                                        *(_DWORD *)(v35 + 56) = v87;
                                        SEMOBJ::vUnlock((SEMOBJ *)&v283);
                                        v80 = v253;
                                        v92 = v254;
                                        pxlo = v253;
                                        goto LABEL_152;
                                      }
                                    }
                                  }
                                }
                              }
                              v87 = ((_BYTE)v87 + 1) & 7;
                            }
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                          }
                        }
                        LODWORD(pptl) = 0;
                        LODWORD(prcl) = v224;
                        LODWORD(pptfx) = v232;
                        LODWORD(pptlBrushOrg) = v228;
                        v91 = (XLATEOBJ *)CreateXlateObject(
                                            0LL,
                                            0,
                                            v35,
                                            gppalRGB,
                                            v34,
                                            v34,
                                            pptlBrushOrg,
                                            pptfx,
                                            prcl,
                                            pptl);
                        v254 = v91;
                        v92 = v91;
                        if ( v91 )
                        {
                          if ( v35 && gppalRGB && (v91[3].flXlate & 0x200) == 0 )
                            EXLATEOBJ::vAddToCache(&v254, v35, gppalRGB, v34, v34);
                        }
                        else
                        {
                          v222 = 0;
                        }
LABEL_152:
                        v93 = *((_QWORD *)v248 + 10);
                        v233 = *(_DWORD *)(v93 + 32);
                        v229 = *(_DWORD *)(v93 + 40);
                        if ( (gppalRGB
                           || v35
                           && ((*(_DWORD *)(v35 + 24) & 0x800) == 0
                            || (v179 = *(_QWORD *)(v34 + 80)) != 0 && v179 != *(_QWORD *)(v34 + 72)))
                          && (v35
                           || (*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                           || (v180 = *(_QWORD *)(v34 + 80)) != 0 && v180 != *(_QWORD *)(v34 + 72)) )
                        {
                          if ( !gppalRGB || !v35 )
                          {
LABEL_169:
                            LODWORD(pptl) = 0;
                            LODWORD(prcl) = v224;
                            LODWORD(pptfx) = v233;
                            LODWORD(pptlBrushOrg) = v229;
                            v103 = (XLATEOBJ *)CreateXlateObject(
                                                 0LL,
                                                 0,
                                                 (__int64)gppalRGB,
                                                 v35,
                                                 v34,
                                                 v34,
                                                 pptlBrushOrg,
                                                 pptfx,
                                                 prcl,
                                                 pptl);
                            v259 = v103;
                            v104 = v103;
                            if ( v103 )
                            {
                              if ( gppalRGB && v35 && (v103[3].flXlate & 0x200) == 0 )
                                EXLATEOBJ::vAddToCache(&v259, gppalRGB, v35, v238, v238);
                              v56 = 1;
                              v105 = 1;
                            }
                            else
                            {
                              v105 = 0;
                              v56 = 1;
                            }
LABEL_175:
                            inited = v222 & v105;
                            v106 = *((_QWORD *)v246 + 195);
                            if ( v106 && (*((_DWORD *)v246 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v246) )
                              v107 = v106;
                            else
                              v107 = *((_QWORD *)v246 + 193);
                            if ( v107 )
                            {
                              if ( !v106
                                || (*((_DWORD *)v246 + 10) & 2) == 0
                                || !(unsigned int)DC::bDpiScaledSurface(v246) )
                              {
                                v108 = (struct REGION *)*((_QWORD *)v246 + 193);
                              }
                            }
                            else
                            {
                              v108 = DC::prgnVisSnap(v246);
                            }
                            v335 = 0LL;
                            v336 = 0;
                            v337 = 1;
                            v338 = 0LL;
                            XCLIPOBJ::vSetup((XCLIPOBJ *)v330, v108, (struct ERECTL *)v326, 0);
                            if ( v331 == v333 || v332 == v334 )
                              goto LABEL_224;
                            v109 = v262;
                            *(_QWORD *)&v256 = 0LL;
                            BYTE8(v256) = 0;
                            HIDWORD(v256) = 0;
                            v110 = *(_QWORD *)(v262 + 48);
                            if ( v258 )
                            {
                              v123 = *(_DWORD *)(*((_QWORD *)v246 + 10) + 312LL);
                              if ( (v123 & 1) != 0 && (v123 & 9) != 9 )
                              {
                                memset(v296, 0, sizeof(v296));
                                HIDWORD(v296[0]) = *(_DWORD *)(v252 + 56);
                                LODWORD(v296[1]) = *(_DWORD *)(v252 + 60);
                                LODWORD(v296[0]) = *(_DWORD *)(v252 + 96);
                                v190 = *(_QWORD **)(v252 + 128);
                                LODWORD(v296[3]) = 0;
                                v296[2] = *v190;
                                SURFMEM::bCreateDIB(
                                  (SURFMEM *)&v256,
                                  (struct _DEVBITMAPINFO *)v296,
                                  0LL,
                                  0LL,
                                  0,
                                  0LL,
                                  0LL,
                                  0,
                                  1,
                                  0,
                                  0);
                                if ( !(_QWORD)v256 )
                                  goto LABEL_447;
                                v327 = 0LL;
                                v276 = 0LL;
                                v53 = (*(_DWORD *)(v252 + 112) & 0x400) == 0;
                                v328 = *(_DWORD *)(v252 + 56);
                                v329 = *(_DWORD *)(v252 + 60);
                                if ( !(v53
                                     ? ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, __int64 *, __int64 *))EngCopyBits)(
                                         v256 + 24,
                                         v252 + 24,
                                         0LL,
                                         0LL,
                                         &v327,
                                         &v276)
                                     : (*((unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))v275
                                        + 354))(
                                         v256 + 24,
                                         v252 + 24,
                                         0LL,
                                         0LL,
                                         &v327,
                                         &v276)) )
                                  goto LABEL_447;
                                v192 = *(_DWORD *)(v256 + 96);
                                if ( (unsigned int)(v192 - 1) > 5 )
                                  goto LABEL_447;
                                ((void (*)(void))(&apfnMirror)[v192])();
                                v109 = v262;
                                v252 = v256;
                              }
                            }
                            v271 = 0LL;
                            v272 = 0;
                            v273 = 0;
                            v268 = 0LL;
                            v269 = 0;
                            v270 = 0;
                            if ( !v261 )
                            {
                              v111 = v260;
                              goto LABEL_185;
                            }
                            memset(v297, 0, sizeof(v297));
                            HIDWORD(v297[0]) = v326[2] - v326[0];
                            LODWORD(v297[1]) = v326[3] - v326[1];
                            LODWORD(v297[0]) = 6;
                            LODWORD(v297[3]) = 0;
                            v297[2] = *(_QWORD *)gppalRGB;
                            v193 = SURFMEM::bCreateDIB(
                                     (SURFMEM *)&v271,
                                     (struct _DEVBITMAPINFO *)v297,
                                     0LL,
                                     0LL,
                                     0,
                                     0LL,
                                     0LL,
                                     0,
                                     1,
                                     0,
                                     0) & inited;
                            if ( v193 )
                            {
                              if ( !v240 )
                              {
                                memset(v298, 0, 0x20uLL);
                                HIDWORD(v298[0]) = prclDest.right - prclDest.left;
                                LODWORD(v298[1]) = prclDest.bottom - prclDest.top;
                                LODWORD(v298[0]) = 6;
                                LODWORD(v298[3]) = 0;
                                v298[2] = *(_QWORD *)gppalRGB;
                                DIB = SURFMEM::bCreateDIB(
                                        (SURFMEM *)&v268,
                                        (struct _DEVBITMAPINFO *)v298,
                                        0LL,
                                        0LL,
                                        0,
                                        0LL,
                                        0LL,
                                        0,
                                        1,
                                        0,
                                        0);
                                v193 = DIB;
                                if ( DIB )
                                {
                                  pptlSrc.x = prclDest.left;
                                  v258 = prclDest.top;
                                  pptlSrc.y = prclDest.top;
                                  if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
                                  {
                                    v195 = 87;
LABEL_446:
                                    EngSetLastError(v195);
                                    SURFMEM::~SURFMEM((SURFMEM *)&v268);
                                    SURFMEM::~SURFMEM((SURFMEM *)&v271);
LABEL_447:
                                    SURFMEM::~SURFMEM((SURFMEM *)&v256);
                                    v56 = 0;
LABEL_224:
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v259);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v254);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v253);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v263);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v255);
LABEL_214:
                                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v305);
LABEL_215:
                                    if ( v248 )
                                    {
                                      XDCOBJ::RestoreAttributes((XDCOBJ *)&v248);
                                      v251 = 0;
                                      v120 = *(_QWORD *)v248;
                                      HmgDecrementExclusiveReferenceCountEx(v248, HIDWORD(v249), &v251);
                                      if ( v251 )
                                        bDeleteDCInternalEx(v120, 0LL);
                                    }
                                    goto LABEL_218;
                                  }
                                  if ( prclDest.right > prclDest.left
                                    && prclDest.bottom > prclDest.top
                                    && v194 <= *(_DWORD *)(v252 + 56)
                                    && v258 <= *(_DWORD *)(v252 + 60) )
                                  {
                                    v196 = 0LL;
                                    if ( v268 )
                                      v196 = (SURFOBJ *)(v268 + 24);
                                    EngCopyBits(v196, (SURFOBJ *)(v252 + 24), 0LL, pxlo, &prclDest, &pptlSrc);
                                  }
                                  v197 = 0;
                                  v252 = v268;
                                  v198 = *(_DWORD **)(v268 + 80);
                                  v199 = (_DWORD *)((char *)v198 + *(_DWORD *)(v268 + 60) * *(_DWORD *)(v268 + 88));
                                  if ( v198 != v199 )
                                  {
                                    v200 = v268;
                                    do
                                    {
                                      if ( v197 >= prclDest.top && v197 < prclDest.bottom )
                                      {
                                        v201 = v198;
                                        v202 = 0;
                                        v203 = *(int *)(v200 + 56);
                                        v204 = &v198[v203];
                                        v205 = (v203 * 4) >> 2;
                                        if ( v198 > v204 )
                                          v205 = 0LL;
                                        if ( v205 )
                                        {
                                          for ( k = 0LL; k != v205; ++k )
                                          {
                                            if ( v202 >= prclDest.left && v202 < prclDest.right )
                                              *v201 |= 0xFF000000;
                                            ++v202;
                                            ++v201;
                                          }
                                          v200 = v268;
                                        }
                                      }
                                      ++v197;
                                      v198 = (_DWORD *)((char *)v198 + *(int *)(v200 + 88));
                                    }
                                    while ( v198 != v199 );
                                    v252 = v200;
                                  }
                                  HIBYTE(a11) |= 1u;
                                  v193 = DIB;
                                  v260 = (HDC)xloIdent;
                                }
                              }
                              v207 = *(_DWORD **)(v271 + 72);
                              v208 = (unsigned __int64)*(unsigned int *)(v271 + 64) >> 2;
                              if ( v208 )
                              {
                                if ( ((unsigned __int8)v207 & 4) == 0 )
                                  goto LABEL_442;
                                *v207 = 0;
                                if ( --v208 )
                                {
                                  ++v207;
LABEL_442:
                                  memset(v207, 0, 8 * (v208 >> 1));
                                  if ( (v208 & 1) != 0 )
                                    v207[v208 - 1] = 0;
                                }
                              }
                            }
                            if ( v193 )
                            {
                              `vector constructor iterator'(&v351, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                              v239.x = v339.x - 16 * v300;
                              v239.y = v339.y - 16 * DWORD1(v300);
                              v351 = v239;
                              v239.x = v340 - 16 * v300;
                              v239.y = v341 - 16 * DWORD1(v300);
                              v352 = v239;
                              v209 = 0LL;
                              v239.x = v342 - 16 * v300;
                              v239.y = v343 - 16 * DWORD1(v300);
                              v353 = v239;
                              if ( v252 )
                                v209 = (SURFOBJ *)(v252 + 24);
                              if ( v271 )
                                v210 = (SURFOBJ *)(v271 + 24);
                              else
                                v210 = 0LL;
                              EngPlgBlt(v210, v209, 0LL, 0LL, (XLATEOBJ *)v260, 0LL, 0LL, &v351, &prclDest, 0LL, 3u);
                              iMode = 0;
                              v323 = 0LL;
                              v211 = *((_QWORD *)v248 + 10);
                              LODWORD(pptl) = v224;
                              LODWORD(prcl) = *(_DWORD *)(v211 + 32);
                              LODWORD(pptfx) = *(_DWORD *)(v211 + 40);
                              v111 = (HDC)xloIdent;
                              inited = EXLATEOBJ::bInitXlateObj(&v263, 0LL, 0LL);
                              v264 = v263;
                              v252 = v271;
                              prclDest.right = v326[2] - v326[0];
                              prclDest.bottom = v326[3] - v326[1];
                              *(_QWORD *)&prclDest.left = 0LL;
                              `vector destructor iterator'(&v351, 8uLL, 3uLL, Scale_None);
                              v109 = v262;
                              v80 = pxlo;
LABEL_185:
                              if ( inited )
                              {
                                ++*(_DWORD *)(v109 + 92);
                                v112 = v246;
                                v113 = *((_QWORD *)v246 + 6);
                                if ( v113 == *((_QWORD *)v248 + 6)
                                  || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v246)
                                  && *(_QWORD *)(v113 + 3512) == v212 )
                                {
                                  if ( (*((_DWORD *)v112 + 9) & 0xE0) != 0 )
                                  {
                                    v324 = *(__m128i *)v326;
                                    XDCOBJ::vAccumulateTight((struct _RECTL **)&v246, v112, &v324);
                                    v109 = v262;
                                  }
                                  v301 = a11;
                                  v302 = v111;
                                  v303 = v92;
                                  v304 = v104;
                                  if ( v326[2] - v326[0] == prclDest.right - prclDest.left
                                    && v326[3] - v326[1] == prclDest.bottom - prclDest.top )
                                  {
                                    BYTE1(v301) = BYTE1(a11) & 0xFE;
                                  }
                                  if ( (*(_DWORD *)(v109 + 112) & 0x10000) != 0 )
                                    v114 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v110 + 3248);
                                  else
                                    v114 = EngAlphaBlend;
                                  if ( v252 )
                                    v115 = v252 + 24;
                                  else
                                    v115 = 0LL;
                                  v56 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, int *, RECTL *, int *, _DWORD, _DWORD, _DWORD, ULONG))v114)(
                                          v109 + 24,
                                          v115,
                                          v330,
                                          v264,
                                          v326,
                                          &prclDest,
                                          &v301,
                                          (_DWORD)pptfx,
                                          (_DWORD)prcl,
                                          (_DWORD)pptl,
                                          iMode);
                                  goto LABEL_197;
                                }
                                v213 = 87;
                              }
                              else
                              {
                                v213 = 6;
                              }
                              EngSetLastError(v213);
                              v56 = 0;
LABEL_197:
                              SURFMEM::~SURFMEM((SURFMEM *)&v268);
                              SURFMEM::~SURFMEM((SURFMEM *)&v271);
                              SURFMEM::~SURFMEM((SURFMEM *)&v256);
                              if ( v104 )
                              {
                                cEntries = (int)v104[1].cEntries;
                                if ( (int)cEntries >= 0 )
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                                  v80 = v253;
                                  v92 = v254;
                                }
                                else if ( (_DWORD)cEntries == -1 )
                                {
                                  FreeThreadBufferWithTag(v104);
                                }
                              }
                              if ( v92 )
                              {
                                v117 = (int)v92[1].cEntries;
                                if ( (int)v117 >= 0 )
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v117);
                                  v80 = v253;
                                }
                                else if ( (_DWORD)v117 == -1 )
                                {
                                  FreeThreadBufferWithTag(v92);
                                }
                              }
                              if ( v80 )
                              {
                                v118 = (int)v80[1].cEntries;
                                if ( (int)v118 >= 0 )
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v118);
                                }
                                else if ( (_DWORD)v118 == -1 )
                                {
                                  FreeThreadBufferWithTag(v80);
                                }
                              }
                              if ( v263 )
                              {
                                v214 = *((int *)v263 + 9);
                                if ( (int)v214 < 0 )
                                {
                                  if ( (_DWORD)v214 == -1 )
                                    FreeThreadBufferWithTag(v263);
                                }
                                else
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v214);
                                }
                              }
                              if ( v255 )
                              {
                                v119 = *((int *)v255 + 9);
                                if ( (int)v119 >= 0 )
                                {
                                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v119);
                                }
                                else if ( (_DWORD)v119 == -1 )
                                {
                                  FreeThreadBufferWithTag(v255);
                                }
                              }
                              goto LABEL_214;
                            }
                            v195 = 8;
                            goto LABEL_446;
                          }
                          v94 = *((_QWORD *)gppalRGB + 15);
                          if ( (struct PALETTE *)v94 == gppalRGB )
                            v95 = *((_DWORD *)gppalRGB + 8);
                          else
                            v95 = *(_DWORD *)(v94 + 32);
                          v96 = *(_QWORD *)(v35 + 120);
                          if ( v96 == v35 )
                            v97 = *(_DWORD *)(v35 + 32);
                          else
                            v97 = *(_DWORD *)(v96 + 32);
                          if ( v95 != v97 )
                          {
                            v98 = *((_DWORD *)gppalRGB + 14);
                            v285 = v34;
                            v286 = v34;
                            v284 = v35;
                            v241 = v98;
                            v287 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v99 = *((_QWORD *)gppalRGB + 15);
                            v100 = 0;
                            v101 = v241;
                            for ( *(_QWORD *)v235 = v99; ; v99 = *(_QWORD *)v235 )
                            {
                              if ( (struct PALETTE *)v99 == gppalRGB )
                                v102 = *((_DWORD *)gppalRGB + 8);
                              else
                                v102 = *(_DWORD *)(v99 + 32);
                              if ( *((_DWORD *)&xlateTable + 8 * v101 + 4) == v102 )
                              {
                                v181 = XEPALOBJ::ulTime((XEPALOBJ *)&v284);
                                if ( *(_DWORD *)(v182 + v183 + 20) == v181 )
                                {
                                  v184 = XEPALOBJ::ulTime((XEPALOBJ *)&v285);
                                  if ( *(_DWORD *)(v185 + v186 + 28) == v184 )
                                  {
                                    v187 = *(XLATEOBJ **)(v185 + v186 + 8);
                                    v259 = v187;
                                    v188 = v187[3].flXlate;
                                    v245 = v188;
                                    if ( (v188 & 0x6000) == 0 )
                                    {
                                      if ( (v187->flXlate & 4) == 0 && (v188 & 0x100) == 0 )
                                        goto LABEL_373;
                                      if ( (v187->flXlate & 4) != 0 && v224 == v187[1].iUniq )
                                      {
                                        v189 = XEPALOBJ::ulTime((XEPALOBJ *)&v286);
                                        if ( *(_DWORD *)(v185 + v186 + 24) == v189 )
                                          goto LABEL_373;
                                        LOWORD(v188) = v245;
                                      }
                                      if ( (v188 & 0x100) != 0
                                        && v229 == v187[1].flXlate
                                        && v233 == *(_DWORD *)&v187[1].iSrcType )
                                      {
LABEL_373:
                                        _InterlockedIncrement((volatile signed __int32 *)(v185 + v186));
                                        *((_DWORD *)gppalRGB + 14) = v101;
                                        SEMOBJ::vUnlock((SEMOBJ *)&v287);
                                        v80 = v253;
                                        v92 = v254;
                                        v104 = v259;
                                        pxlo = v253;
                                        goto LABEL_374;
                                      }
                                    }
                                  }
                                }
                              }
                              ++v100;
                              v101 = ((_BYTE)v101 + 1) & 7;
                              if ( v100 >= 8 )
                                break;
                            }
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                            goto LABEL_169;
                          }
                        }
                        v104 = xloIdent;
                        v259 = xloIdent;
LABEL_374:
                        v56 = 1;
                        v105 = 1;
                        goto LABEL_175;
                      }
                      v71 = *(_QWORD *)(v58 + 120);
                      if ( v71 == v58 )
                        v72 = *(_DWORD *)(v58 + 32);
                      else
                        v72 = *(_DWORD *)(v71 + 32);
                      v73 = *((_QWORD *)gppalRGB + 15);
                      if ( (struct PALETTE *)v73 == gppalRGB )
                        v74 = *((_DWORD *)gppalRGB + 8);
                      else
                        v74 = *(_DWORD *)(v73 + 32);
                      if ( v72 != v74 )
                      {
                        if ( gppalRGB )
                        {
                          v75 = *(_DWORD *)(v58 + 56);
                          v293 = v60;
                          v294 = v60;
                          v292 = gppalRGB;
                          v295 = ghsemPalette;
                          GreAcquireSemaphore(ghsemPalette);
                          v76 = *(_QWORD *)(v58 + 120);
                          for ( m = 0; m < 8; ++m )
                          {
                            if ( v76 == v58 )
                              v78 = *(_DWORD *)(v58 + 32);
                            else
                              v78 = *(_DWORD *)(v76 + 32);
                            if ( *((_DWORD *)&xlateTable + 8 * v75 + 4) == v78 )
                            {
                              v159 = XEPALOBJ::ulTime((XEPALOBJ *)&v292);
                              if ( *(_DWORD *)(v160 + v161 + 20) == v159 )
                              {
                                v162 = XEPALOBJ::ulTime((XEPALOBJ *)&v293);
                                if ( *(_DWORD *)(v163 + v164 + 28) == v162 )
                                {
                                  v165 = *(XLATEOBJ **)(v163 + v164 + 8);
                                  v253 = v165;
                                  v166 = v165[3].flXlate;
                                  v243 = v166;
                                  if ( (v166 & 0x6000) == 0 )
                                  {
                                    if ( (v165->flXlate & 4) == 0 && (v166 & 0x100) == 0 )
                                      goto LABEL_340;
                                    if ( (v165->flXlate & 4) != 0 && v224 == v165[1].iUniq )
                                    {
                                      v167 = XEPALOBJ::ulTime((XEPALOBJ *)&v294);
                                      if ( *(_DWORD *)(v163 + v164 + 24) == v167 )
                                        goto LABEL_340;
                                      LOWORD(v166) = v243;
                                    }
                                    if ( (v166 & 0x100) != 0
                                      && v227 == v165[1].flXlate
                                      && v231 == *(_DWORD *)&v165[1].iSrcType )
                                    {
LABEL_340:
                                      _InterlockedIncrement((volatile signed __int32 *)(v163 + v164));
                                      *(_DWORD *)(v58 + 56) = v75;
                                      SEMOBJ::vUnlock((SEMOBJ *)&v295);
                                      v80 = v253;
                                      v81 = 1;
                                      pxlo = v253;
                                      goto LABEL_130;
                                    }
                                  }
                                }
                              }
                            }
                            v75 = ((_BYTE)v75 + 1) & 7;
                          }
                          if ( ghsemPalette )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                            GreReleaseSemaphoreInternal(ghsemPalette);
                          }
                        }
                        goto LABEL_124;
                      }
                    }
                    v80 = xloIdent;
                    v81 = 1;
                    pxlo = xloIdent;
                    v253 = xloIdent;
                    goto LABEL_130;
                  }
                  v124 = UserScreenAccessCheck(512LL);
                }
                if ( v124 )
                  goto LABEL_62;
LABEL_274:
                EngSetLastError(6u);
                v56 = 0;
                goto LABEL_214;
              }
              v140 = ((__int64 (*)(void))UserScreenAccessCheck)();
            }
            if ( !v140 )
              goto LABEL_274;
            goto LABEL_58;
          }
        }
      }
LABEL_256:
      v56 = 0;
      EngSetLastError(0x57u);
      goto LABEL_215;
    }
    if ( !HIDWORD(v249) )
      goto LABEL_16;
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 48) + 40LL) & 0x8000) != 0 )
    {
      v127 = *(_DWORD *)(v16 + 2504);
      if ( v127 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v12 = a4;
LABEL_16:
        if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v248) )
        {
          if ( (*((_DWORD *)v248 + 132) & 4) != 0 )
            DC::vMarkTransformDirty(v248);
          goto LABEL_19;
        }
        _InterlockedDecrement((volatile signed __int32 *)v248 + 3);
LABEL_255:
        v248 = 0LL;
        goto LABEL_256;
      }
      v17 = v248;
    }
    _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
    goto LABEL_255;
  }
LABEL_244:
  EngSetLastError(6u);
  v56 = 0;
LABEL_218:
  if ( v246 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v246);
    v250 = 0;
    v121 = *(_QWORD *)v246;
    HmgDecrementExclusiveReferenceCountEx(v246, HIDWORD(v247), &v250);
    if ( v250 )
      bDeleteDCInternalEx(v121, 0LL);
  }
  return v56;
}
