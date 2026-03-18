/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C00E1850
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C00E1440 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C0022400 (_DestroyMenu.c)
 *     SetMouseTrails @ 0x1C0081ACC (SetMouseTrails.c)
 *     _SetCaretBlinkTime @ 0x1C0088F80 (_SetCaretBlinkTime.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B88F0 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ReadPointerDeviceSettings @ 0x1C00BA1D4 (ReadPointerDeviceSettings.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DF460 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     UnlockDesktopMenu @ 0x1C00E12C8 (UnlockDesktopMenu.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00E14EC (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C00E16F8 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     GreSetFontEnumeration @ 0x1C00E2B20 (GreSetFontEnumeration.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C00E2BA8 (UpdatePerUserKeyboardIndicators.c)
 *     GetEasTimeout @ 0x1C00E2CB8 (GetEasTimeout.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00E2E38 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C00E3040 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00E35EC (-xxxLoadSomeStrings@@YAXXZ.c)
 *     GetKbdLangSwitch @ 0x1C00E3D2C (GetKbdLangSwitch.c)
 *     SetIconMetrics @ 0x1C00E4424 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00E463C (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00E4788 (xxxSetWindowNCMetrics.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00E9CD0 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     WakeRIT @ 0x1C0111FF0 (WakeRIT.c)
 *     xxxUserResetDisplayDevice @ 0x1C0160850 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C01639E4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     QueryAutoRotationState @ 0x1C01D5EB4 (QueryAutoRotationState.c)
 *     CheckEasPolicyChange @ 0x1C01D733C (CheckEasPolicyChange.c)
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
  __int64 v14; // rdx
  USHORT Length; // ax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r14d
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *i; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v35; // esi
  __int64 *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned int v40; // esi
  __int64 *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // ebx
  unsigned int EasTimeout; // esi
  unsigned int j; // ebx
  unsigned int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  void *v51; // rax
  unsigned int v52; // ecx
  bool v53; // zf
  void *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int16 *v57; // r8
  unsigned int v58; // r9d
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int *BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int *BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  unsigned int v65; // [rsp+50h] [rbp-B0h] BYREF
  char v66[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v67; // [rsp+58h] [rbp-A8h]
  unsigned int v68; // [rsp+5Ch] [rbp-A4h]
  unsigned int v69; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v70; // [rsp+64h] [rbp-9Ch] BYREF
  int v71; // [rsp+68h] [rbp-98h] BYREF
  int v72; // [rsp+6Ch] [rbp-94h] BYREF
  int v73; // [rsp+70h] [rbp-90h] BYREF
  int v74; // [rsp+74h] [rbp-8Ch]
  int v75; // [rsp+78h] [rbp-88h] BYREF
  int v76; // [rsp+7Ch] [rbp-84h] BYREF
  int v77; // [rsp+80h] [rbp-80h] BYREF
  int v78; // [rsp+84h] [rbp-7Ch]
  int v79; // [rsp+88h] [rbp-78h] BYREF
  int AutoRotationState; // [rsp+8Ch] [rbp-74h] BYREF
  _QWORD v81[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-60h]
  char v83[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v85[3]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v86[18]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v87; // [rsp+118h] [rbp+18h] BYREF
  int v88; // [rsp+120h] [rbp+20h]
  int v89; // [rsp+124h] [rbp+24h]
  __int64 v90; // [rsp+128h] [rbp+28h]
  int v91; // [rsp+130h] [rbp+30h]
  int v92; // [rsp+134h] [rbp+34h]
  int v93; // [rsp+138h] [rbp+38h]
  int v94; // [rsp+13Ch] [rbp+3Ch]
  int v95; // [rsp+140h] [rbp+40h]
  int v96; // [rsp+144h] [rbp+44h]
  int v97; // [rsp+148h] [rbp+48h]
  int v98; // [rsp+14Ch] [rbp+4Ch]
  int v99; // [rsp+150h] [rbp+50h]
  int v100; // [rsp+154h] [rbp+54h]
  int v101; // [rsp+158h] [rbp+58h]
  int v102; // [rsp+15Ch] [rbp+5Ch]
  int v103; // [rsp+160h] [rbp+60h]
  int v104; // [rsp+164h] [rbp+64h]
  int v105; // [rsp+168h] [rbp+68h]
  int v106; // [rsp+16Ch] [rbp+6Ch]
  int v107; // [rsp+170h] [rbp+70h]
  int v108; // [rsp+174h] [rbp+74h]
  int v109; // [rsp+178h] [rbp+78h]
  int v110; // [rsp+17Ch] [rbp+7Ch]
  int v111; // [rsp+180h] [rbp+80h]
  int v112; // [rsp+184h] [rbp+84h]
  int v113; // [rsp+188h] [rbp+88h]
  int v114; // [rsp+18Ch] [rbp+8Ch]
  int v115; // [rsp+190h] [rbp+90h]
  int v116; // [rsp+194h] [rbp+94h]
  int v117; // [rsp+198h] [rbp+98h]
  int v118; // [rsp+19Ch] [rbp+9Ch]
  int v119; // [rsp+1A0h] [rbp+A0h]
  int v120; // [rsp+1A4h] [rbp+A4h]
  int v121; // [rsp+1A8h] [rbp+A8h]
  int v122; // [rsp+1ACh] [rbp+ACh]
  int v123; // [rsp+1B0h] [rbp+B0h]
  int v124; // [rsp+1B4h] [rbp+B4h]
  __int64 v125; // [rsp+1B8h] [rbp+B8h]
  int v126; // [rsp+1C0h] [rbp+C0h]
  int v127; // [rsp+1C4h] [rbp+C4h]
  __int64 v128; // [rsp+1C8h] [rbp+C8h] BYREF
  int v129; // [rsp+1D0h] [rbp+D0h]
  int v130; // [rsp+1D4h] [rbp+D4h]
  int v131; // [rsp+1D8h] [rbp+D8h]
  int v132; // [rsp+1DCh] [rbp+DCh]
  int v133; // [rsp+1E0h] [rbp+E0h]
  int v134; // [rsp+1E4h] [rbp+E4h]
  int v135; // [rsp+1E8h] [rbp+E8h]
  int v136; // [rsp+1ECh] [rbp+ECh]
  int v137; // [rsp+1F0h] [rbp+F0h]
  int v138; // [rsp+1F4h] [rbp+F4h]
  int v139; // [rsp+1F8h] [rbp+F8h]
  int v140; // [rsp+1FCh] [rbp+FCh]
  int v141; // [rsp+200h] [rbp+100h]
  int v142; // [rsp+204h] [rbp+104h]
  int v143; // [rsp+208h] [rbp+108h]
  int v144; // [rsp+20Ch] [rbp+10Ch]
  int v145; // [rsp+210h] [rbp+110h]
  int v146; // [rsp+214h] [rbp+114h]
  __int64 v147; // [rsp+218h] [rbp+118h]
  int v148; // [rsp+220h] [rbp+120h]
  int v149; // [rsp+224h] [rbp+124h]
  __int64 v150; // [rsp+228h] [rbp+128h]
  int v151; // [rsp+230h] [rbp+130h]
  int v152; // [rsp+234h] [rbp+134h]
  int v153; // [rsp+238h] [rbp+138h]
  int v154; // [rsp+23Ch] [rbp+13Ch]
  int v155; // [rsp+240h] [rbp+140h]
  int v156; // [rsp+244h] [rbp+144h]
  int v157; // [rsp+248h] [rbp+148h]
  int v158; // [rsp+24Ch] [rbp+14Ch]
  int v159; // [rsp+250h] [rbp+150h]
  int v160; // [rsp+254h] [rbp+154h]
  int v161; // [rsp+258h] [rbp+158h]
  int v162; // [rsp+25Ch] [rbp+15Ch]
  int v163; // [rsp+260h] [rbp+160h]
  int v164; // [rsp+264h] [rbp+164h]
  int v165; // [rsp+268h] [rbp+168h]
  int v166; // [rsp+26Ch] [rbp+16Ch]
  int v167; // [rsp+270h] [rbp+170h]
  int v168; // [rsp+274h] [rbp+174h]
  int v169; // [rsp+278h] [rbp+178h]
  int v170; // [rsp+27Ch] [rbp+17Ch]
  int v171; // [rsp+280h] [rbp+180h]
  int v172; // [rsp+284h] [rbp+184h]
  int v173; // [rsp+288h] [rbp+188h]
  int v174; // [rsp+28Ch] [rbp+18Ch]
  int v175; // [rsp+290h] [rbp+190h]
  int v176; // [rsp+294h] [rbp+194h]
  int v177; // [rsp+298h] [rbp+198h]
  int v178; // [rsp+29Ch] [rbp+19Ch]
  int v179; // [rsp+2A0h] [rbp+1A0h]
  int v180; // [rsp+2A4h] [rbp+1A4h]
  __int64 v181; // [rsp+2A8h] [rbp+1A8h]
  int v182; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v183; // [rsp+2B8h] [rbp+1B8h]
  int v184; // [rsp+2C0h] [rbp+1C0h]
  char *v185; // [rsp+2C8h] [rbp+1C8h]
  int v186; // [rsp+2D0h] [rbp+1D0h]
  __int64 v187; // [rsp+2D8h] [rbp+1D8h]
  int v188; // [rsp+2E0h] [rbp+1E0h]
  PKDEFERRED_ROUTINE *p_DeferredRoutine; // [rsp+2E8h] [rbp+1E8h]
  int v190; // [rsp+2F0h] [rbp+1F0h]
  __int64 v191; // [rsp+2F8h] [rbp+1F8h]
  int v192; // [rsp+300h] [rbp+200h]
  int *v193; // [rsp+308h] [rbp+208h]
  int v194; // [rsp+310h] [rbp+210h]
  __int64 v195; // [rsp+318h] [rbp+218h]
  int v196; // [rsp+320h] [rbp+220h]
  __int64 v197; // [rsp+328h] [rbp+228h]
  int v198; // [rsp+330h] [rbp+230h] BYREF
  __int64 v199; // [rsp+338h] [rbp+238h]
  int v200; // [rsp+340h] [rbp+240h]
  PVOID *p_SystemArgument1; // [rsp+348h] [rbp+248h]
  int v202; // [rsp+350h] [rbp+250h]
  __int64 v203; // [rsp+358h] [rbp+258h]
  int v204; // [rsp+360h] [rbp+260h]
  int *v205; // [rsp+368h] [rbp+268h]
  int v206; // [rsp+370h] [rbp+270h]
  __int64 v207; // [rsp+378h] [rbp+278h]
  int v208; // [rsp+380h] [rbp+280h]
  char *v209; // [rsp+388h] [rbp+288h]
  int v210; // [rsp+390h] [rbp+290h]
  __int64 v211; // [rsp+398h] [rbp+298h]
  int v212; // [rsp+3A0h] [rbp+2A0h]
  PVOID *p_DeferredContext; // [rsp+3A8h] [rbp+2A8h]
  int v214; // [rsp+3B0h] [rbp+2B0h]
  __int64 v215; // [rsp+3B8h] [rbp+2B8h]
  int v216; // [rsp+3C0h] [rbp+2C0h]
  __int64 v217; // [rsp+3C8h] [rbp+2C8h]
  int v218; // [rsp+3D0h] [rbp+2D0h]
  __int64 v219; // [rsp+3D8h] [rbp+2D8h]
  int v220; // [rsp+3E0h] [rbp+2E0h]
  __int64 v221; // [rsp+3E8h] [rbp+2E8h]
  int v222; // [rsp+3F0h] [rbp+2F0h]
  __int64 v223; // [rsp+3F8h] [rbp+2F8h]
  int v224; // [rsp+400h] [rbp+300h]
  int *v225; // [rsp+408h] [rbp+308h]
  int v226; // [rsp+410h] [rbp+310h]
  __int64 v227; // [rsp+418h] [rbp+318h]
  int v228; // [rsp+420h] [rbp+320h]
  int *v229; // [rsp+428h] [rbp+328h]
  int v230; // [rsp+430h] [rbp+330h]
  __int64 v231; // [rsp+438h] [rbp+338h]
  int v232; // [rsp+440h] [rbp+340h]
  __int64 v233; // [rsp+448h] [rbp+348h]
  int v234; // [rsp+450h] [rbp+350h]
  __int64 v235; // [rsp+458h] [rbp+358h]
  int v236; // [rsp+460h] [rbp+360h]
  int *v237; // [rsp+468h] [rbp+368h]
  int v238; // [rsp+470h] [rbp+370h]
  __int64 v239; // [rsp+478h] [rbp+378h]
  int v240; // [rsp+480h] [rbp+380h]
  int *v241; // [rsp+488h] [rbp+388h]
  EVENT_DATA_DESCRIPTOR v242; // [rsp+490h] [rbp+390h] BYREF
  __int64 *v243; // [rsp+4B0h] [rbp+3B0h]
  __int64 v244; // [rsp+4B8h] [rbp+3B8h]
  int *v245; // [rsp+4C0h] [rbp+3C0h]
  __int64 v246; // [rsp+4C8h] [rbp+3C8h]
  int *p_AutoRotationState; // [rsp+4D0h] [rbp+3D0h]
  __int64 v248; // [rsp+4D8h] [rbp+3D8h]
  wchar_t Dest[40]; // [rsp+4E0h] [rbp+3E0h] BYREF
  _BYTE v250[80]; // [rsp+530h] [rbp+430h] BYREF

  v78 = a1;
  v74 = 0;
  v86[17] = 4135;
  v71 = gulFontInformation;
  v69 = 96;
  v3 = 0;
  v86[16] = 4;
  memset(v85, 0, sizeof(v85));
  v77 = gdwPUDFlags & 0x100000;
  v75 = 0;
  v87 = 112LL;
  v102 = 3;
  v76 = gdwPUDFlags & 0x10000;
  v106 = 3;
  v105 = 15;
  v132 = 15;
  v73 = 1;
  v88 = 4;
  v89 = 17;
  v90 = 100LL;
  v91 = 4;
  v92 = 77;
  v93 = 199;
  v94 = 4;
  v95 = 4;
  v96 = 76;
  v97 = 198;
  v98 = 4;
  v99 = 4;
  v100 = 105;
  v101 = 14;
  v103 = 4;
  v104 = 109;
  v107 = 4;
  v108 = 131;
  v109 = 18;
  v110 = 1;
  v111 = 4;
  v112 = 141;
  v113 = 624;
  v114 = 1;
  v115 = 4;
  v116 = 145;
  v117 = 625;
  v118 = 1;
  v119 = 4;
  v120 = 143;
  v121 = 626;
  v122 = 1;
  v123 = 4;
  v124 = 159;
  v125 = 628LL;
  v126 = 13;
  v127 = 23;
  v128 = 106LL;
  v129 = 13;
  v130 = 11;
  v131 = 13;
  v161 = 17;
  v146 = 96;
  v166 = 20;
  v169 = 20;
  v150 = 96LL;
  v174 = 50;
  v178 = 50;
  v164 = 133;
  p_SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  v205 = &v77;
  v209 = (char *)&WPP_MAIN_CB.Dpc.DeferredContext + 4;
  v207 = 133LL;
  p_DeferredContext = &WPP_MAIN_CB.Dpc.DeferredContext;
  v133 = 12;
  v134 = 32;
  v135 = 6;
  v136 = 500;
  v137 = 12;
  v138 = 29;
  v139 = 97;
  v140 = 4;
  v141 = 12;
  v142 = 30;
  v143 = 98;
  v144 = 4;
  v145 = 12;
  v147 = 7LL;
  v148 = 3;
  v149 = 28;
  v151 = 35;
  v152 = 111;
  v153 = 236;
  v154 = 1;
  v155 = 12;
  v156 = 127;
  v157 = 16;
  v158 = 1;
  v159 = 12;
  v160 = 129;
  v162 = 30;
  v163 = 12;
  v165 = 19;
  v167 = 12;
  v168 = 135;
  v170 = 30;
  v171 = 12;
  v172 = 137;
  v173 = 21;
  v175 = 12;
  v176 = 139;
  v177 = 22;
  v179 = 4;
  v180 = 169;
  v181 = 205LL;
  v198 = 4;
  v199 = 94LL;
  v200 = 400;
  v202 = 4;
  v203 = 107LL;
  v204 = 2;
  v206 = 4;
  v208 = 3;
  v210 = 4;
  v211 = 134LL;
  v212 = 7;
  v214 = 4;
  v215 = 159LL;
  v216 = 3;
  v182 = 12;
  v186 = 12;
  v190 = 12;
  v191 = 12LL;
  v217 = gpsi + 4996LL;
  v218 = 4;
  v221 = gpsi + 5000LL;
  v4 = a1 & 1;
  v222 = 4;
  v226 = 4;
  v225 = &v71;
  v229 = &v75;
  v233 = gdwHungAppTimeout;
  v237 = &gdwWaitToKillTimeout;
  v241 = &v76;
  v185 = (char *)&WPP_MAIN_CB.Dpc.DeferredRoutine + 4;
  p_DeferredRoutine = &WPP_MAIN_CB.Dpc.DeferredRoutine;
  v230 = 4;
  v234 = 4;
  v240 = 1;
  v5 = a1 & 2;
  v192 = 1;
  v6 = a1 & 4;
  v193 = &v73;
  v232 = 5000;
  v236 = 5000;
  v197 = gfEnableHexNumpad;
  v219 = 160LL;
  v220 = 3;
  v223 = 200LL;
  v224 = 0;
  v227 = 618LL;
  v228 = 0;
  v231 = 621LL;
  v235 = 622LL;
  v238 = 23;
  v239 = 149LL;
  v183 = 10LL;
  v184 = 6;
  v187 = 11LL;
  v188 = 10;
  v194 = 35;
  v195 = 237LL;
  v196 = 0;
  v68 = v5;
  v67 = (unsigned __int8)v6;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL, v7, v8, v9);
    return 0LL;
  }
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v85);
  if ( !ProfileUserName )
    return 0LL;
  if ( grpWinStaList )
  {
    v12 = *(_QWORD *)(grpWinStaList + 176LL);
    if ( v12 )
      Win32FreePool(v12);
    v13 = Win32AllocPool(ProfileUserName->Length, 1852863317LL);
    v14 = 0LL;
    *(_QWORD *)(grpWinStaList + 176LL) = v13;
    if ( v13 )
    {
      Length = ProfileUserName->Length;
      *(_WORD *)(grpWinStaList + 168LL) = 0;
      *(_WORD *)(grpWinStaList + 170LL) = Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 168LL), ProfileUserName);
    }
    if ( v4 )
      WakeRIT(64LL, v14);
    v6 = v67;
  }
  if ( v5 && !v6 )
  {
    v74 = CheckEasPolicyChange();
    v16 = v74;
    if ( !(unsigned int)CheckDesktopPolicyChange(ProfileUserName) && !v16 )
    {
      UserSetLastError(0LL, v17, v18, v19);
      FreeProfileUserName(ProfileUserName, v85);
      return 0LL;
    }
    v3 = 16;
  }
  if ( v4 )
    gdwPolicyFlags |= 2u;
  v65 = 300;
  v20 = v3 | 8;
  if ( !v67 )
    v20 = v3;
  FastGetProfileValue(ProfileUserName, 4LL, 607LL, &v65, (char *)&WPP_MAIN_CB.Dpc.ProcessorHistory + 4, 4, v20);
  if ( (unsigned int)(HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) - 1) > 0x3E6 )
    HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) = 1000;
  if ( v4 )
  {
    if ( !gDpiAdjustedForLoggedOnUser && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      FastGetProfileDwordEx(ProfileUserName, 4LL, L"LogPixels", 0LL, v20, &v69, 0LL);
      v72 = 0;
      v21 = DrvInitializeDxgkrnlDpiCache(&v72);
      v22 = PerformLegacyDpiUpgrade(ProfileUserName, v69);
      if ( v21 < 0 || v72 || gdmLogPixelsOfPrimary != gdmLogPixels || v22 || v69 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(pData) = 0;
        v66[0] = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL, 0LL, pData, 0LL, 0LL, v66, a2) >= 0 )
        {
          if ( v66[0] )
            ((void (*)(void))xxxUserResetDisplayDevice)();
          UserReinitializeStockFonts(*(unsigned __int16 *)(gpsi + 6998LL), 1);
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  LoadCPUserPreferences(ProfileUserName, v20);
  v23 = v68;
  if ( !v68 )
  {
    xxxODI_ColorInit(ProfileUserName);
    LW_LoadResources(ProfileUserName);
    if ( (unsigned int)GreTextInitialized(v25, v24) )
      xxxSetWindowNCMetrics(ProfileUserName, 0LL);
    SetMinMetrics(ProfileUserName);
    SetIconMetrics(ProfileUserName);
    GetKbdLangSwitch(ProfileUserName, v26, v27);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v81, 0LL);
      v82 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        v32 = i[7];
        if ( v32 )
        {
          v82 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v81, v32);
          *(_DWORD *)(*(_QWORD *)(i[7] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 7) )
          {
            v33 = v82;
            if ( !v82 )
              v33 = *(_QWORD *)v81[0];
            DestroyMenu(v33);
          }
        }
        v28 = i[8];
        if ( v28 )
        {
          v82 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v81, v28);
          *(_DWORD *)(*(_QWORD *)(i[8] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 8) )
          {
            v34 = v82;
            if ( !v82 )
              v34 = *(_QWORD *)v81[0];
            DestroyMenu(v34);
          }
        }
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v81, v28, v29, v30);
    }
    CCursorSizes::RefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry((__int64)ProfileUserName, 1u);
    xxxUpdateSystemIconsFromRegistry(ProfileUserName);
    v35 = 0;
    v36 = &v128;
    do
    {
      pData = 0;
      BugCheckParameter4 = &v65;
      if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v36 - 2), *(unsigned int *)v36) )
        xxxSystemParametersInfo(*((unsigned int *)v36 - 1), v65, 0LL, 0x8000LL, &v65, 0);
      ++v35;
      v36 += 2;
    }
    while ( v35 < 0xF );
    FastGetProfileIntsW(ProfileUserName, &v182, 4LL);
    LOBYTE(v37) = v73 != 0;
    EnableMouseAcceleration(v37, v38, v39);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, BugCheckParameter4, pData);
  if ( v4 )
    FastGetProfileIntFromID(ProfileUserName, 35LL, 236LL);
  v40 = 0;
  v41 = &v87;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, *((unsigned int *)v41 - 2), *(unsigned int *)v41) )
      xxxSystemParametersInfo(*((unsigned int *)v41 - 1), v65, 0LL, 0x8000LL, &v65, v20);
    ++v40;
    v41 += 2;
  }
  while ( v40 < 0xB );
  v45 = v20;
  if ( v74 )
    v45 = 2;
  EasTimeout = GetEasTimeout(v43, v42, v44);
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 99LL) && (!EasTimeout || v70 < EasTimeout) )
    EasTimeout = v70;
  xxxSystemParametersInfo(15LL, EasTimeout, 0LL, 0x8000LL, &v70, v45);
  FastGetProfileIntsW(ProfileUserName, &v198, 11LL);
  if ( SLODWORD(WPP_MAIN_CB.Dpc.DeferredContext) < 2 )
    LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 7;
  if ( SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) < 1 )
    HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 3;
  if ( v75 )
    _InterlockedOr(gpsi, 0x200u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  if ( v76 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v77 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v4 )
    {
      RtlStringCchPrintfW(Dest, 40LL, L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v250, 40LL);
      FastWriteProfileStringW(ProfileUserName, 4LL, v250, Dest);
    }
  }
  else if ( v77 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v65 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(ProfileUserName, 4LL, 4LL) )
    SetCaretBlinkTime(v65);
  if ( !v23 )
  {
    v68 = 0;
    FastGetProfileIntFromID(ProfileUserName, 12LL, 608LL);
    UpdateMouseSensitivity(v68);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, ProfileUserName);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(ProfileUserName, 12LL, 613LL);
    SetMouseTrails(v65);
    FastGetProfileIntW(ProfileUserName, 7LL, L"TTOnly");
    GreSetFontEnumeration(v65);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 91LL);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 92LL);
    FastGetProfileIntFromID(ProfileUserName, 12LL, 93LL);
    v48 = *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1);
    if ( *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) < 0xAu )
    {
      v48 = 10;
      *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 10;
    }
    if ( v48 > 0x7FFFFFFF )
      *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(ProfileUserName);
    InitScancodeMap(v50, v49);
    FastGetProfileDword(ProfileUserName, 24LL, L"Attributes");
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(ProfileUserName);
  }
  v51 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL);
  if ( v51 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v51);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v71 & 2) != 0 )
    GreSetFontEnumeration(v71 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v71 | 0x30u);
  v52 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v52 )
    v52 = 1200;
  gulGamma = v52;
  v53 = (*(_DWORD *)UPDWORDPointer(8210LL) & 1) == 0;
  v54 = &unk_1C02DB5C0;
  if ( v53 )
    v54 = &unk_1C02EA240;
  off_1C03210F0 = v54;
  FreeProfileUserName(ProfileUserName, v85);
  if ( v78 == 2 )
    xxxUserResetDisplayDevice(v56, v55);
  BugCheckParameter4a = &v79;
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground");
  if ( v79 )
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
  if ( v4 )
  {
    memset(v86, 0, 0x38uLL);
    if ( (unsigned int)ReadPointerDeviceSettings(146, (__int64)v86, v57, v58) )
    {
      if ( !v86[7] )
        RawInputManagerObject::bTouchInputAllowed = 0;
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    if ( gdwInAtomicOperation )
    {
      v59 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v59);
    LODWORD(BugCheckParameter4a) = 7;
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, BugCheckParameter4a, v83);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v4 )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v84 = 0x1000000LL;
        v243 = &v84;
        v245 = &dword_1C0327D7C;
        v244 = 8LL;
        v246 = 4LL;
        AutoRotationState = QueryAutoRotationState(v61, v60);
        p_AutoRotationState = &AutoRotationState;
        v248 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E6042, 0LL, 0LL, 5u, &v242);
      }
    }
    _InterlockedOr(gpsi, 0x400u);
  }
  return 1LL;
}
