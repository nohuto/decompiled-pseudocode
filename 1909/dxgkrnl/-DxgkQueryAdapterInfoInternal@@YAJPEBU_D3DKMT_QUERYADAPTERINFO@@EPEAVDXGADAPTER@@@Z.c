/*
 * XREFs of ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00EA0C0 (DxgkQueryAdapterInfo.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0222170 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsGpuMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0003FD8 (-IsGpuMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C000639C (-IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C000650C (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0006574 (-IsActive@DXGADAPTER@@QEBAHXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000658C (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C00065A0 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C00066B4 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009DB0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B9A8 (-IsRenderAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C000BD54 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000BFFC (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000C174 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000C354 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCopyWorkerW_1 @ 0x1C0019AFC (RtlStringCopyWorkerW_1.c)
 *     ?VidSchQueryFlipQueueInfo@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_FLIPQUEUEINFO@@@Z @ 0x1C001CA2C (-VidSchQueryFlipQueueInfo@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_FLIPQUEUEINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ @ 0x1C0036238 (-SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ.c)
 *     ?SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ @ 0x1C0036254 (-SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetOverlayStretchSupported@ADAPTER_RENDER@@QEAAEI@Z @ 0x1C003B388 (-GetOverlayStretchSupported@ADAPTER_RENDER@@QEAAEI@Z.c)
 *     ?IsGpuVirtualAddressSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003B64C (-IsGpuVirtualAddressSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?SetOverlayStretchSupported@ADAPTER_RENDER@@QEAAXIE@Z @ 0x1C003B8FC (-SetOverlayStretchSupported@ADAPTER_RENDER@@QEAAXIE@Z.c)
 *     ?VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z @ 0x1C003B914 (-VidMmSetWorkingSetInformation@VIDMM_EXPORT@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_WORKINGSETINFO@@@Z.c)
 *     DxgkInvalidateDeviceState @ 0x1C004B848 (DxgkInvalidateDeviceState.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C00C536C (DpiQueryAdapterRegistryInfo.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2C84 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C00EBD44 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00EBDF4 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00EBFB0 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetDriverUpdateStatus@DXGADAPTER@@QEAAEPEAE@Z @ 0x1C00EDF4C (-GetDriverUpdateStatus@DXGADAPTER@@QEAAEPEAE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0104860 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C01426EC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0145F88 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01470D0 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1C0148CD4 (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     OutputDuplQueryActiveContextCount @ 0x1C0149E50 (OutputDuplQueryActiveContextCount.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C014D1BC (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     DpiReadBlockListInfo @ 0x1C0157020 (DpiReadBlockListInfo.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0157254 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C0160FEC (DpiFdoGetAdapterUniqueGUID.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C017FE5C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C01ED26C (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C01ED414 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C01ED4A4 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C01ED530 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?CopyContentProtectionDriverName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01F4F04 (-CopyContentProtectionDriverName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01F4F34 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?CopyMiracastCompanionDriverName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01F4F98 (-CopyMiracastCompanionDriverName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C0200E1C (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C02015E0 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02016D8 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C0225DD8 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(
        const struct _D3DKMT_QUERYADAPTERINFO *a1,
        char a2,
        struct DXGADAPTER *a3)
{
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v12; // xmm6
  size_t v13; // xmm0_8
  char *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  size_t v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  enum _KMTQUERYADAPTERINFOTYPE v29; // r13d
  size_t v30; // r12
  struct DXGPROCESS *v31; // rbx
  struct _KTHREAD **v32; // r8
  unsigned int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // r8
  struct DXGADAPTER *v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  unsigned int v41; // ebx
  bool v42; // zf
  int PairingAdapters; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  DXGADAPTER *v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  char v55; // cl
  __int64 v56; // rcx
  char *v57; // rbx
  unsigned int v58; // ebx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  __int64 v68; // rbx
  __int64 HostSilo; // rax
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // r9
  unsigned __int64 v75; // rax
  const wchar_t *v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  unsigned int v81; // r13d
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rax
  int FlipQueueInfo; // eax
  struct DXGPROCESS *v87; // rdi
  __int64 v88; // rbx
  __int64 v89; // rax
  const GUID *v90; // r8
  DXGADAPTER *v91; // rax
  DXGADAPTER *v92; // rcx
  __int64 v93; // rax
  const void **AdapterUniqueGUID; // rbx
  size_t v95; // rcx
  DXGADAPTER *v96; // rax
  __int64 v97; // rcx
  DXGADAPTER *v98; // rcx
  DXGADAPTER *v99; // rbx
  void *v100; // rbx
  UINT v101; // eax
  DXGADAPTER *v102; // rax
  DXGADAPTER *v103; // rcx
  unsigned int *v104; // rax
  unsigned int v105; // ecx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // rbx
  DXGADAPTER *v111; // rcx
  DXGADAPTER *v112; // rcx
  char v113; // cl
  BOOL IsXBoxOneDevice; // eax
  int v115; // ecx
  DXGADAPTER *v116; // rcx
  __int64 v117; // r13
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  _DWORD *v121; // rcx
  __int64 v122; // rax
  int v123; // eax
  unsigned int v124; // ebx
  __int64 v125; // rdx
  __int64 v126; // rcx
  unsigned int v127; // edx
  ADAPTER_RENDER *v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // rax
  DXGADAPTER *v133; // rcx
  __int64 v134; // rdx
  DXGADAPTER *v135; // rcx
  const GUID *v136; // r8
  __int64 v137; // rax
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // rdx
  char *v148; // [rsp+50h] [rbp-2B8h]
  DXGADAPTER *v149; // [rsp+58h] [rbp-2B0h] BYREF
  char v150; // [rsp+60h] [rbp-2A8h]
  unsigned __int8 v151[7]; // [rsp+61h] [rbp-2A7h] BYREF
  DXGADAPTER *v152; // [rsp+68h] [rbp-2A0h] BYREF
  DXGADAPTER *v153; // [rsp+70h] [rbp-298h] BYREF
  int v154; // [rsp+78h] [rbp-290h] BYREF
  __int64 v155; // [rsp+80h] [rbp-288h]
  char v156; // [rsp+88h] [rbp-280h]
  struct DXGPROCESS *Current; // [rsp+90h] [rbp-278h]
  unsigned int v158; // [rsp+98h] [rbp-270h]
  BOOL IsRemoteConnection; // [rsp+9Ch] [rbp-26Ch]
  _D3DKMT_WDDM_1_3_CAPS v160; // [rsp+A0h] [rbp-268h] BYREF
  enum _KMTQUERYADAPTERINFOTYPE v161; // [rsp+A4h] [rbp-264h]
  unsigned int v162; // [rsp+A8h] [rbp-260h] BYREF
  unsigned int v163; // [rsp+ACh] [rbp-25Ch]
  unsigned int v164; // [rsp+B0h] [rbp-258h]
  unsigned int v165; // [rsp+B4h] [rbp-254h] BYREF
  _BYTE v166[16]; // [rsp+B8h] [rbp-250h] BYREF
  unsigned __int64 v167; // [rsp+C8h] [rbp-240h] BYREF
  unsigned __int64 v168; // [rsp+D0h] [rbp-238h] BYREF
  void *v169; // [rsp+D8h] [rbp-230h]
  __m128i v170; // [rsp+E0h] [rbp-228h]
  size_t Size; // [rsp+F0h] [rbp-218h]
  unsigned int v172; // [rsp+F8h] [rbp-210h]
  struct DXGDEVICE *v173; // [rsp+100h] [rbp-208h] BYREF
  char v174[8]; // [rsp+108h] [rbp-200h] BYREF
  unsigned int *v175; // [rsp+110h] [rbp-1F8h]
  unsigned __int64 v176; // [rsp+118h] [rbp-1F0h] BYREF
  _BYTE v177[24]; // [rsp+128h] [rbp-1E0h] BYREF
  _BYTE v178[24]; // [rsp+140h] [rbp-1C8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v179; // [rsp+158h] [rbp-1B0h] BYREF
  _D3DKMT_QUERYADAPTERINFO v180; // [rsp+188h] [rbp-180h] BYREF
  _BYTE v181[24]; // [rsp+1A0h] [rbp-168h] BYREF
  _DXGKARG_QUERYADAPTERINFO v182; // [rsp+1B8h] [rbp-150h] BYREF
  __int64 v183; // [rsp+1E8h] [rbp-120h] BYREF
  __int64 v184; // [rsp+1F0h] [rbp-118h]
  int v185; // [rsp+1F8h] [rbp-110h]
  _BYTE v186[144]; // [rsp+200h] [rbp-108h] BYREF
  wchar_t Str2[20]; // [rsp+290h] [rbp-78h] BYREF

  v150 = a2;
  v154 = -1;
  v155 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v156 = 1;
    v154 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerEnter, 0LL, 2015);
  }
  else
  {
    v156 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v154, 2015LL);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v10);
    if ( v156 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v154);
    }
    return 3221225485LL;
  }
  v169 = 0LL;
  if ( a2 )
  {
    v7 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v12 = *(__m128i *)&a1->hAdapter;
    v13 = *(_QWORD *)&a1->PrivateDriverDataSize;
  }
  else
  {
    v12 = *(__m128i *)&a1->hAdapter;
    v13 = *(_QWORD *)&a1->PrivateDriverDataSize;
  }
  Size = v13;
  v170 = v12;
  v14 = (char *)_mm_srli_si128(v12, 8).m128i_u64[0];
  v148 = v14;
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v16);
    if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v154);
    return 3221225485LL;
  }
  v17 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    v18 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v19);
    if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v154);
    return 3221225485LL;
  }
  v20 = (Size + 7) & 0xFFFFFFF8;
  v163 = v20;
  v172 = v20;
  if ( v20 < (unsigned int)Size )
  {
    v21 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    *(_QWORD *)(v21 + 32) = 2910LL;
    WdLogEvent5_WdWarning(v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v22);
    if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v154);
    return 3221225485LL;
  }
  v26 = (unsigned int *)operator new[](v20, 0x4B677844u, (POOL_TYPE)512);
  v175 = v26;
  v169 = v26;
  if ( !v26 )
  {
    v27 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v27 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v28);
    if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v154);
    return 3221225495LL;
  }
  v29 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
  v161 = v29;
  if ( v29 > KMTQAITYPE_PHYSICALADAPTERDEVICEIDS )
  {
    v38 = (unsigned int)(v29 - 34);
    if ( (unsigned int)v38 > 0x21 )
      goto LABEL_44;
    v39 = 0x278037181LL;
    if ( !_bittest64(&v39, v38) )
      goto LABEL_44;
  }
  else if ( v29 != KMTQAITYPE_PHYSICALADAPTERDEVICEIDS
         && v29 != KMTQAITYPE_UMDRIVERNAME
         && v29 != KMTQAITYPE_SETWORKINGSETINFO
         && v29 != KMTQAITYPE_CURRENTDISPLAYMODE
         && v29 != KMTQAITYPE_OUTPUTDUPLCONTEXTSCOUNT
         && v29 != KMTQAITYPE_MULTIPLANEOVERLAY_HUD_SUPPORT
         && v29 != KMTQAITYPE_NODEMETADATA )
  {
LABEL_44:
    v30 = v17;
    memset(v26, 0, v17);
    goto LABEL_45;
  }
  v42 = a2 == 0;
  v30 = v17;
  if ( !v42 && (&v14[v17] < v14 || (unsigned __int64)&v14[v17] > MmUserProbeAddress) )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v26, v14, v17);
LABEL_45:
  IsRemoteConnection = 0;
  v31 = Current;
  if ( v29 == KMTQAITYPE_OUTPUTDUPLCONTEXTSCOUNT )
    IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current);
  v152 = 0LL;
  v32 = (struct _KTHREAD **)v31;
  v33 = _mm_cvtsi128_si32(v12);
  v164 = v33;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v166,
    v33,
    v32,
    (struct DXGADAPTER **)((unsigned __int64)&v152 & -(__int64)(v150 != 0)),
    1);
  v36 = v152;
  if ( !v150 )
    v36 = a3;
  v152 = v36;
  if ( !v36 )
  {
    v37 = WdLogNewEntry5_WdWarning(0LL, v34, v35);
    *(_QWORD *)(v37 + 24) = v33;
LABEL_51:
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v37);
    operator delete[](v26);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v166);
    goto LABEL_7;
  }
  LODWORD(v40) = 0;
  v41 = 0;
  if ( v29 == KMTQAITYPE_CURRENTDISPLAYMODE )
  {
    v42 = (_DWORD)v17 == 48;
  }
  else
  {
    if ( v29 != (KMTQUITYPE_GPUVERSION|KMTQAITYPE_GETSEGMENTSIZE) )
      goto LABEL_67;
    v42 = (_DWORD)v17 == 8;
  }
  if ( !v42 )
  {
    v37 = WdLogNewEntry5_WdWarning(v36, v34, v35);
    *(_QWORD *)(v37 + 24) = v30;
    goto LABEL_51;
  }
  v41 = *v26;
LABEL_67:
  PairingAdapters = DxgkpGetPairingAdapters(v36, v41, &v149, &v167, &v153, &v176, 0);
  v158 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    if ( v29 != KMTQAITYPE_CURRENTDISPLAYMODE && v29 != (KMTQUITYPE_GPUVERSION|KMTQAITYPE_GETSEGMENTSIZE) )
    {
      v153 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v152, v41, &v149, &v167, 0LL, 0LL, 0);
      v158 = PairingAdapters;
    }
    if ( PairingAdapters < 0 )
    {
      v47 = WdLogNewEntry5_WdError(v45, v44, v46);
      *(_QWORD *)(v47 + 24) = v152;
      *(_QWORD *)(v47 + 32) = v41;
      WdLogEvent5_WdError(v47);
      operator delete[](v26);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v166);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v48);
      if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v154);
      return v158;
    }
  }
  if ( v149 != v152 && v153 != v152 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v45, v44);
    *(_QWORD *)(v49 + 24) = 3087LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( v153 && !DXGADAPTER::IsDisplayAdapter(v153) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v50, v44);
    *(_QWORD *)(v51 + 24) = 3089LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v52 = v149;
  if ( !v149 || !DXGADAPTER::IsRenderAdapter(v149) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v52, v44);
    *(_QWORD *)(v53 + 24) = 3091LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( (unsigned int)v29 > KMTQAITYPE_XBOX || (v54 = 138619200, v55 = 1, !_bittest(&v54, v29)) )
    v55 = 0;
  if ( v152 == v149 && *((_BYTE *)v152 + 185) || v149 && *((_BYTE *)v149 + 185) && !v55 )
  {
    if ( (unsigned int)v29 > KMTQAITYPE_ADAPTERTYPE_RENDER
      || (v56 = 0x210F85840908010LL, !_bittest64(&v56, (unsigned int)v29)) )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v181, v149, 1);
      if ( DXGADAPTER::IsActive(v149) )
      {
        *(_QWORD *)&v180.hAdapter = v12.m128i_i64[0];
        *(_QWORD *)&v180.PrivateDriverDataSize = v13;
        v180.pPrivateDriverData = v26;
        v58 = v163;
        v59 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                (DXGADAPTER *)((char *)v149 + 4144),
                Current,
                &v180,
                v163);
        v40 = v59;
        if ( v59 >= 0 )
        {
          LODWORD(v40) = PostProcessUMDFileName(v29, v26, v58);
        }
        else
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60, v62);
          v63[3] = v164;
          v63[4] = v40;
          v63[5] = 3140LL;
          WdLogEvent5_WdWarning(v63);
        }
      }
      else
      {
        LODWORD(v40) = -1073741130;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
      goto LABEL_98;
    }
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v186, v149, v153);
  DXGADAPTER::ReleaseReferenceNoTracking(v149);
  if ( v153 )
    DXGADAPTER::ReleaseReferenceNoTracking(v153);
  if ( v29 == KMTQAITYPE_CURRENTDISPLAYMODE || v29 == (KMTQUITYPE_GPUVERSION|KMTQAITYPE_GETSEGMENTSIZE) )
  {
    LODWORD(v40) = COREADAPTERACCESS::AcquireShared((__int64)v186, 0xFFFFFFFFLL, 0LL);
    if ( (int)v40 < 0 )
      goto LABEL_325;
    v135 = v153;
    if ( !v153 || !DXGADAPTER::IsDisplayAdapter(v153) )
    {
      v137 = WdLogNewEntry5_WdAssertion(v135, v134);
      *(_QWORD *)(v137 + 24) = 3173LL;
      WdLogEvent5_WdAssertion(v137);
    }
    if ( v29 == KMTQAITYPE_CURRENTDISPLAYMODE )
    {
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v153 + 319), *v26);
      if ( *(_DWORD *)DisplayModeInfo )
      {
        *(_OWORD *)(v26 + 1) = *(_OWORD *)DisplayModeInfo;
        *(_OWORD *)(v26 + 5) = *((_OWORD *)DisplayModeInfo + 1);
        *(_QWORD *)(v26 + 9) = *((_QWORD *)DisplayModeInfo + 4);
        v26[11] = *((_DWORD *)DisplayModeInfo + 10);
        goto LABEL_337;
      }
      LODWORD(v40) = -1071774919;
      v142 = WdLogNewEntry5_WdWarning(v145, v144, v146);
      *(_QWORD *)(v142 + 24) = *v26;
      *(_QWORD *)(v142 + 32) = v153;
    }
    else
    {
      v165 = *v26;
      v162 = 0;
      *(_QWORD *)&v179.Type = 33LL;
      *(_QWORD *)&v179.InputDataSize = 4LL;
      *(_QWORD *)&v179.Flags.0 = 0LL;
      HIDWORD(v179.hKmdProcessHandle) = 0;
      v179.pOutputData = &v162;
      v179.OutputDataSize = 4;
      v179.pInputData = &v165;
      v138 = DXGADAPTER::DdiQueryAdapterInfo(v153, &v179, v136);
      v40 = v138;
      if ( v138 >= 0 )
      {
        v26[1] = v162;
LABEL_337:
        v57 = v148;
        goto LABEL_338;
      }
      v142 = WdLogNewEntry5_WdWarning(v140, v139, v141);
      *(_QWORD *)(v142 + 24) = *v26;
      *(_QWORD *)(v142 + 32) = v40;
    }
    WdLogEvent5_WdWarning(v142);
    goto LABEL_337;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v178, v149, 1);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v177, v153, 0);
  if ( v153 && v153 != v149 )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v177);
  if ( DXGADAPTER::IsActive(v152) && DXGADAPTER::IsActive(v149) )
  {
    v66 = (__int64)v153;
    if ( !v153 || DXGADAPTER::IsActive(v153) )
    {
      v67 = 0x1C0000000uLL;
      switch ( v29 )
      {
        case KMTQAITYPE_UMDRIVERPRIVATE:
          memset(&v182, 0, sizeof(v182));
          v182.pOutputData = v26;
          v182.OutputDataSize = v17;
          v87 = Current;
          if ( (*((_BYTE *)Current + 299) & 8) != 0 )
            v182.Flags.Value = v182.Flags.Value ^ (*(_BYTE *)&v182.Flags.0 ^ (unsigned __int8)(2
                                                                                             * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)Current + 54) + 432LL) + 248LL))) & 2 | 1;
          v88 = *((_QWORD *)v149 + 320);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v88 + 56, 0LL);
          v89 = *(_QWORD *)(*((_QWORD *)v87 + 6) + 8LL * *((unsigned int *)v149 + 52));
          if ( v89 )
            v182.hKmdProcessHandle = *(HANDLE *)(v89 + 16);
          ExReleasePushLockSharedEx(v88 + 56, 0LL);
          KeLeaveCriticalRegion();
          FlipQueueInfo = DXGADAPTER::DdiQueryAdapterInfo(v149, &v182, v90);
          goto LABEL_146;
        case KMTQAITYPE_UMDRIVERNAME:
          if ( (_DWORD)v17 != 524 )
            goto LABEL_119;
          v71 = ADAPTER_RENDER::CopyUmdFileName(*((ADAPTER_RENDER **)v149 + 320), (struct _D3DKMT_UMDFILENAMEINFO *)v26);
          goto LABEL_121;
        case KMTQAITYPE_UMOPENGLINFO:
          if ( (_DWORD)v17 != 528 )
            goto LABEL_119;
          v74 = *((_QWORD *)v149 + 320);
          if ( (*((_BYTE *)Current + 299) & 1) != 0 )
          {
            v26[130] = *(_DWORD *)(v74 + 496);
            v26[131] = *(_DWORD *)(v74 + 500);
            v75 = *(unsigned __int16 *)(v74 + 480);
            v76 = *(const wchar_t **)(v74 + 488);
          }
          else
          {
            v26[130] = *(_DWORD *)(v74 + 472);
            v26[131] = *(_DWORD *)(v74 + 476);
            v75 = *(unsigned __int16 *)(v74 + 456);
            v76 = *(const wchar_t **)(v74 + 464);
          }
          LODWORD(v40) = RtlStringCopyWorkerW_1((NTSTRSAFE_PWSTR)v26, 0x104uLL, 0LL, v76, v75 >> 1);
          if ( (int)v40 < 0 )
          {
            v80 = WdLogNewEntry5_WdError(v78, v77, v79);
            *(_QWORD *)(v80 + 24) = (int)v40;
            WdLogEvent5_WdError(v80);
          }
          goto LABEL_321;
        case KMTQAITYPE_GETSEGMENTSIZE:
          if ( (_DWORD)v17 != 24 )
            goto LABEL_119;
          VIDMM_EXPORT::VidMmGetTotalSegmentSize(
            *(VIDMM_EXPORT **)(*((_QWORD *)v149 + 320) + 544LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)v149 + 320) + 552LL),
            0,
            &v168,
            &v168,
            &v168,
            (unsigned __int64 *)v26,
            (unsigned __int64 *)v26 + 1,
            (unsigned __int64 *)v26 + 2);
          goto LABEL_137;
        case KMTQAITYPE_ADAPTERGUID:
        case KMTQAITYPE_ADAPTERGUID_RENDER:
          if ( (_DWORD)v17 != 16 )
            goto LABEL_119;
          v91 = v149;
          if ( v29 == KMTQAITYPE_ADAPTERGUID )
            v91 = v152;
          v57 = v148;
          if ( v91 )
          {
            *(_OWORD *)v26 = *(_OWORD *)((char *)v91 + 260);
LABEL_173:
            LODWORD(v40) = 0;
          }
          else
          {
            LODWORD(v40) = -1073741823;
          }
          goto LABEL_322;
        case KMTQAITYPE_FLIPQUEUEINFO:
          if ( (_DWORD)v17 != 12 )
            goto LABEL_119;
          FlipQueueInfo = VIDSCH_EXPORT::VidSchQueryFlipQueueInfo(
                            *(VIDSCH_EXPORT **)(*((_QWORD *)v149 + 320) + 520LL),
                            *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v149 + 320) + 528LL),
                            (struct _D3DKMT_FLIPQUEUEINFO *)v26);
          goto LABEL_146;
        case KMTQAITYPE_ADAPTERADDRESS:
        case KMTQAITYPE_ADAPTERADDRESS_RENDER:
          if ( (_DWORD)v17 != 12 )
            goto LABEL_119;
          LODWORD(v40) = -1073741823;
          v96 = v149;
          if ( v29 == KMTQAITYPE_ADAPTERADDRESS )
            v96 = v152;
          v57 = v148;
          if ( !v96 )
            goto LABEL_322;
          v97 = *(_QWORD *)(*((_QWORD *)v96 + 24) + 64LL);
          *v26 = *(_DWORD *)(v97 + 1144);
          v26[1] = *(unsigned __int16 *)(v97 + 1150);
          v26[2] = (unsigned __int16)*(_DWORD *)(v97 + 1148);
          goto LABEL_173;
        case KMTQAITYPE_SETWORKINGSETINFO:
          if ( (_DWORD)v17 != 12 )
            goto LABEL_119;
          FlipQueueInfo = VIDMM_EXPORT::VidMmSetWorkingSetInformation(
                            *(VIDMM_EXPORT **)(*((_QWORD *)v149 + 320) + 544LL),
                            Current,
                            (struct _D3DKMT_WORKINGSETINFO *)v26);
          goto LABEL_146;
        case KMTQAITYPE_ADAPTERREGISTRYINFO:
        case KMTQAITYPE_ADAPTERREGISTRYINFO_RENDER:
          if ( (_DWORD)v17 != 2080 )
            goto LABEL_119;
          LODWORD(v40) = -1073741823;
          v98 = v149;
          if ( v29 == KMTQAITYPE_ADAPTERREGISTRYINFO )
            v98 = v152;
          if ( !v98 )
            goto LABEL_321;
          FlipQueueInfo = DpiQueryAdapterRegistryInfo(*((_QWORD *)v98 + 24), (char *)v26);
          goto LABEL_146;
        case KMTQAITYPE_CHECKDRIVERUPDATESTATUS:
        case KMTQAITYPE_CHECKDRIVERUPDATESTATUS_RENDER:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v151[0] = 0;
          LODWORD(v40) = -1073741823;
          v99 = v149;
          if ( v29 == KMTQAITYPE_CHECKDRIVERUPDATESTATUS )
            v99 = v152;
          if ( !v99 )
            goto LABEL_321;
          *v26 = DXGADAPTER::GetDriverUpdateStatus(v99, v151);
          if ( v151[0] )
          {
            v100 = (void *)*((_QWORD *)v99 + 24);
            ObfReferenceObject(v100);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v178);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v177);
            DxgkInvalidateDeviceState((__int64)v100);
            ObfDereferenceObject(v100);
          }
          goto LABEL_137;
        case KMTQAITYPE_VIRTUALADDRESSINFO:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          *v26 = 0;
          v101 = (*v26 ^ ADAPTER_RENDER::IsGpuVirtualAddressSupported(*((ADAPTER_RENDER **)v149 + 320))) & 1;
          goto LABEL_187;
        case KMTQAITYPE_DRIVERVERSION:
        case KMTQAITYPE_DRIVERVERSION_RENDER:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          LODWORD(v40) = -1073741823;
          v102 = v149;
          if ( v29 == KMTQAITYPE_DRIVERVERSION )
            v102 = v152;
          v57 = v148;
          if ( !v102 )
            goto LABEL_322;
          *v26 = *((_DWORD *)v102 + 613);
          goto LABEL_173;
        case KMTQAITYPE_ADAPTERTYPE:
        case KMTQAITYPE_ADAPTERTYPE_RENDER:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          LODWORD(v40) = -1073741823;
          v103 = v149;
          if ( v29 == KMTQAITYPE_ADAPTERTYPE )
            v103 = v152;
          if ( !v103 )
            goto LABEL_321;
          LODWORD(v104) = DXGADAPTER::GetAdapterType(v103);
          v105 = *v104;
          *v26 = *v104;
          if ( v149 )
          {
            NumDifferentPhysicalAdapters = v105 ^ ((unsigned __int16)v105 ^ (unsigned __int16)(*((unsigned __int8 *)v149
                                                                                               + 188) << 8)) & 0x100;
LABEL_199:
            *v26 = NumDifferentPhysicalAdapters;
          }
          goto LABEL_137;
        case KMTQAITYPE_OUTPUTDUPLCONTEXTSCOUNT:
          if ( (_DWORD)v17 != 8 )
            goto LABEL_119;
          if ( !*((_BYTE *)DXGPROCESS::GetCurrent() + 298) )
            goto LABEL_202;
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v178);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v177);
          v111 = v152;
          if ( IsRemoteConnection )
            v111 = 0LL;
          FlipQueueInfo = OutputDuplQueryActiveContextCount(v111, v26);
          goto LABEL_146;
        case KMTQAITYPE_WDDM_1_2_CAPS:
        case KMTQAITYPE_WDDM_1_2_CAPS_RENDER:
          if ( (_DWORD)v17 != 12 )
            goto LABEL_119;
          LODWORD(v40) = -1073741823;
          v112 = v149;
          if ( v29 == KMTQAITYPE_WDDM_1_2_CAPS )
            v112 = v152;
          if ( !v112 )
            goto LABEL_321;
          DXGADAPTER::QueryWDDM1_2Caps(v112, (struct _D3DKMT_WDDM_1_2_CAPS *)v26);
          goto LABEL_137;
        case KMTQAITYPE_UMD_DRIVER_VERSION:
          if ( (_DWORD)v17 != 8 )
            goto LABEL_119;
          FlipQueueInfo = ADAPTER_RENDER::GetUmdFileVersion(
                            *((ADAPTER_RENDER **)v149 + 320),
                            (union _LARGE_INTEGER *)v26);
          goto LABEL_146;
        case KMTQAITYPE_DIRECTFLIP_SUPPORT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v113 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v149 + 320) + 16LL) + 2387LL);
          goto LABEL_218;
        case KMTQAITYPE_MULTIPLANEOVERLAY_SUPPORT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v115 = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v149 + 320)) != 0;
          goto LABEL_222;
        case KMTQAITYPE_DLIST_DRIVER_NAME:
          v64 = 520LL;
          if ( (_DWORD)v17 != 520 )
            goto LABEL_119;
          if ( !(_BYTE)word_1C00A275C || (v66 = (__int64)v149, !*((_BYTE *)v149 + 2391)) )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdEvent(v66);
            v73[3] = v26;
            v73[4] = v149;
            LODWORD(v40) = -1073741637;
            v73[5] = -1073741637LL;
            goto LABEL_123;
          }
          v71 = ADAPTER_RENDER::CopyDListFileName(*((ADAPTER_RENDER **)v149 + 320), (unsigned __int16 *)v26, 0x208u);
LABEL_121:
          v40 = v71;
          if ( v71 < 0 )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdEvent(v72);
            v73[3] = v26;
            v73[4] = v149;
            v73[5] = v40;
LABEL_123:
            WdLogEvent5_WdEvent(v73);
          }
LABEL_321:
          v57 = v148;
LABEL_322:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v177);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v178);
          break;
        case KMTQAITYPE_WDDM_1_3_CAPS:
        case KMTQAITYPE_WDDM_1_3_CAPS_RENDER:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          LODWORD(v40) = -1073741823;
          v116 = v149;
          if ( v29 == KMTQAITYPE_WDDM_1_3_CAPS )
            v116 = v152;
          if ( !v116 )
            goto LABEL_321;
          DXGADAPTER::QueryWDDM1_3Caps(v116, (struct _D3DKMT_WDDM_1_3_CAPS *)v26);
          if ( v149 && v152 != v149 )
          {
            v160.0 = 0;
            DXGADAPTER::QueryWDDM1_3Caps(v149, &v160);
            v101 = (*v26 ^ v160.Value) & 0x20;
LABEL_187:
            *v26 ^= v101;
          }
          goto LABEL_137;
        case KMTQAITYPE_MULTIPLANEOVERLAY_HUD_SUPPORT:
          if ( (_DWORD)v17 != 16 )
            goto LABEL_119;
          if ( !v26[1] )
            goto LABEL_228;
          if ( !*((_BYTE *)DXGPROCESS::GetCurrent() + 298) )
          {
LABEL_202:
            v110 = -1073741790LL;
            goto LABEL_203;
          }
          if ( v26[1] )
          {
            *(_DWORD *)(*((_QWORD *)v149 + 320) + 984LL) = v26[3];
          }
          else
          {
LABEL_228:
            v26[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v149 + 320));
            v26[3] = *(_DWORD *)(*((_QWORD *)v149 + 320) + 984LL);
          }
          goto LABEL_321;
        case KMTQAITYPE_WDDM_2_0_CAPS:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          DXGADAPTER::QueryWDDM2_0Caps(v149, (struct _D3DKMT_WDDM_2_0_CAPS *)v26);
          goto LABEL_321;
        case KMTQAITYPE_NODEMETADATA:
          v66 = 78LL;
          if ( (_DWORD)v17 != 78 )
            goto LABEL_119;
          FlipQueueInfo = DXGADAPTER::QueryNodeMetadata(v149, *v26, (struct _DXGK_NODEMETADATA *)(v26 + 1));
          goto LABEL_146;
        case KMTQAITYPE_CPDRIVERNAME:
          v64 = 520LL;
          if ( (_DWORD)v17 != 520 )
            goto LABEL_119;
          v71 = ADAPTER_RENDER::CopyContentProtectionDriverName(
                  *((ADAPTER_RENDER **)v149 + 320),
                  (unsigned __int16 *)v26,
                  0x208u);
          goto LABEL_121;
        case KMTQAITYPE_XBOX:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          IsXBoxOneDevice = DXGADAPTER::IsXBoxOneDevice(v152);
          goto LABEL_219;
        case KMTQAITYPE_INDEPENDENTFLIP_SUPPORT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          IsXBoxOneDevice = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v149 + 320) + 16LL) + 1908LL) & 0x10) != 0;
          goto LABEL_219;
        case KMTQAITYPE_MIRACASTCOMPANIONDRIVERNAME:
          v64 = 520LL;
          if ( (_DWORD)v17 != 520 )
            goto LABEL_119;
          v71 = ADAPTER_RENDER::CopyMiracastCompanionDriverName(
                  *((ADAPTER_RENDER **)v149 + 320),
                  (unsigned __int16 *)v26,
                  0x208u);
          goto LABEL_121;
        case KMTQAITYPE_PHYSICALADAPTERCOUNT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v149);
          goto LABEL_199;
        case KMTQAITYPE_PHYSICALADAPTERDEVICEIDS:
          if ( (_DWORD)v17 != 28 )
            goto LABEL_119;
          v117 = *v26;
          if ( (unsigned int)v117 < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v149) )
          {
            _mm_lfence();
            v121 = *(_DWORD **)(*(_QWORD *)(352 * v117 + *((_QWORD *)v149 + 305) + 8) + 64LL);
            v26[1] = v121[281];
            v26[2] = v121[282];
            v26[3] = v121[283];
            v26[4] = v121[284];
            v26[5] = v121[285];
            v26[6] = v121[280];
            LODWORD(v40) = 0;
            LODWORD(v17) = Size;
            v57 = (char *)v170.m128i_i64[1];
            v29 = v170.m128i_i32[1];
            goto LABEL_322;
          }
          LODWORD(v40) = -1073741811;
          v122 = WdLogNewEntry5_WdWarning(v119, v118, v120);
          *(_QWORD *)(v122 + 24) = v117;
          *(_QWORD *)(v122 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v122);
LABEL_143:
          v29 = v161;
          goto LABEL_321;
        case KMTQAITYPE_DRIVERCAPS_EXT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          QueryDriverCapsExt(v153, (struct _D3DKMT_DRIVERCAPS_EXT *)v26);
          goto LABEL_321;
        case KMTQAITYPE_QUERY_MIRACAST_DRIVER_TYPE:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v183 = 0LL;
          v184 = 0LL;
          v185 = 0;
          v123 = DxgkMiracastQueryMiracastSupportInternal(&v183);
          v110 = v123;
          if ( v123 == -1073741637 )
            goto LABEL_260;
          if ( v123 < 0 )
            goto LABEL_203;
          v115 = 2 - ((_BYTE)v184 != 0);
LABEL_222:
          *v26 = v115;
          goto LABEL_321;
        case KMTQAITYPE_QUERY_GPUMMU_CAPS:
          if ( (_DWORD)v17 != 12 )
            goto LABEL_119;
          v124 = DXGADAPTER::GetNumDifferentPhysicalAdapters(v149);
          if ( !DXGADAPTER::IsGpuMmuSupported(v149) )
          {
            v110 = -1073741811LL;
LABEL_203:
            LODWORD(v40) = v110;
            v70 = WdLogNewEntry5_WdWarning(v108, v107, v109);
            *(_QWORD *)(v70 + 24) = v110;
            goto LABEL_320;
          }
          v125 = *v26;
          if ( (unsigned int)v125 < v124 )
          {
            ADAPTER_RENDER::QueryGpuMmuCaps(
              *((ADAPTER_RENDER **)v149 + 320),
              v125,
              (struct _D3DKMT_GPUMMU_CAPS *)(v26 + 1));
            goto LABEL_321;
          }
          LODWORD(v40) = -1073741811;
          v70 = WdLogNewEntry5_WdWarning(v108, v125, v109);
          v126 = *v26;
LABEL_318:
          *(_QWORD *)(v70 + 24) = v126;
          goto LABEL_319;
        case KMTQAITYPE_QUERY_MULTIPLANEOVERLAY_DECODE_SUPPORT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v113 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v149 + 320) + 16LL) + 2493LL);
          goto LABEL_218;
        case KMTQAITYPE_QUERY_HW_PROTECTION_TEARDOWN_COUNT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v115 = *((_DWORD *)DXGGLOBAL::GetGlobal(v66, 0x1C0000000LL) + 276);
          goto LABEL_222;
        case KMTQAITYPE_QUERY_ISBADDRIVERFORHWPROTECTIONDISABLED:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v113 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v149 + 320) + 16LL) + 2494LL);
          goto LABEL_218;
        case KMTQAITYPE_MULTIPLANEOVERLAY_SECONDARY_SUPPORT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v113 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v149 + 320) + 16LL) + 2495LL);
          goto LABEL_218;
        case KMTQAITYPE_INDEPENDENTFLIP_SECONDARY_SUPPORT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v113 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v149 + 320) + 16LL) + 2496LL);
          goto LABEL_218;
        case KMTQAITYPE_PANELFITTER_SUPPORT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v113 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v149 + 320) + 16LL) + 2497LL);
          goto LABEL_218;
        case KMTQAITYPE_PHYSICALADAPTERPNPKEY:
          if ( (_DWORD)v17 != 24 )
            goto LABEL_119;
          FlipQueueInfo = DxgkReadPnPRegistryPath(v149, *v26, v26[1], *((_QWORD *)v26 + 1), *((_QWORD *)v26 + 2));
          goto LABEL_146;
        case KMTQAITYPE_GETSEGMENTGROUPSIZE:
          if ( (_DWORD)v17 != 56 )
            goto LABEL_119;
          v81 = *v26;
          if ( v81 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v149) )
          {
            v85 = WdLogNewEntry5_WdWarning(v83, v82, v84);
            *(_QWORD *)(v85 + 24) = *v26;
            *(_QWORD *)(v85 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v85);
          }
          else
          {
            VIDMM_EXPORT::VidMmGetTotalSegmentSize(
              *(VIDMM_EXPORT **)(*((_QWORD *)v149 + 320) + 544LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)v149 + 320) + 552LL),
              v81,
              (unsigned __int64 *)v26 + 4,
              (unsigned __int64 *)v26 + 5,
              (unsigned __int64 *)v26 + 6,
              (unsigned __int64 *)v26 + 1,
              (unsigned __int64 *)v26 + 2,
              (unsigned __int64 *)v26 + 3);
          }
          LODWORD(v40) = 0;
          goto LABEL_143;
        case KMTQAITYPE_MPO3DDI_SUPPORT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          v113 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v149 + 320) + 16LL) + 2498LL);
LABEL_218:
          IsXBoxOneDevice = v113 != 0;
LABEL_219:
          *v26 = IsXBoxOneDevice;
          goto LABEL_321;
        case KMTQAITYPE_HWDRM_SUPPORT:
          if ( (_DWORD)v17 != 1 )
            goto LABEL_119;
          *(_BYTE *)v26 = 1;
          if ( *((_DWORD *)v149 + 71) != 1297040209 )
            goto LABEL_321;
          wcscpy(Str2, L"Qualcomm Adreno 530");
          if ( wcsncmp(*((const wchar_t **)v149 + 175), Str2, 0x14uLL) )
            goto LABEL_321;
          v57 = v148;
          if ( (*(_DWORD *)(*((_QWORD *)v149 + 305) + 16LL) & 0x10) == 0 )
            *(_BYTE *)v26 = 0;
          goto LABEL_322;
        case KMTQAITYPE_MPOKERNELCAPS_SUPPORT:
          if ( (_DWORD)v17 != 4 )
            goto LABEL_119;
          if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v149 + 320))
            || DXGADAPTER::SupportGetMultiPlaneOverlayCaps(*(DXGADAPTER **)(*((_QWORD *)v149 + 320) + 16LL))
            || DXGADAPTER::SupportGetPostCompositionCaps(*(DXGADAPTER **)(*((_QWORD *)v149 + 320) + 16LL)) )
          {
            *v26 = 1;
          }
          else
          {
LABEL_260:
            *v26 = 0;
          }
          goto LABEL_321;
        case KMTQAITYPE_MULTIPLANEOVERLAY_STRETCH_SUPPORT:
          if ( (_DWORD)v17 != 12 )
            goto LABEL_119;
          v127 = *v26;
          v128 = (ADAPTER_RENDER *)*((_QWORD *)v149 + 320);
          if ( v26[1] )
            ADAPTER_RENDER::SetOverlayStretchSupported(v128, v127, v26[2] != 0);
          else
            v26[2] = ADAPTER_RENDER::GetOverlayStretchSupported(v128, v127) != 0;
          goto LABEL_321;
        case KMTQAITYPE_GET_DEVICE_VIDPN_OWNERSHIP_INFO:
          if ( (_DWORD)v17 != 8 )
            goto LABEL_119;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v174, *v26, (struct _KTHREAD **)Current, &v173);
          if ( v173 )
          {
            *((_BYTE *)v26 + 4) = *((_BYTE *)v173 + 1786);
            LODWORD(v40) = 0;
          }
          else
          {
            v132 = WdLogNewEntry5_WdError(v130, v129, v131);
            *(_QWORD *)(v132 + 24) = *v26;
            WdLogEvent5_WdError(v132);
            LODWORD(v40) = -1073741811;
          }
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v174);
          goto LABEL_321;
        case KMTQAITYPE_QUERYREGISTRY:
          v68 = 0LL;
          if ( (*((_BYTE *)Current + 300) & 1) != 0 )
          {
            HostSilo = PsGetHostSilo();
            v68 = PsAttachSiloToCurrentThread(HostSilo);
          }
          LODWORD(v40) = DxgkpQueryRegistry(v149, v26, v17);
          if ( v68 )
            PsAttachSiloToCurrentThread(v68);
          goto LABEL_321;
        case KMTQAITYPE_KMD_DRIVER_VERSION:
          if ( (_DWORD)v17 != 8 )
            goto LABEL_119;
          FlipQueueInfo = ADAPTER_RENDER::GetKmdFileVersion(
                            *((ADAPTER_RENDER **)v149 + 320),
                            (union _LARGE_INTEGER *)v26);
          goto LABEL_146;
        case KMTQAITYPE_BLOCKLIST_KERNEL:
        case KMTQAITYPE_BLOCKLIST_RUNTIME:
          if ( (unsigned int)v17 < 8 )
            goto LABEL_119;
          LOBYTE(v65) = v29 == KMTQAITYPE_BLOCKLIST_KERNEL;
          FlipQueueInfo = DpiReadBlockListInfo(*((_QWORD *)v149 + 24), v26, (unsigned int)v17, v65);
          goto LABEL_146;
        case KMTQAITYPE_QUERY_ADAPTER_UNIQUE_GUID:
          if ( (_DWORD)v17 != 80 )
            goto LABEL_119;
          v92 = v152;
          if ( !*((_QWORD *)v152 + 24) )
          {
            v93 = WdLogNewEntry5_WdAssertion(v152, 0x1C0000000uLL);
            *(_QWORD *)(v93 + 24) = 3535LL;
            WdLogEvent5_WdAssertion(v93);
            v92 = v152;
          }
          AdapterUniqueGUID = (const void **)DpiFdoGetAdapterUniqueGUID(*((_QWORD *)v92 + 24));
          if ( !AdapterUniqueGUID )
          {
            LODWORD(v40) = -1073741823;
            goto LABEL_321;
          }
          memset(v26, 0, 0x50uLL);
          v95 = 78LL;
          if ( *(_WORD *)AdapterUniqueGUID < 0x4Eu )
            v95 = *(unsigned __int16 *)AdapterUniqueGUID;
          memmove(v26, AdapterUniqueGUID[1], v95);
          goto LABEL_137;
        case KMTQAITYPE_NODEPERFDATA:
          if ( (_DWORD)v17 != 56 )
            goto LABEL_119;
          FlipQueueInfo = DXGADAPTER::GetNodePerfData(v149, (struct _D3DKMT_NODE_PERFDATA *)v26);
          goto LABEL_146;
        case KMTQAITYPE_ADAPTERPERFDATA:
          if ( (_DWORD)v17 != 64 )
            goto LABEL_119;
          FlipQueueInfo = DXGADAPTER::GetAdapterPerfData(v149, (struct _D3DKMT_ADAPTER_PERFDATA *)v26);
          goto LABEL_146;
        case KMTQAITYPE_ADAPTERPERFDATA_CAPS:
          if ( (_DWORD)v17 != 40 )
            goto LABEL_119;
          FlipQueueInfo = DXGADAPTER::GetAdapterPerfDataCaps(v149, (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v26);
          goto LABEL_146;
        case KMTQUITYPE_GPUVERSION:
          if ( (_DWORD)v17 != 132 )
            goto LABEL_119;
          FlipQueueInfo = DXGADAPTER::GetGpuVersion(v149, (struct _D3DKMT_GPUVERSION *)v26);
LABEL_146:
          LODWORD(v40) = FlipQueueInfo;
          goto LABEL_321;
        case KMTQUITYPE_GPUVERSION|KMTQAITYPE_UMDRIVERNAME:
        case KMTQUITYPE_GPUVERSION|KMTQAITYPE_UMOPENGLINFO:
          v67 = 0x2000LL;
          if ( (_DWORD)v17 == 0x2000 )
          {
            LODWORD(v40) = -1073741823;
            v133 = v149;
            if ( v29 == (KMTQUITYPE_GPUVERSION|KMTQAITYPE_UMDRIVERNAME) )
              v133 = v152;
            if ( v133 )
            {
              DXGADAPTER::GetDeviceDescriptor(v133, 0x2000u, (unsigned __int16 *)v26);
LABEL_137:
              LODWORD(v40) = 0;
            }
          }
          else
          {
LABEL_119:
            LODWORD(v40) = -1073741811;
            v70 = WdLogNewEntry5_WdWarning(v66, v67, v64);
            *(_QWORD *)(v70 + 24) = v30;
LABEL_319:
            *(_QWORD *)(v70 + 32) = -1073741811LL;
LABEL_320:
            WdLogEvent5_WdWarning(v70);
          }
          goto LABEL_321;
        default:
          LODWORD(v40) = -1073741811;
          v70 = WdLogNewEntry5_WdWarning(v66, 0x1C0000000uLL, v64);
          v126 = v29;
          goto LABEL_318;
      }
LABEL_338:
      if ( (int)v40 >= 0 && (*((_BYTE *)Current + 300) & 1) != 0 )
        LODWORD(v40) = PostProcessUMDFileName(v29, v26, v17);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
      goto LABEL_342;
    }
  }
  LODWORD(v40) = -1073741130;
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v177);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v178);
LABEL_325:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v186);
LABEL_98:
  v57 = v148;
LABEL_342:
  if ( (int)v40 >= 0 )
  {
    if ( v150 && ((unsigned __int64)&v57[v30] > MmUserProbeAddress || &v57[v30] <= v57) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v57, v26, v30);
  }
  operator delete[](v26);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v166);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v154, v147);
  if ( v156 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)&DxgkControlGuid_Context, &EventProfilerExit, 0LL, v154);
  return (unsigned int)v40;
}
