/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C00BD788
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C0134400 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C000907C (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C006C6D0 (_DestroyMenu.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _SetCaretBlinkTime @ 0x1C00A5660 (_SetCaretBlinkTime.c)
 *     ReadPointerDeviceSettings @ 0x1C00AA230 (ReadPointerDeviceSettings.c)
 *     SetMouseTrails @ 0x1C00BD258 (SetMouseTrails.c)
 *     GreSetFontEnumeration @ 0x1C00BE788 (GreSetFontEnumeration.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C00BE7F8 (UpdatePerUserKeyboardIndicators.c)
 *     GetEasTimeout @ 0x1C00BE908 (GetEasTimeout.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00BEA70 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     GetKbdLangSwitch @ 0x1C00BEDE0 (GetKbdLangSwitch.c)
 *     SetIconMetrics @ 0x1C00BEFB0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00BF1B8 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00BF2F4 (xxxSetWindowNCMetrics.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C00C0E6C (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00C0FC4 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C00C2A48 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA894 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReas.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00DBFCC (xxxUpdateSystemIconsFromRegistry.c)
 *     RtlStringCchPrintfW @ 0x1C00F0EE8 (RtlStringCchPrintfW.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     WakeRIT @ 0x1C0108A00 (WakeRIT.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     UnlockDesktopMenu @ 0x1C0136274 (UnlockDesktopMenu.c)
 *     xxxUserResetDisplayDevice @ 0x1C0159020 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     CheckEasPolicyChange @ 0x1C01C3EA0 (CheckEasPolicyChange.c)
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
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  _QWORD *i; // rbx
  unsigned int v22; // esi
  __int64 *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // esi
  __int64 *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ebx
  unsigned int EasTimeout; // esi
  unsigned int j; // ebx
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  unsigned int v41; // ecx
  bool v42; // zf
  void *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v47; // ebx
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned __int16 *v51; // r8
  unsigned int v52; // r9d
  int v53; // esi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int *BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  unsigned int v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+30h] [rbp-D0h]
  unsigned int v64; // [rsp+50h] [rbp-B0h] BYREF
  char v65[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v66; // [rsp+58h] [rbp-A8h]
  unsigned int v67; // [rsp+5Ch] [rbp-A4h]
  unsigned int v68; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v69; // [rsp+64h] [rbp-9Ch] BYREF
  int v70; // [rsp+68h] [rbp-98h] BYREF
  int v71; // [rsp+6Ch] [rbp-94h] BYREF
  int v72; // [rsp+70h] [rbp-90h] BYREF
  int v73; // [rsp+74h] [rbp-8Ch]
  int v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+7Ch] [rbp-84h] BYREF
  int v76; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v77; // [rsp+84h] [rbp-7Ch]
  int v78; // [rsp+88h] [rbp-78h] BYREF
  int v79; // [rsp+8Ch] [rbp-74h] BYREF
  _QWORD v80[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-60h]
  char v82[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v83[24]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v84[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v85; // [rsp+108h] [rbp+8h] BYREF
  int v86; // [rsp+110h] [rbp+10h]
  int v87; // [rsp+114h] [rbp+14h]
  __int64 v88; // [rsp+118h] [rbp+18h]
  int v89; // [rsp+120h] [rbp+20h]
  int v90; // [rsp+124h] [rbp+24h]
  int v91; // [rsp+128h] [rbp+28h]
  int v92; // [rsp+12Ch] [rbp+2Ch]
  int v93; // [rsp+130h] [rbp+30h]
  int v94; // [rsp+134h] [rbp+34h]
  int v95; // [rsp+138h] [rbp+38h]
  int v96; // [rsp+13Ch] [rbp+3Ch]
  int v97; // [rsp+140h] [rbp+40h]
  int v98; // [rsp+144h] [rbp+44h]
  int v99; // [rsp+148h] [rbp+48h]
  int v100; // [rsp+14Ch] [rbp+4Ch]
  int v101; // [rsp+150h] [rbp+50h]
  int v102; // [rsp+154h] [rbp+54h]
  int v103; // [rsp+158h] [rbp+58h]
  int v104; // [rsp+15Ch] [rbp+5Ch]
  int v105; // [rsp+160h] [rbp+60h]
  int v106; // [rsp+164h] [rbp+64h]
  int v107; // [rsp+168h] [rbp+68h]
  int v108; // [rsp+16Ch] [rbp+6Ch]
  int v109; // [rsp+170h] [rbp+70h]
  int v110; // [rsp+174h] [rbp+74h]
  int v111; // [rsp+178h] [rbp+78h]
  int v112; // [rsp+17Ch] [rbp+7Ch]
  int v113; // [rsp+180h] [rbp+80h]
  int v114; // [rsp+184h] [rbp+84h]
  int v115; // [rsp+188h] [rbp+88h]
  int v116; // [rsp+18Ch] [rbp+8Ch]
  int v117; // [rsp+190h] [rbp+90h]
  int v118; // [rsp+194h] [rbp+94h]
  int v119; // [rsp+198h] [rbp+98h]
  int v120; // [rsp+19Ch] [rbp+9Ch]
  int v121; // [rsp+1A0h] [rbp+A0h]
  int v122; // [rsp+1A4h] [rbp+A4h]
  __int64 v123; // [rsp+1A8h] [rbp+A8h]
  int v124; // [rsp+1B0h] [rbp+B0h]
  int v125; // [rsp+1B4h] [rbp+B4h]
  __int64 v126; // [rsp+1B8h] [rbp+B8h] BYREF
  int v127; // [rsp+1C0h] [rbp+C0h]
  int v128; // [rsp+1C4h] [rbp+C4h]
  int v129; // [rsp+1C8h] [rbp+C8h]
  int v130; // [rsp+1CCh] [rbp+CCh]
  int v131; // [rsp+1D0h] [rbp+D0h]
  int v132; // [rsp+1D4h] [rbp+D4h]
  int v133; // [rsp+1D8h] [rbp+D8h]
  int v134; // [rsp+1DCh] [rbp+DCh]
  int v135; // [rsp+1E0h] [rbp+E0h]
  int v136; // [rsp+1E4h] [rbp+E4h]
  int v137; // [rsp+1E8h] [rbp+E8h]
  int v138; // [rsp+1ECh] [rbp+ECh]
  int v139; // [rsp+1F0h] [rbp+F0h]
  int v140; // [rsp+1F4h] [rbp+F4h]
  int v141; // [rsp+1F8h] [rbp+F8h]
  int v142; // [rsp+1FCh] [rbp+FCh]
  int v143; // [rsp+200h] [rbp+100h]
  int v144; // [rsp+204h] [rbp+104h]
  __int64 v145; // [rsp+208h] [rbp+108h]
  int v146; // [rsp+210h] [rbp+110h]
  int v147; // [rsp+214h] [rbp+114h]
  __int64 v148; // [rsp+218h] [rbp+118h]
  int v149; // [rsp+220h] [rbp+120h]
  int v150; // [rsp+224h] [rbp+124h]
  int v151; // [rsp+228h] [rbp+128h]
  int v152; // [rsp+22Ch] [rbp+12Ch]
  int v153; // [rsp+230h] [rbp+130h]
  int v154; // [rsp+234h] [rbp+134h]
  int v155; // [rsp+238h] [rbp+138h]
  int v156; // [rsp+23Ch] [rbp+13Ch]
  int v157; // [rsp+240h] [rbp+140h]
  int v158; // [rsp+244h] [rbp+144h]
  int v159; // [rsp+248h] [rbp+148h]
  int v160; // [rsp+24Ch] [rbp+14Ch]
  int v161; // [rsp+250h] [rbp+150h]
  int v162; // [rsp+254h] [rbp+154h]
  int v163; // [rsp+258h] [rbp+158h]
  int v164; // [rsp+25Ch] [rbp+15Ch]
  int v165; // [rsp+260h] [rbp+160h]
  int v166; // [rsp+264h] [rbp+164h]
  int v167; // [rsp+268h] [rbp+168h]
  int v168; // [rsp+26Ch] [rbp+16Ch]
  int v169; // [rsp+270h] [rbp+170h]
  int v170; // [rsp+274h] [rbp+174h]
  int v171; // [rsp+278h] [rbp+178h]
  int v172; // [rsp+27Ch] [rbp+17Ch]
  int v173; // [rsp+280h] [rbp+180h]
  int v174; // [rsp+284h] [rbp+184h]
  int v175; // [rsp+288h] [rbp+188h]
  int v176; // [rsp+28Ch] [rbp+18Ch]
  int v177; // [rsp+290h] [rbp+190h]
  int v178; // [rsp+294h] [rbp+194h]
  __int64 v179; // [rsp+298h] [rbp+198h]
  int v180; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v181; // [rsp+2A8h] [rbp+1A8h]
  int v182; // [rsp+2B0h] [rbp+1B0h]
  int *v183; // [rsp+2B8h] [rbp+1B8h]
  int v184; // [rsp+2C0h] [rbp+1C0h]
  __int64 v185; // [rsp+2C8h] [rbp+1C8h]
  int v186; // [rsp+2D0h] [rbp+1D0h]
  int *v187; // [rsp+2D8h] [rbp+1D8h]
  int v188; // [rsp+2E0h] [rbp+1E0h]
  __int64 v189; // [rsp+2E8h] [rbp+1E8h]
  int v190; // [rsp+2F0h] [rbp+1F0h]
  int *v191; // [rsp+2F8h] [rbp+1F8h]
  int v192; // [rsp+300h] [rbp+200h]
  __int64 v193; // [rsp+308h] [rbp+208h]
  int v194; // [rsp+310h] [rbp+210h]
  __int64 v195; // [rsp+318h] [rbp+218h]
  int v196; // [rsp+320h] [rbp+220h] BYREF
  __int64 v197; // [rsp+328h] [rbp+228h]
  int v198; // [rsp+330h] [rbp+230h]
  int *v199; // [rsp+338h] [rbp+238h]
  int v200; // [rsp+340h] [rbp+240h]
  __int64 v201; // [rsp+348h] [rbp+248h]
  int v202; // [rsp+350h] [rbp+250h]
  int *v203; // [rsp+358h] [rbp+258h]
  int v204; // [rsp+360h] [rbp+260h]
  __int64 v205; // [rsp+368h] [rbp+268h]
  int v206; // [rsp+370h] [rbp+270h]
  int *v207; // [rsp+378h] [rbp+278h]
  int v208; // [rsp+380h] [rbp+280h]
  __int64 v209; // [rsp+388h] [rbp+288h]
  int v210; // [rsp+390h] [rbp+290h]
  int *v211; // [rsp+398h] [rbp+298h]
  int v212; // [rsp+3A0h] [rbp+2A0h]
  __int64 v213; // [rsp+3A8h] [rbp+2A8h]
  int v214; // [rsp+3B0h] [rbp+2B0h]
  __int64 v215; // [rsp+3B8h] [rbp+2B8h]
  int v216; // [rsp+3C0h] [rbp+2C0h]
  __int64 v217; // [rsp+3C8h] [rbp+2C8h]
  int v218; // [rsp+3D0h] [rbp+2D0h]
  __int64 v219; // [rsp+3D8h] [rbp+2D8h]
  int v220; // [rsp+3E0h] [rbp+2E0h]
  __int64 v221; // [rsp+3E8h] [rbp+2E8h]
  int v222; // [rsp+3F0h] [rbp+2F0h]
  int *v223; // [rsp+3F8h] [rbp+2F8h]
  int v224; // [rsp+400h] [rbp+300h]
  __int64 v225; // [rsp+408h] [rbp+308h]
  int v226; // [rsp+410h] [rbp+310h]
  int *v227; // [rsp+418h] [rbp+318h]
  int v228; // [rsp+420h] [rbp+320h]
  __int64 v229; // [rsp+428h] [rbp+328h]
  int v230; // [rsp+430h] [rbp+330h]
  __int64 v231; // [rsp+438h] [rbp+338h]
  int v232; // [rsp+440h] [rbp+340h]
  __int64 v233; // [rsp+448h] [rbp+348h]
  int v234; // [rsp+450h] [rbp+350h]
  int *v235; // [rsp+458h] [rbp+358h]
  int v236; // [rsp+460h] [rbp+360h]
  __int64 v237; // [rsp+468h] [rbp+368h]
  int v238; // [rsp+470h] [rbp+370h]
  int *v239; // [rsp+478h] [rbp+378h]
  EVENT_DATA_DESCRIPTOR v240; // [rsp+480h] [rbp+380h] BYREF
  int *v241; // [rsp+4A0h] [rbp+3A0h]
  __int64 v242; // [rsp+4A8h] [rbp+3A8h]
  int *v243; // [rsp+4B0h] [rbp+3B0h]
  __int64 v244; // [rsp+4B8h] [rbp+3B8h]
  wchar_t pszDest[40]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _BYTE v246[80]; // [rsp+510h] [rbp+410h] BYREF

  v77 = a1;
  v73 = 0;
  v3 = a1;
  v84[15] = 4135;
  v70 = gulFontInformation;
  v68 = 96;
  v84[14] = 4;
  v85 = 112LL;
  v74 = 0;
  v76 = gdwPUDFlags & 0x100000;
  v4 = 0;
  v72 = 1;
  v75 = gdwPUDFlags & 0x10000;
  v100 = 3;
  v104 = 3;
  v124 = 13;
  v127 = 13;
  v129 = 13;
  v86 = 4;
  v87 = 17;
  v88 = 100LL;
  v89 = 4;
  v90 = 77;
  v91 = 199;
  v92 = 4;
  v93 = 4;
  v94 = 76;
  v95 = 198;
  v96 = 4;
  v97 = 4;
  v98 = 105;
  v99 = 14;
  v101 = 4;
  v102 = 109;
  v103 = 15;
  v105 = 4;
  v106 = 131;
  v107 = 18;
  v108 = 1;
  v109 = 4;
  v110 = 141;
  v111 = 624;
  v112 = 1;
  v113 = 4;
  v114 = 145;
  v115 = 625;
  v116 = 1;
  v117 = 4;
  v118 = 143;
  v119 = 626;
  v120 = 1;
  v121 = 4;
  v122 = 159;
  v123 = 628LL;
  v125 = 23;
  v126 = 106LL;
  v128 = 11;
  v130 = 15;
  v131 = 12;
  v132 = 32;
  v133 = 6;
  v159 = 17;
  v164 = 20;
  v167 = 20;
  v140 = 30;
  v172 = 50;
  v176 = 50;
  v199 = &gdtMNDropDown;
  v203 = &v76;
  v207 = &gnFastAltTabRows;
  v211 = &gnFastAltTabColumns;
  v160 = 30;
  v168 = 30;
  v144 = 96;
  v148 = 96LL;
  v5 = 2LL;
  v162 = 133;
  v205 = 133LL;
  v6 = 3LL;
  v134 = 500;
  v215 = gpsi + 4996LL;
  v135 = 12;
  v136 = 29;
  v137 = 97;
  v138 = 4;
  v139 = 12;
  v141 = 98;
  v142 = 4;
  v143 = 12;
  v145 = 7LL;
  v146 = 3;
  v147 = 28;
  v149 = 35;
  v150 = 111;
  v151 = 236;
  v152 = 1;
  v153 = 12;
  v154 = 127;
  v155 = 16;
  v156 = 1;
  v157 = 12;
  v158 = 129;
  v161 = 12;
  v163 = 19;
  v165 = 12;
  v166 = 135;
  v169 = 12;
  v170 = 137;
  v171 = 21;
  v173 = 12;
  v174 = 139;
  v175 = 22;
  v177 = 4;
  v178 = 169;
  v179 = 205LL;
  v196 = 4;
  v197 = 94LL;
  v198 = 400;
  v200 = 4;
  v201 = 107LL;
  v202 = 2;
  v204 = 4;
  v206 = 3;
  v208 = 4;
  v209 = 134LL;
  v210 = 7;
  v212 = 4;
  v213 = 159LL;
  v214 = 3;
  v216 = 4;
  v217 = 160LL;
  v180 = 12;
  v219 = gpsi + 5000LL;
  v184 = 12;
  v223 = &v70;
  v227 = &v74;
  v231 = gdwHungAppTimeout;
  v235 = &gdwWaitToKillTimeout;
  v239 = &v75;
  v183 = &gMouseThresh1;
  v188 = 12;
  v189 = 12LL;
  v7 = a1 & 1;
  v187 = &gMouseThresh2;
  v220 = 4;
  v224 = 4;
  v228 = 4;
  v232 = 4;
  v238 = 1;
  v8 = a1 & 2;
  v190 = 1;
  v9 = a1 & 4;
  v191 = &v72;
  v230 = 5000;
  v234 = 5000;
  v195 = gfEnableHexNumpad;
  v218 = 3;
  v221 = 200LL;
  v222 = 0;
  v225 = 618LL;
  v226 = 0;
  v229 = 621LL;
  v233 = 622LL;
  v236 = 23;
  v237 = 149LL;
  v181 = 10LL;
  v182 = 6;
  v185 = 11LL;
  v186 = 10;
  v192 = 35;
  v193 = 237LL;
  v194 = 0;
  v67 = v8;
  v66 = (unsigned __int8)v9;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL, v3, v6, v5);
    return 0LL;
  }
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v83, v3, v6, v5);
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
    v9 = v66;
  }
  if ( !v8 || v9 )
    goto LABEL_13;
  v73 = CheckEasPolicyChange();
  v53 = v73;
  if ( !(unsigned int)CheckDesktopPolicyChange(ProfileUserName) && !v53 )
  {
    UserSetLastError(0LL, v54, v55, v56);
    FreeProfileUserName(ProfileUserName, v83);
    return 0LL;
  }
  v4 = 16;
LABEL_13:
  if ( v7 )
    gdwPolicyFlags |= 2u;
  v64 = 300;
  v15 = v4 | 8;
  if ( !v66 )
    v15 = v4;
  v62 = v15;
  FastGetProfileValue(ProfileUserName, 4LL, 607LL, &v64, &gnllHooksTimeout, 4);
  if ( (unsigned int)(gnllHooksTimeout - 1) > 0x3E6 )
    gnllHooksTimeout = 1000;
  if ( v7 )
  {
    if ( !gDpiAdjustedForLoggedOnUser )
    {
      FastGetProfileDwordEx(ProfileUserName, 4LL, L"LogPixels", 0LL, v15, &v68, 0LL);
      v71 = 0;
      v47 = DrvInitializeDxgkrnlDpiCache(&v71);
      v48 = PerformLegacyDpiUpgrade(ProfileUserName, v68);
      if ( v47 < 0 || v71 || gdmLogPixelsOfPrimary != gdmLogPixels || v48 || v68 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(pData) = 0;
        v65[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, pData, 0LL, 0LL, v65, a2) >= 0 )
        {
          if ( v65[0] )
            ((void (*)(void))xxxUserResetDisplayDevice)();
          UserReinitializeStockFonts(*(unsigned __int16 *)(gpsi + 6998LL), 1, 0);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  LoadCPUserPreferences(ProfileUserName, v15);
  v16 = v67;
  if ( !v67 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(ProfileUserName);
    if ( gbGreTextReady )
      xxxSetWindowNCMetrics(ProfileUserName, 0LL);
    SetMinMetrics(ProfileUserName);
    SetIconMetrics(ProfileUserName);
    GetKbdLangSwitch(ProfileUserName, v17, v18, v19);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v80, 0LL);
      v81 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        if ( i[7] )
        {
          v81 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v80);
          *(_DWORD *)(*(_QWORD *)(i[7] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 7) )
          {
            v49 = v81;
            if ( !v81 )
              v49 = *(_QWORD *)v80[0];
            DestroyMenu(v49);
          }
        }
        v20 = i[8];
        if ( v20 )
        {
          v81 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v80);
          *(_DWORD *)(*(_QWORD *)(i[8] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 8) )
          {
            v50 = v81;
            if ( !v81 )
              v50 = *(_QWORD *)v80[0];
            DestroyMenu(v50);
          }
        }
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v80, v20);
    }
    xxxUpdateSystemCursorsFromRegistry(ProfileUserName, 1LL);
    xxxUpdateSystemIconsFromRegistry(ProfileUserName);
    v22 = 0;
    v23 = &v126;
    do
    {
      pData = 0;
      BugCheckParameter4 = &v64;
      if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v23 - 2), *(unsigned int *)v23) )
        xxxSystemParametersInfo(*((unsigned int *)v23 - 1), v64, 0LL, 0x8000LL, &v64, 0, v62);
      ++v22;
      v23 += 2;
    }
    while ( v22 < 0xF );
    FastGetProfileIntsW(ProfileUserName, &v180, 4LL);
    LOBYTE(v24) = v72 != 0;
    EnableMouseAcceleration(v24, v25, v26, v27);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, BugCheckParameter4, pData, v62);
  if ( v7 )
    FastGetProfileIntFromID(ProfileUserName, 35LL, 236LL);
  v28 = 0;
  v29 = &v85;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v29 - 2), *(unsigned int *)v29) )
      xxxSystemParametersInfo(*((unsigned int *)v29 - 1), v64, 0LL, 0x8000LL, &v64, v15, v63);
    ++v28;
    v29 += 2;
  }
  while ( v28 < 0xB );
  v34 = v15;
  if ( v73 )
    v34 = 2;
  EasTimeout = GetEasTimeout(v31, v30, v32, v33);
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 99LL) && (!EasTimeout || v69 < EasTimeout) )
    EasTimeout = v69;
  xxxSystemParametersInfo(15LL, EasTimeout, 0LL, 0x8000LL, &v69, v34, v63);
  FastGetProfileIntsW(ProfileUserName, &v196, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v74 )
    *gpsi |= 0x200u;
  else
    *gpsi &= ~0x200u;
  if ( v75 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v76 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v7 )
    {
      RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v246, 40LL, 0LL);
      FastWriteProfileStringW(ProfileUserName, 4LL, v246, pszDest);
    }
  }
  else if ( v76 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v64 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 4LL) )
    SetCaretBlinkTime(v64);
  if ( !v16 )
  {
    v67 = 0;
    FastGetProfileIntFromID(ProfileUserName, 12LL, 608LL);
    UpdateMouseSensitivity(v67);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, ProfileUserName);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(ProfileUserName, 12LL, 613LL);
    SetMouseTrails(v64);
    FastGetProfileIntW(ProfileUserName, 7LL, L"TTOnly", 0LL, &v64, 0);
    GreSetFontEnumeration(v64);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 91LL);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 92LL);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 93LL);
    v37 = gdtMouseHover;
    if ( (unsigned int)gdtMouseHover < 0xA )
    {
      v37 = 10;
      gdtMouseHover = 10;
    }
    if ( v37 > 0x7FFFFFFF )
      gdtMouseHover = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(ProfileUserName);
    InitScancodeMap(v39, v38);
    FastGetProfileDword(ProfileUserName, 24LL, L"Attributes", 0LL, gdwKeyboardAttributes);
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(ProfileUserName);
  }
  v40 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL);
  if ( v40 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v40);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v70 & 2) != 0 )
    GreSetFontEnumeration(v70 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v70 | 0x30u);
  v41 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v41 )
    v41 = 1200;
  gulGamma = v41;
  v42 = (*(_DWORD *)UPDWORDPointer(8210LL) & 1) == 0;
  v43 = &unk_1C02C7830;
  if ( v42 )
    v43 = &unk_1C02D7660;
  off_1C030C100 = v43;
  FreeProfileUserName(ProfileUserName, v83);
  if ( v77 == 2 )
    xxxUserResetDisplayDevice(v45, v44);
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v78);
  if ( v78 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v7 )
  {
    memset(v84, 0, 0x38uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146, (__int64)v84, v51, v52) )
    {
      if ( !v84[7] )
        RawInputManagerObject::bTouchInputAllowed = 0;
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    if ( gdwInAtomicOperation )
    {
      v57 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v57, gdwInAtomicOperation, v58, v59);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, v82);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v7 )
  {
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v241 = &dword_1C0312E4C;
      v242 = 4LL;
      v79 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
      v243 = &v79;
      v244 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D3C5B, 0LL, 0LL, 4u, &v240);
    }
    *gpsi |= 0x400u;
  }
  return 1LL;
}
