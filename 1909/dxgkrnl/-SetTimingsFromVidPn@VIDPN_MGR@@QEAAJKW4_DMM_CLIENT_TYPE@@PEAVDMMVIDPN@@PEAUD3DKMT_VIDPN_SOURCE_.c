/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00C47B0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C7454 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C00CA06C (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129DD0 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158CF8 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02B4EC8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0001738 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0001818 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0001AC8 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0001B78 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0002148 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00021A0 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000D7C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000D7FC (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000D834 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0017B5C (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0018F10 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C001AA38 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001B204 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001B504 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C001B6AC (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z @ 0x1C0024C38 (-IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C00333EC (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C00361DC (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C004546C (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     McTemplateK0pqqqqqqqqqqqqqqqq @ 0x1C0055210 (McTemplateK0pqqqqqqqqqqqqqqqq.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C9660 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00CAB78 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00CAFAC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00CC350 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD4B0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CF96C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D331C (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DB2E4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E4244 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6D98 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00E72EC (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0100E60 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C012B8B4 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012CC00 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0131300 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0131E20 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0132600 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0141A60 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0141E3C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014DAA4 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C014E274 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C014E308 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     LogMonitorHandleOnOffState @ 0x1C014E4AC (LogMonitorHandleOnOffState.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C014EB8C (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C014FD5C (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C014FEAC (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C015A9FC (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01F152C (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01F5BDC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01FE368 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02BC694 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        __int64 a2,
        unsigned int a3,
        char *a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        unsigned int *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        __int64 a9)
{
  unsigned int v9; // esi
  __int64 v10; // r15
  char *v11; // r13
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  SIZE_T v30; // rax
  PVOID v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  ADAPTER_RENDER *v39; // r8
  ADAPTER_RENDER *v40; // rax
  __int64 v41; // rbx
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // edi
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // r11d
  unsigned int v49; // r10d
  unsigned int v50; // edi
  unsigned int v51; // r12d
  unsigned int v52; // ecx
  unsigned int v53; // r9d
  unsigned int v54; // eax
  int v55; // edx
  ADAPTER_DISPLAY *v56; // r10
  unsigned int v57; // edi
  int v58; // ebx
  int v59; // r13d
  int v60; // r12d
  ADAPTER_DISPLAY *v61; // r9
  __int64 v62; // rcx
  struct DXGDEVICE *v63; // rdx
  unsigned __int8 v64; // r9
  unsigned __int8 v65; // al
  unsigned int *v66; // rdi
  char v67; // al
  unsigned int *v68; // r12
  int v69; // eax
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdi
  _QWORD *v74; // rax
  char *v75; // r13
  ADAPTER_DISPLAY *v76; // rcx
  unsigned int v77; // eax
  __int64 v78; // r8
  _QWORD *v79; // rax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v81; // rdx
  _OWORD *v82; // r8
  int v83; // edx
  char v84; // r12
  _OWORD *v85; // rcx
  ADAPTER_DISPLAY *v86; // rcx
  unsigned int v87; // eax
  unsigned int *v88; // r13
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  _QWORD *v92; // rax
  _DWORD *v93; // r13
  unsigned int *v94; // rdi
  signed __int64 v95; // r12
  __int64 v96; // r15
  __int64 v97; // rbx
  DXGADAPTER *ContainingAdapter; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rcx
  bool v105; // al
  __int64 v106; // r8
  __int64 v107; // rax
  unsigned int *v108; // rax
  char *v109; // rdi
  unsigned int v110; // eax
  __int64 v111; // rdx
  int v112; // r12d
  struct DMMVIDEOPRESENTTARGET *v113; // rax
  DMMVIDEOPRESENTTARGET *v114; // r13
  int TargetLinkTrainingStatus; // eax
  __int64 v116; // rdx
  unsigned int v117; // r9d
  __int64 v118; // rcx
  struct DXGGLOBAL *Global; // rax
  int v120; // eax
  __int64 v121; // r9
  int v122; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  bool v124; // zf
  __int64 v125; // r13
  unsigned int v126; // r12d
  int v127; // ebx
  __int64 v128; // rdx
  int v129; // edi
  unsigned int v130; // ecx
  __int64 v131; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v132; // rax
  __int128 v133; // xmm1
  __int128 v134; // xmm0
  __int64 v135; // rdx
  const GUID *v136; // r8
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rdx
  int MostImportantVidPnPathTargetsFromSource; // r13d
  __int64 v141; // rcx
  __int64 v142; // rax
  char v143; // r10
  unsigned int v144; // r8d
  unsigned int v145; // edx
  _DWORD *v146; // rcx
  __int64 v147; // rcx
  __int64 v148; // rax
  char v149; // r9
  int v150; // eax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r13
  _QWORD *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v161; // rdi
  ADAPTER_RENDER *v162; // rcx
  const GUID *v163; // r8
  int v164; // eax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r13
  int v169; // eax
  __int64 v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // rdi
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rax
  __int64 v176; // rax
  int v177; // r13d
  int v178; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  _DWORD *v181; // r12
  char *v182; // rdi
  __int64 v183; // rdx
  struct DMMVIDEOPRESENTTARGET *v184; // r13
  __int64 v185; // rcx
  int v186; // edx
  int v187; // eax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r12
  _QWORD *v192; // rax
  unsigned int *v193; // rcx
  __int64 v194; // rcx
  __int64 v195; // rcx
  __int64 v196; // rax
  char *v197; // r12
  __int64 v198; // rdx
  __int64 v199; // rcx
  ADAPTER_DISPLAY *v200; // r10
  unsigned int v201; // r12d
  struct DXGDEVICE *v202; // rdi
  int v203; // r13d
  PERESOURCE **v204; // rcx
  DXGADAPTER **v205; // rdi
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int v207; // eax
  int v208; // eax
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  unsigned __int8 v212; // r9
  __int64 v213; // rdi
  _QWORD *v214; // rax
  DMMVIDPNTOPOLOGY *v215; // rdi
  int v216; // eax
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // rax
  __int64 v220; // r10
  unsigned int i; // r9d
  __int64 v222; // r8
  unsigned int v223; // ecx
  struct DXGGLOBAL *v224; // rax
  unsigned int *v225; // [rsp+20h] [rbp-100h]
  unsigned int *v226; // [rsp+20h] [rbp-100h]
  struct _DXGK_SET_TIMING_PATH_INFO **v227; // [rsp+28h] [rbp-F8h]
  unsigned int **v228; // [rsp+30h] [rbp-F0h]
  struct D3DKMT_VIDPN_SOURCE_MASKS *v229; // [rsp+38h] [rbp-E8h]
  unsigned int **v230; // [rsp+40h] [rbp-E0h]
  int v231; // [rsp+68h] [rbp-B8h]
  unsigned __int8 v232; // [rsp+A0h] [rbp-80h]
  char v233; // [rsp+A0h] [rbp-80h]
  char v234; // [rsp+A1h] [rbp-7Fh]
  unsigned int v235; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v236; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v237; // [rsp+ACh] [rbp-74h]
  void *v238; // [rsp+B0h] [rbp-70h]
  void *Src; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v240; // [rsp+C0h] [rbp-60h]
  int v241; // [rsp+C8h] [rbp-58h] BYREF
  struct DXGDEVICE *v242; // [rsp+D0h] [rbp-50h]
  unsigned int v243; // [rsp+D8h] [rbp-48h]
  __int64 v244; // [rsp+E0h] [rbp-40h]
  unsigned int *v245; // [rsp+E8h] [rbp-38h]
  __int64 v246; // [rsp+F0h] [rbp-30h]
  VIDPN_MGR *v247; // [rsp+F8h] [rbp-28h]
  __int64 v248; // [rsp+100h] [rbp-20h]
  DMMVIDPNTOPOLOGY *v249; // [rsp+108h] [rbp-18h]
  void *v250; // [rsp+110h] [rbp-10h]
  __int64 v251; // [rsp+118h] [rbp-8h]
  unsigned int *v252; // [rsp+120h] [rbp+0h] BYREF
  char *v253; // [rsp+128h] [rbp+8h]
  unsigned int *v254; // [rsp+130h] [rbp+10h] BYREF
  unsigned int v255; // [rsp+138h] [rbp+18h] BYREF
  ADAPTER_RENDER *v256[2]; // [rsp+140h] [rbp+20h] BYREF
  _DXGKARG_SETTIMINGSFROMVIDPN v257; // [rsp+150h] [rbp+30h] BYREF
  _BYTE v258[56]; // [rsp+178h] [rbp+58h] BYREF
  unsigned int v259; // [rsp+1B0h] [rbp+90h] BYREF
  unsigned __int64 v260; // [rsp+1B8h] [rbp+98h] BYREF
  __int64 v261; // [rsp+1C0h] [rbp+A0h] BYREF
  _QWORD v262[2]; // [rsp+1C8h] [rbp+A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v263; // [rsp+1D8h] [rbp+B8h] BYREF
  _BYTE v264[24]; // [rsp+208h] [rbp+E8h] BYREF
  _QWORD v265[2]; // [rsp+220h] [rbp+100h] BYREF
  GUID ActivityId; // [rsp+230h] [rbp+110h] BYREF

  v9 = 0;
  v10 = *((_QWORD *)a1 + 1);
  v11 = a4;
  v12 = a2;
  v242 = a8;
  v251 = a9;
  v253 = a4;
  v237 = a3;
  v243 = a2;
  v247 = a1;
  v245 = a6;
  v235 = 0;
  if ( !v10 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
    v10 = *((_QWORD *)a1 + 1);
  }
  v15 = *(_QWORD *)(v10 + 16);
  v244 = v15;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v15) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v18);
  }
  Src = 0LL;
  *(_BYTE *)a6 = 0;
  v252 = 0LL;
  v254 = 0LL;
  v19 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          v12,
          (struct DMMVIDPN *const)v11,
          &v259,
          &v236,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v252,
          a5,
          &v254);
  v23 = v19;
  if ( v19 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = v11;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
  v26 = v236;
  if ( !v236 )
  {
    v27 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v27 + 24) = *(int *)(v15 + 280);
    *(_QWORD *)(v27 + 32) = *(unsigned int *)(v15 + 276);
    WdLogEvent5_WdWarning(v27);
    return (unsigned int)v23;
  }
  if ( *((_QWORD *)a5 + 1) || *((_DWORD *)a5 + 6) )
  {
    v234 = 1;
  }
  else
  {
    v234 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) )
      return 0LL;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v230) = *((_DWORD *)a5 + 5);
    LODWORD(v229) = *((_DWORD *)a5 + 3);
    LODWORD(v228) = *((_DWORD *)a5 + 2);
    LODWORD(v227) = *((_DWORD *)a5 + 1);
    LODWORD(v225) = *(_DWORD *)a5;
    McTemplateK0pqqqqqqqqqqqqqqqq(
      (unsigned int)v228,
      v20,
      v22,
      v15,
      v225,
      v227,
      v228,
      v229,
      v230,
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
  v28 = *((_QWORD *)a1 + 11);
  v241 = 0;
  if ( v28 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v28 + 32));
    v29 = *((_QWORD *)a1 + 11);
    v26 = v236;
  }
  else
  {
    v29 = 0LL;
  }
  v261 = v29;
  v246 = v26;
  if ( !v11 )
    v11 = (char *)v29;
  v238 = v11;
  v249 = (DMMVIDPNTOPOLOGY *)(v11 + 96);
  v30 = 56LL * v26;
  if ( !is_mul_ok(v26, 0x38uLL) )
    v30 = -1LL;
  v31 = operator new[](v30, 0x4E506456u, PagedPool);
  v250 = v31;
  if ( v31 )
  {
    memmove(v31, Src, 56LL * v26);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
    v39 = *(ADAPTER_RENDER **)(v15 + 2560);
    v40 = 0LL;
    v41 = *((_QWORD *)a1 + 10);
    v248 = v41;
    if ( v39 )
      v40 = v39;
    LODWORD(v256[0]) = 0;
    v256[1] = v40;
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v15);
    v45 = *(_DWORD *)(v15 + 2452);
    v232 = IsLegacyDisplayStateSynchronization;
    LODWORD(v240) = v45;
    if ( !v44 )
    {
LABEL_49:
      v56 = *(ADAPTER_DISPLAY **)(v15 + 2552);
      v57 = 0;
      if ( *((_DWORD *)v56 + 20) )
      {
        v58 = (int)v256[0];
        v59 = v240;
        do
        {
          v60 = 1 << v57;
          v61 = v56;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v57)) != 0 )
          {
            v62 = *(_QWORD *)(v15 + 2560);
            if ( v62 && v59 < 2200 )
            {
              ADAPTER_RENDER::FlushScheduler(v62, 8, v57, 0);
              v56 = *(ADAPTER_DISPLAY **)(v15 + 2552);
            }
            v61 = v56;
            if ( v242 )
            {
              if ( v251 )
              {
                v63 = *(struct DXGDEVICE **)(3968LL * v57 + *((_QWORD *)v56 + 14) + 688);
                if ( v63 )
                {
                  if ( *((_QWORD *)v63 + 216) == *(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL) )
                  {
                    if ( v58 || (v64 = 0, a7) )
                      v64 = 1;
                    ADAPTER_DISPLAY::DisablePrimaryOnDevice(v56, v63, v57, v64);
                    v61 = *(ADAPTER_DISPLAY **)(v15 + 2552);
                  }
                }
              }
            }
          }
          v56 = v61;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v60) != 0
            && *(_QWORD *)(v15 + 2560)
            && *(_BYTE *)(v15 + 2498)
            && v232 )
          {
            ADAPTER_DISPLAY::DisableMPOPlanes(v61, v57, 0);
            *((_DWORD *)a5 + 15) |= v60;
            v56 = *(ADAPTER_DISPLAY **)(v15 + 2552);
          }
          ++v57;
        }
        while ( v57 < *((_DWORD *)v56 + 20) );
        v41 = v248;
        v11 = (char *)v238;
      }
      if ( *((_DWORD *)a5 + 5) )
        VIDPN_MGR::RequestPowerStateForTargets(v247, (const struct DMMVIDPN *)v11);
      v65 = DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v15);
      v66 = v252;
      v238 = v252;
      if ( v65 )
      {
        v233 = 0;
        if ( !v234 )
          goto LABEL_143;
        *(_QWORD *)&v257.SetFlags.Reserved = 0LL;
        v265[0] = 0LL;
        v265[1] = 0LL;
        *(&v257.PathCount + 1) = 0;
        if ( v237 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, v265);
        v75 = v11 + 88;
        if ( v75 )
          v257.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v75 - 88);
        else
          v257.hFunctionalVidPn = 0LL;
        v68 = (unsigned int *)Src;
        v76 = *(ADAPTER_DISPLAY **)(v15 + 2552);
        v257.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v235;
        v257.PathCount = v236;
        v257.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v77 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v76, &v257);
        v73 = (int)v77;
        DisplayScenarioJournalSetSetTimingPathInfo(v77, 56 * v236, v236, v68);
        if ( (int)v73 < 0 )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70, v78);
          v79[3] = *(int *)(v15 + 280);
          v79[4] = *(unsigned int *)(v15 + 276);
          v79[5] = v73;
          WdLogEvent5_WdError(v79);
        }
        if ( v236 == 1
          && IsRequestFromModeChange(v237)
          && ((int)v73 < 0 || (v68[8] & 0xF000000) == 0xD000000)
          && (v68[3] & 4) != 0 )
        {
          if ( (v235 & 1) != 0 || (v71 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 64LL), (*(_DWORD *)(v71 + 3516) & 3) != 0) )
          {
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v41, *v68);
            if ( !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById, v81) )
            {
              v82 = v250;
              *((_DWORD *)v250 + 3) = *((_DWORD *)v250 + 3) & 0xFFFFFFF0 | 9;
              v83 = *((_DWORD *)a5 + 1);
              *((_DWORD *)a5 + 6) = v83 & (*((_DWORD *)a5 + 5) ^ *((_DWORD *)a5 + 6));
              *((_DWORD *)a5 + 5) = 0;
              *((_DWORD *)a5 + 19) = v83;
              if ( (int)v73 < 0 )
                v84 = 0;
              else
                v84 = v235 & 1;
              v85 = Src;
              v235 = 0;
              *(_OWORD *)Src = *v82;
              v85[1] = v82[1];
              v85[2] = v82[2];
              *((_QWORD *)v85 + 6) = *((_QWORD *)v82 + 6);
              *(_QWORD *)&v257.SetFlags.Reserved = 0LL;
              *(&v257.PathCount + 1) = 0;
              if ( v75 )
                v257.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v75 - 88);
              else
                v257.hFunctionalVidPn = 0LL;
              v257.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)v85;
              v86 = *(ADAPTER_DISPLAY **)(v15 + 2552);
              v257.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v235;
              v257.PathCount = 1;
              v87 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v86, &v257);
              v88 = (unsigned int *)Src;
              v73 = (int)v87;
              DisplayScenarioJournalSetSetTimingPathInfo(v87, 56LL, 1LL, Src);
              if ( (int)v73 < 0 )
              {
                v92 = (_QWORD *)WdLogNewEntry5_WdError(v90, v89, v91);
                v92[3] = *v88;
                v92[4] = *(int *)(v15 + 280);
                v92[5] = *(unsigned int *)(v15 + 276);
                v92[6] = v73;
                WdLogEvent5_WdError(v92);
              }
              DxgkLogCodePointPacket(0x68u, *v88, v73, *((_BYTE *)v88 + 35) & 0xF, *(_QWORD *)(v15 + 276));
              v235 ^= ((unsigned __int8)v235 ^ (unsigned __int8)(v235 | v84)) & 1;
              v68 = (unsigned int *)Src;
            }
          }
        }
        if ( v237 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v73, v265);
      }
      else
      {
        v233 = 1;
        if ( !v234 && !*((_DWORD *)a5 + 10) )
        {
          v234 = 0;
LABEL_143:
          *(_QWORD *)&ActivityId.Data1 = 0LL;
          *(_QWORD *)ActivityId.Data4 = 0LL;
          EtwActivityIdControl(3u, &ActivityId);
          if ( v236 )
          {
            v108 = v66;
            v245 = v66;
            v244 = -32LL - (_QWORD)Src;
            v109 = (char *)Src + 32;
            v240 = v246;
            do
            {
              v110 = *v108;
              v111 = *((unsigned int *)v109 - 8);
              v112 = 1 << v110;
              v243 = v110;
              v113 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v41, v111);
              v114 = v113;
              if ( v113 )
              {
                if ( v234 )
                {
                  LogMonitorHandleOnOffState(
                    *((_QWORD *)v113 + 14),
                    &ActivityId,
                    (*(_DWORD *)&v109[v244 + 12 + (_QWORD)Src] >> 2) & 1);
                  if ( !v233 )
                  {
                    DxgkLogCodePointPacket(
                      0x58u,
                      *((_DWORD *)v109 - 8),
                      v109[3] & 0xF | 0x80000000,
                      *((_DWORD *)v109 - 2),
                      *(_QWORD *)(v15 + 276));
                    DxgkLogCodePointPacket(
                      0x59u,
                      *((_DWORD *)v109 - 8),
                      *((_DWORD *)v109 + 4),
                      0,
                      *(_QWORD *)(v15 + 276));
                  }
                  TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v114, 0LL);
                  if ( TargetLinkTrainingStatus != (HIBYTE(v117) & 0xF) )
                  {
                    *((_DWORD *)a5 + 9) |= v112;
                    v117 = *(_DWORD *)v109;
                  }
                  v118 = *((_QWORD *)v109 - 1);
                  *(_BYTE *)(*((_QWORD *)v114 + 67) + 168LL) = HIBYTE(v117) & 0xF;
                  *(_QWORD *)(*((_QWORD *)v114 + 67) + 160LL) = v118;
                  Global = DXGGLOBAL::GetGlobal(v118, v116);
                  QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
                  if ( (*(_DWORD *)v109 & 0xF000000) == 0xC000000 )
                    DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v114, 1u);
                  else
                    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v114);
                }
                else
                {
                  v120 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v113, 0LL);
                  *(_DWORD *)v109 = *(_DWORD *)((char *)Src + v121 + 32) ^ ((v120 << 24) ^ *(_DWORD *)((char *)Src + v121 + 32)) & 0xF000000;
                }
                if ( (*((_DWORD *)v109 - 5) & 4) != 0 && (v112 & *((_DWORD *)a5 + 17)) == 0 )
                {
                  v122 = v241 | *((_DWORD *)a5 + 20);
                  if ( !_bittest(&v122, v243) )
                  {
                    DMMVIDEOPRESENTTARGET::SetTargetActivated(v114, 1u, 1u);
                    if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v112) != 0
                      && (*(_DWORD *)v109 & 0xF000000) == 0xE000000 )
                    {
                      PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v249, *((_DWORD *)v109 - 8));
                      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
                    }
                  }
                }
                if ( (*(_DWORD *)v109 & 0xF000000) != 0xD000000
                  && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v112) != 0 )
                {
                  MonitorSendAdjustedColorimetryToDriver(*((_QWORD *)v114 + 14), *((unsigned int *)v109 - 7));
                }
              }
              v109 += 56;
              v108 = v245 + 1;
              v124 = v240-- == 1;
              ++v245;
            }
            while ( !v124 );
          }
          CVidSchSuspendResume::Resume(v256);
          v125 = *(_QWORD *)(v15 + 2552);
          v126 = 0;
          if ( !*(_DWORD *)(v125 + 80) )
          {
LABEL_237:
            if ( v236 )
            {
              v181 = v238;
              v182 = (char *)Src + 32;
              do
              {
                v184 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v41,
                         *((unsigned int *)v182 - 8));
                v185 = *((_DWORD *)v182 - 5) & 4;
                if ( v184 )
                {
                  if ( !(_DWORD)v185
                    || (v186 = 1 << *v181, (v186 & *((_DWORD *)a5 + 17)) != 0)
                    || (v186 & *((_DWORD *)a5 + 20)) != 0 )
                  {
                    DMMVIDEOPRESENTTARGET::SetTargetActivated(v184, 0, (*(_DWORD *)v182 & 0xF000000) == 201326592);
                  }
                  if ( !v233 && *((_BYTE *)v184 + 415) && ((*(_DWORD *)v182 & 0xF000000) != 0xE000000 || v182[16] != -1) )
                  {
                    v187 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                             *(ADAPTER_DISPLAY **)(v15 + 2552),
                             (unsigned int)*v181,
                             0,
                             2048,
                             a7);
                    v191 = v187;
                    if ( v187 < 0 )
                    {
                      v192 = (_QWORD *)WdLogNewEntry5_WdError(v189, v188, v190);
                      v193 = (unsigned int *)v238;
                      v192[3] = v15;
                      v192[4] = *v193;
                      v192[5] = v191;
                      WdLogEvent5_WdError(v192);
                    }
                    if ( (*(_DWORD *)v182 & 0xF000000) == 0xE000000 )
                    {
                      v194 = *(_QWORD *)(v15 + 2560);
                      if ( v194 )
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v194 + 520) + 8LL) + 888LL))(
                          *(_QWORD *)(v194 + 528),
                          *(unsigned int *)v238);
                      }
                      else
                      {
                        v195 = *(_QWORD *)(*(_QWORD *)(v15 + 2552) + 368LL);
                        if ( v195 )
                          _InterlockedExchange(
                            (volatile __int32 *)(2760LL * *(unsigned int *)v238 + *(_QWORD *)(v195 + 8) + 856),
                            1);
                      }
                    }
                  }
                  *((_BYTE *)v184 + 415) = 0;
                }
                else if ( (_DWORD)v185 )
                {
                  v196 = WdLogNewEntry5_WdAssertion(v185, v183);
                  WdLogEvent5_WdAssertion(v196);
                }
                v197 = (char *)v238;
                if ( (*((_DWORD *)v182 - 4) & 1) != 0 )
                  *((_DWORD *)a5 + 15) |= 1 << *(_DWORD *)v238;
                v181 = v197 + 4;
                v182 += 56;
                v124 = v246-- == 1;
                v238 = v181;
              }
              while ( !v124 );
              v238 = v252;
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)v247 + 35, 0LL);
            CVidSchSuspendResume::Resume(v256);
            v200 = *(ADAPTER_DISPLAY **)(v15 + 2552);
            v201 = 0;
            if ( *((_DWORD *)v200 + 20) )
            {
              v202 = v242;
              do
              {
                v199 = v201;
                v203 = 1 << v201;
                if ( ((1 << v201) & *((_DWORD *)a5 + 14)) != 0 )
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v200, v201);
                if ( (v203 & *((_DWORD *)a5 + 15)) != 0 )
                  DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v15, v201);
                if ( v202 && !v233 )
                {
                  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v15 + 2552), v201, 0)
                    && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v15 + 2552), v201) )
                  {
                    ADAPTER_DISPLAY::DestroyCddAllocations(v204, v202, v201);
                  }
                  v205 = *(DXGADAPTER ***)(v15 + 2552);
                  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v205, v201);
                  ADAPTER_DISPLAY::SetCddDisplayMode(v205, v201, DisplayModeInfo);
                  v202 = v242;
                }
                if ( (v203 & *((_DWORD *)a5 + 20)) != 0 )
                {
                  v207 = *((_DWORD *)a5 + v201 + 39);
                  if ( (v207 & 7) != 0 )
                  {
                    *((_DWORD *)a5 + 4 * (v207 & 7) + 55) = 0;
                    DxgkLogCodePointPacket(0x65u, v201, *((_DWORD *)a5 + v201 + 39) & 7, 2u, *(_QWORD *)(v15 + 276));
                  }
                  v208 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v15 + 2552), v201, 0, v237 == 4, a7);
                  v213 = v208;
                  if ( v208 < 0 )
                  {
                    v214 = (_QWORD *)WdLogNewEntry5_WdError(v210, v209, v211);
                    v214[3] = v15;
                    v214[4] = v201;
                    v214[5] = v213;
                    WdLogEvent5_WdError(v214);
                  }
                  if ( v253 )
                  {
                    v215 = (DMMVIDPNTOPOLOGY *)(v253 + 96);
                    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                      (__int64)v264,
                      (unsigned __int64)(v253 + 152) & -(__int64)(v253 + 96 != 0LL),
                      2u,
                      v212,
                      (__int64)v226,
                      *((_QWORD *)v253 + 17));
                    v216 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v215, v201);
                    v217 = 0x80000000LL;
                    v218 = v216 + 0x80000000;
                    if ( (int)v218 >= 0 && v216 != -1071774919 )
                    {
                      v219 = WdLogNewEntry5_WdAssertion(v218, 0x80000000LL);
                      WdLogEvent5_WdAssertion(v219);
                    }
                    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                      (ApplyPermissionWithinThisScope *)v264,
                      v217);
                  }
                  v202 = v242;
                  if ( v242 )
                    ADAPTER_DISPLAY::DestroyCddAllocations(*(PERESOURCE ***)(v15 + 2552), v242, v201);
                  if ( IsRequestFromModeChange(v237) )
                  {
                    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v15 + 2552), v201, 0);
                    ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v15 + 2552), v201, &stru_1C00A2F80);
                    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v15 + 2552), v201, 0LL);
                  }
                  *(_DWORD *)(3968LL * v201 + *(_QWORD *)(*(_QWORD *)(v15 + 2552) + 112LL) + 1068) = -1;
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v15 + 2552), v201, 1);
                }
                v200 = *(ADAPTER_DISPLAY **)(v15 + 2552);
                ++v201;
              }
              while ( v201 < *((_DWORD *)v200 + 20) );
              v41 = v248;
            }
            if ( v253 )
            {
              ADAPTER_DISPLAY::SetSyncLockGroup(
                (__int64)v200,
                1u,
                *((_DWORD *)a5 + 59),
                *((_DWORD *)a5 + 60),
                *((_DWORD *)a5 + 61),
                *((_DWORD *)a5 + 62));
              v220 = *(_QWORD *)(v15 + 2552);
              for ( i = 0; i < *(_DWORD *)(v220 + 80); v220 = *(_QWORD *)(v15 + 2552) )
              {
                v222 = i;
                v223 = *((_DWORD *)a5 + i++ + 39) & 7;
                v198 = *((_DWORD *)a5 + 4 * v223 + 55) != 0 ? v223 : 0;
                v199 = 3968 * v222;
                *(_DWORD *)(3968 * v222 + *(_QWORD *)(v220 + 112) + 3756) = v198;
              }
            }
            v224 = DXGGLOBAL::GetGlobal(v199, v198);
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v224 + 139), 0LL);
            if ( Src )
              operator delete[](Src);
            operator delete[](v250);
            if ( v238 )
              operator delete[](v238);
            if ( v254 )
              operator delete[](v254);
            CVidSchSuspendResume::Resume(v256);
            if ( v41 )
              ReferenceCounted::Release((ReferenceCounted *)(v41 + 64), v37, v38);
            goto LABEL_302;
          }
          v127 = v241;
          while ( 1 )
          {
            LODWORD(v240) = 0;
            memset(v258, 0, sizeof(v258));
            v129 = 1 << v126;
            v130 = *((_DWORD *)a5 + 10);
            if ( ((1 << v126) & *((_DWORD *)a5 + 3)) != 0 )
            {
              LODWORD(v240) = 2;
            }
            else if ( (v130 & v129) != 0 )
            {
              LODWORD(v240) = 4;
            }
            else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v129) != 0 )
            {
              LODWORD(v240) = (v129 & *(_DWORD *)a5) != 0 ? 3 : 1;
            }
            v131 = *((_DWORD *)a5 + 2) | v130;
            if ( ((unsigned int)v131 & v129) != 0 )
            {
              v132 = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v125, v126);
              v133 = *((_OWORD *)v132 + 1);
              *(_OWORD *)v258 = *(_OWORD *)v132;
              v134 = *((_OWORD *)v132 + 2);
              *(_OWORD *)&v258[16] = v133;
              *(_QWORD *)&v133 = *((_QWORD *)v132 + 6);
              *(_OWORD *)&v258[32] = v134;
              *(_QWORD *)&v258[48] = v133;
              DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(v249, v126, (struct _D3DKMT_DISPLAYMODE *)v258);
              v125 = *(_QWORD *)(v15 + 2552);
            }
            if ( (v129 & *((_DWORD *)a5 + 20)) != 0 )
              goto LABEL_233;
            if ( (v129 & v127) == 0 )
              break;
LABEL_235:
            v125 = *(_QWORD *)(v15 + 2552);
            if ( ++v126 >= *(_DWORD *)(v125 + 80) )
            {
              v41 = v248;
              goto LABEL_237;
            }
          }
          if ( (v129 & *((_DWORD *)a5 + 10)) != 0 )
          {
            ADAPTER_DISPLAY::SetDisplayModeInfo(
              (DXGADAPTER **)v125,
              v126,
              (const struct _DXGK_DISPLAYMODE_INFO *const)v258);
            OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
              *(_QWORD *)(*(_QWORD *)(v15 + 2552) + 104LL),
              v126,
              0LL,
              0LL,
              0,
              1);
            v262[0] = 11LL;
            v262[1] = 0LL;
            if ( (int)DxgkStatusChangeNotify((int *)v262, v135, v136) < 0 )
            {
              v138 = WdLogNewEntry5_WdAssertion(v137, v128);
              *(_QWORD *)(v138 + 24) = 3305LL;
              WdLogEvent5_WdAssertion(v138);
            }
          }
          v131 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
          if ( ((unsigned int)v131 & v129) != 0 )
          {
            MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v249, v126, &v255);
            v141 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
            if ( (int)v141 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
            {
              v142 = WdLogNewEntry5_WdAssertion(v141, v139);
              WdLogEvent5_WdAssertion(v142);
            }
            v143 = 0;
            if ( MostImportantVidPnPathTargetsFromSource >= 0 )
            {
              v144 = v255;
              if ( v255 != -1 )
              {
                v145 = 0;
                if ( v236 )
                {
                  v146 = v238;
                  do
                  {
                    if ( v126 == v146[v145] )
                    {
                      v147 = 56LL * v145;
                      if ( v255 == *(_DWORD *)((char *)Src + v147)
                        && (*(_DWORD *)((_BYTE *)Src + v147 + 32) & 0xF000000) == 0xE000000
                        && (*(_DWORD *)((_BYTE *)Src + v147 + 12) & 4) != 0
                        && (v129 & *((_DWORD *)a5 + 17)) == 0 )
                      {
                        *((_DWORD *)a5 + 18) |= v129;
                        v143 = 1;
                        goto LABEL_196;
                      }
                      v146 = v238;
                    }
                    ++v145;
                  }
                  while ( v145 < v236 );
                }
              }
            }
            v144 = -1;
LABEL_196:
            v148 = *(_QWORD *)(v15 + 2552);
            v244 = 3968LL * v126;
            v149 = v237 == 4;
            *(_DWORD *)(*(_QWORD *)(v148 + 112) + v244 + 1068) = v144;
            v150 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v15 + 2552), v126, v143, v149, a7);
            v154 = v150;
            if ( v150 >= 0 )
            {
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v15 + 2552), v126, 0);
              if ( (v129 & *((_DWORD *)a5 + 3)) != 0 )
              {
                if ( !IsRequestFromModeChange(v237) )
                {
                  v158 = WdLogNewEntry5_WdAssertion(v157, v156);
                  WdLogEvent5_WdAssertion(v158);
                }
                ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v15 + 2552), v126, 0);
                ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v15 + 2552), v126, &stru_1C00A2F80);
                ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v15 + 2552), v126, 0LL);
              }
              else
              {
                if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v249, v126, &v260) < 0 || !v260 )
                {
                  v159 = WdLogNewEntry5_WdAssertion(v131, v128);
                  WdLogEvent5_WdAssertion(v159);
                }
                if ( (v129 & *((_DWORD *)a5 + 2)) != 0 )
                {
                  *(_DWORD *)&v258[44] = 1;
                  *(_QWORD *)&v258[48] = 1LL;
                  if ( *(_QWORD *)(v15 + 2560) )
                  {
                    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                                   *(DXGADAPTER ***)(v15 + 2552),
                                                   v126);
                    v161 = DisplayedPrimaryAllocation;
                    if ( DisplayedPrimaryAllocation )
                    {
                      if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
                        v161 = 0LL;
                      if ( v161 )
                      {
                        memset(&v263, 0, sizeof(v263));
                        v162 = *(ADAPTER_RENDER **)(v15 + 2560);
                        v263.hAllocation = (HANDLE)*((_QWORD *)v161 + 2);
                        v164 = ADAPTER_RENDER::DdiDescribeAllocation(v162, &v263, v163);
                        v168 = v164;
                        if ( v164 < 0 )
                        {
                          v171 = (_QWORD *)WdLogNewEntry5_WdWarning(v166, v165, v167);
                          v171[4] = v126;
                          v171[3] = v161;
                          v171[5] = v168;
                          WdLogEvent5_WdWarning(v171);
                        }
                        else if ( v263.Width == *(_DWORD *)v258
                               && v263.Height == *(_DWORD *)&v258[4]
                               && v263.Format == *(_DWORD *)&v258[8]
                               && v263.RefreshRate.Numerator == *(_DWORD *)&v258[16]
                               && v263.RefreshRate.Denominator == *(_DWORD *)&v258[20]
                               && (v169 = ~(*(_DWORD *)&v258[40] >> 4),
                                   v166 = v169 ^ (unsigned int)~(*((_DWORD *)v161 + 1) >> 12),
                                   (((unsigned __int8)v169 ^ (unsigned __int8)~(*((_DWORD *)v161 + 1) >> 12)) & 1) == 0) )
                        {
                          *(D3DDDI_MULTISAMPLINGMETHOD *)&v258[44] = v263.MultisampleMethod;
                          *(_DWORD *)&v258[52] = v263.PrivateDriverFormatAttribute;
                        }
                        else if ( v233 || (*((_DWORD *)v161 + 1) & 2) == 0 )
                        {
                          v170 = WdLogNewEntry5_WdAssertion(v166, v165);
                          WdLogEvent5_WdAssertion(v170);
                        }
                      }
                    }
                  }
                  if ( IsRequestFromModeChange(v237) )
                    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v15 + 2552), v126, 1);
                  ADAPTER_DISPLAY::SetDisplayModeInfo(
                    *(DXGADAPTER ***)(v15 + 2552),
                    v126,
                    (const struct _DXGK_DISPLAYMODE_INFO *const)v258);
                  v172 = *(_QWORD *)(v15 + 2552);
                  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)v172) )
                  {
                    v175 = WdLogNewEntry5_WdAssertion(v174, v173);
                    *(_QWORD *)(v175 + 24) = 5970LL;
                    WdLogEvent5_WdAssertion(v175);
                  }
                  if ( v126 >= *(_DWORD *)(v172 + 80) )
                  {
                    v176 = WdLogNewEntry5_WdAssertion(v174, v173);
                    *(_QWORD *)(v176 + 24) = 5971LL;
                    WdLogEvent5_WdAssertion(v176);
                  }
                  *(_DWORD *)(*(_QWORD *)(v172 + 112) + v244 + 1072) = *(_DWORD *)&v258[12];
                  ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v15 + 2552), v126);
                  if ( v242 && v251 )
                    ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                      *(ADAPTER_DISPLAY **)(v15 + 2552),
                      v126,
                      *(struct DXGADAPTER **)(*((_QWORD *)v242 + 2) + 16LL));
                }
              }
            }
            else
            {
              v155 = (_QWORD *)WdLogNewEntry5_WdError(v152, v151, v153);
              v155[4] = v126;
              v155[3] = v15;
              v155[5] = v154;
              WdLogEvent5_WdError(v155);
              *((_DWORD *)a5 + v126 + 21) = v154;
              *((_DWORD *)a5 + 20) |= v129;
            }
          }
LABEL_233:
          v177 = v240;
          if ( (_DWORD)v240 )
          {
            v178 = *(_DWORD *)(*(_QWORD *)(v15 + 2552) + 344LL);
            CurrentProcess = PsGetCurrentProcess(v131, v128);
            ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
            VIDPN_MGR::CacheDisplayModeChangeRequest(
              (__int64)v247,
              v126,
              (__int64)v258,
              1u,
              *((_DWORD *)a5 + v126 + 21),
              v177,
              v178,
              ProcessImageFileName);
          }
          goto LABEL_235;
        }
        v234 = 1;
        if ( a7 || (v67 = 0, LODWORD(v256[0])) )
          v67 = 1;
        v68 = (unsigned int *)Src;
        LOBYTE(v231) = v67;
        v69 = VIDPN_MGR::CommitVidPnOnAdapter(
                v247,
                v243,
                v237,
                v11,
                v236,
                Src,
                v252,
                a5,
                &v241,
                v254,
                &v235,
                v242,
                v251,
                v231);
        v73 = v69;
        if ( v69 >= 0 )
          goto LABEL_109;
        v74 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70, v72);
        v74[3] = *(int *)(v15 + 280);
        v74[4] = *(unsigned int *)(v15 + 276);
        v74[5] = v73;
        WdLogEvent5_WdError(v74);
      }
      if ( (int)v73 < 0 )
      {
        *((_DWORD *)a5 + 20) = -1;
        FillFailedStatus(a5, v73);
        if ( v236 )
        {
          v71 = (unsigned __int64)(v68 + 4);
          v106 = v246;
          v70 = (_BYTE *)v250 - (_BYTE *)v68;
          do
          {
            *(_OWORD *)(v71 - 16) = *(_OWORD *)(v71 + v70 - 16);
            *(_OWORD *)v71 = *(_OWORD *)(v71 + v70);
            *(_OWORD *)(v71 + 16) = *(_OWORD *)(v71 + v70 + 16);
            *(_QWORD *)(v71 + 32) = *(_QWORD *)(v71 + v70 + 32);
            *(_DWORD *)(v71 + 16) = *(_DWORD *)(v71 + 16) & 0xF0FFFFFF | 0xD000000;
            *(_DWORD *)v71 |= 1u;
            v71 += 56LL;
            --v106;
          }
          while ( v106 );
        }
        v235 = 1;
LABEL_139:
        if ( (v235 & 0xFFFFFFFE) != 0 )
        {
          v107 = WdLogNewEntry5_WdAssertion(v71, v70);
          *(_QWORD *)(v107 + 24) = (unsigned __int64)v235 >> 1;
          WdLogEvent5_WdAssertion(v107);
        }
        v66 = (unsigned int *)v238;
        if ( (v235 & 1) != 0 )
          *(_BYTE *)v245 |= 1u;
        goto LABEL_143;
      }
LABEL_109:
      if ( !v236 )
        goto LABEL_139;
      v93 = v238;
      v94 = v68 + 1;
      v95 = (_BYTE *)v250 - (_BYTE *)Src;
      v96 = v246;
      v97 = -4LL - (_QWORD)Src;
      while ( 1 )
      {
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v247, v70);
        if ( !DXGADAPTER::UsingSetTimingsFromVidPn(ContainingAdapter) )
        {
          v70 = 251658240LL;
LABEL_131:
          v71 = *(_DWORD *)((_BYTE *)Src + (_QWORD)v94 + v97 + 32) & 0xF000000;
          if ( (_DWORD)v71 == 218103808 )
          {
            *((_DWORD *)a5 + (unsigned int)*v93 + 21) = -1073741506;
            *((_DWORD *)a5 + 20) |= 1 << *v93;
            v105 = IsRequestFromModeChange(v237);
            v70 = (__int64)v245;
            LOBYTE(v71) = *(_BYTE *)v245 & 0xFD;
            *(_BYTE *)v245 = v71 | (2 * !v105);
          }
          goto LABEL_133;
        }
        if ( *(unsigned int *)((char *)v94 + v95 - 4) != *(v94 - 1)
          || *(unsigned int *)((char *)v94 + v95) != *v94
          || *(unsigned int *)((char *)v94 + v95 + 4) != v94[1]
          || *(unsigned int *)((char *)v94 + v95 + 8) != v94[2] )
        {
          break;
        }
        if ( v94[3] >= 2 || v94[7] >= 0x10000000 || *((_BYTE *)v94 + 47) )
        {
          v101 = WdLogNewEntry5_WdAssertion(v100, v99);
          *(_QWORD *)(v101 + 24) = *(v94 - 1);
          WdLogEvent5_WdAssertion(v101);
        }
        if ( !*(_QWORD *)(v94 + 5) )
        {
          v102 = WdLogNewEntry5_WdAssertion(v100, v99);
          v103 = *(v94 - 1);
LABEL_128:
          *(_QWORD *)(v102 + 24) = v103;
          goto LABEL_129;
        }
        v70 = 251658240LL;
        v104 = v94[7] & 0xF000000;
        if ( (((_DWORD)v104 - 201326592) & 0xFCFFFFFF) == 0
          && (_DWORD)v104 != 251658240
          && ((*((_BYTE *)v94 + v95 + 8) & 3) != 3 || (_DWORD)v104 == 234881024) )
        {
          goto LABEL_131;
        }
        v102 = WdLogNewEntry5_WdAssertion(v104, 251658240LL);
        *(_QWORD *)(v102 + 24) = HIBYTE(v94[7]) & 0xF;
        *(_QWORD *)(v102 + 32) = *(v94 - 1);
LABEL_129:
        WdLogEvent5_WdAssertion(v102);
        *(_OWORD *)(v94 - 1) = *(_OWORD *)((char *)v94 + v95 - 4);
        *(_OWORD *)(v94 + 3) = *(_OWORD *)((char *)v94 + v95 + 12);
        *(_OWORD *)(v94 + 7) = *(_OWORD *)((char *)v94 + v95 + 28);
        *(_QWORD *)(v94 + 11) = *(_QWORD *)((char *)v94 + v95 + 44);
        v94[7] = v94[7] & 0xF0FFFFFF | 0xD000000;
        *((_DWORD *)a5 + (unsigned int)*v93 + 21) = -1073741437;
        v71 = (unsigned int)*v93;
        *((_DWORD *)a5 + 20) |= 1 << v71;
LABEL_133:
        v94 += 14;
        ++v93;
        if ( !--v96 )
        {
          v41 = v248;
          v15 = v244;
          goto LABEL_139;
        }
      }
      v102 = WdLogNewEntry5_WdAssertion(v100, v99);
      v103 = *(unsigned int *)((char *)v94 + v95 - 4);
      goto LABEL_128;
    }
    v46 = *(unsigned int *)(v44 + 540);
    if ( a7 )
    {
      if ( (_DWORD)v46 )
        goto LABEL_35;
    }
    else if ( !(_DWORD)v46 )
    {
      goto LABEL_35;
    }
    v47 = WdLogNewEntry5_WdAssertion(v46, v43);
    *(_QWORD *)(v47 + 24) = 2652LL;
    WdLogEvent5_WdAssertion(v47);
LABEL_35:
    if ( v45 >= 2200 )
    {
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = *(_DWORD *)(*(_QWORD *)(v15 + 2552) + 80LL);
      if ( v53 )
      {
        do
        {
          v54 = v50;
          v55 = 1 << v52;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & (1 << v52)) != 0 )
          {
            v48 |= v55;
            v50 |= v55;
            if ( v232 )
              v50 = v54;
          }
          else if ( (v55 & *(_DWORD *)a5) != 0 )
          {
            v49 |= v55;
            if ( !a7 )
              v51 |= v55;
          }
          ++v52;
        }
        while ( v52 < v53 );
        v41 = v248;
        v11 = (char *)v238;
      }
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v15 + 2560), v48, v49, v50, v51);
      *((_DWORD *)a5 + 15) |= v50;
      if ( v51 )
        CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v256, v51);
    }
    else
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v15 + 2560), 8, 0xFFFFFFFF, 0);
    }
    goto LABEL_49;
  }
  v36 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
  *(_QWORD *)(v36 + 24) = v26;
  WdLogEvent5_WdLowResource(v36);
  v9 = -1073741801;
LABEL_302:
  auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>(&v261, v37, v38);
  return v9;
}
