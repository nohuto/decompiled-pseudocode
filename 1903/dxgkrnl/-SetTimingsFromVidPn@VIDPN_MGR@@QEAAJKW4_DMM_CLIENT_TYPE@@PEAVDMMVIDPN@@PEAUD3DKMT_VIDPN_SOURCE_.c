/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8
 * Callers:
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C66D4 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C00C912C (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0128098 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0154E38 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02B4AB8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C02BA210 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0001748 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00018A0 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001908 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0001950 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0001FB8 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000D4C0 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000D4F8 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C000D6C0 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00185D0 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C001AB14 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001B1B4 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001B4B4 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C001B65C (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C003328C (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C003607C (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     McTemplateK0pqqqqqqqqqqqqqqqq @ 0x1C00551D0 (McTemplateK0pqqqqqqqqqqqqqqqq.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00C8760 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C8950 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00CA2E8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00CA724 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00CBEA0 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD000 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DACA4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E3C04 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E3D70 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6778 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00E6CCC (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00FC190 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00FFBE0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0123FDC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01261FC (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0127FCC (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C012D788 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C012E2A8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C012EA88 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C013D610 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C013E28C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0149C74 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C014A434 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C014A4C8 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     LogMonitorHandleOnOffState @ 0x1C014A66C (LogMonitorHandleOnOffState.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C014ADCC (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C014BF10 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C014C05C (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0156B3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01F0EBC (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01F556C (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01FDCF8 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02BC5D4 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        __int64 a2,
        unsigned int a3,
        char *a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        int *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        __int64 a9)
{
  unsigned int v9; // esi
  __int64 v10; // r15
  char *v11; // r13
  unsigned int v12; // ebx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v21; // rbx
  unsigned int v22; // edi
  __int64 v24; // rax
  __int64 v25; // rax
  SIZE_T v26; // rax
  PVOID v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  ADAPTER_RENDER *v32; // r8
  ADAPTER_RENDER *v33; // rax
  __int64 v34; // rbx
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // edi
  __int64 v39; // rcx
  ADAPTER_DISPLAY *v40; // r10
  unsigned int v41; // edi
  int v42; // ebx
  int v43; // r13d
  int v44; // r12d
  ADAPTER_DISPLAY *v45; // r9
  unsigned __int8 v46; // al
  int *v47; // rdi
  char v48; // al
  unsigned int *v49; // r12
  int v50; // eax
  __int64 v51; // rdx
  unsigned int *v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdi
  unsigned int *v55; // r13
  unsigned int *v56; // rdi
  signed __int64 v57; // r12
  void *v58; // r15
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  int *v63; // rax
  char *v64; // rdi
  int v65; // eax
  unsigned int v66; // edx
  int v67; // r12d
  struct DMMVIDEOPRESENTTARGET *v68; // rax
  DMMVIDEOPRESENTTARGET *v69; // r13
  int TargetLinkTrainingStatus; // eax
  __int64 v71; // rdx
  unsigned int v72; // r9d
  __int64 v73; // rcx
  struct DXGGLOBAL *Global; // rax
  int v75; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  bool v77; // zf
  __int64 v78; // r13
  unsigned int v79; // r12d
  int v80; // ebx
  __int64 v81; // rdx
  int v82; // edi
  unsigned int v83; // ecx
  __int64 v84; // rcx
  int v85; // r13d
  _DWORD *v86; // r12
  char *v87; // rdi
  __int64 v88; // rdx
  struct DMMVIDEOPRESENTTARGET *v89; // r13
  __int64 v90; // rcx
  int v91; // edx
  char *v92; // r12
  __int64 v93; // rdx
  __int64 v94; // rcx
  ADAPTER_DISPLAY *v95; // r8
  unsigned int v96; // r12d
  struct DXGDEVICE *v97; // rdi
  int v98; // r13d
  struct DXGGLOBAL *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rdx
  int MostImportantVidPnPathTargetsFromSource; // r13d
  __int64 v104; // rcx
  char v105; // r10
  unsigned int v106; // r8d
  unsigned int v107; // edx
  _DWORD *v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rax
  char v111; // r9
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r13
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v118; // rdi
  ADAPTER_RENDER *v119; // rcx
  const GUID *v120; // r8
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r13
  int v126; // eax
  __int64 v127; // rdi
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rcx
  struct DXGDEVICE *v131; // rdx
  unsigned __int8 v132; // r9
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v134; // xmm1
  __int128 v135; // xmm0
  __int64 v136; // r10
  unsigned int i; // r9d
  __int64 v138; // r8
  unsigned int v139; // ecx
  int v140; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  int v143; // eax
  __int64 v144; // r9
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  unsigned int v151; // r11d
  unsigned int v152; // r10d
  unsigned int v153; // edi
  unsigned int v154; // r12d
  unsigned int v155; // ecx
  unsigned int v156; // r9d
  unsigned int v157; // r8d
  int v158; // eax
  _QWORD *v159; // rax
  char *v160; // r13
  ADAPTER_DISPLAY *v161; // rcx
  unsigned int v162; // eax
  __int64 v163; // r8
  _QWORD *v164; // rax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v166; // rdx
  _OWORD *v167; // r8
  int v168; // edx
  char v169; // r12
  _OWORD *v170; // rcx
  ADAPTER_DISPLAY *v171; // rcx
  unsigned int v172; // eax
  unsigned int *v173; // r13
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  _QWORD *v177; // rax
  __int64 v178; // r8
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rdx
  const GUID *v186; // r8
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rax
  _QWORD *v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  _QWORD *v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  int v196; // eax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r12
  _QWORD *v201; // rax
  unsigned int *v202; // rcx
  __int64 v203; // rcx
  __int64 v204; // rcx
  __int64 v205; // rax
  PERESOURCE **v206; // rcx
  DXGADAPTER **v207; // rdi
  const struct _D3DKMT_DISPLAYMODE *v208; // rax
  int v209; // eax
  int v210; // eax
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  unsigned __int8 v214; // r9
  __int64 v215; // rdi
  _QWORD *v216; // rax
  DMMVIDPNTOPOLOGY *v217; // rdi
  int v218; // eax
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // rax
  unsigned int *v222; // [rsp+20h] [rbp-100h]
  unsigned int *v223; // [rsp+20h] [rbp-100h]
  struct _DXGK_SET_TIMING_PATH_INFO **v224; // [rsp+28h] [rbp-F8h]
  unsigned int **v225; // [rsp+30h] [rbp-F0h]
  struct D3DKMT_VIDPN_SOURCE_MASKS *v226; // [rsp+38h] [rbp-E8h]
  unsigned int **v227; // [rsp+40h] [rbp-E0h]
  int v228; // [rsp+68h] [rbp-B8h]
  unsigned __int8 v229; // [rsp+A0h] [rbp-80h]
  char v230; // [rsp+A0h] [rbp-80h]
  char v231; // [rsp+A1h] [rbp-7Fh]
  unsigned int v232; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v233; // [rsp+A8h] [rbp-78h] BYREF
  void *v234; // [rsp+B0h] [rbp-70h]
  unsigned int v235; // [rsp+B8h] [rbp-68h]
  void *Src; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v237; // [rsp+C8h] [rbp-58h]
  int v238; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v239; // [rsp+D8h] [rbp-48h]
  VIDPN_MGR *v240; // [rsp+E0h] [rbp-40h]
  struct DXGDEVICE *v241; // [rsp+E8h] [rbp-38h]
  __int64 v242; // [rsp+F0h] [rbp-30h]
  int *v243; // [rsp+F8h] [rbp-28h]
  __int64 v244; // [rsp+100h] [rbp-20h]
  __int64 v245; // [rsp+108h] [rbp-18h]
  DMMVIDPNTOPOLOGY *v246; // [rsp+110h] [rbp-10h]
  void *v247; // [rsp+118h] [rbp-8h]
  __int64 v248; // [rsp+120h] [rbp+0h]
  unsigned int *v249; // [rsp+128h] [rbp+8h] BYREF
  char *v250; // [rsp+130h] [rbp+10h]
  unsigned int *v251; // [rsp+138h] [rbp+18h] BYREF
  unsigned int v252; // [rsp+140h] [rbp+20h] BYREF
  ADAPTER_RENDER *v253[2]; // [rsp+148h] [rbp+28h] BYREF
  _DXGKARG_SETTIMINGSFROMVIDPN v254; // [rsp+158h] [rbp+38h] BYREF
  _BYTE v255[56]; // [rsp+180h] [rbp+60h] BYREF
  unsigned int v256; // [rsp+1B8h] [rbp+98h] BYREF
  unsigned __int64 v257; // [rsp+1C0h] [rbp+A0h] BYREF
  __int64 v258; // [rsp+1C8h] [rbp+A8h] BYREF
  _QWORD v259[2]; // [rsp+1D0h] [rbp+B0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v260; // [rsp+1E0h] [rbp+C0h] BYREF
  _BYTE v261[24]; // [rsp+210h] [rbp+F0h] BYREF
  _QWORD v262[2]; // [rsp+228h] [rbp+108h] BYREF
  GUID ActivityId; // [rsp+238h] [rbp+118h] BYREF

  v9 = 0;
  v10 = *((_QWORD *)a1 + 1);
  v11 = a4;
  v12 = a2;
  v241 = a8;
  v248 = a9;
  v250 = a4;
  v235 = a3;
  LODWORD(v239) = a2;
  v240 = a1;
  v243 = a6;
  v232 = 0;
  if ( !v10 )
  {
    v145 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v145);
    v10 = *((_QWORD *)a1 + 1);
  }
  v14 = *(_QWORD *)(v10 + 16);
  v242 = v14;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
  {
    v146 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v146);
  }
  Src = 0LL;
  *(_BYTE *)a6 = 0;
  v249 = 0LL;
  v251 = 0LL;
  v17 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          v12,
          (struct DMMVIDPN *const)v11,
          &v256,
          &v233,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v249,
          a5,
          &v251);
  v21 = v17;
  if ( v17 < 0 )
  {
    v147 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v147 + 24) = v11;
    *(_QWORD *)(v147 + 32) = v21;
    WdLogEvent5_WdError(v147);
  }
  else
  {
    v22 = v233;
    if ( v233 )
    {
      if ( *((_QWORD *)a5 + 1) || *((_DWORD *)a5 + 6) )
      {
        v231 = 1;
      }
      else
      {
        v231 = 0;
        if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) )
          return 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v227) = *((_DWORD *)a5 + 5);
        LODWORD(v226) = *((_DWORD *)a5 + 3);
        LODWORD(v225) = *((_DWORD *)a5 + 2);
        LODWORD(v224) = *((_DWORD *)a5 + 1);
        LODWORD(v222) = *(_DWORD *)a5;
        McTemplateK0pqqqqqqqqqqqqqqqq(
          (unsigned int)v225,
          v18,
          v20,
          v14,
          v222,
          v224,
          v225,
          v226,
          v227,
          *((_DWORD *)a5 + 6),
          *((_DWORD *)a5 + 7),
          *((_DWORD *)a5 + 8),
          *((_DWORD *)a5 + 10),
          *((_DWORD *)a5 + 12),
          *((_DWORD *)a5 + 13),
          *((_DWORD *)a5 + 14),
          *((_DWORD *)a5 + 16),
          *((_DWORD *)a5 + 17),
          *((_DWORD *)a5 + 37),
          *((_DWORD *)a5 + 38));
      }
      v24 = *((_QWORD *)a1 + 11);
      v238 = 0;
      if ( v24 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 32));
        v25 = *((_QWORD *)a1 + 11);
        v22 = v233;
      }
      else
      {
        v25 = 0LL;
      }
      v258 = v25;
      v244 = v22;
      if ( !v11 )
        v11 = (char *)v25;
      v234 = v11;
      v246 = (DMMVIDPNTOPOLOGY *)(v11 + 96);
      v26 = 56LL * v22;
      if ( !is_mul_ok(v22, 0x38uLL) )
        v26 = -1LL;
      v27 = operator new[](v26, 0x4E506456u, PagedPool);
      v247 = v27;
      if ( !v27 )
      {
        v149 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
        *(_QWORD *)(v149 + 24) = v22;
        WdLogEvent5_WdLowResource(v149);
        v9 = -1073741801;
LABEL_123:
        auto_rc<DMMVIDPN const>::reset(&v258, 0LL, v101);
        return v9;
      }
      memmove(v27, Src, 56LL * v22);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
      v32 = *(ADAPTER_RENDER **)(v14 + 2560);
      v33 = 0LL;
      v34 = *((_QWORD *)a1 + 10);
      v245 = v34;
      if ( v32 )
        v33 = v32;
      LODWORD(v253[0]) = 0;
      v253[1] = v33;
      IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v14);
      v38 = *(_DWORD *)(v14 + 2452);
      v229 = IsLegacyDisplayStateSynchronization;
      LODWORD(v237) = v38;
      if ( !v37 )
      {
LABEL_29:
        v40 = *(ADAPTER_DISPLAY **)(v14 + 2552);
        v41 = 0;
        if ( *((_DWORD *)v40 + 20) )
        {
          v42 = (int)v253[0];
          v43 = v237;
          do
          {
            v44 = 1 << v41;
            v45 = v40;
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v41)) != 0 )
            {
              v130 = *(_QWORD *)(v14 + 2560);
              if ( v130 && v43 < 2200 )
              {
                ADAPTER_RENDER::FlushScheduler(v130, 8, v41, 0);
                v40 = *(ADAPTER_DISPLAY **)(v14 + 2552);
              }
              v45 = v40;
              if ( v241 )
              {
                if ( v248 )
                {
                  v131 = *(struct DXGDEVICE **)(3968LL * v41 + *((_QWORD *)v40 + 14) + 688);
                  if ( v131 )
                  {
                    if ( *((_QWORD *)v131 + 216) == *(_QWORD *)(*((_QWORD *)v131 + 2) + 16LL) )
                    {
                      if ( v42 || (v132 = 0, a7) )
                        v132 = 1;
                      ADAPTER_DISPLAY::DisablePrimaryOnDevice(v40, v131, v41, v132);
                      v45 = *(ADAPTER_DISPLAY **)(v14 + 2552);
                    }
                  }
                }
              }
            }
            v40 = v45;
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v44) != 0
              && *(_QWORD *)(v14 + 2560)
              && *(_BYTE *)(v14 + 2498)
              && v229 )
            {
              ADAPTER_DISPLAY::DisableMPOPlanes(v45, v41, 0);
              *((_DWORD *)a5 + 15) |= v44;
              v40 = *(ADAPTER_DISPLAY **)(v14 + 2552);
            }
            ++v41;
          }
          while ( v41 < *((_DWORD *)v40 + 20) );
          v34 = v245;
          v11 = (char *)v234;
        }
        if ( *((_DWORD *)a5 + 5) )
          VIDPN_MGR::RequestPowerStateForTargets(v240, (const struct DMMVIDPN *)v11);
        v46 = DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v14);
        v47 = (int *)v249;
        v234 = v249;
        if ( v46 )
        {
          v230 = 0;
          if ( !v231 )
            goto LABEL_56;
          *(_QWORD *)&v254.SetFlags.Reserved = 0LL;
          v262[0] = 0LL;
          v262[1] = 0LL;
          *(&v254.PathCount + 1) = 0;
          if ( v235 == 4 )
            DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, v262);
          v160 = v11 + 88;
          if ( v160 )
            v254.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v160 - 88);
          else
            v254.hFunctionalVidPn = 0LL;
          v49 = (unsigned int *)Src;
          v161 = *(ADAPTER_DISPLAY **)(v14 + 2552);
          v254.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v232;
          v254.PathCount = v233;
          v254.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
          v162 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v161, &v254);
          v54 = (int)v162;
          DisplayScenarioJournalSetSetTimingPathInfo(v162, 56 * v233, v233, v49);
          if ( (int)v54 < 0 )
          {
            v164 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51, v163);
            v164[3] = *(int *)(v14 + 280);
            v164[4] = *(unsigned int *)(v14 + 276);
            v164[5] = v54;
            WdLogEvent5_WdError(v164);
          }
          if ( v233 == 1 && v235 == 1 )
          {
            if ( (int)v54 >= 0 && (v49[8] & 0xF000000) != 0xD000000 )
              goto LABEL_239;
            if ( (v49[3] & 4) == 0 )
              goto LABEL_239;
            if ( (v232 & 1) == 0 )
            {
              v52 = *(unsigned int **)(*(_QWORD *)(v14 + 192) + 64LL);
              if ( (v52[879] & 3) == 0 )
                goto LABEL_239;
            }
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v34, *v49);
            if ( DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById, v166) )
              goto LABEL_239;
            v167 = v247;
            *((_DWORD *)v247 + 3) = *((_DWORD *)v247 + 3) & 0xFFFFFFF0 | 9;
            v168 = *((_DWORD *)a5 + 1);
            *((_DWORD *)a5 + 6) = v168 & (*((_DWORD *)a5 + 5) ^ *((_DWORD *)a5 + 6));
            *((_DWORD *)a5 + 5) = 0;
            *((_DWORD *)a5 + 19) = v168;
            if ( (int)v54 < 0 )
              v169 = 0;
            else
              v169 = v232 & 1;
            v170 = Src;
            v232 = 0;
            *(_OWORD *)Src = *v167;
            v170[1] = v167[1];
            v170[2] = v167[2];
            *((_QWORD *)v170 + 6) = *((_QWORD *)v167 + 6);
            *(_QWORD *)&v254.SetFlags.Reserved = 0LL;
            *(&v254.PathCount + 1) = 0;
            if ( v160 )
              v254.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v160 - 88);
            else
              v254.hFunctionalVidPn = 0LL;
            v254.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)v170;
            v171 = *(ADAPTER_DISPLAY **)(v14 + 2552);
            v254.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v232;
            v254.PathCount = 1;
            v172 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v171, &v254);
            v173 = (unsigned int *)Src;
            v54 = (int)v172;
            DisplayScenarioJournalSetSetTimingPathInfo(v172, 56LL, 1LL, Src);
            if ( (int)v54 < 0 )
            {
              v177 = (_QWORD *)WdLogNewEntry5_WdError(v175, v174, v176);
              v177[3] = *v173;
              v177[4] = *(int *)(v14 + 280);
              v177[5] = *(unsigned int *)(v14 + 276);
              v177[6] = v54;
              WdLogEvent5_WdError(v177);
            }
            DxgkLogCodePointPacket(0x68u, *v173, v54, *((_BYTE *)v173 + 35) & 0xF, *(_QWORD *)(v14 + 276));
            v232 ^= ((unsigned __int8)v232 ^ (unsigned __int8)(v232 | v169)) & 1;
            v49 = (unsigned int *)Src;
          }
          if ( v235 == 4 )
            DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v54, v262);
        }
        else
        {
          v230 = 1;
          if ( !v231 && !*((_DWORD *)a5 + 10) )
          {
            v231 = 0;
LABEL_56:
            *(_QWORD *)&ActivityId.Data1 = 0LL;
            *(_QWORD *)ActivityId.Data4 = 0LL;
            EtwActivityIdControl(3u, &ActivityId);
            if ( v233 )
            {
              v63 = v47;
              v243 = v47;
              v242 = -32LL - (_QWORD)Src;
              v64 = (char *)Src + 32;
              v237 = v244;
              do
              {
                v65 = *v63;
                v66 = *((_DWORD *)v64 - 8);
                v67 = 1 << v65;
                LODWORD(v239) = v65;
                v68 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v34, v66);
                v69 = v68;
                if ( v68 )
                {
                  if ( v231 )
                  {
                    LogMonitorHandleOnOffState(
                      *((_QWORD *)v68 + 14),
                      &ActivityId,
                      (*(_DWORD *)&v64[v242 + 12 + (_QWORD)Src] >> 2) & 1);
                    if ( !v230 )
                    {
                      DxgkLogCodePointPacket(
                        0x58u,
                        *((_DWORD *)v64 - 8),
                        v64[3] & 0xF | 0x80000000,
                        *((_DWORD *)v64 - 2),
                        *(_QWORD *)(v14 + 276));
                      DxgkLogCodePointPacket(
                        0x59u,
                        *((_DWORD *)v64 - 8),
                        *((_DWORD *)v64 + 4),
                        0,
                        *(_QWORD *)(v14 + 276));
                    }
                    TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v69, 0LL);
                    if ( TargetLinkTrainingStatus != (HIBYTE(v72) & 0xF) )
                    {
                      *((_DWORD *)a5 + 9) |= v67;
                      v72 = *(_DWORD *)v64;
                    }
                    v73 = *((_QWORD *)v64 - 1);
                    *(_BYTE *)(*((_QWORD *)v69 + 67) + 168LL) = HIBYTE(v72) & 0xF;
                    *(_QWORD *)(*((_QWORD *)v69 + 67) + 160LL) = v73;
                    Global = DXGGLOBAL::GetGlobal(v73, v71);
                    QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
                    if ( (*(_DWORD *)v64 & 0xF000000) == 0xC000000 )
                      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v69, 1u);
                    else
                      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v69);
                  }
                  else
                  {
                    v143 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v68, 0LL);
                    *(_DWORD *)v64 = *(_DWORD *)((char *)Src + v144 + 32) ^ ((v143 << 24) ^ *(_DWORD *)((char *)Src + v144 + 32)) & 0xF000000;
                  }
                  if ( (*((_DWORD *)v64 - 5) & 4) != 0 && (v67 & *((_DWORD *)a5 + 17)) == 0 )
                  {
                    v75 = v238 | *((_DWORD *)a5 + 20);
                    if ( !_bittest(&v75, v239) )
                    {
                      DMMVIDEOPRESENTTARGET::SetTargetActivated(v69, 1u, 1u);
                      if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v67) != 0
                        && (*(_DWORD *)v64 & 0xF000000) == 0xE000000 )
                      {
                        PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v246, *((_DWORD *)v64 - 8));
                        DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
                      }
                    }
                  }
                  if ( (*(_DWORD *)v64 & 0xF000000) != 0xD000000
                    && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v67) != 0 )
                  {
                    MonitorSendAdjustedColorimetryToDriver(*((_QWORD *)v69 + 14), *((unsigned int *)v64 - 7));
                  }
                }
                v64 += 56;
                v63 = v243 + 1;
                v77 = v237-- == 1;
                ++v243;
              }
              while ( !v77 );
            }
            CVidSchSuspendResume::Resume(v253);
            v78 = *(_QWORD *)(v14 + 2552);
            v79 = 0;
            if ( *(_DWORD *)(v78 + 80) )
            {
              v80 = v238;
              do
              {
                LODWORD(v237) = 0;
                memset(v255, 0, sizeof(v255));
                v82 = 1 << v79;
                v83 = *((_DWORD *)a5 + 10);
                if ( ((1 << v79) & *((_DWORD *)a5 + 3)) != 0 )
                {
                  LODWORD(v237) = 2;
                }
                else if ( (v83 & v82) != 0 )
                {
                  LODWORD(v237) = 4;
                }
                else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v82) != 0 )
                {
                  LODWORD(v237) = (*(_DWORD *)a5 & v82) != 0 ? 3 : 1;
                }
                v84 = *((_DWORD *)a5 + 2) | v83;
                if ( ((unsigned int)v84 & v82) != 0 )
                {
                  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v78, v79);
                  v134 = *((_OWORD *)DisplayModeInfo + 1);
                  *(_OWORD *)v255 = *(_OWORD *)DisplayModeInfo;
                  v135 = *((_OWORD *)DisplayModeInfo + 2);
                  *(_OWORD *)&v255[16] = v134;
                  *(_QWORD *)&v134 = *((_QWORD *)DisplayModeInfo + 6);
                  *(_OWORD *)&v255[32] = v135;
                  *(_QWORD *)&v255[48] = v134;
                  DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(v246, v79, (struct _D3DKMT_DISPLAYMODE *)v255);
                  v78 = *(_QWORD *)(v14 + 2552);
                }
                if ( (v82 & *((_DWORD *)a5 + 20)) != 0 )
                  goto LABEL_88;
                if ( (v82 & v80) == 0 )
                {
                  if ( (v82 & *((_DWORD *)a5 + 10)) != 0 )
                  {
                    ADAPTER_DISPLAY::SetDisplayModeInfo(
                      (PERESOURCE **)v78,
                      v79,
                      (const struct _DXGK_DISPLAYMODE_INFO *const)v255);
                    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
                      *(_QWORD *)(*(_QWORD *)(v14 + 2552) + 104LL),
                      v79,
                      0LL,
                      0LL,
                      0,
                      1);
                    v259[0] = 11LL;
                    v259[1] = 0LL;
                    if ( (int)DxgkStatusChangeNotify((int *)v259, v185, v186) < 0 )
                    {
                      v188 = WdLogNewEntry5_WdAssertion(v187, v81);
                      *(_QWORD *)(v188 + 24) = 3305LL;
                      WdLogEvent5_WdAssertion(v188);
                    }
                  }
                  v84 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
                  if ( ((unsigned int)v84 & v82) == 0 )
                    goto LABEL_88;
                  MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v246, v79, &v252);
                  v104 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
                  if ( (int)v104 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
                  {
                    v189 = WdLogNewEntry5_WdAssertion(v104, v102);
                    WdLogEvent5_WdAssertion(v189);
                  }
                  v105 = 0;
                  if ( MostImportantVidPnPathTargetsFromSource < 0 || (v106 = v252, v252 == -1) || (v107 = 0, !v233) )
                  {
LABEL_180:
                    v106 = -1;
                    goto LABEL_137;
                  }
                  v108 = v234;
                  while ( 1 )
                  {
                    if ( v79 == v108[v107] )
                    {
                      v109 = 56LL * v107;
                      if ( v252 == *(_DWORD *)((char *)Src + v109)
                        && (*(_DWORD *)((_BYTE *)Src + v109 + 32) & 0xF000000) == 0xE000000
                        && (*(_DWORD *)((_BYTE *)Src + v109 + 12) & 4) != 0
                        && (v82 & *((_DWORD *)a5 + 17)) == 0 )
                      {
                        *((_DWORD *)a5 + 18) |= v82;
                        v105 = 1;
LABEL_137:
                        v110 = *(_QWORD *)(v14 + 2552);
                        v242 = 3968LL * v79;
                        v111 = v235 == 4;
                        *(_DWORD *)(*(_QWORD *)(v110 + 112) + v242 + 1068) = v106;
                        v112 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v14 + 2552), v79, v105, v111, a7);
                        v116 = v112;
                        if ( v112 < 0 )
                        {
                          v190 = (_QWORD *)WdLogNewEntry5_WdError(v114, v113, v115);
                          v190[4] = v79;
                          v190[3] = v14;
                          v190[5] = v116;
                          WdLogEvent5_WdError(v190);
                          *((_DWORD *)a5 + v79 + 21) = v116;
                          *((_DWORD *)a5 + 20) |= v82;
                        }
                        else
                        {
                          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v14 + 2552), v79, 0);
                          if ( (v82 & *((_DWORD *)a5 + 3)) != 0 )
                          {
                            ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v14 + 2552), v79, 0);
                            ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v14 + 2552), v79, &stru_1C00A4218);
                            ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v14 + 2552), v79, 0LL);
                          }
                          else
                          {
                            if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v246, v79, &v257) < 0 || !v257 )
                            {
                              v191 = WdLogNewEntry5_WdAssertion(v84, v81);
                              WdLogEvent5_WdAssertion(v191);
                            }
                            if ( (v82 & *((_DWORD *)a5 + 2)) != 0 )
                            {
                              *(_DWORD *)&v255[44] = 1;
                              *(_QWORD *)&v255[48] = 1LL;
                              if ( *(_QWORD *)(v14 + 2560) )
                              {
                                DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                                               *(DXGADAPTER ***)(v14 + 2552),
                                                               v79);
                                v118 = DisplayedPrimaryAllocation;
                                if ( DisplayedPrimaryAllocation )
                                {
                                  if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
                                    v118 = 0LL;
                                  if ( v118 )
                                  {
                                    memset(&v260, 0, sizeof(v260));
                                    v119 = *(ADAPTER_RENDER **)(v14 + 2560);
                                    v260.hAllocation = (HANDLE)*((_QWORD *)v118 + 2);
                                    v121 = ADAPTER_RENDER::DdiDescribeAllocation(v119, &v260, v120);
                                    v125 = v121;
                                    if ( v121 < 0 )
                                    {
                                      v193 = (_QWORD *)WdLogNewEntry5_WdWarning(v123, v122, v124);
                                      v193[4] = v79;
                                      v193[3] = v118;
                                      v193[5] = v125;
                                      WdLogEvent5_WdWarning(v193);
                                    }
                                    else if ( v260.Width == *(_DWORD *)v255
                                           && v260.Height == *(_DWORD *)&v255[4]
                                           && v260.Format == *(_DWORD *)&v255[8]
                                           && v260.RefreshRate.Numerator == *(_DWORD *)&v255[16]
                                           && v260.RefreshRate.Denominator == *(_DWORD *)&v255[20]
                                           && (v126 = ~(*(_DWORD *)&v255[40] >> 4),
                                               v123 = v126 ^ (unsigned int)~(*((_DWORD *)v118 + 1) >> 12),
                                               (((unsigned __int8)v126 ^ (unsigned __int8)~(*((_DWORD *)v118 + 1) >> 12)) & 1) == 0) )
                                    {
                                      *(D3DDDI_MULTISAMPLINGMETHOD *)&v255[44] = v260.MultisampleMethod;
                                      *(_DWORD *)&v255[52] = v260.PrivateDriverFormatAttribute;
                                    }
                                    else if ( v230 || (*((_DWORD *)v118 + 1) & 2) == 0 )
                                    {
                                      v192 = WdLogNewEntry5_WdAssertion(v123, v122);
                                      WdLogEvent5_WdAssertion(v192);
                                    }
                                  }
                                }
                              }
                              ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v14 + 2552), v79, 1);
                              ADAPTER_DISPLAY::SetDisplayModeInfo(
                                *(PERESOURCE ***)(v14 + 2552),
                                v79,
                                (const struct _DXGK_DISPLAYMODE_INFO *const)v255);
                              v127 = *(_QWORD *)(v14 + 2552);
                              if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v127 + 16)) )
                              {
                                v194 = WdLogNewEntry5_WdAssertion(v129, v128);
                                *(_QWORD *)(v194 + 24) = 5970LL;
                                WdLogEvent5_WdAssertion(v194);
                              }
                              if ( v79 >= *(_DWORD *)(v127 + 80) )
                              {
                                v195 = WdLogNewEntry5_WdAssertion(v129, v128);
                                *(_QWORD *)(v195 + 24) = 5971LL;
                                WdLogEvent5_WdAssertion(v195);
                              }
                              *(_DWORD *)(*(_QWORD *)(v127 + 112) + v242 + 1072) = *(_DWORD *)&v255[12];
                              ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v14 + 2552), v79);
                              if ( v241 && v248 )
                                ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                                  *(ADAPTER_DISPLAY **)(v14 + 2552),
                                  v79,
                                  *(struct DXGADAPTER **)(*((_QWORD *)v241 + 2) + 16LL));
                            }
                          }
                        }
LABEL_88:
                        v85 = v237;
                        if ( (_DWORD)v237 )
                        {
                          v140 = *(_DWORD *)(*(_QWORD *)(v14 + 2552) + 344LL);
                          CurrentProcess = PsGetCurrentProcess(v84, v81);
                          ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
                          VIDPN_MGR::CacheDisplayModeChangeRequest(
                            (__int64)v240,
                            v79,
                            (__int64)v255,
                            1u,
                            *((_DWORD *)a5 + v79 + 21),
                            v85,
                            v140,
                            ProcessImageFileName);
                        }
                        break;
                      }
                      v108 = v234;
                    }
                    if ( ++v107 >= v233 )
                      goto LABEL_180;
                  }
                }
                v78 = *(_QWORD *)(v14 + 2552);
                ++v79;
              }
              while ( v79 < *(_DWORD *)(v78 + 80) );
              v34 = v245;
            }
            if ( v233 )
            {
              v86 = v234;
              v87 = (char *)Src + 32;
              do
              {
                v89 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v34, *((_DWORD *)v87 - 8));
                v90 = *((_DWORD *)v87 - 5) & 4;
                if ( v89 )
                {
                  if ( !(_DWORD)v90
                    || (v91 = 1 << *v86, (v91 & *((_DWORD *)a5 + 17)) != 0)
                    || (v91 & *((_DWORD *)a5 + 20)) != 0 )
                  {
                    DMMVIDEOPRESENTTARGET::SetTargetActivated(v89, 0, (*(_DWORD *)v87 & 0xF000000) == 201326592);
                  }
                  if ( !v230 && *((_BYTE *)v89 + 415) && ((*(_DWORD *)v87 & 0xF000000) != 0xE000000 || v87[16] != -1) )
                  {
                    v196 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                             *(ADAPTER_DISPLAY **)(v14 + 2552),
                             (unsigned int)*v86,
                             0,
                             2048,
                             a7);
                    v200 = v196;
                    if ( v196 < 0 )
                    {
                      v201 = (_QWORD *)WdLogNewEntry5_WdError(v198, v197, v199);
                      v202 = (unsigned int *)v234;
                      v201[3] = v14;
                      v201[4] = *v202;
                      v201[5] = v200;
                      WdLogEvent5_WdError(v201);
                    }
                    if ( (*(_DWORD *)v87 & 0xF000000) == 0xE000000 )
                    {
                      v203 = *(_QWORD *)(v14 + 2560);
                      if ( v203 )
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v203 + 520) + 8LL) + 888LL))(
                          *(_QWORD *)(v203 + 528),
                          *(unsigned int *)v234);
                      }
                      else
                      {
                        v204 = *(_QWORD *)(*(_QWORD *)(v14 + 2552) + 368LL);
                        if ( v204 )
                          _InterlockedExchange(
                            (volatile __int32 *)(2760LL * *(unsigned int *)v234 + *(_QWORD *)(v204 + 8) + 856),
                            1);
                      }
                    }
                  }
                  *((_BYTE *)v89 + 415) = 0;
                }
                else if ( (_DWORD)v90 )
                {
                  v205 = WdLogNewEntry5_WdAssertion(v90, v88);
                  WdLogEvent5_WdAssertion(v205);
                }
                v92 = (char *)v234;
                if ( (*((_DWORD *)v87 - 4) & 1) != 0 )
                  *((_DWORD *)a5 + 15) |= 1 << *(_DWORD *)v234;
                v86 = v92 + 4;
                v87 += 56;
                v77 = v244-- == 1;
                v234 = v86;
              }
              while ( !v77 );
              v234 = v249;
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)v240 + 35, 0LL);
            CVidSchSuspendResume::Resume(v253);
            v95 = *(ADAPTER_DISPLAY **)(v14 + 2552);
            v96 = 0;
            if ( *((_DWORD *)v95 + 20) )
            {
              v97 = v241;
              do
              {
                v94 = v96;
                v98 = 1 << v96;
                if ( ((1 << v96) & *((_DWORD *)a5 + 14)) != 0 )
                {
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v95, v96);
                  v95 = *(ADAPTER_DISPLAY **)(v14 + 2552);
                }
                if ( (v98 & *((_DWORD *)a5 + 15)) != 0 )
                {
                  DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v14, v96);
                  v95 = *(ADAPTER_DISPLAY **)(v14 + 2552);
                }
                if ( v97 && !v230 )
                {
                  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v14 + 2552), v96, 0)
                    && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v14 + 2552), v96) )
                  {
                    ADAPTER_DISPLAY::DestroyCddAllocations(v206, v97, v96);
                  }
                  v207 = *(DXGADAPTER ***)(v14 + 2552);
                  v208 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v207, v96);
                  ADAPTER_DISPLAY::SetCddDisplayMode(v207, v96, v208);
                  v95 = *(ADAPTER_DISPLAY **)(v14 + 2552);
                  v97 = v241;
                }
                if ( (v98 & *((_DWORD *)a5 + 20)) != 0 )
                {
                  v209 = *((_DWORD *)a5 + v96 + 39);
                  if ( (v209 & 7) != 0 )
                  {
                    *((_DWORD *)a5 + 4 * (v209 & 7) + 55) = 0;
                    DxgkLogCodePointPacket(0x65u, v96, *((_DWORD *)a5 + v96 + 39) & 7, 2u, *(_QWORD *)(v14 + 276));
                  }
                  v210 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v14 + 2552), v96, 0, v235 == 4, a7);
                  v215 = v210;
                  if ( v210 < 0 )
                  {
                    v216 = (_QWORD *)WdLogNewEntry5_WdError(v212, v211, v213);
                    v216[3] = v14;
                    v216[4] = v96;
                    v216[5] = v215;
                    WdLogEvent5_WdError(v216);
                  }
                  if ( v250 )
                  {
                    v217 = (DMMVIDPNTOPOLOGY *)(v250 + 96);
                    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                      (__int64)v261,
                      (unsigned __int64)(v250 + 152) & -(__int64)(v250 + 96 != 0LL),
                      2u,
                      v214,
                      (__int64)v223,
                      *((_QWORD *)v250 + 17));
                    v218 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v217, v96);
                    v219 = 0x80000000LL;
                    v220 = v218 + 0x80000000;
                    if ( (int)v220 >= 0 && v218 != -1071774919 )
                    {
                      v221 = WdLogNewEntry5_WdAssertion(v220, 0x80000000LL);
                      WdLogEvent5_WdAssertion(v221);
                    }
                    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                      (ApplyPermissionWithinThisScope *)v261,
                      v219);
                  }
                  v97 = v241;
                  if ( v241 )
                    ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v14 + 2552), v241, v96);
                  ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v14 + 2552), v96, 0);
                  ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v14 + 2552), v96, &stru_1C00A4218);
                  ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v14 + 2552), v96, 0LL);
                  *(_DWORD *)(3968LL * v96 + *(_QWORD *)(*(_QWORD *)(v14 + 2552) + 112LL) + 1068) = -1;
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v14 + 2552), v96, 1);
                  v95 = *(ADAPTER_DISPLAY **)(v14 + 2552);
                }
                ++v96;
              }
              while ( v96 < *((_DWORD *)v95 + 20) );
              v34 = v245;
            }
            if ( v250 )
            {
              ADAPTER_DISPLAY::SetSyncLockGroup(
                *(_QWORD *)(v14 + 2552),
                1u,
                *((_DWORD *)a5 + 59),
                *((_DWORD *)a5 + 60),
                *((_DWORD *)a5 + 61),
                *((_DWORD *)a5 + 62));
              v136 = *(_QWORD *)(v14 + 2552);
              for ( i = 0; i < *(_DWORD *)(v136 + 80); v136 = *(_QWORD *)(v14 + 2552) )
              {
                v138 = i;
                v139 = *((_DWORD *)a5 + i++ + 39) & 7;
                v93 = *((_DWORD *)a5 + 4 * v139 + 55) != 0 ? v139 : 0;
                v94 = 3968 * v138;
                *(_DWORD *)(3968 * v138 + *(_QWORD *)(v136 + 112) + 3756) = v93;
              }
            }
            v99 = DXGGLOBAL::GetGlobal(v94, v93);
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v99 + 139), 0LL);
            if ( Src )
              operator delete[](Src);
            operator delete[](v247);
            if ( v234 )
              operator delete[](v234);
            if ( v251 )
              operator delete[](v251);
            CVidSchSuspendResume::Resume(v253);
            if ( v34 )
              ReferenceCounted::Release((ReferenceCounted *)(v34 + 64), v100, v101);
            goto LABEL_123;
          }
          v231 = 1;
          if ( a7 || (v48 = 0, LODWORD(v253[0])) )
            v48 = 1;
          v49 = (unsigned int *)Src;
          LOBYTE(v228) = v48;
          v50 = VIDPN_MGR::CommitVidPnOnAdapter(
                  v240,
                  (unsigned int)v239,
                  v235,
                  v11,
                  v233,
                  Src,
                  v249,
                  a5,
                  &v238,
                  v251,
                  &v232,
                  v241,
                  v248,
                  v228);
          v54 = v50;
          if ( v50 >= 0 )
            goto LABEL_42;
          v159 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51, v53);
          v159[3] = *(int *)(v14 + 280);
          v159[4] = *(unsigned int *)(v14 + 276);
          v159[5] = v54;
          WdLogEvent5_WdError(v159);
        }
LABEL_239:
        if ( (int)v54 < 0 )
        {
          *((_DWORD *)a5 + 20) = -1;
          FillFailedStatus(a5, v54);
          if ( v233 )
          {
            v52 = v49 + 4;
            v178 = v244;
            v51 = (_BYTE *)v247 - (_BYTE *)v49;
            do
            {
              *((_OWORD *)v52 - 1) = *(_OWORD *)((char *)v52 + v51 - 16);
              *(_OWORD *)v52 = *(_OWORD *)((char *)v52 + v51);
              *((_OWORD *)v52 + 1) = *(_OWORD *)((char *)v52 + v51 + 16);
              *((_QWORD *)v52 + 4) = *(_QWORD *)((char *)v52 + v51 + 32);
              v52[4] = v52[4] & 0xF0FFFFFF | 0xD000000;
              *v52 |= 1u;
              v52 += 14;
              --v178;
            }
            while ( v178 );
          }
          v232 = 1;
LABEL_52:
          if ( (v232 & 0xFFFFFFFE) != 0 )
          {
            v184 = WdLogNewEntry5_WdAssertion(v52, v51);
            *(_QWORD *)(v184 + 24) = (unsigned __int64)v232 >> 1;
            WdLogEvent5_WdAssertion(v184);
          }
          v47 = (int *)v234;
          if ( (v232 & 1) != 0 )
            *(_BYTE *)v243 |= 1u;
          goto LABEL_56;
        }
LABEL_42:
        if ( !v233 )
          goto LABEL_52;
        v55 = (unsigned int *)v234;
        v56 = v49 + 1;
        v57 = (_BYTE *)v247 - (_BYTE *)Src;
        v58 = Src;
        v237 = -4LL - (_QWORD)Src;
        v59 = -4LL - (_QWORD)Src;
        v239 = v244;
        while ( 1 )
        {
          v60 = *((_QWORD *)v240 + 1);
          if ( !v60 )
          {
            v179 = WdLogNewEntry5_WdAssertion(0LL, v51);
            WdLogEvent5_WdAssertion(v179);
            v60 = *((_QWORD *)v240 + 1);
          }
          if ( !DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v60 + 16)) )
          {
            v51 = 251658240LL;
LABEL_48:
            v52 = (unsigned int *)(*(_DWORD *)((_BYTE *)v58 + (_QWORD)v56 + v59 + 32) & 0xF000000);
            if ( (_DWORD)v52 == 218103808 )
            {
              v51 = (__int64)v243;
              *((_DWORD *)a5 + *v55 + 21) = -1073741506;
              v52 = (unsigned int *)*v55;
              *((_DWORD *)a5 + 20) |= 1 << (char)v52;
              LOBYTE(v52) = *(_BYTE *)v51 & 0xFD | (v235 != 1 ? 2 : 0);
              *(_BYTE *)v51 = (_BYTE)v52;
            }
            goto LABEL_50;
          }
          if ( *(unsigned int *)((char *)v56 + v57 - 4) != *(v56 - 1)
            || *(unsigned int *)((char *)v56 + v57) != *v56
            || *(unsigned int *)((char *)v56 + v57 + 4) != v56[1]
            || *(unsigned int *)((char *)v56 + v57 + 8) != v56[2] )
          {
            break;
          }
          if ( v56[3] >= 2 || v56[7] >= 0x10000000 || *((_BYTE *)v56 + 47) )
          {
            v180 = WdLogNewEntry5_WdAssertion(v62, v61);
            *(_QWORD *)(v180 + 24) = *(v56 - 1);
            WdLogEvent5_WdAssertion(v180);
          }
          if ( !*(_QWORD *)(v56 + 5) )
          {
            v181 = WdLogNewEntry5_WdAssertion(v62, v61);
            v182 = *(v56 - 1);
LABEL_260:
            *(_QWORD *)(v181 + 24) = v182;
            goto LABEL_261;
          }
          v51 = 251658240LL;
          v183 = v56[7] & 0xF000000;
          if ( (((_DWORD)v183 - 201326592) & 0xFCFFFFFF) == 0
            && (_DWORD)v183 != 251658240
            && ((*((_BYTE *)v56 + v57 + 8) & 3) != 3 || (_DWORD)v183 == 234881024) )
          {
            goto LABEL_48;
          }
          v181 = WdLogNewEntry5_WdAssertion(v183, 251658240LL);
          *(_QWORD *)(v181 + 24) = HIBYTE(v56[7]) & 0xF;
          *(_QWORD *)(v181 + 32) = *(v56 - 1);
LABEL_261:
          WdLogEvent5_WdAssertion(v181);
          *(_OWORD *)(v56 - 1) = *(_OWORD *)((char *)v56 + v57 - 4);
          *(_OWORD *)(v56 + 3) = *(_OWORD *)((char *)v56 + v57 + 12);
          *(_OWORD *)(v56 + 7) = *(_OWORD *)((char *)v56 + v57 + 28);
          *(_QWORD *)(v56 + 11) = *(_QWORD *)((char *)v56 + v57 + 44);
          v56[7] = v56[7] & 0xF0FFFFFF | 0xD000000;
          *((_DWORD *)a5 + *v55 + 21) = -1073741437;
          v52 = (unsigned int *)*v55;
          *((_DWORD *)a5 + 20) |= 1 << (char)v52;
LABEL_50:
          v56 += 14;
          ++v55;
          if ( !--v239 )
          {
            v34 = v245;
            v14 = v242;
            goto LABEL_52;
          }
        }
        v181 = WdLogNewEntry5_WdAssertion(v62, v61);
        v182 = *(unsigned int *)((char *)v56 + v57 - 4);
        goto LABEL_260;
      }
      v39 = *(unsigned int *)(v37 + 540);
      if ( a7 )
      {
        if ( (_DWORD)v39 )
          goto LABEL_27;
      }
      else if ( !(_DWORD)v39 )
      {
        goto LABEL_27;
      }
      v150 = WdLogNewEntry5_WdAssertion(v39, v36);
      *(_QWORD *)(v150 + 24) = 2652LL;
      WdLogEvent5_WdAssertion(v150);
LABEL_27:
      if ( v38 >= 2200 )
      {
        v151 = 0;
        v152 = 0;
        v153 = 0;
        v154 = 0;
        v155 = 0;
        v156 = *(_DWORD *)(*(_QWORD *)(v14 + 2552) + 80LL);
        if ( v156 )
        {
          do
          {
            v157 = v153;
            v158 = 1 << v155;
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & (1 << v155)) != 0 )
            {
              v151 |= v158;
              v153 |= v158;
              if ( v229 )
                v153 = v157;
            }
            else if ( (v158 & *(_DWORD *)a5) != 0 )
            {
              v152 |= v158;
              if ( !a7 )
                v154 |= v158;
            }
            ++v155;
          }
          while ( v155 < v156 );
          v34 = v245;
          v11 = (char *)v234;
        }
        ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
          *(ADAPTER_RENDER **)(v14 + 2560),
          v151,
          v152,
          v153,
          v154);
        *((_DWORD *)a5 + 15) |= v153;
        if ( v154 )
          CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v253, v154);
      }
      else
      {
        ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v14 + 2560), 8, 0xFFFFFFFF, 0);
      }
      goto LABEL_29;
    }
    v148 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v148 + 24) = *(int *)(v14 + 280);
    *(_QWORD *)(v148 + 32) = *(unsigned int *)(v14 + 276);
    WdLogEvent5_WdWarning(v148);
  }
  return (unsigned int)v21;
}
