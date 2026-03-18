/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003814 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003868 (-GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?Valid@CVidSchSubmitData@@QEBAEXZ @ 0x1C00038B0 (-Valid@CVidSchSubmitData@@QEBAEXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000391C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0003998 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C00063B0 (-IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0006574 (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000658C (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0007868 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000BFFC (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000C174 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?ConvertDisplayConfigToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4DISPLAYCONFIG_ROTATION@@W41@@Z @ 0x1C001AAA0 (-ConvertDisplayConfigToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4DISPLAYCONFIG_.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     MonitorGetWideColorModeEnforced @ 0x1C00D4410 (MonitorGetWideColorModeEnforced.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00D44AC (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00D676C (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00D686C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D6920 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00D69E0 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ConvertDmmToDisplayConfigRotation @ 0x1C00DE898 (ConvertDmmToDisplayConfigRotation.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00DF038 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00E7594 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C00EC2D0 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00ED228 (MonitorReleaseMonitorHandle.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01012A4 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0126A44 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0128DA8 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0130CC0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C014C4AC (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C01ED6D0 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C01F1A64 (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02023DC (DxgkCreateLightweightDeviceAndContext.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C0243CC0 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0243FE4 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?TriggerSDRWhiteLevelChangedWnf@@YAJXZ @ 0x1C0270500 (-TriggerSDRWhiteLevelChangedWnf@@YAJXZ.c)
 *     DxgkNotifyDisplayChange @ 0x1C0278734 (DxgkNotifyDisplayChange.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C02C9320 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C02C953C (MonitorEnableDisableAdvancedColor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C02C97B4 (MonitorGetSDRWhiteLevel.c)
 *     MonitorSetAdvancedColorParams @ 0x1C02C9F88 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetAppOverride @ 0x1C02CA1D4 (MonitorSetAppOverride.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02CA2E0 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C02CA408 (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02CA654 (MonitorSetSDRWhiteLevel.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, __int64 a2)
{
  int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _DEVICE_OBJECT *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 DeviceInterfaces; // rdi
  DXGADAPTERSOURCEHASH *v12; // rsi
  int v13; // eax
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdi
  struct HDXGMONITOR__ *v37; // rcx
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int IsMonitorAndDriverWCGCapable; // eax
  unsigned __int8 v43; // al
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 v46; // r13
  unsigned int v47; // eax
  int v48; // eax
  DXGSESSIONMODECHANGELOCK *v49; // rcx
  int WideColorModeEnforced; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v51; // ecx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  unsigned int Value; // ecx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  int LightweightDeviceAndContext; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct _DEVICE_OBJECT *v66; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  void *v71; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  DXGADAPTER *v77; // rdx
  int v78; // ecx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  unsigned int v85; // edx
  int v86; // ecx
  int v87; // eax
  __int64 v88; // rcx
  unsigned int v89; // esi
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  _QWORD *v109; // rax
  __int64 v110; // rdx
  struct DXGADAPTER *v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rax
  __int64 v114; // rdx
  _QWORD *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  _QWORD *v120; // rax
  DXGSESSIONMODECHANGELOCK *v121; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v123; // rax
  struct DXGGLOBAL *v124; // rax
  __int64 v125; // rax
  __int64 v126; // rcx
  _QWORD *v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rax
  int v130; // ebx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  _QWORD *v139; // rax
  unsigned int v140; // edx
  _QWORD *v141; // rax
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 LowPart; // rax
  unsigned int *v145; // r15
  unsigned int *v146; // r12
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r15
  __int64 v152; // rdx
  __int64 v153; // rcx
  int v154; // eax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  _QWORD *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  _QWORD *v166; // rax
  int MonitorHandle; // eax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // rdx
  int v172; // eax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  int v176; // eax
  _QWORD *v177; // rax
  _QWORD *v178; // rax
  __int64 v179; // rdx
  _QWORD *v180; // rax
  __int64 v181; // rax
  _QWORD *v182; // rax
  _QWORD *v183; // rax
  _QWORD *v184; // rax
  _QWORD *v185; // rax
  __int64 v186; // rax
  _QWORD *v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  int v191; // eax
  __int64 v192; // rax
  int SDRWhiteLevel; // eax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  _QWORD *v197; // rax
  __int64 v198; // rax
  int v199; // eax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  _QWORD *v203; // rax
  __int64 v204; // r9
  __int64 v205; // r8
  DXGADAPTER *v206; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v207; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v208; // [rsp+69h] [rbp-9Fh] BYREF
  char v209; // [rsp+6Ah] [rbp-9Eh] BYREF
  char v210; // [rsp+6Bh] [rbp-9Dh] BYREF
  char v211; // [rsp+6Ch] [rbp-9Ch] BYREF
  char v212; // [rsp+6Dh] [rbp-9Bh] BYREF
  char v213; // [rsp+6Eh] [rbp-9Ah]
  char v214; // [rsp+6Fh] [rbp-99h]
  unsigned __int8 v215[4]; // [rsp+70h] [rbp-98h] BYREF
  char v216; // [rsp+74h] [rbp-94h]
  __int64 v217; // [rsp+78h] [rbp-90h]
  struct HDXGMONITOR__ *v218; // [rsp+80h] [rbp-88h] BYREF
  struct HDXGMONITOR__ *v219; // [rsp+88h] [rbp-80h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v220; // [rsp+90h] [rbp-78h] BYREF
  int v221; // [rsp+94h] [rbp-74h]
  int v222; // [rsp+98h] [rbp-70h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v223; // [rsp+9Ch] [rbp-6Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v224; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v225[3]; // [rsp+A4h] [rbp-64h] BYREF
  struct _LUID v226; // [rsp+B0h] [rbp-58h] BYREF
  struct _LUID v227; // [rsp+B8h] [rbp-50h] BYREF
  int v228; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v229; // [rsp+C8h] [rbp-40h]
  char v230; // [rsp+D0h] [rbp-38h]
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v231; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v232; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v233[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v234; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v235[24]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v236[24]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD v237[8]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v238[10]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v239[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v240[144]; // [rsp+2F8h] [rbp+1F0h] BYREF
  _BYTE v241[144]; // [rsp+388h] [rbp+280h] BYREF
  _QWORD v242[18]; // [rsp+418h] [rbp+310h] BYREF
  _BYTE v243[144]; // [rsp+4A8h] [rbp+3A0h] BYREF

  v206 = 0LL;
  memset(v238, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v238[1]);
  v4 = 1;
  v238[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v238[6]) = -1;
  LODWORD(v238[3]) = 39;
  v228 = -1;
  v229 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v230 = 1;
    v228 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerEnter, 0LL, 2184);
  }
  else
  {
    v230 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v228, 2184LL);
  LODWORD(v8) = -1073741811;
  if ( !a2 )
  {
    v90 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v90 + 24) = 4891LL;
    WdLogEvent5_WdAssertion(v90);
    goto LABEL_8;
  }
  v9 = *(_DWORD *)a2;
  v10 = 4294967277LL;
  LODWORD(DeviceInterfaces) = 0;
  if ( *(_DWORD *)a2 <= 0xFFFFFFED )
  {
    if ( v9 == -19 )
    {
      Global = DXGGLOBAL::GetGlobal(4294967277LL, v5);
      LightweightDeviceAndContext = DXGGLOBAL::IterateAdaptersWithCallback(
                                      Global,
                                      SendColorimetricControlToDriverCallback,
                                      a2,
                                      4LL);
      goto LABEL_54;
    }
    if ( v9 > 8 )
    {
      if ( v9 <= 0xB )
        goto LABEL_15;
      if ( v9 == 100 )
        goto LABEL_138;
      if ( v9 != -22 )
        goto LABEL_125;
      LightweightDeviceAndContext = DxgkCreateLightweightDeviceAndContext((struct _LUID *)(a2 + 8));
LABEL_54:
      LODWORD(DeviceInterfaces) = LightweightDeviceAndContext;
      goto LABEL_7;
    }
    if ( v9 < 7 )
    {
      v56 = v9 - 2;
      if ( v56 )
      {
        v57 = v56 - 1;
        if ( !v57 )
        {
          if ( !a1 )
          {
            v98 = WdLogNewEntry5_WdAssertion(4294967277LL, v5);
            *(_QWORD *)(v98 + 24) = 4977LL;
            WdLogEvent5_WdAssertion(v98);
          }
          memset(v239, 0, sizeof(v239));
          v89 = 0;
          LODWORD(DeviceInterfaces) = -1071774970;
          do
          {
            if ( v89 >= 0x10 )
              break;
            if ( v239[34] )
            {
              v99 = WdLogNewEntry5_WdAssertion(v88, v5);
              *(_QWORD *)(v99 + 24) = 4989LL;
              WdLogEvent5_WdAssertion(v99);
            }
            memset(v239, 0, sizeof(v239));
            LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)(a2 + 8),
                                          *(_DWORD *)(a2 + 16),
                                          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v239[17],
                                          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v239[17] + 1,
                                          (__int64)&v239[32] + 4);
            if ( (int)DeviceInterfaces >= 0 )
            {
              v239[8] = *(_QWORD *)(a2 + 8);
              HIDWORD(v239[9]) = *(_DWORD *)(a2 + 16);
              HIDWORD(v239[2]) = 65537;
              LODWORD(v239[9]) = v89;
              LODWORD(v239[29]) = -13434880;
              BYTE1(v239[22]) = (v214 == 0 ? 2 : 0) | (v215[0] == 0);
              v239[6] = 0xCF00000000000LL;
              LODWORD(DeviceInterfaces) = BmlGetPathModalityForAdapter(v239, v239[8], 0LL, 1LL, 0);
              if ( (int)DeviceInterfaces >= 0 )
              {
                DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(&v239[10], a2 + 32);
                *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 56);
                *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 60);
              }
              BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v239);
              ++v89;
            }
          }
          while ( (_DWORD)DeviceInterfaces == -1071774970 );
          goto LABEL_7;
        }
        v58 = v57 - 1;
        if ( !v58 )
        {
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v206, (struct _LUID *)(a2 + 8));
          if ( !CVidSchSubmitData::Valid((CVidSchSubmitData *)&v206) )
          {
            v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60, v62);
            v92[3] = *(unsigned int *)(a2 + 8);
            v92[4] = *(int *)(a2 + 12);
            v92[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v92);
            goto LABEL_8;
          }
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v235, v206, 1);
          if ( DXGADAPTER::IsActive(v206) )
          {
            v66 = (struct _DEVICE_OBJECT *)*((_QWORD *)v206 + 24);
            if ( v66 )
            {
              DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v66);
              *(_QWORD *)&v225[1] = 0LL;
              v8 = DeviceAttachmentBaseRef;
              DeviceInterfaces = IoGetDeviceInterfaces(
                                   &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                                   DeviceAttachmentBaseRef,
                                   0,
                                   (PZZWSTR *)&v225[1]);
              ObfDereferenceObject(v8);
              if ( (int)DeviceInterfaces >= 0 )
              {
                wcsncpy_s((wchar_t *)(a2 + 20), 0x80uLL, *(const wchar_t **)&v225[1], 0xFFFFFFFFFFFFFFFFuLL);
                v71 = *(void **)&v225[1];
                *(_WORD *)(a2 + 22) = 92;
                ExFreePoolWithTag(v71, 0);
                v72 = (DXGADAPTERSTOPRESETLOCKSHARED *)v235;
LABEL_60:
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v72);
                goto LABEL_7;
              }
              v95 = WdLogNewEntry5_WdWarning(v69, v68, v70);
              *(_QWORD *)(v95 + 24) = v8;
              *(_QWORD *)(v95 + 32) = DeviceInterfaces;
              WdLogEvent5_WdWarning(v95);
              LODWORD(v8) = DeviceInterfaces;
            }
            else
            {
              v94 = WdLogNewEntry5_WdError(0LL, v63, v65);
              *(_QWORD *)(v94 + 24) = v206;
              WdLogEvent5_WdError(v94);
              LODWORD(v8) = -1073741275;
            }
          }
          else
          {
            v93 = WdLogNewEntry5_WdWarning(v64, v63, v65);
            LODWORD(v8) = -1073741130;
            *(_QWORD *)(v93 + 24) = v206;
            *(_QWORD *)(v93 + 32) = -1073741130LL;
            WdLogEvent5_WdWarning(v93);
          }
          v96 = (DXGADAPTERSTOPRESETLOCKSHARED *)v235;
LABEL_89:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v96);
          goto LABEL_8;
        }
        if ( v58 != 2 )
        {
LABEL_125:
          LODWORD(DeviceInterfaces) = -1073741811;
          goto LABEL_7;
        }
        if ( !a1 )
        {
          v91 = WdLogNewEntry5_WdAssertion(4294967277LL, v5);
          *(_QWORD *)(v91 + 24) = 5054LL;
          WdLogEvent5_WdAssertion(v91);
        }
        LightweightDeviceAndContext = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
      }
      else
      {
        if ( !a1 )
        {
          v100 = WdLogNewEntry5_WdAssertion(4294967277LL, v5);
          *(_QWORD *)(v100 + 24) = 5044LL;
          WdLogEvent5_WdAssertion(v100);
        }
        LightweightDeviceAndContext = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
      }
      goto LABEL_54;
    }
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v206, (struct _LUID *)(a2 + 8));
    if ( !CVidSchSubmitData::Valid((CVidSchSubmitData *)&v206) )
      goto LABEL_151;
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v209);
    v101 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v209, 0);
    v8 = (struct _DEVICE_OBJECT *)v101;
    if ( v101 < 0 )
    {
      v105 = WdLogNewEntry5_WdWarning(v103, v102, v104);
      *(_QWORD *)(v105 + 24) = v8;
      WdLogEvent5_WdWarning(v105);
LABEL_110:
      v121 = (DXGSESSIONMODECHANGELOCK *)&v209;
LABEL_200:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK(v121);
      goto LABEL_8;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v240, v206, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v240, 0xFFFFFFFFLL, 0LL) >= 0 )
    {
      if ( DXGADAPTER::IsDisplayAdapter(v206) )
      {
        v111 = v206;
        if ( *(_BYTE *)(*((_QWORD *)v206 + 319) + 234LL) )
        {
          if ( *(_DWORD *)a2 == 7 )
          {
            if ( !a1 )
            {
              v113 = WdLogNewEntry5_WdAssertion(v206, v110);
              *(_QWORD *)(v113 + 24) = 5133LL;
              WdLogEvent5_WdAssertion(v113);
              v111 = v206;
            }
            v114 = *(unsigned int *)(a2 + 16);
            *(_DWORD *)(a2 + 20) = 0;
            LODWORD(DeviceInterfaces) = MonitorIsMonitorVirtualModeDisabled(v111, v114, &v215[1]);
            if ( (int)DeviceInterfaces >= 0 )
              *(_DWORD *)(a2 + 20) = (v215[1] != 0) | *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
          }
          else
          {
            if ( a1 || *(_DWORD *)a2 != 8 )
            {
              v116 = WdLogNewEntry5_WdAssertion(v206, v110);
              *(_QWORD *)(v116 + 24) = 5150LL;
              WdLogEvent5_WdAssertion(v116);
              v111 = v206;
            }
            if ( (int)CheckGivenTargetIsPartOfCloneGroup(v111, *(_DWORD *)(a2 + 16), &v215[2]) >= 0 && v215[2] )
            {
              v120 = (_QWORD *)WdLogNewEntry5_WdWarning(v118, v117, v119);
              v120[3] = *((int *)v206 + 70);
              v120[4] = *((unsigned int *)v206 + 69);
              v120[5] = *(unsigned int *)(a2 + 16);
              WdLogEvent5_WdWarning(v120);
              LODWORD(v8) = -1073741649;
              goto LABEL_109;
            }
            LOBYTE(v119) = *(_BYTE *)(a2 + 20) & 1;
            LODWORD(DeviceInterfaces) = MonitorDisableMonitorVirtualModeSupport(
                                          v206,
                                          *(unsigned int *)(a2 + 16),
                                          v119,
                                          v238);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v240);
          v49 = (DXGSESSIONMODECHANGELOCK *)&v209;
          goto LABEL_35;
        }
      }
      v115 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, v110, v112);
      v115[3] = v206;
      v115[4] = *((int *)v206 + 70);
      v115[5] = *((unsigned int *)v206 + 69);
      WdLogEvent5_WdWarning(v115);
      LODWORD(v8) = -1073741637;
    }
    else
    {
      v109 = (_QWORD *)WdLogNewEntry5_WdWarning(v107, v106, v108);
      v109[3] = v206;
      v109[4] = *((int *)v206 + 70);
      v109[5] = *((unsigned int *)v206 + 69);
      WdLogEvent5_WdWarning(v109);
      LODWORD(v8) = -1073741811;
    }
LABEL_109:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v240);
    goto LABEL_110;
  }
  if ( v9 != -14 )
  {
    if ( v9 == -12 )
    {
      *(_DWORD *)(a2 + 20) = 0;
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v206, (struct _LUID *)(a2 + 8));
      if ( CVidSchSubmitData::Valid((CVidSchSubmitData *)&v206) )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v236, v206, 1);
        if ( DXGADAPTER::IsActive(v206) )
        {
          v77 = v206;
          *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v206 + 474) >> 2)) & 1;
          v78 = *(_DWORD *)(a2 + 20) ^ ((unsigned __int8)*(_DWORD *)(a2 + 20) ^ (unsigned __int8)(*((_DWORD *)v77 + 474) >> 2)) & 2;
          *(_DWORD *)(a2 + 20) = v78;
          v79 = v78 ^ ((unsigned __int8)v78 ^ (unsigned __int8)(*((_DWORD *)v77 + 474) >> 2)) & 4;
          *(_DWORD *)(a2 + 20) = v79;
          v80 = v79 ^ ((unsigned __int8)v79 ^ (unsigned __int8)(32 * *((_DWORD *)v77 + 474))) & 0x20;
          *(_DWORD *)(a2 + 20) = v80;
          v81 = v80 ^ ((unsigned __int8)v80 ^ (unsigned __int8)(8 * *((_DWORD *)v77 + 474))) & 0x10;
          v72 = (DXGADAPTERSTOPRESETLOCKSHARED *)v236;
          *(_DWORD *)(a2 + 20) = v81;
          goto LABEL_60;
        }
        v97 = WdLogNewEntry5_WdTrace(v76, v75);
        LODWORD(v8) = -1073741130;
        *(_QWORD *)(v97 + 24) = v206;
        *(_QWORD *)(v97 + 32) = -1073741130LL;
        v96 = (DXGADAPTERSTOPRESETLOCKSHARED *)v236;
        goto LABEL_89;
      }
      goto LABEL_151;
    }
    if ( v9 == -13 )
    {
      LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                    *(struct _LUID *)(a2 + 8),
                                    *(_DWORD *)(a2 + 16),
                                    &v223,
                                    &v224,
                                    (__int64)v225);
      if ( (int)DeviceInterfaces >= 0 )
      {
        v85 = (v215[3] != 0) | *(_DWORD *)(a2 + 32) & 0xFFFFFFFE;
        v86 = -(v216 != 0);
        *(_DWORD *)(a2 + 20) = v223;
        *(_DWORD *)(a2 + 24) = v224;
        v87 = v225[0];
        v5 = v86 & 2 | v85 & 0xFFFFFFFD;
        *(_DWORD *)(a2 + 32) = v5;
        *(_DWORD *)(a2 + 28) = v87;
        goto LABEL_7;
      }
      v127 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82, v84);
      v127[3] = *(int *)(a2 + 12);
      v127[4] = *(unsigned int *)(a2 + 8);
      v129 = *(unsigned int *)(a2 + 16);
      goto LABEL_135;
    }
    if ( v9 != -18 )
    {
      if ( v9 != -16 )
      {
        if ( v9 != -10 )
        {
          if ( v9 == -6 )
          {
            if ( a1 )
            {
              v125 = WdLogNewEntry5_WdAssertion(4294967277LL, v5);
              *(_QWORD *)(v125 + 24) = 5191LL;
              WdLogEvent5_WdAssertion(v125);
            }
            if ( g_OSTestSigningEnabled && !*(_DWORD *)(a2 + 20) )
            {
              *((_DWORD *)DXGGLOBAL::GetGlobal(v10, v5) + 246) = 0;
              goto LABEL_7;
            }
            v126 = *(unsigned int *)(a2 + 20);
            if ( (unsigned int)(v126 - 1) <= 3 )
            {
              v130 = ConvertDisplayConfigToDmmRotation(v126);
              *((_DWORD *)DXGGLOBAL::GetGlobal(v132, v131) + 246) = v130;
              goto LABEL_7;
            }
            LODWORD(DeviceInterfaces) = -1073741811;
            v127 = (_QWORD *)WdLogNewEntry5_WdError(v126, v5, v7);
            v128 = *(int *)(a2 + 20);
            v127[4] = -1073741811LL;
            goto LABEL_133;
          }
          if ( v9 == -5 )
          {
            if ( !a1 )
            {
              v123 = WdLogNewEntry5_WdAssertion(4294967277LL, v5);
              *(_QWORD *)(v123 + 24) = 5181LL;
              WdLogEvent5_WdAssertion(v123);
            }
            v124 = DXGGLOBAL::GetGlobal(v10, v5);
            *(_DWORD *)(a2 + 20) = ConvertDmmToDisplayConfigRotation(*((unsigned int *)v124 + 246));
            goto LABEL_7;
          }
          goto LABEL_125;
        }
LABEL_138:
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v206, (struct _LUID *)(a2 + 8));
        if ( CVidSchSubmitData::Valid((CVidSchSubmitData *)&v206) )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v241, v206, 0LL);
          if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v241, 0xFFFFFFFFLL, 0LL) >= 0 )
          {
            if ( !DXGADAPTER::IsIndirectDisplayDevice(v206) )
            {
              v139 = (_QWORD *)WdLogNewEntry5_WdWarning(v137, v136, v138);
              v139[3] = v206;
              v139[4] = *((int *)v206 + 70);
              v139[5] = *((unsigned int *)v206 + 69);
              WdLogEvent5_WdWarning(v139);
              LODWORD(v8) = -1073741637;
LABEL_150:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v241);
              goto LABEL_8;
            }
            if ( *(_DWORD *)a2 == -10 )
            {
              if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(
                          *((ADAPTER_DISPLAY **)v206 + 319),
                          *(_DWORD *)(a2 + 16),
                          (struct _LUID *)(a2 + 20)) >= 0 )
              {
LABEL_144:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v241);
                goto LABEL_7;
              }
            }
            else
            {
              if ( *(_DWORD *)a2 != 100 )
              {
                v142 = WdLogNewEntry5_WdAssertion(v137, v136);
                *(_QWORD *)(v142 + 24) = 5288LL;
                WdLogEvent5_WdAssertion(v142);
                goto LABEL_150;
              }
              v140 = *(_DWORD *)(a2 + 16);
              memset(v233, 0, 24);
              if ( (int)DXGADAPTER::GetVirtualMonitorInfo(v206, v140, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v233) >= 0 )
              {
                *(_DWORD *)(a2 + 20) = HIDWORD(v233[0]);
                goto LABEL_144;
              }
            }
          }
          v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v134, v133, v135);
          v141[3] = v206;
          v141[4] = *((int *)v206 + 70);
          v141[5] = *((unsigned int *)v206 + 69);
          WdLogEvent5_WdWarning(v141);
          goto LABEL_150;
        }
LABEL_151:
        v143 = WdLogNewEntry5_WdTrace(v74, v73);
        *(_QWORD *)(v143 + 24) = *(int *)(a2 + 12);
        LowPart = *(unsigned int *)(a2 + 8);
LABEL_193:
        *(_QWORD *)(v143 + 32) = LowPart;
        goto LABEL_8;
      }
      v151 = *(unsigned int *)(a2 + 16);
      v226 = *(struct _LUID *)(a2 + 8);
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v206, &v226);
      if ( !CVidSchSubmitData::Valid((CVidSchSubmitData *)&v206) )
      {
        v143 = WdLogNewEntry5_WdTrace(v153, v152);
        *(_QWORD *)(v143 + 24) = v226.HighPart;
        LowPart = v226.LowPart;
        goto LABEL_193;
      }
      DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v210);
      v154 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v210, 0);
      v8 = (struct _DEVICE_OBJECT *)v154;
      if ( v154 < 0 )
      {
        v158 = WdLogNewEntry5_WdError(v156, v155, v157);
        *(_QWORD *)(v158 + 24) = v8;
        WdLogEvent5_WdError(v158);
LABEL_191:
        v121 = (DXGSESSIONMODECHANGELOCK *)&v210;
        goto LABEL_200;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v242, v206, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(v242, 1LL) < 0 )
      {
        v162 = (_QWORD *)WdLogNewEntry5_WdError(v160, v159, v161);
        v162[3] = v206;
        v162[4] = *((int *)v206 + 70);
        v162[5] = *((unsigned int *)v206 + 69);
        WdLogEvent5_WdError(v162);
        LODWORD(v8) = -1073741811;
LABEL_190:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v242);
        goto LABEL_191;
      }
      if ( !DXGADAPTER::IsDisplayAdapter(v206) )
      {
        v166 = (_QWORD *)WdLogNewEntry5_WdWarning(v164, v163, v165);
        v166[3] = v206;
        v166[4] = *((int *)v206 + 70);
        v166[5] = *((unsigned int *)v206 + 69);
        WdLogEvent5_WdWarning(v166);
LABEL_165:
        LODWORD(v8) = -1073741637;
        goto LABEL_190;
      }
      if ( *(_DWORD *)(a2 + 64) && (*((int *)v206 + 546) < 9216 || (*((_DWORD *)v206 + 474) & 8) == 0) )
        goto LABEL_165;
      MonitorHandle = MonitorGetMonitorHandle(v206, v151, 1u, &DxgkDisplayConfigDeviceInfo, (__int64)&v218);
      DeviceInterfaces = MonitorHandle;
      if ( MonitorHandle < 0 )
        goto LABEL_178;
      v221 = 0;
      MonitorIsMonitorAndLinkHDRCapable(v218);
      if ( (v221 & 1) != 0 && *(_DWORD *)(a2 + 64) )
      {
        MonitorReleaseMonitorHandle(v206);
        goto LABEL_165;
      }
      v207 = 0;
      MonitorGetWideColorModeEnforced(v218, &v207);
      LOBYTE(v171) = *(_DWORD *)(a2 + 64) != 0;
      v172 = MonitorSetEnforceWideColorMode(v218, v171);
      DeviceInterfaces = v172;
      if ( v172 < 0 )
      {
        v180 = (_QWORD *)WdLogNewEntry5_WdError(v174, v173, v175);
        v180[3] = *((int *)v206 + 70);
        v180[4] = *((unsigned int *)v206 + 69);
        v180[5] = v151;
        v180[6] = DeviceInterfaces;
        WdLogEvent5_WdError(v180);
        goto LABEL_188;
      }
      if ( !v207 || *(_DWORD *)(a2 + 64) || *(_DWORD *)(a2 + 56) )
      {
        LODWORD(DeviceInterfaces) = MonitorSetAdvancedColorParams(
                                      (_DWORD)v218,
                                      (int)a2 + 20,
                                      (int)a2 + 28,
                                      (int)a2 + 36,
                                      a2 + 44,
                                      *(_DWORD *)(a2 + 52),
                                      *(_DWORD *)(a2 + 56),
                                      *(_DWORD *)(a2 + 60));
      }
      else
      {
        v176 = MonitorSetDefaultAdvancedColorParams(v218);
        DeviceInterfaces = v176;
        if ( v176 < 0 )
        {
LABEL_178:
          v177 = (_QWORD *)WdLogNewEntry5_WdError(v169, v168, v170);
          v177[3] = *((int *)v206 + 70);
          v177[4] = *((unsigned int *)v206 + 69);
          v177[5] = v151;
          v177[6] = DeviceInterfaces;
          WdLogEvent5_WdError(v177);
LABEL_189:
          LODWORD(v8) = DeviceInterfaces;
          goto LABEL_190;
        }
      }
      if ( (int)DeviceInterfaces <= -1 )
      {
        v178 = (_QWORD *)WdLogNewEntry5_WdError(v169, v168, v170);
        v178[3] = *((int *)v206 + 70);
        v178[4] = *((unsigned int *)v206 + 69);
        v178[5] = v151;
        v178[6] = (int)DeviceInterfaces;
        WdLogEvent5_WdError(v178);
        LOBYTE(v179) = v207;
        MonitorSetEnforceWideColorMode(v218, v179);
LABEL_188:
        MonitorReleaseMonitorHandle(v206);
        goto LABEL_189;
      }
      MonitorReleaseMonitorHandle(v206);
      if ( *(_DWORD *)(a2 + 64) == v207 )
      {
        if ( (_DWORD)DeviceInterfaces != 255 )
          LODWORD(DeviceInterfaces) = 255;
      }
      else
      {
        LODWORD(DeviceInterfaces) = 259;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v242);
      v49 = (DXGSESSIONMODECHANGELOCK *)&v210;
LABEL_35:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK(v49);
      goto LABEL_7;
    }
LABEL_15:
    v15 = *(_DWORD *)(a2 + 16);
    v227 = *(struct _LUID *)(a2 + 8);
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v206, &v227);
    if ( !CVidSchSubmitData::Valid((CVidSchSubmitData *)&v206) )
    {
      v143 = WdLogNewEntry5_WdTrace(v17, v16);
      *(_QWORD *)(v143 + 24) = v227.HighPart;
      LowPart = v227.LowPart;
      goto LABEL_193;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v211);
    v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v211, 0);
    v8 = (struct _DEVICE_OBJECT *)v18;
    if ( v18 < 0 )
    {
      v181 = WdLogNewEntry5_WdError(v20, v19, v21);
      *(_QWORD *)(v181 + 24) = v8;
      WdLogEvent5_WdError(v181);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v243, v206, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v243, 0xFFFFFFFFLL, 0LL) < 0 )
      {
        v182 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
        v182[3] = v206;
        v182[4] = *((int *)v206 + 70);
        v182[5] = *((unsigned int *)v206 + 69);
        WdLogEvent5_WdError(v182);
        LODWORD(v8) = -1073741811;
      }
      else if ( DXGADAPTER::IsDisplayAdapter(v206) )
      {
        v31 = v15;
        if ( (unsigned int)CheckGivenTargetIsPartOfCloneGroup(v206, v15, &v208) == -1073741275 )
        {
          v184 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
          v184[3] = *((int *)v206 + 70);
          v184[4] = *((unsigned int *)v206 + 69);
          v184[5] = v15;
          v184[6] = -1073741275LL;
          WdLogEvent5_WdWarning(v184);
          v208 = 0;
        }
        v32 = MonitorGetMonitorHandle(v206, v15, 0, &DxgkDisplayConfigDeviceInfo, (__int64)&v219);
        v36 = v32;
        if ( v32 >= 0 )
        {
          v37 = v219;
          if ( !v219 )
          {
            v186 = WdLogNewEntry5_WdAssertion(0LL, v33);
            *(_QWORD *)(v186 + 24) = 5701LL;
            WdLogEvent5_WdAssertion(v186);
            v37 = v219;
          }
          LODWORD(v217) = 0;
          IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v37);
          DeviceInterfaces = IsMonitorAndLinkHDRCapable;
          if ( IsMonitorAndLinkHDRCapable >= 0 )
          {
            IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v219);
            DeviceInterfaces = IsMonitorAndDriverWCGCapable;
            if ( IsMonitorAndDriverWCGCapable >= 0 )
            {
              v220.Value = 0;
              v43 = IsCurrentModeAdvancedColor(v206, v15, &v220, &v231);
              v46 = v43;
              if ( v208 && v43 )
              {
                v188 = WdLogNewEntry5_WdAssertion(v45, v44);
                *(_QWORD *)(v188 + 24) = 5742LL;
                WdLogEvent5_WdAssertion(v188);
              }
              v47 = *(_DWORD *)a2;
              if ( *(_DWORD *)a2 == 9 )
              {
                if ( !a1 )
                {
                  v189 = WdLogNewEntry5_WdAssertion(v45, v44);
                  *(_QWORD *)(v189 + 24) = 5752LL;
                  WdLogEvent5_WdAssertion(v189);
                }
                WideColorModeEnforced = MonitorGetWideColorModeEnforced(v219, &v212);
                DeviceInterfaces = WideColorModeEnforced;
                if ( WideColorModeEnforced >= 0 )
                {
                  if ( (v217 & 1) == 0 && !v213 || v208 )
                    v4 = 0;
                  v51.0 = v220.0;
                  *(_DWORD *)(a2 + 20) = (v212 != 0 ? 4 : 0) | (v46 != 0 ? 2 : 0) | v4 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 20) & 0xFFFFFFF8;
                  ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v51);
                  Value = v220.Value;
                  *(_DWORD *)(a2 + 28) = ColorDepthFromPickedWireFormat;
                  *(_DWORD *)(a2 + 24) = ConvertDmmToDisplayConfigColorEncoding(Value);
                  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 20) & 0xFFFFFFF7 | (*((_BYTE *)DXGGLOBAL::GetGlobal(v55, v54)
                                                                              + 304116) == 0
                                                                            ? 8
                                                                            : 0);
                  goto LABEL_34;
                }
                v212 = 0;
              }
              else
              {
                if ( v47 != 10 )
                {
                  if ( v47 == 11 )
                  {
                    if ( !a1 )
                    {
                      v192 = WdLogNewEntry5_WdAssertion(v45, v44);
                      *(_QWORD *)(v192 + 24) = 5828LL;
                      WdLogEvent5_WdAssertion(v192);
                    }
                    v48 = 1000;
                    v222 = 1000;
                    if ( v46 && (v217 & 1) != 0 )
                    {
                      SDRWhiteLevel = MonitorGetSDRWhiteLevel(v219, &v222);
                      DeviceInterfaces = SDRWhiteLevel;
                      if ( SDRWhiteLevel >= 0 )
                      {
                        v48 = v222;
                      }
                      else
                      {
                        v197 = (_QWORD *)WdLogNewEntry5_WdWarning(v195, v194, v196);
                        v197[3] = *((int *)v206 + 70);
                        v197[4] = *((unsigned int *)v206 + 69);
                        v197[5] = v31;
                        v197[6] = DeviceInterfaces;
                        WdLogEvent5_WdWarning(v197);
                        v48 = 3000;
                        LODWORD(DeviceInterfaces) = 0;
                      }
                    }
                    *(_DWORD *)(a2 + 20) = v48;
                    goto LABEL_34;
                  }
                  if ( v47 != -18 )
                  {
                    if ( v47 == -23 )
                    {
                      v204 = *(_QWORD *)(a2 + 40);
                      v205 = *(unsigned int *)(a2 + 36);
                      v234 = *(_OWORD *)(a2 + 20);
                      LODWORD(DeviceInterfaces) = MonitorSetAppOverride(v219, &v234, v205, v204);
                    }
                    goto LABEL_34;
                  }
                  if ( a1 )
                  {
                    v198 = WdLogNewEntry5_WdAssertion(v45, v44);
                    *(_QWORD *)(v198 + 24) = 5858LL;
                    WdLogEvent5_WdAssertion(v198);
                  }
                  if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 1000) > 0x1388 )
                  {
                    LODWORD(DeviceInterfaces) = -1073741811;
                  }
                  else
                  {
                    if ( v46 && (v217 & 1) != 0 )
                    {
                      v199 = MonitorSetSDRWhiteLevel(v219);
                      DeviceInterfaces = v199;
                      if ( v199 < 0 )
                      {
                        v203 = (_QWORD *)WdLogNewEntry5_WdError(v201, v200, v202);
                        v203[3] = *((int *)v206 + 70);
                        v203[4] = *((unsigned int *)v206 + 69);
                        v203[5] = v31;
                        v203[6] = DeviceInterfaces;
                        WdLogEvent5_WdError(v203);
                        goto LABEL_236;
                      }
                      if ( v199 )
                      {
                        if ( v199 == 255 )
                          LODWORD(DeviceInterfaces) = 0;
                        goto LABEL_236;
                      }
                      if ( *(_BYTE *)(a2 + 24) )
                      {
                        TriggerSDRWhiteLevelChangedWnf();
                        memset(v237, 0, sizeof(v237));
                        v237[0] = 13;
                        DXGADAPTER::IsAddapterSessionized(v206, 0LL, 0LL, &v232);
                        SMgrGdiCallout(v237, v232, 0LL, 0LL, 0LL, 0LL);
                        goto LABEL_236;
                      }
LABEL_34:
                      MonitorReleaseMonitorHandle(v206);
                      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v243);
                      v49 = (DXGSESSIONMODECHANGELOCK *)&v211;
                      goto LABEL_35;
                    }
                    LODWORD(DeviceInterfaces) = -1073741637;
                  }
LABEL_236:
                  if ( *(_BYTE *)(a2 + 24) )
                    DxgkNotifyDisplayChange(0LL);
                  goto LABEL_34;
                }
                if ( a1 )
                {
                  v190 = WdLogNewEntry5_WdAssertion(v45, v44);
                  *(_QWORD *)(v190 + 24) = 5782LL;
                  WdLogEvent5_WdAssertion(v190);
                }
                if ( (v217 & 1) == 0 && !v213 || v208 )
                {
                  LODWORD(DeviceInterfaces) = -1073741637;
                  goto LABEL_34;
                }
                LOBYTE(v44) = *(_BYTE *)(a2 + 20) & 1;
                v191 = MonitorEnableDisableAdvancedColor(v219, v44);
                DeviceInterfaces = v191;
                if ( v191 >= 0 )
                {
                  if ( v191 == 255 && (*(_BYTE *)(a2 + 20) & 1) != v46 )
                    LODWORD(DeviceInterfaces) = 0;
                  goto LABEL_34;
                }
              }
            }
          }
          v187 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
          v187[3] = *((int *)v206 + 70);
          v187[4] = *((unsigned int *)v206 + 69);
          v187[5] = v31;
          v187[6] = DeviceInterfaces;
          WdLogEvent5_WdError(v187);
          goto LABEL_34;
        }
        v185 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33, v35);
        v185[3] = *((int *)v206 + 70);
        v185[4] = *((unsigned int *)v206 + 69);
        v185[5] = v15;
        v185[6] = v36;
        WdLogEvent5_WdError(v185);
        LODWORD(v8) = v36;
      }
      else
      {
        v183 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
        v183[3] = v206;
        v183[4] = *((int *)v206 + 70);
        v183[5] = *((unsigned int *)v206 + 69);
        WdLogEvent5_WdWarning(v183);
        LODWORD(v8) = -1073741637;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v243);
    }
    v121 = (DXGSESSIONMODECHANGELOCK *)&v211;
    goto LABEL_200;
  }
  v12 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(4294967277LL, v5) + 1016);
  *(_DWORD *)(a2 + 24) = DXGADAPTERSOURCEHASH::GetHashBitCount(v12);
  *(_DWORD *)(a2 + 32) = DXGADAPTERSOURCEHASH::GetHashBitMask(v12);
  *(_DWORD *)(a2 + 28) = DXGADAPTERSOURCEHASH::GetHashBitShift(v12);
  v13 = *(_DWORD *)(a2 + 36);
  if ( (v13 & 2) == 0 )
  {
    v145 = (unsigned int *)(a2 + 20);
    v146 = (unsigned int *)(a2 + 16);
    if ( (v13 & 1) != 0 )
    {
      LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                    v12,
                                    *v145,
                                    (struct _LUID *)(a2 + 8),
                                    (unsigned int *)(a2 + 16));
      if ( (int)DeviceInterfaces >= 0 )
        goto LABEL_7;
      v127 = (_QWORD *)WdLogNewEntry5_WdError(v147, v5, v148);
      v128 = *v145;
LABEL_133:
      v127[3] = v128;
LABEL_136:
      WdLogEvent5_WdError(v127);
      goto LABEL_7;
    }
    LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                  v12,
                                  (const struct _LUID *)(a2 + 8),
                                  *v146,
                                  (unsigned int *)(a2 + 20));
    if ( (int)DeviceInterfaces >= 0 )
      goto LABEL_7;
    v127 = (_QWORD *)WdLogNewEntry5_WdError(v149, v5, v150);
    v127[3] = *(int *)(a2 + 12);
    v127[4] = *(unsigned int *)(a2 + 8);
    v129 = *v146;
LABEL_135:
    v127[5] = v129;
    goto LABEL_136;
  }
LABEL_7:
  LODWORD(v8) = DeviceInterfaces;
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v228, v5);
  if ( v230 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v228);
  if ( v206 )
    DXGADAPTER::ReleaseReferenceNoTracking(v206);
  return (unsigned int)v8;
}
