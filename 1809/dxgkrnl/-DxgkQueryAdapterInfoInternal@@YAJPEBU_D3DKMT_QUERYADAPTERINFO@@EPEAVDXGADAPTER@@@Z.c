/*
 * XREFs of ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C0114380 (DxgkQueryAdapterInfo.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F1E20 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C000A5AC (-IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C000E64C (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsGpuMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1C00116F8 (-IsGpuMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C00120A0 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00120CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00121E4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00122E8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0012320 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0012788 (-IsRenderAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C001281C (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00128E4 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00158A0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016318 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C001647C (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?VidSchQueryFlipQueueInfo@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_FLIPQUEUEINFO@@@Z @ 0x1C001D000 (-VidSchQueryFlipQueueInfo@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_FLIPQUEUEINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ @ 0x1C00308FC (-SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ.c)
 *     ?SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ @ 0x1C0030918 (-SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetOverlayStretchSupported@ADAPTER_RENDER@@QEAAEI@Z @ 0x1C0034B88 (-GetOverlayStretchSupported@ADAPTER_RENDER@@QEAAEI@Z.c)
 *     ?IsGpuVirtualAddressSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0034BC4 (-IsGpuVirtualAddressSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?SessionIsolatedContainerRequiresEmulation@DXGADAPTER@@QEBA_NXZ @ 0x1C0034D90 (-SessionIsolatedContainerRequiresEmulation@DXGADAPTER@@QEBA_NXZ.c)
 *     ?SetOverlayStretchSupported@ADAPTER_RENDER@@QEAAXIE@Z @ 0x1C0034DA4 (-SetOverlayStretchSupported@ADAPTER_RENDER@@QEAAXIE@Z.c)
 *     ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C0034E68 (-VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C0045148 (DxgkInvalidateDeviceState.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C00B3554 (DpiQueryAdapterRegistryInfo.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetDriverUpdateStatus@DXGADAPTER@@QEAAEPEAE@Z @ 0x1C00EE0B0 (-GetDriverUpdateStatus@DXGADAPTER@@QEAAEPEAE@Z.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C00F90E0 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0113280 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C012A864 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C012AB6C (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C012CAE4 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1C012D104 (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C012E988 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     DpiGetAdapterDeviceIds @ 0x1C0130054 (DpiGetAdapterDeviceIds.c)
 *     OutputDuplQueryActiveContextCount @ 0x1C013607C (OutputDuplQueryActiveContextCount.c)
 *     ?ReadBlockListInfo@DXGADAPTER@@QEAAJPEAU_D3DKMT_BLOCKLIST_INFO@@IE@Z @ 0x1C0141420 (-ReadBlockListInfo@DXGADAPTER@@QEAAJPEAU_D3DKMT_BLOCKLIST_INFO@@IE@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01416F0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C0147F00 (DpiFdoGetAdapterUniqueGUID.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C015BB5C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C01BD64C (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C01BD7F4 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C01BD884 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C01BD910 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01BEC54 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?CopyContentProtectionDriverName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01C5F00 (-CopyContentProtectionDriverName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01C5F30 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?CopyMiracastCompanionDriverName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01C5F94 (-CopyMiracastCompanionDriverName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C01D3020 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01D3268 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C01D3D0C (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C01D3E04 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C01F5754 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(
        const struct _D3DKMT_QUERYADAPTERINFO *a1,
        char a2,
        struct DXGADAPTER *a3)
{
  DXGADAPTER *v6; // r14
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __m128i v10; // xmm1
  size_t v11; // xmm0_8
  char *v12; // rbx
  size_t v13; // r13
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int *v18; // r15
  enum _KMTQUERYADAPTERINFOTYPE v19; // edi
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGADAPTER **v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 AdapterUniqueGUID; // rbx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int PairingAdapters; // r12d
  DXGADAPTER *v33; // rcx
  __int64 v34; // rcx
  DXGADAPTER *v35; // rcx
  int v36; // eax
  bool v37; // cl
  DXGADAPTER *v38; // rcx
  struct DXGADAPTER *v39; // r8
  DXGADAPTER *v40; // rcx
  int *AdapterType; // rax
  int v42; // ecx
  size_t v43; // rsi
  void *v44; // rcx
  DXGADAPTER *v45; // rcx
  DXGADAPTER *v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // rsi
  struct DXGPROCESS *v51; // rsi
  __int64 v52; // rax
  const GUID *v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int NumDifferentPhysicalAdapters; // esi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  DXGADAPTER *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  struct DXGADAPTER *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rax
  DXGADAPTER *v78; // rcx
  DXGADAPTER *v79; // rcx
  size_t v80; // r8
  __int64 v81; // rax
  bool v82; // zf
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  _QWORD *v94; // rax
  __int64 HostSilo; // rax
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rcx
  char *v99; // r8
  unsigned __int16 v100; // ax
  int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // rax
  unsigned int v104; // esi
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  UINT v109; // eax
  DXGADAPTER *v110; // rax
  __int64 v111; // rax
  DXGADAPTER *v112; // rax
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // rsi
  __int64 v119; // rcx
  unsigned int v120; // edx
  ADAPTER_RENDER *v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  struct DXGADAPTER *v126; // rcx
  DXGADAPTER *v127; // [rsp+50h] [rbp-248h] BYREF
  char v128; // [rsp+58h] [rbp-240h]
  unsigned __int8 v129[7]; // [rsp+59h] [rbp-23Fh] BYREF
  DXGADAPTER *v130; // [rsp+60h] [rbp-238h] BYREF
  struct DXGADAPTER *v131; // [rsp+68h] [rbp-230h] BYREF
  int v132; // [rsp+70h] [rbp-228h] BYREF
  __int64 v133; // [rsp+78h] [rbp-220h]
  char v134; // [rsp+80h] [rbp-218h]
  struct DXGPROCESS *Current; // [rsp+88h] [rbp-210h]
  size_t v136; // [rsp+90h] [rbp-208h]
  unsigned int v137; // [rsp+98h] [rbp-200h]
  unsigned int v138; // [rsp+9Ch] [rbp-1FCh]
  BOOL IsRemoteConnection; // [rsp+A0h] [rbp-1F8h]
  void *v140; // [rsp+A8h] [rbp-1F0h]
  size_t v141; // [rsp+B0h] [rbp-1E8h]
  unsigned __int64 v142; // [rsp+B8h] [rbp-1E0h] BYREF
  unsigned __int64 v143; // [rsp+C0h] [rbp-1D8h] BYREF
  void *v144; // [rsp+C8h] [rbp-1D0h]
  unsigned int v145[4]; // [rsp+D0h] [rbp-1C8h]
  _BYTE v146[16]; // [rsp+E0h] [rbp-1B8h] BYREF
  unsigned int v147; // [rsp+F0h] [rbp-1A8h]
  unsigned __int64 v148; // [rsp+F8h] [rbp-1A0h] BYREF
  struct DXGDEVICE *v149; // [rsp+100h] [rbp-198h] BYREF
  char v150[8]; // [rsp+108h] [rbp-190h] BYREF
  unsigned int *v151; // [rsp+110h] [rbp-188h]
  int v152; // [rsp+118h] [rbp-180h] BYREF
  _BYTE v153[24]; // [rsp+120h] [rbp-178h] BYREF
  _DXGKARG_QUERYADAPTERINFO v154; // [rsp+138h] [rbp-160h] BYREF
  __m128i v155; // [rsp+168h] [rbp-130h]
  size_t Size; // [rsp+178h] [rbp-120h]
  _BYTE v157[24]; // [rsp+180h] [rbp-118h] BYREF
  _D3DKMT_QUERYADAPTERINFO v158; // [rsp+198h] [rbp-100h] BYREF
  _BYTE v159[32]; // [rsp+1B0h] [rbp-E8h] BYREF
  _BYTE v160[80]; // [rsp+1D0h] [rbp-C8h] BYREF
  __int64 v161; // [rsp+220h] [rbp-78h] BYREF
  __int64 v162; // [rsp+228h] [rbp-70h]
  int v163; // [rsp+230h] [rbp-68h]
  wchar_t Str2[20]; // [rsp+238h] [rbp-60h] BYREF

  v128 = a2;
  v132 = -1;
  v6 = 0LL;
  v133 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v134 = 1;
    v132 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerEnter, 0LL, 2015);
  }
  else
  {
    v134 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v132, 2015);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v81 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v81 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v81);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
    v82 = v134 == 0;
LABEL_217:
    if ( v82 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_224:
    McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v132);
    return 3221225485LL;
  }
  v140 = 0LL;
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v10 = *(__m128i *)&a1->hAdapter;
    v11 = *(_QWORD *)&a1->PrivateDriverDataSize;
  }
  else
  {
    v10 = *(__m128i *)&a1->hAdapter;
    v11 = *(_QWORD *)&a1->PrivateDriverDataSize;
  }
  Size = v11;
  v141 = v11;
  v155 = v10;
  *(__m128i *)v145 = v10;
  v12 = (char *)_mm_srli_si128(v10, 8).m128i_u64[0];
  v144 = v12;
  if ( !v12 )
  {
    v20 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
    if ( v134 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v132);
    return 3221225485LL;
  }
  v13 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    v22 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
    if ( v134 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v132);
    return 3221225485LL;
  }
  v14 = (Size + 7) & 0xFFFFFFF8;
  v147 = v14;
  if ( v14 < (unsigned int)Size )
  {
    v23 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    *(_QWORD *)(v23 + 32) = 2586LL;
    WdLogEvent5_WdWarning(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
    if ( v134 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v132);
    return 3221225485LL;
  }
  v18 = (unsigned int *)operator new[](v14, 0x4B677844u, (POOL_TYPE)512);
  v151 = v18;
  v140 = v18;
  if ( !v18 )
  {
    v24 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v24 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
    if ( v134 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v132);
    return 3221225495LL;
  }
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v145, 4));
  if ( v19 >= KMTQAITYPE_WDDM_1_2_CAPS && v19 < KMTQAITYPE_MULTIPLANEOVERLAY_HUD_SUPPORT
    || v19 >= KMTQAITYPE_MODELIST && v19 < KMTQAITYPE_OUTPUTDUPLCONTEXTSCOUNT
    || v19 < KMTQAITYPE_SETWORKINGSETINFO && v19 >= KMTQAITYPE_UMOPENGLINFO
    || v19 >= KMTQAITYPE_CPDRIVERNAME && v19 < KMTQAITYPE_PHYSICALADAPTERDEVICEIDS )
  {
LABEL_14:
    v136 = v13;
    memset(v18, 0, v13);
  }
  else
  {
    switch ( v19 )
    {
      case KMTQAITYPE_UMDRIVERNAME:
      case KMTQAITYPE_SETWORKINGSETINFO:
      case KMTQAITYPE_CURRENTDISPLAYMODE:
      case KMTQAITYPE_OUTPUTDUPLCONTEXTSCOUNT:
      case KMTQAITYPE_MULTIPLANEOVERLAY_HUD_SUPPORT:
      case KMTQAITYPE_NODEMETADATA:
      case KMTQAITYPE_PHYSICALADAPTERDEVICEIDS:
      case KMTQAITYPE_QUERY_GPUMMU_CAPS:
      case KMTQAITYPE_PHYSICALADAPTERPNPKEY:
      case KMTQAITYPE_GETSEGMENTGROUPSIZE:
      case KMTQAITYPE_MULTIPLANEOVERLAY_STRETCH_SUPPORT:
      case KMTQAITYPE_GET_DEVICE_VIDPN_OWNERSHIP_INFO:
      case KMTQAITYPE_QUERYREGISTRY:
      case KMTQAITYPE_BLOCKLIST_KERNEL:
      case KMTQAITYPE_BLOCKLIST_RUNTIME:
      case KMTQAITYPE_NODEPERFDATA:
      case KMTQAITYPE_ADAPTERPERFDATA:
      case KMTQAITYPE_ADAPTERPERFDATA_CAPS:
      case KMTQUITYPE_GPUVERSION:
        if ( v128 )
        {
          v136 = v13;
          if ( &v12[v13] < v12 || (unsigned __int64)&v12[v13] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v18, v12, v13);
        }
        else
        {
          v136 = v13;
          memmove(v18, v12, v13);
        }
        break;
      default:
        goto LABEL_14;
    }
  }
  IsRemoteConnection = 0;
  if ( v19 == KMTQAITYPE_OUTPUTDUPLCONTEXTSCOUNT )
    IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current);
  v130 = 0LL;
  if ( v128 )
    v25 = &v130;
  else
    v25 = 0LL;
  v138 = _mm_cvtsi128_si32(*(__m128i *)v145);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v146, v138, (struct _KTHREAD **)Current, v25, 1);
  if ( v128 )
    a3 = v130;
  else
    v130 = a3;
  if ( !a3 )
  {
    v83 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v83 + 24) = v138;
    *(_QWORD *)(v83 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v83);
    operator delete[](v18);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
    v82 = v134 == 0;
    goto LABEL_217;
  }
  LODWORD(AdapterUniqueGUID) = 0;
  v30 = 0;
  v137 = 0;
  if ( v19 != KMTQAITYPE_CURRENTDISPLAYMODE )
    goto LABEL_54;
  if ( (_DWORD)v13 != 48 )
  {
    v84 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v84 + 24) = v136;
    *(_QWORD *)(v84 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v84);
    operator delete[](v18);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
    if ( !v134 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_224;
  }
  v30 = *v18;
  v137 = *v18;
LABEL_54:
  PairingAdapters = DxgkpGetPairingAdapters(a3, v30, &v127, &v142, &v131, &v148);
  if ( PairingAdapters < 0 && v19 != KMTQAITYPE_CURRENTDISPLAYMODE )
  {
    v131 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v130, v137, &v127, &v142, 0LL, 0LL);
  }
  if ( PairingAdapters >= 0 )
  {
    v33 = v131;
    if ( v127 != v130 && v131 != v130 )
    {
      v86 = WdLogNewEntry5_WdAssertion(v131);
      *(_QWORD *)(v86 + 24) = 2741LL;
      WdLogEvent5_WdAssertion(v86);
      v33 = v131;
    }
    if ( v33 && !DXGADAPTER::IsDisplayAdapter(v33) )
    {
      v87 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v87 + 24) = 2743LL;
      WdLogEvent5_WdAssertion(v87);
    }
    v35 = v127;
    if ( !v127 || !DXGADAPTER::IsRenderAdapter(v127) )
    {
      v88 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v88 + 24) = 2745LL;
      WdLogEvent5_WdAssertion(v88);
    }
    v37 = 0;
    if ( (unsigned int)v19 <= KMTQAITYPE_XBOX )
    {
      v36 = 138619200;
      if ( _bittest(&v36, v19) )
        v37 = 1;
    }
    if ( v130 == v127 && *((_BYTE *)v130 + 185) || v127 && *((_BYTE *)v127 + 185) && !v37 )
    {
      if ( (unsigned int)v19 > KMTQAITYPE_ADAPTERTYPE_RENDER
        || (v89 = 0x210F85840908010LL, !_bittest64(&v89, (unsigned int)v19)) )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v159, v127, 1);
        if ( DXGADAPTER::IsActive(v127) )
        {
          *(_QWORD *)&v158.hAdapter = *(_QWORD *)v145;
          *(_QWORD *)&v158.PrivateDriverDataSize = v141;
          v158.pPrivateDriverData = v18;
          v90 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                  (DXGADAPTER *)((char *)v127 + 4152),
                  Current,
                  &v158,
                  v14);
          AdapterUniqueGUID = v90;
          if ( v90 >= 0 )
          {
            LODWORD(AdapterUniqueGUID) = PostProcessUMDFileName(v19, v18, v14);
          }
          else
          {
            v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v92, v91, v93);
            v94[3] = v138;
            v94[4] = AdapterUniqueGUID;
            v94[5] = 2794LL;
            WdLogEvent5_WdWarning(v94);
          }
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v159);
          v43 = v136;
        }
        else
        {
          LODWORD(AdapterUniqueGUID) = -1073741130;
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v159);
          v43 = v136;
        }
        goto LABEL_93;
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v160, v127, v131);
    DXGADAPTER::ReleaseReference(v127);
    if ( v131 )
      DXGADAPTER::ReleaseReference(v131);
    if ( v19 != KMTQAITYPE_CURRENTDISPLAYMODE )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v157, v127, 1);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v153, v131, 0);
      if ( v131 && v131 != v127 )
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v153);
      if ( DXGADAPTER::IsActive(v130) )
      {
        v39 = v131;
        if ( !v131 )
          goto LABEL_79;
        if ( DXGADAPTER::IsActive(v131) )
        {
          v39 = v131;
LABEL_79:
          switch ( v19 )
          {
            case KMTQAITYPE_UMDRIVERPRIVATE:
              memset(&v154, 0, sizeof(v154));
              v154.Type = DXGKQAITYPE_UMDRIVERPRIVATE;
              v154.pOutputData = v18;
              v154.OutputDataSize = v13;
              v51 = Current;
              if ( (*((_BYTE *)Current + 323) & 8) != 0 )
              {
                v154.Flags.Value |= 1u;
                v109 = v154.Flags.Value ^ (*(_BYTE *)&v154.Flags.0 ^ (unsigned __int8)(2
                                                                                     * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)Current + 57) + 456LL)
                                                                                                + 248LL))) & 2;
LABEL_267:
                v154.Flags.Value = v109;
                goto LABEL_132;
              }
              if ( (*((_BYTE *)Current + 324) & 1) != 0 && DXGADAPTER::SessionIsolatedContainerRequiresEmulation(v127) )
              {
                v109 = v154.Flags.Value & 0xFFFFFFFC | 1;
                goto LABEL_267;
              }
LABEL_132:
              AdapterUniqueGUID = *((_QWORD *)v127 + 316);
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx(AdapterUniqueGUID + 56, 0LL);
              v52 = *(_QWORD *)(*((_QWORD *)v51 + 6) + 8LL * *((unsigned int *)v127 + 52));
              if ( v52 )
                v154.hKmdProcessHandle = *(HANDLE *)(v52 + 16);
              ExReleasePushLockSharedEx(AdapterUniqueGUID + 56, 0LL);
              KeLeaveCriticalRegion();
              LODWORD(AdapterUniqueGUID) = DXGADAPTER::DdiQueryAdapterInfo(v127, &v154, v53);
LABEL_87:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v153);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
              break;
            case KMTQAITYPE_UMDRIVERNAME:
              if ( (_DWORD)v13 != 524 )
                goto LABEL_246;
              v47 = ADAPTER_RENDER::CopyUmdFileName(
                      *((ADAPTER_RENDER **)v127 + 316),
                      (struct _D3DKMT_UMDFILENAMEINFO *)v18);
              goto LABEL_120;
            case KMTQAITYPE_UMOPENGLINFO:
              if ( (_DWORD)v13 != 528 )
                goto LABEL_246;
              v98 = *((_QWORD *)v127 + 316);
              if ( (*((_BYTE *)Current + 323) & 1) != 0 )
              {
                v18[130] = *(_DWORD *)(v98 + 496);
                v18[131] = *(_DWORD *)(v98 + 500);
                v99 = *(char **)(v98 + 488);
                v100 = *(_WORD *)(v98 + 480);
              }
              else
              {
                v18[130] = *(_DWORD *)(v98 + 472);
                v18[131] = *(_DWORD *)(v98 + 476);
                v99 = *(char **)(v98 + 464);
                v100 = *(_WORD *)(v98 + 456);
              }
              v101 = RtlStringCbCopyNW((char *)v18, 520LL, v99, v100);
              AdapterUniqueGUID = v101;
              if ( v101 < 0 )
              {
                v103 = WdLogNewEntry5_WdError(v102);
                *(_QWORD *)(v103 + 24) = AdapterUniqueGUID;
                WdLogEvent5_WdError(v103);
              }
              goto LABEL_87;
            case KMTQAITYPE_GETSEGMENTSIZE:
              if ( (_DWORD)v13 != 24 )
                goto LABEL_246;
              VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                *(VIDMM_EXPORT **)(*((_QWORD *)v127 + 316) + 544LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v127 + 316) + 552LL),
                0,
                &v143,
                &v143,
                &v143,
                (unsigned __int64 *)v18,
                (unsigned __int64 *)v18 + 1,
                (unsigned __int64 *)v18 + 2);
              LODWORD(AdapterUniqueGUID) = 0;
              goto LABEL_87;
            case KMTQAITYPE_ADAPTERGUID:
            case KMTQAITYPE_ADAPTERGUID_RENDER:
              if ( (_DWORD)v13 != 16 )
                goto LABEL_246;
              v110 = v127;
              if ( v19 == KMTQAITYPE_ADAPTERGUID )
                v110 = v130;
              if ( !v110 )
                goto LABEL_273;
              *(_OWORD *)v18 = *(_OWORD *)((char *)v110 + 260);
              LODWORD(AdapterUniqueGUID) = 0;
              goto LABEL_87;
            case KMTQAITYPE_FLIPQUEUEINFO:
              if ( (_DWORD)v13 != 12 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = VIDSCH_EXPORT::VidSchQueryFlipQueueInfo(
                                             *(VIDSCH_EXPORT **)(*((_QWORD *)v127 + 316) + 520LL),
                                             *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v127 + 316) + 528LL),
                                             (struct _D3DKMT_FLIPQUEUEINFO *)v18);
              goto LABEL_87;
            case KMTQAITYPE_ADAPTERADDRESS:
            case KMTQAITYPE_ADAPTERADDRESS_RENDER:
              if ( (_DWORD)v13 != 12 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = -1073741823;
              v112 = v127;
              if ( v19 == KMTQAITYPE_ADAPTERADDRESS )
                v112 = v130;
              if ( v112 )
              {
                v113 = *(_QWORD *)(*((_QWORD *)v112 + 24) + 64LL);
                *v18 = *(_DWORD *)(v113 + 1136);
                v18[1] = *(unsigned __int16 *)(v113 + 1142);
                v18[2] = (unsigned __int16)*(_DWORD *)(v113 + 1140);
                LODWORD(AdapterUniqueGUID) = 0;
              }
              goto LABEL_87;
            case KMTQAITYPE_SETWORKINGSETINFO:
              if ( (_DWORD)v13 != 12 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = VIDMM_EXPORT::VidMmSetWorkingSetInformation(
                                             *(VIDMM_EXPORT **)(*((_QWORD *)v127 + 316) + 544LL),
                                             Current,
                                             (struct _D3DKMT_WORKINGSETINFO *)v18);
              goto LABEL_87;
            case KMTQAITYPE_ADAPTERREGISTRYINFO:
            case KMTQAITYPE_ADAPTERREGISTRYINFO_RENDER:
              if ( (_DWORD)v13 != 2080 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = -1073741823;
              if ( v19 == KMTQAITYPE_ADAPTERREGISTRYINFO )
                v78 = v130;
              else
                v78 = v127;
              if ( v78 )
                LODWORD(AdapterUniqueGUID) = DpiQueryAdapterRegistryInfo(*((_QWORD *)v78 + 24), (char *)v18);
              goto LABEL_87;
            case KMTQAITYPE_CHECKDRIVERUPDATESTATUS:
            case KMTQAITYPE_CHECKDRIVERUPDATESTATUS_RENDER:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              v129[0] = 0;
              LODWORD(AdapterUniqueGUID) = -1073741823;
              if ( v19 == KMTQAITYPE_CHECKDRIVERUPDATESTATUS )
                v50 = (__int64 *)v130;
              else
                v50 = (__int64 *)v127;
              if ( !v50 )
                goto LABEL_87;
              *v18 = DXGADAPTER::GetDriverUpdateStatus((DXGADAPTER *)v50, v129);
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v153);
              if ( v129[0] )
              {
                DxgkInvalidateDeviceState(v50[24]);
                LODWORD(AdapterUniqueGUID) = 0;
              }
              else
              {
LABEL_129:
                LODWORD(AdapterUniqueGUID) = 0;
              }
              goto LABEL_87;
            case KMTQAITYPE_VIRTUALADDRESSINFO:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              *v18 = 0;
              *v18 ^= (*v18 ^ ADAPTER_RENDER::IsGpuVirtualAddressSupported(*((ADAPTER_RENDER **)v127 + 316))) & 1;
              LODWORD(AdapterUniqueGUID) = 0;
              goto LABEL_87;
            case KMTQAITYPE_DRIVERVERSION:
            case KMTQAITYPE_DRIVERVERSION_RENDER:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = -1073741823;
              if ( v19 == KMTQAITYPE_DRIVERVERSION )
                v63 = v130;
              else
                v63 = v127;
              if ( v63 )
              {
                *v18 = DXGADAPTER::GetDriverVersion(v63);
                LODWORD(AdapterUniqueGUID) = 0;
              }
              goto LABEL_87;
            case KMTQAITYPE_ADAPTERTYPE:
            case KMTQAITYPE_ADAPTERTYPE_RENDER:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = -1073741823;
              if ( v19 == KMTQAITYPE_ADAPTERTYPE )
                v40 = v130;
              else
                v40 = v127;
              if ( v40 )
              {
                AdapterType = DXGADAPTER::GetAdapterType(v40, &v152);
                v42 = *AdapterType;
                *v18 = *AdapterType;
                if ( v127 )
                  *v18 = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)(*((unsigned __int8 *)v127 + 188) << 8)) & 0x100;
                LODWORD(AdapterUniqueGUID) = 0;
              }
              goto LABEL_87;
            case KMTQAITYPE_OUTPUTDUPLCONTEXTSCOUNT:
              if ( (_DWORD)v13 != 8 )
                goto LABEL_246;
              if ( !*((_BYTE *)DXGPROCESS::GetCurrent() + 322) )
                goto LABEL_191;
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v153);
              if ( !IsRemoteConnection )
                v6 = v130;
              LODWORD(AdapterUniqueGUID) = OutputDuplQueryActiveContextCount(v6, v18);
              goto LABEL_87;
            case KMTQAITYPE_WDDM_1_2_CAPS:
            case KMTQAITYPE_WDDM_1_2_CAPS_RENDER:
              if ( (_DWORD)v13 != 12 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = -1073741823;
              if ( v19 == KMTQAITYPE_WDDM_1_2_CAPS )
                v46 = v130;
              else
                v46 = v127;
              if ( v46 )
              {
                DXGADAPTER::QueryWDDM1_2Caps(v46, (struct _D3DKMT_WDDM_1_2_CAPS *)v18);
                LODWORD(AdapterUniqueGUID) = 0;
              }
              goto LABEL_87;
            case KMTQAITYPE_UMD_DRIVER_VERSION:
              if ( (_DWORD)v13 != 8 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = ADAPTER_RENDER::GetUmdFileVersion(
                                             *((ADAPTER_RENDER **)v127 + 316),
                                             (union _LARGE_INTEGER *)v18);
              goto LABEL_87;
            case KMTQAITYPE_DIRECTFLIP_SUPPORT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v127 + 316) + 16LL) + 2363LL) )
                goto LABEL_175;
              goto LABEL_155;
            case KMTQAITYPE_MULTIPLANEOVERLAY_SUPPORT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v127 + 316)) )
                goto LABEL_175;
              *v18 = 1;
              goto LABEL_87;
            case KMTQAITYPE_DLIST_DRIVER_NAME:
              if ( (_DWORD)v13 != 520 )
                goto LABEL_246;
              if ( (_BYTE)word_1C008E75C && (v38 = v127, *((_BYTE *)v127 + 2367)) )
              {
                v47 = ADAPTER_RENDER::CopyDListFileName(
                        *((ADAPTER_RENDER **)v127 + 316),
                        (unsigned __int16 *)v18,
                        0x208u);
LABEL_120:
                AdapterUniqueGUID = v47;
                if ( v47 < 0 )
                {
                  v96 = (_QWORD *)WdLogNewEntry5_WdEvent(v49, v48);
                  v96[3] = v18;
                  v96[4] = v127;
                  v96[5] = AdapterUniqueGUID;
                  WdLogEvent5_WdEvent(v96);
                }
              }
              else
              {
                v97 = (_QWORD *)WdLogNewEntry5_WdEvent(v38, 0x1C0000000uLL);
                v97[3] = v18;
                v97[4] = v127;
                LODWORD(AdapterUniqueGUID) = -1073741637;
                v97[5] = -1073741637LL;
                WdLogEvent5_WdEvent(v97);
              }
              goto LABEL_87;
            case KMTQAITYPE_WDDM_1_3_CAPS:
            case KMTQAITYPE_WDDM_1_3_CAPS_RENDER:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = -1073741823;
              if ( v19 == KMTQAITYPE_WDDM_1_3_CAPS )
                v45 = v130;
              else
                v45 = v127;
              if ( v45 )
              {
                DXGADAPTER::QueryWDDM1_3Caps(v45, (struct _D3DKMT_WDDM_1_3_CAPS *)v18);
                LODWORD(AdapterUniqueGUID) = 0;
              }
              goto LABEL_87;
            case KMTQAITYPE_MULTIPLANEOVERLAY_HUD_SUPPORT:
              if ( (_DWORD)v13 != 16 )
                goto LABEL_246;
              if ( !v18[1] )
                goto LABEL_207;
              if ( !*((_BYTE *)DXGPROCESS::GetCurrent() + 322) )
              {
LABEL_191:
                LODWORD(AdapterUniqueGUID) = -1073741790;
                v77 = WdLogNewEntry5_WdWarning(v65, v64, v66);
                *(_QWORD *)(v77 + 24) = -1073741790LL;
                goto LABEL_192;
              }
              if ( v18[1] )
              {
                *(_DWORD *)(*((_QWORD *)v127 + 316) + 984LL) = v18[3];
              }
              else
              {
LABEL_207:
                v18[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v127 + 316));
                v18[3] = *(_DWORD *)(*((_QWORD *)v127 + 316) + 984LL);
              }
              goto LABEL_87;
            case KMTQAITYPE_WDDM_2_0_CAPS:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              DXGADAPTER::QueryWDDM2_0Caps(v127, (struct _D3DKMT_WDDM_2_0_CAPS *)v18);
              goto LABEL_87;
            case KMTQAITYPE_NODEMETADATA:
              if ( (_DWORD)v13 != 78 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = DXGADAPTER::QueryNodeMetadata(
                                             v127,
                                             *v18,
                                             (struct _DXGK_NODEMETADATA *)(v18 + 1));
              goto LABEL_87;
            case KMTQAITYPE_CPDRIVERNAME:
              if ( (_DWORD)v13 != 520 )
                goto LABEL_246;
              v47 = ADAPTER_RENDER::CopyContentProtectionDriverName(
                      *((ADAPTER_RENDER **)v127 + 316),
                      (unsigned __int16 *)v18,
                      0x208u);
              goto LABEL_120;
            case KMTQAITYPE_XBOX:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              *v18 = DXGADAPTER::IsXBoxOneDevice(v130);
              goto LABEL_87;
            case KMTQAITYPE_INDEPENDENTFLIP_SUPPORT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v127 + 316) + 16LL) + 1884LL) & 0x10) == 0 )
                goto LABEL_175;
              *v18 = 1;
              goto LABEL_87;
            case KMTQAITYPE_MIRACASTCOMPANIONDRIVERNAME:
              if ( (_DWORD)v13 != 520 )
                goto LABEL_246;
              v47 = ADAPTER_RENDER::CopyMiracastCompanionDriverName(
                      *((ADAPTER_RENDER **)v127 + 316),
                      (unsigned __int16 *)v18,
                      0x208u);
              goto LABEL_120;
            case KMTQAITYPE_PHYSICALADAPTERCOUNT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              *v18 = DXGADAPTER::GetNumDifferentPhysicalAdapters(v127);
              LODWORD(AdapterUniqueGUID) = 0;
              goto LABEL_87;
            case KMTQAITYPE_PHYSICALADAPTERDEVICEIDS:
              if ( (_DWORD)v13 != 28 )
                goto LABEL_246;
              v54 = *v18;
              if ( (unsigned int)v54 < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v127) )
              {
                DpiGetAdapterDeviceIds(*(_QWORD *)(352 * v54 + *((_QWORD *)v127 + 302) + 8), v18 + 1);
                LODWORD(AdapterUniqueGUID) = 0;
                goto LABEL_87;
              }
              LODWORD(AdapterUniqueGUID) = -1073741811;
              v77 = WdLogNewEntry5_WdWarning(v56, v55, v57);
              *(_QWORD *)(v77 + 24) = v54;
              goto LABEL_342;
            case KMTQAITYPE_DRIVERCAPS_EXT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              QueryDriverCapsExt(v39, (struct _D3DKMT_DRIVERCAPS_EXT *)v18);
              goto LABEL_87;
            case KMTQAITYPE_QUERY_MIRACAST_DRIVER_TYPE:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              v161 = 0LL;
              v162 = 0LL;
              v163 = 0;
              v114 = DxgkMiracastQueryMiracastSupportInternal(&v161);
              v118 = v114;
              if ( v114 == -1073741637 )
              {
                *v18 = 0;
                goto LABEL_87;
              }
              if ( v114 < 0 )
              {
                LODWORD(AdapterUniqueGUID) = v114;
                v77 = WdLogNewEntry5_WdWarning(v116, v115, v117);
                *(_QWORD *)(v77 + 24) = v118;
                goto LABEL_192;
              }
              *v18 = 2 - ((_BYTE)v162 != 0);
              goto LABEL_87;
            case KMTQAITYPE_QUERY_GPUMMU_CAPS:
              if ( (_DWORD)v13 != 12 )
                goto LABEL_246;
              NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v127);
              if ( !DXGADAPTER::IsGpuMmuSupported(v127) )
              {
                LODWORD(AdapterUniqueGUID) = -1073741811;
                v77 = WdLogNewEntry5_WdWarning(v60, v59, v61);
                *(_QWORD *)(v77 + 24) = -1073741811LL;
                goto LABEL_192;
              }
              v62 = *v18;
              if ( (unsigned int)v62 < NumDifferentPhysicalAdapters )
              {
                ADAPTER_RENDER::QueryGpuMmuCaps(
                  *((ADAPTER_RENDER **)v127 + 316),
                  v62,
                  (struct _D3DKMT_GPUMMU_CAPS *)(v18 + 1));
                goto LABEL_87;
              }
              LODWORD(AdapterUniqueGUID) = -1073741811;
              v77 = WdLogNewEntry5_WdWarning(v60, v62, v61);
              v119 = *v18;
LABEL_341:
              *(_QWORD *)(v77 + 24) = v119;
              goto LABEL_342;
            case KMTQAITYPE_QUERY_MULTIPLANEOVERLAY_DECODE_SUPPORT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v127 + 316) + 16LL) + 2461LL) )
                goto LABEL_175;
              *v18 = 1;
              goto LABEL_87;
            case KMTQAITYPE_QUERY_HW_PROTECTION_TEARDOWN_COUNT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              *v18 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v38) + 284);
              goto LABEL_87;
            case KMTQAITYPE_QUERY_ISBADDRIVERFORHWPROTECTIONDISABLED:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v127 + 316) + 16LL) + 2462LL) != 0;
              goto LABEL_175;
            case KMTQAITYPE_MULTIPLANEOVERLAY_SECONDARY_SUPPORT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v127 + 316) + 16LL) + 2463LL) != 0;
              *v18 = (unsigned int)v6;
              goto LABEL_87;
            case KMTQAITYPE_INDEPENDENTFLIP_SECONDARY_SUPPORT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v127 + 316) + 16LL) + 2464LL) != 0;
              *v18 = (unsigned int)v6;
              goto LABEL_87;
            case KMTQAITYPE_PANELFITTER_SUPPORT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v127 + 316) + 16LL) + 2465LL) != 0;
              *v18 = (unsigned int)v6;
              goto LABEL_87;
            case KMTQAITYPE_PHYSICALADAPTERPNPKEY:
              if ( (_DWORD)v13 != 24 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = DxgkReadPnPRegistryPath(
                                             v127,
                                             *v18,
                                             v18[1],
                                             *((_QWORD *)v18 + 1),
                                             *((_QWORD *)v18 + 2));
              goto LABEL_87;
            case KMTQAITYPE_GETSEGMENTGROUPSIZE:
              if ( (_DWORD)v13 != 56 )
                goto LABEL_246;
              v104 = *v18;
              if ( v104 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v127) )
              {
                v108 = WdLogNewEntry5_WdWarning(v106, v105, v107);
                *(_QWORD *)(v108 + 24) = *v18;
                *(_QWORD *)(v108 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v108);
              }
              else
              {
                VIDMM_EXPORT::VidMmGetTotalSegmentSize(
                  *(VIDMM_EXPORT **)(*((_QWORD *)v127 + 316) + 544LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v127 + 316) + 552LL),
                  v104,
                  (unsigned __int64 *)v18 + 4,
                  (unsigned __int64 *)v18 + 5,
                  (unsigned __int64 *)v18 + 6,
                  (unsigned __int64 *)v18 + 1,
                  (unsigned __int64 *)v18 + 2,
                  (unsigned __int64 *)v18 + 3);
              }
              goto LABEL_129;
            case KMTQAITYPE_MPO3DDI_SUPPORT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v127 + 316) + 16LL) + 2466LL) )
                *v18 = 1;
              else
LABEL_175:
                *v18 = (unsigned int)v6;
              goto LABEL_87;
            case KMTQAITYPE_HWDRM_SUPPORT:
              if ( (_DWORD)v13 != 1 )
                goto LABEL_246;
              *(_BYTE *)v18 = 1;
              if ( *((_DWORD *)v127 + 71) == 1297040209 )
              {
                wcscpy(Str2, L"Qualcomm Adreno 530");
                if ( !wcsncmp(*((const wchar_t **)v127 + 173), Str2, 0x14uLL)
                  && (*(_DWORD *)(*((_QWORD *)v127 + 302) + 16LL) & 0x10) == 0 )
                {
                  *(_BYTE *)v18 = 0;
                }
              }
              goto LABEL_87;
            case KMTQAITYPE_MPOKERNELCAPS_SUPPORT:
              if ( (_DWORD)v13 != 4 )
                goto LABEL_246;
              if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v127 + 316))
                || DXGADAPTER::SupportGetMultiPlaneOverlayCaps(*(DXGADAPTER **)(*((_QWORD *)v127 + 316) + 16LL))
                || DXGADAPTER::SupportGetPostCompositionCaps(*(DXGADAPTER **)(*((_QWORD *)v127 + 316) + 16LL)) )
              {
LABEL_155:
                *v18 = 1;
              }
              else
              {
                *v18 = 0;
              }
              goto LABEL_87;
            case KMTQAITYPE_MULTIPLANEOVERLAY_STRETCH_SUPPORT:
              if ( (_DWORD)v13 != 12 )
                goto LABEL_246;
              v120 = *v18;
              v121 = (ADAPTER_RENDER *)*((_QWORD *)v127 + 316);
              if ( v18[1] )
              {
                ADAPTER_RENDER::SetOverlayStretchSupported(v121, v120, v18[2] != 0);
              }
              else
              {
                LOBYTE(v6) = ADAPTER_RENDER::GetOverlayStretchSupported(v121, v120) != 0;
                v18[2] = (unsigned int)v6;
              }
              goto LABEL_87;
            case KMTQAITYPE_GET_DEVICE_VIDPN_OWNERSHIP_INFO:
              if ( (_DWORD)v13 != 8 )
                goto LABEL_246;
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v150, *v18, (struct _KTHREAD **)Current, &v149);
              if ( v149 )
              {
                *((_BYTE *)v18 + 4) = *((_BYTE *)v149 + 1786);
                LODWORD(AdapterUniqueGUID) = 0;
              }
              else
              {
                v122 = WdLogNewEntry5_WdError(v76);
                *(_QWORD *)(v122 + 24) = *v18;
                WdLogEvent5_WdError(v122);
                LODWORD(AdapterUniqueGUID) = -1073741811;
              }
              ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v150);
              goto LABEL_87;
            case KMTQAITYPE_QUERYREGISTRY:
              if ( (*((_BYTE *)Current + 324) & 1) != 0 )
              {
                HostSilo = PsGetHostSilo();
                v6 = (DXGADAPTER *)PsAttachSiloToCurrentThread(HostSilo);
              }
              LODWORD(AdapterUniqueGUID) = DxgkpQueryRegistry(v127, v18, v13);
              if ( v6 )
                PsAttachSiloToCurrentThread(v6);
              goto LABEL_87;
            case KMTQAITYPE_KMD_DRIVER_VERSION:
              if ( (_DWORD)v13 != 8 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = ADAPTER_RENDER::GetKmdFileVersion(
                                             *((ADAPTER_RENDER **)v127 + 316),
                                             (union _LARGE_INTEGER *)v18);
              goto LABEL_87;
            case KMTQAITYPE_BLOCKLIST_KERNEL:
            case KMTQAITYPE_BLOCKLIST_RUNTIME:
              if ( (unsigned int)v13 < 8 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = DXGADAPTER::ReadBlockListInfo(
                                             v127,
                                             (struct _D3DKMT_BLOCKLIST_INFO *)v18,
                                             v13,
                                             v19 == KMTQAITYPE_BLOCKLIST_KERNEL);
              goto LABEL_87;
            case KMTQAITYPE_QUERY_ADAPTER_UNIQUE_GUID:
              if ( (_DWORD)v13 != 80 )
                goto LABEL_246;
              v79 = v130;
              if ( !*((_QWORD *)v130 + 24) )
              {
                v111 = WdLogNewEntry5_WdAssertion(v130);
                *(_QWORD *)(v111 + 24) = 3173LL;
                WdLogEvent5_WdAssertion(v111);
                v79 = v130;
              }
              AdapterUniqueGUID = DpiFdoGetAdapterUniqueGUID(*((_QWORD *)v79 + 24));
              if ( AdapterUniqueGUID )
              {
                memset(v18, 0, 0x50uLL);
                if ( *(_WORD *)AdapterUniqueGUID >= 0x4Eu )
                  v80 = 78LL;
                else
                  v80 = *(unsigned __int16 *)AdapterUniqueGUID;
                memmove(v18, *(const void **)(AdapterUniqueGUID + 8), v80);
                LODWORD(AdapterUniqueGUID) = 0;
              }
              else
              {
LABEL_273:
                LODWORD(AdapterUniqueGUID) = -1073741823;
              }
              goto LABEL_87;
            case KMTQAITYPE_NODEPERFDATA:
              if ( (_DWORD)v13 != 56 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = DXGADAPTER::GetNodePerfData(v127, (struct _D3DKMT_NODE_PERFDATA *)v18);
              goto LABEL_87;
            case KMTQAITYPE_ADAPTERPERFDATA:
              if ( (_DWORD)v13 != 64 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = DXGADAPTER::GetAdapterPerfData(v127, (struct _D3DKMT_ADAPTER_PERFDATA *)v18);
              goto LABEL_87;
            case KMTQAITYPE_ADAPTERPERFDATA_CAPS:
              if ( (_DWORD)v13 != 40 )
                goto LABEL_246;
              LODWORD(AdapterUniqueGUID) = DXGADAPTER::GetAdapterPerfDataCaps(
                                             v127,
                                             (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v18);
              goto LABEL_87;
            case KMTQUITYPE_GPUVERSION:
              if ( (_DWORD)v13 == 132 )
              {
                LODWORD(AdapterUniqueGUID) = DXGADAPTER::GetGpuVersion(v127, (struct _D3DKMT_GPUVERSION *)v18);
              }
              else
              {
LABEL_246:
                LODWORD(AdapterUniqueGUID) = -1073741811;
                v77 = WdLogNewEntry5_WdWarning(v38, 0x1C0000000uLL, v39);
                *(_QWORD *)(v77 + 24) = v13;
LABEL_342:
                *(_QWORD *)(v77 + 32) = -1073741811LL;
LABEL_192:
                WdLogEvent5_WdWarning(v77);
              }
              goto LABEL_87;
            default:
              LODWORD(AdapterUniqueGUID) = -1073741811;
              v77 = WdLogNewEntry5_WdWarning(v38, 0x1C0000000uLL, v39);
              v119 = v19;
              goto LABEL_341;
          }
          goto LABEL_88;
        }
      }
      LODWORD(AdapterUniqueGUID) = -1073741130;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v153);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v160);
      v43 = v136;
LABEL_93:
      if ( (int)AdapterUniqueGUID >= 0 )
      {
        v44 = v144;
        if ( v128 && ((unsigned __int64)v144 + v43 > MmUserProbeAddress || (char *)v144 + v43 <= v144) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v44, v18, v43);
      }
      operator delete[](v18);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v146);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
      if ( v134 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v132);
      }
      return (unsigned int)AdapterUniqueGUID;
    }
    LODWORD(AdapterUniqueGUID) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v160);
    if ( (int)AdapterUniqueGUID < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v160);
      v43 = v136;
      goto LABEL_93;
    }
    v67 = v131;
    if ( !v131 || !DXGADAPTER::IsDisplayAdapter(v131) )
    {
      v123 = WdLogNewEntry5_WdAssertion(v67);
      *(_QWORD *)(v123 + 24) = 2826LL;
      WdLogEvent5_WdAssertion(v123);
    }
    if ( (_DWORD)v13 != 48 )
    {
      LODWORD(AdapterUniqueGUID) = -1073741811;
      v124 = WdLogNewEntry5_WdWarning(v67, v68, v69);
      v43 = v13;
      *(_QWORD *)(v124 + 24) = v13;
      *(_QWORD *)(v124 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v124);
LABEL_89:
      if ( (int)AdapterUniqueGUID >= 0 && (*((_BYTE *)Current + 324) & 1) != 0 )
        LODWORD(AdapterUniqueGUID) = PostProcessUMDFileName(v19, v18, v13);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v160);
      goto LABEL_93;
    }
    v70 = *((_QWORD *)v131 + 315);
    v71 = *v18;
    if ( (unsigned int)v71 >= *(_DWORD *)(v70 + 80) )
    {
      LODWORD(AdapterUniqueGUID) = -1071774972;
      v125 = WdLogNewEntry5_WdWarning(v70, v71, v69);
      *(_QWORD *)(v125 + 24) = *v18;
      v126 = (struct DXGADAPTER *)*(unsigned int *)(*((_QWORD *)v131 + 315) + 80LL);
    }
    else
    {
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v70, v71);
      if ( *(_DWORD *)DisplayModeInfo )
      {
        *(_OWORD *)(v18 + 1) = *(_OWORD *)DisplayModeInfo;
        *(_OWORD *)(v18 + 5) = *((_OWORD *)DisplayModeInfo + 1);
        *(_QWORD *)(v18 + 9) = *((_QWORD *)DisplayModeInfo + 4);
        v18[11] = *((_DWORD *)DisplayModeInfo + 10);
LABEL_88:
        v43 = v13;
        goto LABEL_89;
      }
      LODWORD(AdapterUniqueGUID) = -1071774919;
      v125 = WdLogNewEntry5_WdWarning(v74, v73, v75);
      *(_QWORD *)(v125 + 24) = *v18;
      v126 = v131;
    }
    *(_QWORD *)(v125 + 32) = v126;
    WdLogEvent5_WdWarning(v125);
    goto LABEL_88;
  }
  v85 = WdLogNewEntry5_WdError(v31);
  *(_QWORD *)(v85 + 24) = v130;
  *(_QWORD *)(v85 + 32) = v137;
  WdLogEvent5_WdError(v85);
  operator delete[](v18);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v146);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
  if ( v134 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v132);
  return (unsigned int)PairingAdapters;
}
