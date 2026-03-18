/*
 * XREFs of DrvSetDisplayConfig @ 0x1C004A830
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C004BCC8 (DrvChangeDisplaySettings.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004C440 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2054 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitVideo @ 0x1C00B2994 (InitVideo.c)
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0042B10 (DrvDisplayConfigGetDeviceInfo.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C004810C (--0AUTO_TGO@@IEAA@XZ.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C004B2C8 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004B338 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C004B368 (GetPathsModality.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004B498 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     LogDiagSDC @ 0x1C004B714 (LogDiagSDC.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C004BB3C (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004BB64 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ApplyPathsModality @ 0x1C004E238 (ApplyPathsModality.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004FD28 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C006D0CC (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C006D9B8 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CBB68 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C00CC218 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00CCED4 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00CEB3C (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CF034 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D260C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D2AD0 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D2C84 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        unsigned int a4,
        void *a5,
        char a6,
        __int64 a7,
        __int64 a8,
        struct _MDEV *a9,
        struct _MDEV **a10,
        unsigned int *a11,
        int *a12,
        char *a13,
        _BYTE *a14,
        __int64 a15)
{
  __int64 v17; // r15
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // r14
  int v29; // edi
  char v30; // di
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rdx
  int v38; // eax
  char v39; // di
  __int64 v40; // rax
  __int64 v41; // r13
  unsigned int v42; // esi
  struct _DISPLAYCONFIG_CDS_REQUEST *v43; // r12
  char v44; // di
  __int64 v45; // rcx
  int v46; // eax
  int v47; // ebx
  unsigned int v48; // ebx
  int v49; // eax
  struct D3DKMT_GETPATHSMODALITY *v50; // rcx
  int v51; // eax
  int PathPersistentMonitorsIfNeeded; // eax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  struct _MDEV *v61; // r12
  int v62; // eax
  unsigned int v63; // eax
  struct _MDEV **v64; // r13
  char v65; // al
  __int64 v66; // rdi
  __int64 v67; // rcx
  struct D3DKMT_GETPATHSMODALITY *v68; // rcx
  int v69; // esi
  unsigned int v70; // esi
  char v71; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v72; // rax
  __int64 v73; // rdx
  _BOOL8 v74; // rcx
  bool v75; // sf
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  int v81; // eax
  int v82; // r12d
  unsigned int v83; // edi
  int v84; // ecx
  unsigned int v85; // esi
  int v86; // r15d
  wchar_t *v87; // rcx
  unsigned int v88; // eax
  char *v89; // rdi
  char *PoolWithTag; // rax
  wchar_t *v91; // rdx
  unsigned int i; // r8d
  __int64 v93; // rcx
  int v94; // r8d
  struct _MDEV **v95; // rsi
  int v96; // eax
  int v97; // edi
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // r8
  struct _MDEV *v102; // rsi
  __int64 v103; // rax
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  int PathsModality; // eax
  int v109; // ebx
  int v110; // eax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  unsigned int v114; // ebx
  const struct _RETRY_MODE *v115; // rdi
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  int v124; // eax
  int v125; // eax
  int PathModalityForDisplayConfig; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  unsigned int v132; // esi
  int v133; // eax
  int v134; // eax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  int v139; // eax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rax
  int v152; // eax
  int v153; // eax
  struct _MDEV *v154; // rdi
  __int64 v155; // rax
  int v156; // edx
  __int64 v157; // rax
  __int64 v158; // rax
  int v159; // [rsp+20h] [rbp-E0h]
  int v160; // [rsp+28h] [rbp-D8h]
  bool v161; // [rsp+40h] [rbp-C0h]
  int v162; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v163; // [rsp+48h] [rbp-B8h] BYREF
  char v164; // [rsp+49h] [rbp-B7h]
  char v165; // [rsp+4Ah] [rbp-B6h]
  char v166; // [rsp+4Bh] [rbp-B5h] BYREF
  bool v167; // [rsp+4Ch] [rbp-B4h] BYREF
  bool v168; // [rsp+4Dh] [rbp-B3h]
  bool v169; // [rsp+4Eh] [rbp-B2h]
  char v170; // [rsp+4Fh] [rbp-B1h]
  int v171; // [rsp+50h] [rbp-B0h] BYREF
  int v172; // [rsp+54h] [rbp-ACh]
  int v173; // [rsp+58h] [rbp-A8h]
  struct _MDEV **v174; // [rsp+60h] [rbp-A0h]
  unsigned int v175; // [rsp+68h] [rbp-98h]
  struct _MDEV *v176; // [rsp+70h] [rbp-90h]
  unsigned int v177; // [rsp+78h] [rbp-88h]
  unsigned int v178; // [rsp+7Ch] [rbp-84h]
  int v179; // [rsp+80h] [rbp-80h]
  unsigned int v180; // [rsp+84h] [rbp-7Ch]
  unsigned int v181; // [rsp+88h] [rbp-78h]
  int v182; // [rsp+8Ch] [rbp-74h]
  int v183; // [rsp+90h] [rbp-70h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v184; // [rsp+98h] [rbp-68h]
  unsigned __int16 v185[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v186; // [rsp+A4h] [rbp-5Ch]
  struct _DISPLAYCONFIG_CDS_REQUEST *v187; // [rsp+A8h] [rbp-58h]
  __int64 v188; // [rsp+B0h] [rbp-50h]
  _QWORD v189[6]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v190[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v191; // [rsp+100h] [rbp+0h] BYREF
  char v192; // [rsp+108h] [rbp+8h]
  __int64 v193; // [rsp+110h] [rbp+10h]
  void *v194; // [rsp+118h] [rbp+18h] BYREF
  int v195; // [rsp+120h] [rbp+20h]
  void *v196; // [rsp+128h] [rbp+28h]
  __int64 v197; // [rsp+130h] [rbp+30h]
  void *v198; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v199; // [rsp+140h] [rbp+40h]
  int *v200; // [rsp+148h] [rbp+48h]
  char *v201; // [rsp+150h] [rbp+50h]
  _BYTE *v202; // [rsp+158h] [rbp+58h]
  __int64 v203; // [rsp+160h] [rbp+60h]
  _DWORD v204[4]; // [rsp+168h] [rbp+68h] BYREF
  int v205[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v206; // [rsp+180h] [rbp+80h]
  int v207; // [rsp+188h] [rbp+88h]
  char v208; // [rsp+18Ch] [rbp+8Ch]
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v196 = a5;
  v176 = a9;
  v199 = a11;
  v200 = a12;
  v202 = a14;
  v197 = a15;
  v181 = a1;
  v201 = a13;
  v17 = (unsigned int)a3;
  v175 = a4;
  v18 = 0;
  v168 = gbBaseVideo != 0;
  v173 = a3;
  v186 = -1;
  v184 = a2;
  v187 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v174 = a10;
  v180 = 0;
  v177 = gbBaseVideo != 0 ? 3 : 0;
  v165 = 0;
  v163 = 0;
  v166 = 0;
  v162 = 0;
  v171 = -5;
  v172 = 0;
  v178 = 0;
  v170 = 0;
  v19 = WdLogNewEntry5_WdEvent(0LL, a2, a3);
  *(_QWORD *)(v19 + 24) = v17;
  WdLogEvent5_WdEvent(v19);
  v188 = MEMORY[0xFFFFF78000000320];
  v203 = v188 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)v17, a4, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(200 * a1, a1, v184);
  v198 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v198, 4LL);
  v24 = gOldModeChange == 0;
  *a10 = 0LL;
  if ( !v24 )
  {
    v100 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    WdLogEvent5_WdAssertion(v100);
  }
  if ( (v17 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v169 = (a4 & 2) != 0 && (v17 & 0x88F) == 2191;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v189);
  v189[0] = &off_1C016B730;
  v193 = v197;
  v28 = 1;
  *(_OWORD *)v190 = 0LL;
  v191 = 0LL;
  v192 = 0;
  v194 = 0LL;
  if ( gProtocolType )
  {
    v29 = a4 & 1;
LABEL_270:
    if ( (a4 & 0x20) != 0 )
    {
      v151 = WdLogNewEntry5_WdAssertion(v25, 0LL, v26, v27);
      WdLogEvent5_WdAssertion(v151);
    }
    v102 = v176;
    v64 = v174;
    v152 = DrvChangeDisplayFallback(
             v196,
             BYTE1(v17) & 1,
             v29,
             v176,
             v174,
             (enum _DXGK_DIAG_SDC_STAGE *)&v162,
             &v163,
             &v171);
    v35 = 0LL;
    LODWORD(v36) = v152;
    if ( v152 >= 0 )
    {
      v153 = v162;
      v33 = 30LL;
      if ( v29 )
        v153 = 30;
      v162 = v153;
      goto LABEL_159;
    }
    goto LABEL_149;
  }
  v29 = a4 & 1;
  if ( (a4 & 1) != 0 )
    goto LABEL_270;
  if ( (v17 & 0x40000000) != 0 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
      10733637LL,
      &unk_1C01743A4,
      0LL,
      3);
    if ( (v17 & 0x10000) == 0 )
    {
      if ( gbBaseVideo )
      {
        v107 = WdLogNewEntry5_WdAssertion(v33, v32, v101, v34);
        WdLogEvent5_WdAssertion(v107);
      }
      PathsModality = GetPathsModality(v33, v190, 15LL);
      v35 = 0LL;
      LODWORD(v36) = PathsModality;
      if ( PathsModality < 0 )
      {
        v162 = 2;
        goto LABEL_158;
      }
      v109 = *((_DWORD *)v190[0] + 8) & 0xF;
      if ( v109 == 1 || v109 == 8 )
      {
        v64 = v174;
        LODWORD(v36) = -1073741637;
        v162 = 25;
        goto LABEL_148;
      }
      LOBYTE(v33) = 1;
      v164 = 1;
      LOBYTE(v32) = v109 == 4;
      v30 = 1;
      ((void (__fastcall *)(__int64, __int64, _QWORD))qword_1C01A1CB8)(v33, v32, 0LL);
      if ( v109 != 4 )
      {
        LODWORD(v17) = 132;
LABEL_173:
        v173 = v17;
        goto LABEL_12;
      }
      v162 = 26;
LABEL_166:
      v64 = v174;
      v66 = 0LL;
      LODWORD(v36) = 0;
      v163 = 1;
      goto LABEL_74;
    }
    v162 = 37;
LABEL_147:
    v64 = v174;
    LODWORD(v36) = -1073741811;
    v35 = 0LL;
    goto LABEL_148;
  }
  if ( (int)v17 < 0 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
      10733637LL,
      &unk_1C01743A4,
      0LL,
      3);
    if ( (v17 & 0x10000) == 0 )
    {
      v164 = 0;
      v30 = 0;
      if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C01A1CB8)(0LL, 0LL) )
      {
        LODWORD(v17) = 2191;
        goto LABEL_173;
      }
      v162 = 18;
      goto LABEL_166;
    }
    v162 = 38;
    goto LABEL_147;
  }
  if ( (v17 & 0xF) != 0xF || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) )
  {
    if ( (v17 & 0x200) != 0 || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) || (v17 & 0x1F) != 0 && (v17 & 0x40) == 0 )
    {
      v30 = 0;
      v164 = 0;
      ((void (__fastcall *)(_QWORD))qword_1C01A1CB8)(0LL);
    }
    else
    {
      v30 = ((__int64 (*)(void))qword_1C01A1CC0)();
      v164 = v30;
    }
    goto LABEL_12;
  }
  v164 = ((__int64 (*)(void))qword_1C01A1CC0)();
  v30 = v164;
  if ( v164 )
  {
    LODWORD(v17) = v17 & 0xFFFFFFF0 | 4;
    goto LABEL_173;
  }
LABEL_12:
  v179 = v17 & 0x10000;
  v195 = v17 & 0x80;
  if ( (v17 & 0x10000) != 0 )
  {
    v110 = ((__int64 (__fastcall *)(__int64, _QWORD, void **))qword_1C01A2028)(
             a7,
             (v17 & 0x80) != 0 ? 2031616 : 0x20000,
             &v194);
    v35 = 0LL;
    LODWORD(v36) = v110;
    if ( v110 < 0 )
    {
      v162 = 42;
      goto LABEL_158;
    }
  }
  v31 = ((__int64 (*)(void))qword_1C01A1AA0)();
  v35 = 0LL;
  LODWORD(v36) = v31;
  if ( v31 < 0 )
  {
    v162 = 12;
    v18 = 6;
    goto LABEL_158;
  }
  v192 = 1;
  if ( (v17 & 0x80) != 0 )
  {
    v37 = 1LL;
    if ( !v30 && (v17 & 0xF) != 0 && (v175 & 0x20) == 0 )
      v37 = 3LL;
    v38 = ((__int64 (__fastcall *)(__int64))qword_1C01A1AC0)(v37);
    v35 = 0LL;
    v36 = v38;
    if ( v38 < 0 )
    {
      v111 = WdLogNewEntry5_WdEvent(v33, v32, 0LL);
      *(_QWORD *)(v111 + 24) = v36;
      WdLogEvent5_WdEvent(v111);
      DrvDxgkLogCodePointPacket(4LL, (unsigned int)v36, 0LL);
      v35 = 0LL;
      LODWORD(v36) = 0;
    }
  }
  if ( (v17 & 0x200) == 0 || (v17 & 0x40) != 0 )
  {
    v39 = 0;
    v161 = 0;
  }
  else
  {
    v39 = 1;
    v161 = 1;
  }
  v183 = v17 & 0xF;
  while ( 1 )
  {
    v40 = WdLogNewEntry5_WdEvent(v33, v32, v35);
    v41 = v180;
    v188 = v180;
    *(_QWORD *)(v40 + 24) = v180;
    *(_QWORD *)(v40 + 32) = (int)v36;
    WdLogEvent5_WdEvent(v40);
    v42 = 0;
    v182 = 0;
    v166 = 0;
    v163 = 0;
    FreePathsModality(v190[0]);
    FreePathsModality(v190[1]);
    v35 = 0LL;
    v190[1] = 0LL;
    v190[0] = 0LL;
    if ( !v168 )
    {
      if ( v183 )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
          10733637LL,
          &unk_1C01743A4,
          0LL,
          3);
        v35 = 0LL;
        if ( v179 )
        {
          LODWORD(v36) = -1073741811;
          v162 = 39;
          goto LABEL_67;
        }
        v43 = v187;
        if ( (v175 & 0x20) == 0 || (v44 = 1, !*((_QWORD *)v187 + 4)) )
          v44 = 0;
        v45 = (v175 & 0x20) != 0 ? 0x9000 : 0;
        if ( v44 && !*((_DWORD *)v187 + 5) )
        {
          v46 = v183;
          v47 = 0x2000000;
        }
        else
        {
          v46 = v183;
          v47 = v183;
        }
        v48 = v45 | v47;
        if ( (v48 & 0x2000000) != 0 && v46 != 15 )
        {
          v122 = WdLogNewEntry5_WdAssertion(v45, v32, 0LL, v34);
          WdLogEvent5_WdAssertion(v122);
        }
        v49 = GetPathsModality(v45, v190, v48);
        v35 = 0LL;
        LODWORD(v36) = v49;
        if ( v49 < 0 )
        {
          v162 = 2;
          goto LABEL_206;
        }
        v50 = v190[0];
        if ( !*((_WORD *)v190[0] + 10) )
        {
          v123 = WdLogNewEntry5_WdAssertion(v190[0], v32, 0LL, v34);
          WdLogEvent5_WdAssertion(v123);
          v50 = v190[0];
        }
        if ( v164 || (v161 = 1, (v17 & 0x40) != 0) )
          v161 = 0;
        DrvSetDisplayConfigApplyDeviceHack(v50);
        if ( v44 )
        {
          if ( !*((_DWORD *)v43 + 5) || (v161 = 1, !*((_DWORD *)v43 + 6)) )
            v161 = 0;
          v51 = DrvValidateAndApplyDevMode(v43, v190);
          v35 = 0LL;
          LODWORD(v36) = v51;
          if ( v51 < 0 )
          {
            v124 = *((_DWORD *)v43 + 12);
            v18 = *((_DWORD *)v43 + 13);
            v171 = v124;
            v125 = 2;
            v172 = v18;
            v33 = 23LL;
            if ( (_DWORD)v36 == -1073741266 )
              v125 = 23;
            v162 = v125;
            goto LABEL_195;
          }
          LOBYTE(v42) = *((_DWORD *)v43 + 5) != 0;
          v182 = v42;
        }
        v18 = 10;
        v172 = 10;
        goto LABEL_46;
      }
      if ( (v17 & 0x10) != 0 )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
          10733637LL,
          &unk_1C01743A4,
          0LL,
          3);
        v35 = 0LL;
        if ( v179 )
        {
          LODWORD(v36) = -1073741811;
          v162 = 40;
          goto LABEL_67;
        }
        PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig(v181, v184, v190);
        v35 = 0LL;
        LODWORD(v36) = PathModalityForDisplayConfig;
        if ( PathModalityForDisplayConfig < 0 )
        {
          v162 = 3;
          goto LABEL_67;
        }
        v127 = ConvertDisplayConfigToPathModality(v181, v184, v190[0], 0LL);
        v35 = 0LL;
        LODWORD(v36) = v127;
        if ( v127 < 0 )
        {
          v162 = 4;
          goto LABEL_67;
        }
        v128 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C01A1A08)(
                 v17 & 0x2000 | 0x2F,
                 v190[0],
                 0LL);
        v35 = 0LL;
        LODWORD(v36) = v128;
        if ( v128 < 0 )
        {
          v162 = 5;
          goto LABEL_67;
        }
        v161 = !v164 && (v17 & 0x40) == 0;
        goto LABEL_46;
      }
      if ( (v17 & 0x20) == 0 )
      {
        v148 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
        *(_QWORD *)(v148 + 24) = (unsigned int)v17;
        WdLogEvent5_WdAssertion(v148);
        v162 = 9;
LABEL_259:
        LODWORD(v36) = -1073741811;
        goto LABEL_260;
      }
      v167 = 0;
      if ( (v175 & 8) != 0 )
      {
        v129 = SetDisplayConfigHandleOnlyProvidedPath(v184, v190, &v167, (enum _DXGK_DIAG_SDC_STAGE *)&v162);
      }
      else
      {
        if ( !v179 )
        {
          v132 = v181;
          v133 = AllocatePathModalityForDisplayConfig(v181, v184, v190);
          v35 = 0LL;
          LODWORD(v36) = v133;
          if ( v133 < 0 )
          {
            v162 = 6;
            goto LABEL_67;
          }
          v134 = ConvertDisplayConfigToPathModality(v132, v184, v190[0], &v167);
          v35 = 0LL;
          LODWORD(v36) = v134;
          if ( v134 < 0 )
          {
            v162 = 7;
            goto LABEL_67;
          }
          goto LABEL_230;
        }
        v129 = SetDisplayConfigHandleBrokerProvidedPaths(
                 v194,
                 0,
                 v181,
                 v184,
                 v190,
                 &v167,
                 (enum _DXGK_DIAG_SDC_STAGE *)&v162);
      }
      v35 = 0LL;
      LODWORD(v36) = v129;
      if ( v129 < 0 )
        goto LABEL_67;
LABEL_230:
      if ( v167 )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
          10733637LL,
          &unk_1C01743A4,
          0LL,
          3);
        v130 = SetDisplayConfigHandlePreferredScaling(v190[0], (enum _DXGK_DIAG_SDC_STAGE *)&v162);
        v35 = 0LL;
        LODWORD(v36) = v130;
        if ( v130 < 0 )
          goto LABEL_67;
      }
      v131 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C01A1A08)(
               256LL,
               v190[0],
               0LL);
      v35 = 0LL;
      LODWORD(v36) = v131;
      if ( v131 < 0 )
      {
        v162 = 8;
        goto LABEL_67;
      }
      v42 = 1;
      v182 = 1;
      goto LABEL_46;
    }
    if ( v183 != 15 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
      WdLogEvent5_WdAssertion(v112);
      v35 = 0LL;
    }
    if ( v39 )
    {
      v113 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
      WdLogEvent5_WdAssertion(v113);
      v35 = 0LL;
    }
    if ( v177 >= 6 )
      break;
    v114 = v177;
    v115 = (const struct _RETRY_MODE *)((char *)&unk_1C0181C40 + 12 * v177);
    DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v115 + 1), *((unsigned int *)v115 + 2));
    if ( *(_BYTE *)v115 )
    {
      v178 = 0;
      v177 = v114 + 1;
      LODWORD(v36) = GetPathsModality(v116, v190, 15LL);
LABEL_192:
      v35 = 0LL;
      goto LABEL_193;
    }
    v117 = DrvCreatePathModalityFromAllPaths(&v191, v178++, v190);
    v35 = 0LL;
    LODWORD(v36) = v117;
    if ( v117 < 0 )
    {
      ++v177;
      v178 = 0;
      goto LABEL_193;
    }
    if ( *((_WORD *)v190[0] + 10) != 1 )
    {
      v118 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
      WdLogEvent5_WdAssertion(v118);
      goto LABEL_192;
    }
LABEL_193:
    if ( (int)v36 < 0 )
    {
      v162 = 2;
      goto LABEL_195;
    }
    v119 = DrvFunctionalizeBaseVidMode(v115, v190[0]);
    v36 = v119;
    if ( v119 < 0 )
    {
      v120 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v120 + 24) = v36;
      WdLogEvent5_WdError(v120);
      v162 = 2;
      goto LABEL_200;
    }
LABEL_46:
    if ( (v17 & 0x800) != 0 )
    {
      PathPersistentMonitorsIfNeeded = CreatePathPersistentMonitorsIfNeeded(v33, v190[0], v185);
      v36 = PathPersistentMonitorsIfNeeded;
      if ( PathPersistentMonitorsIfNeeded < 0 )
      {
        v135 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v135 + 24) = v36;
        WdLogEvent5_WdError(v135);
        v162 = 10;
        goto LABEL_200;
      }
      v53 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C01A1A28)(0x80000000LL, v190[0]);
      v36 = v53;
      if ( v53 == -1073741266 )
      {
        v136 = WdLogNewEntry5_WdEvent(v55, v54, v56);
        *(_QWORD *)(v136 + 24) = v41;
        *(_QWORD *)(v136 + 32) = -1073741266LL;
        WdLogEvent5_WdEvent(v136);
        v162 = 23;
        goto LABEL_200;
      }
      if ( v53 < 0 )
      {
        v137 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v137 + 24) = v36;
        WdLogEvent5_WdError(v137);
        v162 = 22;
        goto LABEL_200;
      }
      if ( v185[0] )
      {
        v138 = WdLogNewEntry5_WdWarning(v55);
        *(_QWORD *)(v138 + 24) = v41;
        *(_QWORD *)(v138 + 32) = v36;
        WdLogEvent5_WdWarning(v138);
        LODWORD(v36) = -1073741266;
        goto LABEL_200;
      }
    }
    v57 = GetCcdRawmodeFlag() | 0x8000;
    if ( (v175 & 0x20) != 0 && (!*((_QWORD *)v187 + 4) || *((_DWORD *)v187 + 2)) )
      v57 |= 0x20000u;
    v58 = v57;
    LODWORD(v58) = v57 | 0x1000000;
    if ( !v179 )
      v58 = v57;
    v59 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C01A1A10)(v58, v190[0]);
    v35 = 0LL;
    v36 = v59;
    if ( v59 < 0 )
    {
      v121 = WdLogNewEntry5_WdEvent(v60, v32, 0LL);
      *(struct D3DKMT_GETPATHSMODALITY **)(v121 + 24) = v190[0];
      *(_QWORD *)(v121 + 32) = v36;
      WdLogEvent5_WdEvent(v121);
      v162 = 11;
      v18 = 7;
      goto LABEL_199;
    }
    if ( !v195 )
    {
      if ( (v17 & 0x40) != 0 )
      {
        v171 = 0;
        goto LABEL_60;
      }
      v147 = WdLogNewEntry5_WdAssertion(v60, v32, 0LL, v34);
      *(_QWORD *)(v147 + 24) = (unsigned int)v17;
      WdLogEvent5_WdAssertion(v147);
      v39 = v161;
      v162 = 21;
      goto LABEL_259;
    }
    v81 = GetPathsModality(v60, &v190[1], 1048640LL);
    v35 = 0LL;
    LODWORD(v36) = v81;
    if ( v81 < 0 )
    {
      v162 = 13;
LABEL_206:
      v18 = 7;
      v172 = 7;
LABEL_195:
      v39 = v161;
      goto LABEL_67;
    }
    v82 = v17 & 0x1100;
    v83 = (16 * (v17 & 0x1000)) | 0x4000;
    if ( (v17 & 0x1100) == 0 )
      v83 = 16 * (v17 & 0x1000);
    if ( v83 )
    {
      v139 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C01A1A08)(
               v83,
               v190[0],
               0LL);
      v35 = 0LL;
      LODWORD(v36) = v139;
      if ( v139 < 0 )
      {
        v18 = v172;
        v162 = 14;
        goto LABEL_195;
      }
    }
    v84 = v83 | 0x400000;
    v85 = 0;
    if ( (v175 & 0x10) == 0 )
      v84 = v83;
    v86 = v84 | 0x1000000;
    if ( !v179 )
      v86 = v84;
    v87 = gpGraphicsDeviceList;
    while ( v87 )
    {
      v24 = (*((_DWORD *)v87 + 40) & 0x800000) == 0;
      v88 = v85 + 1;
      v87 = (wchar_t *)*((_QWORD *)v87 + 16);
      if ( v24 )
        v88 = v85;
      v85 = v88;
    }
    v89 = 0LL;
    if ( v85 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 76LL * v85, 0x7774656Cu);
      v89 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 76LL * v85);
        v91 = gpGraphicsDeviceList;
        for ( i = 0; v91; v91 = (wchar_t *)*((_QWORD *)v91 + 16) )
        {
          if ( (*((_DWORD *)v91 + 40) & 0x800000) != 0 )
          {
            v93 = 76LL * i++;
            *(_DWORD *)&v89[v93] = *((_DWORD *)v91 + 62);
            *(_DWORD *)&v89[v93 + 4] = *((_DWORD *)v91 + 63);
            *(_DWORD *)&v89[v93 + 8] = *((_DWORD *)v91 + 64);
          }
        }
      }
      v28 = 1;
    }
    DisplayScenarioJournalSetExpectedPathModality(
      272 * (unsigned int)*((unsigned __int16 *)v190[0] + 10),
      *((unsigned __int16 *)v190[0] + 10),
      (char *)v190[0] + 48,
      v85,
      v89);
    LOBYTE(v94) = v82 != 0;
    v95 = v174;
    v96 = ApplyPathsModality(v190[0], v86, v94, (_DWORD)v196, (__int64)v176, (__int64)&v166, (__int64)v174, v197);
    v186 = v96;
    v97 = v96;
    v171 = v96;
    if ( v96 < 0 || v96 == 1 )
    {
      LODWORD(v36) = -1073741823;
      v162 = 16;
      v18 = 5;
LABEL_199:
      v172 = v18;
LABEL_200:
      v39 = v161;
LABEL_260:
      v35 = 0LL;
      goto LABEL_67;
    }
    v35 = 0LL;
    if ( v166 )
    {
      v140 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
      WdLogEvent5_WdAssertion(v140);
      v35 = 0LL;
    }
    if ( v97 != 2 )
    {
      if ( !*v95 )
      {
        v142 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
        WdLogEvent5_WdAssertion(v142);
        v35 = 0LL;
      }
      LOBYTE(v17) = v173;
      v61 = 0LL;
      v42 = v182;
      v41 = v188;
      v176 = 0LL;
      goto LABEL_61;
    }
    if ( v82 || *v95 )
    {
      v141 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
      WdLogEvent5_WdAssertion(v141);
      v35 = 0LL;
    }
    LOBYTE(v17) = v173;
    v42 = v182;
    v41 = v188;
    v163 = 1;
LABEL_60:
    v61 = v176;
LABEL_61:
    v39 = v161;
    if ( !v161 )
      goto LABEL_65;
    v62 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C01A1A28)(v42, v190[0], 0LL);
    v35 = 0LL;
    v36 = v62;
    if ( !a6 )
    {
      if ( v62 < 0 )
      {
        v143 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v143 + 24) = v36;
        WdLogEvent5_WdError(v143);
        v35 = 0LL;
        LODWORD(v36) = 0;
      }
LABEL_65:
      v33 = (unsigned int)((int)v36 >> 31);
      v162 = v33 + 18;
      v18 = v33 + 10;
LABEL_66:
      v172 = v18;
      goto LABEL_67;
    }
    if ( v62 == -1073741266 )
    {
      if ( (v17 & 0x10) != 0 )
      {
        v144 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
        WdLogEvent5_WdAssertion(v144);
      }
      v145 = WdLogNewEntry5_WdEvent(v33, v32, v35);
      *(_QWORD *)(v145 + 24) = v41;
      *(_QWORD *)(v145 + 32) = -1073741266LL;
      WdLogEvent5_WdEvent(v145);
      v35 = 0LL;
      if ( !v163 )
      {
        if ( v61 )
        {
          v146 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
          WdLogEvent5_WdAssertion(v146);
          v35 = 0LL;
        }
        v165 = 1;
        v176 = *v174;
        *v174 = 0LL;
      }
      v162 = 24;
      v18 = 9;
      goto LABEL_66;
    }
    if ( v62 >= 0 )
      goto LABEL_65;
    v18 = 9;
    v162 = 29;
    v172 = 9;
    LODWORD(v36) = 0;
LABEL_67:
    v63 = ++v180;
    if ( (_DWORD)v36 == -1073741266 )
    {
      if ( !v168 && v63 < 4 )
      {
        v149 = 3221226030LL;
        goto LABEL_266;
      }
    }
    else if ( (int)v36 >= 0 )
    {
      v64 = v174;
      goto LABEL_70;
    }
    if ( !v169 )
      goto LABEL_158;
    v168 = 1;
    v39 = 0;
    v161 = 0;
    v149 = (unsigned int)v36;
LABEL_266:
    DisplayScenarioJournalRetry(v149, v32, 0LL);
    LODWORD(v17) = v173;
  }
  if ( (int)v36 < 0 )
  {
    v64 = v174;
    goto LABEL_277;
  }
  v150 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
  WdLogEvent5_WdAssertion(v150);
  v35 = 0LL;
LABEL_158:
  v64 = v174;
LABEL_159:
  if ( (int)v36 >= 0 )
  {
LABEL_70:
    v65 = v165;
    goto LABEL_71;
  }
LABEL_277:
  v65 = v165;
  if ( v165 )
  {
    v162 = 29;
    LODWORD(v36) = 0;
    v18 = 9;
    v171 = 0;
  }
  if ( (int)v36 >= 0 )
  {
LABEL_71:
    if ( v65 && !*v64 )
    {
      v154 = v176;
      if ( !v176 )
      {
        v155 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
        WdLogEvent5_WdAssertion(v155);
        v35 = 0LL;
      }
      v156 = v171;
      v24 = v171 == 2;
      *v64 = v154;
      if ( v24 )
        v156 = 0;
      v171 = v156;
    }
LABEL_72:
    LODWORD(v17) = v173;
    v66 = 0LL;
    goto LABEL_73;
  }
LABEL_148:
  v102 = v176;
LABEL_149:
  if ( !v169 )
    goto LABEL_72;
  if ( a6 )
  {
    v103 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL, v34);
    WdLogEvent5_WdAssertion(v103);
  }
  LODWORD(v17) = v173;
  v104 = DrvChangeDisplayFallback(
           v196,
           BYTE1(v173) & 1,
           1u,
           v102,
           v64,
           (enum _DXGK_DIAG_SDC_STAGE *)&v162,
           &v163,
           &v171);
  v66 = 0LL;
  v36 = v104;
  if ( v104 < 0 )
  {
    v157 = WdLogNewEntry5_WdAssertion(v106, v105, v35, v34);
    WdLogEvent5_WdAssertion(v157);
    if ( !byte_1C01A6351 )
    {
      byte_1C01A6351 = 1;
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))qword_1C01A2020)(400LL, 22LL, v36, v171, v162);
    }
  }
  else
  {
    v18 = 10;
    v162 = 31;
  }
LABEL_73:
  if ( (_DWORD)v36 == -1073741811 )
    goto LABEL_79;
LABEL_74:
  FreePathsModality(v190[1]);
  v190[1] = 0LL;
  if ( (int)GetPathsModality(v67, &v190[1], 16777232LL) < 0 )
    goto LABEL_78;
  DisplayScenarioJournalSetActualPathModality(
    272 * (unsigned int)*((unsigned __int16 *)v190[1] + 10),
    *((unsigned __int16 *)v190[1] + 10),
    (char *)v190[1] + 48);
  v68 = v190[1];
  v69 = 0;
  if ( !*((_WORD *)v190[1] + 10) )
    goto LABEL_78;
  while ( 2 )
  {
    if ( (*(_QWORD *)((_BYTE *)v68 + v66 + 48) & 0x8000001000000000uLL) != 0x8000000000000000uLL )
    {
LABEL_77:
      ++v69;
      v66 += 272LL;
      if ( v69 >= *((unsigned __int16 *)v68 + 10) )
        goto LABEL_78;
      continue;
    }
    break;
  }
  v205[0] = 9;
  v205[1] = 32;
  v206 = *(_QWORD *)((char *)v68 + v66 + 64);
  v207 = *(_DWORD *)((char *)v68 + v66 + 76);
  if ( (int)DrvDisplayConfigGetDeviceInfo(v205) < 0 || (v208 & 1) == 0 )
  {
    v68 = v190[1];
    goto LABEL_77;
  }
  v170 = 1;
LABEL_78:
  if ( *v64 )
  {
    v98 = *((_QWORD *)*v64 + 4);
    if ( v98 )
    {
      v99 = *(_QWORD *)(v98 + 2568);
      if ( ((v99 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v99 + 160) & 0x2000000) != 0);
    }
  }
LABEL_79:
  v70 = v180;
  if ( v199 )
    *v199 = v180;
  if ( v200 )
    *v200 = v162;
  if ( v201 )
  {
    if ( !v163 || v165 )
      v28 = 0;
    *v201 = v28;
  }
  if ( v202 )
    *v202 = v166;
  v71 = v175;
  if ( (v175 & 0x20) != 0 )
  {
    v72 = v187;
    v73 = (unsigned int)v171;
    v74 = (int)v36 >= 0;
    v75 = v171 < 0;
    *((_DWORD *)v187 + 12) = v171;
    *((_DWORD *)v72 + 13) = v18;
    if ( v74 != !v75 )
    {
      v158 = WdLogNewEntry5_WdAssertion(v74, v73, v35, v34);
      WdLogEvent5_WdAssertion(v158);
    }
    v204[2] = v171;
    v204[0] = 0;
    v204[1] = 16;
    v204[3] = v18;
    DisplayScenarioJournalSetSpecializedData(v204, v73, v35);
  }
  if ( (v71 & 0x40) == 0 )
    LogDiagSDC(v181, (_DWORD)v184, v17, v36, v70, v162, v203, v163);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252),
      v35);
  LOBYTE(v34) = v163;
  LOBYTE(v160) = v170;
  LOBYTE(v159) = v166;
  DisplayScenarioJournalFinalize((unsigned int)v36, (unsigned int)v162, v70, v34, v159, v160, v186, v197);
  v79 = WdLogNewEntry5_WdEvent(v77, v76, v78);
  *(_QWORD *)(v79 + 24) = (int)v36;
  WdLogEvent5_WdEvent(v79);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v189);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v198, 5LL);
  return (unsigned int)v36;
}
