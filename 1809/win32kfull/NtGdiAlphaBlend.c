/*
 * XREFs of NtGdiAlphaBlend @ 0x1C00489E0
 * Callers:
 *     BltIcon @ 0x1C006DB60 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0230A0C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C004AB70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005426C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00E3444 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00E503C (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E51A4 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C014F010 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C014F068 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01B8390 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C024FC40 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C025BFC0 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C0270A50 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        XLATEOBJ *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        POINTL a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v13; // r14d
  char v14; // di
  _DWORD *v15; // rbx
  int v16; // r12d
  char *v17; // rsi
  int v18; // r15d
  unsigned __int64 v19; // rcx
  int v20; // r8d
  float v21; // xmm4_4
  int left; // edx
  int top; // r10d
  LONG right; // eax
  LONG bottom; // r9d
  int v26; // eax
  __int32 v27; // ecx
  __int32 v28; // edx
  __int32 v29; // eax
  __int32 v30; // r8d
  __int32 v31; // r9d
  __int32 v32; // eax
  FIX x; // r9d
  FIX v34; // r8d
  FIX y; // r10d
  FIX v36; // esi
  int v37; // r11d
  int v38; // r9d
  int v39; // r10d
  int v40; // eax
  __int64 v41; // r9
  int v42; // eax
  int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  DC *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r12
  __int64 v51; // rsi
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int64 v56; // rax
  int v57; // ecx
  _DWORD *v58; // rcx
  ULONG v59; // ecx
  int v60; // r8d
  int *v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // r11
  int *v64; // rcx
  __int64 v65; // r11
  __int64 v66; // r9
  int v67; // r9d
  LONG v68; // r8d
  LONG v69; // r10d
  LONG v70; // edx
  _DWORD *v71; // rax
  int v72; // ecx
  LONG v73; // r9d
  bool v74; // cc
  int v75; // esi
  int v76; // eax
  XLATEOBJ *v77; // rcx
  __int64 v78; // rax
  char v79; // di
  __int64 v80; // rdi
  _DWORD *v81; // rax
  __int64 v82; // r15
  int v83; // ecx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rax
  int v89; // ecx
  int v90; // eax
  __int64 v91; // rax
  unsigned int v92; // r10d
  int v93; // eax
  unsigned int v94; // eax
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned int v97; // eax
  __int64 v98; // r8
  __int64 v99; // r9
  XLATEOBJ *v100; // rdx
  FLONG v101; // r11d
  unsigned int v102; // eax
  __int64 XlateObject; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  XLATEOBJ *v106; // r12
  int v107; // edi
  __int64 v108; // rax
  __int64 v109; // rax
  int v110; // edx
  __int64 v111; // rax
  int v112; // ecx
  unsigned int v113; // r12d
  XLATEOBJ *v114; // rax
  unsigned int v115; // r11d
  int v116; // eax
  unsigned int v117; // eax
  __int64 v118; // r8
  __int64 v119; // r9
  unsigned int v120; // eax
  __int64 v121; // r8
  __int64 v122; // r9
  _DWORD *v123; // rdx
  int v124; // r10d
  unsigned int v125; // eax
  __int64 v126; // rax
  int v127; // edi
  __int64 v128; // rsi
  __int64 v129; // rcx
  __int64 v130; // rax
  XLATEOBJ *v131; // r15
  __int64 v132; // rax
  __int64 v133; // rax
  int v134; // edx
  __int64 v135; // rax
  int v136; // ecx
  unsigned int v137; // r15d
  __int64 v138; // rax
  unsigned int v139; // r11d
  int v140; // eax
  unsigned int v141; // eax
  __int64 v142; // r8
  __int64 v143; // r9
  unsigned int v144; // eax
  __int64 v145; // r8
  __int64 v146; // r9
  _DWORD *v147; // rdx
  int v148; // r10d
  unsigned int v149; // eax
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rax
  XLATEOBJ *v153; // rsi
  int v154; // edi
  __int64 v155; // rax
  __int64 v156; // rax
  int v157; // edx
  __int64 v158; // rax
  int v159; // ecx
  int v160; // eax
  __int64 v161; // rax
  unsigned int v162; // r10d
  int v163; // eax
  unsigned int v164; // eax
  __int64 v165; // r8
  __int64 v166; // r9
  unsigned int v167; // eax
  __int64 v168; // r8
  __int64 v169; // r9
  XLATEOBJ *v170; // rdx
  FLONG flXlate; // r11d
  unsigned int v172; // eax
  __int64 v173; // rax
  int v174; // edi
  __int64 v175; // rdx
  __int64 v176; // rax
  struct REGION *v177; // rdx
  __int64 v178; // r13
  int v179; // eax
  _DWORD *v180; // r14
  bool v181; // zf
  int v183; // edx
  LONG v184; // edi
  int v185; // r11d
  ULONG v186; // ecx
  SURFOBJ *v187; // rcx
  LONG v188; // r10d
  _DWORD *v189; // r9
  _DWORD *v190; // r11
  __int64 v191; // r13
  _DWORD *v192; // rdx
  LONG v193; // ecx
  __int64 v194; // rdi
  unsigned __int64 v195; // r8
  _DWORD *v196; // rax
  unsigned __int64 v197; // r8
  _DWORD *v198; // r8
  unsigned __int64 v199; // rdx
  SURFOBJ *v200; // rdx
  SURFOBJ *v201; // rcx
  int inited; // eax
  __int64 v203; // r9
  DC *v204; // r8
  struct ECLIPOBJ *v205; // rdx
  struct ECLIPOBJ **v206; // rdi
  ULONG v207; // ecx
  BOOL (__stdcall *v208)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 cEntries; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rcx
  int v213; // ecx
  int v214; // r14d
  int v217; // [rsp+70h] [rbp-90h]
  int v218; // [rsp+70h] [rbp-90h]
  int v219; // [rsp+74h] [rbp-8Ch]
  int v220; // [rsp+74h] [rbp-8Ch]
  int v221; // [rsp+74h] [rbp-8Ch]
  int v222; // [rsp+74h] [rbp-8Ch]
  int v223; // [rsp+78h] [rbp-88h]
  int v224; // [rsp+7Ch] [rbp-84h]
  int v225; // [rsp+7Ch] [rbp-84h]
  int v226; // [rsp+7Ch] [rbp-84h]
  int v227; // [rsp+7Ch] [rbp-84h]
  char v228; // [rsp+80h] [rbp-80h]
  int v229[2]; // [rsp+88h] [rbp-78h] BYREF
  int v230[2]; // [rsp+90h] [rbp-70h] BYREF
  XLATEOBJ *v231; // [rsp+98h] [rbp-68h] BYREF
  __int64 v232; // [rsp+A0h] [rbp-60h]
  int DIB; // [rsp+A8h] [rbp-58h]
  __int64 i; // [rsp+B0h] [rbp-50h]
  POINTFIX v235; // [rsp+B8h] [rbp-48h]
  XLATEOBJ *v236; // [rsp+C0h] [rbp-40h] BYREF
  XLATEOBJ *pxlo; // [rsp+C8h] [rbp-38h]
  __m128i v238; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v239; // [rsp+E0h] [rbp-20h]
  POINTL pptlSrc; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v241; // [rsp+F0h] [rbp-10h]
  __int64 v242; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v243; // [rsp+100h] [rbp+0h]
  char *v244; // [rsp+108h] [rbp+8h] BYREF
  int v245; // [rsp+110h] [rbp+10h]
  int v246; // [rsp+114h] [rbp+14h]
  DC *v247[2]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v248[32]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v249; // [rsp+148h] [rbp+48h] BYREF
  char v250; // [rsp+150h] [rbp+50h]
  int v251; // [rsp+154h] [rbp+54h]
  __int64 v252; // [rsp+158h] [rbp+58h] BYREF
  char v253; // [rsp+160h] [rbp+60h]
  int v254; // [rsp+164h] [rbp+64h]
  __int64 v255; // [rsp+168h] [rbp+68h]
  _QWORD v256[2]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v257[32]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v258; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v259; // [rsp+1A8h] [rbp+A8h] BYREF
  int v260; // [rsp+1B0h] [rbp+B0h]
  int v261; // [rsp+1B4h] [rbp+B4h]
  __int64 v262; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v263; // [rsp+1C0h] [rbp+C0h]
  __int64 v264; // [rsp+1C8h] [rbp+C8h]
  __int64 v265; // [rsp+1D0h] [rbp+D0h]
  _DWORD v266[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v267; // [rsp+1E0h] [rbp+E0h]
  __int64 v268; // [rsp+1E8h] [rbp+E8h]
  __int64 v269; // [rsp+1F0h] [rbp+F0h]
  _DWORD v270[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v271; // [rsp+200h] [rbp+100h]
  __int64 v272; // [rsp+208h] [rbp+108h]
  __int64 v273; // [rsp+210h] [rbp+110h]
  __int64 v274; // [rsp+218h] [rbp+118h] BYREF
  __int64 v275; // [rsp+220h] [rbp+120h] BYREF
  __int64 v276; // [rsp+228h] [rbp+128h] BYREF
  __int64 v277; // [rsp+230h] [rbp+130h] BYREF
  __int64 v278; // [rsp+238h] [rbp+138h] BYREF
  __int64 v279; // [rsp+240h] [rbp+140h] BYREF
  _DWORD *v280; // [rsp+248h] [rbp+148h]
  __int64 v281; // [rsp+250h] [rbp+150h]
  __int64 v282; // [rsp+258h] [rbp+158h] BYREF
  __int64 v283; // [rsp+260h] [rbp+160h] BYREF
  __int64 v284; // [rsp+268h] [rbp+168h] BYREF
  struct PALETTE *v285; // [rsp+270h] [rbp+170h] BYREF
  __int64 v286; // [rsp+278h] [rbp+178h] BYREF
  __int64 v287; // [rsp+280h] [rbp+180h] BYREF
  __int64 v288; // [rsp+288h] [rbp+188h] BYREF
  struct PALETTE *v289; // [rsp+290h] [rbp+190h] BYREF
  __int64 v290; // [rsp+298h] [rbp+198h] BYREF
  __int64 v291; // [rsp+2A0h] [rbp+1A0h] BYREF
  __m128i v292; // [rsp+2B0h] [rbp+1B0h]
  int v293; // [rsp+2C0h] [rbp+1C0h] BYREF
  XLATEOBJ *v294; // [rsp+2C8h] [rbp+1C8h]
  XLATEOBJ *v295; // [rsp+2D0h] [rbp+1D0h]
  XLATEOBJ *v296; // [rsp+2D8h] [rbp+1D8h]
  RECTL v297; // [rsp+2E0h] [rbp+1E0h] BYREF
  __m128i v298; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v299; // [rsp+300h] [rbp+200h]
  _OWORD v300[2]; // [rsp+310h] [rbp+210h] BYREF
  __int64 v301; // [rsp+330h] [rbp+230h]
  __int64 v302; // [rsp+338h] [rbp+238h]
  char v303; // [rsp+340h] [rbp+240h]
  int v304; // [rsp+344h] [rbp+244h]
  int v305; // [rsp+368h] [rbp+268h]
  __int128 v306; // [rsp+370h] [rbp+270h]
  int v307; // [rsp+380h] [rbp+280h]
  __int64 v308[6]; // [rsp+388h] [rbp+288h] BYREF
  _QWORD v309[7]; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int128 v310; // [rsp+3F0h] [rbp+2F0h]
  __int64 v311; // [rsp+400h] [rbp+300h]
  __int64 v312; // [rsp+408h] [rbp+308h]
  __int64 v313; // [rsp+410h] [rbp+310h]
  __int64 v314; // [rsp+418h] [rbp+318h]
  RECTL prclDest; // [rsp+420h] [rbp+320h] BYREF
  __m128i v316; // [rsp+430h] [rbp+330h] BYREF
  __int64 v317; // [rsp+440h] [rbp+340h] BYREF
  int v318; // [rsp+448h] [rbp+348h]
  int v319; // [rsp+44Ch] [rbp+34Ch]
  _BYTE v320[4]; // [rsp+450h] [rbp+350h] BYREF
  int v321; // [rsp+454h] [rbp+354h]
  int v322; // [rsp+458h] [rbp+358h]
  int v323; // [rsp+45Ch] [rbp+35Ch]
  int v324; // [rsp+460h] [rbp+360h]
  __int64 v325; // [rsp+488h] [rbp+388h]
  __int64 v326; // [rsp+4A0h] [rbp+3A0h]
  int v327; // [rsp+4A8h] [rbp+3A8h]
  int v328; // [rsp+4D0h] [rbp+3D0h]
  __int64 v329; // [rsp+4E0h] [rbp+3E0h]
  struct _POINTFIX v330; // [rsp+4F0h] [rbp+3F0h] BYREF
  FIX v331; // [rsp+4F8h] [rbp+3F8h]
  int v332; // [rsp+4FCh] [rbp+3FCh]
  int v333; // [rsp+500h] [rbp+400h]
  FIX v334; // [rsp+504h] [rbp+404h]
  FIX v335; // [rsp+508h] [rbp+408h]
  int v336; // [rsp+50Ch] [rbp+40Ch]
  struct _POINTL v337; // [rsp+510h] [rbp+410h] BYREF
  int v338; // [rsp+518h] [rbp+418h]
  int v339; // [rsp+51Ch] [rbp+41Ch]
  int v340; // [rsp+520h] [rbp+420h]
  int v341; // [rsp+524h] [rbp+424h]
  POINTFIX pptfx; // [rsp+528h] [rbp+428h] BYREF
  POINTFIX v343; // [rsp+530h] [rbp+430h]
  POINTFIX v344; // [rsp+538h] [rbp+438h]

  v13 = 1;
  pptlSrc = a6;
  v229[0] = a7;
  pxlo = a1;
  v230[0] = a8;
  LODWORD(i) = a3;
  LODWORD(v231) = a2;
  if ( !(_BYTE)a11 && (a11 & 0xFE000000) == 0 )
  {
    if ( !a9 || !a10 )
      return 1LL;
    if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
    {
      v14 = BYTE1(a11) & 0x7F;
      v15 = 0LL;
      v235.x = BYTE1(a11) & 0x80;
      BYTE1(a11) &= ~0x80u;
      v247[0] = 0LL;
      v247[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v248);
      XDCOBJ::vLock((XDCOBJ *)v247, (HDC)pxlo);
      if ( !v247[0] || (*((_DWORD *)v247[0] + 9) & 0x10000) != 0 )
      {
        EngSetLastError(6u);
        goto LABEL_430;
      }
      v256[0] = 0LL;
      v256[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v257);
      XDCOBJ::vLock((XDCOBJ *)v256, *(HDC *)&pptlSrc);
      if ( !v256[0] )
        goto LABEL_426;
      bSpDwmValidateSurface((struct XDCOBJ *)v256, v229[0], v230[0], a9, a10);
      bSpDwmValidateSurface((struct XDCOBJ *)v247, a2, a3, a4, a5);
      v245 = *(_DWORD *)(*((_QWORD *)v247[0] + 122) + 208LL);
      v16 = *(_DWORD *)(*((_QWORD *)v247[0] + 122) + 108LL) & 1;
      v246 = v16;
      if ( (*(_DWORD *)(*((_QWORD *)v247[0] + 122) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v244, (struct XDCOBJ *)v247, 0x204u, 0);
        v16 = v246;
        v17 = v244;
      }
      else
      {
        v17 = (char *)v247[0] + 320;
        v244 = (char *)v247[0] + 320;
      }
      v260 = *(_DWORD *)(*(_QWORD *)(v256[0] + 976LL) + 208LL);
      v18 = *(_DWORD *)(*(_QWORD *)(v256[0] + 976LL) + 108LL) & 1;
      v261 = v18;
      if ( (*(_DWORD *)(*(_QWORD *)(v256[0] + 976LL) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v259, (struct XDCOBJ *)v256, 0x204u, 0);
        v19 = v259;
        v16 = v246;
        v17 = v244;
        v18 = v261;
      }
      else
      {
        v19 = v256[0] + 320LL;
        v259 = v256[0] + 320LL;
      }
      v20 = *(_DWORD *)(v19 + 32);
      if ( (v20 & 1) == 0 || (v21 = 0.0, !v18) && (*(float *)v19 < 0.0 || *(float *)(v19 + 12) < 0.0) )
      {
LABEL_426:
        v13 = 0;
        EngSetLastError(0x57u);
        goto LABEL_427;
      }
      left = v229[0];
      top = v230[0];
      right = v229[0] + a9;
      bottom = v230[0] + a10;
      prclDest.left = v229[0];
      prclDest.top = v230[0];
      prclDest.right = v229[0] + a9;
      prclDest.bottom = v230[0] + a10;
      if ( (v20 & 0x43) != 0x43 )
      {
        bCvtPts1(v19, &prclDest, 2LL);
        bottom = prclDest.bottom;
        right = prclDest.right;
        top = prclDest.top;
        left = prclDest.left;
      }
      if ( v18 )
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
      if ( (*((_DWORD *)v17 + 8) & 1) != 0 && (v16 || v21 <= *(float *)v17 && v21 <= *((float *)v17 + 3)) )
      {
        v238.m128i_i32[2] = a2 + a4;
        v238.m128i_i32[3] = i + a5;
        v238.m128i_i64[0] = __PAIR64__(i, a2);
        v316 = v238;
        v26 = *((_DWORD *)v17 + 8) & 0x43;
        DIB = 0;
        if ( (_BYTE)v26 != 67 )
          bCvtPts1((unsigned __int64)v17, &v316, 2LL);
        v27 = v316.m128i_i32[0];
        v28 = v316.m128i_i32[2];
        if ( v16 )
        {
          v27 = v316.m128i_i32[0] + 1;
          v28 = v316.m128i_i32[2] + 1;
          ++v316.m128i_i32[0];
          ++v316.m128i_i32[2];
        }
        if ( v27 > v28 )
        {
          v29 = v27;
          v316.m128i_i32[0] = v28;
          v27 = v28;
          v316.m128i_i32[2] = v29;
          v28 = v29;
        }
        v30 = v316.m128i_i32[1];
        v31 = v316.m128i_i32[3];
        if ( v316.m128i_i32[1] > v316.m128i_i32[3] )
        {
          v32 = v316.m128i_i32[1];
          v316.m128i_i32[1] = v316.m128i_i32[3];
          v30 = v316.m128i_i32[3];
          v316.m128i_i32[3] = v32;
          v31 = v32;
        }
      }
      else
      {
        DIB = 1;
        v338 = a2 + a4;
        v337.x = a2;
        v341 = i + a5;
        v337.y = i;
        v339 = i;
        v340 = a2;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v244, &v337, &v330, 3uLL);
        x = v330.x;
        v34 = v331;
        if ( (*((_DWORD *)v244 + 8) & 1) != 0 )
        {
          if ( v330.x > v331 )
          {
            x = v330.x + 16;
            v34 = v331 + 16;
            v333 += 16;
            v330.x += 16;
            v331 += 16;
          }
          y = v330.y;
          v36 = v334;
          v37 = v332;
          if ( v330.y > v334 )
          {
            y = v330.y + 16;
            v37 = v332 + 16;
            v36 = v334 + 16;
            v330.y += 16;
            v334 += 16;
            v332 += 16;
          }
        }
        else
        {
          v36 = v334;
          v37 = v332;
          y = v330.y;
        }
        v335 = v34 + v333 - x;
        v336 = v36 + v37 - y;
        v38 = (v34 > x) ^ (v34 <= v335);
        v39 = (v37 > y) ^ (v37 <= v336);
        v40 = v38 ^ 3;
        if ( *(&v330.x + 2 * v38) <= *(&v330.x + 2 * (v38 ^ 3LL)) )
          v40 = v38;
        v41 = v40;
        v238.m128i_i32[0] = (*(&v330.x + 2 * v40) + 15) >> 4;
        v42 = v39 ^ 3;
        if ( *(&v330.y + 2 * v39) <= *(&v330.y + 2 * (v39 ^ 3LL)) )
          v42 = v39;
        v238.m128i_i32[1] = (*(&v330.y + 2 * v42) + 15) >> 4;
        v238.m128i_i32[2] = (*(&v330.x + 2 * (v41 ^ 3)) + 15) >> 4;
        v238.m128i_i32[3] = (*(&v330.y + 2 * (v42 ^ 3LL)) + 15) >> 4;
        v316 = v238;
        v31 = v238.m128i_i32[3];
        v28 = v238.m128i_i32[2];
        v30 = v238.m128i_i32[1];
        v27 = v238.m128i_i32[0];
      }
      if ( v27 == v28 || v30 == v31 )
        goto LABEL_427;
      if ( (*((_DWORD *)v247[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v247, (struct ERECTL *)&v316);
      v302 = 0LL;
      v303 = 0;
      v304 = 0;
      v305 = 0;
      DCOBJ::DCOBJ((DCOBJ *)v308);
      DCOBJ::DCOBJ((DCOBJ *)v309);
      v301 = 0LL;
      memset(v300, 0, sizeof(v300));
      v306 = 0LL;
      v310 = 0LL;
      v307 = 0;
      v309[6] = 0LL;
      v311 = 0LL;
      v314 = 0LL;
      v312 = 0LL;
      v313 = 0LL;
      v308[0] = 0LL;
      v309[0] = 0LL;
      if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v300, (struct XDCOBJ *)v247, (struct XDCOBJ *)v256, v43) )
      {
        v214 = XDCOBJ::bFullScreen((XDCOBJ *)v256);
        v13 = XDCOBJ::bFullScreen((XDCOBJ *)v247) | v214;
        goto LABEL_425;
      }
      v47 = v247[0];
      v48 = *((_QWORD *)v247[0] + 62);
      v241 = v48;
      if ( !v48 )
        goto LABEL_425;
      v49 = *(_QWORD *)(v48 + 128);
      v50 = *((_QWORD *)v247[0] + 11);
      v281 = v49;
      v239 = v50;
      v51 = *(_QWORD *)(v256[0] + 496LL);
      v232 = v51;
      if ( !v51 )
        goto LABEL_425;
      if ( *(_DWORD *)(v51 + 656) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v51 + 656) )
        goto LABEL_423;
      v52 = *(_DWORD *)(v51 + 112);
      if ( (v52 & 0x800) != 0 )
      {
        v53 = UserSurfaceAccessCheck(*(_QWORD *)(v51 + 648), v44, v45, v46);
      }
      else
      {
        if ( (v52 & 0x10000000) == 0 )
        {
LABEL_67:
          if ( (*(_DWORD *)(v241 + 116) & 8) == 0 && !*(_QWORD *)(v241 + 224) || (*(_WORD *)(v241 + 102) & 0x200) == 0 )
          {
            v54 = *(_DWORD *)(v241 + 112);
            if ( (v54 & 0x800) != 0 )
            {
              v55 = UserSurfaceAccessCheck(*(_QWORD *)(v241 + 648), 512LL, v45, v46);
            }
            else
            {
              if ( (v54 & 0x10000000) == 0 )
              {
LABEL_75:
                v228 = HIBYTE(a11) & 1;
                if ( (a11 & 0x1000000) != 0 )
                {
                  v56 = *(_QWORD *)(v51 + 128);
                  if ( *(_DWORD *)(v51 + 96) != 6
                    || !v56
                    || (v57 = *(_DWORD *)(v56 + 24), (v57 & 8) == 0)
                    && ((v57 & 2) == 0
                     || (v58 = *(_DWORD **)(v56 + 112), *v58 != 16711680)
                     || v58[1] != 65280
                     || v58[2] != 255) )
                  {
                    v59 = 87;
LABEL_422:
                    EngSetLastError(v59);
                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v300);
                    goto LABEL_428;
                  }
                }
                v60 = _mm_cvtsi128_si32(v316);
                v292 = v316;
                v61 = (int *)((char *)v247[0] + 1024);
                if ( (*((_DWORD *)v247[0] + 10) & 1) == 0 )
                  v61 = (int *)((char *)v247[0] + 1016);
                v62 = *v61;
                v316.m128i_i32[0] = v60;
                if ( (unsigned __int64)(v62 + v60 + 0x80000000LL) > 0xFFFFFFFF )
                  goto LABEL_421;
                if ( (unsigned __int64)(v62 + v316.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
                  goto LABEL_421;
                v63 = v61[1];
                if ( (unsigned __int64)(v63 + v316.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
                  || (unsigned __int64)(v63 + v316.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
                {
                  goto LABEL_421;
                }
                v316.m128i_i32[0] = v62 + v60;
                v316.m128i_i32[2] += *v61;
                v316.m128i_i32[1] += v61[1];
                v316.m128i_i32[3] += v61[1];
                v64 = (int *)(v256[0] + 1024LL);
                if ( (*(_DWORD *)(v256[0] + 40LL) & 1) == 0 )
                  v64 = (int *)(v256[0] + 1016LL);
                v65 = *v64;
                if ( (unsigned __int64)(v65 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
                  || (unsigned __int64)(v65 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                  || (v66 = v64[1], (unsigned __int64)(v66 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                  || (unsigned __int64)(v66 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
                {
LABEL_421:
                  v59 = 534;
                  goto LABEL_422;
                }
                v67 = v65 + prclDest.left;
                prclDest.left += v65;
                v68 = *v64 + prclDest.right;
                prclDest.right = v68;
                v69 = v64[1] + prclDest.top;
                prclDest.top = v69;
                v70 = v64[1] + prclDest.bottom;
                prclDest.bottom = v70;
                v71 = *(_DWORD **)(v232 + 48);
                v280 = v71;
                if ( *(_WORD *)(v232 + 100) == 1 && v71 && (v71[10] & 0x20000) != 0 )
                {
                  v72 = v71[646];
                  if ( v67 >= v72 )
                  {
                    v73 = v71[647];
                    if ( v69 >= v73 && v68 <= *(_DWORD *)(v232 + 56) + v72 )
                    {
                      v74 = v70 <= v73 + *(_DWORD *)(v232 + 60);
                      goto LABEL_107;
                    }
                  }
                }
                else if ( v67 >= 0 && v69 >= 0 && v68 <= *(_DWORD *)(v232 + 56) )
                {
                  v74 = v70 <= *(_DWORD *)(v232 + 60);
LABEL_107:
                  v75 = 0;
                  if ( v74 )
                    goto LABEL_109;
                }
                v75 = 1;
LABEL_109:
                if ( v232 == v241
                  && (v297 = prclDest, ERECTL::operator*=(&v297, &v316), !(unsigned int)ERECTL::bEmpty((ERECTL *)&v297))
                  || v75 )
                {
                  EngSetLastError(0x57u);
                  v13 = 0;
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v300);
                  goto LABEL_427;
                }
                v76 = 1;
                if ( BYTE2(a11) == 0xFF && !v228 && (v14 & 1) == 0 )
                {
                  v77 = pxlo;
                  v78 = *((_QWORD *)v247[0] + 122);
                  v79 = *(_BYTE *)(v78 + 215);
                  *(_BYTE *)(v78 + 215) = 3;
                  v13 = GreStretchBltInternal(
                          (HDC)v77,
                          a5,
                          *(HDC *)&pptlSrc,
                          v229[0],
                          v230[0],
                          a9,
                          a10,
                          13369376,
                          -1,
                          0);
                  v76 = 0;
                  *(_BYTE *)(*((_QWORD *)v247[0] + 122) + 215LL) = v79;
                }
                if ( (v76 & v13) == 0 )
                  goto LABEL_425;
                v242 = 0LL;
                v80 = *(_QWORD *)(v232 + 128);
                v81 = *(_DWORD **)(v256[0] + 976LL);
                v82 = *(_QWORD *)(v256[0] + 88LL);
                v223 = v81[45];
                v83 = v81[44];
                LODWORD(i) = v81[46];
                v224 = v83;
                if ( (v80
                   || v49
                   && ((*(_DWORD *)(v49 + 24) & 0x800) == 0
                    || (v84 = *(_QWORD *)(v50 + 80)) != 0 && v84 != *(_QWORD *)(v50 + 72)))
                  && (v49
                   || (*(_DWORD *)(v80 + 24) & 0x800) == 0
                   || (v85 = *(_QWORD *)(v50 + 80)) != 0 && v85 != *(_QWORD *)(v50 + 72)) )
                {
                  if ( !v80 || !v49 )
                  {
LABEL_158:
                    XlateObject = CreateXlateObject(0LL, 0LL, v80, v49, v82, v50, i, v224, v223, 0);
                    v236 = (XLATEOBJ *)XlateObject;
                    if ( !XlateObject )
                    {
                      v217 = 0;
LABEL_164:
                      v243 = (__int64)v236;
                      v104 = *(_QWORD *)(v256[0] + 976LL);
                      v220 = *(_DWORD *)(v104 + 176);
                      v225 = *(_DWORD *)(v104 + 184);
                      if ( (v80
                         || gppalRGB
                         && ((*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                          || (v105 = *(_QWORD *)(v82 + 80)) != 0 && v105 != *(_QWORD *)(v82 + 72)))
                        && (gppalRGB
                         || (*(_DWORD *)(v80 + 24) & 0x800) == 0
                         || (v108 = *(_QWORD *)(v82 + 80)) != 0 && v108 != *(_QWORD *)(v82 + 72)) )
                      {
                        if ( !v80 || !gppalRGB )
                          goto LABEL_205;
                        v109 = *(_QWORD *)(v80 + 120);
                        if ( v109 == v80 )
                          v110 = *(_DWORD *)(v80 + 32);
                        else
                          v110 = *(_DWORD *)(v109 + 32);
                        v111 = *((_QWORD *)gppalRGB + 15);
                        if ( (struct PALETTE *)v111 == gppalRGB )
                          v112 = *((_DWORD *)gppalRGB + 8);
                        else
                          v112 = *(_DWORD *)(v111 + 32);
                        if ( v110 != v112 )
                        {
                          v113 = *(_DWORD *)(v80 + 56);
                          v286 = v82;
                          v287 = v82;
                          v285 = gppalRGB;
                          v288 = ghsemPalette;
                          GreAcquireSemaphore(ghsemPalette);
                          v114 = *(XLATEOBJ **)(v80 + 120);
                          v115 = 0;
                          for ( pxlo = v114; ; v114 = pxlo )
                          {
                            if ( v114 == (XLATEOBJ *)v80 )
                              v116 = *(_DWORD *)(v80 + 32);
                            else
                              v116 = *(_DWORD *)&v114[1].iSrcType;
                            if ( *((_DWORD *)&xlateTable + 8 * v113 + 4) == v116 )
                            {
                              v117 = XEPALOBJ::ulTime((XEPALOBJ *)&v285);
                              if ( *(_DWORD *)(v118 + v119 + 20) == v117 )
                              {
                                v120 = XEPALOBJ::ulTime((XEPALOBJ *)&v286);
                                if ( *(_DWORD *)(v121 + v122 + 28) == v120 )
                                {
                                  v123 = *(_DWORD **)(v121 + v122 + 8);
                                  *(_QWORD *)v229 = v123;
                                  v124 = v123[19];
                                  if ( (v124 & 0x6000) == 0 )
                                  {
                                    if ( (v123[1] & 4) == 0 && (v124 & 0x100) == 0
                                      || (v123[1] & 4) != 0
                                      && v223 == v123[6]
                                      && (v125 = XEPALOBJ::ulTime((XEPALOBJ *)&v287),
                                          *(_DWORD *)(v121 + v122 + 24) == v125)
                                      || (v124 & 0x100) != 0 && v225 == v123[7] && v220 == v123[8] )
                                    {
                                      _InterlockedIncrement((volatile signed __int32 *)(v121 + v122));
                                      *(_DWORD *)(v80 + 56) = v113;
                                      SEMOBJ::~SEMOBJ((SEMOBJ *)&v288);
                                      v106 = *(XLATEOBJ **)v229;
                                      v107 = 1;
                                      goto LABEL_211;
                                    }
                                  }
                                }
                              }
                            }
                            ++v115;
                            v113 = ((_BYTE)v113 + 1) & 7;
                            if ( v115 >= 8 )
                              break;
                          }
                          if ( ghsemPalette )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                            GreReleaseSemaphoreInternal(ghsemPalette);
                          }
LABEL_205:
                          v126 = CreateXlateObject(0LL, 0LL, v80, gppalRGB, v82, v82, v225, v220, v223, 0);
                          *(_QWORD *)v229 = v126;
                          v106 = (XLATEOBJ *)v126;
                          if ( !v126 )
                          {
                            v107 = 0;
                            goto LABEL_211;
                          }
                          if ( v80 && gppalRGB && (*(_DWORD *)(v126 + 76) & 0x200) == 0 )
                          {
                            EXLATEOBJ::vAddToCache(v229, v80, gppalRGB, v82, v82);
                            v107 = 1;
                            goto LABEL_211;
                          }
LABEL_170:
                          v107 = 1;
LABEL_211:
                          v127 = v217 & v107;
                          v128 = v239;
                          v218 = v127;
                          v129 = *(_QWORD *)(v256[0] + 976LL);
                          pxlo = v106;
                          v221 = *(_DWORD *)(v129 + 176);
                          v226 = *(_DWORD *)(v129 + 184);
                          if ( !v49
                            && (!gppalRGB
                             || (*((_DWORD *)gppalRGB + 6) & 0x800) != 0
                             && ((v130 = *(_QWORD *)(v239 + 80)) == 0 || v130 == *(_QWORD *)(v239 + 72))) )
                          {
                            v131 = xloIdent;
                            *(_QWORD *)v230 = xloIdent;
                            goto LABEL_260;
                          }
                          if ( !gppalRGB && (*(_DWORD *)(v49 + 24) & 0x800) != 0 )
                          {
                            v132 = *(_QWORD *)(v239 + 80);
                            if ( !v132 || v132 == *(_QWORD *)(v239 + 72) )
                            {
                              v131 = xloIdent;
                              *(_QWORD *)v230 = xloIdent;
                              v218 = v127;
                              goto LABEL_260;
                            }
                          }
                          if ( v49 && gppalRGB )
                          {
                            v133 = *(_QWORD *)(v49 + 120);
                            if ( v133 == v49 )
                              v134 = *(_DWORD *)(v49 + 32);
                            else
                              v134 = *(_DWORD *)(v133 + 32);
                            v135 = *((_QWORD *)gppalRGB + 15);
                            if ( (struct PALETTE *)v135 == gppalRGB )
                              v136 = *((_DWORD *)gppalRGB + 8);
                            else
                              v136 = *(_DWORD *)(v135 + 32);
                            if ( v134 == v136 )
                            {
                              v131 = xloIdent;
                              *(_QWORD *)v230 = xloIdent;
                              v218 = v127;
                              goto LABEL_260;
                            }
                            v137 = *(_DWORD *)(v49 + 56);
                            v290 = v239;
                            v291 = v239;
                            v289 = gppalRGB;
                            v274 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v138 = *(_QWORD *)(v49 + 120);
                            v139 = 0;
                            for ( i = v138; ; v138 = i )
                            {
                              if ( v138 == v49 )
                                v140 = *(_DWORD *)(v49 + 32);
                              else
                                v140 = *(_DWORD *)(v138 + 32);
                              if ( *((_DWORD *)&xlateTable + 8 * v137 + 4) == v140 )
                              {
                                v141 = XEPALOBJ::ulTime((XEPALOBJ *)&v289);
                                if ( *(_DWORD *)(v142 + v143 + 20) == v141 )
                                {
                                  v144 = XEPALOBJ::ulTime((XEPALOBJ *)&v290);
                                  if ( *(_DWORD *)(v145 + v146 + 28) == v144 )
                                  {
                                    v147 = *(_DWORD **)(v145 + v146 + 8);
                                    *(_QWORD *)v230 = v147;
                                    v148 = v147[19];
                                    if ( (v148 & 0x6000) == 0 )
                                    {
                                      if ( (v147[1] & 4) == 0 && (v148 & 0x100) == 0
                                        || (v147[1] & 4) != 0
                                        && v223 == v147[6]
                                        && (v149 = XEPALOBJ::ulTime((XEPALOBJ *)&v291),
                                            *(_DWORD *)(v145 + v146 + 24) == v149)
                                        || (v148 & 0x100) != 0 && v226 == v147[7] && v221 == v147[8] )
                                      {
                                        _InterlockedIncrement((volatile signed __int32 *)(v145 + v146));
                                        *(_DWORD *)(v49 + 56) = v137;
                                        SEMOBJ::~SEMOBJ((SEMOBJ *)&v274);
                                        v106 = *(XLATEOBJ **)v229;
                                        v131 = *(XLATEOBJ **)v230;
                                        goto LABEL_260;
                                      }
                                    }
                                  }
                                }
                              }
                              ++v139;
                              v137 = ((_BYTE)v137 + 1) & 7;
                              if ( v139 >= 8 )
                                break;
                            }
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                          }
                          v150 = CreateXlateObject(0LL, 0LL, v49, gppalRGB, v128, v128, v226, v221, v223, 0);
                          *(_QWORD *)v230 = v150;
                          v131 = (XLATEOBJ *)v150;
                          if ( v150 )
                          {
                            if ( v49 && gppalRGB && (*(_DWORD *)(v150 + 76) & 0x200) == 0 )
                              EXLATEOBJ::vAddToCache(v230, v49, gppalRGB, v128, v128);
                            v218 = v127;
                          }
                          else
                          {
                            v218 = 0;
                          }
LABEL_260:
                          v151 = *(_QWORD *)(v256[0] + 976LL);
                          v227 = *(_DWORD *)(v151 + 176);
                          LODWORD(i) = *(_DWORD *)(v151 + 184);
                          if ( (gppalRGB
                             || v49
                             && ((*(_DWORD *)(v49 + 24) & 0x800) == 0
                              || (v152 = *(_QWORD *)(v128 + 80)) != 0 && v152 != *(_QWORD *)(v128 + 72)))
                            && (v49
                             || (*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                             || (v155 = *(_QWORD *)(v128 + 80)) != 0 && v155 != *(_QWORD *)(v128 + 72)) )
                          {
                            if ( !gppalRGB || !v49 )
                              goto LABEL_301;
                            v156 = *((_QWORD *)gppalRGB + 15);
                            if ( (struct PALETTE *)v156 == gppalRGB )
                              v157 = *((_DWORD *)gppalRGB + 8);
                            else
                              v157 = *(_DWORD *)(v156 + 32);
                            v158 = *(_QWORD *)(v49 + 120);
                            if ( v158 == v49 )
                              v159 = *(_DWORD *)(v49 + 32);
                            else
                              v159 = *(_DWORD *)(v158 + 32);
                            if ( v157 != v159 )
                            {
                              v160 = *((_DWORD *)gppalRGB + 14);
                              v276 = v128;
                              v277 = v128;
                              v275 = v49;
                              LODWORD(v231) = v160;
                              v279 = ghsemPalette;
                              GreAcquireSemaphore(ghsemPalette);
                              v161 = *((_QWORD *)gppalRGB + 15);
                              v162 = (unsigned int)v231;
                              v255 = v161;
                              v222 = 0;
                              while ( 1 )
                              {
                                if ( (struct PALETTE *)v161 == gppalRGB )
                                  v163 = *((_DWORD *)gppalRGB + 8);
                                else
                                  v163 = *(_DWORD *)(v161 + 32);
                                if ( *((_DWORD *)&xlateTable + 8 * v162 + 4) == v163 )
                                {
                                  v164 = XEPALOBJ::ulTime((XEPALOBJ *)&v275);
                                  if ( *(_DWORD *)(v165 + v166 + 20) == v164 )
                                  {
                                    v167 = XEPALOBJ::ulTime((XEPALOBJ *)&v276);
                                    if ( *(_DWORD *)(v168 + v169 + 28) == v167 )
                                    {
                                      v170 = *(XLATEOBJ **)(v168 + v169 + 8);
                                      v231 = v170;
                                      flXlate = v170[3].flXlate;
                                      if ( (flXlate & 0x6000) == 0 )
                                      {
                                        if ( (v170->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                                          || (v170->flXlate & 4) != 0
                                          && v223 == v170[1].iUniq
                                          && (v172 = XEPALOBJ::ulTime((XEPALOBJ *)&v277),
                                              *(_DWORD *)(v168 + v169 + 24) == v172)
                                          || (flXlate & 0x100) != 0
                                          && (_DWORD)i == v170[1].flXlate
                                          && v227 == *(_DWORD *)&v170[1].iSrcType )
                                        {
                                          _InterlockedIncrement((volatile signed __int32 *)(v168 + v169));
                                          *((_DWORD *)gppalRGB + 14) = v162;
                                          SEMOBJ::~SEMOBJ((SEMOBJ *)&v279);
                                          v106 = *(XLATEOBJ **)v229;
                                          v154 = 1;
                                          v131 = *(XLATEOBJ **)v230;
                                          v153 = v231;
                                          goto LABEL_307;
                                        }
                                      }
                                    }
                                  }
                                }
                                v162 = ((_BYTE)v162 + 1) & 7;
                                if ( (unsigned int)++v222 >= 8 )
                                  break;
                                v161 = v255;
                              }
                              if ( ghsemPalette )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                GreReleaseSemaphoreInternal(ghsemPalette);
                              }
LABEL_301:
                              v173 = CreateXlateObject(0LL, 0LL, gppalRGB, v49, v128, v128, i, v227, v223, 0);
                              v231 = (XLATEOBJ *)v173;
                              v153 = (XLATEOBJ *)v173;
                              if ( !v173 )
                              {
                                v154 = 0;
                                goto LABEL_307;
                              }
                              if ( gppalRGB && v49 && (*(_DWORD *)(v173 + 76) & 0x200) == 0 )
                              {
                                EXLATEOBJ::vAddToCache(&v231, gppalRGB, v49, v239, v239);
                                v154 = 1;
                                goto LABEL_307;
                              }
LABEL_266:
                              v154 = 1;
LABEL_307:
                              v174 = v218 & v154;
                              v175 = *((_QWORD *)v247[0] + 147);
                              if ( v175
                                && (*((_DWORD *)v247[0] + 10) & 2) != 0
                                && (unsigned int)DC::bDpiScaledSurface(v247[0]) )
                              {
                                v176 = v175;
                              }
                              else
                              {
                                v176 = *((_QWORD *)v247[0] + 145);
                              }
                              if ( v176 )
                              {
                                if ( !v175
                                  || (*((_DWORD *)v247[0] + 10) & 2) == 0
                                  || !(unsigned int)DC::bDpiScaledSurface(v247[0]) )
                                {
                                  v177 = (struct REGION *)*((_QWORD *)v247[0] + 145);
                                }
                              }
                              else
                              {
                                v177 = DC::prgnVisSnap(v247[0]);
                              }
                              v325 = 0LL;
                              v326 = 0LL;
                              v327 = 0;
                              v328 = 1;
                              v329 = 0LL;
                              XCLIPOBJ::vSetup((XCLIPOBJ *)v320, v177, (struct ERECTL *)&v316, 0);
                              if ( v321 == v323 || v322 == v324 )
                              {
                                LODWORD(v15) = 1;
                                goto LABEL_419;
                              }
                              v238.m128i_i64[0] = 0LL;
                              v238.m128i_i8[8] = 0;
                              v238.m128i_i32[3] = 0;
                              v178 = *(_QWORD *)(v241 + 48);
                              v255 = v178;
                              if ( v235.x && (v179 = *(_DWORD *)(*((_QWORD *)v247[0] + 122) + 108LL), (v179 & 1) != 0) )
                              {
                                v180 = (_DWORD *)v232;
                                if ( (v179 & 9) != 9 )
                                {
                                  v262 = 0LL;
                                  v263 = 0LL;
                                  v264 = 0LL;
                                  v265 = 0LL;
                                  HIDWORD(v262) = *(_DWORD *)(v232 + 56);
                                  LODWORD(v263) = *(_DWORD *)(v232 + 60);
                                  LODWORD(v262) = *(_DWORD *)(v232 + 96);
                                  v264 = **(_QWORD **)(v232 + 128);
                                  SURFMEM::bCreateDIB(
                                    (SURFMEM *)&v238,
                                    (struct _DEVBITMAPINFO *)&v262,
                                    0LL,
                                    0LL,
                                    0,
                                    0LL,
                                    0LL,
                                    0,
                                    1,
                                    0,
                                    0);
                                  if ( !v238.m128i_i64[0] )
                                    goto LABEL_368;
                                  v181 = (v180[28] & 0x400) == 0;
                                  v318 = v180[14];
                                  v319 = v180[15];
                                  v317 = 0LL;
                                  v258 = 0LL;
                                  if ( !(v181
                                       ? ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))EngCopyBits)(
                                           v238.m128i_i64[0] + 24,
                                           v180 + 6,
                                           0LL,
                                           0LL,
                                           &v317,
                                           &v258)
                                       : (*((unsigned int (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))v280
                                          + 355))(
                                           v238.m128i_i64[0] + 24,
                                           v180 + 6,
                                           0LL,
                                           0LL,
                                           &v317,
                                           &v258)) )
                                    goto LABEL_368;
                                  v183 = *(_DWORD *)(v238.m128i_i64[0] + 96);
                                  if ( (unsigned int)(v183 - 1) > 5 )
                                    goto LABEL_368;
                                  ((void (*)(void))(&apfnMirror)[v183])();
                                  v180 = (_DWORD *)v238.m128i_i64[0];
                                  v232 = v238.m128i_i64[0];
                                }
                              }
                              else
                              {
                                v180 = (_DWORD *)v232;
                              }
                              v252 = 0LL;
                              v253 = 0;
                              v254 = 0;
                              v249 = 0LL;
                              v250 = 0;
                              v251 = 0;
                              if ( !DIB )
                                goto LABEL_375;
                              v268 = 0LL;
                              v266[1] = v316.m128i_i32[2] - v316.m128i_i32[0];
                              v267 = (unsigned int)(v316.m128i_i32[3] - v316.m128i_i32[1]);
                              v266[0] = 6;
                              v269 = 0LL;
                              v268 = *(_QWORD *)gppalRGB;
                              DIB = SURFMEM::bCreateDIB(
                                      (SURFMEM *)&v252,
                                      (struct _DEVBITMAPINFO *)v266,
                                      0LL,
                                      0LL,
                                      0,
                                      0LL,
                                      0LL,
                                      0,
                                      1,
                                      0,
                                      0) & v174;
                              if ( DIB )
                              {
                                if ( !v228 )
                                {
                                  v272 = 0LL;
                                  v270[1] = prclDest.right - prclDest.left;
                                  v271 = (unsigned int)(prclDest.bottom - prclDest.top);
                                  v270[0] = 6;
                                  v273 = 0LL;
                                  v272 = *(_QWORD *)gppalRGB;
                                  DIB = SURFMEM::bCreateDIB(
                                          (SURFMEM *)&v249,
                                          (struct _DEVBITMAPINFO *)v270,
                                          0LL,
                                          0LL,
                                          0,
                                          0LL,
                                          0LL,
                                          0,
                                          1,
                                          0,
                                          0);
                                  if ( DIB )
                                  {
                                    v184 = prclDest.left;
                                    pptlSrc.x = prclDest.left;
                                    pptlSrc.y = prclDest.top;
                                    if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
                                    {
                                      v186 = 87;
LABEL_367:
                                      EngSetLastError(v186);
                                      SURFMEM::~SURFMEM((SURFMEM *)&v249);
                                      SURFMEM::~SURFMEM((SURFMEM *)&v252);
LABEL_368:
                                      SURFMEM::~SURFMEM((SURFMEM *)&v238);
LABEL_419:
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v231);
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v230);
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v229);
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v242);
                                      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v236);
                                      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v300);
LABEL_428:
                                      MDCOBJ::~MDCOBJ((MDCOBJ *)v256);
                                      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v257);
LABEL_430:
                                      MDCOBJ::~MDCOBJ((MDCOBJ *)v247);
                                      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v248);
                                      return (unsigned int)v15;
                                    }
                                    if ( prclDest.right > prclDest.left
                                      && prclDest.bottom > prclDest.top
                                      && v184 <= *(_DWORD *)(v232 + 56)
                                      && v185 <= *(_DWORD *)(v232 + 60) )
                                    {
                                      v187 = 0LL;
                                      if ( v249 )
                                        v187 = (SURFOBJ *)(v249 + 24);
                                      EngCopyBits(v187, (SURFOBJ *)(v232 + 24), 0LL, v106, &prclDest, &pptlSrc);
                                    }
                                    v188 = 0;
                                    v232 = v249;
                                    v189 = *(_DWORD **)(v249 + 80);
                                    v190 = (_DWORD *)((char *)v189 + *(_DWORD *)(v249 + 60) * *(_DWORD *)(v249 + 88));
                                    if ( v189 != v190 )
                                    {
                                      v191 = v249;
                                      do
                                      {
                                        if ( v188 >= prclDest.top && v188 < prclDest.bottom )
                                        {
                                          v192 = v189;
                                          v193 = 0;
                                          v194 = 0LL;
                                          v195 = *(int *)(v191 + 56);
                                          v196 = &v189[v195];
                                          v197 = (v195 * 4) >> 2;
                                          if ( v189 > v196 )
                                            v197 = 0LL;
                                          if ( v197 )
                                          {
                                            do
                                            {
                                              if ( v193 >= prclDest.left && v193 < prclDest.right )
                                                *v192 |= 0xFF000000;
                                              ++v193;
                                              ++v192;
                                              ++v194;
                                            }
                                            while ( v194 != v197 );
                                            v191 = v249;
                                          }
                                        }
                                        ++v188;
                                        v189 = (_DWORD *)((char *)v189 + *(int *)(v191 + 88));
                                      }
                                      while ( v189 != v190 );
                                      v232 = v191;
                                      v178 = v255;
                                    }
                                    HIBYTE(a11) |= 1u;
                                    pxlo = xloIdent;
                                  }
                                }
                                v198 = *(_DWORD **)(v252 + 72);
                                v199 = (unsigned __int64)*(unsigned int *)(v252 + 64) >> 2;
                                if ( v199 )
                                {
                                  if ( ((unsigned __int8)v198 & 4) == 0 )
                                    goto LABEL_363;
                                  *v198 = 0;
                                  if ( --v199 )
                                  {
                                    ++v198;
LABEL_363:
                                    memset(v198, 0, 8 * (v199 >> 1));
                                    if ( (v199 & 1) != 0 )
                                      v198[v199 - 1] = 0;
                                  }
                                }
                              }
                              if ( !DIB )
                              {
                                v186 = 8;
                                goto LABEL_367;
                              }
                              `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                              v235.x = v330.x - 16 * v292.m128i_i32[0];
                              v235.y = v330.y - 16 * v292.m128i_i32[1];
                              pptfx = v235;
                              v235.x = v331 - 16 * v292.m128i_i32[0];
                              v235.y = v332 - 16 * v292.m128i_i32[1];
                              v343 = v235;
                              v200 = 0LL;
                              v235.x = v333 - 16 * v292.m128i_i32[0];
                              v235.y = v334 - 16 * v292.m128i_i32[1];
                              v344 = v235;
                              if ( v232 )
                                v200 = (SURFOBJ *)(v232 + 24);
                              if ( v252 )
                                v201 = (SURFOBJ *)(v252 + 24);
                              else
                                v201 = 0LL;
                              EngPlgBlt(v201, v200, 0LL, 0LL, pxlo, 0LL, 0LL, &pptfx, &prclDest, 0LL, 3u);
                              v299 = 0LL;
                              inited = EXLATEOBJ::bInitXlateObj(
                                         &v242,
                                         0LL,
                                         0,
                                         (__int64)gppalRGB,
                                         v281,
                                         0LL,
                                         v239,
                                         *(_DWORD *)(*(_QWORD *)(v256[0] + 976LL) + 184LL),
                                         *(_DWORD *)(*(_QWORD *)(v256[0] + 976LL) + 176LL),
                                         v223,
                                         0);
                              v180 = (_DWORD *)v252;
                              v174 = inited;
                              *(_QWORD *)&prclDest.left = 0LL;
                              v243 = v242;
                              pxlo = xloIdent;
                              prclDest.right = v316.m128i_i32[2] - v316.m128i_i32[0];
                              prclDest.bottom = v316.m128i_i32[3] - v316.m128i_i32[1];
                              `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_375:
                              if ( v174 )
                              {
                                v203 = v241;
                                ++*(_DWORD *)(v241 + 92);
                                v204 = v247[0];
                                v205 = *(struct ECLIPOBJ **)(v256[0] + 48LL);
                                v206 = (struct ECLIPOBJ **)*((_QWORD *)v247[0] + 6);
                                if ( v206 == (struct ECLIPOBJ **)v205
                                  || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v247) && v206[440] == v205 )
                                {
                                  if ( (*((_DWORD *)v204 + 9) & 0xE0) != 0 )
                                  {
                                    v298 = v316;
                                    XDCOBJ::vAccumulateTight((XDCOBJ *)v247, v205, (struct ERECTL *)&v298);
                                    v203 = v241;
                                  }
                                  v293 = a11;
                                  v294 = pxlo;
                                  v295 = v131;
                                  v296 = v153;
                                  if ( v316.m128i_i32[2] - v316.m128i_i32[0] == prclDest.right - prclDest.left
                                    && v316.m128i_i32[3] - v316.m128i_i32[1] == prclDest.bottom - prclDest.top )
                                  {
                                    BYTE1(v293) = BYTE1(a11) & 0xFE;
                                  }
                                  if ( (*(_DWORD *)(v203 + 112) & 0x10000) != 0 )
                                    v208 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v178 + 3256);
                                  else
                                    v208 = EngAlphaBlend;
                                  if ( v180 )
                                    v15 = v180 + 6;
                                  v13 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, __int64, __m128i *, RECTL *, int *))v208)(
                                          v203 + 24,
                                          v15,
                                          v320,
                                          v243,
                                          &v316,
                                          &prclDest,
                                          &v293);
LABEL_393:
                                  SURFMEM::~SURFMEM((SURFMEM *)&v249);
                                  SURFMEM::~SURFMEM((SURFMEM *)&v252);
                                  SURFMEM::~SURFMEM((SURFMEM *)&v238);
                                  if ( v153 )
                                  {
                                    cEntries = (int)v153[1].cEntries;
                                    if ( (int)cEntries < 0 )
                                    {
                                      if ( (_DWORD)cEntries == -1 )
                                        FreeThreadBufferWithTag(v153);
                                    }
                                    else
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                                      v106 = *(XLATEOBJ **)v229;
                                      v131 = *(XLATEOBJ **)v230;
                                    }
                                  }
                                  if ( v131 )
                                  {
                                    v210 = (int)v131[1].cEntries;
                                    if ( (int)v210 < 0 )
                                    {
                                      if ( (_DWORD)v210 == -1 )
                                        FreeThreadBufferWithTag(v131);
                                    }
                                    else
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v210);
                                      v106 = *(XLATEOBJ **)v229;
                                    }
                                  }
                                  if ( v106 )
                                  {
                                    v211 = (int)v106[1].cEntries;
                                    if ( (int)v211 < 0 )
                                    {
                                      if ( (_DWORD)v211 == -1 )
                                        FreeThreadBufferWithTag(v106);
                                    }
                                    else
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v211);
                                    }
                                  }
                                  if ( v242 )
                                  {
                                    v212 = *(int *)(v242 + 36);
                                    if ( (int)v212 < 0 )
                                    {
                                      if ( (_DWORD)v212 == -1 )
                                        FreeThreadBufferWithTag(v242);
                                    }
                                    else
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v212);
                                    }
                                  }
                                  if ( v236 )
                                  {
                                    v213 = v236[1].cEntries;
                                    if ( v213 >= 0 )
                                    {
                                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * (int)v236[1].cEntries);
                                      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v300);
LABEL_427:
                                      LODWORD(v15) = v13;
                                      goto LABEL_428;
                                    }
                                    if ( v213 == -1 )
                                    {
                                      FreeThreadBufferWithTag(v236);
                                      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v300);
                                      goto LABEL_427;
                                    }
                                  }
LABEL_425:
                                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v300);
                                  goto LABEL_427;
                                }
                                v207 = 87;
                              }
                              else
                              {
                                v207 = 6;
                              }
                              EngSetLastError(v207);
                              v13 = 0;
                              goto LABEL_393;
                            }
                          }
                          v153 = xloIdent;
                          v231 = xloIdent;
                          goto LABEL_266;
                        }
                      }
                      v106 = xloIdent;
                      *(_QWORD *)v229 = xloIdent;
                      goto LABEL_170;
                    }
                    if ( v80 && v49 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                    {
                      EXLATEOBJ::vAddToCache(&v236, v80, v49, v82, v50);
                      v217 = 1;
                      goto LABEL_164;
                    }
LABEL_123:
                    v217 = 1;
                    goto LABEL_164;
                  }
                  v86 = *(_QWORD *)(v80 + 120);
                  if ( v86 == v80 )
                    v87 = *(_DWORD *)(v80 + 32);
                  else
                    v87 = *(_DWORD *)(v86 + 32);
                  v88 = *(_QWORD *)(v49 + 120);
                  if ( v88 == v49 )
                    v89 = *(_DWORD *)(v49 + 32);
                  else
                    v89 = *(_DWORD *)(v88 + 32);
                  if ( v87 != v89 )
                  {
                    v90 = *(_DWORD *)(v80 + 56);
                    v282 = v50;
                    v283 = v82;
                    v278 = v49;
                    LODWORD(v231) = v90;
                    v284 = ghsemPalette;
                    GreAcquireSemaphore(ghsemPalette);
                    v91 = *(_QWORD *)(v80 + 120);
                    v92 = (unsigned int)v231;
                    v243 = v91;
                    v219 = 0;
                    while ( 1 )
                    {
                      if ( v91 == v80 )
                        v93 = *(_DWORD *)(v80 + 32);
                      else
                        v93 = *(_DWORD *)(v91 + 32);
                      if ( *((_DWORD *)&xlateTable + 8 * v92 + 4) == v93 )
                      {
                        v94 = XEPALOBJ::ulTime((XEPALOBJ *)&v278);
                        if ( *(_DWORD *)(v95 + v96 + 20) == v94 )
                        {
                          v97 = XEPALOBJ::ulTime((XEPALOBJ *)&v282);
                          if ( *(_DWORD *)(v98 + v99 + 28) == v97 )
                          {
                            v100 = *(XLATEOBJ **)(v98 + v99 + 8);
                            v236 = v100;
                            v101 = v100[3].flXlate;
                            if ( (v101 & 0x6000) == 0 )
                            {
                              if ( (v100->flXlate & 4) == 0 && (v101 & 0x100) == 0
                                || (v100->flXlate & 4) != 0
                                && v223 == v100[1].iUniq
                                && (v102 = XEPALOBJ::ulTime((XEPALOBJ *)&v283), *(_DWORD *)(v98 + v99 + 24) == v102)
                                || (v101 & 0x100) != 0
                                && (_DWORD)i == v100[1].flXlate
                                && v224 == *(_DWORD *)&v100[1].iSrcType )
                              {
                                _InterlockedIncrement((volatile signed __int32 *)(v98 + v99));
                                *(_DWORD *)(v80 + 56) = v92;
                                SEMOBJ::~SEMOBJ((SEMOBJ *)&v284);
                                v217 = 1;
                                goto LABEL_164;
                              }
                            }
                          }
                        }
                      }
                      v92 = ((_BYTE)v92 + 1) & 7;
                      if ( (unsigned int)++v219 >= 8 )
                        break;
                      v91 = v243;
                    }
                    if ( ghsemPalette )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                      GreReleaseSemaphoreInternal(ghsemPalette);
                    }
                    goto LABEL_158;
                  }
                }
                v236 = xloIdent;
                goto LABEL_123;
              }
              v55 = UserScreenAccessCheck(v241, 512LL, v45, v46);
            }
            if ( v55 )
              goto LABEL_75;
          }
LABEL_423:
          EngSetLastError(6u);
          v13 = 0;
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v300);
          goto LABEL_427;
        }
        v53 = UserScreenAccessCheck(v47, v44, v45, v46);
      }
      if ( !v53 )
        goto LABEL_423;
      goto LABEL_67;
    }
  }
  EngSetLastError(0x57u);
  return 0LL;
}
