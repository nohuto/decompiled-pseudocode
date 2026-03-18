/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C0050D10
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C0050960 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C004E970 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C005021C (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     _DestroyMenu @ 0x1C00507F0 (_DestroyMenu.c)
 *     UnlockDesktopMenu @ 0x1C0050900 (UnlockDesktopMenu.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00509FC (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C0050BC8 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     GreSetFontEnumeration @ 0x1C0051C08 (GreSetFontEnumeration.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C0051C54 (UpdatePerUserKeyboardIndicators.c)
 *     GetEasTimeout @ 0x1C0051D58 (GetEasTimeout.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0051E94 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0052AC4 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     GetKbdLangSwitch @ 0x1C0053898 (GetKbdLangSwitch.c)
 *     SetIconMetrics @ 0x1C0053A98 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C0053C74 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0053DAC (xxxSetWindowNCMetrics.c)
 *     ReadPointerDeviceSettings @ 0x1C0069000 (ReadPointerDeviceSettings.c)
 *     _SetCaretBlinkTime @ 0x1C006A750 (_SetCaretBlinkTime.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C006AF00 (xxxUpdateSystemCursorsFromRegistry.c)
 *     RtlStringCchPrintfW @ 0x1C00B9E50 (RtlStringCchPrintfW.c)
 *     WakeRIT @ 0x1C00BAB30 (WakeRIT.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     SetMouseTrails @ 0x1C00BFDA4 (SetMouseTrails.c)
 *     xxxUserResetDisplayDevice @ 0x1C0138980 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     CheckEasPolicyChange @ 0x1C01A2560 (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // r15d
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // r12d
  int v8; // r14d
  int v9; // esi
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  USHORT Length; // ax
  int v15; // r14d
  unsigned int v16; // r15d
  __int64 v17; // rdx
  _QWORD *i; // rbx
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 *v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 *v24; // rbx
  int v25; // ebx
  __int64 EasTimeout; // rsi
  int v27; // eax
  unsigned int j; // ebx
  unsigned int v29; // eax
  void *v30; // rax
  unsigned int v31; // ecx
  bool v32; // zf
  int *v33; // rax
  int v35; // ebx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  LPCGUID v44; // r8
  LPCGUID v45; // r9
  int pData; // [rsp+28h] [rbp-D8h]
  unsigned int v47; // [rsp+50h] [rbp-B0h] BYREF
  char v48[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v49; // [rsp+58h] [rbp-A8h]
  unsigned int v50; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+64h] [rbp-9Ch] BYREF
  int v53; // [rsp+68h] [rbp-98h] BYREF
  int v54; // [rsp+6Ch] [rbp-94h] BYREF
  int v55; // [rsp+70h] [rbp-90h] BYREF
  int v56; // [rsp+74h] [rbp-8Ch]
  int v57; // [rsp+78h] [rbp-88h] BYREF
  int v58; // [rsp+7Ch] [rbp-84h] BYREF
  int v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v60; // [rsp+84h] [rbp-7Ch]
  int v61; // [rsp+88h] [rbp-78h] BYREF
  int v62; // [rsp+8Ch] [rbp-74h] BYREF
  _QWORD v63[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-60h]
  char v65[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v66[24]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v67[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v68; // [rsp+108h] [rbp+8h] BYREF
  int v69; // [rsp+110h] [rbp+10h]
  int v70; // [rsp+114h] [rbp+14h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  int v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+124h] [rbp+24h]
  int v74; // [rsp+128h] [rbp+28h]
  int v75; // [rsp+12Ch] [rbp+2Ch]
  int v76; // [rsp+130h] [rbp+30h]
  int v77; // [rsp+134h] [rbp+34h]
  int v78; // [rsp+138h] [rbp+38h]
  int v79; // [rsp+13Ch] [rbp+3Ch]
  int v80; // [rsp+140h] [rbp+40h]
  int v81; // [rsp+144h] [rbp+44h]
  int v82; // [rsp+148h] [rbp+48h]
  int v83; // [rsp+14Ch] [rbp+4Ch]
  int v84; // [rsp+150h] [rbp+50h]
  int v85; // [rsp+154h] [rbp+54h]
  int v86; // [rsp+158h] [rbp+58h]
  int v87; // [rsp+15Ch] [rbp+5Ch]
  int v88; // [rsp+160h] [rbp+60h]
  int v89; // [rsp+164h] [rbp+64h]
  int v90; // [rsp+168h] [rbp+68h]
  int v91; // [rsp+16Ch] [rbp+6Ch]
  int v92; // [rsp+170h] [rbp+70h]
  int v93; // [rsp+174h] [rbp+74h]
  int v94; // [rsp+178h] [rbp+78h]
  int v95; // [rsp+17Ch] [rbp+7Ch]
  int v96; // [rsp+180h] [rbp+80h]
  int v97; // [rsp+184h] [rbp+84h]
  int v98; // [rsp+188h] [rbp+88h]
  int v99; // [rsp+18Ch] [rbp+8Ch]
  int v100; // [rsp+190h] [rbp+90h]
  int v101; // [rsp+194h] [rbp+94h]
  int v102; // [rsp+198h] [rbp+98h]
  int v103; // [rsp+19Ch] [rbp+9Ch]
  int v104; // [rsp+1A0h] [rbp+A0h]
  int v105; // [rsp+1A4h] [rbp+A4h]
  __int64 v106; // [rsp+1A8h] [rbp+A8h]
  int v107; // [rsp+1B0h] [rbp+B0h]
  int v108; // [rsp+1B4h] [rbp+B4h]
  __int64 v109; // [rsp+1B8h] [rbp+B8h] BYREF
  int v110; // [rsp+1C0h] [rbp+C0h]
  int v111; // [rsp+1C4h] [rbp+C4h]
  int v112; // [rsp+1C8h] [rbp+C8h]
  int v113; // [rsp+1CCh] [rbp+CCh]
  int v114; // [rsp+1D0h] [rbp+D0h]
  int v115; // [rsp+1D4h] [rbp+D4h]
  int v116; // [rsp+1D8h] [rbp+D8h]
  int v117; // [rsp+1DCh] [rbp+DCh]
  int v118; // [rsp+1E0h] [rbp+E0h]
  int v119; // [rsp+1E4h] [rbp+E4h]
  int v120; // [rsp+1E8h] [rbp+E8h]
  int v121; // [rsp+1ECh] [rbp+ECh]
  int v122; // [rsp+1F0h] [rbp+F0h]
  int v123; // [rsp+1F4h] [rbp+F4h]
  int v124; // [rsp+1F8h] [rbp+F8h]
  int v125; // [rsp+1FCh] [rbp+FCh]
  int v126; // [rsp+200h] [rbp+100h]
  int v127; // [rsp+204h] [rbp+104h]
  __int64 v128; // [rsp+208h] [rbp+108h]
  int v129; // [rsp+210h] [rbp+110h]
  int v130; // [rsp+214h] [rbp+114h]
  __int64 v131; // [rsp+218h] [rbp+118h]
  int v132; // [rsp+220h] [rbp+120h]
  int v133; // [rsp+224h] [rbp+124h]
  int v134; // [rsp+228h] [rbp+128h]
  int v135; // [rsp+22Ch] [rbp+12Ch]
  int v136; // [rsp+230h] [rbp+130h]
  int v137; // [rsp+234h] [rbp+134h]
  int v138; // [rsp+238h] [rbp+138h]
  int v139; // [rsp+23Ch] [rbp+13Ch]
  int v140; // [rsp+240h] [rbp+140h]
  int v141; // [rsp+244h] [rbp+144h]
  int v142; // [rsp+248h] [rbp+148h]
  int v143; // [rsp+24Ch] [rbp+14Ch]
  int v144; // [rsp+250h] [rbp+150h]
  int v145; // [rsp+254h] [rbp+154h]
  int v146; // [rsp+258h] [rbp+158h]
  int v147; // [rsp+25Ch] [rbp+15Ch]
  int v148; // [rsp+260h] [rbp+160h]
  int v149; // [rsp+264h] [rbp+164h]
  int v150; // [rsp+268h] [rbp+168h]
  int v151; // [rsp+26Ch] [rbp+16Ch]
  int v152; // [rsp+270h] [rbp+170h]
  int v153; // [rsp+274h] [rbp+174h]
  int v154; // [rsp+278h] [rbp+178h]
  int v155; // [rsp+27Ch] [rbp+17Ch]
  int v156; // [rsp+280h] [rbp+180h]
  int v157; // [rsp+284h] [rbp+184h]
  int v158; // [rsp+288h] [rbp+188h]
  int v159; // [rsp+28Ch] [rbp+18Ch]
  int v160; // [rsp+290h] [rbp+190h]
  int v161; // [rsp+294h] [rbp+194h]
  __int64 v162; // [rsp+298h] [rbp+198h]
  int v163; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v164; // [rsp+2A8h] [rbp+1A8h]
  int v165; // [rsp+2B0h] [rbp+1B0h]
  int *v166; // [rsp+2B8h] [rbp+1B8h]
  int v167; // [rsp+2C0h] [rbp+1C0h]
  __int64 v168; // [rsp+2C8h] [rbp+1C8h]
  int v169; // [rsp+2D0h] [rbp+1D0h]
  int *v170; // [rsp+2D8h] [rbp+1D8h]
  int v171; // [rsp+2E0h] [rbp+1E0h]
  __int64 v172; // [rsp+2E8h] [rbp+1E8h]
  int v173; // [rsp+2F0h] [rbp+1F0h]
  int *v174; // [rsp+2F8h] [rbp+1F8h]
  int v175; // [rsp+300h] [rbp+200h]
  __int64 v176; // [rsp+308h] [rbp+208h]
  int v177; // [rsp+310h] [rbp+210h]
  __int64 v178; // [rsp+318h] [rbp+218h]
  int v179; // [rsp+320h] [rbp+220h] BYREF
  __int64 v180; // [rsp+328h] [rbp+228h]
  int v181; // [rsp+330h] [rbp+230h]
  int *v182; // [rsp+338h] [rbp+238h]
  int v183; // [rsp+340h] [rbp+240h]
  __int64 v184; // [rsp+348h] [rbp+248h]
  int v185; // [rsp+350h] [rbp+250h]
  int *v186; // [rsp+358h] [rbp+258h]
  int v187; // [rsp+360h] [rbp+260h]
  __int64 v188; // [rsp+368h] [rbp+268h]
  int v189; // [rsp+370h] [rbp+270h]
  int *v190; // [rsp+378h] [rbp+278h]
  int v191; // [rsp+380h] [rbp+280h]
  __int64 v192; // [rsp+388h] [rbp+288h]
  int v193; // [rsp+390h] [rbp+290h]
  int *v194; // [rsp+398h] [rbp+298h]
  int v195; // [rsp+3A0h] [rbp+2A0h]
  __int64 v196; // [rsp+3A8h] [rbp+2A8h]
  int v197; // [rsp+3B0h] [rbp+2B0h]
  __int64 v198; // [rsp+3B8h] [rbp+2B8h]
  int v199; // [rsp+3C0h] [rbp+2C0h]
  __int64 v200; // [rsp+3C8h] [rbp+2C8h]
  int v201; // [rsp+3D0h] [rbp+2D0h]
  __int64 v202; // [rsp+3D8h] [rbp+2D8h]
  int v203; // [rsp+3E0h] [rbp+2E0h]
  __int64 v204; // [rsp+3E8h] [rbp+2E8h]
  int v205; // [rsp+3F0h] [rbp+2F0h]
  int *v206; // [rsp+3F8h] [rbp+2F8h]
  int v207; // [rsp+400h] [rbp+300h]
  __int64 v208; // [rsp+408h] [rbp+308h]
  int v209; // [rsp+410h] [rbp+310h]
  int *v210; // [rsp+418h] [rbp+318h]
  int v211; // [rsp+420h] [rbp+320h]
  __int64 v212; // [rsp+428h] [rbp+328h]
  int v213; // [rsp+430h] [rbp+330h]
  __int64 v214; // [rsp+438h] [rbp+338h]
  int v215; // [rsp+440h] [rbp+340h]
  __int64 v216; // [rsp+448h] [rbp+348h]
  int v217; // [rsp+450h] [rbp+350h]
  int *v218; // [rsp+458h] [rbp+358h]
  int v219; // [rsp+460h] [rbp+360h]
  __int64 v220; // [rsp+468h] [rbp+368h]
  int v221; // [rsp+470h] [rbp+370h]
  int *v222; // [rsp+478h] [rbp+378h]
  EVENT_DATA_DESCRIPTOR v223; // [rsp+480h] [rbp+380h] BYREF
  int *v224; // [rsp+4A0h] [rbp+3A0h]
  __int64 v225; // [rsp+4A8h] [rbp+3A8h]
  int *v226; // [rsp+4B0h] [rbp+3B0h]
  __int64 v227; // [rsp+4B8h] [rbp+3B8h]
  wchar_t pszDest[40]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _BYTE v229[80]; // [rsp+510h] [rbp+410h] BYREF

  v60 = a1;
  v56 = 0;
  v3 = a1;
  v67[15] = 4135;
  v53 = gulFontInformation;
  v51 = 96;
  v67[14] = 4;
  v68 = 112LL;
  v57 = 0;
  v59 = gdwPUDFlags & 0x100000;
  v4 = 0;
  v55 = 1;
  v58 = gdwPUDFlags & 0x10000;
  v83 = 3;
  v87 = 3;
  v107 = 13;
  v110 = 13;
  v112 = 13;
  v69 = 4;
  v70 = 17;
  v71 = 100LL;
  v72 = 4;
  v73 = 77;
  v74 = 199;
  v75 = 4;
  v76 = 4;
  v77 = 76;
  v78 = 198;
  v79 = 4;
  v80 = 4;
  v81 = 105;
  v82 = 14;
  v84 = 4;
  v85 = 109;
  v86 = 15;
  v88 = 4;
  v89 = 131;
  v90 = 18;
  v91 = 1;
  v92 = 4;
  v93 = 141;
  v94 = 624;
  v95 = 1;
  v96 = 4;
  v97 = 145;
  v98 = 625;
  v99 = 1;
  v100 = 4;
  v101 = 143;
  v102 = 626;
  v103 = 1;
  v104 = 4;
  v105 = 159;
  v106 = 628LL;
  v108 = 23;
  v109 = 106LL;
  v111 = 11;
  v113 = 15;
  v114 = 12;
  v115 = 32;
  v116 = 6;
  v142 = 17;
  v147 = 20;
  v150 = 20;
  v123 = 30;
  v155 = 50;
  v159 = 50;
  v182 = &gdtMNDropDown;
  v186 = &v59;
  v190 = &gnFastAltTabRows;
  v194 = &gnFastAltTabColumns;
  v143 = 30;
  v151 = 30;
  v127 = 96;
  v131 = 96LL;
  v5 = 2LL;
  v145 = 133;
  v188 = 133LL;
  v6 = 3LL;
  v117 = 500;
  v198 = gpsi + 4996LL;
  v118 = 12;
  v119 = 29;
  v120 = 97;
  v121 = 4;
  v122 = 12;
  v124 = 98;
  v125 = 4;
  v126 = 12;
  v128 = 7LL;
  v129 = 3;
  v130 = 28;
  v132 = 35;
  v133 = 111;
  v134 = 236;
  v135 = 1;
  v136 = 12;
  v137 = 127;
  v138 = 16;
  v139 = 1;
  v140 = 12;
  v141 = 129;
  v144 = 12;
  v146 = 19;
  v148 = 12;
  v149 = 135;
  v152 = 12;
  v153 = 137;
  v154 = 21;
  v156 = 12;
  v157 = 139;
  v158 = 22;
  v160 = 4;
  v161 = 169;
  v162 = 205LL;
  v179 = 4;
  v180 = 94LL;
  v181 = 400;
  v183 = 4;
  v184 = 107LL;
  v185 = 2;
  v187 = 4;
  v189 = 3;
  v191 = 4;
  v192 = 134LL;
  v193 = 7;
  v195 = 4;
  v196 = 159LL;
  v197 = 3;
  v199 = 4;
  v200 = 160LL;
  v163 = 12;
  v202 = gpsi + 5000LL;
  v167 = 12;
  v206 = &v53;
  v210 = &v57;
  v214 = gdwHungAppTimeout;
  v218 = &gdwWaitToKillTimeout;
  v222 = &v58;
  v166 = &gMouseThresh1;
  v171 = 12;
  v172 = 12LL;
  v7 = a1 & 1;
  v170 = &gMouseThresh2;
  v203 = 4;
  v207 = 4;
  v211 = 4;
  v215 = 4;
  v221 = 1;
  v8 = a1 & 2;
  v173 = 1;
  v9 = a1 & 4;
  v174 = &v55;
  v213 = 5000;
  v217 = 5000;
  v178 = gfEnableHexNumpad;
  v201 = 3;
  v204 = 200LL;
  v205 = 0;
  v208 = 618LL;
  v209 = 0;
  v212 = 621LL;
  v216 = 622LL;
  v219 = 23;
  v220 = 149LL;
  v164 = 10LL;
  v165 = 6;
  v168 = 11LL;
  v169 = 10;
  v175 = 35;
  v176 = 237LL;
  v177 = 0;
  v50 = v8;
  v49 = (unsigned __int8)v9;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL, v3);
    return 0LL;
  }
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v66, v3, v6, v5);
  if ( !ProfileUserName )
    return 0LL;
  if ( grpWinStaList )
  {
    v11 = *(_QWORD *)(grpWinStaList + 176LL);
    if ( v11 )
      Win32FreePool(v11);
    v12 = Win32AllocPool(ProfileUserName->Length, 1852863317LL);
    v13 = 0LL;
    *(_QWORD *)(grpWinStaList + 176LL) = v12;
    if ( v12 )
    {
      Length = ProfileUserName->Length;
      *(_WORD *)(grpWinStaList + 168LL) = 0;
      *(_WORD *)(grpWinStaList + 170LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 168LL), ProfileUserName);
    }
    if ( v7 )
      WakeRIT(64LL, v13);
    v9 = v49;
  }
  if ( !v8 || v9 )
    goto LABEL_13;
  v56 = CheckEasPolicyChange();
  v39 = v56;
  if ( !(unsigned int)CheckDesktopPolicyChange(ProfileUserName) && !v39 )
  {
    UserSetLastError(0LL, v40);
    FreeProfileUserName(ProfileUserName, v66);
    return 0LL;
  }
  v4 = 16;
LABEL_13:
  if ( v7 )
    gdwPolicyFlags |= 2u;
  v47 = 300;
  v15 = v4 | 8;
  if ( !v49 )
    v15 = v4;
  FastGetProfileValue(ProfileUserName, 4LL, 607LL, &v47, &gnllHooksTimeout, 4, v15);
  if ( gnllHooksTimeout <= 0 || gnllHooksTimeout >= 1000 )
    gnllHooksTimeout = 1000;
  if ( v7 )
  {
    if ( !gDpiAdjustedForLoggedOnUser )
    {
      FastGetProfileDwordEx(ProfileUserName, 4LL, L"LogPixels", 0LL, v15, &v51, 0LL);
      v54 = 0;
      v35 = DrvInitializeDxgkrnlDpiCache(&v54);
      v36 = PerformLegacyDpiUpgrade(ProfileUserName, v51);
      if ( v35 < 0 || v54 || gdmLogPixelsOfPrimary != gdmLogPixels || v36 || v51 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(pData) = 0;
        v48[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, pData, 0LL, 0LL, v48, a2) >= 0 )
        {
          if ( v48[0] )
            xxxUserResetDisplayDevice();
          UserReinitializeStockFonts(*(unsigned __int16 *)(gpsi + 6998LL), 1LL, 0);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  LoadCPUserPreferences(ProfileUserName, v15);
  v16 = v50;
  if ( !v50 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(ProfileUserName);
    if ( gbGreTextReady )
      xxxSetWindowNCMetrics(ProfileUserName, 0LL);
    SetMinMetrics(ProfileUserName);
    SetIconMetrics(ProfileUserName);
    GetKbdLangSwitch(ProfileUserName);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v63, 0LL);
      v64 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        v19 = i[7];
        if ( v19 )
        {
          v64 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v63, v19);
          *(_DWORD *)(*(_QWORD *)(i[7] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 7) )
          {
            v37 = v64;
            if ( !v64 )
              v37 = *(_QWORD *)v63[0];
            DestroyMenu(v37);
          }
        }
        v17 = i[8];
        if ( v17 )
        {
          v64 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v63, v17);
          *(_DWORD *)(*(_QWORD *)(i[8] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 8) )
          {
            v38 = v64;
            if ( !v64 )
              v38 = *(_QWORD *)v63[0];
            DestroyMenu(v38);
          }
        }
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v63, v17);
    }
    xxxUpdateSystemCursorsFromRegistry(ProfileUserName);
    xxxUpdateSystemIconsFromRegistry(ProfileUserName);
    v20 = 0;
    v21 = &v109;
    do
    {
      if ( (unsigned int)FastGetProfileIntFromID(
                           ProfileUserName,
                           *((unsigned int *)v21 - 2),
                           *(unsigned int *)v21,
                           *((unsigned int *)v21 + 1),
                           &v47,
                           0) )
        xxxSystemParametersInfo(*((unsigned int *)v21 - 1), v47, 0LL, 0x8000LL);
      ++v20;
      v21 += 2;
    }
    while ( v20 < 0xF );
    FastGetProfileIntsW(ProfileUserName, &v163, 4LL);
    LOBYTE(v22) = v55 != 0;
    EnableMouseAcceleration(v22);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL);
  if ( v7 )
    FastGetProfileIntFromID(ProfileUserName, 35LL, 236LL, 1LL, &gfIMEShowStatus, 0);
  v23 = 0;
  v24 = &v68;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(
                         ProfileUserName,
                         *((unsigned int *)v24 - 2),
                         *(unsigned int *)v24,
                         *((unsigned int *)v24 + 1),
                         &v47,
                         v15) )
      xxxSystemParametersInfo(*((unsigned int *)v24 - 1), v47, 0LL, 0x8000LL);
    ++v23;
    v24 += 2;
  }
  while ( v23 < 0xB );
  v25 = v15;
  if ( v56 )
    v25 = 2;
  EasTimeout = (unsigned int)GetEasTimeout();
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 99LL, EasTimeout, &v52, v25)
    && (!(_DWORD)EasTimeout || v52 < (unsigned int)EasTimeout) )
  {
    LODWORD(EasTimeout) = v52;
  }
  xxxSystemParametersInfo(15LL, (unsigned int)EasTimeout, 0LL, 0x8000LL);
  FastGetProfileIntsW(ProfileUserName, &v179, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v57 )
    *gpsi |= 0x200u;
  else
    *gpsi &= ~0x200u;
  if ( v58 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v59 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v7 )
    {
      RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v229, 40LL);
      FastWriteProfileStringW(ProfileUserName, 4LL, v229, pszDest);
    }
  }
  else if ( v59 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v47 = *(_DWORD *)(gpsi + 4984LL);
  v27 = v16;
  if ( v49 )
    v27 = v15;
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 4LL, 500LL, &v47, v27) )
    SetCaretBlinkTime(v47);
  if ( !v16 )
  {
    v50 = 0;
    FastGetProfileIntFromID(ProfileUserName, 12LL, 608LL, 10LL, &v50, 0);
    UpdateMouseSensitivity(v50);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, ProfileUserName);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(ProfileUserName, 12LL, 613LL, 0LL, &v47, 0);
    SetMouseTrails(v47);
    FastGetProfileIntW(ProfileUserName, 7LL, L"TTOnly", 0LL, &v47, 0);
    GreSetFontEnumeration(v47);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 91LL, *(unsigned int *)(gpsi + 2040LL), &gcxMouseHover, 0);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 92LL, *(unsigned int *)(gpsi + 2044LL), &gcyMouseHover, 0);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 93LL, (unsigned int)gdtMNDropDown, &gdtMouseHover, 0);
    v29 = gdtMouseHover;
    if ( (unsigned int)gdtMouseHover < 0xA )
    {
      v29 = 10;
      gdtMouseHover = 10;
    }
    if ( v29 > 0x7FFFFFFF )
      gdtMouseHover = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(ProfileUserName);
    InitScancodeMap();
    FastGetProfileDword(ProfileUserName, 24LL, L"Attributes", 0LL, gdwKeyboardAttributes);
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(ProfileUserName);
  }
  v30 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL, 0LL);
  if ( v30 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v30);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v53 & 2) != 0 )
    GreSetFontEnumeration(v53 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v53 | 0x30u);
  v31 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v31 )
    v31 = 1200;
  gulGamma = v31;
  v32 = (*(_DWORD *)UPDWORDPointer(8210LL) & 1) == 0;
  v33 = &dword_1C02D5B60;
  if ( v32 )
    v33 = (int *)&unk_1C02E49B0;
  off_1C031C100 = v33;
  FreeProfileUserName(ProfileUserName, v66);
  if ( v60 == 2 )
    xxxUserResetDisplayDevice();
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v61);
  if ( v61 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v7 )
  {
    memset(v67, 0, 0x38uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, v67) )
    {
      if ( !v67[7] )
        RawInputManagerObject::bTouchInputAllowed = 0;
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    if ( gdwInAtomicOperation )
    {
      v41 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v41, gdwInAtomicOperation, v42, v43);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, v65);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v7 )
  {
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v224 = &dword_1C03227AC;
      v225 = 4LL;
      v62 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
      v226 = &v62;
      v227 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E2561, v44, v45, 4u, &v223);
    }
    *gpsi |= 0x400u;
  }
  return 1LL;
}
