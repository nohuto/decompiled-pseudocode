/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFBFC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01231FC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z @ 0x1C01397A4 (-DmmPowerOnTargetsFromSourceIfNecessary@@YAJQEAXI@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01432B4 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C027C6A8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C02821D0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0002060 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0005E08 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0005E40 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00060EC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C001106C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00110C4 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0013450 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0013BE4 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0017134 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0018C68 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C0019E6C (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C002DB64 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C00308A0 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     McTemplateK0pqqqqqqqqqqqqqqq @ 0x1C004E000 (McTemplateK0pqqqqqqqqqqqqqqq.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00B7ED8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00BB0F4 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00D1EA8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00D2C28 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00D3678 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00F6724 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C011F6B4 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C011FB7C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0120094 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C012134C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C01228E0 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C012B530 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C012E100 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     LogMonitorHandleOnOffState @ 0x1C0133DB8 (LogMonitorHandleOnOffState.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01380A8 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C0139CE8 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0139D7C (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C013AFC0 (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C013B880 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C1920 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6840 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01CFB00 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C0284270 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        unsigned int a2,
        int a3,
        struct DMMVIDPN *a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        struct DMMVIDPN *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        struct COREDEVICEACCESS *a9)
{
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 v14; // r13
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  SIZE_T v26; // rax
  PVOID v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  ADAPTER_RENDER *v30; // r8
  __int64 v31; // r8
  int v32; // r15d
  __int64 v33; // rcx
  ADAPTER_DISPLAY *v34; // r10
  unsigned int v35; // r15d
  int v36; // ebx
  ADAPTER_DISPLAY *v37; // r9
  int v38; // edi
  int v39; // r12d
  struct DMMVIDPN *v40; // r15
  unsigned __int8 v41; // al
  unsigned int *v42; // rcx
  char v43; // r12
  unsigned __int8 v44; // al
  int v45; // eax
  _BYTE *v46; // r15
  VIDPN_MGR *v47; // r8
  __int64 v48; // rax
  char *v49; // rcx
  struct DMMVIDPN *v50; // r12
  char *v51; // rdi
  signed __int64 v52; // r15
  void *v53; // r13
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rcx
  struct DMMVIDPN *v57; // rax
  char *v58; // rdi
  int v59; // eax
  unsigned int v60; // edx
  int v61; // r12d
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  DMMVIDEOPRESENTTARGET *v63; // r15
  char *v64; // rdx
  unsigned int v65; // edx
  __int64 v66; // r8
  __int64 v67; // rcx
  int v68; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  bool v70; // zf
  __int64 v71; // rdi
  unsigned int v72; // r15d
  int v73; // ebx
  int v74; // r12d
  int v75; // ecx
  DMMVIDPNTOPOLOGY *v76; // rdi
  int v77; // r12d
  unsigned int *v78; // r12
  char *v79; // rdi
  struct DMMVIDEOPRESENTTARGET *v80; // r15
  __int64 v81; // rcx
  int v82; // edx
  struct DMMVIDPN *v83; // r12
  __int64 v84; // rcx
  __int64 v85; // rdi
  unsigned int v86; // r15d
  int v87; // r12d
  struct DXGDEVICE *v88; // rdi
  struct DXGGLOBAL *Global; // rax
  int MostImportantVidPnPathTargetsFromSource; // edi
  __int64 v91; // rcx
  unsigned __int8 v92; // r10
  unsigned int v93; // edx
  struct DMMVIDPN *v94; // rcx
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // r12
  unsigned int v99; // edx
  __int64 v100; // rdi
  __int64 v101; // rax
  int v102; // r12d
  __int64 v103; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v105; // rdi
  ADAPTER_RENDER *v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  int v110; // eax
  __int64 v111; // rdi
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rdi
  struct DXGDEVICE *v115; // rax
  __int64 v116; // rcx
  struct DXGDEVICE *v117; // r11
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  DMMVIDPNPRESENTPATH *v119; // r8
  int v120; // edx
  __int128 v121; // xmm1
  char *v122; // rcx
  __int128 v123; // xmm0
  DMMVIDPNTOPOLOGY *v124; // rax
  int v125; // edx
  int v126; // eax
  int v127; // r8d
  __int64 v128; // r9
  unsigned int i; // r10d
  __int64 v130; // r8
  unsigned int v131; // ecx
  unsigned int v132; // edx
  int v133; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  unsigned int v142; // r11d
  unsigned int v143; // r10d
  unsigned int v144; // r15d
  unsigned int v145; // r12d
  unsigned int v146; // ecx
  unsigned int v147; // r9d
  unsigned int v148; // r8d
  int v149; // eax
  unsigned __int8 v150; // r9
  ADAPTER_DISPLAY *v151; // rcx
  unsigned int v152; // eax
  _QWORD *v153; // rax
  _QWORD *v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rcx
  struct DMMVIDPN *v161; // rdx
  unsigned __int64 v162; // r8
  char *v163; // rdx
  __int64 v164; // rax
  _QWORD *v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rax
  _QWORD *v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  _QWORD *v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  int v175; // eax
  __int64 v176; // rcx
  __int64 v177; // r12
  _QWORD *v178; // rax
  struct DMMVIDPN *v179; // rcx
  __int64 v180; // rcx
  __int64 v181; // rcx
  __int64 v182; // rax
  ADAPTER_DISPLAY *v183; // rcx
  DXGADAPTER **v184; // rdi
  const struct _D3DKMT_DISPLAYMODE *v185; // rax
  int v186; // eax
  int v187; // eax
  __int64 v188; // rcx
  __int64 v189; // rdi
  _QWORD *v190; // rax
  DMMVIDPNTOPOLOGY *v191; // rdi
  char *v192; // r8
  int v193; // eax
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // rdx
  PVOID v197; // rax
  __int64 v198; // rcx
  __int64 v199; // rax
  unsigned int *v200; // [rsp+20h] [rbp-100h]
  struct _DXGK_SET_TIMING_PATH_INFO **v201; // [rsp+28h] [rbp-F8h]
  unsigned int **v202; // [rsp+30h] [rbp-F0h]
  struct D3DKMT_VIDPN_SOURCE_MASKS *v203; // [rsp+38h] [rbp-E8h]
  unsigned int **v204; // [rsp+40h] [rbp-E0h]
  char v205; // [rsp+A0h] [rbp-80h]
  char v206; // [rsp+A0h] [rbp-80h]
  unsigned __int8 IsLegacyDisplayStateSynchronization; // [rsp+A1h] [rbp-7Fh]
  unsigned __int8 v208; // [rsp+A1h] [rbp-7Fh]
  unsigned int v209; // [rsp+A4h] [rbp-7Ch] BYREF
  struct DMMVIDPN *v210; // [rsp+A8h] [rbp-78h]
  void *Src; // [rsp+B0h] [rbp-70h] BYREF
  int v212; // [rsp+B8h] [rbp-68h]
  unsigned int v213; // [rsp+BCh] [rbp-64h] BYREF
  int v214; // [rsp+C0h] [rbp-60h]
  int v215; // [rsp+C4h] [rbp-5Ch] BYREF
  __int64 v216; // [rsp+C8h] [rbp-58h]
  unsigned __int64 v217; // [rsp+D0h] [rbp-50h]
  VIDPN_MGR *v218; // [rsp+D8h] [rbp-48h]
  unsigned int v219; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v220; // [rsp+E8h] [rbp-38h]
  unsigned __int64 v221; // [rsp+F0h] [rbp-30h]
  struct DXGDEVICE *v222; // [rsp+F8h] [rbp-28h]
  __int64 v223; // [rsp+100h] [rbp-20h]
  unsigned int *v224; // [rsp+108h] [rbp-18h] BYREF
  struct DMMVIDPN *v225; // [rsp+110h] [rbp-10h]
  DMMVIDPNTOPOLOGY *v226; // [rsp+118h] [rbp-8h]
  void *v227; // [rsp+120h] [rbp+0h]
  unsigned int *v228; // [rsp+128h] [rbp+8h] BYREF
  struct COREDEVICEACCESS *v229; // [rsp+130h] [rbp+10h]
  ADAPTER_RENDER *v230[2]; // [rsp+138h] [rbp+18h] BYREF
  struct DMMVIDPN *v231; // [rsp+148h] [rbp+28h]
  _BYTE v232[56]; // [rsp+150h] [rbp+30h] BYREF
  unsigned int v233; // [rsp+188h] [rbp+68h] BYREF
  unsigned __int64 v234; // [rsp+190h] [rbp+70h] BYREF
  __int64 v235; // [rsp+198h] [rbp+78h] BYREF
  _DXGKARG_DESCRIBEALLOCATION v236; // [rsp+1A0h] [rbp+80h] BYREF
  int v237; // [rsp+1D0h] [rbp+B0h] BYREF
  __int64 v238; // [rsp+1D8h] [rbp+B8h]
  _DXGKARG_SETTIMINGSFROMVIDPN v239; // [rsp+1E0h] [rbp+C0h] BYREF
  _BYTE v240[24]; // [rsp+208h] [rbp+E8h] BYREF
  _QWORD v241[2]; // [rsp+220h] [rbp+100h] BYREF
  GUID ActivityId; // [rsp+230h] [rbp+110h] BYREF

  v9 = 0;
  v10 = *((_QWORD *)a1 + 1);
  v222 = a8;
  v229 = a9;
  v231 = a4;
  v214 = a3;
  LODWORD(v217) = a2;
  v218 = a1;
  v225 = a6;
  v213 = 0;
  if ( !v10 )
  {
    v136 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v136);
    v10 = *((_QWORD *)a1 + 1);
  }
  v14 = *(_QWORD *)(v10 + 16);
  v220 = v14;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
  {
    v137 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v137);
  }
  Src = 0LL;
  *(_BYTE *)a6 = 0;
  v224 = 0LL;
  v228 = 0LL;
  v16 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          a2,
          a4,
          &v233,
          &v209,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v224,
          a5,
          &v228);
  v20 = v16;
  v212 = v16;
  if ( v16 < 0 )
  {
    v138 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v138 + 24) = a4;
    *(_QWORD *)(v138 + 32) = v20;
    WdLogEvent5_WdError(v138);
  }
  else
  {
    v21 = v209;
    if ( v209 )
    {
      if ( *((_QWORD *)a5 + 1) || *((_DWORD *)a5 + 6) )
      {
        v205 = 1;
      }
      else
      {
        v205 = 0;
        if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) )
          return 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v204) = *((_DWORD *)a5 + 5);
        LODWORD(v203) = *((_DWORD *)a5 + 3);
        LODWORD(v202) = *((_DWORD *)a5 + 2);
        LODWORD(v201) = *((_DWORD *)a5 + 1);
        LODWORD(v200) = *(_DWORD *)a5;
        McTemplateK0pqqqqqqqqqqqqqqq(
          (unsigned int)v202,
          v17,
          v19,
          v14,
          v200,
          v201,
          v202,
          v203,
          v204,
          *((_DWORD *)a5 + 6),
          *((_DWORD *)a5 + 7),
          *((_DWORD *)a5 + 8),
          *((_DWORD *)a5 + 10),
          *((_DWORD *)a5 + 12),
          *((_DWORD *)a5 + 13),
          *((_DWORD *)a5 + 14),
          *((_DWORD *)a5 + 16),
          *((_DWORD *)a5 + 17),
          *((_DWORD *)a5 + 36));
      }
      v23 = *((_QWORD *)a1 + 11);
      v215 = 0;
      if ( v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v23 + 32));
        v24 = *((_QWORD *)a1 + 11);
        v21 = v209;
      }
      else
      {
        v24 = 0LL;
      }
      v235 = v24;
      v25 = (__int64)a4;
      v221 = v21;
      if ( !a4 )
        v25 = v24;
      v210 = (struct DMMVIDPN *)v25;
      v226 = (DMMVIDPNTOPOLOGY *)(v25 + 96);
      v26 = 56 * v21;
      if ( !is_mul_ok(v21, 0x38uLL) )
        v26 = -1LL;
      v27 = operator new(v26, 0x4E506456u, PagedPool);
      v227 = v27;
      if ( !v27 )
      {
        v140 = WdLogNewEntry5_WdLowResource(v28);
        *(_QWORD *)(v140 + 24) = v21;
        WdLogEvent5_WdLowResource(v140);
        v9 = -1073741801;
LABEL_127:
        auto_rc<DMMVIDPN const>::reset(&v235, 0LL);
        return v9;
      }
      memmove(v27, Src, 56 * v21);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
      v29 = *((_QWORD *)a1 + 10);
      v30 = *(ADAPTER_RENDER **)(v14 + 2528);
      v223 = v29;
      v230[1] = v30;
      LODWORD(v230[0]) = 0;
      IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v14);
      LODWORD(v216) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v14);
      v32 = v216;
      if ( !v31 )
      {
LABEL_27:
        v34 = *(ADAPTER_DISPLAY **)(v14 + 2520);
        v35 = 0;
        if ( *((_DWORD *)v34 + 20) )
        {
          v36 = (int)v230[0];
          v37 = *(ADAPTER_DISPLAY **)(v14 + 2520);
          v38 = v216;
          do
          {
            v39 = 1 << v35;
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v35)) != 0 )
            {
              v116 = *(_QWORD *)(v14 + 2528);
              if ( v116 && v38 < 2200 )
              {
                ADAPTER_RENDER::FlushScheduler(v116, 8LL, v35, 0LL);
                v34 = *(ADAPTER_DISPLAY **)(v14 + 2520);
                v37 = v34;
              }
              if ( v222 )
              {
                if ( v229 )
                {
                  v117 = *(struct DXGDEVICE **)(3760LL * v35 + *((_QWORD *)v34 + 14) + 688);
                  if ( v117 )
                  {
                    if ( *((_QWORD *)v117 + 216) == *(_QWORD *)(*((_QWORD *)v117 + 2) + 16LL) )
                    {
                      if ( v36 || (v150 = 0, a7) )
                        v150 = 1;
                      ADAPTER_DISPLAY::DisablePrimaryOnDevice(v34, v117, v35, v150);
                      v37 = *(ADAPTER_DISPLAY **)(v14 + 2520);
                    }
                  }
                }
              }
            }
            v34 = v37;
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v39) != 0
              && *(_QWORD *)(v14 + 2528)
              && *(_BYTE *)(v14 + 2466)
              && IsLegacyDisplayStateSynchronization )
            {
              ADAPTER_DISPLAY::DisableMPOPlanes(v37, v35, 0);
              *((_DWORD *)a5 + 15) |= v39;
              v34 = *(ADAPTER_DISPLAY **)(v14 + 2520);
            }
            ++v35;
            v37 = v34;
          }
          while ( v35 < *((_DWORD *)v34 + 20) );
          v29 = v223;
          LODWORD(v20) = v212;
        }
        v40 = v210;
        if ( *((_DWORD *)a5 + 5) )
          VIDPN_MGR::RequestPowerStateForTargets(v218, v210);
        v41 = DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v14);
        v42 = v224;
        v210 = (struct DMMVIDPN *)v224;
        v208 = v41;
        if ( v41 )
        {
          v43 = v205;
          if ( v205 )
          {
            v241[0] = 0LL;
            v241[1] = 0LL;
            memset(&v239, 0, sizeof(v239));
            if ( v214 == 4 )
              DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, v241);
            if ( v40 == (struct DMMVIDPN *)-88LL )
              v239.hFunctionalVidPn = 0LL;
            else
              v239.hFunctionalVidPn = (D3DKMDT_HVIDPN)v40;
            v46 = Src;
            v151 = *(ADAPTER_DISPLAY **)(v14 + 2520);
            v239.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v213;
            v239.PathCount = v209;
            v239.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
            v152 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v151, &v239);
            v20 = (int)v152;
            DisplayScenarioJournalSetSetTimingPathInfo(v152, 56 * v209, v209, v46);
            if ( (int)v20 < 0 )
            {
              v153 = (_QWORD *)WdLogNewEntry5_WdError(v42);
              v153[3] = *(int *)(v14 + 280);
              v153[4] = *(unsigned int *)(v14 + 276);
              v153[5] = v20;
              WdLogEvent5_WdError(v153);
            }
            if ( v214 == 4 )
              DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v20, v241);
            goto LABEL_42;
          }
        }
        else if ( v205 || *((_DWORD *)a5 + 10) )
        {
          v43 = 1;
          v205 = 1;
          if ( a7 || (v44 = 0, LODWORD(v230[0])) )
            v44 = 1;
          v45 = VIDPN_MGR::CommitVidPnOnAdapter(
                  v218,
                  v217,
                  v214,
                  (__int64)v40,
                  v209,
                  (__int64)Src,
                  v224,
                  a5,
                  &v215,
                  (__int64)v228,
                  &v213,
                  v222,
                  v229,
                  v44);
          v20 = v45;
          if ( v45 < 0 )
          {
            v154 = (_QWORD *)WdLogNewEntry5_WdError(v42);
            v154[3] = *(int *)(v14 + 280);
            v154[4] = *(unsigned int *)(v14 + 276);
            v154[5] = v20;
            WdLogEvent5_WdError(v154);
          }
        }
        else
        {
          v43 = 0;
          v205 = 0;
        }
        v46 = Src;
LABEL_42:
        v47 = v218;
        v48 = *((_QWORD *)v218 + 1);
        if ( !v48 )
        {
          v155 = WdLogNewEntry5_WdAssertion(v42);
          WdLogEvent5_WdAssertion(v155);
          v47 = v218;
          v48 = *((_QWORD *)v218 + 1);
        }
        v49 = *(char **)(v48 + 16);
        if ( *((_DWORD *)v49 + 71) != 4098 || (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v49) >= 1300 )
          v215 = 0;
        if ( v43 )
        {
          if ( (int)v20 >= 0 )
          {
            if ( !v209 )
              goto LABEL_56;
            v50 = v210;
            v51 = v46 + 4;
            v52 = (_BYTE *)v227 - (_BYTE *)Src;
            v53 = Src;
            v216 = -4LL - (_QWORD)Src;
            v54 = -4LL - (_QWORD)Src;
            v217 = v221;
            while ( 1 )
            {
              v55 = *((_QWORD *)v47 + 1);
              if ( !v55 )
              {
                v156 = WdLogNewEntry5_WdAssertion(0LL);
                WdLogEvent5_WdAssertion(v156);
                v55 = *((_QWORD *)v218 + 1);
              }
              if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v55 + 16)) )
              {
                if ( *(_DWORD *)&v51[v52 - 4] != *((_DWORD *)v51 - 1)
                  || *(_DWORD *)&v51[v52] != *(_DWORD *)v51
                  || *(_DWORD *)&v51[v52 + 4] != *((_DWORD *)v51 + 1)
                  || *(_DWORD *)&v51[v52 + 8] != *((_DWORD *)v51 + 2) )
                {
                  v158 = WdLogNewEntry5_WdAssertion(v56);
                  v159 = *(unsigned int *)&v51[v52 - 4];
LABEL_260:
                  *(_QWORD *)(v158 + 24) = v159;
LABEL_261:
                  WdLogEvent5_WdAssertion(v158);
                  *(_OWORD *)(v51 - 4) = *(_OWORD *)&v51[v52 - 4];
                  *(_OWORD *)(v51 + 12) = *(_OWORD *)&v51[v52 + 12];
                  *(_OWORD *)(v51 + 28) = *(_OWORD *)&v51[v52 + 28];
                  *(_QWORD *)(v51 + 44) = *(_QWORD *)&v51[v52 + 44];
                  *((_DWORD *)v51 + 7) = *((_DWORD *)v51 + 7) & 0xF0FFFFFF | 0xD000000;
                  *((_DWORD *)a5 + *(unsigned int *)v50 + 20) = -1073741437;
                  v49 = (char *)*(unsigned int *)v50;
                  *((_DWORD *)a5 + 19) |= 1 << (char)v49;
                  goto LABEL_54;
                }
                if ( *((_DWORD *)v51 + 3) >= 2u || *((_DWORD *)v51 + 7) >= 0x10000000u || v51[47] )
                {
                  v157 = WdLogNewEntry5_WdAssertion(v56);
                  *(_QWORD *)(v157 + 24) = *((unsigned int *)v51 - 1);
                  WdLogEvent5_WdAssertion(v157);
                }
                if ( !*(_QWORD *)(v51 + 20) )
                {
                  v158 = WdLogNewEntry5_WdAssertion(v56);
                  v159 = *((unsigned int *)v51 - 1);
                  goto LABEL_260;
                }
                v160 = *((_DWORD *)v51 + 7) & 0xF000000;
                if ( (((_DWORD)v160 - 201326592) & 0xFCFFFFFF) != 0
                  || (_DWORD)v160 == 251658240
                  || (v51[v52 + 8] & 3) == 3 && (_DWORD)v160 != 234881024 )
                {
                  v158 = WdLogNewEntry5_WdAssertion(v160);
                  *(_QWORD *)(v158 + 24) = HIBYTE(*((_DWORD *)v51 + 7)) & 0xF;
                  *(_QWORD *)(v158 + 32) = *((unsigned int *)v51 - 1);
                  goto LABEL_261;
                }
              }
              v49 = (char *)(*(_DWORD *)&v51[v54 + 32 + (_QWORD)v53] & 0xF000000);
              if ( (_DWORD)v49 == 218103808 )
              {
                if ( v208 )
                  *((_DWORD *)a5 + *(unsigned int *)v50 + 20) = -1073741506;
                v49 = (char *)*(unsigned int *)v50;
                v161 = v225;
                *((_DWORD *)a5 + 19) |= 1 << (char)v49;
                LOBYTE(v49) = *(_BYTE *)v161 & 0xFD | (v214 != 1 ? 2 : 0);
                *(_BYTE *)v161 = (_BYTE)v49;
              }
LABEL_54:
              v51 += 56;
              v50 = (struct DMMVIDPN *)((char *)v50 + 4);
              if ( !--v217 )
              {
                v29 = v223;
                v14 = v220;
                goto LABEL_56;
              }
              v47 = v218;
            }
          }
          *((_DWORD *)a5 + 19) = -1;
          FillFailedStatus(a5, v20);
          if ( v209 )
          {
            v49 = v46 + 16;
            v162 = v221;
            v163 = (char *)((_BYTE *)v227 - v46);
            do
            {
              *((_OWORD *)v49 - 1) = *(_OWORD *)&v49[(_QWORD)v163 - 16];
              *(_OWORD *)v49 = *(_OWORD *)&v49[(_QWORD)v163];
              *((_OWORD *)v49 + 1) = *(_OWORD *)&v49[(_QWORD)v163 + 16];
              *((_QWORD *)v49 + 4) = *(_QWORD *)&v49[(_QWORD)v163 + 32];
              *((_DWORD *)v49 + 4) = *((_DWORD *)v49 + 4) & 0xF0FFFFFF | 0xD000000;
              *(_DWORD *)v49 |= 1u;
              v49 += 56;
              --v162;
            }
            while ( v162 );
          }
          v213 = 1;
LABEL_56:
          if ( (v213 & 0xFFFFFFFE) != 0 )
          {
            v164 = WdLogNewEntry5_WdAssertion(v49);
            *(_QWORD *)(v164 + 24) = (unsigned __int64)v213 >> 1;
            WdLogEvent5_WdAssertion(v164);
          }
          if ( (v213 & 1) != 0 )
            *(_BYTE *)v225 |= 1u;
        }
        EtwActivityIdControl(3u, &ActivityId);
        if ( v209 )
        {
          v57 = v210;
          v220 = -32LL - (_QWORD)Src;
          v216 = v221;
          v58 = (char *)Src + 32;
          v225 = v210;
          do
          {
            v59 = *(_DWORD *)v57;
            v60 = *((_DWORD *)v58 - 8);
            v61 = 1 << v59;
            LODWORD(v217) = v59;
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v29, v60);
            v63 = TargetById;
            if ( TargetById )
            {
              v64 = &v58[v220];
              if ( v205 )
              {
                LogMonitorHandleOnOffState(
                  *((_QWORD *)TargetById + 14),
                  &ActivityId,
                  (*(_DWORD *)((char *)Src + (_QWORD)v64 + 12) >> 2) & 1);
                if ( v208 )
                {
                  DxgkLogCodePointPacket(
                    0x58u,
                    *((_DWORD *)v58 - 8),
                    v58[3] & 0xF | 0x80000000,
                    *((_DWORD *)v58 - 2),
                    *(_QWORD *)(v14 + 276));
                  DxgkLogCodePointPacket(0x59u, *((_DWORD *)v58 - 8), *((_DWORD *)v58 + 4), 0, *(_QWORD *)(v14 + 276));
                }
                v65 = *(_DWORD *)v58;
                v66 = *((_QWORD *)v63 + 65);
                if ( *(_DWORD *)(v66 + 24) != (HIBYTE(*(_DWORD *)v58) & 0xF) )
                {
                  *((_DWORD *)a5 + 9) |= v61;
                  v66 = *((_QWORD *)v63 + 65);
                  v65 = *(_DWORD *)v58;
                }
                v67 = *((_QWORD *)v58 - 1);
                *(_DWORD *)(v66 + 24) = HIBYTE(v65) & 0xF;
                *(_QWORD *)(*((_QWORD *)v63 + 65) + 16LL) = v67;
                if ( (*(_DWORD *)v58 & 0xF000000) == 0xC000000 )
                  DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v63, 1u);
                else
                  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v63);
              }
              else
              {
                *(_DWORD *)v58 = *(_DWORD *)&v64[(_QWORD)Src + 32] ^ (*(_DWORD *)&v64[(_QWORD)Src + 32] ^ (*(_DWORD *)(*((_QWORD *)TargetById + 65) + 24LL) << 24)) & 0xF000000;
              }
              if ( (*((_DWORD *)v58 - 5) & 4) != 0
                && (*(_DWORD *)v58 & 0xF000000) == 0xE000000
                && (v61 & *((_DWORD *)a5 + 17)) == 0 )
              {
                v68 = v215 | *((_DWORD *)a5 + 19);
                if ( !_bittest(&v68, v217) )
                {
                  DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v63, 1u, 1u);
                  if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v61) != 0 )
                  {
                    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v226, *((_DWORD *)v58 - 8));
                    DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget);
                  }
                }
              }
              if ( (*(_DWORD *)v58 & 0xF000000) != 0xD000000 && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v61) != 0 )
                MonitorSendAdjustedColorimetryToDriver(*((_QWORD *)v63 + 14), *((unsigned int *)v58 - 7));
            }
            v58 += 56;
            v57 = (struct DMMVIDPN *)((char *)v225 + 4);
            v70 = v216-- == 1;
            v225 = (struct DMMVIDPN *)((char *)v225 + 4);
          }
          while ( !v70 );
        }
        CVidSchSuspendResume::Resume(v230);
        v71 = *(_QWORD *)(v14 + 2520);
        v72 = 0;
        if ( *(_DWORD *)(v71 + 80) )
        {
          v73 = v215;
          while ( 1 )
          {
            v212 = 0;
            memset(v232, 0, sizeof(v232));
            v74 = 1 << v72;
            v75 = *((_DWORD *)a5 + 10);
            LODWORD(v216) = 1 << v72;
            if ( ((1 << v72) & *((_DWORD *)a5 + 3)) != 0 )
            {
              v212 = 2;
            }
            else if ( (v75 & v74) != 0 )
            {
              v212 = 4;
            }
            else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v74) != 0 )
            {
              v212 = (*(_DWORD *)a5 & v74) != 0 ? 3 : 1;
            }
            if ( ((*((_DWORD *)a5 + 2) | v75) & v74) != 0 )
            {
              DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v71, v72);
              v76 = v226;
              v119 = 0LL;
              v120 = 32;
              v121 = *((_OWORD *)DisplayModeInfo + 1);
              v122 = (char *)*((_QWORD *)v226 + 3);
              *(_OWORD *)v232 = *(_OWORD *)DisplayModeInfo;
              v123 = *((_OWORD *)DisplayModeInfo + 2);
              *(_OWORD *)&v232[16] = v121;
              *(_QWORD *)&v232[48] = *((_QWORD *)DisplayModeInfo + 6);
              *(_OWORD *)&v232[32] = v123;
              if ( v122 == (char *)v226 + 24 )
                goto LABEL_272;
              v122 -= 8;
              if ( !v122 )
                goto LABEL_272;
              do
              {
                if ( *(_DWORD *)(*((_QWORD *)v122 + 11) + 24LL) == v72 && *((_DWORD *)v122 + 26) < v120 )
                {
                  v119 = (DMMVIDPNPRESENTPATH *)v122;
                  v120 = *((_DWORD *)v122 + 26);
                }
                v124 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v122 + 1);
                v122 = (char *)v124 - 8;
                if ( v124 == (DMMVIDPNTOPOLOGY *)((char *)v226 + 24) )
                  v122 = 0LL;
              }
              while ( v122 );
              if ( v119 )
              {
                DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v119, (struct _D3DKMT_DISPLAYMODE *)v232);
              }
              else
              {
LABEL_272:
                v165 = (_QWORD *)WdLogNewEntry5_WdError(v122);
                v165[3] = v72;
                v165[4] = v76;
                v165[5] = -1071774919LL;
                WdLogEvent5_WdError(v165);
              }
            }
            else
            {
              v76 = v226;
            }
            if ( (v74 & *((_DWORD *)a5 + 19)) != 0 )
              goto LABEL_92;
            if ( (v74 & v73) == 0 )
              break;
LABEL_94:
            v71 = *(_QWORD *)(v14 + 2520);
            if ( ++v72 >= *(_DWORD *)(v71 + 80) )
            {
              v29 = v223;
              goto LABEL_96;
            }
          }
          if ( (v74 & *((_DWORD *)a5 + 10)) != 0 )
          {
            ADAPTER_DISPLAY::SetDisplayModeInfo(
              *(PERESOURCE ***)(v14 + 2520),
              v72,
              (const struct _DXGK_DISPLAYMODE_INFO *const)v232);
            OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
              *(_QWORD *)(*(_QWORD *)(v14 + 2520) + 104LL),
              v72,
              0LL,
              0LL,
              0,
              1);
            v237 = 11;
            v238 = 0LL;
            if ( (int)DxgkStatusChangeNotify(&v237) < 0 )
            {
              v167 = WdLogNewEntry5_WdAssertion(v166);
              *(_QWORD *)(v167 + 24) = 3135LL;
              WdLogEvent5_WdAssertion(v167);
            }
          }
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v74) != 0 )
          {
            MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v76, v72, &v219);
            v91 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
            if ( (int)v91 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
            {
              v168 = WdLogNewEntry5_WdAssertion(v91);
              WdLogEvent5_WdAssertion(v168);
            }
            v206 = 0;
            v92 = 0;
            if ( MostImportantVidPnPathTargetsFromSource >= 0 && v219 != -1 )
            {
              v93 = 0;
              if ( v209 )
              {
                v94 = v210;
                do
                {
                  if ( v72 == *((_DWORD *)v94 + v93) )
                  {
                    v95 = 56LL * v93;
                    if ( v219 == *(_DWORD *)((char *)Src + v95)
                      && (*(_DWORD *)((_BYTE *)Src + v95 + 32) & 0xF000000) == 0xE000000
                      && (*(_DWORD *)((_BYTE *)Src + v95 + 12) & 4) != 0
                      && (v74 & *((_DWORD *)a5 + 17)) == 0 )
                    {
                      *((_DWORD *)a5 + 18) |= v74;
                      v92 = 1;
                      v206 = 1;
                      break;
                    }
                    v94 = v210;
                  }
                  ++v93;
                }
                while ( v93 < v209 );
              }
            }
            v96 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(ADAPTER_DISPLAY **)(v14 + 2520), v72, v92, v214 == 4, a7);
            v98 = v96;
            if ( v96 < 0 )
            {
              v169 = (_QWORD *)WdLogNewEntry5_WdError(v97);
              v169[3] = v14;
              v169[4] = v72;
              v169[5] = v98;
              WdLogEvent5_WdError(v169);
              *((_DWORD *)a5 + v72 + 20) = v98;
              *((_DWORD *)a5 + 19) |= v216;
            }
            else
            {
              v99 = -1;
              if ( v206 )
                v99 = v219;
              v100 = 3760LL * v72;
              v101 = *(_QWORD *)(v14 + 2520);
              v220 = v100;
              *(_DWORD *)(*(_QWORD *)(v101 + 112) + v100 + 1068) = v99;
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v14 + 2520), v72, 0);
              v102 = v216;
              if ( ((unsigned int)v216 & *((_DWORD *)a5 + 3)) != 0 )
              {
                ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v14 + 2520), v72, 0);
                *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 2520) + 112LL) + v100 + 724) = 0;
                ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v14 + 2520), v72, &stru_1C00901F0);
                ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v14 + 2520), v72, 0LL);
              }
              else
              {
                if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v226, v72, &v234) < 0 || !v234 )
                {
                  v170 = WdLogNewEntry5_WdAssertion(v103);
                  WdLogEvent5_WdAssertion(v170);
                }
                if ( (v102 & *((_DWORD *)a5 + 2)) != 0 )
                {
                  *(_DWORD *)&v232[44] = 1;
                  *(_QWORD *)&v232[48] = 1LL;
                  if ( *(_QWORD *)(v14 + 2528) )
                  {
                    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                                   *(ADAPTER_DISPLAY **)(v14 + 2520),
                                                   v72);
                    v105 = DisplayedPrimaryAllocation;
                    if ( DisplayedPrimaryAllocation )
                    {
                      if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
                        v105 = 0LL;
                      if ( v105 )
                      {
                        memset(&v236, 0, sizeof(v236));
                        v106 = *(ADAPTER_RENDER **)(v14 + 2528);
                        v236.hAllocation = (HANDLE)*((_QWORD *)v105 + 2);
                        LODWORD(v217) = ADAPTER_RENDER::DdiDescribeAllocation(v106, &v236);
                        if ( (v217 & 0x80000000) != 0LL )
                        {
                          v172 = (_QWORD *)WdLogNewEntry5_WdWarning(v108, v107, v109);
                          v172[4] = v72;
                          v172[5] = (int)v217;
                          v172[3] = v105;
                          WdLogEvent5_WdWarning(v172);
                        }
                        else if ( v236.Width == *(_DWORD *)v232
                               && v236.Height == *(_DWORD *)&v232[4]
                               && v236.Format == *(_DWORD *)&v232[8]
                               && v236.RefreshRate.Numerator == *(_DWORD *)&v232[16]
                               && v236.RefreshRate.Denominator == *(_DWORD *)&v232[20]
                               && (v110 = ~(*(_DWORD *)&v232[40] >> 4),
                                   v108 = v110 ^ (unsigned int)~(*((_DWORD *)v105 + 1) >> 12),
                                   (((unsigned __int8)v110 ^ (unsigned __int8)~(*((_DWORD *)v105 + 1) >> 12)) & 1) == 0) )
                        {
                          *(D3DDDI_MULTISAMPLINGMETHOD *)&v232[44] = v236.MultisampleMethod;
                          *(_DWORD *)&v232[52] = v236.PrivateDriverFormatAttribute;
                        }
                        else if ( !v208 || (*((_DWORD *)v105 + 1) & 2) == 0 )
                        {
                          v171 = WdLogNewEntry5_WdAssertion(v108);
                          WdLogEvent5_WdAssertion(v171);
                        }
                      }
                    }
                  }
                  ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v14 + 2520), v72, 1u);
                  ADAPTER_DISPLAY::SetDisplayModeInfo(
                    *(PERESOURCE ***)(v14 + 2520),
                    v72,
                    (const struct _DXGK_DISPLAYMODE_INFO *const)v232);
                  v111 = *(_QWORD *)(v14 + 2520);
                  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v111 + 16)) )
                  {
                    v173 = WdLogNewEntry5_WdAssertion(v112);
                    *(_QWORD *)(v173 + 24) = 5734LL;
                    WdLogEvent5_WdAssertion(v173);
                  }
                  if ( v72 >= *(_DWORD *)(v111 + 80) )
                  {
                    v174 = WdLogNewEntry5_WdAssertion(v112);
                    *(_QWORD *)(v174 + 24) = 5735LL;
                    WdLogEvent5_WdAssertion(v174);
                  }
                  v113 = *(_QWORD *)(v111 + 112);
                  v114 = v220;
                  *(_DWORD *)(v113 + v220 + 1072) = *(_DWORD *)&v232[12];
                  ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v14 + 2520), v72);
                  v115 = v222;
                  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 2520) + 112LL) + v114 + 724) = (v102 & *((_DWORD *)a5 + 37)) != 0;
                  if ( v115 && v229 )
                    ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                      *(ADAPTER_DISPLAY **)(v14 + 2520),
                      v72,
                      *(struct DXGADAPTER **)(*((_QWORD *)v115 + 2) + 16LL));
                }
              }
            }
          }
LABEL_92:
          v77 = v212;
          if ( v212 )
          {
            v133 = *(_DWORD *)(*(_QWORD *)(v14 + 2520) + 240LL);
            CurrentProcess = PsGetCurrentProcess();
            ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
            VIDPN_MGR::CacheDisplayModeChangeRequest(
              (__int64)v218,
              v72,
              (__int64)v232,
              1u,
              *((_DWORD *)a5 + v72 + 20),
              v77,
              v133,
              ProcessImageFileName);
          }
          goto LABEL_94;
        }
LABEL_96:
        if ( v209 )
        {
          v78 = (unsigned int *)v210;
          v79 = (char *)Src + 32;
          do
          {
            v80 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v29, *((_DWORD *)v79 - 8));
            v81 = *((_DWORD *)v79 - 5) & 4;
            if ( v80 )
            {
              if ( !(_DWORD)v81
                || (*(_DWORD *)v79 & 0xF000000) != 0xE000000
                || (v82 = 1 << *v78, (v82 & *((_DWORD *)a5 + 17)) != 0)
                || (v82 & *((_DWORD *)a5 + 19)) != 0 )
              {
                DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v80, 0, (*(_DWORD *)v79 & 0xF000000) == 201326592);
              }
              if ( v208 && *((_BYTE *)v80 + 415) && ((*(_DWORD *)v79 & 0xF000000) != 0xE000000 || v79[16] != -1) )
              {
                v175 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v14 + 2520), *v78, 0, 0x800u, a7);
                v177 = v175;
                if ( v175 < 0 )
                {
                  v178 = (_QWORD *)WdLogNewEntry5_WdError(v176);
                  v179 = v210;
                  v178[3] = v14;
                  v178[4] = *(unsigned int *)v179;
                  v178[5] = v177;
                  WdLogEvent5_WdError(v178);
                }
                if ( (*(_DWORD *)v79 & 0xF000000) == 0xE000000 )
                {
                  v180 = *(_QWORD *)(v14 + 2528);
                  if ( v180 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v180 + 520) + 8LL) + 888LL))(
                      *(_QWORD *)(v180 + 528),
                      *(unsigned int *)v210);
                  }
                  else
                  {
                    v181 = *(_QWORD *)(*(_QWORD *)(v14 + 2520) + 264LL);
                    if ( v181 )
                      _InterlockedExchange(
                        (volatile __int32 *)(2704LL * *(unsigned int *)v210 + *(_QWORD *)(v181 + 8) + 856),
                        1);
                  }
                }
              }
              *((_BYTE *)v80 + 415) = 0;
            }
            else if ( (_DWORD)v81 )
            {
              v182 = WdLogNewEntry5_WdAssertion(v81);
              WdLogEvent5_WdAssertion(v182);
            }
            v83 = v210;
            if ( (*((_DWORD *)v79 - 4) & 1) != 0 )
              *((_DWORD *)a5 + 15) |= 1 << *(_DWORD *)v210;
            v78 = (unsigned int *)((char *)v83 + 4);
            v79 += 56;
            v70 = v221-- == 1;
            v210 = (struct DMMVIDPN *)v78;
          }
          while ( !v70 );
          v210 = (struct DMMVIDPN *)v224;
        }
        auto_rc<DMMVIDPN>::reset((__int64 *)v218 + 35, 0LL);
        CVidSchSuspendResume::Resume(v230);
        v85 = *(_QWORD *)(v14 + 2520);
        v86 = 0;
        if ( *(_DWORD *)(v85 + 80) )
        {
          do
          {
            v84 = v86;
            v87 = 1 << v86;
            if ( ((1 << v86) & *((_DWORD *)a5 + 14)) != 0 )
              ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource((ADAPTER_DISPLAY *)v85, v86);
            if ( (v87 & *((_DWORD *)a5 + 15)) != 0 )
              DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v14, v86);
            v88 = v222;
            if ( v222 && v208 )
            {
              if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v14 + 2520), v86, 0)
                && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v14 + 2520), v86) )
              {
                ADAPTER_DISPLAY::DestroyCddAllocations(v183, v88, v86);
              }
              v184 = *(DXGADAPTER ***)(v14 + 2520);
              v185 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v184, v86);
              ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)v184, v86, v185);
            }
            if ( (v87 & *((_DWORD *)a5 + 19)) != 0 )
            {
              v186 = *((_DWORD *)a5 + v86 + 38);
              if ( (v186 & 7) != 0 )
              {
                *((_DWORD *)a5 + 4 * (v186 & 7) + 54) = 0;
                DxgkLogCodePointPacket(0x65u, v86, *((_DWORD *)a5 + v86 + 38) & 7, 2u, *(_QWORD *)(v14 + 276));
              }
              v187 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(ADAPTER_DISPLAY **)(v14 + 2520), v86, 0, v214 == 4, a7);
              v189 = v187;
              if ( v187 < 0 )
              {
                v190 = (_QWORD *)WdLogNewEntry5_WdError(v188);
                v190[3] = v14;
                v190[4] = v86;
                v190[5] = v189;
                WdLogEvent5_WdError(v190);
              }
              if ( v231 )
              {
                v191 = (struct DMMVIDPN *)((char *)v231 + 96);
                v192 = (char *)v231 + 152;
                LOBYTE(v192) = 2;
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  v240,
                  ((unsigned __int64)v231 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v231 + 96) != 0LL),
                  v192);
                v193 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v191, v86);
                v194 = v193 + 0x80000000;
                if ( (int)v194 >= 0 && v193 != -1071774919 )
                {
                  v195 = WdLogNewEntry5_WdAssertion(v194);
                  WdLogEvent5_WdAssertion(v195);
                }
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v240);
              }
              if ( v222 )
                ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v14 + 2520), v222, v86);
              ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v14 + 2520), v86, 0);
              ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v14 + 2520), v86, &stru_1C00901F0);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v14 + 2520), v86, 0LL);
              v196 = 3760LL * v86;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 2520) + 112LL) + v196 + 1068) = -1;
              *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 2520) + 112LL) + v196 + 724) = 0;
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v14 + 2520), v86, 1);
            }
            v85 = *(_QWORD *)(v14 + 2520);
            ++v86;
          }
          while ( v86 < *(_DWORD *)(v85 + 80) );
          v29 = v223;
        }
        if ( v231 )
        {
          v125 = *((_DWORD *)a5 + 58);
          v84 = *((unsigned int *)a5 + 60);
          v126 = *((_DWORD *)a5 + 59);
          v127 = *((_DWORD *)a5 + 61) >> 1;
          *(_DWORD *)(v85 + 712) = v125;
          *(_DWORD *)(v85 + 716) = v126;
          *(_DWORD *)(v85 + 720) = v84;
          *(_DWORD *)(v85 + 752) = v127;
          if ( v125 )
          {
            if ( !*(_QWORD *)(v85 + 776) )
            {
              *(_BYTE *)(v85 + 728) = 1;
              *(_QWORD *)(v85 + 732) = 0LL;
              *(_QWORD *)(v85 + 740) = 0LL;
              *(_DWORD *)(v85 + 748) = 0;
              *(_QWORD *)(v85 + 760) = 0LL;
              *(_QWORD *)(v85 + 768) = 0LL;
              *(_DWORD *)(v85 + 496) = 0;
              *(_DWORD *)(v85 + 500) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
              v197 = operator new[](0xF90uLL, 0x4B677844u, (POOL_TYPE)512);
              *(_QWORD *)(v85 + 776) = v197;
              if ( v197 )
              {
                memset(v197, 0, 0xF90uLL);
                *(_QWORD *)(v85 + 784) = *(_QWORD *)(v85 + 776) + 384LL;
                KeSetTimerEx((PKTIMER)(v85 + 504), (LARGE_INTEGER)-40000000LL, 4000, (PKDPC)(v85 + 568));
              }
              else
              {
                v199 = WdLogNewEntry5_WdLowResource(v198);
                *(_QWORD *)(v199 + 24) = 6318LL;
                WdLogEvent5_WdLowResource(v199);
              }
              v210 = (struct DMMVIDPN *)v224;
            }
          }
          else
          {
            KeCancelTimer((PKTIMER)(v85 + 504));
            KeFlushQueuedDpcs();
            v84 = *(_QWORD *)(v85 + 776);
            if ( v84 )
            {
              operator delete[]((void *)v84);
              *(_QWORD *)(v85 + 776) = 0LL;
              *(_QWORD *)(v85 + 784) = 0LL;
            }
          }
          v128 = *(_QWORD *)(v14 + 2520);
          for ( i = 0; i < *(_DWORD *)(v128 + 80); v128 = *(_QWORD *)(v14 + 2520) )
          {
            v130 = i;
            v131 = *((_DWORD *)a5 + i++ + 38) & 7;
            v132 = *((_DWORD *)a5 + 4 * v131 + 54) != 0 ? v131 : 0;
            v84 = 3760 * v130;
            *(_DWORD *)(3760 * v130 + *(_QWORD *)(v128 + 112) + 3756) = v132;
          }
        }
        Global = DXGGLOBAL::GetGlobal(v84);
        QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 143));
        if ( Src )
          operator delete[](Src);
        operator delete[](v227);
        if ( v210 )
          operator delete[](v210);
        if ( v228 )
          operator delete[](v228);
        CVidSchSuspendResume::Resume(v230);
        if ( v29 )
          ReferenceCounted::Release((ReferenceCounted *)(v29 + 64));
        goto LABEL_127;
      }
      v33 = *(unsigned int *)(v31 + 540);
      if ( a7 )
      {
        if ( (_DWORD)v33 )
          goto LABEL_25;
      }
      else if ( !(_DWORD)v33 )
      {
        goto LABEL_25;
      }
      v141 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v141 + 24) = 2576LL;
      WdLogEvent5_WdAssertion(v141);
LABEL_25:
      if ( v32 >= 2200 )
      {
        v142 = 0;
        v143 = 0;
        v144 = 0;
        v145 = 0;
        v146 = 0;
        v147 = *(_DWORD *)(*(_QWORD *)(v14 + 2520) + 80LL);
        if ( v147 )
        {
          do
          {
            v148 = v144;
            v149 = 1 << v146;
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & (1 << v146)) != 0 )
            {
              v144 |= v149;
              v142 |= v149;
              if ( IsLegacyDisplayStateSynchronization )
                v144 = v148;
            }
            else if ( (v149 & *(_DWORD *)a5) != 0 )
            {
              v143 |= v149;
              if ( !a7 )
                v145 |= v149;
            }
            ++v146;
          }
          while ( v146 < v147 );
          v29 = v223;
          LODWORD(v20) = v212;
        }
        ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
          *(ADAPTER_RENDER **)(v14 + 2528),
          v142,
          v143,
          v144,
          v145);
        *((_DWORD *)a5 + 15) |= v144;
        if ( v145 )
          CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v230, v145);
      }
      else
      {
        ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v14 + 2528), 8LL, 0xFFFFFFFFLL, 0LL);
      }
      goto LABEL_27;
    }
    v139 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v139 + 24) = *(int *)(v14 + 280);
    *(_QWORD *)(v139 + 32) = *(unsigned int *)(v14 + 276);
    WdLogEvent5_WdWarning(v139);
  }
  return (unsigned int)v20;
}
