/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161C90 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002758 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0002980 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?IsGpuMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0003FD8 (-IsGpuMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0004210 (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0004224 (-IsIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C000639C (-IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000658C (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006854 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0006870 (-IsBddDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSoftwareAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0006B28 (-IsSoftwareAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007260 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000784C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000A544 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C000B940 (-IsSoftGPU@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B9A8 (-IsRenderAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsPostAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C001ABBC (-IsPostAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DC08 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C001E044 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x1C001F4BC (-CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x1C001F500 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     ?IsSurpriseRemovalSupport@DXGADAPTER@@QEBAEW4_DXGK_SURPRISE_REMOVAL_TYPE@@@Z @ 0x1C001F588 (-IsSurpriseRemovalSupport@DXGADAPTER@@QEBAEW4_DXGK_SURPRISE_REMOVAL_TYPE@@@Z.c)
 *     ?IsVirtualRenderDevice@DXGADAPTER@@QEBAEXZ @ 0x1C001F59C (-IsVirtualRenderDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchSetCrossAdapterData@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_CROSS_ADAPTER_DATA@@@Z @ 0x1C002319C (-VidSchSetCrossAdapterData@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_CROSS_ADAPTER_DAT.c)
 *     ?VidMmUseDirectFlip@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@@Z @ 0x1C00231E4 (-VidMmUseDirectFlip@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0023270 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C00C337C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00C3500 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2C84 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6DB8 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C0146204 (DpiReadPnpRegistryValue.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C016815C (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C016A924 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C016A9CC (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C016AD70 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C016B2D8 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C016B34C (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C016BB24 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     DpiGetDriverVersion @ 0x1C016BB70 (DpiGetDriverVersion.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C016BB84 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     DpiGetAdapterInfo @ 0x1C016BC68 (DpiGetAdapterInfo.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C0180264 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C0181D1C (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C0182C38 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1C01EC844 (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01EDB44 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 *     ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C01EFF30 (-ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  char v6; // r13
  __int64 v7; // rax
  struct _ERESOURCE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  struct _ERESOURCE *v27; // rax
  NTSTATUS v28; // eax
  int AdapterInfo; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 v49; // rax
  unsigned int DriverVersion; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // r14d
  unsigned __int8 v55; // r8
  _QWORD *v56; // rax
  const GUID *v57; // r8
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // eax
  int PnpRegistryValue; // eax
  const GUID *v66; // r8
  int v67; // ecx
  char v68; // al
  unsigned int *v69; // rsi
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned int v74; // eax
  unsigned __int64 v75; // r15
  __int64 v76; // rax
  bool v77; // cf
  SIZE_T v78; // rax
  char *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  void *v84; // rbx
  __int64 v85; // rax
  unsigned int v86; // eax
  __int64 v87; // r9
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rax
  int v92; // eax
  unsigned int v93; // edx
  int v94; // eax
  SIZE_T v95; // rax
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  const GUID *v99; // r8
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  unsigned int v104; // eax
  bool v105; // zf
  unsigned int v106; // r13d
  __int64 v107; // rdx
  __int64 v108; // r8
  char v109; // al
  __int64 v110; // rcx
  int v111; // eax
  char v112; // dl
  char v113; // dl
  char v114; // dl
  bool IsComputeOnlyAdapter; // al
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // rcx
  unsigned int v119; // eax
  __int64 v120; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v122; // rax
  struct DXGGLOBAL *v123; // rax
  char v124; // r9
  __int64 v125; // rcx
  __int64 v126; // rcx
  int v127; // ebx
  DXGGLOBAL *v128; // rax
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // rax
  char *v134; // r15
  int RenderCore; // eax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // rax
  int DisplayCore; // eax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  char v150; // al
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // rax
  DXGGLOBAL *v163; // rax
  int v164; // eax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v174; // rax
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rbx
  struct DXGGLOBAL *v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rbx
  int v182; // eax
  struct DXGGLOBAL *v183; // rax
  int v184; // edx
  DXGGLOBAL *v185; // rax
  unsigned int v186; // [rsp+50h] [rbp-B0h] BYREF
  int v187; // [rsp+54h] [rbp-ACh] BYREF
  int v188; // [rsp+58h] [rbp-A8h] BYREF
  int v189; // [rsp+60h] [rbp-A0h] BYREF
  int v190; // [rsp+68h] [rbp-98h] BYREF
  __int64 v191; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v192[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v193; // [rsp+80h] [rbp-80h]
  struct _DXGKARG_QUERYADAPTERINFO v194; // [rsp+88h] [rbp-78h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v195; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v196; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v197[72]; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v198; // [rsp+188h] [rbp+88h] BYREF

  v6 = 0;
  if ( KeGetCurrentIrql() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, DeviceObject);
    *(_QWORD *)(v7 + 24) = 6195LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 44) )
    return 3221225485LL;
  v8 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 18) = v8;
  if ( !v8 )
  {
LABEL_5:
    v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225495LL;
  }
  v14 = ExInitializeResourceLite(v8);
  v18 = v14;
  if ( v14 < 0 )
    goto LABEL_8;
  *((_QWORD *)this + 24) = DeviceObject;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 25) = DeviceAttachmentBaseRef;
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  v21 = DXGGLOBAL::AcquireAdapterOrdinal(*((DXGGLOBAL **)this + 2));
  *((_DWORD *)this + 52) = v21;
  if ( v21 == -1 )
    return 3221225495LL;
  LODWORD(v18) = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4212));
  if ( (int)v18 < 0 )
  {
    v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    *(_QWORD *)(v26 + 24) = 6254LL;
    WdLogEvent5_WdLowResource(v26);
    return (unsigned int)v18;
  }
  v27 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 30) = v27;
  if ( !v27 )
    goto LABEL_5;
  v28 = ExInitializeResourceLite(v27);
  v18 = v28;
  if ( v28 < 0 )
  {
LABEL_8:
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdWarning(v19);
    return (unsigned int)v18;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *((_QWORD *)this + 5) = -1LL;
  AdapterInfo = DpiGetAdapterInfo(DeviceObject, (char *)this + 1304, (char *)this + 248, (char *)this + 1736);
  v18 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v33 + 24) = this;
    *(_QWORD *)(v33 + 32) = v18;
    WdLogEvent5_WdWarning(v33);
    memset((char *)this + 248, 0, 0x420uLL);
    memset((char *)this + 1304, 0, 0xF0uLL);
    return (unsigned int)v18;
  }
  if ( DXGADAPTER::IsXBoxOneDevice(this) )
    *((_BYTE *)DXGGLOBAL::GetGlobal(v35, v34) + 303928) = 1;
  v188 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &Feature_GPUParavirtualization__private_propertyCache,
                       0x7C9E6Cu,
                       2u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0x7C9E6Cu,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006C580,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v188,
      0LL,
      0,
      1uLL);
  }
  if ( DXGADAPTER::IsVirtualRenderDevice(this) )
  {
    v36 = DXGADAPTER::InitializeParavirtualizedAdapter(this);
    v18 = v36;
    if ( v36 < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v38, v37, v39);
      *(_QWORD *)(v40 + 32) = 6315LL;
LABEL_25:
      *(_QWORD *)(v40 + 24) = v18;
LABEL_26:
      WdLogEvent5_WdError(v40);
      return (unsigned int)v18;
    }
  }
  if ( DXGADAPTER::IsSoftGPU(this) && DXGADAPTER::IsWarpAdapter(this) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v42, v41);
    *(_QWORD *)(v44 + 24) = 6323LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !*((_QWORD *)this + 40) )
  {
    v45 = WdLogNewEntry5_WdError(v42, v41, v43);
    *(_QWORD *)(v45 + 24) = 6330LL;
LABEL_32:
    WdLogEvent5_WdError(v45);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 57) )
    *((_QWORD *)this + 57) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 118) )
    *((_QWORD *)this + 118) = DxgkQueryFSEBlock;
  v48 = (int)DXGADAPTER::CallDriverQueryInterface(
               this,
               &GUID_AGP_BUS_INTERFACE_STANDARD,
               0xB8u,
               5u,
               (char *)this + 1544,
               0LL);
  if ( (int)v48 < 0 )
  {
    v49 = WdLogNewEntry5_WdTrace(v47, v46);
    *(_QWORD *)(v49 + 24) = this;
    *(_QWORD *)(v49 + 32) = v48;
LABEL_40:
    memset((char *)this + 1544, 0, 0xB8uLL);
    goto LABEL_41;
  }
  if ( *((_WORD *)this + 773) < 4u )
    goto LABEL_40;
LABEL_41:
  DriverVersion = DpiGetDriverVersion(*((_QWORD *)this + 24));
  *((_DWORD *)this + 432) = DriverVersion;
  v54 = DriverVersion;
  if ( DriverVersion >= 0x7000 && *((_DWORD *)this + 336) && *((_DWORD *)this + 337) )
  {
    v55 = 0;
LABEL_49:
    DXGADAPTER::SetModeBehavior(this, 1u, v55);
    goto LABEL_50;
  }
  if ( DriverVersion >= 0x6002 && *((_DWORD *)this + 336) && *((_DWORD *)this + 337) )
  {
    v55 = 1;
    goto LABEL_49;
  }
LABEL_50:
  if ( v54 - 20480 <= 5 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51, v53);
    v56[3] = 6405LL;
LABEL_52:
    WdLogEvent5_WdError(v56);
    return 3221225485LL;
  }
  *(_QWORD *)&v194.Type = 1LL;
  *(_QWORD *)&v194.InputDataSize = 0LL;
  v194.pOutputData = (char *)this + 1848;
  *(_OWORD *)&v194.OutputDataSize = 0LL;
  v194.pInputData = 0LL;
  v194.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v54);
  if ( !v194.OutputDataSize )
    return 3221225485LL;
  v58 = DXGADAPTER::DdiQueryAdapterInfo(this, &v194, v57);
  v18 = v58;
  if ( v58 < 0 )
    goto LABEL_56;
  v62 = *((unsigned int *)this + 546);
  if ( (int)v62 > 9472 && *((_DWORD *)DeviceObject->DeviceExtension + 681) <= 0xA00Bu )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v62, v59, v61);
    v63 = *((int *)this + 546);
LABEL_60:
    v56[3] = v63;
    goto LABEL_52;
  }
  if ( (int)v62 < 4864 )
  {
    if ( *((_QWORD *)this + 87) )
    {
      v64 = 1300;
    }
    else if ( (_DWORD)v62 == 4608 )
    {
      v64 = 1200;
    }
    else if ( !*((_QWORD *)this + 83) || (v64 = 1105, (*((_DWORD *)this + 475) & 4) == 0) )
    {
      v64 = 1000;
    }
  }
  else
  {
    v64 = DxgkConvertWddmVersionToD3DKMTDriverVersion(v62);
  }
  *((_DWORD *)this + 613) = v64;
  PnpRegistryValue = DpiReadPnpRegistryValue(*((_QWORD *)this + 24), L"ACGSupported", (char *)&v187, 4u, 2u);
  v67 = v187;
  if ( PnpRegistryValue < 0 )
    v67 = 0;
  v187 = v67;
  if ( v67 || (v68 = 0, *((int *)this + 613) >= 2200) )
    v68 = 1;
  *((_BYTE *)this + 188) = v68;
  if ( *((_BYTE *)this + 185) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_DWORD *)this + 479) &= 0xFFFFF3FF;
    *((_DWORD *)this + 606) &= ~4u;
    *((_BYTE *)this + 2388) = 0;
    if ( *((_BYTE *)this + 186) )
      *((_DWORD *)this + 475) &= ~0x100000u;
  }
  else if ( v54 >= 0x5023
         && g_bCreateParavirtualizedGpu
         && !DXGADAPTER::IsSoftwareAdapter(this)
         && !DXGADAPTER::IsWarpAdapter(this)
         && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
  {
    *((_DWORD *)this + 479) |= 0x400u;
  }
  v69 = (unsigned int *)((char *)this + 2432);
  *((_DWORD *)this + 608) = 0;
  if ( v54 >= 0x5010 && !*((_BYTE *)this + 185) )
  {
    *(_QWORD *)&v195.Type = 16LL;
    *(_QWORD *)&v195.InputDataSize = 0LL;
    *(_QWORD *)&v195.Flags.0 = 0LL;
    HIDWORD(v195.hKmdProcessHandle) = 0;
    v195.pInputData = 0LL;
    v195.pOutputData = (char *)this + 2432;
    v195.OutputDataSize = 4;
    v70 = DXGADAPTER::DdiQueryAdapterInfo(this, &v195, v66);
    if ( v70 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v72, v71) + 24) = v70;
      *v69 = 0;
      if ( *((int *)this + 546) >= 8704 )
        *v69 |= 2u;
    }
    v74 = *v69;
    if ( *((int *)this + 546) >= 9472 )
    {
      if ( (v74 & 0xC) == 0xC )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71, v73);
        v56[3] = this;
        v56[4] = 6564LL;
        goto LABEL_52;
      }
    }
    else
    {
      *v69 = v74 & 0xFFFFFFF3;
    }
  }
  v75 = *((unsigned int *)this + 64);
  v76 = 352 * v75;
  if ( !is_mul_ok(v75, 0x160uLL) )
    v76 = -1LL;
  v77 = __CFADD__(v76, 8LL);
  v78 = v76 + 8;
  if ( v77 )
    v78 = -1LL;
  v79 = (char *)operator new[](v78, 0x4B677844u, (POOL_TYPE)512);
  if ( v79 )
  {
    v84 = v79 + 8;
    *(_QWORD *)v79 = v75;
    `vector constructor iterator'(
      v79 + 8,
      352LL,
      (unsigned int)v75,
      (void (__fastcall *)(char *))DXGK_PHYSICALADAPTERINFO::DXGK_PHYSICALADAPTERINFO);
  }
  else
  {
    v84 = 0LL;
  }
  *((_QWORD *)this + 305) = v84;
  if ( !v84 )
  {
    v85 = WdLogNewEntry5_WdLowResource(v81, v80, v82, v83);
    *(_QWORD *)(v85 + 24) = 6573LL;
    WdLogEvent5_WdLowResource(v85);
    return 3221225495LL;
  }
  memset(v84, 0, 352 * v75);
  if ( *((int *)this + 546) < 0x2000 || v54 < 0x5005 )
  {
    v6 = 1;
  }
  else
  {
    v60 = 0LL;
    *((_DWORD *)this + 612) = 0;
    v86 = 0;
    v186 = 0;
    if ( (_DWORD)v75 )
    {
      v87 = *((_QWORD *)this + 305);
      v61 = 0LL;
      while ( 1 )
      {
        *(_QWORD *)&v196.Flags.0 = 0LL;
        HIDWORD(v196.hKmdProcessHandle) = 0;
        v196.pInputData = &v186;
        *(_QWORD *)&v196.Type = 15LL;
        *(_QWORD *)&v196.InputDataSize = 4LL;
        v196.pOutputData = (void *)(v87 + 352LL * (unsigned int)v61);
        v196.OutputDataSize = 24;
        v88 = DXGADAPTER::DdiQueryAdapterInfo(this, &v196, (const GUID *)v61);
        v90 = v88;
        if ( v88 < 0 )
          break;
        v87 = *((_QWORD *)this + 305);
        v60 = 352LL * v186;
        v59 = *(unsigned __int16 *)(v60 + v87);
        v86 = v59 + *((_DWORD *)this + 612);
        v61 = ++v186;
        *((_DWORD *)this + 612) = v86;
        if ( (unsigned int)v61 >= (unsigned int)v75 )
          goto LABEL_108;
      }
      v91 = WdLogNewEntry5_WdEvent(v89);
      *(_QWORD *)(v91 + 24) = v90;
      WdLogEvent5_WdEvent(v91);
      v6 = 1;
    }
    else
    {
LABEL_108:
      if ( *((int *)this + 613) <= 2400 && v86 > 0x40 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
        v56[3] = this;
        v56[4] = 64LL;
        v56[5] = *((unsigned int *)this + 612);
        goto LABEL_52;
      }
      if ( (*((_DWORD *)this + 478) & 1) == 0 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
        v56[3] = this;
        v56[4] = 6639LL;
        goto LABEL_52;
      }
    }
    if ( (*((_DWORD *)this + 479) & 0x800) != 0 )
    {
      v198 = 0;
      if ( (_DWORD)v75 )
      {
        do
        {
          v191 = 0LL;
          v194.pInputData = &v198;
          v194.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
          v194.pOutputData = &v191;
          v194.InputDataSize = 4;
          v194.OutputDataSize = 8;
          v92 = DXGADAPTER::DdiQueryAdapterInfo(this, &v194, (const GUID *)v61);
          v18 = v92;
          if ( v92 < 0 )
            goto LABEL_56;
          if ( (v191 & 0xFFF) != 0 )
          {
            v56 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
            v63 = v191;
            goto LABEL_60;
          }
          *(_QWORD *)(352LL * v198 + *((_QWORD *)this + 305) + 48) = v191;
          v93 = v198;
          v61 = *(_QWORD *)(352LL * v198 + *((_QWORD *)this + 305) + 48);
          if ( v61 )
          {
            result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v198, v61);
            if ( (int)result < 0 )
              return result;
            v93 = v198;
          }
          v198 = v93 + 1;
        }
        while ( v93 + 1 < (unsigned int)v75 );
      }
      v194.Type = DXGKQAITYPE_HARDWARERESERVEDRANGES;
      v194.InputDataSize = 0;
      v194.pInputData = 0LL;
      *(_QWORD *)v192 = 0LL;
      v193 = 0LL;
      v194.pOutputData = v192;
      v194.OutputDataSize = 16;
      v94 = DXGADAPTER::DdiQueryAdapterInfo(this, &v194, (const GUID *)v61);
      v18 = v94;
      if ( v94 < 0 )
      {
LABEL_56:
        v40 = WdLogNewEntry5_WdError(v60, v59, v61);
        goto LABEL_25;
      }
      if ( v192[0] )
      {
        v95 = 16LL * v192[0];
        if ( !is_mul_ok(v192[0], 0x10uLL) )
          v95 = -1LL;
        v96 = (struct _DXGK_PHYSICAL_MEMORY_RANGE *)operator new[](v95, 0x4B677844u, PagedPool);
        v100 = v96;
        if ( !v96 )
        {
          v40 = WdLogNewEntry5_WdError(v98, v97, v99);
          *(_QWORD *)(v40 + 24) = v192[0];
          goto LABEL_26;
        }
        v193 = v96;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v194, v99) < 0 )
        {
          v103 = WdLogNewEntry5_WdAssertion(v102, v101);
          *(_QWORD *)(v103 + 24) = 6708LL;
          WdLogEvent5_WdAssertion(v103);
        }
        LODWORD(v18) = DXGADAPTER::ValidateHardwareReservedRanges(this, v100, v192[0]);
        if ( (int)v18 < 0 )
        {
          operator delete[](v100);
          return (unsigned int)v18;
        }
        v104 = v192[0];
        *((_QWORD *)this + 533) = v100;
        v69 = (unsigned int *)((char *)this + 2432);
        *((_DWORD *)this + 1064) = v104;
      }
    }
  }
  v105 = v6 == 0;
  v106 = v75;
  if ( !v105 && (_DWORD)v75 )
  {
    v59 = 0LL;
    do
    {
      *(_WORD *)(v59 + *((_QWORD *)this + 305)) = *((_WORD *)this + 962);
      v59 += 352LL;
      *(_DWORD *)(v59 + *((_QWORD *)this + 305) - 336) ^= (*(_DWORD *)(v59 + *((_QWORD *)this + 305) - 336) ^ (*((_DWORD *)this + 479) >> 7)) & 1;
      *(_DWORD *)(v59 + *((_QWORD *)this + 305) - 336) ^= (*(_DWORD *)(v59 + *((_QWORD *)this + 305) - 336) ^ (*((_DWORD *)this + 479) >> 5)) & 2;
      *(_WORD *)(v59 + *((_QWORD *)this + 305) - 350) = *((_WORD *)this + 960);
      v60 = *((_QWORD *)this + 305);
      *(_QWORD *)(v59 + v60 - 344) = *((_QWORD *)this + 24);
      --v75;
    }
    while ( v75 );
  }
  if ( *((int *)this + 613) >= 2400 )
  {
    if ( *((_DWORD *)this + 606) >= 0x10u )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
      v56[3] = 6746LL;
      goto LABEL_52;
    }
    *((_BYTE *)this + 2506) = *((_BYTE *)this + 2424) & 1;
  }
  if ( v54 >= 0x3001 )
  {
    v111 = *((_DWORD *)this + 546);
    if ( v111 != 4096
      && v111 != 4608
      && v111 != 4864
      && v111 != 0x2000
      && v111 != 8448
      && v111 != 8704
      && v111 != 8960
      && v111 != 9216
      && v111 != 9472
      && v111 != 9728 )
    {
      v45 = WdLogNewEntry5_WdError(v60, v59, v61);
      *(_QWORD *)(v45 + 24) = *((int *)this + 546);
      goto LABEL_32;
    }
  }
  else
  {
    *((_DWORD *)this + 546) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v60, v59) + 544) || (v105 = !DXGADAPTER::IsSoftGPU(this), v109 = 1, !v105) )
    v109 = 0;
  *((_BYTE *)this + 2464) = v109;
  if ( v109 )
  {
    v110 = *((unsigned int *)this + 546);
    if ( (int)v110 < 4608
      && (*((_DWORD *)this + 594)
       || *((_DWORD *)this + 595)
       || *((_BYTE *)this + 2384)
       || *((_BYTE *)this + 2385)
       || *((_BYTE *)this + 2386)
       || (*((_DWORD *)this + 475) & 0x10000000) != 0
       || (*((_DWORD *)this + 478) & 0x14) != 0
       || *((_BYTE *)this + 2387)
       || *((_BYTE *)this + 2389)
       || *((_BYTE *)this + 2390)) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v110, v107, v108);
      v56[3] = 6822LL;
      goto LABEL_52;
    }
    if ( (int)v110 < 4864
      && ((*((_DWORD *)this + 477) & 0x10) != 0
       || (*((_DWORD *)this + 479) & 0x10) != 0
       || *((_BYTE *)this + 2391)
       || *((_DWORD *)this + 598)) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v110, v107, v108);
      v56[3] = 6837LL;
      goto LABEL_52;
    }
    if ( (int)v110 < 0x2000 && *((_BYTE *)this + 2396) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v110, v107, v108);
      v56[3] = 6865LL;
      goto LABEL_52;
    }
  }
  if ( v54 < 0x4000 )
  {
    *((_DWORD *)this + 479) &= ~0x10u;
    *((_BYTE *)this + 2391) = 0;
  }
  if ( v54 < 0x5011
    && (unsigned __int8)DXGADAPTER::IsPostAdapter(this)
    && (*((_DWORD *)this + 479) & 0x10) != 0
    && (*((_DWORD *)this + 77) & 0x1000) != 0 )
  {
    *((_BYTE *)this + 2396) = 1;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 2384))) & 4;
  v112 = *(_BYTE *)a3 ^ (*(_BYTE *)a3 ^ (8 * DXGADAPTER::IsSurpriseRemovalSupport(this, DxgkRemovalHibernation))) & 8;
  *(_BYTE *)a3 = v112;
  v113 = (v112 ^ (32 * (*((_DWORD *)this + 479) >> 4))) & 0x20 ^ v112;
  *(_BYTE *)a3 = v113;
  v114 = (v113 ^ (*((_BYTE *)this + 2391) << 6)) & 0x40 ^ v113;
  *(_BYTE *)a3 = v114;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 471);
  *(_BYTE *)a3 = v114 & 0x7F | (*(_BYTE *)v69 << 7);
  *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ *((_BYTE *)this + 2396)) & 1;
  *((_DWORD *)a3 + 2) = *((_DWORD *)this + 546);
  IsComputeOnlyAdapter = DXGADAPTER::IsComputeOnlyAdapter(this);
  LOBYTE(v117) = *(_BYTE *)a3 & 0xEF;
  LOBYTE(v118) = (*((_BYTE *)a3 + 1) ^ (32 * IsComputeOnlyAdapter)) & 0x20;
  *(_BYTE *)a3 = v117;
  LOBYTE(v118) = *((_BYTE *)a3 + 1) ^ v118;
  *((_BYTE *)a3 + 1) = v118;
  if ( v54 >= 0x5021 )
  {
    LOBYTE(v117) = v117 | (16 * (*((_BYTE *)this + 2416) & 1));
    *(_BYTE *)a3 = v117;
  }
  if ( !*((_BYTE *)this + 185) )
  {
    LOBYTE(v116) = v117 & 0x40;
    if ( (v117 & 0x40) != 0 )
    {
      if ( v54 < 0x5005 && (*((_DWORD *)this + 336) || *((_DWORD *)this + 337)) )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
        v63 = *((_QWORD *)this + 24);
        goto LABEL_60;
      }
      LOBYTE(v118) = v118 ^ (v118 ^ (2 * *((_BYTE *)this + 2419))) & 2;
      *((_BYTE *)a3 + 1) = v118;
    }
    LOBYTE(v118) = v118 & 1;
    if ( ((_BYTE)v116 || (_BYTE)v118) && (v117 & 0x20) == 0 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
      v56[3] = *((_QWORD *)this + 24);
      v56[4] = 6944LL;
      goto LABEL_52;
    }
    if ( (_BYTE)v116 )
    {
      if ( (_BYTE)v118 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
        v56[3] = *((_QWORD *)this + 24);
        v56[4] = 6951LL;
        goto LABEL_52;
      }
    }
    else if ( (_BYTE)v118 && !*((_DWORD *)this + 337) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
      v56[3] = *((_QWORD *)this + 24);
      v56[4] = 6959LL;
      goto LABEL_52;
    }
    if ( *((_BYTE *)this + 2386) && (!*((_QWORD *)this + 84) || !*((_QWORD *)this + 85) || !*((_QWORD *)this + 86)) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
      v56[3] = 6973LL;
      goto LABEL_52;
    }
    if ( (*((_DWORD *)this + 475) & 4) != 0 && !*((_QWORD *)this + 83) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
      v56[3] = 6980LL;
      goto LABEL_52;
    }
    if ( *((_BYTE *)this + 2389) && (!*((_QWORD *)this + 88) || !*((_QWORD *)this + 89)) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
      v56[3] = 6988LL;
      goto LABEL_52;
    }
    if ( v54 < 0x300C && *((_QWORD *)this + 88) && *((_QWORD *)this + 89) )
      *((_BYTE *)this + 2389) = 1;
  }
  *((_WORD *)this + 1233) = 0;
  *((_BYTE *)this + 2468) = 0;
  if ( *((_BYTE *)this + 2388) )
  {
    if ( v54 < 0x300B )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
      v56[3] = 7010LL;
      goto LABEL_52;
    }
    if ( v54 >= 0x4000 )
    {
      if ( v54 == 0x4000 )
      {
        *((_BYTE *)this + 2467) = 1;
      }
      else
      {
        v119 = *((_DWORD *)this + 598);
        if ( !v119 )
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
          v56[3] = 7023LL;
          goto LABEL_52;
        }
        if ( v119 <= 8 )
        {
          if ( v54 > 0x5000 )
            *((_BYTE *)this + 2468) = 1;
        }
        else
        {
          v118 = *((unsigned int *)this + 546);
          if ( (int)v118 < 8704 )
          {
            if ( (int)v118 < 0x2000 || v119 != 10 )
            {
              v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
              v56[3] = 7046LL;
              goto LABEL_52;
            }
            *((_DWORD *)this + 598) = 8;
          }
          else if ( v119 > 0xA )
          {
            v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
            v56[3] = 7033LL;
            goto LABEL_52;
          }
        }
      }
    }
    else
    {
      *((_BYTE *)this + 2466) = 1;
    }
    v120 = *((_QWORD *)this + 92);
    if ( !v120 && !*((_QWORD *)this + 108) && !*((_QWORD *)this + 112) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
      v56[3] = 7062LL;
      goto LABEL_52;
    }
    if ( v54 > 0x4002 && !*((_QWORD *)this + 96) && !*((_QWORD *)this + 107) && !*((_QWORD *)this + 111) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
      v56[3] = 7074LL;
      goto LABEL_52;
    }
    if ( !*((_BYTE *)this + 2387) )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v118, v116, v117);
      v56[3] = 7084LL;
      goto LABEL_52;
    }
    if ( v120 )
    {
      Global = DXGGLOBAL::GetGlobal(v118, v116);
      DXGGLOBAL::RecordFeatureUsage((__int64)Global, 1, 1);
    }
    if ( *((_QWORD *)this + 108) )
    {
      v122 = DXGGLOBAL::GetGlobal(v118, v116);
      DXGGLOBAL::RecordFeatureUsage((__int64)v122, 2, 1);
    }
    if ( *((_QWORD *)this + 112) )
    {
      v123 = DXGGLOBAL::GetGlobal(v118, v116);
      DXGGLOBAL::RecordFeatureUsage((__int64)v123, 3, 1);
    }
  }
  v124 = *((_BYTE *)this + 185);
  *((_BYTE *)this + 2504) = 0;
  if ( v124 )
    goto LABEL_271;
  LOBYTE(v117) = 0;
  if ( v54 >= 0x700A && *((int *)this + 546) >= 8704 && (!*((_QWORD *)this + 66) || *((_QWORD *)this + 132)) )
  {
    *((_BYTE *)this + 2504) = 1;
    LOBYTE(v117) = 1;
  }
  if ( *((int *)this + 546) < 8960 )
  {
LABEL_271:
    *((_DWORD *)this + 474) &= 0xFFFFFFE3;
  }
  else
  {
    v125 = (*((_DWORD *)this + 474) >> 3) & 1;
    v116 = (*((_DWORD *)this + 474) >> 2) & 1;
    if ( (unsigned int)v116 < (unsigned int)v125
      || (unsigned int)v125 < ((*((_DWORD *)this + 474) >> 4) & 1u)
      || !(_BYTE)v117 && (_DWORD)v116 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v125, v116, v117);
      v56[3] = *((_QWORD *)this + 24);
      v56[4] = -1073741811LL;
      goto LABEL_52;
    }
  }
  v126 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v126 + 40) + 133LL) && !v124 )
  {
    v127 = *((_DWORD *)this + 546);
    v128 = DXGGLOBAL::GetGlobal(v126, v116);
    v129 = DXGGLOBAL::DeferredInitialize(v128, v127 >= 0x2000);
    v18 = v129;
    if ( v129 < 0 )
      goto LABEL_56;
  }
  DXGADAPTER::Config = 0;
  DXGADAPTER::ReadConfig(this, a3);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((int *)this + 546) < 9216 )
    goto LABEL_278;
  v133 = *((_QWORD *)this + 154);
  if ( !*((_QWORD *)this + 153) )
  {
    if ( !v133 )
    {
LABEL_278:
      *((_QWORD *)this + 153) = SwapChainObOpenProcedure;
      *((_QWORD *)this + 154) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      goto LABEL_279;
    }
LABEL_285:
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v131, v130, v132);
    v56[3] = 7198LL;
    goto LABEL_52;
  }
  if ( !v133 )
    goto LABEL_285;
LABEL_279:
  result = DXGADAPTER::CheckMcdmDdiOverall(this, v130, v132);
  if ( (int)result < 0 )
    return result;
  DXGADAPTER::InitializeDriverDiagnosticReporting(this);
  v134 = (char *)this + 2560;
  RenderCore = ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 320);
  v18 = RenderCore;
  if ( RenderCore < 0 )
  {
    if ( *(_QWORD *)v134 )
    {
      v139 = WdLogNewEntry5_WdAssertion(v137, v136);
      *(_QWORD *)(v139 + 24) = 7223LL;
      WdLogEvent5_WdAssertion(v139);
    }
    v40 = WdLogNewEntry5_WdError(v137, v136, v138);
    *(_QWORD *)(v40 + 24) = this;
    *(_QWORD *)(v40 + 32) = v18;
    goto LABEL_26;
  }
  DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 319);
  v144 = DisplayCore;
  if ( DisplayCore < 0 )
  {
    if ( *((_QWORD *)this + 319) )
    {
      v145 = WdLogNewEntry5_WdAssertion(v142, v141);
      *(_QWORD *)(v145 + 24) = 7239LL;
      WdLogEvent5_WdAssertion(v145);
    }
    v146 = WdLogNewEntry5_WdError(v142, v141, v143);
    *(_QWORD *)(v146 + 24) = this;
    *(_QWORD *)(v146 + 32) = v144;
    WdLogEvent5_WdError(v146);
    return (unsigned int)v144;
  }
  if ( !DXGADAPTER::IsRenderAdapter(this) && !DXGADAPTER::IsDisplayAdapter(this) )
  {
    v45 = WdLogNewEntry5_WdError(v148, v147, v149);
    *(_QWORD *)(v45 + 24) = this;
    *(_QWORD *)(v45 + 32) = -1073741735LL;
    goto LABEL_32;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ DXGADAPTER::IsDisplayAdapter(this)) & 1;
  v150 = *(_BYTE *)a3 ^ (*(_BYTE *)a3 ^ (2 * DXGADAPTER::IsRenderAdapter(this))) & 2;
  *(_BYTE *)a3 = v150;
  if ( (v150 & 1) != 0 )
    *((_BYTE *)a3 + 1) = (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0) | *((_BYTE *)a3 + 1) & 0xFB;
  else
    *((_BYTE *)a3 + 1) &= ~4u;
  if ( DXGADAPTER::IsDisplayOnlyAdapter(this) )
    *((_DWORD *)this + 475) |= 1u;
  if ( DXGADAPTER::IsDxgmms2(this)
    && !DXGADAPTER::IsSoftwareAdapter(this)
    && !DXGADAPTER::IsSoftGPU(this)
    && !DXGADAPTER::IsDisplayOnlyAdapter(this)
    && v54 >= 0x5008
    && (!*((_QWORD *)this + 97) || !*((_QWORD *)this + 109)) )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v152, v151, v153);
    v56[3] = 7295LL;
    goto LABEL_52;
  }
  if ( *((_BYTE *)this + 2464)
    && DXGADAPTER::IsFullWDDMAdapter(this)
    && *((int *)this + 546) >= 4608
    && !*((_BYTE *)this + 2387) )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v155, v154, v156);
    v56[3] = 7310LL;
    goto LABEL_52;
  }
  if ( ((*((_BYTE *)this + 185) == 0) & *((_BYTE *)this + 2387)) != 0
    && (DXGADAPTER::IsDisplayOnlyAdapter(this)
     || !(unsigned __int8)VIDMM_EXPORT::VidMmUseDirectFlip(
                            *(VIDMM_EXPORT **)(*(_QWORD *)v134 + 544LL),
                            *(struct VIDMM_GLOBAL **)(*(_QWORD *)v134 + 552LL))) )
  {
    *(_WORD *)((char *)this + 2387) = 0;
  }
  if ( *((_BYTE *)this + 185) )
    *((_QWORD *)this + 97) = 0LL;
  *((_DWORD *)this + 44) = DXGADAPTER::IsBddFallbackDriver(this) ? 3 : 1;
  if ( DXGADAPTER::IsWarpAdapter(this) && !DXGADAPTER::IsDisplayAdapter(this) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v197);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v197);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v158, v157) + 75) )
    {
      v162 = WdLogNewEntry5_WdError(v160, v159, v161);
      *(_QWORD *)(v162 + 24) = this;
      *(_QWORD *)(v162 + 32) = -1073741735LL;
      WdLogEvent5_WdError(v162);
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
      *((_QWORD *)this + 4) = -1LL;
      v163 = DXGGLOBAL::GetGlobal(v160, v159);
      DXGGLOBAL::SetWarpAdapter(v163, this);
    }
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v197);
  }
  if ( *((_BYTE *)this + 185) )
  {
LABEL_327:
    if ( (int)v144 < 0 )
      goto LABEL_335;
    goto LABEL_328;
  }
  v164 = DXGADAPTER::InitializePowerManagement(this);
  v144 = v164;
  if ( v164 < 0 )
  {
    v168 = WdLogNewEntry5_WdError(v166, v165, v167);
    *(_QWORD *)(v168 + 24) = this;
    *(_QWORD *)(v168 + 32) = v144;
    WdLogEvent5_WdError(v168);
    goto LABEL_327;
  }
LABEL_328:
  if ( *((_BYTE *)this + 2464)
    && *((int *)this + 546) >= 4864
    && DXGADAPTER::IsFullWDDMAdapter(this)
    && !DXGADAPTER::IsSoftwareAdapter(this)
    && !DXGADAPTER::IsBddDevice(this)
    && (*((_DWORD *)this + 477) & 0x10) == 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v170, v169, v171);
    v56[3] = 7391LL;
    goto LABEL_52;
  }
LABEL_335:
  if ( DXGADAPTER::IsWarpAdapter(this) )
    goto LABEL_340;
  v189 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &Feature_ArgonGpuSupport__private_propertyCache,
                       0x10E0F61u,
                       2u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0x10E0F61u,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006F300,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v189,
      0LL,
      0,
      1uLL);
  }
  if ( v54 >= 0xA008 )
LABEL_340:
    *((_BYTE *)this + 2508) = 1;
  if ( *((int *)this + 613) >= 2600 && (*((_DWORD *)this + 606) & 8) != 0 )
  {
    v190 = 3;
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                         &Feature_SupportComputeOnlyAdapters__private_propertyCache,
                         0x124B067u,
                         2u)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0x124B067u,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0076840,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v190,
        0LL,
        0,
        1uLL);
    }
    if ( !DXGADAPTER::IsIoMmuSupported(this)
      && !DXGADAPTER::IsGpuMmuSupported(this)
      && !(unsigned __int8)ExQueryFastCacheDevLicense(v172) )
    {
      v174 = WdLogNewEntry5_WdEvent(v173);
      *(_QWORD *)(v174 + 24) = 7429LL;
      WdLogEvent5_WdEvent(v174);
      return 3221225485LL;
    }
  }
  if ( DXGADAPTER::IsRenderAdapter(this) && !*((_BYTE *)this + 185) )
  {
    v177 = *(_QWORD *)v134;
    v178 = DXGGLOBAL::GetGlobal(v176, v175);
    VIDSCH_EXPORT::VidSchSetCrossAdapterData(
      *(VIDSCH_EXPORT **)(v177 + 520),
      *(struct _VIDSCH_GLOBAL **)(v177 + 528),
      (struct DXGGLOBAL *)((char *)v178 + 960));
  }
  if ( (unsigned __int8)DXGADAPTER::IsPostAdapter(this) )
  {
    v181 = *(_QWORD *)((char *)this + 276);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v180, v179) + 78) = v181;
  }
  if ( (int)v144 < 0 )
    return (unsigned int)v144;
  if ( v106 <= 1 )
    goto LABEL_362;
  v182 = *((_DWORD *)this + 71);
  if ( v182 == 4318 )
  {
    v183 = DXGGLOBAL::GetGlobal(v180, v179);
    v184 = 7;
LABEL_361:
    DXGGLOBAL::RecordFeatureUsage((__int64)v183, v184, 1);
    goto LABEL_362;
  }
  if ( v182 == 4098 )
  {
    v183 = DXGGLOBAL::GetGlobal(v180, v179);
    v184 = 8;
    goto LABEL_361;
  }
LABEL_362:
  v185 = DXGGLOBAL::GetGlobal(v180, v179);
  DXGGLOBAL::RecordFeatureUsageWddmVersion(v185, this);
  return (unsigned int)v144;
}
