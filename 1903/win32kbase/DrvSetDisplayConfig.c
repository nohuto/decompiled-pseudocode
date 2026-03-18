/*
 * XREFs of DrvSetDisplayConfig @ 0x1C00504D0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B9BC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C004BEDC (DrvChangeDisplaySettings.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062520 (xxxUserSetDisplayConfig.c)
 *     InitVideo @ 0x1C00767BC (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0112B6C (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ApplyPathsModality @ 0x1C0044F44 (ApplyPathsModality.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00494E8 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004E650 (DrvDisplayConfigGetDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00502FC (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00510C8 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0051134 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0051164 (GetPathsModality.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0051BAC (--0AUTO_TGO@@IEAA@XZ.c)
 *     LogDiagSDC @ 0x1C00628E0 (LogDiagSDC.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00660E4 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00A18FC (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C00A44D8 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00A66F8 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00A67FC (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B8DF0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0128FE8 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01295F0 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C012A218 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C012A4A8 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C012C1E0 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C012C7B8 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C012C9A4 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
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
  struct _MDEV *v16; // r13
  __int64 v17; // r15
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r14
  char v25; // r12
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rdx
  int v33; // eax
  char v34; // di
  __int64 v35; // rax
  __int64 v36; // r13
  BOOL v37; // r12d
  char v38; // si
  unsigned __int16 v39; // di
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // ebx
  int v43; // eax
  struct D3DKMT_GETPATHSMODALITY *v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  int v58; // r12d
  unsigned int v59; // edi
  int v60; // ecx
  unsigned int v61; // esi
  unsigned int v62; // r15d
  wchar_t *v63; // rcx
  bool v64; // zf
  unsigned int v65; // eax
  char *v66; // rdi
  char *PoolWithTag; // rax
  wchar_t *v68; // rdx
  unsigned int i; // r8d
  __int64 v70; // rcx
  struct _MDEV **v71; // rdi
  struct _MDEV *v72; // rsi
  int v73; // eax
  int v74; // r15d
  int v75; // eax
  unsigned int v76; // eax
  char v77; // al
  struct _MDEV **v78; // r12
  struct D3DKMT_GETPATHSMODALITY *v79; // rcx
  int v80; // esi
  __int64 v81; // rdi
  unsigned int v82; // r12d
  char v83; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v84; // rax
  __int64 v85; // rdx
  _BOOL8 v86; // rcx
  bool v87; // sf
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  struct _DISPLAYCONFIG_CDS_REQUEST *v93; // r12
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rcx
  struct _MDEV **v97; // r12
  int v98; // edi
  int v99; // eax
  int v100; // eax
  int v101; // eax
  __int64 v102; // rax
  __int64 v103; // r8
  __int64 v104; // rax
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rax
  int PathsModality; // eax
  int v111; // ebx
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  unsigned int v116; // ebx
  const struct _RETRY_MODE *v117; // rdi
  int v118; // eax
  __int64 v119; // rax
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  int v127; // eax
  int PathModalityForDisplayConfig; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  unsigned int v134; // r12d
  int v135; // eax
  int v136; // eax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rax
  struct _MDEV *v153; // rdi
  __int64 v154; // rax
  int v155; // edx
  __int64 v156; // rax
  __int64 v157; // rax
  int v158; // [rsp+20h] [rbp-E0h]
  int v159; // [rsp+28h] [rbp-D8h]
  bool v160; // [rsp+40h] [rbp-C0h]
  int v161; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v162; // [rsp+48h] [rbp-B8h] BYREF
  char v163; // [rsp+49h] [rbp-B7h]
  char v164; // [rsp+4Ah] [rbp-B6h]
  char v165; // [rsp+4Bh] [rbp-B5h] BYREF
  bool v166[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v167; // [rsp+50h] [rbp-B0h]
  bool v168; // [rsp+54h] [rbp-ACh]
  bool v169; // [rsp+55h] [rbp-ABh]
  char v170; // [rsp+56h] [rbp-AAh]
  int v171; // [rsp+58h] [rbp-A8h] BYREF
  int v172; // [rsp+5Ch] [rbp-A4h]
  unsigned int v173; // [rsp+60h] [rbp-A0h]
  unsigned int v174; // [rsp+64h] [rbp-9Ch]
  unsigned int v175; // [rsp+68h] [rbp-98h]
  unsigned int v176; // [rsp+6Ch] [rbp-94h]
  int v177; // [rsp+70h] [rbp-90h]
  unsigned int v178; // [rsp+74h] [rbp-8Ch]
  struct _MDEV **v179; // [rsp+78h] [rbp-88h]
  unsigned int v180; // [rsp+80h] [rbp-80h]
  int v181; // [rsp+84h] [rbp-7Ch]
  struct _MDEV *v182; // [rsp+88h] [rbp-78h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v183; // [rsp+90h] [rbp-70h]
  unsigned __int16 v184; // [rsp+98h] [rbp-68h] BYREF
  struct _DISPLAYCONFIG_CDS_REQUEST *v185; // [rsp+A0h] [rbp-60h]
  int v186; // [rsp+A8h] [rbp-58h]
  __int64 v187; // [rsp+B0h] [rbp-50h]
  _QWORD v188[6]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v189[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v190; // [rsp+100h] [rbp+0h] BYREF
  char v191; // [rsp+108h] [rbp+8h]
  __int64 v192; // [rsp+110h] [rbp+10h]
  void *v193; // [rsp+118h] [rbp+18h] BYREF
  int v194; // [rsp+120h] [rbp+20h]
  void *v195; // [rsp+128h] [rbp+28h]
  __int64 v196; // [rsp+130h] [rbp+30h]
  void *v197; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v198; // [rsp+140h] [rbp+40h]
  int *v199; // [rsp+148h] [rbp+48h]
  char *v200; // [rsp+150h] [rbp+50h]
  _BYTE *v201; // [rsp+158h] [rbp+58h]
  __int64 v202; // [rsp+160h] [rbp+60h]
  _DWORD v203[4]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v204[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v205; // [rsp+180h] [rbp+80h]
  __int128 v206; // [rsp+188h] [rbp+88h]
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v16 = a9;
  v195 = a5;
  v198 = a11;
  v199 = a12;
  v201 = a14;
  v196 = a15;
  v174 = a1;
  v200 = a13;
  v17 = (unsigned int)a3;
  v173 = a4;
  v18 = 0;
  v168 = gbBaseVideo != 0;
  v172 = a3;
  v186 = -1;
  v183 = a2;
  v185 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v182 = a9;
  v179 = a10;
  v175 = gbBaseVideo != 0 ? 3 : 0;
  v178 = 0;
  v164 = 0;
  v162 = 0;
  v165 = 0;
  v161 = 0;
  v171 = -5;
  v167 = 0;
  v176 = 0;
  v170 = 0;
  v19 = WdLogNewEntry5_WdEvent(0LL, a2, a3);
  *(_QWORD *)(v19 + 24) = v17;
  WdLogEvent5_WdEvent(v19);
  v187 = MEMORY[0xFFFFF78000000320];
  v202 = v187 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)v17, a4, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(200 * v174, v174, v183);
  v197 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v197, 4LL);
  *a10 = 0LL;
  if ( gOldModeChange )
  {
    v102 = WdLogNewEntry5_WdAssertion(0LL, v20, v21);
    WdLogEvent5_WdAssertion(v102);
  }
  if ( (v17 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v169 = (a4 & 2) != 0 && (v17 & 0x88F) == 2191;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v188);
  v190 = 0LL;
  v188[0] = &off_1C01CCE58;
  v192 = v196;
  *(_OWORD *)v189 = 0LL;
  v191 = 0;
  v193 = 0LL;
  v24 = 1;
  if ( !(unsigned int)UserIsWddmConnectedSession() || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v152 = WdLogNewEntry5_WdAssertion(v22, 0LL, v23);
      WdLogEvent5_WdAssertion(v152);
    }
    v97 = v179;
    v98 = a4 & 1;
    v99 = DrvChangeDisplayFallback(
            v195,
            BYTE1(v17) & 1,
            a4 & 1,
            a9,
            v179,
            (enum _DXGK_DIAG_SDC_STAGE *)&v161,
            &v162,
            &v171);
    v30 = 0LL;
    LODWORD(v31) = v99;
    if ( v99 < 0 )
    {
LABEL_164:
      if ( v169 )
      {
        if ( a6 )
        {
          v104 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
          WdLogEvent5_WdAssertion(v104);
        }
        LODWORD(v17) = v172;
        v105 = DrvChangeDisplayFallback(
                 v195,
                 BYTE1(v172) & 1,
                 1u,
                 v16,
                 v97,
                 (enum _DXGK_DIAG_SDC_STAGE *)&v161,
                 &v162,
                 &v171);
        v31 = v105;
        if ( v105 < 0 )
        {
          v156 = WdLogNewEntry5_WdAssertion(v107, v106, v30);
          WdLogEvent5_WdAssertion(v156);
          if ( !byte_1C0219878 )
          {
            byte_1C0219878 = 1;
            ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))qword_1C02152F8)(
              400LL,
              22LL,
              v31,
              v171,
              v161);
          }
        }
        else
        {
          v18 = 10;
          v161 = 31;
          v167 = 10;
        }
LABEL_91:
        if ( (_DWORD)v31 == -1073741811 )
          goto LABEL_102;
        goto LABEL_92;
      }
LABEL_90:
      LODWORD(v17) = v172;
      goto LABEL_91;
    }
    v100 = v161;
    v28 = 30LL;
    if ( v98 )
      v100 = 30;
    v161 = v100;
LABEL_151:
    if ( (int)v31 >= 0 )
    {
LABEL_88:
      v77 = v164;
    }
    else
    {
LABEL_275:
      v77 = v164;
      if ( v164 )
      {
        v18 = 9;
        v161 = 29;
        v167 = 9;
        LODWORD(v31) = 0;
        v171 = 0;
      }
      if ( (int)v31 < 0 )
      {
        v16 = v182;
        goto LABEL_163;
      }
    }
    v78 = v179;
    if ( v77 && !*v179 )
    {
      v153 = v182;
      if ( !v182 )
      {
        v154 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
        WdLogEvent5_WdAssertion(v154);
        v30 = 0LL;
      }
      v155 = v171;
      v64 = v171 == 2;
      *v78 = v153;
      if ( v64 )
        v155 = 0;
      v171 = v155;
    }
    goto LABEL_90;
  }
  if ( (v17 & 0x40000000) != 0 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
      0xA3C845u,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01DAEA4,
      0,
      3);
    if ( (v17 & 0x10000) == 0 )
    {
      v108 = 0LL;
      if ( gbBaseVideo )
      {
        v109 = WdLogNewEntry5_WdAssertion(0LL, v27, v103);
        WdLogEvent5_WdAssertion(v109);
      }
      PathsModality = GetPathsModality(v108, v189, 15LL, 0LL);
      v30 = 0LL;
      LODWORD(v31) = PathsModality;
      if ( PathsModality < 0 )
      {
        v161 = 2;
        goto LABEL_151;
      }
      v111 = *((_DWORD *)v189[0] + 8) & 0xF;
      if ( v111 != 1 && v111 != 8 )
      {
        LOBYTE(v28) = 1;
        v163 = 1;
        LOBYTE(v27) = v111 == 4;
        v25 = 1;
        ((void (__fastcall *)(__int64, __int64, _QWORD))qword_1C0215220)(v28, v27, 0LL);
        if ( v111 != 4 )
        {
          LODWORD(v17) = 132;
          goto LABEL_184;
        }
        v162 = 1;
        LODWORD(v31) = 0;
        v161 = 26;
        goto LABEL_92;
      }
      LODWORD(v31) = -1073741637;
      v161 = 25;
      goto LABEL_163;
    }
    v161 = 37;
    goto LABEL_162;
  }
  if ( (int)v17 >= 0 )
  {
    if ( (v17 & 0xF) != 0xF || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) )
    {
      if ( (v17 & 0x200) != 0 || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) || (v17 & 0x1F) != 0 && (v17 & 0x40) == 0 )
      {
        v25 = 0;
        v163 = 0;
        ((void (__fastcall *)(_QWORD))qword_1C0215220)(0LL);
      }
      else
      {
        v25 = ((__int64 (*)(void))qword_1C0215228)();
        v163 = v25;
      }
      goto LABEL_12;
    }
    v163 = ((__int64 (*)(void))qword_1C0215228)();
    v25 = v163;
    if ( !v163 )
    {
LABEL_12:
      v177 = v17 & 0x10000;
      v194 = v17 & 0x80;
      if ( (v17 & 0x10000) != 0 )
      {
        v112 = ((__int64 (__fastcall *)(__int64, _QWORD, void **))qword_1C0215300)(
                 a7,
                 (v17 & 0x80) != 0 ? 2031616 : 0x20000,
                 &v193);
        v30 = 0LL;
        LODWORD(v31) = v112;
        if ( v112 < 0 )
        {
          v161 = 42;
          goto LABEL_151;
        }
      }
      v26 = ((__int64 (*)(void))qword_1C0215120)();
      v30 = 0LL;
      LODWORD(v31) = v26;
      if ( v26 < 0 )
      {
        v18 = 6;
        v161 = 12;
        v167 = 6;
        goto LABEL_151;
      }
      v191 = 1;
      if ( (v17 & 0x80) != 0 )
      {
        v32 = 1LL;
        if ( !v25 && (v17 & 0xF) != 0 && (v173 & 0x20) == 0 )
          v32 = 3LL;
        v33 = ((__int64 (__fastcall *)(__int64))qword_1C0215138)(v32);
        v30 = 0LL;
        v31 = v33;
        if ( v33 < 0 )
        {
          v113 = WdLogNewEntry5_WdEvent(v28, v27, 0LL);
          *(_QWORD *)(v113 + 24) = v31;
          WdLogEvent5_WdEvent(v113);
          DrvDxgkLogCodePointPacket(4LL, (unsigned int)v31, 0LL, 0LL);
          v30 = 0LL;
          LODWORD(v31) = 0;
        }
      }
      if ( (v17 & 0x200) == 0 || (v17 & 0x40) != 0 )
      {
        v34 = 0;
        v160 = 0;
      }
      else
      {
        v34 = 1;
        v160 = 1;
      }
      v180 = v17 & 0xF;
      while ( 1 )
      {
        v35 = WdLogNewEntry5_WdEvent(v28, v27, v30);
        v36 = v178;
        v187 = v178;
        *(_QWORD *)(v35 + 24) = v178;
        *(_QWORD *)(v35 + 32) = (int)v31;
        WdLogEvent5_WdEvent(v35);
        v37 = 0;
        v181 = 0;
        v165 = 0;
        v162 = 0;
        FreePathsModality(v189[0]);
        FreePathsModality(v189[1]);
        v30 = 0LL;
        v189[1] = 0LL;
        v189[0] = 0LL;
        if ( v168 )
        {
          if ( v180 != 15 )
          {
            v114 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
            WdLogEvent5_WdAssertion(v114);
            v30 = 0LL;
          }
          if ( v34 )
          {
            v115 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
            WdLogEvent5_WdAssertion(v115);
            v30 = 0LL;
          }
          if ( v175 >= 6 )
          {
            if ( (int)v31 >= 0 )
            {
              v151 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
              WdLogEvent5_WdAssertion(v151);
              v30 = 0LL;
              goto LABEL_151;
            }
            goto LABEL_275;
          }
          v116 = v175;
          v117 = (const struct _RETRY_MODE *)((char *)&unk_1C01EC840 + 12 * v175);
          DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v117 + 1), *((unsigned int *)v117 + 2), 0LL);
          if ( *(_BYTE *)v117 )
          {
            v176 = 0;
            v175 = v116 + 1;
            LODWORD(v31) = GetPathsModality(0LL, v189, 15LL, 0LL);
            goto LABEL_203;
          }
          v118 = DrvCreatePathModalityFromAllPaths(&v190, v176++, v189);
          v30 = 0LL;
          LODWORD(v31) = v118;
          if ( v118 >= 0 )
          {
            if ( *((_WORD *)v189[0] + 10) != 1 )
            {
              v119 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
              WdLogEvent5_WdAssertion(v119);
LABEL_203:
              v30 = 0LL;
            }
          }
          else
          {
            ++v175;
            v176 = 0;
          }
          if ( (int)v31 < 0 )
          {
            v161 = 2;
            goto LABEL_206;
          }
          v120 = DrvFunctionalizeBaseVidMode(v117, v189[0]);
          v31 = v120;
          if ( v120 < 0 )
          {
            v123 = WdLogNewEntry5_WdError(v28, v121, v122);
            *(_QWORD *)(v123 + 24) = v31;
            WdLogEvent5_WdError(v123);
            v161 = 2;
            goto LABEL_211;
          }
          goto LABEL_39;
        }
        if ( v180 )
        {
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
            0xA3C845u,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01DAEA4,
            0,
            3);
          v30 = 0LL;
          if ( v177 )
          {
            LODWORD(v31) = -1073741811;
            v161 = 39;
            goto LABEL_86;
          }
          if ( (v173 & 0x20) != 0 && *((_QWORD *)v185 + 4) )
          {
            v38 = 1;
            v39 = 1;
          }
          else
          {
            v38 = 0;
            v39 = 0;
          }
          if ( !v38 || *((_DWORD *)v185 + 5) )
          {
            v40 = v180;
            v41 = v180;
          }
          else
          {
            v40 = v180;
            v41 = 0x2000000;
          }
          v42 = v41 | ((v173 & 0x20) != 0 ? 0x9000 : 0);
          if ( (v41 & 0x2000000) != 0 && (_DWORD)v40 != 15 )
          {
            v125 = WdLogNewEntry5_WdAssertion(v40, v27, 0LL);
            WdLogEvent5_WdAssertion(v125);
          }
          v43 = GetPathsModality(v40, v189, v42, v39);
          v30 = 0LL;
          LODWORD(v31) = v43;
          if ( v43 < 0 )
          {
            v161 = 2;
            goto LABEL_216;
          }
          v44 = v189[0];
          if ( !*((_WORD *)v189[0] + 10) )
          {
            v126 = WdLogNewEntry5_WdAssertion(v189[0], v27, 0LL);
            WdLogEvent5_WdAssertion(v126);
            v44 = v189[0];
          }
          if ( v163 || (v160 = 1, (v17 & 0x40) != 0) )
            v160 = 0;
          DrvSetDisplayConfigApplyDeviceHack(v44);
          if ( v38 )
          {
            v93 = v185;
            if ( !*((_DWORD *)v185 + 5) || (v160 = 1, !*((_DWORD *)v185 + 6)) )
              v160 = 0;
            v94 = DrvValidateAndApplyDevMode(v185, v189);
            v30 = 0LL;
            LODWORD(v31) = v94;
            if ( v94 < 0 )
            {
              v18 = *((_DWORD *)v93 + 13);
              v171 = *((_DWORD *)v93 + 12);
              v127 = 2;
              v167 = v18;
              v28 = 23LL;
              if ( (_DWORD)v31 == -1073741266 )
                v127 = 23;
              v161 = v127;
              goto LABEL_206;
            }
            v37 = *((_DWORD *)v185 + 5) != 0;
            v181 = v37;
          }
          v18 = 10;
          v167 = 10;
          goto LABEL_39;
        }
        if ( (v17 & 0x10) != 0 )
        {
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
            0xA3C845u,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01DAEA4,
            0,
            3);
          v30 = 0LL;
          if ( v177 )
          {
            LODWORD(v31) = -1073741811;
            v161 = 40;
            goto LABEL_86;
          }
          PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig(v174, v183, v189);
          v30 = 0LL;
          LODWORD(v31) = PathModalityForDisplayConfig;
          if ( PathModalityForDisplayConfig < 0 )
          {
            v161 = 3;
            goto LABEL_86;
          }
          v129 = ConvertDisplayConfigToPathModality(v174, v183, v189[0], 0LL);
          v30 = 0LL;
          LODWORD(v31) = v129;
          if ( v129 < 0 )
          {
            v161 = 4;
            goto LABEL_86;
          }
          v130 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C02150A0)(
                   v17 & 0x2000 | 0x2F,
                   v189[0],
                   0LL);
          v30 = 0LL;
          LODWORD(v31) = v130;
          if ( v130 < 0 )
          {
            v161 = 5;
            goto LABEL_86;
          }
          v160 = !v163 && (v17 & 0x40) == 0;
          goto LABEL_39;
        }
        if ( (v17 & 0x20) == 0 )
        {
          v149 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
          *(_QWORD *)(v149 + 24) = (unsigned int)v17;
          WdLogEvent5_WdAssertion(v149);
          v161 = 9;
          goto LABEL_265;
        }
        v166[0] = 0;
        if ( (v173 & 8) != 0 )
        {
          v131 = SetDisplayConfigHandleOnlyProvidedPath(v183, v189, v166, (enum _DXGK_DIAG_SDC_STAGE *)&v161);
        }
        else
        {
          if ( !v177 )
          {
            v134 = v174;
            v135 = AllocatePathModalityForDisplayConfig(v174, v183, v189);
            v30 = 0LL;
            LODWORD(v31) = v135;
            if ( v135 < 0 )
            {
              v161 = 6;
              goto LABEL_86;
            }
            v136 = ConvertDisplayConfigToPathModality(v134, v183, v189[0], v166);
            v30 = 0LL;
            LODWORD(v31) = v136;
            if ( v136 < 0 )
            {
              v161 = 7;
              goto LABEL_86;
            }
            goto LABEL_240;
          }
          v131 = SetDisplayConfigHandleBrokerProvidedPaths(
                   v193,
                   0,
                   v174,
                   v183,
                   v189,
                   v166,
                   (enum _DXGK_DIAG_SDC_STAGE *)&v161);
        }
        v30 = 0LL;
        LODWORD(v31) = v131;
        if ( v131 < 0 )
          goto LABEL_86;
LABEL_240:
        if ( v166[0] )
        {
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
            0xA3C845u,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01DAEA4,
            0,
            3);
          v132 = SetDisplayConfigHandlePreferredScaling(v189[0], (enum _DXGK_DIAG_SDC_STAGE *)&v161);
          v30 = 0LL;
          LODWORD(v31) = v132;
          if ( v132 < 0 )
            goto LABEL_86;
        }
        v133 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C02150A0)(
                 256LL,
                 v189[0],
                 0LL);
        v30 = 0LL;
        LODWORD(v31) = v133;
        if ( v133 < 0 )
        {
          v161 = 8;
          goto LABEL_86;
        }
        v37 = 1;
        v181 = 1;
LABEL_39:
        if ( (v17 & 0x800) != 0 )
        {
          v45 = CreatePathPersistentMonitorsIfNeeded(v28, v189[0], &v184);
          v31 = v45;
          if ( v45 < 0 )
          {
            v137 = WdLogNewEntry5_WdError(v47, v46, v48);
            *(_QWORD *)(v137 + 24) = v31;
            WdLogEvent5_WdError(v137);
            v161 = 10;
            goto LABEL_211;
          }
          v49 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C02150C0)(
                  0x80000000LL,
                  v189[0]);
          v31 = v49;
          if ( v49 == -1073741266 )
          {
            v138 = WdLogNewEntry5_WdEvent(v51, v50, v52);
            *(_QWORD *)(v138 + 24) = v36;
            *(_QWORD *)(v138 + 32) = -1073741266LL;
            WdLogEvent5_WdEvent(v138);
            v161 = 23;
            goto LABEL_211;
          }
          if ( v49 < 0 )
          {
            v139 = WdLogNewEntry5_WdError(v51, v50, v52);
            *(_QWORD *)(v139 + 24) = v31;
            WdLogEvent5_WdError(v139);
            v161 = 22;
            goto LABEL_211;
          }
          if ( v184 )
          {
            v140 = WdLogNewEntry5_WdWarning(v51, v50, v52);
            *(_QWORD *)(v140 + 24) = v36;
            *(_QWORD *)(v140 + 32) = v31;
            WdLogEvent5_WdWarning(v140);
            LODWORD(v31) = -1073741266;
            goto LABEL_211;
          }
        }
        v53 = GetCcdRawmodeFlag() | 0x8000;
        if ( (v173 & 0x20) != 0 && (!*((_QWORD *)v185 + 4) || *((_DWORD *)v185 + 2)) )
          v53 |= 0x20000u;
        v54 = v53;
        LODWORD(v54) = v53 | 0x1000000;
        if ( !v177 )
          v54 = v53;
        v55 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C02150A8)(v54, v189[0]);
        v30 = 0LL;
        v31 = v55;
        if ( v55 < 0 )
        {
          v124 = WdLogNewEntry5_WdEvent(v56, v27, 0LL);
          *(struct D3DKMT_GETPATHSMODALITY **)(v124 + 24) = v189[0];
          *(_QWORD *)(v124 + 32) = v31;
          WdLogEvent5_WdEvent(v124);
          v161 = 11;
          v18 = 7;
          goto LABEL_210;
        }
        if ( v194 )
        {
          v57 = GetPathsModality(v56, &v189[1], 1048640LL, 0LL);
          v30 = 0LL;
          LODWORD(v31) = v57;
          if ( v57 < 0 )
          {
            v161 = 13;
LABEL_216:
            v18 = 7;
            v167 = 7;
LABEL_206:
            v34 = v160;
            goto LABEL_86;
          }
          v58 = v17 & 0x1100;
          v59 = (16 * (v17 & 0x1000)) | 0x4000;
          if ( (v17 & 0x1100) == 0 )
            v59 = 16 * (v17 & 0x1000);
          if ( v59 )
          {
            v101 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C02150A0)(
                     v59,
                     v189[0],
                     0LL);
            v30 = 0LL;
            LODWORD(v31) = v101;
            if ( v101 < 0 )
            {
              v161 = 14;
              goto LABEL_206;
            }
          }
          v60 = v59 | 0x400000;
          v61 = 0;
          if ( (v173 & 0x10) == 0 )
            v60 = v59;
          v62 = v60 | 0x1000000;
          if ( !v177 )
            v62 = v60;
          v63 = gpGraphicsDeviceList;
          while ( v63 )
          {
            v64 = (*((_DWORD *)v63 + 40) & 0x800000) == 0;
            v65 = v61 + 1;
            v63 = (wchar_t *)*((_QWORD *)v63 + 16);
            if ( v64 )
              v65 = v61;
            v61 = v65;
          }
          v66 = 0LL;
          if ( v61 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 76LL * v61, 0x7774656Cu);
            v66 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 76LL * v61);
              v68 = gpGraphicsDeviceList;
              for ( i = 0; v68; v68 = (wchar_t *)*((_QWORD *)v68 + 16) )
              {
                if ( (*((_DWORD *)v68 + 40) & 0x800000) != 0 )
                {
                  v70 = 76LL * i++;
                  *(_DWORD *)&v66[v70] = *((_DWORD *)v68 + 62);
                  *(_DWORD *)&v66[v70 + 4] = *((_DWORD *)v68 + 63);
                  *(_DWORD *)&v66[v70 + 8] = *((_DWORD *)v68 + 64);
                }
              }
            }
            v24 = 1;
          }
          DisplayScenarioJournalSetExpectedPathModality(
            272 * (unsigned int)*((unsigned __int16 *)v189[0] + 10),
            *((unsigned __int16 *)v189[0] + 10),
            (char *)v189[0] + 48,
            v61,
            v66);
          v71 = v179;
          v72 = v182;
          v73 = ApplyPathsModality(
                  (__int64)v189[0],
                  v62,
                  v58 != 0,
                  (__int64)v195,
                  (__int64)v182,
                  &v165,
                  (__int64 *)v179,
                  v196);
          v186 = v73;
          v74 = v73;
          v171 = v73;
          if ( v73 < 0 || v73 == 1 )
          {
            LODWORD(v31) = -1073741823;
            v161 = 16;
            v18 = 5;
LABEL_210:
            v167 = v18;
LABEL_211:
            v34 = v160;
LABEL_266:
            v30 = 0LL;
            goto LABEL_86;
          }
          v30 = 0LL;
          if ( v165 )
          {
            v141 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
            WdLogEvent5_WdAssertion(v141);
            v30 = 0LL;
          }
          if ( v74 == 2 )
          {
            if ( v58 || *v71 )
            {
              v142 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
              WdLogEvent5_WdAssertion(v142);
              v30 = 0LL;
            }
            v162 = 1;
          }
          else
          {
            if ( !*v71 )
            {
              v143 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
              WdLogEvent5_WdAssertion(v143);
              v30 = 0LL;
            }
            v72 = 0LL;
            v182 = 0LL;
          }
          LOBYTE(v17) = v172;
          v37 = v181;
          v36 = v187;
        }
        else
        {
          if ( (v17 & 0x40) == 0 )
          {
            v148 = WdLogNewEntry5_WdAssertion(v56, v27, 0LL);
            *(_QWORD *)(v148 + 24) = (unsigned int)v17;
            WdLogEvent5_WdAssertion(v148);
            v34 = v160;
            v161 = 21;
LABEL_265:
            LODWORD(v31) = -1073741811;
            goto LABEL_266;
          }
          v72 = v182;
          v171 = 0;
        }
        v34 = v160;
        if ( !v160 )
          goto LABEL_84;
        v75 = ((__int64 (__fastcall *)(BOOL, struct D3DKMT_GETPATHSMODALITY *))qword_1C02150C0)(v37, v189[0]);
        v30 = 0LL;
        v31 = v75;
        if ( !a6 )
        {
          if ( v75 < 0 )
          {
            v144 = WdLogNewEntry5_WdError(v28, v27, 0LL);
            *(_QWORD *)(v144 + 24) = v31;
            WdLogEvent5_WdError(v144);
            v30 = 0LL;
            LODWORD(v31) = 0;
          }
LABEL_84:
          v28 = (unsigned int)((int)v31 >> 31);
          v161 = v28 + 18;
          v18 = v28 + 10;
LABEL_85:
          v167 = v18;
          goto LABEL_86;
        }
        if ( v75 == -1073741266 )
        {
          if ( (v17 & 0x10) != 0 )
          {
            v145 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
            WdLogEvent5_WdAssertion(v145);
          }
          v146 = WdLogNewEntry5_WdEvent(v28, v27, v30);
          *(_QWORD *)(v146 + 24) = v36;
          *(_QWORD *)(v146 + 32) = -1073741266LL;
          WdLogEvent5_WdEvent(v146);
          v30 = 0LL;
          if ( !v162 )
          {
            if ( v72 )
            {
              v147 = WdLogNewEntry5_WdAssertion(v28, v27, 0LL);
              WdLogEvent5_WdAssertion(v147);
              v30 = 0LL;
            }
            v28 = (__int64)v179;
            v164 = 1;
            v182 = *v179;
            *v179 = 0LL;
          }
          v161 = 24;
          v18 = 9;
          goto LABEL_85;
        }
        if ( v75 >= 0 )
          goto LABEL_84;
        v18 = 9;
        v161 = 29;
        v167 = 9;
        LODWORD(v31) = 0;
LABEL_86:
        v76 = ++v178;
        if ( (_DWORD)v31 == -1073741266 )
        {
          if ( !v168 && v76 < 4 )
          {
            v150 = 3221226030LL;
            goto LABEL_272;
          }
        }
        else if ( (int)v31 >= 0 )
        {
          goto LABEL_88;
        }
        if ( !v169 )
          goto LABEL_151;
        v168 = 1;
        v34 = 0;
        v160 = 0;
        v150 = (unsigned int)v31;
LABEL_272:
        DisplayScenarioJournalRetry(v150);
        LODWORD(v17) = v172;
      }
    }
    LODWORD(v17) = v17 & 0xFFFFFFF0 | 4;
LABEL_184:
    v172 = v17;
    goto LABEL_12;
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
    0xA3C845u,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01DAEA4,
    0,
    3);
  if ( (v17 & 0x10000) != 0 )
  {
    v161 = 38;
LABEL_162:
    LODWORD(v31) = -1073741811;
    v30 = 0LL;
LABEL_163:
    v97 = v179;
    goto LABEL_164;
  }
  v163 = 0;
  v25 = 0;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0215220)(0LL, 0LL) )
  {
    LODWORD(v17) = 2191;
    goto LABEL_184;
  }
  LODWORD(v31) = 0;
  v162 = 1;
  v161 = 18;
LABEL_92:
  FreePathsModality(v189[1]);
  v189[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality(&v189[1]) >= 0 )
  {
    DisplayScenarioJournalSetActualPathModality(
      272 * (unsigned int)*((unsigned __int16 *)v189[1] + 10),
      *((unsigned __int16 *)v189[1] + 10),
      (char *)v189[1] + 48);
    v79 = v189[1];
    v80 = 0;
    if ( *((_WORD *)v189[1] + 10) )
    {
      v81 = 0LL;
      do
      {
        if ( (*(_QWORD *)((_BYTE *)v79 + v81 + 48) & 0x8000001000000000uLL) == 0x8000000000000000uLL )
        {
          v205 = 0LL;
          v206 = 0LL;
          v204[0] = 9;
          v204[1] = 32;
          v205 = *(_QWORD *)((char *)v79 + v81 + 64);
          LODWORD(v206) = *(_DWORD *)((char *)v79 + v81 + 76);
          if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v204) >= 0
            && (BYTE4(v206) & 1) != 0 )
          {
            v170 = 1;
            break;
          }
          v79 = v189[1];
        }
        ++v80;
        v81 += 272LL;
      }
      while ( v80 < *((unsigned __int16 *)v79 + 10) );
    }
  }
  if ( *v179 )
  {
    v95 = *((_QWORD *)*v179 + 5);
    if ( v95 )
    {
      v96 = *(_QWORD *)(v95 + 2576);
      if ( ((v96 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v96 + 160) & 0x2000000) != 0);
    }
  }
  v18 = v167;
LABEL_102:
  v82 = v178;
  if ( v198 )
    *v198 = v178;
  if ( v199 )
    *v199 = v161;
  if ( v200 )
  {
    if ( !v162 || v164 )
      v24 = 0;
    *v200 = v24;
  }
  if ( v201 )
    *v201 = v165;
  v83 = v173;
  if ( (v173 & 0x20) != 0 )
  {
    v84 = v185;
    v85 = (unsigned int)v171;
    v86 = (int)v31 >= 0;
    v87 = v171 < 0;
    *((_DWORD *)v185 + 12) = v171;
    *((_DWORD *)v84 + 13) = v18;
    if ( v86 != !v87 )
    {
      v157 = WdLogNewEntry5_WdAssertion(v86, v85, v30);
      WdLogEvent5_WdAssertion(v157);
    }
    v203[2] = v171;
    v203[0] = 0;
    v203[1] = 16;
    v203[3] = v18;
    DisplayScenarioJournalSetSpecializedData(v203);
  }
  if ( (v83 & 0x40) == 0 )
    LogDiagSDC(v174, (_DWORD)v183, v17, v31, v82, v161, v202, v162);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v29) = v162;
  LOBYTE(v159) = v170;
  LOBYTE(v158) = v165;
  DisplayScenarioJournalFinalize((unsigned int)v31, (unsigned int)v161, v82, v29, v158, v159, v186, v196);
  v91 = WdLogNewEntry5_WdEvent(v89, v88, v90);
  *(_QWORD *)(v91 + 24) = (int)v31;
  WdLogEvent5_WdEvent(v91);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v188);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v197, 5LL);
  return (unsigned int)v31;
}
