/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C013B018
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C0119670 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C0028870 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0057AD0 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0059DE0 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ReadPointerDeviceSettings @ 0x1C005B8B4 (ReadPointerDeviceSettings.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007F150 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _SetCaretBlinkTime @ 0x1C00887F0 (_SetCaretBlinkTime.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     WakeRIT @ 0x1C00ECEA0 (WakeRIT.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010BD08 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C0116A58 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     UnlockDesktopMenu @ 0x1C011B560 (UnlockDesktopMenu.c)
 *     SetMouseTrails @ 0x1C01394B4 (SetMouseTrails.c)
 *     GreSetFontEnumeration @ 0x1C013C2E8 (GreSetFontEnumeration.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C013C370 (UpdatePerUserKeyboardIndicators.c)
 *     GetEasTimeout @ 0x1C013C480 (GetEasTimeout.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C013C600 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C013C800 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     GetKbdLangSwitch @ 0x1C013CADC (GetKbdLangSwitch.c)
 *     SetIconMetrics @ 0x1C013CCA0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C013CEB8 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C013D004 (xxxSetWindowNCMetrics.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0142C00 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     xxxUserResetDisplayDevice @ 0x1C0161810 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C01649B4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     GreTextInitialized @ 0x1C0166B18 (GreTextInitialized.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     QueryAutoRotationState @ 0x1C01D5D24 (QueryAutoRotationState.c)
 *     CheckEasPolicyChange @ 0x1C01D71BC (CheckEasPolicyChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(int a1, __int64 a2)
{
  int v3; // r15d
  int v4; // r12d
  int v5; // r14d
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _UNICODE_STRING *ProfileUserName; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  USHORT Length; // ax
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  _QWORD *i; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // esi
  __int64 *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // esi
  __int64 *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // ebx
  unsigned int EasTimeout; // esi
  unsigned int j; // ebx
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  void *v49; // rax
  unsigned int v50; // ecx
  bool v51; // zf
  void *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int16 *v55; // r8
  unsigned int v56; // r9d
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int *BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int *BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  unsigned int v63; // [rsp+50h] [rbp-B0h] BYREF
  char v64[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v65; // [rsp+58h] [rbp-A8h]
  unsigned int v66; // [rsp+5Ch] [rbp-A4h]
  unsigned int v67; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v68; // [rsp+64h] [rbp-9Ch] BYREF
  int v69; // [rsp+68h] [rbp-98h] BYREF
  int v70; // [rsp+6Ch] [rbp-94h] BYREF
  int v71; // [rsp+70h] [rbp-90h] BYREF
  int v72; // [rsp+74h] [rbp-8Ch]
  int v73; // [rsp+78h] [rbp-88h] BYREF
  int v74; // [rsp+7Ch] [rbp-84h] BYREF
  int v75; // [rsp+80h] [rbp-80h] BYREF
  int v76; // [rsp+84h] [rbp-7Ch]
  int v77; // [rsp+88h] [rbp-78h] BYREF
  int AutoRotationState; // [rsp+8Ch] [rbp-74h] BYREF
  _QWORD v79[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h]
  char v81[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v83[3]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v84[18]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v85; // [rsp+118h] [rbp+18h] BYREF
  int v86; // [rsp+120h] [rbp+20h]
  int v87; // [rsp+124h] [rbp+24h]
  __int64 v88; // [rsp+128h] [rbp+28h]
  int v89; // [rsp+130h] [rbp+30h]
  int v90; // [rsp+134h] [rbp+34h]
  int v91; // [rsp+138h] [rbp+38h]
  int v92; // [rsp+13Ch] [rbp+3Ch]
  int v93; // [rsp+140h] [rbp+40h]
  int v94; // [rsp+144h] [rbp+44h]
  int v95; // [rsp+148h] [rbp+48h]
  int v96; // [rsp+14Ch] [rbp+4Ch]
  int v97; // [rsp+150h] [rbp+50h]
  int v98; // [rsp+154h] [rbp+54h]
  int v99; // [rsp+158h] [rbp+58h]
  int v100; // [rsp+15Ch] [rbp+5Ch]
  int v101; // [rsp+160h] [rbp+60h]
  int v102; // [rsp+164h] [rbp+64h]
  int v103; // [rsp+168h] [rbp+68h]
  int v104; // [rsp+16Ch] [rbp+6Ch]
  int v105; // [rsp+170h] [rbp+70h]
  int v106; // [rsp+174h] [rbp+74h]
  int v107; // [rsp+178h] [rbp+78h]
  int v108; // [rsp+17Ch] [rbp+7Ch]
  int v109; // [rsp+180h] [rbp+80h]
  int v110; // [rsp+184h] [rbp+84h]
  int v111; // [rsp+188h] [rbp+88h]
  int v112; // [rsp+18Ch] [rbp+8Ch]
  int v113; // [rsp+190h] [rbp+90h]
  int v114; // [rsp+194h] [rbp+94h]
  int v115; // [rsp+198h] [rbp+98h]
  int v116; // [rsp+19Ch] [rbp+9Ch]
  int v117; // [rsp+1A0h] [rbp+A0h]
  int v118; // [rsp+1A4h] [rbp+A4h]
  int v119; // [rsp+1A8h] [rbp+A8h]
  int v120; // [rsp+1ACh] [rbp+ACh]
  int v121; // [rsp+1B0h] [rbp+B0h]
  int v122; // [rsp+1B4h] [rbp+B4h]
  __int64 v123; // [rsp+1B8h] [rbp+B8h]
  int v124; // [rsp+1C0h] [rbp+C0h]
  int v125; // [rsp+1C4h] [rbp+C4h]
  __int64 v126; // [rsp+1C8h] [rbp+C8h] BYREF
  int v127; // [rsp+1D0h] [rbp+D0h]
  int v128; // [rsp+1D4h] [rbp+D4h]
  int v129; // [rsp+1D8h] [rbp+D8h]
  int v130; // [rsp+1DCh] [rbp+DCh]
  int v131; // [rsp+1E0h] [rbp+E0h]
  int v132; // [rsp+1E4h] [rbp+E4h]
  int v133; // [rsp+1E8h] [rbp+E8h]
  int v134; // [rsp+1ECh] [rbp+ECh]
  int v135; // [rsp+1F0h] [rbp+F0h]
  int v136; // [rsp+1F4h] [rbp+F4h]
  int v137; // [rsp+1F8h] [rbp+F8h]
  int v138; // [rsp+1FCh] [rbp+FCh]
  int v139; // [rsp+200h] [rbp+100h]
  int v140; // [rsp+204h] [rbp+104h]
  int v141; // [rsp+208h] [rbp+108h]
  int v142; // [rsp+20Ch] [rbp+10Ch]
  int v143; // [rsp+210h] [rbp+110h]
  int v144; // [rsp+214h] [rbp+114h]
  __int64 v145; // [rsp+218h] [rbp+118h]
  int v146; // [rsp+220h] [rbp+120h]
  int v147; // [rsp+224h] [rbp+124h]
  __int64 v148; // [rsp+228h] [rbp+128h]
  int v149; // [rsp+230h] [rbp+130h]
  int v150; // [rsp+234h] [rbp+134h]
  int v151; // [rsp+238h] [rbp+138h]
  int v152; // [rsp+23Ch] [rbp+13Ch]
  int v153; // [rsp+240h] [rbp+140h]
  int v154; // [rsp+244h] [rbp+144h]
  int v155; // [rsp+248h] [rbp+148h]
  int v156; // [rsp+24Ch] [rbp+14Ch]
  int v157; // [rsp+250h] [rbp+150h]
  int v158; // [rsp+254h] [rbp+154h]
  int v159; // [rsp+258h] [rbp+158h]
  int v160; // [rsp+25Ch] [rbp+15Ch]
  int v161; // [rsp+260h] [rbp+160h]
  int v162; // [rsp+264h] [rbp+164h]
  int v163; // [rsp+268h] [rbp+168h]
  int v164; // [rsp+26Ch] [rbp+16Ch]
  int v165; // [rsp+270h] [rbp+170h]
  int v166; // [rsp+274h] [rbp+174h]
  int v167; // [rsp+278h] [rbp+178h]
  int v168; // [rsp+27Ch] [rbp+17Ch]
  int v169; // [rsp+280h] [rbp+180h]
  int v170; // [rsp+284h] [rbp+184h]
  int v171; // [rsp+288h] [rbp+188h]
  int v172; // [rsp+28Ch] [rbp+18Ch]
  int v173; // [rsp+290h] [rbp+190h]
  int v174; // [rsp+294h] [rbp+194h]
  int v175; // [rsp+298h] [rbp+198h]
  int v176; // [rsp+29Ch] [rbp+19Ch]
  int v177; // [rsp+2A0h] [rbp+1A0h]
  int v178; // [rsp+2A4h] [rbp+1A4h]
  __int64 v179; // [rsp+2A8h] [rbp+1A8h]
  int v180; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v181; // [rsp+2B8h] [rbp+1B8h]
  int v182; // [rsp+2C0h] [rbp+1C0h]
  char *v183; // [rsp+2C8h] [rbp+1C8h]
  int v184; // [rsp+2D0h] [rbp+1D0h]
  __int64 v185; // [rsp+2D8h] [rbp+1D8h]
  int v186; // [rsp+2E0h] [rbp+1E0h]
  PKDEFERRED_ROUTINE *p_DeferredRoutine; // [rsp+2E8h] [rbp+1E8h]
  int v188; // [rsp+2F0h] [rbp+1F0h]
  __int64 v189; // [rsp+2F8h] [rbp+1F8h]
  int v190; // [rsp+300h] [rbp+200h]
  int *v191; // [rsp+308h] [rbp+208h]
  int v192; // [rsp+310h] [rbp+210h]
  __int64 v193; // [rsp+318h] [rbp+218h]
  int v194; // [rsp+320h] [rbp+220h]
  __int64 v195; // [rsp+328h] [rbp+228h]
  int v196; // [rsp+330h] [rbp+230h] BYREF
  __int64 v197; // [rsp+338h] [rbp+238h]
  int v198; // [rsp+340h] [rbp+240h]
  PVOID *p_SystemArgument1; // [rsp+348h] [rbp+248h]
  int v200; // [rsp+350h] [rbp+250h]
  __int64 v201; // [rsp+358h] [rbp+258h]
  int v202; // [rsp+360h] [rbp+260h]
  int *v203; // [rsp+368h] [rbp+268h]
  int v204; // [rsp+370h] [rbp+270h]
  __int64 v205; // [rsp+378h] [rbp+278h]
  int v206; // [rsp+380h] [rbp+280h]
  char *v207; // [rsp+388h] [rbp+288h]
  int v208; // [rsp+390h] [rbp+290h]
  __int64 v209; // [rsp+398h] [rbp+298h]
  int v210; // [rsp+3A0h] [rbp+2A0h]
  PVOID *p_DeferredContext; // [rsp+3A8h] [rbp+2A8h]
  int v212; // [rsp+3B0h] [rbp+2B0h]
  __int64 v213; // [rsp+3B8h] [rbp+2B8h]
  int v214; // [rsp+3C0h] [rbp+2C0h]
  __int64 v215; // [rsp+3C8h] [rbp+2C8h]
  int v216; // [rsp+3D0h] [rbp+2D0h]
  __int64 v217; // [rsp+3D8h] [rbp+2D8h]
  int v218; // [rsp+3E0h] [rbp+2E0h]
  __int64 v219; // [rsp+3E8h] [rbp+2E8h]
  int v220; // [rsp+3F0h] [rbp+2F0h]
  __int64 v221; // [rsp+3F8h] [rbp+2F8h]
  int v222; // [rsp+400h] [rbp+300h]
  int *v223; // [rsp+408h] [rbp+308h]
  int v224; // [rsp+410h] [rbp+310h]
  __int64 v225; // [rsp+418h] [rbp+318h]
  int v226; // [rsp+420h] [rbp+320h]
  int *v227; // [rsp+428h] [rbp+328h]
  int v228; // [rsp+430h] [rbp+330h]
  __int64 v229; // [rsp+438h] [rbp+338h]
  int v230; // [rsp+440h] [rbp+340h]
  __int64 v231; // [rsp+448h] [rbp+348h]
  int v232; // [rsp+450h] [rbp+350h]
  __int64 v233; // [rsp+458h] [rbp+358h]
  int v234; // [rsp+460h] [rbp+360h]
  int *v235; // [rsp+468h] [rbp+368h]
  int v236; // [rsp+470h] [rbp+370h]
  __int64 v237; // [rsp+478h] [rbp+378h]
  int v238; // [rsp+480h] [rbp+380h]
  int *v239; // [rsp+488h] [rbp+388h]
  EVENT_DATA_DESCRIPTOR v240; // [rsp+490h] [rbp+390h] BYREF
  __int64 *v241; // [rsp+4B0h] [rbp+3B0h]
  __int64 v242; // [rsp+4B8h] [rbp+3B8h]
  int *v243; // [rsp+4C0h] [rbp+3C0h]
  __int64 v244; // [rsp+4C8h] [rbp+3C8h]
  int *p_AutoRotationState; // [rsp+4D0h] [rbp+3D0h]
  __int64 v246; // [rsp+4D8h] [rbp+3D8h]
  wchar_t Dest[40]; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE v248[80]; // [rsp+530h] [rbp+430h] BYREF

  v76 = a1;
  v72 = 0;
  v84[17] = 4135;
  v69 = gulFontInformation;
  v67 = 96;
  v3 = 0;
  v84[16] = 4;
  memset(v83, 0, sizeof(v83));
  v75 = gdwPUDFlags & 0x100000;
  v73 = 0;
  v85 = 112LL;
  v100 = 3;
  v74 = gdwPUDFlags & 0x10000;
  v104 = 3;
  v103 = 15;
  v130 = 15;
  v71 = 1;
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
  v124 = 13;
  v125 = 23;
  v126 = 106LL;
  v127 = 13;
  v128 = 11;
  v129 = 13;
  v159 = 17;
  v144 = 96;
  v164 = 20;
  v167 = 20;
  v148 = 96LL;
  v172 = 50;
  v176 = 50;
  v162 = 133;
  p_SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  v203 = &v75;
  v207 = (char *)&WPP_MAIN_CB.Dpc.DeferredContext + 4;
  v205 = 133LL;
  p_DeferredContext = &WPP_MAIN_CB.Dpc.DeferredContext;
  v131 = 12;
  v132 = 32;
  v133 = 6;
  v134 = 500;
  v135 = 12;
  v136 = 29;
  v137 = 97;
  v138 = 4;
  v139 = 12;
  v140 = 30;
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
  v160 = 30;
  v161 = 12;
  v163 = 19;
  v165 = 12;
  v166 = 135;
  v168 = 30;
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
  v180 = 12;
  v184 = 12;
  v188 = 12;
  v189 = 12LL;
  v215 = gpsi + 4996LL;
  v216 = 4;
  v219 = gpsi + 5000LL;
  v4 = a1 & 1;
  v220 = 4;
  v224 = 4;
  v223 = &v69;
  v227 = &v73;
  v231 = gdwHungAppTimeout;
  v235 = &gdwWaitToKillTimeout;
  v239 = &v74;
  v183 = (char *)&WPP_MAIN_CB.Dpc.DeferredRoutine + 4;
  p_DeferredRoutine = &WPP_MAIN_CB.Dpc.DeferredRoutine;
  v228 = 4;
  v232 = 4;
  v238 = 1;
  v5 = a1 & 2;
  v190 = 1;
  v6 = a1 & 4;
  v191 = &v71;
  v230 = 5000;
  v234 = 5000;
  v195 = gfEnableHexNumpad;
  v217 = 160LL;
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
  v66 = v5;
  v65 = (unsigned __int8)v6;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL, v7, v8, v9);
    return 0LL;
  }
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v83);
  if ( !ProfileUserName )
    return 0LL;
  if ( grpWinStaList )
  {
    v12 = *(_QWORD *)(grpWinStaList + 176LL);
    if ( v12 )
      Win32FreePool(v12);
    v13 = Win32AllocPool(ProfileUserName->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 176LL) = v13;
    if ( v13 )
    {
      Length = ProfileUserName->Length;
      *(_WORD *)(grpWinStaList + 168LL) = 0;
      *(_WORD *)(grpWinStaList + 170LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 168LL), ProfileUserName);
    }
    if ( v4 )
      WakeRIT(0x40u);
    v6 = v65;
  }
  if ( v5 && !v6 )
  {
    v72 = CheckEasPolicyChange();
    v15 = v72;
    if ( !(unsigned int)CheckDesktopPolicyChange(ProfileUserName) && !v15 )
    {
      UserSetLastError(0LL, v16, v17, v18);
      FreeProfileUserName(ProfileUserName, v83);
      return 0LL;
    }
    v3 = 16;
  }
  if ( v4 )
    gdwPolicyFlags |= 2u;
  v63 = 300;
  v19 = v3 | 8;
  if ( !v65 )
    v19 = v3;
  FastGetProfileValue(ProfileUserName, 4LL, 607LL, &v63, (char *)&WPP_MAIN_CB.Dpc.ProcessorHistory + 4, 4, v19);
  if ( (unsigned int)(HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) - 1) > 0x3E6 )
    HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 1000;
  if ( v4 )
  {
    if ( !gDpiAdjustedForLoggedOnUser && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      FastGetProfileDwordEx(ProfileUserName, 4LL, L"LogPixels", 0LL, v19, &v67, 0LL);
      v70 = 0;
      v20 = DrvInitializeDxgkrnlDpiCache(&v70);
      v21 = PerformLegacyDpiUpgrade(ProfileUserName, v67);
      if ( v20 < 0 || v70 || gdmLogPixelsOfPrimary != gdmLogPixels || v21 || v67 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(pData) = 0;
        v64[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, pData, 0LL, 0LL, v64, a2) >= 0 )
        {
          if ( v64[0] )
            ((void (*)(void))xxxUserResetDisplayDevice)();
          UserReinitializeStockFonts(*(unsigned __int16 *)(gpsi + 6998LL), 1);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  LoadCPUserPreferences(ProfileUserName, v19);
  v22 = v66;
  if ( !v66 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(ProfileUserName);
    if ( (unsigned int)GreTextInitialized(v24, v23) )
      xxxSetWindowNCMetrics(ProfileUserName, 0LL);
    SetMinMetrics(ProfileUserName);
    SetIconMetrics(ProfileUserName);
    GetKbdLangSwitch(ProfileUserName, v25, v26);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v79, 0LL);
      v80 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        v30 = i[7];
        if ( v30 )
        {
          v80 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v79, v30);
          *(_DWORD *)(*(_QWORD *)(i[7] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 7) )
          {
            v31 = v80;
            if ( !v80 )
              v31 = *(_QWORD *)v79[0];
            DestroyMenu(v31);
          }
        }
        v27 = i[8];
        if ( v27 )
        {
          v80 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v79, v27);
          *(_DWORD *)(*(_QWORD *)(i[8] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 8) )
          {
            v32 = v80;
            if ( !v80 )
              v32 = *(_QWORD *)v79[0];
            DestroyMenu(v32);
          }
        }
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v27, v28);
    }
    CCursorSizes::RefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry((__int64)ProfileUserName, 1u);
    xxxUpdateSystemIconsFromRegistry(ProfileUserName);
    v33 = 0;
    v34 = &v126;
    do
    {
      pData = 0;
      BugCheckParameter4 = &v63;
      if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v34 - 2), *(unsigned int *)v34) )
        xxxSystemParametersInfo(*((unsigned int *)v34 - 1), v63, 0LL, 0x8000LL, &v63, 0);
      ++v33;
      v34 += 2;
    }
    while ( v33 < 0xF );
    FastGetProfileIntsW(ProfileUserName, &v180, 4LL);
    LOBYTE(v35) = v71 != 0;
    EnableMouseAcceleration(v35, v36, v37);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, BugCheckParameter4, pData);
  if ( v4 )
    FastGetProfileIntFromID(ProfileUserName, 35LL, 236LL);
  v38 = 0;
  v39 = &v85;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v39 - 2), *(unsigned int *)v39) )
      xxxSystemParametersInfo(*((unsigned int *)v39 - 1), v63, 0LL, 0x8000LL, &v63, v19);
    ++v38;
    v39 += 2;
  }
  while ( v38 < 0xB );
  v43 = v19;
  if ( v72 )
    v43 = 2;
  EasTimeout = GetEasTimeout(v41, v40, v42);
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 99LL) && (!EasTimeout || v68 < EasTimeout) )
    EasTimeout = v68;
  xxxSystemParametersInfo(15LL, EasTimeout, 0LL, 0x8000LL, &v68, v43);
  FastGetProfileIntsW(ProfileUserName, &v196, 11LL);
  if ( SLODWORD(WPP_MAIN_CB.Dpc.DeferredContext) < 2 )
    LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 7;
  if ( SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) < 1 )
    HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 3;
  if ( v73 )
    _InterlockedOr(gpsi, 0x200u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  if ( v74 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v75 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v4 )
    {
      RtlStringCchPrintfW(Dest, 40LL, L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v248, 40LL);
      FastWriteProfileStringW(ProfileUserName, 4LL, v248, Dest);
    }
  }
  else if ( v75 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v63 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 4LL) )
    SetCaretBlinkTime(v63);
  if ( !v22 )
  {
    v66 = 0;
    FastGetProfileIntFromID(ProfileUserName, 12LL, 608LL);
    UpdateMouseSensitivity(v66);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, ProfileUserName);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(ProfileUserName, 12LL, 613LL);
    SetMouseTrails(v63);
    FastGetProfileIntW(ProfileUserName, 7LL, L"TTOnly");
    GreSetFontEnumeration(v63);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 91LL);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 92LL);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 93LL);
    v46 = *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1);
    if ( *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) < 0xAu )
    {
      v46 = 10;
      *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 10;
    }
    if ( v46 > 0x7FFFFFFF )
      *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(ProfileUserName);
    InitScancodeMap(v48, v47);
    FastGetProfileDword(ProfileUserName, 24LL, L"Attributes");
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(ProfileUserName);
  }
  v49 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL);
  if ( v49 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v49);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v69 & 2) != 0 )
    GreSetFontEnumeration(v69 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v69 | 0x30u);
  v50 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v50 )
    v50 = 1200;
  gulGamma = v50;
  v51 = (*(_DWORD *)UPDWORDPointer(8210LL) & 1) == 0;
  v52 = &unk_1C02D8E20;
  if ( v51 )
    v52 = &unk_1C02E9870;
  off_1C031F0F0 = v52;
  FreeProfileUserName(ProfileUserName, v83);
  if ( v76 == 2 )
    xxxUserResetDisplayDevice(v54, v53);
  BugCheckParameter4a = &v77;
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground");
  if ( v77 )
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
  if ( v4 )
  {
    memset(v84, 0, 0x38uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146, (__int64)v84, v55, v56) )
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
    UserSessionSwitchLeaveCrit(v57);
    LODWORD(BugCheckParameter4a) = 7;
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, BugCheckParameter4a, v81);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v4 )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v82 = 0x1000000LL;
        v241 = &v82;
        v243 = &dword_1C0325D7C;
        v242 = 8LL;
        v244 = 4LL;
        AutoRotationState = QueryAutoRotationState(v59, v58);
        p_AutoRotationState = &AutoRotationState;
        v246 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E5602, 0LL, 0LL, 5u, &v240);
      }
    }
    _InterlockedOr(gpsi, 0x400u);
  }
  return 1LL;
}
