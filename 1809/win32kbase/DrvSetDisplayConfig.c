/*
 * XREFs of DrvSetDisplayConfig @ 0x1C004C710
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B98C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C004C198 (DrvChangeDisplaySettings.c)
 *     InitVideo @ 0x1C0098C74 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EC2B8 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0 (DrvDisplayConfigGetDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     ApplyPathsModality @ 0x1C003E2EC (ApplyPathsModality.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00494F4 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00496B8 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C0049FB8 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004C480 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C004C5EC (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     LogDiagSDC @ 0x1C004C614 (LogDiagSDC.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C004D2E8 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004D354 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C004D384 (GetPathsModality.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C004D498 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004D500 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0051280 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C008ECEC (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A2BA0 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0100718 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0100D00 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0101914 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0101BA4 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01037AC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0103CBC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0103E88 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
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
        signed int *a12,
        _BYTE *a13,
        _BYTE *a14,
        __int64 a15)
{
  struct _MDEV *v16; // r13
  __int64 v17; // r15
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // zf
  int IsWddmConnectedSession; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  char v30; // r12
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
  BOOL v42; // r12d
  char v43; // si
  __int64 v44; // rcx
  int v45; // eax
  int v46; // ebx
  unsigned int v47; // ebx
  int v48; // eax
  struct D3DKMT_GETPATHSMODALITY *v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  int v63; // r12d
  unsigned int v64; // edi
  int v65; // ecx
  unsigned int v66; // esi
  unsigned int v67; // r15d
  wchar_t *v68; // rcx
  unsigned int v69; // eax
  char *v70; // rdi
  char *PoolWithTag; // rax
  wchar_t *v72; // rdx
  unsigned int i; // r8d
  __int64 v74; // rcx
  struct _MDEV **v75; // rdi
  struct _MDEV *v76; // rsi
  int v77; // eax
  int v78; // r15d
  int v79; // eax
  unsigned int v80; // eax
  char v81; // al
  struct _MDEV **v82; // r12
  struct D3DKMT_GETPATHSMODALITY *v83; // rcx
  int v84; // esi
  __int64 v85; // rdi
  unsigned int v86; // r12d
  char v87; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v88; // rax
  __int64 v89; // rdx
  _BOOL8 v90; // rcx
  bool v91; // sf
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rax
  struct _DISPLAYCONFIG_CDS_REQUEST *v97; // r12
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rcx
  struct _MDEV **v101; // r12
  __int64 v102; // rdx
  int v103; // edi
  int v104; // eax
  int v105; // eax
  int v106; // eax
  __int64 v107; // rax
  __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // rdx
  int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rax
  int PathsModality; // eax
  int v117; // ebx
  int v118; // eax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  unsigned int v122; // ebx
  const struct _RETRY_MODE *v123; // rdi
  int v124; // eax
  __int64 v125; // rax
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  signed int v133; // eax
  int PathModalityForDisplayConfig; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  int v139; // eax
  unsigned int v140; // r12d
  int v141; // eax
  int v142; // eax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rax
  struct _MDEV *v159; // rdi
  __int64 v160; // rax
  int v161; // edx
  __int64 v162; // rax
  __int64 v163; // rax
  int v164; // [rsp+20h] [rbp-E0h]
  int v165; // [rsp+28h] [rbp-D8h]
  char v166; // [rsp+40h] [rbp-C0h]
  signed int v167; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v168; // [rsp+48h] [rbp-B8h] BYREF
  char v169; // [rsp+49h] [rbp-B7h]
  char v170; // [rsp+4Ah] [rbp-B6h]
  char v171; // [rsp+4Bh] [rbp-B5h] BYREF
  bool v172[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v173; // [rsp+50h] [rbp-B0h]
  bool v174; // [rsp+54h] [rbp-ACh]
  bool v175; // [rsp+55h] [rbp-ABh]
  char v176; // [rsp+56h] [rbp-AAh]
  int v177; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v178; // [rsp+5Ch] [rbp-A4h]
  unsigned int v179; // [rsp+60h] [rbp-A0h]
  unsigned int v180; // [rsp+64h] [rbp-9Ch]
  unsigned int v181; // [rsp+68h] [rbp-98h]
  unsigned int v182; // [rsp+6Ch] [rbp-94h]
  int v183; // [rsp+70h] [rbp-90h]
  unsigned int v184; // [rsp+74h] [rbp-8Ch]
  struct _MDEV **v185; // [rsp+78h] [rbp-88h]
  int v186; // [rsp+80h] [rbp-80h]
  BOOL v187; // [rsp+84h] [rbp-7Ch]
  struct _MDEV *v188; // [rsp+88h] [rbp-78h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v189; // [rsp+90h] [rbp-70h]
  unsigned __int16 v190; // [rsp+98h] [rbp-68h] BYREF
  struct _DISPLAYCONFIG_CDS_REQUEST *v191; // [rsp+A0h] [rbp-60h]
  int v192; // [rsp+A8h] [rbp-58h]
  __int64 v193; // [rsp+B0h] [rbp-50h]
  _QWORD v194[6]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v195[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v196; // [rsp+100h] [rbp+0h] BYREF
  char v197; // [rsp+108h] [rbp+8h]
  __int64 v198; // [rsp+110h] [rbp+10h]
  void *v199; // [rsp+118h] [rbp+18h] BYREF
  int v200; // [rsp+120h] [rbp+20h]
  void *v201; // [rsp+128h] [rbp+28h]
  __int64 v202; // [rsp+130h] [rbp+30h]
  void *v203; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v204; // [rsp+140h] [rbp+40h]
  signed int *v205; // [rsp+148h] [rbp+48h]
  _BYTE *v206; // [rsp+150h] [rbp+50h]
  _BYTE *v207; // [rsp+158h] [rbp+58h]
  __int64 v208; // [rsp+160h] [rbp+60h]
  _DWORD v209[4]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v210[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v211; // [rsp+180h] [rbp+80h]
  int v212; // [rsp+188h] [rbp+88h]
  unsigned __int8 v213; // [rsp+18Ch] [rbp+8Ch]
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v16 = a9;
  v201 = a5;
  v204 = a11;
  v205 = a12;
  v207 = a14;
  v202 = a15;
  v180 = a1;
  v206 = a13;
  v17 = (unsigned int)a3;
  v179 = a4;
  v18 = 0;
  v174 = gbBaseVideo != 0;
  v178 = a3;
  v192 = -1;
  v189 = a2;
  v191 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v188 = a9;
  v185 = a10;
  v181 = gbBaseVideo != 0 ? 3 : 0;
  v184 = 0;
  v170 = 0;
  v168 = 0;
  v171 = 0;
  v167 = 0;
  v177 = -5;
  v173 = 0;
  v182 = 0;
  v176 = 0;
  v19 = WdLogNewEntry5_WdEvent(0LL, a2, a3);
  *(_QWORD *)(v19 + 24) = v17;
  WdLogEvent5_WdEvent(v19);
  v193 = MEMORY[0xFFFFF78000000320];
  v208 = v193 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)v17, a4, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(200 * v180, v180, v189);
  v203 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v203, 4LL);
  v23 = gOldModeChange == 0;
  *a10 = 0LL;
  if ( !v23 )
  {
    v107 = WdLogNewEntry5_WdAssertion(v21, v20, v22);
    WdLogEvent5_WdAssertion(v107);
  }
  if ( (v17 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v175 = (a4 & 2) != 0 && (v17 & 0x88F) == 2191;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v194);
  v194[0] = &off_1C0188528;
  v198 = v202;
  *(_OWORD *)v195 = 0LL;
  v196 = 0LL;
  v197 = 0;
  v199 = 0LL;
  IsWddmConnectedSession = UserIsWddmConnectedSession();
  v29 = (unsigned int)(v28 + 1);
  if ( !IsWddmConnectedSession || ((unsigned __int8)a4 & (unsigned __int8)(v28 + 1)) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v158 = WdLogNewEntry5_WdAssertion(v26, v25, v27);
      WdLogEvent5_WdAssertion(v158);
    }
    v101 = v185;
    v102 = (unsigned int)v17 >> 8;
    v103 = v29 & a4;
    LOBYTE(v102) = v29 & BYTE1(v17);
    LOBYTE(v27) = v29 & a4;
    v104 = DrvChangeDisplayFallback(v201, v102, v27, a9, v185, (enum _DXGK_DIAG_SDC_STAGE *)&v167, (bool *)&v168, &v177);
    v35 = 0LL;
    LODWORD(v36) = v104;
    if ( v104 < 0 )
    {
LABEL_164:
      if ( v175 )
      {
        if ( a6 )
        {
          v109 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
          WdLogEvent5_WdAssertion(v109);
        }
        LODWORD(v17) = v178;
        v110 = v178 >> 8;
        LOBYTE(v110) = v29 & BYTE1(v178);
        LOBYTE(v35) = v29;
        v111 = DrvChangeDisplayFallback(
                 v201,
                 v110,
                 v35,
                 v16,
                 v101,
                 (enum _DXGK_DIAG_SDC_STAGE *)&v167,
                 (bool *)&v168,
                 &v177);
        v36 = v111;
        if ( v111 < 0 )
        {
          v162 = WdLogNewEntry5_WdAssertion(v113, v112, v35);
          WdLogEvent5_WdAssertion(v162);
          if ( !byte_1C01D1E40 )
          {
            byte_1C01D1E40 = v29;
            ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))qword_1C01CDEB0)(
              400LL,
              22LL,
              v36,
              v177,
              v167);
          }
        }
        else
        {
          v18 = 10;
          v167 = 31;
          v173 = 10;
        }
LABEL_91:
        if ( (_DWORD)v36 == -1073741811 )
          goto LABEL_102;
        goto LABEL_92;
      }
LABEL_90:
      LODWORD(v17) = v178;
      goto LABEL_91;
    }
    v105 = v167;
    v33 = 30LL;
    if ( v103 )
      v105 = 30;
    v167 = v105;
LABEL_151:
    if ( (int)v36 >= 0 )
    {
LABEL_88:
      v81 = v170;
    }
    else
    {
LABEL_275:
      v81 = v170;
      if ( v170 )
      {
        v18 = 9;
        v167 = 29;
        v173 = 9;
        LODWORD(v36) = 0;
        v177 = 0;
      }
      if ( (int)v36 < 0 )
      {
        v16 = v188;
        goto LABEL_163;
      }
    }
    v82 = v185;
    if ( v81 && !*v185 )
    {
      v159 = v188;
      if ( !v188 )
      {
        v160 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
        WdLogEvent5_WdAssertion(v160);
        v35 = 0LL;
      }
      v161 = v177;
      v23 = v177 == 2;
      *v82 = v159;
      if ( v23 )
        v161 = 0;
      v177 = v161;
    }
    goto LABEL_90;
  }
  if ( (v17 & 0x40000000) != 0 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
      10733637LL,
      &unk_1C0193328,
      v28);
    if ( (v17 & 0x10000) == 0 )
    {
      v114 = 0LL;
      if ( gbBaseVideo )
      {
        v115 = WdLogNewEntry5_WdAssertion(0LL, v32, v108);
        WdLogEvent5_WdAssertion(v115);
      }
      PathsModality = GetPathsModality(v114, v195, 15LL);
      v35 = 0LL;
      LODWORD(v36) = PathsModality;
      if ( PathsModality < 0 )
      {
        v167 = 2;
        goto LABEL_151;
      }
      v117 = *((_DWORD *)v195[0] + 8) & 0xF;
      if ( v117 != (_DWORD)v29 && v117 != 8 )
      {
        LOBYTE(v33) = v29;
        v169 = v29;
        LOBYTE(v32) = v117 == 4;
        v30 = v29;
        ((void (__fastcall *)(__int64, __int64, _QWORD))qword_1C01CDB58)(v33, v32, 0LL);
        if ( v117 != 4 )
        {
          LODWORD(v17) = 132;
          goto LABEL_184;
        }
        v168 = v29;
        LODWORD(v36) = 0;
        v167 = 26;
        goto LABEL_92;
      }
      LODWORD(v36) = -1073741637;
      v167 = 25;
      goto LABEL_163;
    }
    v167 = 37;
    goto LABEL_162;
  }
  if ( (int)v17 >= 0 )
  {
    if ( (v17 & 0xF) != 0xF || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v28 )
    {
      if ( (v17 & 0x200) != 0
        || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v28
        || (v17 & 0x1F) != 0 && (v17 & 0x40) == 0 )
      {
        v169 = v28;
        v30 = v28;
        ((void (__fastcall *)(_QWORD, _QWORD))qword_1C01CDB58)(0LL, 0LL);
      }
      else
      {
        v30 = ((__int64 (*)(void))qword_1C01CDB60)();
        v169 = v30;
      }
      goto LABEL_12;
    }
    v169 = ((__int64 (*)(void))qword_1C01CDB60)();
    v30 = v169;
    if ( !v169 )
    {
LABEL_12:
      v183 = v17 & 0x10000;
      v200 = v17 & 0x80;
      if ( (v17 & 0x10000) != 0 )
      {
        v118 = ((__int64 (__fastcall *)(__int64, _QWORD, void **))qword_1C01CDEB8)(
                 a7,
                 (v17 & 0x80) != 0 ? 2031616 : 0x20000,
                 &v199);
        v35 = 0LL;
        LODWORD(v36) = v118;
        if ( v118 < 0 )
        {
          v167 = 42;
          goto LABEL_151;
        }
      }
      v31 = ((__int64 (*)(void))qword_1C01CD940)();
      v35 = 0LL;
      LODWORD(v36) = v31;
      if ( v31 < 0 )
      {
        v18 = 6;
        v167 = 12;
        v173 = 6;
        goto LABEL_151;
      }
      v197 = v29;
      if ( (v17 & 0x80) != 0 )
      {
        v37 = v29;
        if ( !v30 && (v17 & 0xF) != 0 && (v179 & 0x20) == 0 )
          v37 = 3LL;
        v38 = ((__int64 (__fastcall *)(__int64))qword_1C01CD960)(v37);
        v35 = 0LL;
        v36 = v38;
        if ( v38 < 0 )
        {
          v119 = WdLogNewEntry5_WdEvent(v33, v32, 0LL);
          *(_QWORD *)(v119 + 24) = v36;
          WdLogEvent5_WdEvent(v119);
          DrvDxgkLogCodePointPacket(4LL, (unsigned int)v36, 0LL, 0LL);
          v35 = 0LL;
          LODWORD(v36) = 0;
        }
      }
      if ( (v17 & 0x200) == 0 || (v17 & 0x40) != 0 )
      {
        v39 = 0;
        v166 = 0;
      }
      else
      {
        v39 = v29;
        v166 = v29;
      }
      v186 = v17 & 0xF;
      while ( 1 )
      {
        v40 = WdLogNewEntry5_WdEvent(v33, v32, v35);
        v41 = v184;
        v193 = v184;
        *(_QWORD *)(v40 + 24) = v184;
        *(_QWORD *)(v40 + 32) = (int)v36;
        WdLogEvent5_WdEvent(v40);
        v42 = 0;
        v187 = 0;
        v171 = 0;
        v168 = 0;
        FreePathsModality(v195[0]);
        FreePathsModality(v195[1]);
        v35 = 0LL;
        v195[1] = 0LL;
        v195[0] = 0LL;
        if ( v174 )
        {
          if ( v186 != 15 )
          {
            v120 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
            WdLogEvent5_WdAssertion(v120);
            v35 = 0LL;
          }
          if ( v39 )
          {
            v121 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
            WdLogEvent5_WdAssertion(v121);
            v35 = 0LL;
          }
          if ( v181 >= 6 )
          {
            if ( (int)v36 >= 0 )
            {
              v157 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
              WdLogEvent5_WdAssertion(v157);
              v35 = 0LL;
              goto LABEL_151;
            }
            goto LABEL_275;
          }
          v122 = v181;
          v123 = (const struct _RETRY_MODE *)((char *)&unk_1C01A5D80 + 12 * v181);
          DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v123 + 1), *((unsigned int *)v123 + 2), 0LL);
          if ( *(_BYTE *)v123 )
          {
            v182 = 0;
            v181 = v29 + v122;
            LODWORD(v36) = GetPathsModality(0LL, v195, 15LL);
            goto LABEL_203;
          }
          v124 = DrvCreatePathModalityFromAllPaths(&v196, v182, v195);
          v182 += v29;
          v35 = 0LL;
          LODWORD(v36) = v124;
          if ( v124 >= 0 )
          {
            if ( *((_WORD *)v195[0] + 10) != (_WORD)v29 )
            {
              v125 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
              WdLogEvent5_WdAssertion(v125);
LABEL_203:
              v35 = 0LL;
            }
          }
          else
          {
            v181 += v29;
            v182 = 0;
          }
          if ( (int)v36 < 0 )
          {
            v167 = 2;
            goto LABEL_206;
          }
          v126 = DrvFunctionalizeBaseVidMode(v123, v195[0]);
          v36 = v126;
          if ( v126 < 0 )
          {
            v129 = WdLogNewEntry5_WdError(v33, v127, v128);
            *(_QWORD *)(v129 + 24) = v36;
            WdLogEvent5_WdError(v129);
            v167 = 2;
            goto LABEL_211;
          }
          goto LABEL_39;
        }
        if ( v186 )
        {
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
            10733637LL,
            &unk_1C0193328,
            0LL);
          v35 = 0LL;
          if ( v183 )
          {
            LODWORD(v36) = -1073741811;
            v167 = 39;
            goto LABEL_86;
          }
          if ( (v179 & 0x20) != 0 && *((_QWORD *)v191 + 4) )
            v43 = v29;
          else
            v43 = 0;
          v44 = (v179 & 0x20) != 0 ? 0x9000 : 0;
          if ( !v43 || *((_DWORD *)v191 + 5) )
          {
            v45 = v186;
            v46 = v186;
          }
          else
          {
            v45 = v186;
            v46 = 0x2000000;
          }
          v47 = v44 | v46;
          if ( (v47 & 0x2000000) != 0 && v45 != 15 )
          {
            v131 = WdLogNewEntry5_WdAssertion(v44, v191, 0LL);
            WdLogEvent5_WdAssertion(v131);
          }
          v48 = GetPathsModality(v44, v195, v47);
          v35 = 0LL;
          LODWORD(v36) = v48;
          if ( v48 < 0 )
          {
            v167 = 2;
            goto LABEL_216;
          }
          v49 = v195[0];
          if ( !*((_WORD *)v195[0] + 10) )
          {
            v132 = WdLogNewEntry5_WdAssertion(v195[0], v32, 0LL);
            WdLogEvent5_WdAssertion(v132);
            v49 = v195[0];
          }
          if ( v169 || (v166 = v29, (v17 & 0x40) != 0) )
            v166 = 0;
          DrvSetDisplayConfigApplyDeviceHack(v49);
          if ( v43 )
          {
            v97 = v191;
            if ( !*((_DWORD *)v191 + 5) || (v166 = v29, !*((_DWORD *)v191 + 6)) )
              v166 = 0;
            v98 = DrvValidateAndApplyDevMode(v191, v195, 0LL);
            v35 = 0LL;
            LODWORD(v36) = v98;
            if ( v98 < 0 )
            {
              v18 = *((_DWORD *)v97 + 13);
              v177 = *((_DWORD *)v97 + 12);
              v133 = 2;
              v173 = v18;
              v33 = 23LL;
              if ( (_DWORD)v36 == -1073741266 )
                v133 = 23;
              v167 = v133;
              goto LABEL_206;
            }
            v42 = *((_DWORD *)v191 + 5) != 0;
            v187 = v42;
          }
          v18 = 10;
          v173 = 10;
          goto LABEL_39;
        }
        if ( (v17 & 0x10) != 0 )
        {
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
            10733637LL,
            &unk_1C0193328,
            0LL);
          v35 = 0LL;
          if ( v183 )
          {
            LODWORD(v36) = -1073741811;
            v167 = 40;
            goto LABEL_86;
          }
          PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig(v180, v189, v195);
          v35 = 0LL;
          LODWORD(v36) = PathModalityForDisplayConfig;
          if ( PathModalityForDisplayConfig < 0 )
          {
            v167 = 3;
            goto LABEL_86;
          }
          v135 = ConvertDisplayConfigToPathModality(v180, v189, v195[0], 0LL);
          v35 = 0LL;
          LODWORD(v36) = v135;
          if ( v135 < 0 )
          {
            v167 = 4;
            goto LABEL_86;
          }
          v136 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C01CD8A8)(
                   v17 & 0x2000 | 0x2F,
                   v195[0],
                   0LL);
          v35 = 0LL;
          LODWORD(v36) = v136;
          if ( v136 < 0 )
          {
            v167 = 5;
            goto LABEL_86;
          }
          if ( v169 || (v17 & 0x40) != 0 )
            v166 = 0;
          else
            v166 = v29;
          goto LABEL_39;
        }
        if ( (v17 & 0x20) == 0 )
        {
          v155 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
          *(_QWORD *)(v155 + 24) = (unsigned int)v17;
          WdLogEvent5_WdAssertion(v155);
          v167 = 9;
          goto LABEL_265;
        }
        v172[0] = 0;
        if ( (v179 & 8) != 0 )
        {
          v137 = SetDisplayConfigHandleOnlyProvidedPath(v189, v195, v172, (enum _DXGK_DIAG_SDC_STAGE *)&v167);
        }
        else
        {
          if ( !v183 )
          {
            v140 = v180;
            v141 = AllocatePathModalityForDisplayConfig(v180, v189, v195);
            v35 = 0LL;
            LODWORD(v36) = v141;
            if ( v141 < 0 )
            {
              v167 = 6;
              goto LABEL_86;
            }
            v142 = ConvertDisplayConfigToPathModality(v140, v189, v195[0], v172);
            v35 = 0LL;
            LODWORD(v36) = v142;
            if ( v142 < 0 )
            {
              v167 = 7;
              goto LABEL_86;
            }
            goto LABEL_240;
          }
          v137 = SetDisplayConfigHandleBrokerProvidedPaths(
                   v199,
                   0,
                   v180,
                   v189,
                   v195,
                   v172,
                   (enum _DXGK_DIAG_SDC_STAGE *)&v167);
        }
        v35 = 0LL;
        LODWORD(v36) = v137;
        if ( v137 < 0 )
          goto LABEL_86;
LABEL_240:
        if ( v172[0] )
        {
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
            10733637LL,
            &unk_1C0193328,
            0LL);
          v138 = SetDisplayConfigHandlePreferredScaling(v195[0], (enum _DXGK_DIAG_SDC_STAGE *)&v167);
          v35 = 0LL;
          LODWORD(v36) = v138;
          if ( v138 < 0 )
            goto LABEL_86;
        }
        v139 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C01CD8A8)(
                 256LL,
                 v195[0],
                 0LL);
        v35 = 0LL;
        LODWORD(v36) = v139;
        if ( v139 < 0 )
        {
          v167 = 8;
          goto LABEL_86;
        }
        v42 = v29;
        v187 = v29;
LABEL_39:
        if ( (v17 & 0x800) != 0 )
        {
          v50 = CreatePathPersistentMonitorsIfNeeded(v33, v195[0], &v190);
          v36 = v50;
          if ( v50 < 0 )
          {
            v143 = WdLogNewEntry5_WdError(v52, v51, v53);
            *(_QWORD *)(v143 + 24) = v36;
            WdLogEvent5_WdError(v143);
            v167 = 10;
            goto LABEL_211;
          }
          v54 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C01CD8C8)(
                  0x80000000LL,
                  v195[0]);
          v36 = v54;
          if ( v54 == -1073741266 )
          {
            v144 = WdLogNewEntry5_WdEvent(v56, v55, v57);
            *(_QWORD *)(v144 + 24) = v41;
            *(_QWORD *)(v144 + 32) = -1073741266LL;
            WdLogEvent5_WdEvent(v144);
            v167 = 23;
            goto LABEL_211;
          }
          if ( v54 < 0 )
          {
            v145 = WdLogNewEntry5_WdError(v56, v55, v57);
            *(_QWORD *)(v145 + 24) = v36;
            WdLogEvent5_WdError(v145);
            v167 = 22;
            goto LABEL_211;
          }
          if ( v190 )
          {
            v146 = WdLogNewEntry5_WdWarning(v56);
            *(_QWORD *)(v146 + 24) = v41;
            *(_QWORD *)(v146 + 32) = v36;
            WdLogEvent5_WdWarning(v146);
            LODWORD(v36) = -1073741266;
            goto LABEL_211;
          }
        }
        v58 = GetCcdRawmodeFlag() | 0x8000;
        if ( (v179 & 0x20) != 0 && (!*((_QWORD *)v191 + 4) || *((_DWORD *)v191 + 2)) )
          v58 |= 0x20000u;
        v59 = v58;
        LODWORD(v59) = v58 | 0x1000000;
        if ( !v183 )
          v59 = v58;
        v60 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C01CD8B0)(v59, v195[0]);
        v35 = 0LL;
        v36 = v60;
        if ( v60 < 0 )
        {
          v130 = WdLogNewEntry5_WdEvent(v61, v32, 0LL);
          *(struct D3DKMT_GETPATHSMODALITY **)(v130 + 24) = v195[0];
          *(_QWORD *)(v130 + 32) = v36;
          WdLogEvent5_WdEvent(v130);
          v167 = 11;
          v18 = 7;
          goto LABEL_210;
        }
        if ( v200 )
        {
          v62 = GetPathsModality(v61, &v195[1], 1048640LL);
          v35 = 0LL;
          LODWORD(v36) = v62;
          if ( v62 < 0 )
          {
            v167 = 13;
LABEL_216:
            v18 = 7;
            v173 = 7;
LABEL_206:
            v39 = v166;
            goto LABEL_86;
          }
          v63 = v17 & 0x1100;
          v64 = (16 * (v17 & 0x1000)) | 0x4000;
          if ( (v17 & 0x1100) == 0 )
            v64 = 16 * (v17 & 0x1000);
          if ( v64 )
          {
            v106 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C01CD8A8)(
                     v64,
                     v195[0],
                     0LL);
            v35 = 0LL;
            LODWORD(v36) = v106;
            if ( v106 < 0 )
            {
              v167 = 14;
              goto LABEL_206;
            }
          }
          v65 = v64 | 0x400000;
          v66 = 0;
          if ( (v179 & 0x10) == 0 )
            v65 = v64;
          v67 = v65 | 0x1000000;
          if ( !v183 )
            v67 = v65;
          v68 = gpGraphicsDeviceList;
          while ( v68 )
          {
            v23 = (*((_DWORD *)v68 + 40) & 0x800000) == 0;
            v69 = v66 + 1;
            v68 = (wchar_t *)*((_QWORD *)v68 + 16);
            if ( v23 )
              v69 = v66;
            v66 = v69;
          }
          v70 = 0LL;
          if ( v66 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 76LL * v66, 0x7774656Cu);
            v70 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 76LL * v66);
              v72 = gpGraphicsDeviceList;
              for ( i = 0; v72; v72 = (wchar_t *)*((_QWORD *)v72 + 16) )
              {
                if ( (*((_DWORD *)v72 + 40) & 0x800000) != 0 )
                {
                  v74 = 76LL * i++;
                  *(_DWORD *)&v70[v74] = *((_DWORD *)v72 + 62);
                  *(_DWORD *)&v70[v74 + 4] = *((_DWORD *)v72 + 63);
                  *(_DWORD *)&v70[v74 + 8] = *((_DWORD *)v72 + 64);
                }
              }
            }
            LODWORD(v29) = 1;
          }
          DisplayScenarioJournalSetExpectedPathModality(
            272 * (unsigned int)*((unsigned __int16 *)v195[0] + 10),
            *((unsigned __int16 *)v195[0] + 10),
            (char *)v195[0] + 48,
            v66,
            v70);
          v75 = v185;
          v76 = v188;
          v77 = ApplyPathsModality(
                  (__int64)v195[0],
                  v67,
                  v63 != 0,
                  (__int64)v201,
                  (__int64)v188,
                  &v171,
                  (__int64 *)v185,
                  v202);
          v192 = v77;
          v78 = v77;
          v177 = v77;
          if ( v77 < 0 || v77 == (_DWORD)v29 )
          {
            LODWORD(v36) = -1073741823;
            v167 = 16;
            v18 = 5;
LABEL_210:
            v173 = v18;
LABEL_211:
            v39 = v166;
LABEL_266:
            v35 = 0LL;
            goto LABEL_86;
          }
          v35 = 0LL;
          if ( v171 )
          {
            v147 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
            WdLogEvent5_WdAssertion(v147);
            v35 = 0LL;
          }
          if ( v78 == 2 )
          {
            if ( v63 || *v75 )
            {
              v148 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
              WdLogEvent5_WdAssertion(v148);
              v35 = 0LL;
            }
            v168 = v29;
          }
          else
          {
            if ( !*v75 )
            {
              v149 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
              WdLogEvent5_WdAssertion(v149);
              v35 = 0LL;
            }
            v76 = 0LL;
            v188 = 0LL;
          }
          LOBYTE(v17) = v178;
          v42 = v187;
          v41 = v193;
        }
        else
        {
          if ( (v17 & 0x40) == 0 )
          {
            v154 = WdLogNewEntry5_WdAssertion(v61, v32, 0LL);
            *(_QWORD *)(v154 + 24) = (unsigned int)v17;
            WdLogEvent5_WdAssertion(v154);
            v39 = v166;
            v167 = 21;
LABEL_265:
            LODWORD(v36) = -1073741811;
            goto LABEL_266;
          }
          v76 = v188;
          v177 = 0;
        }
        v39 = v166;
        if ( !v166 )
          goto LABEL_84;
        v79 = ((__int64 (__fastcall *)(BOOL, struct D3DKMT_GETPATHSMODALITY *))qword_1C01CD8C8)(v42, v195[0]);
        v35 = 0LL;
        v36 = v79;
        if ( !a6 )
        {
          if ( v79 < 0 )
          {
            v150 = WdLogNewEntry5_WdError(v33, v32, 0LL);
            *(_QWORD *)(v150 + 24) = v36;
            WdLogEvent5_WdError(v150);
            v35 = 0LL;
            LODWORD(v36) = 0;
          }
LABEL_84:
          v33 = (unsigned int)((int)v36 >> 31);
          v167 = v33 + 18;
          v18 = v33 + 10;
LABEL_85:
          v173 = v18;
          goto LABEL_86;
        }
        if ( v79 == -1073741266 )
        {
          if ( (v17 & 0x10) != 0 )
          {
            v151 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
            WdLogEvent5_WdAssertion(v151);
          }
          v152 = WdLogNewEntry5_WdEvent(v33, v32, v35);
          *(_QWORD *)(v152 + 24) = v41;
          *(_QWORD *)(v152 + 32) = -1073741266LL;
          WdLogEvent5_WdEvent(v152);
          v35 = 0LL;
          if ( !v168 )
          {
            if ( v76 )
            {
              v153 = WdLogNewEntry5_WdAssertion(v33, v32, 0LL);
              WdLogEvent5_WdAssertion(v153);
              v35 = 0LL;
            }
            v33 = (__int64)v185;
            v170 = v29;
            v188 = *v185;
            *v185 = 0LL;
          }
          v167 = 24;
          v18 = 9;
          goto LABEL_85;
        }
        if ( v79 >= 0 )
          goto LABEL_84;
        v18 = 9;
        v167 = 29;
        v173 = 9;
        LODWORD(v36) = 0;
LABEL_86:
        v80 = v29 + v184;
        v184 += v29;
        if ( (_DWORD)v36 == -1073741266 )
        {
          if ( !v174 && v80 < 4 )
          {
            v156 = 3221226030LL;
            goto LABEL_272;
          }
        }
        else if ( (int)v36 >= 0 )
        {
          goto LABEL_88;
        }
        if ( !v175 )
          goto LABEL_151;
        v174 = v29;
        v39 = 0;
        v166 = 0;
        v156 = (unsigned int)v36;
LABEL_272:
        DisplayScenarioJournalRetry(v156);
        LODWORD(v17) = v178;
      }
    }
    LODWORD(v17) = v17 & 0xFFFFFFF0 | 4;
LABEL_184:
    v178 = v17;
    goto LABEL_12;
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
    10733637LL,
    &unk_1C0193328,
    v28);
  if ( (v17 & 0x10000) != 0 )
  {
    v167 = 38;
LABEL_162:
    LODWORD(v36) = -1073741811;
    v35 = 0LL;
LABEL_163:
    v101 = v185;
    goto LABEL_164;
  }
  v169 = 0;
  v30 = 0;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C01CDB58)(0LL, 0LL) )
  {
    LODWORD(v17) = 2191;
    goto LABEL_184;
  }
  LODWORD(v36) = 0;
  v168 = v29;
  v167 = 18;
LABEL_92:
  FreePathsModality(v195[1]);
  v195[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality(&v195[1]) >= 0 )
  {
    DisplayScenarioJournalSetActualPathModality(
      272 * (unsigned int)*((unsigned __int16 *)v195[1] + 10),
      *((unsigned __int16 *)v195[1] + 10),
      (char *)v195[1] + 48);
    v83 = v195[1];
    v84 = 0;
    if ( *((_WORD *)v195[1] + 10) )
    {
      v85 = 0LL;
      do
      {
        if ( (*(_QWORD *)((_BYTE *)v83 + v85 + 48) & 0x8000001000000000uLL) == 0x8000000000000000uLL )
        {
          v210[0] = 9;
          v210[1] = 32;
          v211 = *(_QWORD *)((char *)v83 + v85 + 64);
          v212 = *(_DWORD *)((char *)v83 + v85 + 76);
          if ( (int)DrvDisplayConfigGetDeviceInfo((struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *)v210) >= 0
            && ((unsigned __int8)v29 & v213) != 0 )
          {
            v176 = v29;
            break;
          }
          v83 = v195[1];
        }
        v84 += v29;
        v85 += 272LL;
      }
      while ( v84 < *((unsigned __int16 *)v83 + 10) );
    }
  }
  if ( *v185 )
  {
    v99 = *((_QWORD *)*v185 + 4);
    if ( v99 )
    {
      v100 = *(_QWORD *)(v99 + 2576);
      if ( ((v100 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((unsigned __int8)v29 & (unsigned __int8)(*(_DWORD *)(v100 + 160) >> 25));
    }
  }
  v18 = v173;
LABEL_102:
  v86 = v184;
  if ( v204 )
    *v204 = v184;
  if ( v205 )
    *v205 = v167;
  if ( v206 )
  {
    if ( !v168 || v170 )
      LOBYTE(v29) = 0;
    *v206 = v29;
  }
  if ( v207 )
    *v207 = v171;
  v87 = v179;
  if ( (v179 & 0x20) != 0 )
  {
    v88 = v191;
    v89 = (unsigned int)v177;
    v90 = (int)v36 >= 0;
    v91 = v177 < 0;
    *((_DWORD *)v191 + 12) = v177;
    *((_DWORD *)v88 + 13) = v18;
    if ( v90 != !v91 )
    {
      v163 = WdLogNewEntry5_WdAssertion(v90, v89, v35);
      WdLogEvent5_WdAssertion(v163);
    }
    v209[2] = v177;
    v209[0] = 0;
    v209[1] = 16;
    v209[3] = v18;
    DisplayScenarioJournalSetSpecializedData(v209);
  }
  if ( (v87 & 0x40) == 0 )
    LogDiagSDC(v180, (__int64)v189, v17, v36, v86, v167, v208, v168);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v34) = v168;
  LOBYTE(v165) = v176;
  LOBYTE(v164) = v171;
  DisplayScenarioJournalFinalize((unsigned int)v36, (unsigned int)v167, v86, v34, v164, v165, v192, v202);
  v95 = WdLogNewEntry5_WdEvent(v93, v92, v94);
  *(_QWORD *)(v95 + 24) = (int)v36;
  WdLogEvent5_WdEvent(v95);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v194);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v203, 5LL);
  return (unsigned int)v36;
}
