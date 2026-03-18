/*
 * XREFs of NtGdiAlphaBlend @ 0x1C0069D70
 * Callers:
 *     BltIcon @ 0x1C002D3A4 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 *     EngCopyBits @ 0x1C00356D0 (EngCopyBits.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005D7B4 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006B1C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     bCvtPts1 @ 0x1C0072710 (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00EF544 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00EF6D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C010FD94 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0147FF4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C014804C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C02698C4 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0275680 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
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
  DC *v14; // rdx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v16; // rax
  DC *v17; // rdx
  int v18; // ecx
  struct _DC_ATTR *v19; // rax
  int v20; // r14d
  char *v21; // rbx
  int v22; // esi
  char *v23; // rcx
  int v24; // eax
  float v25; // xmm4_4
  LONG left; // r8d
  LONG top; // r10d
  LONG right; // edx
  LONG bottom; // r9d
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // r8
  __int64 v36; // r9
  DC *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rbx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rax
  int v45; // ecx
  int v46; // edx
  int *v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r11
  int *v50; // rcx
  __int64 v51; // r11
  __int64 v52; // r10
  LONG v53; // r10d
  __int64 v54; // r11
  LONG v55; // r8d
  bool v56; // zf
  _DWORD *v57; // rax
  int v58; // ebx
  int v59; // eax
  unsigned int v60; // ebx
  __int64 v61; // rdi
  _DWORD *v62; // rax
  __int64 v63; // r13
  __int64 v64; // rax
  int v65; // edx
  __int64 v66; // rax
  int v67; // ecx
  unsigned int v68; // r12d
  __int64 v69; // r11
  unsigned int i; // r9d
  int v71; // eax
  __int64 XlateObject; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // edx
  __int64 v76; // rax
  int v77; // ecx
  unsigned int v78; // r12d
  __int64 v79; // r11
  unsigned int m; // r9d
  int v81; // eax
  XLATEOBJ *v82; // rax
  XLATEOBJ *v83; // r12
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rax
  int v89; // ecx
  unsigned int v90; // r13d
  __int64 v91; // r11
  unsigned int j; // r9d
  int v93; // eax
  __int64 v94; // rax
  XLATEOBJ *v95; // r13
  __int64 v96; // rcx
  __int64 v97; // rax
  int v98; // edx
  __int64 v99; // rax
  int v100; // ecx
  int v101; // eax
  __int64 v102; // rax
  unsigned int v103; // r10d
  unsigned int v104; // r8d
  int v105; // eax
  __int64 v106; // rax
  XLATEOBJ *v107; // r14
  __int64 v108; // rdi
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rax
  struct REGION *v112; // rdx
  __int64 v113; // r9
  __int64 v114; // rbx
  HDC v115; // rsi
  DC *v116; // rdx
  __int64 v117; // rdi
  BOOL (__stdcall *v118)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v119; // rdx
  __int64 cEntries; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  struct _DC_ATTR *v124; // rax
  __int64 v125; // rdi
  struct _DC_ATTR *v126; // rax
  __int64 v127; // rdi
  int v129; // eax
  __int64 v130; // rax
  HDC v131; // rcx
  char v132; // di
  int v133; // eax
  int v134; // ebx
  unsigned int CurrentProcessId; // eax
  int v136; // eax
  int v137; // eax
  FIX x; // r9d
  FIX v139; // r8d
  FIX y; // r10d
  FIX v141; // ebx
  int v142; // r11d
  int v143; // r9d
  int v144; // r10d
  int v145; // eax
  __int64 v146; // r9
  int v147; // eax
  int v148; // eax
  _DWORD *v149; // rcx
  ULONG v150; // ecx
  LONG v151; // ecx
  int v152; // r10d
  __int64 v153; // rax
  __int64 v154; // rax
  unsigned int v155; // eax
  __int64 v156; // r8
  __int64 v157; // r10
  unsigned int v158; // eax
  __int64 v159; // r8
  __int64 v160; // r10
  _DWORD *v161; // rdx
  unsigned int v162; // eax
  __int64 v163; // rax
  __int64 v164; // rax
  unsigned int v165; // eax
  __int64 v166; // r8
  __int64 v167; // r10
  unsigned int v168; // eax
  __int64 v169; // r8
  __int64 v170; // r10
  XLATEOBJ *v171; // rdx
  unsigned int v172; // eax
  __int64 v173; // rax
  __int64 v174; // rax
  unsigned int v175; // eax
  __int64 v176; // r8
  __int64 v177; // r10
  unsigned int v178; // eax
  __int64 v179; // r8
  __int64 v180; // r10
  XLATEOBJ *v181; // rdx
  unsigned int v182; // eax
  __int64 v183; // rax
  __int64 v184; // rax
  unsigned int v185; // eax
  __int64 v186; // r9
  __int64 v187; // r11
  unsigned int v188; // eax
  __int64 v189; // r9
  __int64 v190; // r11
  XLATEOBJ *v191; // rdx
  unsigned int v192; // eax
  _QWORD *v193; // rax
  int v195; // edx
  int v196; // edx
  int v197; // r11d
  ULONG v198; // ecx
  SURFOBJ *v199; // rcx
  LONG v200; // r10d
  _DWORD *v201; // rcx
  _DWORD *v202; // r11
  __int64 v203; // rdi
  _DWORD *v204; // r9
  LONG v205; // r8d
  unsigned __int64 v206; // rdx
  _DWORD *v207; // rax
  unsigned __int64 v208; // rdx
  __int64 k; // rax
  _DWORD *v210; // r9
  unsigned __int64 v211; // r8
  SURFOBJ *v212; // rdx
  SURFOBJ *v213; // rcx
  int inited; // eax
  __int64 v215; // r8
  ULONG v216; // ecx
  __int64 v217; // rcx
  int v218; // ebx
  int v220; // [rsp+70h] [rbp-90h]
  int v221; // [rsp+70h] [rbp-90h]
  int v222; // [rsp+70h] [rbp-90h]
  int v223; // [rsp+70h] [rbp-90h]
  int v224; // [rsp+70h] [rbp-90h]
  int v225; // [rsp+74h] [rbp-8Ch]
  int v227; // [rsp+78h] [rbp-88h]
  int v228; // [rsp+7Ch] [rbp-84h]
  int v229; // [rsp+7Ch] [rbp-84h]
  int v230; // [rsp+7Ch] [rbp-84h]
  int v231; // [rsp+7Ch] [rbp-84h]
  int v232; // [rsp+80h] [rbp-80h]
  int v233; // [rsp+80h] [rbp-80h]
  int v234; // [rsp+80h] [rbp-80h]
  int v235; // [rsp+80h] [rbp-80h]
  int v237; // [rsp+88h] [rbp-78h]
  int v238[2]; // [rsp+88h] [rbp-78h]
  int v239; // [rsp+88h] [rbp-78h]
  int DIB; // [rsp+88h] [rbp-78h]
  __int64 v241; // [rsp+90h] [rbp-70h]
  POINTFIX v242; // [rsp+90h] [rbp-70h]
  char v243; // [rsp+98h] [rbp-68h]
  DC *v244; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v245; // [rsp+A8h] [rbp-58h]
  DC *v246; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v247; // [rsp+B8h] [rbp-48h]
  int v248; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v249; // [rsp+C8h] [rbp-38h]
  XLATEOBJ *v250; // [rsp+D0h] [rbp-30h] BYREF
  XLATEOBJ *v251; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v252[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v253; // [rsp+F0h] [rbp-10h] BYREF
  XLATEOBJ *pxlo; // [rsp+100h] [rbp+0h]
  __int64 v255; // [rsp+108h] [rbp+8h]
  XLATEOBJ *v256; // [rsp+110h] [rbp+10h] BYREF
  int v257; // [rsp+118h] [rbp+18h]
  HDC v258; // [rsp+120h] [rbp+20h]
  int v259; // [rsp+128h] [rbp+28h]
  int v260; // [rsp+12Ch] [rbp+2Ch] BYREF
  HDC v261; // [rsp+130h] [rbp+30h] BYREF
  HDC v262; // [rsp+138h] [rbp+38h]
  char *v263; // [rsp+140h] [rbp+40h] BYREF
  int v264; // [rsp+148h] [rbp+48h]
  int v265; // [rsp+14Ch] [rbp+4Ch]
  __int64 v266; // [rsp+150h] [rbp+50h] BYREF
  char v267; // [rsp+158h] [rbp+58h]
  int v268; // [rsp+15Ch] [rbp+5Ch]
  __int64 v269; // [rsp+160h] [rbp+60h] BYREF
  char v270; // [rsp+168h] [rbp+68h]
  int v271; // [rsp+16Ch] [rbp+6Ch]
  POINTL pptlSrc; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v273; // [rsp+178h] [rbp+78h]
  __int64 v274; // [rsp+180h] [rbp+80h] BYREF
  char *v275; // [rsp+188h] [rbp+88h] BYREF
  int v276; // [rsp+190h] [rbp+90h]
  int v277; // [rsp+194h] [rbp+94h]
  _DWORD v278[3]; // [rsp+198h] [rbp+98h] BYREF
  __int128 v279; // [rsp+1A4h] [rbp+A4h]
  int v280; // [rsp+1B4h] [rbp+B4h]
  _DWORD v281[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v282; // [rsp+1C0h] [rbp+C0h]
  _BYTE v283[12]; // [rsp+1C8h] [rbp+C8h] BYREF
  int v284; // [rsp+1D4h] [rbp+D4h]
  _DWORD v285[3]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int128 v286; // [rsp+1E4h] [rbp+E4h]
  int v287; // [rsp+1F4h] [rbp+F4h]
  __int64 v288; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v289; // [rsp+200h] [rbp+100h] BYREF
  __int64 v290; // [rsp+208h] [rbp+108h] BYREF
  __int64 v291; // [rsp+210h] [rbp+110h] BYREF
  __int64 v292; // [rsp+218h] [rbp+118h] BYREF
  struct PALETTE *v293; // [rsp+220h] [rbp+120h] BYREF
  __int64 v294; // [rsp+228h] [rbp+128h] BYREF
  __int64 v295; // [rsp+230h] [rbp+130h] BYREF
  __int64 v296; // [rsp+238h] [rbp+138h] BYREF
  struct PALETTE *v297; // [rsp+240h] [rbp+140h] BYREF
  __int64 v298; // [rsp+248h] [rbp+148h] BYREF
  __int64 v299; // [rsp+250h] [rbp+150h] BYREF
  __int64 v300; // [rsp+258h] [rbp+158h] BYREF
  __int64 v301; // [rsp+260h] [rbp+160h] BYREF
  __int64 v302; // [rsp+268h] [rbp+168h] BYREF
  __int64 v303; // [rsp+270h] [rbp+170h] BYREF
  RECTL v304; // [rsp+280h] [rbp+180h] BYREF
  __int128 v305; // [rsp+290h] [rbp+190h]
  int v306; // [rsp+2A0h] [rbp+1A0h] BYREF
  HDC v307; // [rsp+2A8h] [rbp+1A8h]
  XLATEOBJ *v308; // [rsp+2B0h] [rbp+1B0h]
  XLATEOBJ *v309; // [rsp+2B8h] [rbp+1B8h]
  _OWORD v310[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v311; // [rsp+2E0h] [rbp+1E0h]
  __int64 v312; // [rsp+2E8h] [rbp+1E8h]
  char v313; // [rsp+2F0h] [rbp+1F0h]
  int v314; // [rsp+2F4h] [rbp+1F4h]
  __int64 v315; // [rsp+2F8h] [rbp+1F8h]
  __int64 v316; // [rsp+300h] [rbp+200h]
  int v317; // [rsp+308h] [rbp+208h]
  __int64 v318; // [rsp+310h] [rbp+210h]
  __int64 v319; // [rsp+318h] [rbp+218h]
  __int16 v320; // [rsp+320h] [rbp+220h]
  __int64 v321; // [rsp+328h] [rbp+228h]
  __int64 v322; // [rsp+330h] [rbp+230h]
  __int16 v323; // [rsp+338h] [rbp+238h]
  __int64 v324; // [rsp+340h] [rbp+240h]
  __int64 v325; // [rsp+348h] [rbp+248h]
  __int64 v326; // [rsp+350h] [rbp+250h]
  __int64 v327; // [rsp+358h] [rbp+258h]
  __int128 v328; // [rsp+360h] [rbp+260h]
  __int64 v329; // [rsp+370h] [rbp+270h]
  __m128i v330; // [rsp+380h] [rbp+280h] BYREF
  __int64 v331; // [rsp+390h] [rbp+290h]
  RECTL prclDest; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v333[4]; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v334; // [rsp+3C0h] [rbp+2C0h] BYREF
  int v335; // [rsp+3C8h] [rbp+2C8h]
  int v336; // [rsp+3CCh] [rbp+2CCh]
  _BYTE v337[4]; // [rsp+3D0h] [rbp+2D0h] BYREF
  int v338; // [rsp+3D4h] [rbp+2D4h]
  int v339; // [rsp+3D8h] [rbp+2D8h]
  int v340; // [rsp+3DCh] [rbp+2DCh]
  int v341; // [rsp+3E0h] [rbp+2E0h]
  __int64 v342; // [rsp+420h] [rbp+320h]
  int v343; // [rsp+428h] [rbp+328h]
  int v344; // [rsp+450h] [rbp+350h]
  __int64 v345; // [rsp+460h] [rbp+360h]
  struct _POINTFIX v346; // [rsp+470h] [rbp+370h] BYREF
  FIX v347; // [rsp+478h] [rbp+378h]
  int v348; // [rsp+47Ch] [rbp+37Ch]
  int v349; // [rsp+480h] [rbp+380h]
  FIX v350; // [rsp+484h] [rbp+384h]
  FIX v351; // [rsp+488h] [rbp+388h]
  int v352; // [rsp+48Ch] [rbp+38Ch]
  struct _POINTL v353; // [rsp+490h] [rbp+390h] BYREF
  int v354; // [rsp+498h] [rbp+398h]
  int v355; // [rsp+49Ch] [rbp+39Ch]
  int v356; // [rsp+4A0h] [rbp+3A0h]
  int v357; // [rsp+4A4h] [rbp+3A4h]
  POINTFIX pptfx; // [rsp+4A8h] [rbp+3A8h] BYREF
  POINTFIX v359; // [rsp+4B0h] [rbp+3B0h]
  POINTFIX v360; // [rsp+4B8h] [rbp+3B8h]

  v12 = a4;
  v258 = a6;
  v248 = a8;
  v262 = a1;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_495;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_495:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v13 = BYTE1(a11) & 0x7F;
  v257 = BYTE1(a11) & 0x80;
  BYTE1(a11) &= ~0x80u;
  v245 = 0LL;
  v244 = (DC *)HmgLockEx(a1, 1LL, 0LL);
  v14 = v244;
  if ( !v244 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_269;
  }
  if ( (*((_DWORD *)v244 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v244);
    if ( UserAttr && !DC::SaveAttributes(v244, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v244 + 3);
      v244 = 0LL;
      goto LABEL_263;
    }
    *((_DWORD *)v244 + 11) |= 2u;
    v14 = v244;
    LODWORD(v245) = 1;
  }
  if ( (*((_DWORD *)v14 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v14);
LABEL_269:
    v14 = v244;
  }
  if ( v14 && (*((_DWORD *)v14 + 9) & 0x10000) == 0 )
  {
    LOBYTE(v14) = 1;
    v246 = 0LL;
    v247 = 0LL;
    v16 = HmgLockEx(v258, v14, 0LL);
    v246 = (DC *)v16;
    v17 = (DC *)v16;
    if ( !v16 )
    {
      if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
        PsGetWin32KFilterSet();
      goto LABEL_281;
    }
    v18 = HIDWORD(v247);
    if ( HIDWORD(v247) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v16 + 48) + 40LL) & 0x8000) == 0
        || (v134 = *(_DWORD *)(v16 + 2096),
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId(),
            v17 = v246,
            v134 != (CurrentProcessId & 0xFFFFFFFC)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
        goto LABEL_274;
      }
      v18 = HIDWORD(v247);
      v12 = a4;
    }
    if ( (*((_DWORD *)v17 + 11) & 2) != 0 )
    {
LABEL_25:
      if ( (*((_DWORD *)v17 + 130) & 4) == 0 )
      {
LABEL_26:
        if ( v17 )
        {
          bSpDwmValidateSurface((struct XDCOBJ *)&v246, a7, v248, a9, a10);
          bSpDwmValidateSurface((struct XDCOBJ *)&v244, a2, a3, v12, a5);
          v264 = *(_DWORD *)(*((_QWORD *)v244 + 122) + 208LL);
          v20 = *(_DWORD *)(*((_QWORD *)v244 + 122) + 108LL) & 1;
          v265 = v20;
          if ( (*(_DWORD *)(*((_QWORD *)v244 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v263, (struct XDCOBJ *)&v244, 0x204u, 0);
            v20 = v265;
            v21 = v263;
          }
          else
          {
            v21 = (char *)v244 + 320;
            v263 = (char *)v244 + 320;
          }
          v276 = *(_DWORD *)(*((_QWORD *)v246 + 122) + 208LL);
          v22 = *(_DWORD *)(*((_QWORD *)v246 + 122) + 108LL) & 1;
          v277 = v22;
          if ( (*(_DWORD *)(*((_QWORD *)v246 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v275, (struct XDCOBJ *)&v246, 0x204u, 0);
            v23 = v275;
            v20 = v265;
            v21 = v263;
            v22 = v277;
          }
          else
          {
            v23 = (char *)v246 + 320;
            v275 = (char *)v246 + 320;
          }
          v24 = *((_DWORD *)v23 + 8);
          if ( (v24 & 1) != 0 )
          {
            v25 = 0.0;
            if ( v22 || *(float *)v23 >= 0.0 && *((float *)v23 + 3) >= 0.0 )
            {
              left = a7;
              prclDest.left = a7;
              top = v248;
              right = a9 + a7;
              prclDest.top = v248;
              bottom = a10 + v248;
              prclDest.right = a9 + a7;
              prclDest.bottom = a10 + v248;
              if ( (v24 & 0x43) != 0x43 )
              {
                bCvtPts1(v23, &prclDest, 2LL);
                bottom = prclDest.bottom;
                right = prclDest.right;
                top = prclDest.top;
                left = prclDest.left;
              }
              if ( v22 )
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
              if ( (*((_DWORD *)v21 + 8) & 1) != 0 && (v20 || v25 <= *(float *)v21 && v25 <= *((float *)v21 + 3)) )
              {
                DWORD2(v253) = a2 + a4;
                HIDWORD(v253) = a3 + a5;
                *(_QWORD *)&v253 = __PAIR64__(a3, a2);
                *(_OWORD *)v333 = v253;
                v30 = *((_DWORD *)v21 + 8) & 0x43;
                v259 = 0;
                if ( (_BYTE)v30 != 67 )
                  bCvtPts1(v21, v333, 2LL);
                v31 = v333[0];
                v32 = v333[2];
                if ( v20 )
                {
                  v31 = v333[0] + 1;
                  v32 = v333[2] + 1;
                  ++v333[0];
                  ++v333[2];
                }
                if ( v31 > v32 )
                {
                  v136 = v31;
                  v333[0] = v32;
                  v31 = v32;
                  v333[2] = v136;
                  v32 = v136;
                }
                v33 = v333[1];
                v34 = v333[3];
                if ( v333[1] > v333[3] )
                {
                  v137 = v333[1];
                  v333[1] = v333[3];
                  v33 = v333[3];
                  v333[3] = v137;
                  v34 = v137;
                }
              }
              else
              {
                v353.x = a2;
                v354 = a2 + a4;
                v353.y = a3;
                v355 = a3;
                v356 = a2;
                v357 = a3 + a5;
                v259 = 1;
                EXFORMOBJ::bXform((EXFORMOBJ *)&v263, &v353, &v346, 3uLL);
                x = v346.x;
                v139 = v347;
                if ( (*((_DWORD *)v263 + 8) & 1) != 0 )
                {
                  if ( v346.x > v347 )
                  {
                    x = v346.x + 16;
                    v139 = v347 + 16;
                    v349 += 16;
                    v346.x += 16;
                    v347 += 16;
                  }
                  y = v346.y;
                  v141 = v350;
                  v142 = v348;
                  if ( v346.y > v350 )
                  {
                    y = v346.y + 16;
                    v142 = v348 + 16;
                    v141 = v350 + 16;
                    v346.y += 16;
                    v350 += 16;
                    v348 += 16;
                  }
                }
                else
                {
                  v141 = v350;
                  v142 = v348;
                  y = v346.y;
                }
                v351 = v139 + v349 - x;
                v352 = v141 + v142 - y;
                v143 = (v139 > x) ^ (v139 <= v351);
                v144 = (v142 > y) ^ (v142 <= v352);
                v145 = v143 ^ 3;
                if ( *(&v346.x + 2 * v143) <= *(&v346.x + 2 * (v143 ^ 3LL)) )
                  v145 = v143;
                v146 = v145;
                LODWORD(v253) = (*(&v346.x + 2 * v145) + 15) >> 4;
                v147 = v144 ^ 3;
                if ( *(&v346.y + 2 * v144) <= *(&v346.y + 2 * (v144 ^ 3LL)) )
                  v147 = v144;
                DWORD1(v253) = (*(&v346.y + 2 * v147) + 15) >> 4;
                DWORD2(v253) = (*(&v346.x + 2 * (v146 ^ 3)) + 15) >> 4;
                HIDWORD(v253) = (*(&v346.y + 2 * (v147 ^ 3LL)) + 15) >> 4;
                *(_OWORD *)v333 = v253;
                v34 = HIDWORD(v253);
                v32 = DWORD2(v253);
                v33 = DWORD1(v253);
                v31 = v253;
              }
              if ( v31 != v32 && v33 != v34 )
              {
                if ( (*((_DWORD *)v244 + 9) & 0xE0) != 0 )
                  XDCOBJ::vAccumulate((XDCOBJ *)&v244, (struct ERECTL *)v333);
                v312 = 0LL;
                memset(v310, 0, sizeof(v310));
                v328 = 0LL;
                v313 = 0;
                v314 = 0;
                v319 = 0LL;
                v320 = 256;
                v322 = 0LL;
                v323 = 256;
                v311 = 0LL;
                v317 = 0;
                v315 = 0LL;
                v316 = 0LL;
                v324 = 0LL;
                v327 = 0LL;
                v325 = 0LL;
                v326 = 0LL;
                v329 = 0LL;
                v318 = 0LL;
                v321 = 0LL;
                if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                      (DEVLOCKBLTOBJ *)v310,
                                      (struct XDCOBJ *)&v244,
                                      (struct XDCOBJ *)&v246,
                                      v34) )
                {
                  v218 = XDCOBJ::bFullScreen((XDCOBJ *)&v246);
                  v60 = XDCOBJ::bFullScreen((XDCOBJ *)&v244) | v218;
                  goto LABEL_225;
                }
                v37 = v244;
                v38 = *((_QWORD *)v244 + 62);
                v255 = v38;
                if ( !v38
                  || (v39 = *((_QWORD *)v244 + 11),
                      v40 = *(_QWORD *)(v38 + 128),
                      v241 = v39,
                      v41 = *((_QWORD *)v246 + 62),
                      (v249 = v41) == 0) )
                {
                  v60 = 1;
                  goto LABEL_225;
                }
                if ( *(_DWORD *)(v41 + 656) )
                {
                  if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v41 + 656) )
                    goto LABEL_491;
                  v38 = v255;
                }
                v42 = *(_DWORD *)(v41 + 112);
                if ( (v42 & 0x800) != 0 )
                {
                  v148 = UserSurfaceAccessCheck(*(_QWORD *)(v41 + 648));
                }
                else
                {
                  if ( (v42 & 0x10000000) == 0 )
                  {
LABEL_65:
                    if ( ((*(_DWORD *)(v38 + 116) & 8) != 0 || *(_QWORD *)(v38 + 224))
                      && (*(_WORD *)(v38 + 102) & 0x200) != 0 )
                    {
                      goto LABEL_491;
                    }
                    v43 = *(_DWORD *)(v38 + 112);
                    if ( (v43 & 0x800) != 0 )
                    {
                      v133 = UserSurfaceAccessCheck(*(_QWORD *)(v38 + 648));
                    }
                    else
                    {
                      if ( (v43 & 0x10000000) == 0 )
                      {
LABEL_69:
                        v243 = HIBYTE(a11) & 1;
                        if ( (a11 & 0x1000000) != 0 )
                        {
                          if ( *(_DWORD *)(v41 + 96) != 6
                            || (v44 = *(_QWORD *)(v41 + 128)) == 0
                            || (v45 = *(_DWORD *)(v44 + 24), (v45 & 8) == 0)
                            && ((v45 & 2) == 0
                             || (v149 = *(_DWORD **)(v44 + 112), *v149 != 16711680)
                             || v149[1] != 65280
                             || v149[2] != 255) )
                          {
                            v150 = 87;
LABEL_490:
                            EngSetLastError(v150);
                            v60 = 0;
                            goto LABEL_225;
                          }
                        }
                        v46 = _mm_cvtsi128_si32(*(__m128i *)v333);
                        v305 = *(_OWORD *)v333;
                        v47 = (int *)((char *)v244 + 1024);
                        if ( (*((_DWORD *)v244 + 10) & 1) == 0 )
                          v47 = (int *)((char *)v244 + 1016);
                        v48 = *v47;
                        v333[0] = v46;
                        if ( (unsigned __int64)(v48 + v46 + 0x80000000LL) > 0xFFFFFFFF )
                          goto LABEL_489;
                        if ( (unsigned __int64)(v48 + v333[2] + 0x80000000LL) > 0xFFFFFFFF )
                          goto LABEL_489;
                        v49 = v47[1];
                        if ( (unsigned __int64)(v49 + v333[1] + 0x80000000LL) > 0xFFFFFFFF
                          || (unsigned __int64)(v49 + v333[3] + 0x80000000LL) > 0xFFFFFFFF )
                        {
                          goto LABEL_489;
                        }
                        v333[0] = v48 + v46;
                        v333[2] += *v47;
                        v333[1] += v47[1];
                        v333[3] += v47[1];
                        v50 = (int *)((char *)v246 + 1024);
                        if ( (*((_DWORD *)v246 + 10) & 1) == 0 )
                          v50 = (int *)((char *)v246 + 1016);
                        v51 = *v50;
                        if ( (unsigned __int64)(v51 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
                          || (unsigned __int64)(v51 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                          || (v52 = v50[1], (unsigned __int64)(v52 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                          || (unsigned __int64)(v52 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
                        {
LABEL_489:
                          v150 = 534;
                          goto LABEL_490;
                        }
                        v53 = v51 + prclDest.left;
                        v54 = v249;
                        prclDest.left = v53;
                        v36 = (unsigned int)(*v50 + prclDest.right);
                        prclDest.right += *v50;
                        v38 = (unsigned int)(v50[1] + prclDest.top);
                        prclDest.top += v50[1];
                        v55 = v50[1] + prclDest.bottom;
                        prclDest.bottom = v55;
                        v56 = *(_WORD *)(v249 + 100) == 1;
                        v57 = *(_DWORD **)(v249 + 48);
                        v273 = v57;
                        if ( v56 && v57 && (v57[10] & 0x20000) != 0 )
                        {
                          v151 = v57[646];
                          if ( v53 < v151 )
                            goto LABEL_310;
                          v152 = v57[647];
                          if ( (int)v38 < v152
                            || (int)v36 > *(_DWORD *)(v249 + 56) + v151
                            || v55 > v152 + *(_DWORD *)(v249 + 60) )
                          {
                            goto LABEL_310;
                          }
                        }
                        else if ( v53 < 0
                               || (int)v38 < 0
                               || (int)v36 > *(_DWORD *)(v249 + 56)
                               || v55 > *(_DWORD *)(v249 + 60) )
                        {
LABEL_310:
                          v35 = 1LL;
                          v58 = 1;
LABEL_91:
                          if ( v249 == v255 )
                          {
                            v304 = prclDest;
                            ERECTL::operator*=(&v304.left, v333);
                            if ( !ERECTL::bEmpty((ERECTL *)&v304) )
                              goto LABEL_488;
                            v54 = v249;
                            v35 = 1LL;
                          }
                          if ( !v58 )
                          {
                            v59 = 1;
                            if ( v243 || BYTE2(a11) != 0xFF || (v13 & 1) != 0 )
                            {
                              v60 = 1;
                            }
                            else
                            {
                              v130 = *((_QWORD *)v244 + 122);
                              v131 = v262;
                              v132 = *(_BYTE *)(v130 + 215);
                              *(_BYTE *)(v130 + 215) = 3;
                              v60 = GreStretchBltInternal(v131, a2, a3, a5, v258, a7, v248, a9, a10, 13369376, -1, 0);
                              v54 = v249;
                              v59 = 0;
                              v35 = 1LL;
                              v38 = *((_QWORD *)v244 + 122);
                              *(_BYTE *)(v38 + 215) = v132;
                            }
                            if ( (v59 & v60) == 0 )
                              goto LABEL_225;
                            v61 = *(_QWORD *)(v54 + 128);
                            v261 = 0LL;
                            v62 = (_DWORD *)*((_QWORD *)v246 + 122);
                            v63 = *((_QWORD *)v246 + 11);
                            v227 = v62[45];
                            v228 = v62[46];
                            v232 = v62[44];
                            if ( !v61 )
                            {
                              if ( !v40 )
                                goto LABEL_317;
                              if ( (*(_DWORD *)(v40 + 24) & 0x800) != 0 )
                              {
                                v153 = *(_QWORD *)(v39 + 80);
                                if ( !v153 || v153 == *(_QWORD *)(v39 + 72) )
                                  goto LABEL_317;
                              }
                            }
                            if ( v40 || (*(_DWORD *)(v61 + 24) & 0x800) == 0 )
                              goto LABEL_99;
                            v154 = *(_QWORD *)(v39 + 80);
                            if ( !v154 )
                            {
LABEL_317:
                              v252[0] = xloIdent;
                              v237 = 1;
                              goto LABEL_118;
                            }
                            if ( v154 == *(_QWORD *)(v39 + 72) )
                            {
                              v252[0] = xloIdent;
                              v237 = 1;
                            }
                            else
                            {
LABEL_99:
                              if ( v61 && v40 )
                              {
                                v64 = *(_QWORD *)(v61 + 120);
                                if ( v64 == v61 )
                                  v65 = *(_DWORD *)(v61 + 32);
                                else
                                  v65 = *(_DWORD *)(v64 + 32);
                                v66 = *(_QWORD *)(v40 + 120);
                                if ( v66 == v40 )
                                  v67 = *(_DWORD *)(v40 + 32);
                                else
                                  v67 = *(_DWORD *)(v66 + 32);
                                if ( v65 == v67 )
                                {
                                  v252[0] = xloIdent;
                                  v237 = 1;
                                  goto LABEL_118;
                                }
                                v68 = *(_DWORD *)(v61 + 56);
                                v294 = v39;
                                v295 = v63;
                                v301 = v40;
                                v296 = ghsemPalette;
                                GreAcquireSemaphore(ghsemPalette);
                                v69 = *(_QWORD *)(v61 + 120);
                                for ( i = 0; i < 8; ++i )
                                {
                                  if ( v69 == v61 )
                                    v71 = *(_DWORD *)(v61 + 32);
                                  else
                                    v71 = *(_DWORD *)(v69 + 32);
                                  if ( *((_DWORD *)&xlateTable + 8 * v68 + 4) == v71 )
                                  {
                                    v155 = XEPALOBJ::ulTime((XEPALOBJ *)&v301);
                                    if ( *(_DWORD *)(v156 + v157 + 20) == v155 )
                                    {
                                      v158 = XEPALOBJ::ulTime((XEPALOBJ *)&v294);
                                      if ( *(_DWORD *)(v159 + v160 + 28) == v158 )
                                      {
                                        v161 = *(_DWORD **)(v159 + v160 + 8);
                                        v252[0] = v161;
                                        if ( (v161[19] & 0x6000) == 0 )
                                        {
                                          if ( (v161[1] & 4) == 0 && (v161[19] & 0x100) == 0
                                            || (v221 = v161[19] & 0x100, (v161[1] & 4) != 0)
                                            && (v221 = v161[19] & 0x100, v227 == v161[6])
                                            && (v221 = v161[19] & 0x100,
                                                v162 = XEPALOBJ::ulTime((XEPALOBJ *)&v295),
                                                *(_DWORD *)(v159 + v160 + 24) == v162)
                                            || v221 && v228 == v161[7] && v232 == v161[8] )
                                          {
                                            _InterlockedIncrement((volatile signed __int32 *)(v159 + v160));
                                            *(_DWORD *)(v61 + 56) = v68;
                                            SEMOBJ::vUnlock((SEMOBJ *)&v296);
                                            v237 = 1;
                                            goto LABEL_118;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  v68 = ((_BYTE)v68 + 1) & 7;
                                }
                                if ( ghsemPalette )
                                {
                                  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                  GreReleaseSemaphoreInternal(ghsemPalette);
                                }
                              }
                              XlateObject = CreateXlateObject(0LL, 0LL, v61, v40, v63, v39, v228, v232, v227, 0);
                              v252[0] = XlateObject;
                              if ( XlateObject )
                              {
                                if ( v61 && v40 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                                  EXLATEOBJ::vAddToCache(v252, v61, v40, v63, v39);
                                v237 = 1;
                              }
                              else
                              {
                                v237 = 0;
                              }
                            }
LABEL_118:
                            v262 = (HDC)v252[0];
                            v73 = *((_QWORD *)v246 + 122);
                            v233 = *(_DWORD *)(v73 + 176);
                            v229 = *(_DWORD *)(v73 + 184);
                            if ( (v61
                               || gppalRGB
                               && ((*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                                || (v163 = *(_QWORD *)(v63 + 80)) != 0 && v163 != *(_QWORD *)(v63 + 72)))
                              && (gppalRGB
                               || (*(_DWORD *)(v61 + 24) & 0x800) == 0
                               || (v164 = *(_QWORD *)(v63 + 80)) != 0 && v164 != *(_QWORD *)(v63 + 72)) )
                            {
                              if ( !v61 || !gppalRGB )
                              {
LABEL_135:
                                v82 = (XLATEOBJ *)CreateXlateObject(
                                                    0LL,
                                                    0LL,
                                                    v61,
                                                    gppalRGB,
                                                    v63,
                                                    v63,
                                                    v229,
                                                    v233,
                                                    v227,
                                                    0);
                                pxlo = v82;
                                v83 = v82;
                                v250 = v82;
                                if ( v82 )
                                {
                                  if ( v61 && gppalRGB && (v82[3].flXlate & 0x200) == 0 )
                                    EXLATEOBJ::vAddToCache(&v250, v61, gppalRGB, v63, v63);
                                  v84 = 1;
                                }
                                else
                                {
                                  v84 = 0;
                                }
LABEL_141:
                                v225 = v237 & v84;
                                v258 = (HDC)v83;
                                v85 = *((_QWORD *)v246 + 122);
                                v234 = *(_DWORD *)(v85 + 176);
                                v230 = *(_DWORD *)(v85 + 184);
                                if ( !v40
                                  && (!gppalRGB
                                   || (*((_DWORD *)gppalRGB + 6) & 0x800) != 0
                                   && ((v173 = *(_QWORD *)(v39 + 80)) == 0 || v173 == *(_QWORD *)(v39 + 72))) )
                                {
                                  v95 = xloIdent;
                                  v251 = xloIdent;
                                  goto LABEL_163;
                                }
                                if ( !gppalRGB && (*(_DWORD *)(v40 + 24) & 0x800) != 0 )
                                {
                                  v174 = *(_QWORD *)(v39 + 80);
                                  if ( !v174 || v174 == *(_QWORD *)(v39 + 72) )
                                    goto LABEL_371;
                                }
                                if ( v40 && gppalRGB )
                                {
                                  v86 = *(_QWORD *)(v40 + 120);
                                  if ( v86 == v40 )
                                    v87 = *(_DWORD *)(v40 + 32);
                                  else
                                    v87 = *(_DWORD *)(v86 + 32);
                                  v88 = *((_QWORD *)gppalRGB + 15);
                                  if ( (struct PALETTE *)v88 == gppalRGB )
                                    v89 = *((_DWORD *)gppalRGB + 8);
                                  else
                                    v89 = *(_DWORD *)(v88 + 32);
                                  if ( v87 == v89 )
                                  {
LABEL_371:
                                    v95 = xloIdent;
                                    v251 = xloIdent;
                                    goto LABEL_163;
                                  }
                                  if ( gppalRGB )
                                  {
                                    v90 = *(_DWORD *)(v40 + 56);
                                    v302 = v39;
                                    v303 = v39;
                                    v293 = gppalRGB;
                                    v288 = ghsemPalette;
                                    GreAcquireSemaphore(ghsemPalette);
                                    v91 = *(_QWORD *)(v40 + 120);
                                    for ( j = 0; j < 8; ++j )
                                    {
                                      if ( v91 == v40 )
                                        v93 = *(_DWORD *)(v40 + 32);
                                      else
                                        v93 = *(_DWORD *)(v91 + 32);
                                      if ( *((_DWORD *)&xlateTable + 8 * v90 + 4) == v93 )
                                      {
                                        v175 = XEPALOBJ::ulTime((XEPALOBJ *)&v293);
                                        if ( *(_DWORD *)(v176 + v177 + 20) == v175 )
                                        {
                                          v178 = XEPALOBJ::ulTime((XEPALOBJ *)&v302);
                                          if ( *(_DWORD *)(v179 + v180 + 28) == v178 )
                                          {
                                            v181 = *(XLATEOBJ **)(v179 + v180 + 8);
                                            v251 = v181;
                                            if ( (v181[3].flXlate & 0x6000) == 0 )
                                            {
                                              if ( (v181->flXlate & 4) == 0 && (v181[3].flXlate & 0x100) == 0
                                                || (v223 = v181[3].flXlate & 0x100, (v181->flXlate & 4) != 0)
                                                && (v223 = v181[3].flXlate & 0x100, v227 == v181[1].iUniq)
                                                && (v223 = v181[3].flXlate & 0x100,
                                                    v182 = XEPALOBJ::ulTime((XEPALOBJ *)&v303),
                                                    *(_DWORD *)(v179 + v180 + 24) == v182)
                                                || v223
                                                && v230 == v181[1].flXlate
                                                && v234 == *(_DWORD *)&v181[1].iSrcType )
                                              {
                                                _InterlockedIncrement((volatile signed __int32 *)(v179 + v180));
                                                *(_DWORD *)(v40 + 56) = v90;
                                                SEMOBJ::vUnlock((SEMOBJ *)&v288);
                                                v83 = v250;
                                                v95 = v251;
                                                pxlo = v250;
                                                goto LABEL_163;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      v90 = ((_BYTE)v90 + 1) & 7;
                                    }
                                    if ( ghsemPalette )
                                    {
                                      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                      GreReleaseSemaphoreInternal(ghsemPalette);
                                    }
                                  }
                                }
                                v94 = CreateXlateObject(0LL, 0LL, v40, gppalRGB, v39, v39, v230, v234, v227, 0);
                                v251 = (XLATEOBJ *)v94;
                                v95 = (XLATEOBJ *)v94;
                                if ( v94 )
                                {
                                  if ( v40 && gppalRGB && (*(_DWORD *)(v94 + 76) & 0x200) == 0 )
                                    EXLATEOBJ::vAddToCache(&v251, v40, gppalRGB, v39, v39);
                                }
                                else
                                {
                                  v225 = 0;
                                }
LABEL_163:
                                v96 = *((_QWORD *)v246 + 122);
                                v235 = *(_DWORD *)(v96 + 176);
                                v231 = *(_DWORD *)(v96 + 184);
                                if ( (gppalRGB
                                   || v40
                                   && ((*(_DWORD *)(v40 + 24) & 0x800) == 0
                                    || (v183 = *(_QWORD *)(v39 + 80)) != 0 && v183 != *(_QWORD *)(v39 + 72)))
                                  && (v40
                                   || (*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                                   || (v184 = *(_QWORD *)(v39 + 80)) != 0 && v184 != *(_QWORD *)(v39 + 72)) )
                                {
                                  if ( !gppalRGB || !v40 )
                                  {
LABEL_180:
                                    v106 = CreateXlateObject(0LL, 0LL, gppalRGB, v40, v39, v39, v231, v235, v227, 0);
                                    v256 = (XLATEOBJ *)v106;
                                    v107 = (XLATEOBJ *)v106;
                                    if ( v106 )
                                    {
                                      v108 = v241;
                                      if ( gppalRGB && v40 && (*(_DWORD *)(v106 + 76) & 0x200) == 0 )
                                        EXLATEOBJ::vAddToCache(&v256, gppalRGB, v40, v241, v241);
                                      v60 = 1;
                                      v109 = 1;
                                      goto LABEL_186;
                                    }
                                    v109 = 0;
                                    v60 = 1;
LABEL_415:
                                    v108 = v241;
LABEL_186:
                                    v239 = v225 & v109;
                                    v110 = *((_QWORD *)v244 + 144);
                                    if ( v110
                                      && (*((_DWORD *)v244 + 10) & 2) != 0
                                      && (unsigned int)DC::bDpiScaledSurface(v244) )
                                    {
                                      v111 = v110;
                                    }
                                    else
                                    {
                                      v111 = *((_QWORD *)v244 + 142);
                                    }
                                    if ( v111 )
                                    {
                                      if ( !v110
                                        || (*((_DWORD *)v244 + 10) & 2) == 0
                                        || !(unsigned int)DC::bDpiScaledSurface(v244) )
                                      {
                                        v112 = (struct REGION *)*((_QWORD *)v244 + 142);
                                      }
                                    }
                                    else
                                    {
                                      v112 = DC::prgnVisSnap(v244);
                                    }
                                    v342 = 0LL;
                                    v343 = 0;
                                    v344 = 1;
                                    v345 = 0LL;
                                    XCLIPOBJ::vSetup((XCLIPOBJ *)v337, v112, (struct ERECTL *)v333, 0);
                                    if ( v338 == v340 || v339 == v341 )
                                      goto LABEL_247;
                                    v113 = v255;
                                    *(_QWORD *)&v253 = 0LL;
                                    BYTE8(v253) = 0;
                                    HIDWORD(v253) = 0;
                                    v114 = *(_QWORD *)(v255 + 48);
                                    if ( v257 )
                                    {
                                      v129 = *(_DWORD *)(*((_QWORD *)v244 + 122) + 108LL);
                                      if ( (v129 & 1) != 0 && (v129 & 9) != 9 )
                                      {
                                        v278[1] = *(_DWORD *)(v249 + 56);
                                        v278[2] = *(_DWORD *)(v249 + 60);
                                        v278[0] = *(_DWORD *)(v249 + 96);
                                        v193 = *(_QWORD **)(v249 + 128);
                                        v279 = 0uLL;
                                        v280 = 0;
                                        *(_QWORD *)((char *)&v279 + 4) = *v193;
                                        SURFMEM::bCreateDIB(
                                          (SURFMEM *)&v253,
                                          (struct _DEVBITMAPINFO *)v278,
                                          0LL,
                                          0LL,
                                          0,
                                          0LL,
                                          0LL,
                                          0,
                                          1,
                                          0,
                                          0);
                                        if ( !(_QWORD)v253 )
                                          goto LABEL_467;
                                        v334 = 0LL;
                                        v274 = 0LL;
                                        v56 = (*(_DWORD *)(v249 + 112) & 0x400) == 0;
                                        v335 = *(_DWORD *)(v249 + 56);
                                        v336 = *(_DWORD *)(v249 + 60);
                                        if ( !(v56
                                             ? ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, __int64 *, __int64 *))EngCopyBits)(
                                                 v253 + 24,
                                                 v249 + 24,
                                                 0LL,
                                                 0LL,
                                                 &v334,
                                                 &v274)
                                             : (*((unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))v273
                                                + 355))(
                                                 v253 + 24,
                                                 v249 + 24,
                                                 0LL,
                                                 0LL,
                                                 &v334,
                                                 &v274)) )
                                          goto LABEL_467;
                                        v195 = *(_DWORD *)(v253 + 96);
                                        if ( (unsigned int)(v195 - 1) > 5 )
                                          goto LABEL_467;
                                        ((void (*)(void))(&apfnMirror)[v195])();
                                        v113 = v255;
                                        v249 = v253;
                                      }
                                    }
                                    v269 = 0LL;
                                    v270 = 0;
                                    v271 = 0;
                                    v266 = 0LL;
                                    v267 = 0;
                                    v268 = 0;
                                    if ( !v259 )
                                    {
                                      v115 = v258;
                                      goto LABEL_196;
                                    }
                                    v281[1] = v333[2] - v333[0];
                                    memset(v283, 0, sizeof(v283));
                                    v282 = (unsigned int)(v333[3] - v333[1]);
                                    v284 = 0;
                                    v281[0] = 6;
                                    *(_QWORD *)v283 = *(_QWORD *)gppalRGB;
                                    v196 = SURFMEM::bCreateDIB(
                                             (SURFMEM *)&v269,
                                             (struct _DEVBITMAPINFO *)v281,
                                             0LL,
                                             0LL,
                                             0,
                                             0LL,
                                             0LL,
                                             0,
                                             1,
                                             0,
                                             0) & v239;
                                    if ( v196 )
                                    {
                                      if ( !v243 )
                                      {
                                        v285[1] = prclDest.right - prclDest.left;
                                        v285[2] = prclDest.bottom - prclDest.top;
                                        v286 = 0uLL;
                                        v287 = 0;
                                        v285[0] = 6;
                                        *(_QWORD *)((char *)&v286 + 4) = *(_QWORD *)gppalRGB;
                                        DIB = SURFMEM::bCreateDIB(
                                                (SURFMEM *)&v266,
                                                (struct _DEVBITMAPINFO *)v285,
                                                0LL,
                                                0LL,
                                                0,
                                                0LL,
                                                0LL,
                                                0,
                                                1,
                                                0,
                                                0);
                                        v196 = DIB;
                                        if ( DIB )
                                        {
                                          pptlSrc.x = prclDest.left;
                                          v257 = prclDest.top;
                                          pptlSrc.y = prclDest.top;
                                          if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
                                          {
                                            v198 = 87;
LABEL_466:
                                            EngSetLastError(v198);
                                            SURFMEM::~SURFMEM((SURFMEM *)&v266);
                                            SURFMEM::~SURFMEM((SURFMEM *)&v269);
LABEL_467:
                                            SURFMEM::~SURFMEM((SURFMEM *)&v253);
                                            v60 = 0;
LABEL_247:
                                            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v256);
                                            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v251);
                                            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v250);
                                            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v261);
                                            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v252);
LABEL_225:
                                            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(
                                              (DEVLOCKBLTOBJ *)v310,
                                              v38,
                                              (SURFACE **)v35,
                                              v36);
                                            goto LABEL_226;
                                          }
                                          if ( prclDest.right > prclDest.left
                                            && prclDest.bottom > prclDest.top
                                            && v197 <= *(_DWORD *)(v249 + 56)
                                            && v257 <= *(_DWORD *)(v249 + 60) )
                                          {
                                            v199 = 0LL;
                                            if ( v266 )
                                              v199 = (SURFOBJ *)(v266 + 24);
                                            EngCopyBits(v199, (SURFOBJ *)(v249 + 24), 0LL, pxlo, &prclDest, &pptlSrc);
                                          }
                                          v200 = 0;
                                          v249 = v266;
                                          v201 = *(_DWORD **)(v266 + 80);
                                          v202 = (_DWORD *)((char *)v201
                                                          + *(_DWORD *)(v266 + 60) * *(_DWORD *)(v266 + 88));
                                          if ( v201 != v202 )
                                          {
                                            v203 = v266;
                                            do
                                            {
                                              if ( v200 >= prclDest.top && v200 < prclDest.bottom )
                                              {
                                                v204 = v201;
                                                v205 = 0;
                                                v206 = *(int *)(v203 + 56);
                                                v207 = &v201[v206];
                                                v208 = (v206 * 4) >> 2;
                                                if ( v201 > v207 )
                                                  v208 = 0LL;
                                                if ( v208 )
                                                {
                                                  for ( k = 0LL; k != v208; ++k )
                                                  {
                                                    if ( v205 >= prclDest.left && v205 < prclDest.right )
                                                      *v204 |= 0xFF000000;
                                                    ++v205;
                                                    ++v204;
                                                  }
                                                  v203 = v266;
                                                }
                                              }
                                              ++v200;
                                              v201 = (_DWORD *)((char *)v201 + *(int *)(v203 + 88));
                                            }
                                            while ( v201 != v202 );
                                            v249 = v203;
                                            v108 = v241;
                                          }
                                          HIBYTE(a11) |= 1u;
                                          v196 = DIB;
                                          v258 = (HDC)xloIdent;
                                        }
                                      }
                                      v210 = *(_DWORD **)(v269 + 72);
                                      v211 = (unsigned __int64)*(unsigned int *)(v269 + 64) >> 2;
                                      if ( v211 )
                                      {
                                        if ( ((unsigned __int8)v210 & 4) == 0 )
                                          goto LABEL_462;
                                        *v210 = 0;
                                        if ( --v211 )
                                        {
                                          ++v210;
LABEL_462:
                                          memset(v210, 0, 8 * (v211 >> 1));
                                          v108 = v241;
                                          if ( (v211 & 1) != 0 )
                                            v210[v211 - 1] = 0;
                                        }
                                      }
                                    }
                                    if ( v196 )
                                    {
                                      `vector constructor iterator'(
                                        &pptfx,
                                        8uLL,
                                        3uLL,
                                        (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                                      v242.x = v346.x - 16 * v305;
                                      v242.y = v346.y - 16 * DWORD1(v305);
                                      pptfx = v242;
                                      v242.x = v347 - 16 * v305;
                                      v242.y = v348 - 16 * DWORD1(v305);
                                      v359 = v242;
                                      v212 = 0LL;
                                      v242.x = v349 - 16 * v305;
                                      v242.y = v350 - 16 * DWORD1(v305);
                                      v360 = v242;
                                      if ( v249 )
                                        v212 = (SURFOBJ *)(v249 + 24);
                                      if ( v269 )
                                        v213 = (SURFOBJ *)(v269 + 24);
                                      else
                                        v213 = 0LL;
                                      EngPlgBlt(
                                        v213,
                                        v212,
                                        0LL,
                                        0LL,
                                        (XLATEOBJ *)v258,
                                        0LL,
                                        0LL,
                                        &pptfx,
                                        &prclDest,
                                        0LL,
                                        3u);
                                      v331 = 0LL;
                                      inited = EXLATEOBJ::bInitXlateObj(
                                                 &v261,
                                                 0LL,
                                                 0LL,
                                                 gppalRGB,
                                                 v40,
                                                 0LL,
                                                 v108,
                                                 *(_DWORD *)(*((_QWORD *)v246 + 122) + 184LL),
                                                 *(_DWORD *)(*((_QWORD *)v246 + 122) + 176LL),
                                                 v227,
                                                 0);
                                      v115 = (HDC)xloIdent;
                                      v239 = inited;
                                      v262 = v261;
                                      v249 = v269;
                                      prclDest.right = v333[2] - v333[0];
                                      prclDest.bottom = v333[3] - v333[1];
                                      *(_QWORD *)&prclDest.left = 0LL;
                                      `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
                                      v113 = v255;
                                      v83 = pxlo;
LABEL_196:
                                      if ( v239 )
                                      {
                                        ++*(_DWORD *)(v113 + 92);
                                        v116 = v244;
                                        v117 = *((_QWORD *)v244 + 6);
                                        if ( v117 == *((_QWORD *)v246 + 6)
                                          || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v244)
                                          && *(_QWORD *)(v117 + 3520) == v215 )
                                        {
                                          if ( (*((_DWORD *)v116 + 9) & 0xE0) != 0 )
                                          {
                                            v330 = *(__m128i *)v333;
                                            XDCOBJ::vAccumulateTight((XDCOBJ *)&v244, v116, &v330);
                                            v113 = v255;
                                          }
                                          v306 = a11;
                                          v307 = v115;
                                          v308 = v95;
                                          v309 = v107;
                                          if ( v333[2] - v333[0] == prclDest.right - prclDest.left
                                            && v333[3] - v333[1] == prclDest.bottom - prclDest.top )
                                          {
                                            BYTE1(v306) = BYTE1(a11) & 0xFE;
                                          }
                                          if ( (*(_DWORD *)(v113 + 112) & 0x10000) != 0 )
                                            v118 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v114 + 3256);
                                          else
                                            v118 = EngAlphaBlend;
                                          if ( v249 )
                                            v119 = v249 + 24;
                                          else
                                            v119 = 0LL;
                                          v60 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, int *, RECTL *, int *))v118)(
                                                  v113 + 24,
                                                  v119,
                                                  v337,
                                                  v262,
                                                  v333,
                                                  &prclDest,
                                                  &v306);
                                          goto LABEL_208;
                                        }
                                        v216 = 87;
                                      }
                                      else
                                      {
                                        v216 = 6;
                                      }
                                      EngSetLastError(v216);
                                      v60 = 0;
LABEL_208:
                                      SURFMEM::~SURFMEM((SURFMEM *)&v266);
                                      SURFMEM::~SURFMEM((SURFMEM *)&v269);
                                      SURFMEM::~SURFMEM((SURFMEM *)&v253);
                                      if ( v107 )
                                      {
                                        cEntries = (int)v107[1].cEntries;
                                        if ( (int)cEntries >= 0 )
                                        {
                                          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                                          v83 = v250;
                                          v95 = v251;
                                        }
                                        else if ( (_DWORD)cEntries == -1 )
                                        {
                                          FreeThreadBufferWithTag(v107);
                                        }
                                      }
                                      if ( v95 )
                                      {
                                        v121 = (int)v95[1].cEntries;
                                        if ( (int)v121 >= 0 )
                                        {
                                          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v121);
                                          v83 = v250;
                                        }
                                        else if ( (_DWORD)v121 == -1 )
                                        {
                                          FreeThreadBufferWithTag(v95);
                                        }
                                      }
                                      if ( v83 )
                                      {
                                        v122 = (int)v83[1].cEntries;
                                        if ( (int)v122 >= 0 )
                                        {
                                          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v122);
                                        }
                                        else if ( (_DWORD)v122 == -1 )
                                        {
                                          FreeThreadBufferWithTag(v83);
                                        }
                                      }
                                      if ( v261 )
                                      {
                                        v217 = *((int *)v261 + 9);
                                        if ( (int)v217 < 0 )
                                        {
                                          if ( (_DWORD)v217 == -1 )
                                            FreeThreadBufferWithTag(v261);
                                        }
                                        else
                                        {
                                          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v217);
                                        }
                                      }
                                      if ( v252[0] )
                                      {
                                        v123 = *(int *)(v252[0] + 36LL);
                                        if ( (int)v123 >= 0 )
                                        {
                                          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v123);
                                        }
                                        else if ( (_DWORD)v123 == -1 )
                                        {
                                          FreeThreadBufferWithTag(v252[0]);
                                        }
                                      }
                                      goto LABEL_225;
                                    }
                                    v198 = 8;
                                    goto LABEL_466;
                                  }
                                  v97 = *((_QWORD *)gppalRGB + 15);
                                  if ( (struct PALETTE *)v97 == gppalRGB )
                                    v98 = *((_DWORD *)gppalRGB + 8);
                                  else
                                    v98 = *(_DWORD *)(v97 + 32);
                                  v99 = *(_QWORD *)(v40 + 120);
                                  if ( v99 == v40 )
                                    v100 = *(_DWORD *)(v40 + 32);
                                  else
                                    v100 = *(_DWORD *)(v99 + 32);
                                  if ( v98 != v100 )
                                  {
                                    v101 = *((_DWORD *)gppalRGB + 14);
                                    v290 = v39;
                                    v291 = v39;
                                    v289 = v40;
                                    v220 = v101;
                                    v292 = ghsemPalette;
                                    GreAcquireSemaphore(ghsemPalette);
                                    v102 = *((_QWORD *)gppalRGB + 15);
                                    v103 = 0;
                                    v104 = v220;
                                    for ( *(_QWORD *)v238 = v102; ; v102 = *(_QWORD *)v238 )
                                    {
                                      if ( (struct PALETTE *)v102 == gppalRGB )
                                        v105 = *((_DWORD *)gppalRGB + 8);
                                      else
                                        v105 = *(_DWORD *)(v102 + 32);
                                      if ( *((_DWORD *)&xlateTable + 8 * v104 + 4) == v105 )
                                      {
                                        v185 = XEPALOBJ::ulTime((XEPALOBJ *)&v289);
                                        if ( *(_DWORD *)(v186 + v187 + 20) == v185 )
                                        {
                                          v188 = XEPALOBJ::ulTime((XEPALOBJ *)&v290);
                                          if ( *(_DWORD *)(v189 + v190 + 28) == v188 )
                                          {
                                            v191 = *(XLATEOBJ **)(v189 + v190 + 8);
                                            v256 = v191;
                                            if ( (v191[3].flXlate & 0x6000) == 0 )
                                            {
                                              if ( (v191->flXlate & 4) == 0 && (v191[3].flXlate & 0x100) == 0
                                                || (v224 = v191[3].flXlate & 0x100, (v191->flXlate & 4) != 0)
                                                && (v224 = v191[3].flXlate & 0x100, v227 == v191[1].iUniq)
                                                && (v224 = v191[3].flXlate & 0x100,
                                                    v192 = XEPALOBJ::ulTime((XEPALOBJ *)&v291),
                                                    *(_DWORD *)(v189 + v190 + 24) == v192)
                                                || v224
                                                && v231 == v191[1].flXlate
                                                && v235 == *(_DWORD *)&v191[1].iSrcType )
                                              {
                                                _InterlockedIncrement((volatile signed __int32 *)(v189 + v190));
                                                *((_DWORD *)gppalRGB + 14) = v104;
                                                SEMOBJ::vUnlock((SEMOBJ *)&v292);
                                                v83 = v250;
                                                v95 = v251;
                                                v107 = v256;
                                                pxlo = v250;
                                                goto LABEL_394;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      ++v103;
                                      v104 = ((_BYTE)v104 + 1) & 7;
                                      if ( v103 >= 8 )
                                        break;
                                    }
                                    if ( ghsemPalette )
                                    {
                                      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                      GreReleaseSemaphoreInternal(ghsemPalette);
                                    }
                                    goto LABEL_180;
                                  }
                                }
                                v107 = xloIdent;
                                v256 = xloIdent;
LABEL_394:
                                v60 = 1;
                                v109 = 1;
                                goto LABEL_415;
                              }
                              v74 = *(_QWORD *)(v61 + 120);
                              if ( v74 == v61 )
                                v75 = *(_DWORD *)(v61 + 32);
                              else
                                v75 = *(_DWORD *)(v74 + 32);
                              v76 = *((_QWORD *)gppalRGB + 15);
                              if ( (struct PALETTE *)v76 == gppalRGB )
                                v77 = *((_DWORD *)gppalRGB + 8);
                              else
                                v77 = *(_DWORD *)(v76 + 32);
                              if ( v75 != v77 )
                              {
                                if ( gppalRGB )
                                {
                                  v78 = *(_DWORD *)(v61 + 56);
                                  v298 = v63;
                                  v299 = v63;
                                  v297 = gppalRGB;
                                  v300 = ghsemPalette;
                                  GreAcquireSemaphore(ghsemPalette);
                                  v79 = *(_QWORD *)(v61 + 120);
                                  for ( m = 0; m < 8; ++m )
                                  {
                                    if ( v79 == v61 )
                                      v81 = *(_DWORD *)(v61 + 32);
                                    else
                                      v81 = *(_DWORD *)(v79 + 32);
                                    if ( *((_DWORD *)&xlateTable + 8 * v78 + 4) == v81 )
                                    {
                                      v165 = XEPALOBJ::ulTime((XEPALOBJ *)&v297);
                                      if ( *(_DWORD *)(v166 + v167 + 20) == v165 )
                                      {
                                        v168 = XEPALOBJ::ulTime((XEPALOBJ *)&v298);
                                        if ( *(_DWORD *)(v169 + v170 + 28) == v168 )
                                        {
                                          v171 = *(XLATEOBJ **)(v169 + v170 + 8);
                                          v250 = v171;
                                          if ( (v171[3].flXlate & 0x6000) == 0 )
                                          {
                                            if ( (v171->flXlate & 4) == 0 && (v171[3].flXlate & 0x100) == 0
                                              || (v222 = v171[3].flXlate & 0x100, (v171->flXlate & 4) != 0)
                                              && (v222 = v171[3].flXlate & 0x100, v227 == v171[1].iUniq)
                                              && (v222 = v171[3].flXlate & 0x100,
                                                  v172 = XEPALOBJ::ulTime((XEPALOBJ *)&v299),
                                                  *(_DWORD *)(v169 + v170 + 24) == v172)
                                              || v222 && v229 == v171[1].flXlate && v233 == *(_DWORD *)&v171[1].iSrcType )
                                            {
                                              _InterlockedIncrement((volatile signed __int32 *)(v169 + v170));
                                              *(_DWORD *)(v61 + 56) = v78;
                                              SEMOBJ::vUnlock((SEMOBJ *)&v300);
                                              v83 = v250;
                                              v84 = 1;
                                              pxlo = v250;
                                              goto LABEL_141;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    v78 = ((_BYTE)v78 + 1) & 7;
                                  }
                                  if ( ghsemPalette )
                                  {
                                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                    GreReleaseSemaphoreInternal(ghsemPalette);
                                  }
                                }
                                goto LABEL_135;
                              }
                            }
                            v83 = xloIdent;
                            v84 = 1;
                            pxlo = xloIdent;
                            v250 = xloIdent;
                            goto LABEL_141;
                          }
LABEL_488:
                          EngSetLastError(0x57u);
                          v60 = 0;
                          goto LABEL_225;
                        }
                        v35 = 1LL;
                        v58 = 0;
                        goto LABEL_91;
                      }
                      v133 = UserScreenAccessCheck(512LL, v38);
                    }
                    if ( v133 )
                      goto LABEL_69;
LABEL_491:
                    EngSetLastError(6u);
                    v60 = 0;
                    goto LABEL_225;
                  }
                  v148 = UserScreenAccessCheck(v37, v38);
                }
                if ( !v148 )
                  goto LABEL_491;
                v38 = v255;
                goto LABEL_65;
              }
              v60 = 1;
LABEL_226:
              if ( v246 )
              {
                if ( (_DWORD)v247 && (*((_DWORD *)v246 + 11) & 2) != 0 )
                {
                  if ( !HIDWORD(v247) )
                  {
                    v124 = XDCOBJ::GetUserAttr((XDCOBJ *)&v246);
                    if ( v124 )
                      DC::RestoreAttributes(v246, v124);
                  }
                  *((_DWORD *)v246 + 11) &= ~2u;
                  LODWORD(v247) = 0;
                }
                v248 = 0;
                v125 = *(_QWORD *)v246;
                HmgDecrementExclusiveReferenceCountEx(v246, HIDWORD(v247), &v248);
                if ( v248 )
                  bDeleteDCInternalEx(v125, 0LL);
              }
              goto LABEL_235;
            }
          }
        }
LABEL_275:
        v60 = 0;
        EngSetLastError(0x57u);
        goto LABEL_226;
      }
      DC::vMarkTransformDirty(v17);
LABEL_281:
      v17 = v246;
      goto LABEL_26;
    }
    if ( v18 )
    {
LABEL_24:
      *((_DWORD *)v17 + 11) |= 2u;
      v17 = v246;
      LODWORD(v247) = 1;
      goto LABEL_25;
    }
    v19 = XDCOBJ::GetUserAttr((XDCOBJ *)&v246);
    if ( !v19 || DC::SaveAttributes(v246, v19) )
    {
      v17 = v246;
      goto LABEL_24;
    }
    _InterlockedDecrement((volatile signed __int32 *)v246 + 3);
LABEL_274:
    v246 = 0LL;
    goto LABEL_275;
  }
LABEL_263:
  EngSetLastError(6u);
  v60 = 0;
LABEL_235:
  if ( v244 )
  {
    if ( (_DWORD)v245 && (*((_DWORD *)v244 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v245) )
      {
        v126 = XDCOBJ::GetUserAttr((XDCOBJ *)&v244);
        if ( v126 )
          DC::RestoreAttributes(v244, v126);
      }
      *((_DWORD *)v244 + 11) &= ~2u;
      LODWORD(v245) = 0;
    }
    v260 = 0;
    v127 = *(_QWORD *)v244;
    HmgDecrementExclusiveReferenceCountEx(v244, HIDWORD(v245), &v260);
    if ( v260 )
      bDeleteDCInternalEx(v127, 0LL);
  }
  return v60;
}
