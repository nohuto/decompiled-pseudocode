/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertDisplayConfigToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4DISPLAYCONFIG_ROTATION@@W41@@Z @ 0x1C0001CFC (-ConvertDisplayConfigToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4DISPLAYCONFIG_.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000413C (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0004190 (-GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C0004F34 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000E160 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000E62C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000F724 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0010708 (-IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00121E4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0012320 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C001281C (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00128E4 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGADAPTERREFERENCE@@QEAA@XZ @ 0x1C001A340 (--1DXGADAPTERREFERENCE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00BB554 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00BD370 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00BD404 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00BD660 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?ConvertDmmToDisplayConfigRotation@@YA?AW4DISPLAYCONFIG_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C00BD6D0 (-ConvertDmmToDisplayConfigRotation@@YA-AW4DISPLAYCONFIG_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_.c)
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00BEC18 (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00BEDE8 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C2320 (DxgkIsVirtualizationDisabledForTarget.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00C2C0C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00C2EBC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C9138 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00D5954 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetWideColorModeEnforced @ 0x1C01365D0 (MonitorGetWideColorModeEnforced.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C0138914 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C01BDAB4 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C01C215C (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C020F698 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C020F93C (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?TriggerSDRWhiteLevelChangedWnf@@YAJXZ @ 0x1C023B660 (-TriggerSDRWhiteLevelChangedWnf@@YAJXZ.c)
 *     DxgkNotifyDisplayChange @ 0x1C0242B84 (DxgkNotifyDisplayChange.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C029021C (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C0290438 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C0290AD8 (MonitorGetSDRWhiteLevel.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0290BB0 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorSetAdvancedColorParams @ 0x1C0291664 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02918B0 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C02919D8 (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C0291ABC (MonitorSetSDRWhiteLevel.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, __int64 a2)
{
  int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 DeviceInterfaces; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  int TargetBaseType; // eax
  struct _LUID v17; // rdx
  struct DXGADAPTER *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  struct _DEVICE_OBJECT *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  PZZWSTR v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rax
  DXGGLOBAL *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct DXGADAPTER *v44; // r14
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  _QWORD *v65; // rax
  DXGSESSIONMODECHANGELOCK *v66; // rcx
  struct DXGGLOBAL *v67; // rax
  struct _LUID v68; // rbx
  __int64 v69; // r13
  DXGGLOBAL *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  struct DXGADAPTER *v75; // r14
  __int64 v76; // rax
  __int64 LowPart; // rcx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // ebx
  __int64 v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  _QWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  _QWORD *v91; // rax
  int v92; // eax
  __int64 v93; // rcx
  _QWORD *v94; // rax
  struct HDXGMONITOR__ *v95; // rcx
  __int64 v96; // rax
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v98; // rcx
  _QWORD *v99; // rax
  int IsMonitorAndDriverWCGCapable; // eax
  unsigned __int8 v101; // al
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  unsigned int v105; // eax
  __int64 v106; // rax
  int WideColorModeEnforced; // eax
  __int64 Value; // rcx
  int ColorDepthFromPickedWireFormat; // eax
  unsigned int v110; // ecx
  __int64 v111; // rcx
  __int64 v112; // rax
  int v113; // eax
  __int64 v114; // rax
  int v115; // eax
  int SDRWhiteLevel; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  _QWORD *v120; // rax
  __int64 v121; // rax
  int v122; // eax
  __int64 v123; // rcx
  _QWORD *v124; // rax
  bool v125; // zf
  __int64 v126; // rdx
  __int64 v127; // rax
  struct DXGGLOBAL *v128; // rax
  __int64 v129; // rax
  __int64 v130; // rcx
  _QWORD *v131; // rax
  __int64 v132; // rcx
  int v133; // ebx
  __int64 v134; // rcx
  DXGGLOBAL *v135; // rax
  struct DXGADAPTER *v136; // rax
  int v137; // ebx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  _QWORD *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  _QWORD *v145; // rax
  unsigned int v146; // edx
  __int64 v147; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v149; // rax
  DXGADAPTER *v150; // rbx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rax
  int v156; // ecx
  __int64 v157; // rcx
  unsigned int v158; // edx
  int v159; // ecx
  int v160; // eax
  __int64 v161; // rcx
  DXGADAPTERSOURCEHASH *v162; // rbx
  int v163; // eax
  unsigned int *v164; // r14
  unsigned int *v165; // r12
  __int64 v166; // rcx
  __int64 v167; // rcx
  __int64 v168; // r12
  DXGGLOBAL *v169; // rax
  struct DXGADAPTER *v170; // r14
  int v171; // eax
  __int64 v172; // rcx
  __int64 v173; // rax
  int v174; // ebx
  __int64 v175; // rcx
  _QWORD *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  _QWORD *v180; // rax
  int MonitorHandle; // eax
  __int64 v182; // rcx
  __int64 v183; // rbx
  _QWORD *v184; // rax
  __int64 v185; // rdx
  int v186; // eax
  __int64 v187; // rcx
  int v188; // eax
  _QWORD *v189; // rax
  __int64 v190; // rdx
  _QWORD *v191; // rax
  unsigned __int8 v193; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v194; // [rsp+59h] [rbp-AFh] BYREF
  char v195; // [rsp+5Ah] [rbp-AEh] BYREF
  char v196; // [rsp+5Bh] [rbp-ADh] BYREF
  char v197; // [rsp+5Ch] [rbp-ACh] BYREF
  char v198; // [rsp+5Dh] [rbp-ABh] BYREF
  char v199; // [rsp+5Eh] [rbp-AAh]
  char v200; // [rsp+5Fh] [rbp-A9h]
  unsigned __int8 v201[4]; // [rsp+60h] [rbp-A8h] BYREF
  int v202; // [rsp+64h] [rbp-A4h]
  int v203; // [rsp+68h] [rbp-A0h]
  int v204; // [rsp+6Ch] [rbp-9Ch]
  struct HDXGMONITOR__ *v205; // [rsp+70h] [rbp-98h] BYREF
  struct HDXGMONITOR__ *v206; // [rsp+78h] [rbp-90h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v207; // [rsp+80h] [rbp-88h] BYREF
  int v208; // [rsp+84h] [rbp-84h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v209; // [rsp+88h] [rbp-80h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v210; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v211; // [rsp+90h] [rbp-78h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v213; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v214; // [rsp+A8h] [rbp-60h] BYREF
  int v215; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v216; // [rsp+B8h] [rbp-50h]
  char v217; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v218; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v219; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v220; // [rsp+D8h] [rbp-30h] BYREF
  DXGADAPTER *v221[2]; // [rsp+E0h] [rbp-28h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v222; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v223[3]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v224[24]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v225[24]; // [rsp+128h] [rbp+20h] BYREF
  _DWORD v226[10]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v227[80]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v228[80]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v229[80]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v230[10]; // [rsp+258h] [rbp+150h] BYREF
  _QWORD v231[10]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _QWORD v232[40]; // [rsp+2F8h] [rbp+1F0h] BYREF

  memset(v231, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v231[1]);
  v215 = -1;
  v4 = 1;
  v231[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v231[6]) = -1;
  LODWORD(v231[3]) = 39;
  v216 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v217 = 1;
    v215 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerEnter, 0LL, 2184);
  }
  else
  {
    v217 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v215, 2184);
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 4868LL;
    WdLogEvent5_WdAssertion(v8);
LABEL_75:
    LODWORD(DeviceInterfaces) = -1073741811;
    goto LABEL_234;
  }
  v9 = *(_DWORD *)a2;
  v10 = 4294967278LL;
  LODWORD(DeviceInterfaces) = 0;
  if ( *(_DWORD *)a2 > 0xFFFFFFEE )
  {
    if ( v9 != -16 )
    {
      switch ( v9 )
      {
        case 0xFFFFFFF2:
          v162 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(4294967278LL) + 1048);
          *(_DWORD *)(a2 + 24) = DXGADAPTERSOURCEHASH::GetHashBitCount(v162);
          *(_DWORD *)(a2 + 32) = DXGADAPTERSOURCEHASH::GetHashBitMask(v162);
          *(_DWORD *)(a2 + 28) = DXGADAPTERSOURCEHASH::GetHashBitShift(v162);
          v163 = *(_DWORD *)(a2 + 36);
          if ( (v163 & 2) != 0 )
            goto LABEL_234;
          v164 = (unsigned int *)(a2 + 20);
          v165 = (unsigned int *)(a2 + 16);
          if ( (v163 & 1) != 0 )
          {
            LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                          v162,
                                          *v164,
                                          (struct _LUID *)(a2 + 8),
                                          (unsigned int *)(a2 + 16));
            if ( (int)DeviceInterfaces >= 0 )
              goto LABEL_234;
            v131 = (_QWORD *)WdLogNewEntry5_WdError(v166);
            v132 = *v164;
LABEL_164:
            v131[3] = v132;
LABEL_165:
            WdLogEvent5_WdError(v131);
            goto LABEL_234;
          }
          LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                        v162,
                                        (const struct _LUID *)(a2 + 8),
                                        *v165,
                                        (unsigned int *)(a2 + 20));
          if ( (int)DeviceInterfaces >= 0 )
            goto LABEL_234;
          v131 = (_QWORD *)WdLogNewEntry5_WdError(v167);
          v131[3] = *(int *)(a2 + 12);
          v131[4] = *(unsigned int *)(a2 + 8);
          v161 = *v165;
          break;
        case 0xFFFFFFF3:
          LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                        *(struct _LUID *)(a2 + 8),
                                        *(_DWORD *)(a2 + 16),
                                        &v209,
                                        &v210,
                                        (__int64)&v211);
          if ( (int)DeviceInterfaces >= 0 )
          {
            v158 = (v201[3] != 0) | *(_DWORD *)(a2 + 32) & 0xFFFFFFFE;
            v159 = -((_BYTE)v202 != 0);
            *(_DWORD *)(a2 + 20) = v209;
            *(_DWORD *)(a2 + 24) = v210;
            v160 = v211;
            *(_DWORD *)(a2 + 32) = v159 & 2 | v158 & 0xFFFFFFFD;
            *(_DWORD *)(a2 + 28) = v160;
            goto LABEL_234;
          }
          v131 = (_QWORD *)WdLogNewEntry5_WdError(v157);
          v131[3] = *(int *)(a2 + 12);
          v131[4] = *(unsigned int *)(a2 + 8);
          v161 = *(unsigned int *)(a2 + 16);
          break;
        case 0xFFFFFFF4:
          *(_DWORD *)(a2 + 20) = 0;
          Global = DXGGLOBAL::GetGlobal(4294967278LL);
          v149 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a2 + 8), &v214);
          v150 = v149;
          if ( v149 )
          {
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v225, v149, 1);
            if ( DXGADAPTER::IsActive(v150) )
            {
              *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v150 + 468) >> 2)) & 1;
              v156 = *(_DWORD *)(a2 + 20) ^ (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v150 + 468) >> 2)) & 2;
              *(_DWORD *)(a2 + 20) = v156;
              *(_DWORD *)(a2 + 20) = v156 ^ ((unsigned __int8)v156 ^ (unsigned __int8)(*((_DWORD *)v150 + 468) >> 2)) & 4;
              DXGADAPTER::ReleaseReference(v150);
            }
            else
            {
              DXGADAPTER::ReleaseReference(v150);
              v155 = WdLogNewEntry5_WdTrace(v152, v151, v153, v154);
              LODWORD(DeviceInterfaces) = -1073741130;
              *(_QWORD *)(v155 + 24) = v150;
              *(_QWORD *)(v155 + 32) = -1073741130LL;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v225);
            goto LABEL_234;
          }
          goto LABEL_183;
        case 0xFFFFFFF6:
LABEL_167:
          v135 = DXGGLOBAL::GetGlobal(4294967278LL);
          v136 = DXGGLOBAL::ReferenceAdapterByLuid(v135, *(struct _LUID *)(a2 + 8), &v219);
          DeviceInterfaces = (__int64)v136;
          if ( v136 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v229, v136, 0LL);
            v137 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v229);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)DeviceInterfaces);
            if ( v137 < 0 )
              goto LABEL_169;
            if ( DXGADAPTER::IsIndirectDisplayDevice((DXGADAPTER *)DeviceInterfaces) )
            {
              if ( *(_DWORD *)a2 == -10 )
              {
                if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(
                            *(ADAPTER_DISPLAY **)(DeviceInterfaces + 2520),
                            *(_DWORD *)(a2 + 16),
                            (struct _LUID *)(a2 + 20)) < 0 )
                  goto LABEL_169;
              }
              else
              {
                if ( *(_DWORD *)a2 != 100 )
                {
                  v147 = WdLogNewEntry5_WdAssertion(v143);
                  *(_QWORD *)(v147 + 24) = 5271LL;
                  WdLogEvent5_WdAssertion(v147);
                  goto LABEL_180;
                }
                v146 = *(_DWORD *)(a2 + 16);
                memset(v223, 0, sizeof(v223));
                if ( (int)DXGADAPTER::GetVirtualMonitorInfo(
                            (DXGADAPTER *)DeviceInterfaces,
                            v146,
                            (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v223) < 0 )
                {
LABEL_169:
                  v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v139, v138, v140);
                  v141[3] = DeviceInterfaces;
                  v141[4] = *(int *)(DeviceInterfaces + 280);
                  v141[5] = *(unsigned int *)(DeviceInterfaces + 276);
                  WdLogEvent5_WdWarning(v141);
LABEL_180:
                  LODWORD(DeviceInterfaces) = -1073741811;
                  goto LABEL_181;
                }
                *(_DWORD *)(a2 + 20) = HIDWORD(v223[0]);
              }
              LODWORD(DeviceInterfaces) = 0;
            }
            else
            {
              v145 = (_QWORD *)WdLogNewEntry5_WdWarning(v143, v142, v144);
              v145[3] = DeviceInterfaces;
              v145[4] = *(int *)(DeviceInterfaces + 280);
              v145[5] = *(unsigned int *)(DeviceInterfaces + 276);
              WdLogEvent5_WdWarning(v145);
              LODWORD(DeviceInterfaces) = -1073741637;
            }
LABEL_181:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v229);
            goto LABEL_234;
          }
LABEL_183:
          v76 = WdLogNewEntry5_WdTrace(v41, v40, v42, v43);
          *(_QWORD *)(v76 + 24) = *(int *)(a2 + 12);
          LowPart = *(unsigned int *)(a2 + 8);
          goto LABEL_74;
        case 0xFFFFFFFA:
          if ( a1 )
          {
            v129 = WdLogNewEntry5_WdAssertion(4294967278LL);
            *(_QWORD *)(v129 + 24) = 5172LL;
            WdLogEvent5_WdAssertion(v129);
          }
          if ( g_OSTestSigningEnabled && !*(_DWORD *)(a2 + 20) )
          {
            *((_DWORD *)DXGGLOBAL::GetGlobal(v10) + 254) = 0;
            goto LABEL_234;
          }
          v130 = *(unsigned int *)(a2 + 20);
          if ( (unsigned int)(v130 - 1) <= 3 )
          {
            v133 = ConvertDisplayConfigToDmmRotation(v130);
            *((_DWORD *)DXGGLOBAL::GetGlobal(v134) + 254) = v133;
            goto LABEL_234;
          }
          LODWORD(DeviceInterfaces) = -1073741811;
          v131 = (_QWORD *)WdLogNewEntry5_WdError(v130);
          v132 = *(int *)(a2 + 20);
          v131[4] = -1073741811LL;
          goto LABEL_164;
        case 0xFFFFFFFB:
          if ( !a1 )
          {
            v127 = WdLogNewEntry5_WdAssertion(4294967278LL);
            *(_QWORD *)(v127 + 24) = 5162LL;
            WdLogEvent5_WdAssertion(v127);
          }
          v128 = DXGGLOBAL::GetGlobal(v10);
          *(_DWORD *)(a2 + 20) = ConvertDmmToDisplayConfigRotation(*((_DWORD *)v128 + 254));
          goto LABEL_234;
        default:
          goto LABEL_75;
      }
      v131[5] = v161;
      goto LABEL_165;
    }
    v68 = *(struct _LUID *)(a2 + 8);
    v168 = *(unsigned int *)(a2 + 16);
    v169 = DXGGLOBAL::GetGlobal(4294967278LL);
    v170 = DXGGLOBAL::ReferenceAdapterByLuid(v169, v68, &v220);
    if ( !v170 )
      goto LABEL_73;
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v197);
    v171 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v197, 0);
    DeviceInterfaces = v171;
    if ( v171 < 0 )
    {
      v173 = WdLogNewEntry5_WdError(v172);
      *(_QWORD *)(v173 + 24) = DeviceInterfaces;
      WdLogEvent5_WdError(v173);
LABEL_232:
      v66 = (DXGSESSIONMODECHANGELOCK *)&v197;
      goto LABEL_233;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v230, v170, 0LL);
    v174 = COREADAPTERACCESS::AcquireExclusive(v230, 1LL);
    DXGADAPTER::ReleaseReference(v170);
    if ( v174 < 0 )
    {
      v176 = (_QWORD *)WdLogNewEntry5_WdError(v175);
      v176[3] = v170;
      v176[4] = *((int *)v170 + 70);
      v176[5] = *((unsigned int *)v170 + 69);
      WdLogEvent5_WdError(v176);
      LODWORD(DeviceInterfaces) = -1073741811;
LABEL_231:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v230);
      goto LABEL_232;
    }
    if ( !DXGADAPTER::IsDisplayAdapter(v170) )
    {
      v180 = (_QWORD *)WdLogNewEntry5_WdWarning(v178, v177, v179);
      v180[3] = v170;
      v180[4] = *((int *)v170 + 70);
      v180[5] = *((unsigned int *)v170 + 69);
      WdLogEvent5_WdWarning(v180);
LABEL_213:
      LODWORD(DeviceInterfaces) = -1073741637;
      goto LABEL_231;
    }
    if ( *(_DWORD *)(a2 + 64) && (*((int *)v170 + 540) < 9216 || (*((_DWORD *)v170 + 468) & 8) == 0) )
      goto LABEL_213;
    MonitorHandle = MonitorGetMonitorHandle(v170, v168, 1u, &DxgkDisplayConfigDeviceInfo, (__int64)&v205);
    v183 = MonitorHandle;
    if ( MonitorHandle < 0 )
      goto LABEL_209;
    v204 = 0;
    MonitorIsMonitorAndLinkHDRCapable(v205);
    if ( (v204 & 1) != 0 && *(_DWORD *)(a2 + 64) )
    {
      MonitorReleaseMonitorHandle(v170);
      goto LABEL_213;
    }
    v193 = 0;
    MonitorGetWideColorModeEnforced(v205, &v193);
    LOBYTE(v185) = *(_DWORD *)(a2 + 64) != 0;
    v186 = MonitorSetEnforceWideColorMode(v205, v185);
    v183 = v186;
    if ( v186 < 0 )
    {
      v191 = (_QWORD *)WdLogNewEntry5_WdError(v187);
      v191[3] = *((int *)v170 + 70);
      v191[4] = *((unsigned int *)v170 + 69);
      v191[5] = v168;
      v191[6] = v183;
      WdLogEvent5_WdError(v191);
    }
    else
    {
      if ( !v193 || *(_DWORD *)(a2 + 64) || *(_DWORD *)(a2 + 56) )
      {
        LODWORD(v183) = MonitorSetAdvancedColorParams(
                          (_DWORD)v205,
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
        v188 = MonitorSetDefaultAdvancedColorParams(v205);
        v183 = v188;
        if ( v188 < 0 )
        {
LABEL_209:
          v184 = (_QWORD *)WdLogNewEntry5_WdError(v182);
          v184[3] = *((int *)v170 + 70);
          v184[4] = *((unsigned int *)v170 + 69);
          v184[5] = v168;
          v184[6] = v183;
          WdLogEvent5_WdError(v184);
          goto LABEL_230;
        }
      }
      if ( (int)v183 > -1 )
      {
        MonitorReleaseMonitorHandle(v170);
        if ( *(_DWORD *)(a2 + 64) != v193 )
        {
          LODWORD(DeviceInterfaces) = 259;
          goto LABEL_231;
        }
        if ( (_DWORD)v183 != 255 )
          LODWORD(v183) = 255;
LABEL_230:
        LODWORD(DeviceInterfaces) = v183;
        goto LABEL_231;
      }
      v189 = (_QWORD *)WdLogNewEntry5_WdError(v182);
      v189[3] = *((int *)v170 + 70);
      v189[4] = *((unsigned int *)v170 + 69);
      v189[6] = (int)v183;
      v189[5] = v168;
      WdLogEvent5_WdError(v189);
      LOBYTE(v190) = v193;
      MonitorSetEnforceWideColorMode(v205, v190);
    }
    MonitorReleaseMonitorHandle(v170);
    goto LABEL_230;
  }
  if ( v9 == -18 )
    goto LABEL_72;
  if ( v9 > 8 )
  {
    if ( v9 > 0xB )
    {
      if ( v9 != 100 )
      {
        if ( v9 != -19 )
          goto LABEL_75;
        v67 = DXGGLOBAL::GetGlobal(4294967278LL);
        TargetBaseType = DXGGLOBAL::IterateAdaptersWithCallback(v67, SendColorimetricControlToDriverCallback, a2, 4LL);
        goto LABEL_45;
      }
      goto LABEL_167;
    }
LABEL_72:
    v68 = *(struct _LUID *)(a2 + 8);
    v69 = *(unsigned int *)(a2 + 16);
    v70 = DXGGLOBAL::GetGlobal(4294967278LL);
    v75 = DXGGLOBAL::ReferenceAdapterByLuid(v70, v68, &v213);
    if ( !v75 )
    {
LABEL_73:
      v76 = WdLogNewEntry5_WdTrace(v72, v71, v73, v74);
      *(_QWORD *)(v76 + 24) = v68.HighPart;
      LowPart = v68.LowPart;
LABEL_74:
      *(_QWORD *)(v76 + 32) = LowPart;
      goto LABEL_75;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v196);
    v78 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v196, 0);
    DeviceInterfaces = v78;
    if ( v78 < 0 )
    {
      DXGADAPTER::ReleaseReference(v75);
      v80 = WdLogNewEntry5_WdError(v79);
      *(_QWORD *)(v80 + 24) = DeviceInterfaces;
      WdLogEvent5_WdError(v80);
LABEL_87:
      v66 = (DXGSESSIONMODECHANGELOCK *)&v196;
LABEL_233:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK(v66);
      goto LABEL_234;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v228, v75, 0LL);
    v81 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v228);
    DXGADAPTER::ReleaseReference(v75);
    if ( v81 < 0 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdError(v82);
      v83[3] = v75;
      v83[4] = *((int *)v75 + 70);
      v83[5] = *((unsigned int *)v75 + 69);
      WdLogEvent5_WdError(v83);
      LODWORD(DeviceInterfaces) = -1073741811;
LABEL_86:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v228);
      goto LABEL_87;
    }
    if ( !DXGADAPTER::IsDisplayAdapter(v75) )
    {
      v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v85, v84, v86);
      v87[3] = v75;
      v87[4] = *((int *)v75 + 70);
      v87[5] = *((unsigned int *)v75 + 69);
      WdLogEvent5_WdWarning(v87);
      LODWORD(DeviceInterfaces) = -1073741637;
      goto LABEL_86;
    }
    if ( (unsigned int)CheckGivenTargetIsPartOfCloneGroup((ADAPTER_DISPLAY **)v75, v69, &v194) == -1073741275 )
    {
      v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v88, v90);
      v91[3] = *((int *)v75 + 70);
      v91[4] = *((unsigned int *)v75 + 69);
      v91[5] = v69;
      v91[6] = -1073741275LL;
      WdLogEvent5_WdWarning(v91);
      v194 = 0;
    }
    v92 = MonitorGetMonitorHandle(v75, v69, 0, &DxgkDisplayConfigDeviceInfo, (__int64)&v206);
    DeviceInterfaces = v92;
    if ( v92 < 0 )
    {
      v94 = (_QWORD *)WdLogNewEntry5_WdError(v93);
      v94[3] = *((int *)v75 + 70);
      v94[4] = *((unsigned int *)v75 + 69);
      v94[5] = v69;
      v94[6] = DeviceInterfaces;
      WdLogEvent5_WdError(v94);
      goto LABEL_86;
    }
    v95 = v206;
    if ( !v206 )
    {
      v96 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v96 + 24) = 5691LL;
      WdLogEvent5_WdAssertion(v96);
      v95 = v206;
    }
    v203 = 0;
    IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v95);
    DeviceInterfaces = IsMonitorAndLinkHDRCapable;
    if ( IsMonitorAndLinkHDRCapable >= 0 )
    {
      IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v206);
      DeviceInterfaces = IsMonitorAndDriverWCGCapable;
      if ( IsMonitorAndDriverWCGCapable >= 0 )
      {
        v101 = IsCurrentModeAdvancedColor((ADAPTER_DISPLAY **)v75, v69, &v207, &v222);
        v193 = v101;
        if ( v194 && v101 )
        {
          v104 = WdLogNewEntry5_WdAssertion(v103);
          *(_QWORD *)(v104 + 24) = 5732LL;
          WdLogEvent5_WdAssertion(v104);
        }
        v105 = *(_DWORD *)a2;
        if ( *(_DWORD *)a2 == 9 )
        {
          if ( !a1 )
          {
            v106 = WdLogNewEntry5_WdAssertion(v103);
            *(_QWORD *)(v106 + 24) = 5742LL;
            WdLogEvent5_WdAssertion(v106);
          }
          WideColorModeEnforced = MonitorGetWideColorModeEnforced(v206, &v198);
          DeviceInterfaces = WideColorModeEnforced;
          if ( WideColorModeEnforced >= 0 )
          {
            if ( (v203 & 1) == 0 && !v199 || v194 )
              v4 = 0;
            Value = v207.Value;
            *(_DWORD *)(a2 + 20) = (v198 != 0 ? 4 : 0) | (v193 != 0 ? 2 : 0) | v4 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 20) & 0xFFFFFFF8;
            ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(Value);
            v110 = v207.Value;
            *(_DWORD *)(a2 + 28) = ColorDepthFromPickedWireFormat;
            *(_DWORD *)(a2 + 24) = ConvertDmmToDisplayConfigColorEncoding(v110);
            *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 20) & 0xFFFFFFF7 | (*((_BYTE *)DXGGLOBAL::GetGlobal(v111) + 20444) == 0
                                                                      ? 8
                                                                      : 0);
            goto LABEL_146;
          }
          v198 = 0;
        }
        else
        {
          if ( v105 != 10 )
          {
            if ( v105 == 11 )
            {
              if ( !a1 )
              {
                v114 = WdLogNewEntry5_WdAssertion(v103);
                *(_QWORD *)(v114 + 24) = 5818LL;
                WdLogEvent5_WdAssertion(v114);
              }
              v115 = 1000;
              v208 = 1000;
              if ( v193 && (v203 & 1) != 0 )
              {
                SDRWhiteLevel = MonitorGetSDRWhiteLevel(v206, &v208);
                DeviceInterfaces = SDRWhiteLevel;
                if ( SDRWhiteLevel >= 0 )
                {
                  v115 = v208;
                }
                else
                {
                  v120 = (_QWORD *)WdLogNewEntry5_WdWarning(v118, v117, v119);
                  v120[3] = *((int *)v75 + 70);
                  v120[4] = *((unsigned int *)v75 + 69);
                  v120[5] = v69;
                  v120[6] = DeviceInterfaces;
                  WdLogEvent5_WdWarning(v120);
                  LODWORD(DeviceInterfaces) = 0;
                  v115 = 3000;
                }
              }
              *(_DWORD *)(a2 + 20) = v115;
              goto LABEL_146;
            }
            if ( v105 == -18 )
            {
              if ( a1 )
              {
                v121 = WdLogNewEntry5_WdAssertion(v103);
                *(_QWORD *)(v121 + 24) = 5848LL;
                WdLogEvent5_WdAssertion(v121);
              }
              if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 1000) > 0x1388 )
              {
                LODWORD(DeviceInterfaces) = -1073741811;
              }
              else if ( v193 && (v203 & 1) != 0 )
              {
                v122 = MonitorSetSDRWhiteLevel(v206);
                DeviceInterfaces = v122;
                if ( v122 >= 0 )
                {
                  if ( v122 )
                  {
                    if ( v122 == 255 )
                      LODWORD(DeviceInterfaces) = 0;
                  }
                  else
                  {
                    if ( !*(_BYTE *)(a2 + 24) )
                      goto LABEL_146;
                    TriggerSDRWhiteLevelChangedWnf();
                    memset(v226, 0, 0x20uLL);
                    v125 = *((_DWORD *)v75 + 1074) == 0;
                    v226[0] = 13;
                    if ( !v125 || (v126 = 0x200000000LL, *((_DWORD *)v75 + 1075)) )
                      v126 = *((unsigned int *)v75 + 1076);
                    SMgrGdiCallout(v226, v126, 0LL, 0LL, 0LL, 0LL);
                  }
                }
                else
                {
                  v124 = (_QWORD *)WdLogNewEntry5_WdError(v123);
                  v124[3] = *((int *)v75 + 70);
                  v124[4] = *((unsigned int *)v75 + 69);
                  v124[5] = v69;
                  v124[6] = DeviceInterfaces;
                  WdLogEvent5_WdError(v124);
                }
              }
              else
              {
                LODWORD(DeviceInterfaces) = -1073741637;
              }
              if ( *(_BYTE *)(a2 + 24) )
                DxgkNotifyDisplayChange(0LL);
            }
LABEL_146:
            MonitorReleaseMonitorHandle(v75);
            goto LABEL_86;
          }
          if ( a1 )
          {
            v112 = WdLogNewEntry5_WdAssertion(v103);
            *(_QWORD *)(v112 + 24) = 5772LL;
            WdLogEvent5_WdAssertion(v112);
          }
          if ( (v203 & 1) == 0 && !v199 || v194 )
          {
            LODWORD(DeviceInterfaces) = -1073741637;
            goto LABEL_146;
          }
          LOBYTE(v102) = *(_BYTE *)(a2 + 20) & 1;
          v113 = MonitorEnableDisableAdvancedColor(v206, v102);
          DeviceInterfaces = v113;
          if ( v113 >= 0 )
          {
            if ( v113 == 255 && (*(_BYTE *)(a2 + 20) & 1) != v193 )
              LODWORD(DeviceInterfaces) = 0;
            goto LABEL_146;
          }
        }
      }
    }
    v99 = (_QWORD *)WdLogNewEntry5_WdError(v98);
    v99[3] = *((int *)v75 + 70);
    v99[4] = *((unsigned int *)v75 + 69);
    v99[5] = v69;
    v99[6] = DeviceInterfaces;
    WdLogEvent5_WdError(v99);
    goto LABEL_146;
  }
  if ( v9 >= 7 )
  {
    v39 = DXGGLOBAL::GetGlobal(4294967278LL);
    v44 = DXGGLOBAL::ReferenceAdapterByLuid(v39, *(struct _LUID *)(a2 + 8), &v218);
    if ( v44 )
    {
      DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v195);
      v45 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v195, 0);
      DeviceInterfaces = v45;
      if ( v45 >= 0 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v227, v44, 0LL);
        v50 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v227);
        DXGADAPTER::ReleaseReference(v44);
        if ( v50 >= 0 )
        {
          if ( DXGADAPTER::IsDisplayAdapter(v44) && *(_BYTE *)(*((_QWORD *)v44 + 315) + 133LL) )
          {
            if ( *(_DWORD *)a2 == 7 )
            {
              if ( !a1 )
              {
                v59 = WdLogNewEntry5_WdAssertion(v56);
                *(_QWORD *)(v59 + 24) = 5114LL;
                WdLogEvent5_WdAssertion(v59);
              }
              v60 = *(unsigned int *)(a2 + 16);
              *(_DWORD *)(a2 + 20) = 0;
              LODWORD(DeviceInterfaces) = MonitorIsMonitorVirtualModeDisabled(v44, v60, &v201[1]);
              if ( (int)DeviceInterfaces >= 0 )
                *(_DWORD *)(a2 + 20) = (v201[1] != 0) | *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
            }
            else
            {
              if ( a1 || *(_DWORD *)a2 != 8 )
              {
                v61 = WdLogNewEntry5_WdAssertion(v56);
                *(_QWORD *)(v61 + 24) = 5131LL;
                WdLogEvent5_WdAssertion(v61);
              }
              if ( (int)CheckGivenTargetIsPartOfCloneGroup((ADAPTER_DISPLAY **)v44, *(_DWORD *)(a2 + 16), &v201[2]) >= 0
                && v201[2] )
              {
                v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v62, v64);
                v65[3] = *((int *)v44 + 70);
                v65[4] = *((unsigned int *)v44 + 69);
                v65[5] = *(unsigned int *)(a2 + 16);
                WdLogEvent5_WdWarning(v65);
                LODWORD(DeviceInterfaces) = -1073741649;
              }
              else
              {
                LOBYTE(v64) = *(_BYTE *)(a2 + 20) & 1;
                LODWORD(DeviceInterfaces) = MonitorDisableMonitorVirtualModeSupport(
                                              v44,
                                              *(unsigned int *)(a2 + 16),
                                              v64,
                                              v231);
              }
            }
          }
          else
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57);
            v58[3] = v44;
            v58[4] = *((int *)v44 + 70);
            v58[5] = *((unsigned int *)v44 + 69);
            WdLogEvent5_WdWarning(v58);
            LODWORD(DeviceInterfaces) = -1073741637;
          }
        }
        else
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53);
          v54[3] = v44;
          v54[4] = *((int *)v44 + 70);
          v54[5] = *((unsigned int *)v44 + 69);
          WdLogEvent5_WdWarning(v54);
          LODWORD(DeviceInterfaces) = -1073741811;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v227);
      }
      else
      {
        v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
        *(_QWORD *)(v49 + 24) = DeviceInterfaces;
        WdLogEvent5_WdWarning(v49);
      }
      v66 = (DXGSESSIONMODECHANGELOCK *)&v195;
      goto LABEL_233;
    }
    goto LABEL_183;
  }
  v12 = v9 - 2;
  if ( !v12 )
  {
    if ( !a1 )
    {
      v38 = WdLogNewEntry5_WdAssertion(4294967278LL);
      *(_QWORD *)(v38 + 24) = 5023LL;
      WdLogEvent5_WdAssertion(v38);
    }
    TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2, v5, v7);
LABEL_45:
    LODWORD(DeviceInterfaces) = TargetBaseType;
    goto LABEL_234;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 != 2 )
        goto LABEL_75;
      if ( !a1 )
      {
        v15 = WdLogNewEntry5_WdAssertion(4294967278LL);
        *(_QWORD *)(v15 + 24) = 5033LL;
        WdLogEvent5_WdAssertion(v15);
      }
      TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
      goto LABEL_45;
    }
    v17 = *(struct _LUID *)(a2 + 8);
    v221[0] = 0LL;
    v18 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)v221, v17);
    DeviceAttachmentBaseRef = (PDEVICE_OBJECT)v18;
    if ( !v18 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
      LODWORD(DeviceInterfaces) = -1073741811;
      v23[3] = *(unsigned int *)(a2 + 8);
      v23[4] = *(int *)(a2 + 12);
      v23[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
LABEL_28:
      DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v221);
      goto LABEL_234;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v224, v18, 1);
    if ( DXGADAPTER::IsActive((DXGADAPTER *)DeviceAttachmentBaseRef) )
    {
      v28 = (struct _DEVICE_OBJECT *)DeviceAttachmentBaseRef->DeviceQueue.1;
      if ( !v28 )
      {
        v29 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v29 + 24) = DeviceAttachmentBaseRef;
        WdLogEvent5_WdError(v29);
        LODWORD(DeviceInterfaces) = -1073741275;
LABEL_27:
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v224);
        goto LABEL_28;
      }
      SymbolicLinkList = 0LL;
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v28);
      DeviceInterfaces = IoGetDeviceInterfaces(
                           &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                           DeviceAttachmentBaseRef,
                           0,
                           &SymbolicLinkList);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      if ( (int)DeviceInterfaces >= 0 )
      {
        wcsncpy_s((wchar_t *)(a2 + 20), 0x80uLL, SymbolicLinkList, 0xFFFFFFFFFFFFFFFFuLL);
        v33 = SymbolicLinkList;
        *(_WORD *)(a2 + 22) = 92;
        ExFreePoolWithTag(v33, 0);
        goto LABEL_27;
      }
      v27 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      DeviceInterfaces = -1073741130LL;
    }
    *(_QWORD *)(v27 + 24) = DeviceAttachmentBaseRef;
    *(_QWORD *)(v27 + 32) = DeviceInterfaces;
    WdLogEvent5_WdWarning(v27);
    goto LABEL_27;
  }
  if ( !a1 )
  {
    v34 = WdLogNewEntry5_WdAssertion(4294967278LL);
    *(_QWORD *)(v34 + 24) = 4956LL;
    WdLogEvent5_WdAssertion(v34);
  }
  memset(v232, 0, sizeof(v232));
  v36 = 0;
  LODWORD(DeviceInterfaces) = -1071774970;
  do
  {
    if ( v36 >= 0x10 )
      break;
    if ( v232[34] )
    {
      v37 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v37 + 24) = 4968LL;
      WdLogEvent5_WdAssertion(v37);
    }
    memset(v232, 0, sizeof(v232));
    LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                  *(struct _LUID *)(a2 + 8),
                                  *(_DWORD *)(a2 + 16),
                                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v232[17],
                                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v232[17] + 1,
                                  (__int64)&v232[32] + 4);
    if ( (int)DeviceInterfaces >= 0 )
    {
      v232[8] = *(_QWORD *)(a2 + 8);
      HIDWORD(v232[9]) = *(_DWORD *)(a2 + 16);
      HIDWORD(v232[2]) = 65537;
      LODWORD(v232[9]) = v36;
      LODWORD(v232[29]) = -13434880;
      BYTE1(v232[22]) = (v200 == 0 ? 2 : 0) | (v201[0] == 0);
      v232[6] = 0xCF00000000000LL;
      LODWORD(DeviceInterfaces) = BmlGetPathModalityForAdapter(v232, v232[8], 0LL, 1LL, 0);
      if ( (int)DeviceInterfaces >= 0 )
      {
        DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)&v232[10], a2 + 32);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 60);
      }
      BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v232);
      ++v36;
    }
  }
  while ( (_DWORD)DeviceInterfaces == -1071774970 );
LABEL_234:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v215);
  if ( v217 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v215);
  return (unsigned int)DeviceInterfaces;
}
