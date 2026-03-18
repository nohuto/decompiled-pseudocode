/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?IsPostAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0003550 (-IsPostAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00040B0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0005E6C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C000A5AC (-IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F5E8 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00102CC (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSoftwareAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0010838 (-IsSoftwareAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddDevice@DXGADAPTER@@QEBAEXZ @ 0x1C001084C (-IsBddDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010F58 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsRenderAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0012788 (-IsRenderAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C00127F0 (-IsSoftGPU@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00128E4 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Feature_GPUParavirtualization__private_IsEnabledPreCheck@@YAHXZ @ 0x1C001EEF8 (-Feature_GPUParavirtualization__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?IsVirtualRenderDevice@DXGADAPTER@@QEBAEXZ @ 0x1C001EF2C (-IsVirtualRenderDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSurpriseRemovalSupport@DXGADAPTER@@QEBAEW4_DXGK_SURPRISE_REMOVAL_TYPE@@@Z @ 0x1C001EF40 (-IsSurpriseRemovalSupport@DXGADAPTER@@QEBAEW4_DXGK_SURPRISE_REMOVAL_TYPE@@@Z.c)
 *     ?Feature_ArgonGpuSupport__private_IsEnabledPreCheck@@YAHXZ @ 0x1C00205F4 (-Feature_ArgonGpuSupport__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?VidSchSetCrossAdapterData@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_CROSS_ADAPTER_DATA@@@Z @ 0x1C0020628 (-VidSchSetCrossAdapterData@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_CROSS_ADAPTER_DAT.c)
 *     ?VidMmUseDirectFlip@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@@Z @ 0x1C0020654 (-VidMmUseDirectFlip@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00206B0 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Feature_ArgonGpuSupportEmulation__private_IsEnabledPreCheck@@YAHXZ @ 0x1C002084C (-Feature_ArgonGpuSupportEmulation__private_IsEnabledPreCheck@@YAHXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93C0 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0134C54 (DpiReadPnpRegistryValue.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C014D714 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     DpiGetAdapterInfo @ 0x1C014D78C (DpiGetAdapterInfo.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C014E934 (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     DpiGetDriverVersion @ 0x1C014EA10 (DpiGetDriverVersion.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C014EA24 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014F6C0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C014F768 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C014FB48 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C01500C4 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0150138 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0150E10 (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C015BF20 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C015D7BC (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1C01BCC24 (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 *     ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C01C0340 (-ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@@Z @ 0x1C02110CC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  struct _ERESOURCE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  int v16; // eax
  __int64 v17; // rcx
  struct _ERESOURCE *v18; // rax
  NTSTATUS v19; // eax
  int AdapterInfo; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned int DriverVersion; // eax
  __int64 v34; // rcx
  unsigned int v35; // r14d
  const GUID *v36; // r8
  int v37; // eax
  __int64 v38; // rcx
  int PnpRegistryValue; // eax
  const GUID *v40; // r8
  int v41; // ecx
  bool v42; // cc
  char v43; // al
  unsigned int *v44; // rsi
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // eax
  unsigned __int64 v51; // r15
  __int64 v52; // rax
  unsigned __int64 v53; // r13
  bool v54; // cf
  SIZE_T v55; // rax
  char *v56; // rax
  __int64 v57; // rcx
  void *v58; // rbx
  char v59; // al
  __int64 v60; // rdx
  __int64 v61; // rcx
  int v62; // eax
  char v63; // al
  char v64; // dl
  __int64 v65; // rcx
  char v66; // dl
  char v67; // dl
  char v68; // al
  char v69; // r8
  char v70; // r8
  char v71; // dl
  unsigned int v72; // eax
  char v73; // r9
  char v74; // dl
  char v75; // r9
  char v76; // r8
  __int64 v77; // rcx
  int v78; // ebx
  DXGGLOBAL *v79; // rax
  int v80; // eax
  __int64 v81; // rcx
  char *v82; // r15
  int RenderCore; // eax
  __int64 v84; // rcx
  int DisplayCore; // eax
  __int64 v86; // rcx
  __int64 v87; // rsi
  char v88; // al
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rbx
  struct DXGGLOBAL *v93; // rax
  __int64 v94; // rcx
  __int64 result; // rax
  unsigned __int8 v96; // r8
  const GUID *v97; // r8
  unsigned int v98; // edx
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rbx
  __int64 v103; // rax
  const GUID *v104; // r8
  unsigned int v105; // eax
  __int64 v106; // rcx
  unsigned int v107; // edx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  DXGGLOBAL *v112; // rax
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  bool IsSoftwareAdapter; // al
  __int64 v127; // rcx
  int v128; // eax
  unsigned int v129; // edx
  int v130; // eax
  SIZE_T v131; // rax
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v132; // rax
  __int64 v133; // rcx
  const GUID *v134; // r8
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v135; // rsi
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // rax
  unsigned int v139; // eax
  bool v140; // zf
  __int64 v141; // rcx
  _QWORD *v142; // rax
  unsigned int v143; // eax
  __int64 v144; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v146; // rax
  struct DXGGLOBAL *v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rcx
  unsigned int v155; // [rsp+30h] [rbp-99h] BYREF
  int v156; // [rsp+34h] [rbp-95h] BYREF
  __int64 v157; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v158[2]; // [rsp+40h] [rbp-89h] BYREF
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v159; // [rsp+48h] [rbp-81h]
  struct _DXGKARG_QUERYADAPTERINFO v160; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v161[16]; // [rsp+80h] [rbp-49h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v162; // [rsp+90h] [rbp-39h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v163; // [rsp+C0h] [rbp-9h] BYREF
  char v164; // [rsp+130h] [rbp+67h]
  unsigned int v165; // [rsp+148h] [rbp+7Fh] BYREF

  if ( KeGetCurrentIrql() )
  {
    v114 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v114 + 24) = 6068LL;
    WdLogEvent5_WdAssertion(v114);
  }
  if ( *((_DWORD *)this + 44) )
    return 3221225485LL;
  v6 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 18) = v6;
  if ( !v6 )
    goto LABEL_166;
  v10 = ExInitializeResourceLite(v6);
  v14 = v10;
  if ( v10 < 0 )
  {
LABEL_169:
    v117 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v117 + 24) = this;
    *(_QWORD *)(v117 + 32) = v14;
    WdLogEvent5_WdWarning(v117);
    return (unsigned int)v14;
  }
  *((_QWORD *)this + 24) = DeviceObject;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 25) = DeviceAttachmentBaseRef;
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  v16 = DXGGLOBAL::AcquireAdapterOrdinal(*((DXGGLOBAL **)this + 2));
  *((_DWORD *)this + 52) = v16;
  if ( v16 == -1 )
    return 3221225495LL;
  LODWORD(v14) = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4220));
  if ( (int)v14 < 0 )
  {
    v118 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v118 + 24) = 6127LL;
    WdLogEvent5_WdLowResource(v118);
    return (unsigned int)v14;
  }
  v18 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 30) = v18;
  if ( !v18 )
  {
LABEL_166:
    v115 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v115 + 24) = this;
    *(_QWORD *)(v115 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v115);
    return 3221225495LL;
  }
  v19 = ExInitializeResourceLite(v18);
  v14 = v19;
  if ( v19 < 0 )
    goto LABEL_169;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *((_QWORD *)this + 5) = -1LL;
  AdapterInfo = DpiGetAdapterInfo(
                  (__int64)DeviceObject,
                  (__int64)this + 1288,
                  (_QWORD *)this + 31,
                  (__int64)this + 1720);
  v14 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    v119 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v119 + 24) = this;
    *(_QWORD *)(v119 + 32) = v14;
    WdLogEvent5_WdWarning(v119);
    memset((char *)this + 248, 0, 0x410uLL);
    memset((char *)this + 1288, 0, 0xF0uLL);
    return (unsigned int)v14;
  }
  if ( DXGADAPTER::IsXBoxOneDevice(this) )
    *((_BYTE *)DXGGLOBAL::GetGlobal(v24) + 20264) = 1;
  Feature_GPUParavirtualization__private_IsEnabledPreCheck();
  if ( DXGADAPTER::IsVirtualRenderDevice(this) )
  {
    v120 = DXGADAPTER::InitializeParavirtualizedAdapter(this);
    v14 = v120;
    if ( v120 < 0 )
    {
      v122 = WdLogNewEntry5_WdError(v121);
      *(_QWORD *)(v122 + 32) = 6188LL;
LABEL_177:
      *(_QWORD *)(v122 + 24) = v14;
LABEL_179:
      WdLogEvent5_WdError(v122);
      return (unsigned int)v14;
    }
  }
  if ( DXGADAPTER::IsSoftGPU(this) && DXGADAPTER::IsWarpAdapter(this) )
  {
    v124 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v124 + 24) = 6196LL;
    WdLogEvent5_WdAssertion(v124);
  }
  if ( !*((_QWORD *)this + 40) )
  {
    v125 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v125 + 24) = 6203LL;
    goto LABEL_183;
  }
  if ( !*((_QWORD *)this + 57) )
    *((_QWORD *)this + 57) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 120) )
    *((_QWORD *)this + 120) = DxgkQueryFSEBlock;
  v26 = DXGADAPTER::CallDriverQueryInterface(
          (PDEVICE_OBJECT *)this,
          &GUID_AGP_BUS_INTERFACE_STANDARD,
          184LL,
          5LL,
          (char *)this + 1528);
  v31 = v26;
  if ( v26 >= 0 )
  {
    if ( *((_WORD *)this + 765) >= 4u )
      goto LABEL_23;
  }
  else
  {
    v32 = WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
    *(_QWORD *)(v32 + 24) = this;
    *(_QWORD *)(v32 + 32) = v31;
  }
  memset((char *)this + 1528, 0, 0xB8uLL);
LABEL_23:
  DriverVersion = DpiGetDriverVersion(*((_QWORD *)this + 24));
  *((_DWORD *)this + 428) = DriverVersion;
  v35 = DriverVersion;
  if ( DriverVersion >= 0x7000 && *((_DWORD *)this + 332) && *((_DWORD *)this + 333) )
  {
    v96 = 0;
LABEL_124:
    DXGADAPTER::SetModeBehavior(this, 1u, v96);
    goto LABEL_26;
  }
  if ( DriverVersion >= 0x6002 && *((_DWORD *)this + 332) && *((_DWORD *)this + 333) )
  {
    v96 = 1;
    goto LABEL_124;
  }
LABEL_26:
  if ( v35 - 20480 <= 5 )
  {
    v142 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    v142[3] = 6278LL;
    goto LABEL_189;
  }
  v160.Type = DXGKQAITYPE_DRIVERCAPS;
  v160.pOutputData = (char *)this + 1824;
  v160.pInputData = 0LL;
  v160.InputDataSize = 0;
  v160.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v35);
  if ( !v160.OutputDataSize )
    return 3221225485LL;
  v37 = DXGADAPTER::DdiQueryAdapterInfo(this, &v160, v36);
  v14 = v37;
  if ( v37 < 0 )
    goto LABEL_176;
  PnpRegistryValue = DpiReadPnpRegistryValue(*((_QWORD *)this + 24), L"ACGSupported", (char *)&v156, 4u, 2u);
  v41 = v156;
  if ( PnpRegistryValue < 0 )
    v41 = 0;
  v156 = v41;
  if ( v41 || (v42 = (int)DXGADAPTER::GetDriverVersion(this) < 2200, v43 = 0, !v42) )
    v43 = 1;
  *((_BYTE *)this + 188) = v43;
  if ( *((_BYTE *)this + 185) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_DWORD *)this + 473) &= 0xFFFFF3FF;
    *((_DWORD *)this + 600) &= ~4u;
    *((_BYTE *)this + 2364) = 0;
    if ( *((_BYTE *)this + 186) )
      *((_DWORD *)this + 469) &= ~0x100000u;
  }
  else if ( g_bCreateParavirtualizedGpu )
  {
    if ( v35 >= 0x5023 )
    {
      IsSoftwareAdapter = DXGADAPTER::IsSoftwareAdapter(this);
      if ( !IsSoftwareAdapter
        && !DXGADAPTER::IsWarpAdapter(this)
        && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
      {
        *((_DWORD *)this + 473) |= 0x400u;
      }
    }
  }
  v44 = (unsigned int *)((char *)this + 2408);
  *((_DWORD *)this + 602) = 0;
  if ( v35 >= 0x5010 && !*((_BYTE *)this + 185) )
  {
    v162.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
    v162.pInputData = 0LL;
    v162.InputDataSize = 0;
    v162.pOutputData = (char *)this + 2408;
    v162.OutputDataSize = 4;
    v45 = DXGADAPTER::DdiQueryAdapterInfo(this, &v162, v40);
    if ( v45 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v47, v46, v48, v49) + 24) = v45;
      *v44 = 0;
      if ( *((int *)this + 540) >= 8704 )
        *v44 |= 2u;
    }
    v50 = *v44;
    if ( *((int *)this + 540) < 9472 )
    {
      *v44 = v50 & 0xFFFFFFF3;
    }
    else if ( (v50 & 0xC) == 0xC )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v142[3] = this;
      v142[4] = 6398LL;
      goto LABEL_189;
    }
  }
  v51 = *((unsigned int *)this + 64);
  v52 = 352 * v51;
  v53 = v51;
  if ( !is_mul_ok(v51, 0x160uLL) )
    v52 = -1LL;
  v54 = __CFADD__(v52, 8LL);
  v55 = v52 + 8;
  if ( v54 )
    v55 = -1LL;
  v56 = (char *)operator new[](v55, 0x4B677844u, (POOL_TYPE)512);
  if ( v56 )
  {
    v58 = v56 + 8;
    *(_QWORD *)v56 = v51;
    `vector constructor iterator'(
      v56 + 8,
      352LL,
      (unsigned int)v51,
      (void (__fastcall *)(char *))DXGK_PHYSICALADAPTERINFO::DXGK_PHYSICALADAPTERINFO);
  }
  else
  {
    v58 = 0LL;
  }
  *((_QWORD *)this + 302) = v58;
  if ( !v58 )
  {
    v116 = WdLogNewEntry5_WdLowResource(v57);
    *(_QWORD *)(v116 + 24) = 6407LL;
    WdLogEvent5_WdLowResource(v116);
    return 3221225495LL;
  }
  memset(v58, 0, 352 * v51);
  v164 = 0;
  if ( *((int *)this + 540) >= 0x2000 && v35 >= 0x5005 )
  {
    *((_DWORD *)this + 606) = 0;
    v155 = 0;
    if ( (_DWORD)v51 )
    {
      v97 = (const GUID *)*((_QWORD *)this + 302);
      v98 = 0;
      while ( 1 )
      {
        v163.Type = DXGKQAITYPE_PHYSICALADAPTERCAPS;
        v163.pInputData = &v155;
        v163.InputDataSize = 4;
        v163.OutputDataSize = 24;
        v163.pOutputData = (void *)&v97[22 * v98];
        v99 = DXGADAPTER::DdiQueryAdapterInfo(this, &v163, v97);
        v102 = v99;
        if ( v99 < 0 )
          break;
        v97 = (const GUID *)*((_QWORD *)this + 302);
        v98 = v155 + 1;
        *((_DWORD *)this + 606) += LOWORD(v97[22 * v155].Data1);
        v155 = v98;
        if ( v98 >= (unsigned int)v51 )
          goto LABEL_200;
      }
      v103 = WdLogNewEntry5_WdEvent(v101, v100);
      *(_QWORD *)(v103 + 24) = v102;
      WdLogEvent5_WdEvent(v103);
      v164 = 1;
    }
    else
    {
LABEL_200:
      if ( (int)DXGADAPTER::GetDriverVersion(this) <= 2400 && *((_DWORD *)this + 606) > 0x40u )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v127);
        v142[3] = this;
        v142[4] = 64LL;
        v142[5] = *((unsigned int *)this + 606);
        goto LABEL_189;
      }
      if ( (*((_DWORD *)this + 472) & 1) == 0 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v127);
        v142[3] = this;
        v142[4] = 6473LL;
        goto LABEL_189;
      }
    }
    if ( (*((_DWORD *)this + 473) & 0x800) == 0 )
      goto LABEL_137;
    v165 = 0;
    if ( (_DWORD)v51 )
    {
      do
      {
        v160.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
        v157 = 0LL;
        v160.InputDataSize = 4;
        v160.pInputData = &v165;
        v160.OutputDataSize = 8;
        v160.pOutputData = &v157;
        v128 = DXGADAPTER::DdiQueryAdapterInfo(this, &v160, v104);
        v14 = v128;
        if ( v128 < 0 )
          goto LABEL_176;
        if ( (v157 & 0xFFF) != 0 )
        {
          v142 = (_QWORD *)WdLogNewEntry5_WdError(v38);
          v136 = v157;
          goto LABEL_220;
        }
        *(_QWORD *)(352LL * v165 + *((_QWORD *)this + 302) + 48) = v157;
        v129 = v165;
        v104 = *(const GUID **)(352LL * v165 + *((_QWORD *)this + 302) + 48);
        if ( v104 )
        {
          result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v165, (unsigned __int64)v104);
          if ( (int)result < 0 )
            return result;
          v129 = v165;
        }
        v165 = v129 + 1;
      }
      while ( v129 + 1 < (unsigned int)v51 );
    }
    v160.Type = DXGKQAITYPE_HARDWARERESERVEDRANGES;
    v160.InputDataSize = 0;
    v160.pInputData = 0LL;
    *(_QWORD *)v158 = 0LL;
    v159 = 0LL;
    v160.pOutputData = v158;
    v160.OutputDataSize = 16;
    v130 = DXGADAPTER::DdiQueryAdapterInfo(this, &v160, v104);
    v14 = v130;
    if ( v130 >= 0 )
    {
      if ( !v158[0] )
      {
LABEL_137:
        v59 = v164;
        goto LABEL_51;
      }
      v131 = 16LL * v158[0];
      if ( !is_mul_ok(v158[0], 0x10uLL) )
        v131 = -1LL;
      v132 = (struct _DXGK_PHYSICAL_MEMORY_RANGE *)operator new(v131, 0x4B677844u, PagedPool);
      v135 = v132;
      if ( !v132 )
      {
        v122 = WdLogNewEntry5_WdError(v133);
        *(_QWORD *)(v122 + 24) = v158[0];
        goto LABEL_179;
      }
      v159 = v132;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v160, v134) < 0 )
      {
        v138 = WdLogNewEntry5_WdAssertion(v137);
        *(_QWORD *)(v138 + 24) = 6542LL;
        WdLogEvent5_WdAssertion(v138);
      }
      LODWORD(v14) = DXGADAPTER::ValidateHardwareReservedRanges(this, v135, v158[0]);
      if ( (int)v14 >= 0 )
      {
        v139 = v158[0];
        *((_QWORD *)this + 534) = v135;
        v44 = (unsigned int *)((char *)this + 2408);
        *((_DWORD *)this + 1066) = v139;
        goto LABEL_137;
      }
      operator delete[](v135);
      return (unsigned int)v14;
    }
LABEL_176:
    v122 = WdLogNewEntry5_WdError(v38);
    goto LABEL_177;
  }
  v59 = 1;
LABEL_51:
  if ( v59 && (_DWORD)v51 )
  {
    v60 = 0LL;
    do
    {
      *(_WORD *)(v60 + *((_QWORD *)this + 302)) = *((_WORD *)this + 950);
      v60 += 352LL;
      *(_DWORD *)(*((_QWORD *)this + 302) + v60 - 336) ^= (*(_DWORD *)(*((_QWORD *)this + 302) + v60 - 336) ^ (*((_DWORD *)this + 473) >> 7)) & 1;
      *(_DWORD *)(*((_QWORD *)this + 302) + v60 - 336) ^= (*(_DWORD *)(*((_QWORD *)this + 302) + v60 - 336) ^ (*((_DWORD *)this + 473) >> 5)) & 2;
      *(_WORD *)(*((_QWORD *)this + 302) + v60 - 350) = *((_WORD *)this + 948);
      *(_QWORD *)(*((_QWORD *)this + 302) + v60 - 344) = *((_QWORD *)this + 24);
      --v53;
    }
    while ( v53 );
  }
  if ( (int)DXGADAPTER::GetDriverVersion(this) >= 2400 )
  {
    v105 = *((_DWORD *)this + 600);
    if ( v105 >= 8 )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v61);
      v142[3] = 6580LL;
      goto LABEL_189;
    }
    *((_BYTE *)this + 2474) = v105 & 1;
  }
  if ( v35 < 0x3001 )
  {
    *((_DWORD *)this + 540) = 4096;
  }
  else
  {
    v62 = *((_DWORD *)this + 540);
    if ( v62 != 4608
      && v62 != 4864
      && v62 != 9472
      && v62 != 4096
      && v62 != 0x2000
      && v62 != 8448
      && v62 != 8704
      && v62 != 8960
      && v62 != 9216 )
    {
      v125 = WdLogNewEntry5_WdError(v61);
      *(_QWORD *)(v125 + 24) = *((int *)this + 540);
      goto LABEL_183;
    }
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v61) + 544) || (v140 = !DXGADAPTER::IsSoftGPU(this), v63 = 1, !v140) )
    v63 = 0;
  *((_BYTE *)this + 2428) = v63;
  if ( v63 )
  {
    v141 = *((unsigned int *)this + 540);
    if ( (int)v141 < 4608
      && (*((_DWORD *)this + 588)
       || *((_DWORD *)this + 589)
       || *((_BYTE *)this + 2360)
       || *((_BYTE *)this + 2361)
       || *((_BYTE *)this + 2362)
       || (*((_DWORD *)this + 469) & 0x10000000) != 0
       || (*((_DWORD *)this + 472) & 0x14) != 0
       || *((_BYTE *)this + 2363)
       || *((_BYTE *)this + 2365)
       || *((_BYTE *)this + 2366)) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v141);
      v142[3] = 6655LL;
      goto LABEL_189;
    }
    if ( (int)v141 < 4864
      && ((*((_DWORD *)this + 471) & 0x10) != 0
       || (*((_DWORD *)this + 473) & 0x10) != 0
       || *((_BYTE *)this + 2367)
       || *((_DWORD *)this + 592)) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v141);
      v142[3] = 6670LL;
      goto LABEL_189;
    }
    if ( (int)v141 < 0x2000 && *((_BYTE *)this + 2372) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v141);
      v142[3] = 6698LL;
      goto LABEL_189;
    }
  }
  if ( v35 < 0x4000 )
  {
    *((_DWORD *)this + 473) &= ~0x10u;
    *((_BYTE *)this + 2367) = 0;
  }
  if ( v35 < 0x5011
    && (unsigned __int8)DXGADAPTER::IsPostAdapter(this)
    && (*((_DWORD *)this + 473) & 0x10) != 0
    && (*((_DWORD *)this + 77) & 0x1000) != 0 )
  {
    *((_BYTE *)this + 2372) = 1;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 2360))) & 4;
  v64 = *(_BYTE *)a3 ^ (*(_BYTE *)a3 ^ (8 * DXGADAPTER::IsSurpriseRemovalSupport(this, DxgkRemovalHibernation))) & 8;
  *(_BYTE *)a3 = v64;
  v65 = *((_DWORD *)this + 473) >> 4;
  LOBYTE(v65) = (v64 ^ (32 * v65)) & 0x20;
  v66 = v65 ^ v64;
  *(_BYTE *)a3 = v66;
  v67 = (v66 ^ (*((_BYTE *)this + 2367) << 6)) & 0x40 ^ v66;
  *(_BYTE *)a3 = v67;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 465);
  v68 = *((_BYTE *)a3 + 1);
  v69 = v67 & 0x7F | (*(_BYTE *)v44 << 7);
  *(_BYTE *)a3 = v69;
  v70 = v69 & 0xEF;
  v71 = v68 ^ (v68 ^ *((_BYTE *)this + 2372)) & 1;
  *((_BYTE *)a3 + 1) = v71;
  v72 = *((_DWORD *)this + 540);
  *((_DWORD *)a3 + 2) = v72;
  *(_BYTE *)a3 = v70;
  if ( v35 >= 0x5021 )
  {
    v70 |= 16 * (*((_BYTE *)this + 2392) & 1);
    *(_BYTE *)a3 = v70;
  }
  if ( !*((_BYTE *)this + 185) )
  {
    v73 = v70 & 0x40;
    if ( (v70 & 0x40) != 0 )
    {
      if ( v35 < 0x5005 && (*((_DWORD *)this + 332) || *((_DWORD *)this + 333)) )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
        v136 = *((_QWORD *)this + 24);
LABEL_220:
        v142[3] = v136;
        goto LABEL_189;
      }
      v71 ^= (v71 ^ (2 * *((_BYTE *)this + 2395))) & 2;
      *((_BYTE *)a3 + 1) = v71;
    }
    v74 = v71 & 1;
    v65 = 0LL;
    if ( !v73 )
    {
      LOBYTE(v72) = v74 ^ 1;
      v65 = v72;
    }
    if ( !(_BYTE)v65 && (v70 & 0x20) == 0 )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v142[3] = *((_QWORD *)this + 24);
      v142[4] = 6776LL;
      goto LABEL_189;
    }
    if ( v73 )
    {
      if ( v74 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
        v142[3] = *((_QWORD *)this + 24);
        v142[4] = 6783LL;
        goto LABEL_189;
      }
    }
    else if ( v74 && !*((_DWORD *)this + 333) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v142[3] = *((_QWORD *)this + 24);
      v142[4] = 6791LL;
      goto LABEL_189;
    }
    if ( *((_BYTE *)this + 2362) && (!*((_QWORD *)this + 86) || !*((_QWORD *)this + 87) || !*((_QWORD *)this + 88)) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v142[3] = 6805LL;
      goto LABEL_189;
    }
    if ( (*((_DWORD *)this + 469) & 4) != 0 && !*((_QWORD *)this + 84) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v142[3] = 6812LL;
LABEL_189:
      WdLogEvent5_WdError(v142);
      return 3221225485LL;
    }
    if ( *((_BYTE *)this + 2365) && (!*((_QWORD *)this + 90) || !*((_QWORD *)this + 91)) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v142[3] = 6820LL;
      goto LABEL_189;
    }
    if ( v35 < 0x300C && *((_QWORD *)this + 90) && *((_QWORD *)this + 91) )
      *((_BYTE *)this + 2365) = 1;
  }
  *((_WORD *)this + 1215) = 0;
  *((_BYTE *)this + 2432) = 0;
  if ( *((_BYTE *)this + 2364) )
  {
    if ( v35 < 0x300B )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v142[3] = 6842LL;
      goto LABEL_189;
    }
    if ( v35 >= 0x4000 )
    {
      if ( v35 == 0x4000 )
      {
        *((_BYTE *)this + 2431) = 1;
      }
      else
      {
        v143 = *((_DWORD *)this + 592);
        if ( !v143 )
        {
          v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
          v142[3] = 6855LL;
          goto LABEL_189;
        }
        if ( v143 <= 8 )
        {
          if ( v35 > 0x5000 )
            *((_BYTE *)this + 2432) = 1;
        }
        else
        {
          v65 = *((unsigned int *)this + 540);
          if ( (int)v65 < 8704 )
          {
            if ( (int)v65 < 0x2000 || v143 != 10 )
            {
              v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
              v142[3] = 6878LL;
              goto LABEL_189;
            }
            *((_DWORD *)this + 592) = 8;
          }
          else if ( v143 > 0xA )
          {
            v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
            v142[3] = 6865LL;
            goto LABEL_189;
          }
        }
      }
    }
    else
    {
      *((_BYTE *)this + 2430) = 1;
    }
    v144 = *((_QWORD *)this + 94);
    if ( !v144 && !*((_QWORD *)this + 110) && !*((_QWORD *)this + 114) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v142[3] = 6894LL;
      goto LABEL_189;
    }
    if ( v35 > 0x4002 && !*((_QWORD *)this + 98) && !*((_QWORD *)this + 109) && !*((_QWORD *)this + 113) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v142[3] = 6906LL;
      goto LABEL_189;
    }
    if ( !*((_BYTE *)this + 2363) )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v142[3] = 6916LL;
      goto LABEL_189;
    }
    if ( v144 )
    {
      Global = DXGGLOBAL::GetGlobal(v65);
      DXGGLOBAL::RecordFeatureUsage(Global, 1LL);
    }
    if ( *((_QWORD *)this + 110) )
    {
      v146 = DXGGLOBAL::GetGlobal(v65);
      DXGGLOBAL::RecordFeatureUsage(v146, 2LL);
    }
    if ( *((_QWORD *)this + 114) )
    {
      v147 = DXGGLOBAL::GetGlobal(v65);
      DXGGLOBAL::RecordFeatureUsage(v147, 3LL);
    }
  }
  v75 = *((_BYTE *)this + 185);
  *((_BYTE *)this + 2472) = 0;
  if ( v75 )
    goto LABEL_88;
  v76 = 0;
  if ( v35 >= 0x700A && *((int *)this + 540) >= 8704 )
  {
    if ( !*((_QWORD *)this + 66) || (v76 = 0, *((_QWORD *)this + 134)) )
    {
      *((_BYTE *)this + 2472) = 1;
      v76 = 1;
    }
  }
  if ( *((int *)this + 540) < 8960 )
  {
LABEL_88:
    *((_DWORD *)this + 468) &= 0xFFFFFFE3;
  }
  else
  {
    v106 = (*((_DWORD *)this + 468) >> 3) & 1;
    v107 = (*((_DWORD *)this + 468) >> 2) & 1;
    if ( v107 < (unsigned int)v106 || (unsigned int)v106 < ((*((_DWORD *)this + 468) >> 4) & 1u) || !v76 && v107 )
    {
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v106);
      v142[3] = *((_QWORD *)this + 24);
      v142[4] = -1073741811LL;
      goto LABEL_189;
    }
  }
  v77 = *(_QWORD *)(*((_QWORD *)this + 24) + 64LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v77 + 40) + 133LL) && !v75 )
  {
    v78 = *((_DWORD *)this + 540);
    v79 = DXGGLOBAL::GetGlobal(v77);
    v80 = DXGGLOBAL::DeferredInitialize(v79, v78 >= 0x2000);
    v14 = v80;
    if ( v80 < 0 )
      goto LABEL_176;
  }
  DXGADAPTER::Config = 0;
  DXGADAPTER::ReadConfig(this, a3);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((int *)this + 540) < 9216 )
  {
LABEL_93:
    *((_QWORD *)this + 155) = SwapChainObOpenProcedure;
    *((_QWORD *)this + 156) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    goto LABEL_94;
  }
  v108 = *((_QWORD *)this + 156);
  if ( !*((_QWORD *)this + 155) )
  {
    if ( !v108 )
      goto LABEL_93;
LABEL_314:
    v142 = (_QWORD *)WdLogNewEntry5_WdError(v81);
    v142[3] = 7030LL;
    goto LABEL_189;
  }
  if ( !v108 )
    goto LABEL_314;
LABEL_94:
  DXGADAPTER::InitializeDriverDiagnosticReporting(this);
  v82 = (char *)this + 2528;
  RenderCore = ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 316);
  v14 = RenderCore;
  if ( RenderCore < 0 )
  {
    if ( *(_QWORD *)v82 )
    {
      v123 = WdLogNewEntry5_WdAssertion(v84);
      *(_QWORD *)(v123 + 24) = 7049LL;
      WdLogEvent5_WdAssertion(v123);
    }
    v122 = WdLogNewEntry5_WdError(v84);
    *(_QWORD *)(v122 + 24) = this;
    *(_QWORD *)(v122 + 32) = v14;
    goto LABEL_179;
  }
  DisplayCore = ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 315);
  v87 = DisplayCore;
  if ( DisplayCore < 0 )
  {
    if ( *((_QWORD *)this + 315) )
    {
      v148 = WdLogNewEntry5_WdAssertion(v86);
      *(_QWORD *)(v148 + 24) = 7065LL;
      WdLogEvent5_WdAssertion(v148);
    }
    v149 = WdLogNewEntry5_WdError(v86);
    *(_QWORD *)(v149 + 24) = this;
    *(_QWORD *)(v149 + 32) = v87;
    WdLogEvent5_WdError(v149);
    return (unsigned int)v87;
  }
  if ( !DXGADAPTER::IsRenderAdapter(this) && !DXGADAPTER::IsDisplayAdapter(this) )
  {
    v125 = WdLogNewEntry5_WdError(v109);
    *(_QWORD *)(v125 + 24) = this;
    *(_QWORD *)(v125 + 32) = -1073741735LL;
LABEL_183:
    WdLogEvent5_WdError(v125);
    return 3221225561LL;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ DXGADAPTER::IsDisplayAdapter(this)) & 1;
  v88 = *(_BYTE *)a3 ^ (*(_BYTE *)a3 ^ (2 * DXGADAPTER::IsRenderAdapter(this))) & 2;
  *(_BYTE *)a3 = v88;
  if ( (v88 & 1) != 0 )
    *((_BYTE *)a3 + 1) = (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0) | *((_BYTE *)a3 + 1) & 0xFB;
  else
    *((_BYTE *)a3 + 1) &= ~4u;
  if ( DXGADAPTER::IsDisplayOnlyAdapter(this) )
    *((_DWORD *)this + 469) |= 1u;
  if ( DXGADAPTER::IsDxgmms2(this)
    && !DXGADAPTER::IsSoftwareAdapter(this)
    && !DXGADAPTER::IsSoftGPU(this)
    && !DXGADAPTER::IsDisplayOnlyAdapter(this)
    && v35 >= 0x5008
    && (!*((_QWORD *)this + 99) || !*((_QWORD *)this + 111)) )
  {
    v142 = (_QWORD *)WdLogNewEntry5_WdError(v150);
    v142[3] = 7121LL;
    goto LABEL_189;
  }
  if ( *((_BYTE *)this + 2428)
    && DXGADAPTER::IsFullWDDMAdapter(this)
    && *((int *)this + 540) >= 4608
    && !*((_BYTE *)this + 2363) )
  {
    v142 = (_QWORD *)WdLogNewEntry5_WdError(v151);
    v142[3] = 7136LL;
    goto LABEL_189;
  }
  if ( ((*((_BYTE *)this + 185) == 0) & *((_BYTE *)this + 2363)) != 0
    && (DXGADAPTER::IsDisplayOnlyAdapter(this)
     || !(unsigned __int8)VIDMM_EXPORT::VidMmUseDirectFlip(
                            *(VIDMM_EXPORT **)(*(_QWORD *)v82 + 544LL),
                            *(struct VIDMM_GLOBAL **)(*(_QWORD *)v82 + 552LL))) )
  {
    *(_WORD *)((char *)this + 2363) = 0;
  }
  if ( *((_BYTE *)this + 185) )
    *((_QWORD *)this + 99) = 0LL;
  *((_DWORD *)this + 44) = DXGADAPTER::IsBddFallbackDriver(this) ? 3 : 1;
  if ( DXGADAPTER::IsWarpAdapter(this) && !DXGADAPTER::IsDisplayAdapter(this) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v161);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v161);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v110) + 78) )
    {
      v152 = WdLogNewEntry5_WdError(v111);
      *(_QWORD *)(v152 + 24) = this;
      *(_QWORD *)(v152 + 32) = -1073741735LL;
      WdLogEvent5_WdError(v152);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      *((_QWORD *)this + 4) = -1LL;
      v112 = DXGGLOBAL::GetGlobal(v111);
      DXGGLOBAL::SetWarpAdapter(v112, this);
    }
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v161);
  }
  if ( !*((_BYTE *)this + 185) )
  {
    v89 = DXGADAPTER::InitializePowerManagement(this);
    v87 = v89;
    if ( v89 >= 0 )
    {
LABEL_111:
      if ( *((_BYTE *)this + 2428)
        && *((int *)this + 540) >= 4864
        && DXGADAPTER::IsFullWDDMAdapter(this)
        && !DXGADAPTER::IsSoftwareAdapter(this)
        && !DXGADAPTER::IsBddDevice(this)
        && (*((_DWORD *)this + 471) & 0x10) == 0 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v154);
        v142[3] = 7217LL;
        goto LABEL_189;
      }
      goto LABEL_112;
    }
    v153 = WdLogNewEntry5_WdError(v90);
    *(_QWORD *)(v153 + 24) = this;
    *(_QWORD *)(v153 + 32) = v87;
    WdLogEvent5_WdError(v153);
  }
  if ( (int)v87 >= 0 )
    goto LABEL_111;
LABEL_112:
  if ( DXGADAPTER::IsWarpAdapter(this) || (Feature_ArgonGpuSupport__private_IsEnabledPreCheck(), v35 >= 0xA008) )
  {
    *((_BYTE *)this + 2476) = 1;
  }
  else if ( *((int *)this + 540) >= 9216 )
  {
    Feature_ArgonGpuSupportEmulation__private_IsEnabledPreCheck();
    Feature_ArgonGpuSupportEmulation__private_IsEnabledPreCheck();
    *((_WORD *)this + 1238) = 257;
  }
  if ( DXGADAPTER::IsRenderAdapter(this) && !*((_BYTE *)this + 185) )
  {
    v92 = *(_QWORD *)v82;
    v93 = DXGGLOBAL::GetGlobal(v91);
    VIDSCH_EXPORT::VidSchSetCrossAdapterData(
      *(VIDSCH_EXPORT **)(v92 + 520),
      *(struct _VIDSCH_GLOBAL **)(v92 + 528),
      (struct DXGGLOBAL *)((char *)v93 + 992));
  }
  if ( (unsigned __int8)DXGADAPTER::IsPostAdapter(this) )
  {
    v113 = *(_QWORD *)((char *)this + 276);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v94) + 81) = v113;
  }
  return (unsigned int)v87;
}
