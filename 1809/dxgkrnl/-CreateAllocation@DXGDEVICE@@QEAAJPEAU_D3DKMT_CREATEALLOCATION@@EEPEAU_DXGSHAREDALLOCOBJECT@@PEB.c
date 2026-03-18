/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0B28 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F3358 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010D030 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C000E88C (-CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0011B74 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0011E90 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00128E4 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C0013960 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00161F0 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00184F8 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C001928C (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VID.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001A35C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0020F20 (ExFreeToNPagedLookasideList.c)
 *     ??0DXGAUTOMUTEX@@QEAA@XZ @ 0x1C002103C (--0DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0021394 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00214B4 (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetSyncLockGroupId@ADAPTER_DISPLAY@@QEBAIXZ @ 0x1C0035370 (-GetSyncLockGroupId@ADAPTER_DISPLAY@@QEBAIXZ.c)
 *     ?VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_EXPORT@@QEAAPEAUVIDMM_FLIP_QUEUE_REFERENCES@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0035488 (-VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_EXPORT@@QEAAPEAUVIDMM_FLIP_QUEUE_REFERENCES@.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00354B4 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@E@Z @ 0x1C00355D0 (-VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_A.c)
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C0035600 (-VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MU.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00AC0D0 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00DFD70 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F8C28 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F9860 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00FA690 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C00FFC90 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0102860 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C010E210 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C010FBD0 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0121440 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1C0129850 (-CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C012C894 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C01D8F0C (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C01D9038 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C01F2D0C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C01F5024 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C01F520C (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C01FF440 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        ADAPTER_RENDER **this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        unsigned __int8 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        unsigned int a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int8 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        unsigned int a15)
{
  ADAPTER_RENDER **v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  ADAPTER_RENDER *v24; // rbx
  __int64 v25; // rax
  __int64 Flags; // rcx
  __int64 v27; // rax
  _QWORD *v29; // rax
  __int64 NumAllocations; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  int v33; // ebx
  SIZE_T v34; // rax
  SIZE_T v35; // rax
  SIZE_T v36; // rax
  void **v37; // rdi
  SIZE_T v38; // rax
  SIZE_T v39; // rax
  void **v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  char *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rax
  UINT v49; // ecx
  size_t v50; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  UINT v54; // r13d
  __int64 v55; // rdx
  __int64 v56; // rsi
  ADAPTER_RENDER *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rbx
  SIZE_T Size; // rdi
  UINT v69; // edi
  void **v70; // r8
  __int64 v71; // rdx
  SIZE_T v72; // rcx
  __int64 v73; // rax
  UINT v74; // r13d
  unsigned __int64 v75; // r12
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  char *v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  void **v85; // rax
  __int64 v86; // rcx
  char *v87; // r9
  size_t v88; // r8
  char *v89; // rdx
  unsigned __int8 v90; // r13
  UINT PrivateDriverDataSize; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  PVOID v94; // rdi
  __int64 v95; // r8
  size_t v96; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  char v98; // di
  __int64 v99; // rcx
  struct DXGRESOURCE *v100; // rbx
  _QWORD *v101; // rax
  ULONG64 v102; // rdx
  __int64 v103; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v104; // eax
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v108; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v109; // eax
  struct _DXGK_ALLOCATIONINFO *v110; // r8
  UINT Value; // edx
  unsigned int v112; // eax
  int v113; // edx
  unsigned __int8 *v114; // r13
  ADAPTER_RENDER *v115; // rax
  struct VIDMM_GLOBAL *v116; // rsi
  VIDMM_EXPORT *v117; // r12
  struct DXGALLOCATION *v118; // rdi
  __int64 i; // rbx
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rax
  struct DXGGLOBAL *Global; // rax
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // rcx
  __int64 v128; // rax
  ADAPTER_RENDER *v129; // rax
  D3DKMT_HANDLE v130; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v131; // eax
  D3DKMT_HANDLE v132; // ecx
  __int64 v133; // r8
  struct DXGALLOCATION *j; // r9
  UINT v135; // eax
  struct DXGALLOCATION *v136; // r9
  UINT v137; // edi
  struct DXGALLOCATION *v138; // rbx
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // rcx
  _QWORD *v143; // rax
  __int64 PrivateRuntimeDataSize; // rcx
  struct _D3DKMT_CREATEALLOCATION *v145; // rdi
  _QWORD *v146; // rax
  size_t v147; // r8
  char *pPrivateRuntimeData; // rdx
  void *v149; // r9
  UINT v150; // eax
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // rcx
  const void *v155; // rdx
  UINT v156; // edi
  struct DXGALLOCATION *v157; // rsi
  struct _D3DDDI_ALLOCATIONINFO2 *v158; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v159; // rbx
  __int64 v160; // rdx
  __int64 v161; // r8
  void *v162; // rcx
  void *pPrivateDriverData; // rdx
  __int64 v164; // rcx
  unsigned int HostProcess; // edi
  __int64 v166; // rax
  char v167; // bl
  D3DKMT_CREATEALLOCATIONFLAGS v168; // edx
  const void *v169; // r11
  const void *v170; // r10
  void **v171; // rax
  unsigned int v172; // r9d
  _DWORD *v173; // r9
  __int64 v174; // rcx
  int v175; // eax
  __int64 v176; // rax
  struct DXGALLOCATION *v177; // rdi
  UINT v178; // ebx
  struct _D3DDDI_ALLOCATIONINFO2 *v179; // r13
  _DWORD *v180; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v181; // eax
  bool IsFullWDDMDevice; // al
  UINT v183; // r13d
  D3DKMT_CREATEALLOCATIONFLAGS v184; // eax
  void *v185; // r12
  struct _DXGK_ALLOCATIONINFO *v186; // rbx
  __int64 v187; // rdx
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v188; // eax
  NTSTATUS v189; // eax
  __int64 v190; // rcx
  __int64 v191; // r12
  __int64 v192; // rax
  __int64 v193; // rcx
  struct DXGALLOCATION *v194; // r12
  ADAPTER_RENDER **v195; // r15
  int v196; // eax
  struct DXGPROCESS *v197; // rax
  ADAPTER_RENDER *v198; // rbx
  unsigned __int64 v199; // rdi
  DXGPUSHLOCK *v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // rdi
  __int64 v205; // rax
  struct _DXGK_ALLOCATIONINFO *v206; // rsi
  PVOID v207; // rbx
  __int64 v208; // rcx
  _QWORD *v209; // rax
  __int64 v210; // rsi
  struct _D3DDDI_ALLOCATIONINFO2 *v211; // r13
  unsigned int v212; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v214; // rcx
  __int64 v215; // rax
  _OWORD *v216; // rdx
  struct _D3DKMT_CREATESTANDARDALLOCATION *v217; // rcx
  size_t v218; // rbx
  __int64 v219; // rsi
  const void *v220; // rdx
  char *v221; // rcx
  size_t v222; // r8
  struct _EPROCESS **v223; // r12
  void **v224; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v225; // eax
  int v226; // eax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  _QWORD *v230; // rax
  struct DXGALLOCATION *v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // rax
  __int64 v234; // rbx
  D3DKMT_CREATEALLOCATIONFLAGS v235; // ecx
  struct _D3DDDI_ALLOCATIONINFO2 *v236; // r13
  NTSTATUS v237; // eax
  __int64 v238; // rdi
  PVOID v239; // rcx
  __int64 v240; // rax
  __int64 v241; // rcx
  int v242; // ecx
  struct _D3DKM_CREATESTANDARDALLOCATION *v243; // rbx
  ADAPTER_RENDER *v244; // r13
  UINT v245; // esi
  struct DXGALLOCATION *v246; // rdi
  unsigned int v247; // ebx
  int v248; // ecx
  struct DXGPROCESS *v249; // rax
  int v250; // eax
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  bool v254; // al
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  unsigned int v256; // esi
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // rdi
  __int64 v260; // rax
  __int64 v261; // rcx
  ADAPTER_RENDER *v262; // rsi
  unsigned __int64 v263; // rdi
  unsigned int v264; // ebx
  __int64 v265; // rdx
  __int64 v266; // rcx
  __int64 v267; // rdi
  __int64 v268; // rax
  struct DXGALLOCATION *v269; // rbx
  UINT v270; // edi
  __int64 v271; // r8
  int v272; // eax
  __int64 v273; // rax
  UINT v274; // eax
  struct DXGALLOCATION *v275; // rdi
  _QWORD *v276; // rax
  __int64 v277; // rcx
  __int64 v278; // rax
  __int64 v279; // rdx
  _QWORD *v280; // rcx
  __int64 v281; // rcx
  __int64 v282; // rcx
  char v283; // bl
  int v284; // eax
  __int64 v285; // rcx
  struct DXGPROCESS *v286; // rdi
  unsigned int Count; // r8d
  unsigned int v288; // ecx
  __int64 v289; // r9
  int v290; // edx
  void **v291; // rbx
  int Resident; // [rsp+78h] [rbp-300h]
  struct DXGRESOURCE *v295; // [rsp+88h] [rbp-2F0h]
  unsigned __int8 v296; // [rsp+90h] [rbp-2E8h] BYREF
  char v297; // [rsp+91h] [rbp-2E7h]
  struct DXGALLOCATION *v298; // [rsp+98h] [rbp-2E0h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v299; // [rsp+A0h] [rbp-2D8h]
  char v300; // [rsp+A8h] [rbp-2D0h]
  void **v301; // [rsp+B0h] [rbp-2C8h]
  void **v302; // [rsp+B8h] [rbp-2C0h]
  UINT v303; // [rsp+C0h] [rbp-2B8h]
  struct _DXGK_ALLOCATIONINFO *v304; // [rsp+C8h] [rbp-2B0h]
  char v305; // [rsp+D0h] [rbp-2A8h]
  unsigned __int8 v306; // [rsp+D8h] [rbp-2A0h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v307; // [rsp+E0h] [rbp-298h]
  void *Src; // [rsp+F0h] [rbp-288h]
  int v309; // [rsp+F8h] [rbp-280h]
  struct _D3DKMT_CREATESTANDARDALLOCATION *v310; // [rsp+100h] [rbp-278h]
  struct _D3DDDI_ALLOCATIONINFO2 *v311; // [rsp+108h] [rbp-270h]
  unsigned __int64 *v312; // [rsp+110h] [rbp-268h]
  ADAPTER_RENDER **v313; // [rsp+118h] [rbp-260h]
  struct DXGRESOURCE *v314; // [rsp+120h] [rbp-258h] BYREF
  struct _EPROCESS *v315; // [rsp+128h] [rbp-250h]
  DXGDEVICE *v316; // [rsp+130h] [rbp-248h]
  struct _D3DKMT_CREATEALLOCATION *v317; // [rsp+140h] [rbp-238h]
  struct _DXGK_OPENALLOCATIONINFO *v318; // [rsp+150h] [rbp-228h]
  int v319; // [rsp+158h] [rbp-220h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v320[2]; // [rsp+160h] [rbp-218h] BYREF
  struct _EX_RUNDOWN_REF *v321; // [rsp+168h] [rbp-210h] BYREF
  struct _D3DKMT_CREATEALLOCATION *v322; // [rsp+170h] [rbp-208h]
  struct _DXGSHAREDALLOCOBJECT *v323; // [rsp+178h] [rbp-200h]
  struct DXGALLOCATION *v324; // [rsp+180h] [rbp-1F8h]
  struct _EPROCESS *v325; // [rsp+188h] [rbp-1F0h]
  unsigned __int8 *v326; // [rsp+190h] [rbp-1E8h] BYREF
  PVOID Entry; // [rsp+198h] [rbp-1E0h]
  unsigned __int8 *v328; // [rsp+1A0h] [rbp-1D8h]
  struct _EX_RUNDOWN_REF *v329; // [rsp+1A8h] [rbp-1D0h] BYREF
  __int64 v330; // [rsp+1B0h] [rbp-1C8h]
  struct _EX_RUNDOWN_REF *v331; // [rsp+1B8h] [rbp-1C0h] BYREF
  struct _EX_RUNDOWN_REF *v332; // [rsp+1C0h] [rbp-1B8h] BYREF
  ADAPTER_RENDER *v333; // [rsp+1C8h] [rbp-1B0h]
  _BYTE v334[16]; // [rsp+1D0h] [rbp-1A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v335; // [rsp+1E0h] [rbp-198h] BYREF
  int v336; // [rsp+210h] [rbp-168h]
  struct DXGALLOCATION *v337; // [rsp+218h] [rbp-160h] BYREF
  unsigned int *v338; // [rsp+220h] [rbp-158h]
  struct COREDEVICEACCESS *v339; // [rsp+228h] [rbp-150h]
  PVOID Object[3]; // [rsp+230h] [rbp-148h] BYREF
  PVOID v341; // [rsp+248h] [rbp-130h] BYREF
  __int64 v342; // [rsp+250h] [rbp-128h] BYREF
  ADAPTER_RENDER **v343; // [rsp+258h] [rbp-120h]
  _BYTE v344[16]; // [rsp+260h] [rbp-118h] BYREF
  _BYTE v345[24]; // [rsp+270h] [rbp-108h] BYREF
  _BYTE v346[24]; // [rsp+288h] [rbp-F0h] BYREF
  _BYTE v347[32]; // [rsp+2A0h] [rbp-D8h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v348; // [rsp+2C0h] [rbp-B8h] BYREF

  v18 = this;
  v313 = this;
  v316 = (DXGDEVICE *)this;
  v343 = this;
  v317 = a2;
  v322 = a2;
  v306 = a3;
  v323 = a5;
  v307 = a6;
  v339 = a7;
  v315 = a9;
  v338 = a10;
  v312 = a11;
  v328 = a12;
  v310 = a13;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v22 + 24) = 4544LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*((_DWORD *)v18 + 18) )
    ExIsResourceAcquiredExclusiveLite((PERESOURCE)v18[13]);
  if ( a7 )
  {
    v20 = *((_QWORD *)a7 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v20 + 144));
  }
  if ( a3 && a4 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v23 + 24) = 4549LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = v18[2];
  v25 = *((_QWORD *)v24 + 2);
  v297 = *(_BYTE *)(v25 + 185);
  v305 = v297;
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v25 + 1892) & 0x10) == 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(Flags, v19, v21);
      *(_QWORD *)(v27 + 24) = v18;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      return 3221225485LL;
    }
    if ( (Flags & 2) == 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(Flags, v19, v21);
      v29[3] = v18;
      v29[4] = -1073741811LL;
      v29[5] = 1LL;
      WdLogEvent5_WdWarning(v29);
      return 3221225485LL;
    }
  }
  v301 = 0LL;
  Src = 0LL;
  Entry = 0LL;
  v333 = v24;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations > 5 )
  {
    v299 = 0LL;
    v311 = 0LL;
    v31 = (unsigned int)NumAllocations;
    v32 = 96 * NumAllocations;
    v33 = 0;
    if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
    {
      v34 = 96LL * (unsigned int)NumAllocations;
      if ( !is_mul_ok(v31, 0x60uLL) )
        v34 = -1LL;
      v299 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new(v34, 0x4B677844u, PagedPool);
      v311 = v299;
    }
    else
    {
      v33 = -1073741675;
    }
    v304 = 0LL;
    if ( v32 <= 0xFFFFFFFF )
    {
      v33 = 0;
      if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v35 = 88LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
          v35 = -1LL;
        v304 = (struct _DXGK_ALLOCATIONINFO *)operator new(v35, 0x4B677844u, PagedPool);
      }
      else
      {
        v33 = -1073741675;
      }
    }
    v318 = 0LL;
    if ( v33 >= 0 )
    {
      v33 = 0;
      if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v36 = 32LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
          v36 = -1LL;
        v318 = (struct _DXGK_OPENALLOCATIONINFO *)operator new(v36, 0x4B677844u, PagedPool);
      }
      else
      {
        v33 = -1073741675;
      }
    }
    v37 = 0LL;
    v302 = 0LL;
    if ( v33 >= 0 )
    {
      v33 = 0;
      if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v38 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v38 = -1LL;
        v37 = (void **)operator new(v38, 0x4B677844u, PagedPool);
        v302 = v37;
        if ( a3 )
        {
          v39 = 8LL * a2->NumAllocations;
          if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
            v39 = -1LL;
          v40 = (void **)operator new(v39, 0x4B677844u, PagedPool);
          v301 = v40;
        }
        else
        {
          v40 = 0LL;
        }
LABEL_45:
        v41 = (__int64)v299;
        if ( v33 < 0 || !v299 || !v304 || !v318 || !v37 || !v40 && a3 )
        {
          operator delete[](v299);
          operator delete[](v304);
          operator delete[](v318);
          operator delete[](v37);
          operator delete[](v301);
          v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
          v45[3] = v18;
          v45[4] = a2->NumAllocations;
          if ( v33 >= 0 )
          {
            v33 = -1073741801;
            v45[5] = -1073741801LL;
          }
          else
          {
            v45[5] = v33;
          }
          WdLogEvent5_WdWarning(v45);
          return (unsigned int)v33;
        }
        goto LABEL_61;
      }
      v33 = -1073741675;
    }
    v40 = 0LL;
    goto LABEL_45;
  }
  v46 = (char *)v24 + 1344;
  ++*((_DWORD *)v46 + 5);
  v41 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v46);
  v299 = (struct _D3DDDI_ALLOCATIONINFO2 *)v41;
  if ( !v41 )
  {
    ++*((_DWORD *)v46 + 6);
    v41 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v46 + 6))(
            *((unsigned int *)v46 + 9),
            *((unsigned int *)v46 + 11),
            *((unsigned int *)v46 + 10));
    v299 = (struct _D3DDDI_ALLOCATIONINFO2 *)v41;
  }
  Entry = (PVOID)v41;
  if ( !v41 )
  {
    v48 = WdLogNewEntry5_WdLowResource(v47);
    *(_QWORD *)(v48 + 24) = v18;
    WdLogEvent5_WdLowResource(v48);
    return -1073741801LL;
  }
  v304 = (struct _DXGK_ALLOCATIONINFO *)(v41 + 720);
  v318 = (struct _DXGK_OPENALLOCATIONINFO *)(v41 + 480);
  v37 = (void **)(v41 + 640);
  v302 = (void **)(v41 + 640);
  v40 = (void **)(v41 + 680);
  v301 = (void **)(v41 + 680);
  v311 = (struct _D3DDDI_ALLOCATIONINFO2 *)v41;
LABEL_61:
  v330 = v41;
  Object[1] = (PVOID)v41;
  v49 = 0;
  v303 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v37[v49] = 0LL;
      if ( a3 )
        v40[v49] = 0LL;
      ++v49;
    }
    while ( v49 < a2->NumAllocations );
    v303 = v49;
  }
  v298 = 0LL;
  Resident = 0;
  v296 = 0;
  v295 = 0LL;
  v300 = 0;
  v314 = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v334);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v345, 0LL, 0);
  if ( a3 )
  {
    v50 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v50) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v50 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove((void *)v41, pAllocationInfo, v50);
  }
  else
  {
    memmove((void *)v41, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v309 = -1;
  v319 = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    *(_QWORD *)(v41 + 16) = a14;
    *(_DWORD *)(v41 + 24) = a15;
  }
  v54 = 0;
  if ( a2->NumAllocations )
  {
    v55 = (unsigned int)a2->Flags;
    do
    {
      if ( (v55 & 0x800) != 0 )
      {
        v53 = 96LL * v54;
        v55 = *(unsigned int *)(v53 + v41 + 32);
        v52 = (unsigned int)v55;
        if ( (v55 & 1) != 0 )
        {
          v309 = *(_DWORD *)(v53 + v41 + 28);
          v319 = v309;
          if ( !v18[216] )
          {
            v52 = (unsigned int)v55 & 0xFFFFFFFE;
            *(_DWORD *)(v53 + v41 + 32) = v52;
          }
        }
        if ( (v52 & 2) != 0 )
        {
          v76 = WdLogNewEntry5_WdWarning(v52, v55, v53);
          *(_QWORD *)(v76 + 24) = v18;
          *(_QWORD *)(v76 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v76);
          LODWORD(v41) = -1073741811;
          Resident = -1073741811;
          v74 = 0;
          v75 = 0LL;
          goto LABEL_322;
        }
      }
      v56 = 96LL * v54 + v41;
      if ( (*(_DWORD *)(v56 + 32) & 1) != 0 )
      {
        v57 = v18[216];
        if ( !v57 )
          goto LABEL_115;
        if ( !DXGADAPTER::IsDisplayAdapter(v18[216])
          || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*((ADAPTER_DISPLAY **)v57 + 315)) )
        {
          v59 = WdLogNewEntry5_WdAssertion(v58);
          *(_QWORD *)(v59 + 24) = 4799LL;
          WdLogEvent5_WdAssertion(v59);
        }
        v60 = *(unsigned int *)(*((_QWORD *)v57 + 315) + 80LL);
        if ( (_DWORD)v60 != *((_DWORD *)v18 + 434) )
        {
          v61 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v61 + 24) = 4805LL;
          WdLogEvent5_WdAssertion(v61);
        }
        v52 = *(unsigned int *)(v56 + 28);
        if ( (_DWORD)v52 == -3 )
        {
          if ( *((char *)DXGPROCESS::GetCurrent() + 323) >= 0
            && !ADAPTER_DISPLAY::GetSyncLockGroupId(*((ADAPTER_DISPLAY **)v57 + 315)) )
          {
            LODWORD(v41) = -1073741811;
            Resident = -1073741811;
            v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v62, v64);
            v77[3] = v18;
            v77[4] = -1073741811LL;
            goto LABEL_113;
          }
          v65 = WdLogNewEntry5_WdEvent(v63, v62);
          *(_QWORD *)(v65 + 24) = v18;
          WdLogEvent5_WdEvent(v65);
        }
        else if ( (unsigned int)v52 >= *((_DWORD *)v18 + 434) )
        {
LABEL_115:
          v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v55, v53);
          v78[3] = v18;
          v78[4] = v299[v54].VidPnSourceId;
          v78[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v78);
          LODWORD(v41) = -1073741811;
          Resident = -1073741811;
          v74 = 0;
          v75 = 0LL;
          goto LABEL_322;
        }
        if ( !*((_DWORD *)v18 + 82)
          && !a4
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                *((DXGADAPTER ***)v57 + 315),
                (const struct DXGDEVICE *)v18,
                *(_DWORD *)(v56 + 28)) )
        {
          v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v55, v53);
          LODWORD(v41) = -1071775744;
          Resident = -1071775744;
          v77[3] = -1071775744LL;
          v77[4] = v18;
          v77[5] = v299[v54].VidPnSourceId;
          v77[6] = v54;
          goto LABEL_113;
        }
      }
      v66 = *(_DWORD *)(v56 + 32);
      if ( (v66 & 2) != 0 && (v66 & 1) == 0 )
      {
        v79 = WdLogNewEntry5_WdWarning(v52, v55, v53);
        *(_QWORD *)(v79 + 24) = -1073741811LL;
        *(_QWORD *)(v79 + 32) = v18;
        WdLogEvent5_WdWarning(v79);
        LODWORD(v41) = -1073741811;
        Resident = -1073741811;
        v74 = 0;
        v75 = 0LL;
        goto LABEL_322;
      }
      v55 = (unsigned int)a2->Flags;
      if ( (v55 & 0x10000) != 0 )
      {
        v52 = v55 & 0x20;
        if ( (v55 & 0x20) != 0 && !*(_QWORD *)(v56 + 8) || (v55 & 0x20000) != 0 && !*(_QWORD *)(v56 + 8) )
        {
          v80 = WdLogNewEntry5_WdError(v52);
          *(_QWORD *)(v80 + 24) = v18;
          *(_QWORD *)(v80 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v80);
          LODWORD(v41) = -1073741811;
          Resident = -1073741811;
          v74 = 0;
          v75 = 0LL;
          goto LABEL_322;
        }
        if ( (v67 = *(_QWORD *)(v56 + 8), Size = a2->pStandardAllocation->ExistingHeapData.Size, (v55 & 0x20) != 0)
          && v67 != (v67 & 0xFFFFFFFFFFFFF000uLL)
          || Size != (Size & 0xFFFFFFFFFFFFF000uLL) )
        {
          v81 = WdLogNewEntry5_WdError(v52);
          *(_QWORD *)(v81 + 24) = v67;
          *(_QWORD *)(v81 + 32) = Size;
          WdLogEvent5_WdError(v81);
          LODWORD(v41) = -1073741811;
          Resident = -1073741811;
          v74 = 0;
          v75 = 0LL;
          goto LABEL_322;
        }
      }
      ++v54;
      v41 = (__int64)v299;
    }
    while ( v54 < a2->NumAllocations );
  }
  v69 = 0;
  v303 = 0;
  v70 = v302;
  while ( v69 < a2->NumAllocations )
  {
    v71 = 96LL * v69;
    v72 = *(unsigned int *)(v71 + v41 + 24);
    if ( (unsigned int)v72 > 0x7FFFFFFF )
    {
      v73 = WdLogNewEntry5_WdWarning(v72, v71, v70);
      *(_QWORD *)(v73 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v73);
      v74 = 0;
      v75 = 0LL;
      goto LABEL_321;
    }
    if ( *(_QWORD *)(v71 + v41 + 16) && (_DWORD)v72 )
    {
      if ( a3 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        v72 = (unsigned int)(2 * v72);
      v82 = (char *)operator new(v72, 0x4B677844u, PagedPool);
      v85 = v302;
      v302[v69] = v82;
      if ( !v82 )
      {
        LODWORD(v41) = -1073741801;
        Resident = -1073741801;
        v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, 0LL, v84);
        v77[3] = v18;
        v77[4] = a2->NumAllocations;
        v77[5] = -1073741801LL;
        goto LABEL_113;
      }
      if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
      {
        v70 = v85;
      }
      else
      {
        v86 = 96LL * v69;
        v87 = &v82[*(unsigned int *)(v86 + v41 + 24)];
        v301[v69] = v87;
        v88 = *(unsigned int *)(v86 + v41 + 24);
        v89 = *(char **)(v86 + v41 + 16);
        if ( &v89[v88] < v89 || (unsigned __int64)&v89[v88] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v87, v89, v88);
        v70 = v302;
      }
LABEL_135:
      v303 = ++v69;
    }
    else
    {
      v70[v69] = 0LL;
      if ( !a3 )
        goto LABEL_135;
      v301[v69++] = 0LL;
      v303 = v69;
    }
  }
  v90 = a3;
  if ( a3 )
  {
    if ( a2->pStandardAllocation )
    {
      PrivateDriverDataSize = a2->PrivateDriverDataSize;
      if ( PrivateDriverDataSize )
      {
        v94 = operator new(PrivateDriverDataSize, 0x4B677844u, PagedPool);
        Src = v94;
        if ( !v94 )
        {
          LODWORD(v41) = -1073741801;
          Resident = -1073741801;
          v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v93, v92, v95);
          v77[3] = v18;
          v77[4] = a2->PrivateDriverDataSize;
          v77[5] = -1073741801LL;
LABEL_113:
          WdLogEvent5_WdWarning(v77);
          v74 = 0;
          v75 = 0LL;
          goto LABEL_322;
        }
        v96 = a2->PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v96) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v96 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v94, pStandardAllocation, v96);
      }
    }
  }
  v98 = a4;
  LODWORD(v41) = DXGDEVICE::OpenResourceObject(
                   v18,
                   a2,
                   (struct _D3DDDI_ALLOCATIONINFO2 *)v41,
                   a4,
                   v315,
                   v323,
                   &v314,
                   &v296,
                   v307,
                   (struct DXGAUTOMUTEX *)v334,
                   (struct DXGAUTOPUSHLOCK *)v345);
  Resident = v41;
  if ( (int)v41 < 0 )
    goto LABEL_230;
  v100 = v314;
  v295 = v314;
  if ( v314 && (*((_DWORD *)v314 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    v101 = (_QWORD *)WdLogNewEntry5_WdError(v99);
    v101[3] = v18;
    v101[4] = v100;
    v101[5] = -1073741811LL;
    WdLogEvent5_WdError(v101);
    LODWORD(v41) = -1073741811;
    Resident = -1073741811;
    v74 = 0;
    v75 = (unsigned __int64)v100;
    goto LABEL_322;
  }
  LODWORD(v41) = DXGDEVICE::CreateDestructionBuffers((DXGDEVICE *)v18, a2->NumAllocations, v314, v296);
  Resident = v41;
  if ( (int)v41 < 0 )
    goto LABEL_230;
  LODWORD(v41) = DXGDEVICE::CreateAllocationObjects((DXGDEVICE *)v18, a2->NumAllocations, &v298, v100, &v337);
  Resident = v41;
  if ( (int)v41 < 0 )
    goto LABEL_230;
  if ( v337 )
  {
    DXGDEVICE::AppendAllocationListToResourceOrDevice(v18, v100, v298, v337);
    v300 = 1;
  }
  v104 = a2->Flags;
  if ( (*(_WORD *)&v104 & 0x800) != 0 )
  {
    if ( v309 != -1 )
    {
      *(_DWORD *)(*((_QWORD *)v100 + 7) + 12LL) |= 0x40u;
      *((_DWORD *)v100 + 1) |= 8u;
      *(_DWORD *)(*((_QWORD *)v100 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v100 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
    }
    goto LABEL_166;
  }
  if ( (*(_WORD *)&v104 & 0x1000) == 0 )
  {
    if ( !v100 )
      goto LABEL_166;
    v107 = *((_QWORD *)v100 + 7);
    if ( !v107 || (*(_BYTE *)(v107 + 12) & 0x60) != 0x60 )
      goto LABEL_166;
LABEL_165:
    *((_DWORD *)v100 + 1) |= 8u;
    goto LABEL_166;
  }
  v105 = *(_DWORD *)v307;
  if ( (*(_DWORD *)v307 & 0x80u) != 0 )
  {
    v106 = WdLogNewEntry5_WdAssertion(v103);
    *(_QWORD *)(v106 + 24) = 5114LL;
    WdLogEvent5_WdAssertion(v106);
    v105 = *(_DWORD *)v307;
  }
  if ( (v105 & 0x100) != 0 )
    goto LABEL_165;
LABEL_166:
  if ( !v297 )
  {
    memset(v304, 0, 88LL * a2->NumAllocations);
    v108 = v299;
    if ( !a4 )
    {
      LODWORD(v41) = DXGDEVICE::CreateDriverAllocations(
                       (DXGDEVICE *)v18,
                       a2,
                       v299,
                       v304,
                       v298,
                       v100,
                       v302,
                       v301,
                       Src,
                       v307,
                       a3,
                       v310);
      Resident = v41;
    }
    if ( (int)v41 >= 0 )
    {
      LODWORD(v41) = DXGDEVICE::OpenAllocations(
                       (DXGDEVICE *)v18,
                       a2,
                       v108,
                       v298,
                       v318,
                       v302,
                       v301,
                       Src,
                       a3,
                       a4,
                       a8,
                       v338,
                       v312);
      Resident = v41;
      if ( (int)v41 >= 0 )
      {
        v109 = a2->Flags;
        v110 = v304;
        Value = v304->Flags.Value;
        if ( (*(_BYTE *)&v109 & 8) != 0 )
        {
          Value |= 0x4000008u;
          v304->Flags.Value = Value;
          v109 = a2->Flags;
        }
        if ( (*(_WORD *)&v109 & 0x100) != 0 )
        {
          Value = Value & 0xFEFFFFFB | 0x1000000;
          goto LABEL_177;
        }
        if ( (*(_WORD *)&v109 & 0x200) != 0 )
        {
          Value |= 0x800004u;
LABEL_177:
          v110->Flags.Value = Value;
        }
        v112 = Value & 0xFFFFF7FF;
        v113 = Value | 0x800;
        if ( (*(_DWORD *)&a2->Flags & 0x8000) == 0 )
          v113 = v112;
        v110->Flags.Value = v113;
        LODWORD(v41) = DXGDEVICE::CreateVidMmAllocations((PERESOURCE *)v18, a2, v108, v110, v298, v307, a4, v339);
        Resident = v41;
        if ( (int)v41 >= 0 )
        {
          v114 = v328;
          if ( v328 )
          {
            v115 = v18[2];
            v116 = (struct VIDMM_GLOBAL *)*((_QWORD *)v115 + 69);
            v117 = (VIDMM_EXPORT *)*((_QWORD *)v115 + 68);
            v118 = v298;
            for ( i = 0LL; (unsigned int)i < a2->NumAllocations; i = (unsigned int)(i + 1) )
            {
              *(_QWORD *)&v114[8 * i] = VIDMM_EXPORT::VidMmQueryAllocationSizeInSystemMemory(
                                          v117,
                                          v116,
                                          *((struct _VIDMM_MULTI_ALLOC **)v118 + 3),
                                          (*(_DWORD *)&a2->Flags & 0x20) != 0);
              v118 = (struct DXGALLOCATION *)*((_QWORD *)v118 + 8);
            }
            v100 = v295;
            LODWORD(v41) = Resident;
          }
          v90 = a3;
          v98 = a4;
          goto LABEL_186;
        }
      }
    }
LABEL_230:
    v74 = 0;
    v75 = (unsigned __int64)v295;
    goto LABEL_322;
  }
LABEL_186:
  if ( v296 )
  {
    if ( v100 )
    {
      if ( (*((_DWORD *)v100 + 1) & 1) != 0 )
      {
        v120 = *((_QWORD *)v100 + 7);
        if ( !*(_DWORD *)(v120 + 24) && (*(_DWORD *)(v120 + 12) & 8) == 0 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v344);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v344);
          if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
          {
            v122 = WdLogNewEntry5_WdAssertion(v121);
            *(_QWORD *)(v122 + 24) = 5247LL;
            WdLogEvent5_WdAssertion(v122);
          }
          Global = DXGGLOBAL::GetGlobal(v121);
          v124 = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v100 + 7), 2u);
          v127 = *((_QWORD *)v100 + 7);
          *(_DWORD *)(v127 + 24) = v124;
          if ( !*(_DWORD *)(*((_QWORD *)v100 + 7) + 24LL) )
          {
            v128 = WdLogNewEntry5_WdWarning(v127, v125, v126);
            *(_QWORD *)(v128 + 24) = v18;
            *(_QWORD *)(v128 + 32) = -1073741801LL;
            WdLogEvent5_WdWarning(v128);
            LODWORD(v41) = -1073741801;
            Resident = -1073741801;
            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v344);
            v74 = 0;
            v75 = (unsigned __int64)v295;
            goto LABEL_322;
          }
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v344);
        }
      }
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v346, v18 + 23);
    v129 = v18[7];
    if ( v129 )
    {
      *((_QWORD *)v129 + 4) = v100;
      v129 = v18[7];
    }
    *((_QWORD *)v100 + 5) = v129;
    v18[7] = v100;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v346);
  }
  v130 = 0;
  if ( v100 )
    v130 = *((_DWORD *)v100 + 4);
  a2->hResource = v130;
  v131 = a2->Flags;
  if ( ((*(_BYTE *)&v131 & 2) != 0 || v98) && (*(_BYTE *)&v131 & 0x40) == 0 )
    v132 = *(_DWORD *)(*((_QWORD *)v100 + 7) + 24LL);
  else
    v132 = 0;
  a2->hGlobalShare = v132;
  if ( v90 )
  {
    v133 = 0LL;
    v303 = 0;
    for ( j = v298; ; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    {
      v135 = a2->NumAllocations;
      if ( (unsigned int)v133 >= v135 )
        break;
      v102 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v133;
      if ( v102 >= MmUserProbeAddress )
        v102 = MmUserProbeAddress;
      *(_DWORD *)v102 = *((_DWORD *)j + 4);
      v133 = (unsigned int)(v133 + 1);
      v303 = v133;
    }
    if ( (int)v41 < 0 )
      goto LABEL_230;
  }
  else
  {
    v133 = 0LL;
    v136 = v298;
    v135 = a2->NumAllocations;
    if ( v135 )
    {
      do
      {
        v102 = 96LL * (unsigned int)v133;
        *(D3DKMT_HANDLE *)((char *)&a2->pAllocationInfo->hAllocation + v102) = *((_DWORD *)v136 + 4);
        v133 = (unsigned int)(v133 + 1);
        v136 = (struct DXGALLOCATION *)*((_QWORD *)v136 + 8);
        v135 = a2->NumAllocations;
      }
      while ( (unsigned int)v133 < v135 );
    }
  }
  v137 = 0;
  v303 = 0;
  v138 = v298;
  v324 = v298;
  if ( v135 )
  {
    do
    {
      v102 = *(unsigned int *)(*((_QWORD *)v138 + 6) + 4LL);
      if ( (v102 & 1) != 0 )
      {
        LODWORD(v41) = DXGDEVICE::AddPrimaryAllocation((DXGDEVICE *)v18, v138);
        Resident = v41;
        if ( (int)v41 < 0 )
          goto LABEL_230;
      }
      else if ( (v102 & 2) != 0 )
      {
        DXGDEVICE::SetDisplayedPrimary(v18, ((unsigned int)v102 >> 6) & 0xF, v138, 0, 1u);
      }
      v303 = ++v137;
      v138 = (struct DXGALLOCATION *)*((_QWORD *)v138 + 8);
      v324 = v138;
    }
    while ( v137 < a2->NumAllocations );
  }
  if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    if ( a2->pPrivateRuntimeData )
    {
      v139 = *((_QWORD *)v295 + 7);
      if ( *(_QWORD *)(v139 + 96) )
      {
        v145 = a2;
        if ( *(_DWORD *)(v139 + 104) != a2->PrivateRuntimeDataSize )
        {
          LODWORD(v41) = -1073741811;
          Resident = -1073741811;
          v146 = (_QWORD *)WdLogNewEntry5_WdWarning(v139, v102, v133);
          v146[3] = v18;
          v146[4] = a2->PrivateRuntimeDataSize;
          v146[5] = *(unsigned int *)(*((_QWORD *)v295 + 7) + 104LL);
          WdLogEvent5_WdWarning(v146);
          v74 = 0;
          v75 = (unsigned __int64)v295;
          goto LABEL_322;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v295 + 7) + 96LL) = operator new(a2->PrivateRuntimeDataSize, 0x4B677844u, PagedPool);
        v142 = *((_QWORD *)v295 + 7);
        if ( !*(_QWORD *)(v142 + 96) )
        {
          LODWORD(v41) = -1073741801;
          Resident = -1073741801;
          v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v142, v140, v141);
          v143[3] = v18;
          PrivateRuntimeDataSize = a2->PrivateRuntimeDataSize;
LABEL_228:
          v143[4] = PrivateRuntimeDataSize;
          v143[5] = -1073741801LL;
          goto LABEL_229;
        }
        v145 = a2;
        *(_DWORD *)(v142 + 104) = a2->PrivateRuntimeDataSize;
      }
      if ( v90 )
      {
        v147 = a2->PrivateRuntimeDataSize;
        pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
        v149 = *(void **)(*((_QWORD *)v295 + 7) + 96LL);
        if ( &pPrivateRuntimeData[v147] < pPrivateRuntimeData
          || (unsigned __int64)&pPrivateRuntimeData[v147] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v149, pPrivateRuntimeData, v147);
      }
      else
      {
        memmove(*(void **)(*((_QWORD *)v295 + 7) + 96LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
      }
    }
    else
    {
      v145 = a2;
    }
    if ( a2->pStandardAllocation )
    {
      v150 = a2->PrivateDriverDataSize;
      if ( v150 )
      {
        v151 = *((_QWORD *)v295 + 7);
        if ( *(_QWORD *)(v151 + 112) )
        {
          if ( *(_DWORD *)(v151 + 120) != v150 )
          {
            LODWORD(v41) = -1073741811;
            Resident = -1073741811;
            v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v151, v102, v133);
            v143[3] = v18;
            v143[4] = a2->PrivateDriverDataSize;
            v143[5] = *(unsigned int *)(*((_QWORD *)v295 + 7) + 120LL);
            v143[6] = 5478LL;
            goto LABEL_229;
          }
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)v295 + 7) + 112LL) = operator new(v150, 0x4B677844u, PagedPool);
          v154 = *((_QWORD *)v295 + 7);
          if ( !*(_QWORD *)(v154 + 112) )
          {
            LODWORD(v41) = -1073741801;
            Resident = -1073741801;
            v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v154, v152, v153);
            v143[3] = v18;
            PrivateRuntimeDataSize = v145->PrivateDriverDataSize;
            goto LABEL_228;
          }
          *(_DWORD *)(v154 + 120) = a2->PrivateDriverDataSize;
          v150 = a2->PrivateDriverDataSize;
        }
        v155 = Src;
        if ( !v90 )
          v155 = a2->pStandardAllocation;
        memmove(*(void **)(*((_QWORD *)v295 + 7) + 112LL), v155, v150);
      }
    }
    v156 = 0;
    v303 = 0;
    v157 = v298;
    v324 = v298;
    if ( a2->NumAllocations )
    {
      v158 = v299;
      do
      {
        v159 = &v158[v156];
        if ( v159->pPrivateDriverData )
        {
          *(_QWORD *)(*((_QWORD *)v157 + 6) + 32LL) = operator new(v159->PrivateDriverDataSize, 0x4B677844u, PagedPool);
          v162 = *(void **)(*((_QWORD *)v157 + 6) + 32LL);
          if ( !v162 )
          {
            LODWORD(v41) = -1073741801;
            Resident = -1073741801;
            v143 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v160, v161);
            v143[3] = v18;
            v143[4] = v156 + 1;
            v143[5] = v158[v156].PrivateDriverDataSize;
            v143[6] = -1073741801LL;
            goto LABEL_229;
          }
          if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
            pPrivateDriverData = v159->pPrivateDriverData;
          else
            pPrivateDriverData = v301[v156];
          memmove(v162, pPrivateDriverData, v159->PrivateDriverDataSize);
          *(_DWORD *)(*((_QWORD *)v157 + 6) + 40LL) = v159->PrivateDriverDataSize;
        }
        v303 = ++v156;
        v157 = (struct DXGALLOCATION *)*((_QWORD *)v157 + 8);
        v324 = v157;
      }
      while ( v156 < a2->NumAllocations );
    }
  }
  v41 = *((_QWORD *)v18[2] + 2);
  if ( !*(_BYTE *)(v41 + 185) || a4 )
    goto LABEL_358;
  HostProcess = DXGPROCESS::GetHostProcess(v18[5]);
  if ( !HostProcess )
  {
    v166 = WdLogNewEntry5_WdError(v164);
    *(_QWORD *)(v166 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v166);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v345);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v334);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v314);
    if ( Entry )
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)((char *)v333 + 1344), Entry);
    return 3221225473LL;
  }
  v326 = 0LL;
  v167 = DXGDEVICE::UmdManagesResidency((DXGDEVICE *)v18) && v307 && (unsigned int)(*((_DWORD *)v307 + 4) - 1) <= 2;
  v168 = a2->Flags;
  if ( (*(_BYTE *)&v168 & 2) != 0 )
    v169 = *(const void **)(*((_QWORD *)v295 + 7) + 96LL);
  else
    v169 = 0LL;
  v170 = Src;
  if ( !a3 )
  {
    v170 = a2->pStandardAllocation;
    goto LABEL_280;
  }
  v171 = v301;
  if ( (*(_DWORD *)&v168 & 0x10000) != 0 )
LABEL_280:
    v171 = v302;
  if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    v172 = *((_DWORD *)v295 + 5);
  else
    v172 = 0;
  LODWORD(v41) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v41 + 4152),
                   HostProcess,
                   *((_DWORD *)v18 + 84),
                   v172,
                   a2,
                   v299,
                   v171,
                   v170,
                   v169,
                   a3,
                   v167,
                   &v326);
  v173 = v326;
  v310 = (struct _D3DKMT_CREATESTANDARDALLOCATION *)v326;
  if ( !v326 )
    goto LABEL_401;
  v328 = v326;
  if ( v295 )
  {
    *((_DWORD *)v295 + 5) = *((_DWORD *)v326 + 1);
    v174 = (unsigned int)a2->Flags;
    if ( (v174 & 2) != 0 )
    {
      v175 = v173[2];
      if ( (v174 & 0x40) != 0 )
      {
        if ( v175 )
        {
          v176 = WdLogNewEntry5_WdAssertion(v174);
          *(_QWORD *)(v176 + 24) = 5589LL;
          goto LABEL_292;
        }
      }
      else if ( !v175 )
      {
        v176 = WdLogNewEntry5_WdAssertion(v174);
        *(_QWORD *)(v176 + 24) = 5593LL;
LABEL_292:
        WdLogEvent5_WdAssertion(v176);
        v173 = v310;
      }
      *(_DWORD *)(*((_QWORD *)v295 + 7) + 28LL) = v173[2];
    }
  }
  v315 = 0LL;
  v325 = 0LL;
  if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v295 )
  {
    v315 = *(struct _EPROCESS **)(*((_QWORD *)v295 + 7) + 128LL);
    v325 = v315;
  }
  v177 = v298;
  v178 = 0;
  if ( a2->NumAllocations )
  {
    v179 = v299;
    do
    {
      v180 = &v173[18 * v178];
      *((_DWORD *)v177 + 24) = v180[4];
      *((_DWORD *)v177 + 25) = v180[4];
      v181 = a2->Flags;
      if ( (*(_BYTE *)&v181 & 2) != 0 && (*(_DWORD *)&v181 & 0x20020) != 0 )
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v177 + 5) + 56LL) + 192LL) = v180[7];
      else
        *((_DWORD *)v177 + 34) = v180[7];
      *((_DWORD *)v177 + 35) = v173[3];
      if ( v173[3] & 1 | ((v173[3] & 2) != 0) )
        *((_QWORD *)v177 + 14) = v179[v178].hSection;
      *(_DWORD *)(*((_QWORD *)v177 + 6) + 4LL) = v180[6];
      *(_DWORD *)(*((_QWORD *)v177 + 6) + 4LL) |= 0x20000u;
      if ( (v179[v178].Flags.Value & 1) != 0 )
      {
        IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice((DXGDEVICE *)v18);
        v173 = v310;
        if ( !IsFullWDDMDevice )
          *(_DWORD *)(*((_QWORD *)v177 + 6) + 4LL) |= 4u;
      }
      ++v178;
      v177 = (struct DXGALLOCATION *)*((_QWORD *)v177 + 8);
    }
    while ( v178 < a2->NumAllocations );
    v177 = v298;
  }
  if ( (int)v41 < 0 )
  {
    Resident = v41;
    v74 = 0;
    v75 = (unsigned __int64)v295;
    goto LABEL_322;
  }
  v183 = 0;
  while ( 1 )
  {
    LODWORD(v312) = v183;
    v323 = v177;
    if ( v183 >= a2->NumAllocations )
      break;
    v184 = a2->Flags;
    if ( (*(_DWORD *)&v184 & 0x10000) != 0 )
    {
      v185 = *(void **)(v330 + 96LL * v183 + 8);
      if ( (*(_BYTE *)&v184 & 0x20) != 0 )
      {
        v186 = &v304[v183];
        LODWORD(v41) = ProcessSysMemAttributes(v185, v173[18 * v183 + 8], v186);
        Resident = v41;
        if ( (int)v41 < 0 )
          goto LABEL_230;
        v187 = *(_QWORD *)(*((_QWORD *)v177 + 5) + 56LL);
        *(_DWORD *)(v187 + 12) |= 0x200u;
        *(_QWORD *)(v187 + 184) = v185;
        *(_DWORD *)(v187 + 196) = v186->Alignment;
        v188 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v186->Flags.Value;
      }
      else
      {
        v189 = ObReferenceObjectByHandle(v185, 0x20000u, 0LL, a3, Object, 0LL);
        v191 = v189;
        Resident = v189;
        if ( v189 < 0 )
        {
          v192 = WdLogNewEntry5_WdError(v190);
          *(_QWORD *)(v192 + 24) = v299[v183].hSection;
          *(_QWORD *)(v192 + 32) = v191;
          WdLogEvent5_WdError(v192);
          goto LABEL_320;
        }
        v206 = &v304[v183];
        v207 = Object[0];
        Resident = ProcessSectionAttributes(Object[0], v206);
        if ( Resident < 0 )
        {
          v209 = (_QWORD *)WdLogNewEntry5_WdError(v208);
          v209[3] = v18;
          LODWORD(v41) = Resident;
          v209[4] = Resident;
          v209[5] = 5714LL;
          WdLogEvent5_WdError(v209);
          ObfDereferenceObject(v207);
          v74 = 0;
          v75 = (unsigned __int64)v295;
          goto LABEL_322;
        }
        v187 = *(_QWORD *)(*((_QWORD *)v177 + 5) + 56LL);
        *(_DWORD *)(v187 + 12) |= 0x400u;
        *(_QWORD *)(v187 + 184) = v207;
        *(_DWORD *)(v187 + 196) = v206->Alignment;
        v188 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v206->Flags.Value;
      }
      *(_DWORD *)(v187 + 12) ^= ((unsigned __int16)*(_DWORD *)(v187 + 12) ^ (unsigned __int16)(*(_WORD *)&v188 << 9)) & 0x800;
    }
    v210 = v183;
    v211 = &v299[v183];
    if ( (v211->Flags.Value & 1) != 0 )
    {
      v336 = 3;
      v321 = 0LL;
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v329, (struct _EX_RUNDOWN_REF *)v177);
      DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v321, (struct DXGALLOCATION **)&v329);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v329);
      v212 = *((_DWORD *)v18 + 84);
      Current = DXGPROCESS::GetCurrent();
      Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)v18[2] + 2) + 4152LL),
                   *((_DWORD *)Current + 98),
                   v212,
                   0,
                   (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                   1u,
                   (const struct DXGALLOCATIONREFERENCE *)&v321,
                   0LL,
                   0LL);
      if ( Resident < 0 )
      {
        v215 = WdLogNewEntry5_WdError(v214);
        LODWORD(v41) = Resident;
        *(_QWORD *)(v215 + 24) = Resident;
        WdLogEvent5_WdError(v215);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v321);
        goto LABEL_357;
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v321);
    }
    *(_QWORD *)(*((_QWORD *)v177 + 6) + 16LL) = *((_QWORD *)v177 + 6);
    v216 = (_OWORD *)*((_QWORD *)v177 + 6);
    v217 = &v310[3 * v210];
    *((_QWORD *)v177 + 16) = v217[1].ExistingHeapData.Size;
    v216[4] = *(_OWORD *)&v217[1].Flags.0;
    v216[5] = *(_OWORD *)&v217[2].ExistingHeapData.Size;
    v216[6] = *(_OWORD *)&v217[3].Type;
    if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
    {
      v218 = v211->PrivateDriverDataSize;
      v219 = v210;
      v222 = v218;
      v220 = v302[v219];
      v221 = (char *)v211->pPrivateDriverData;
    }
    else
    {
      v218 = v211->PrivateDriverDataSize;
      v219 = v210;
      v220 = v301[v219];
      v221 = (char *)v211->pPrivateDriverData;
      if ( (unsigned __int64)&v221[v218] > MmUserProbeAddress || &v221[v218] <= v221 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v222 = v218;
    }
    memmove(v221, v220, v222);
    v223 = (struct _EPROCESS **)v315;
    if ( v315 )
    {
      if ( !a3 || (v224 = v301, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
        v224 = v302;
      memmove(*((void **)v315 - 2), v224[v219], v218);
      v315 = *v223;
      v325 = v315;
    }
    v173 = v310;
    v183 = (_DWORD)v312 + 1;
    v177 = (struct DXGALLOCATION *)*((_QWORD *)v177 + 8);
  }
  LODWORD(v41) = Resident;
LABEL_357:
  operator delete[](v326);
  if ( (int)v41 < 0 )
    goto LABEL_230;
LABEL_358:
  v225 = a2->Flags;
  if ( (*(_WORD *)&v225 & 0x800) != 0 )
  {
    memset(&v335, 0, sizeof(v335));
    v335.hAllocation = *(HANDLE *)(*((_QWORD *)v298 + 6) + 16LL);
    v226 = ADAPTER_RENDER::DdiDescribeAllocation(v18[2], &v335);
    v41 = v226;
    Resident = v226;
    if ( v226 < 0 )
    {
      v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v228, v227, v229);
      v143[3] = v41;
      v143[4] = v18;
      v143[5] = *((unsigned int *)v298 + 4);
      v143[6] = v298;
LABEL_229:
      WdLogEvent5_WdWarning(v143);
      goto LABEL_230;
    }
    if ( v335.Format == D3DDDIFMT_UNKNOWN && v335.Height != 1 )
    {
      v230 = (_QWORD *)WdLogNewEntry5_WdWarning(v228, v227, v229);
      v230[3] = -1073741811LL;
      v230[4] = v18;
      v230[5] = v335.Height;
      WdLogEvent5_WdWarning(v230);
      LODWORD(v41) = -1073741811;
      Resident = -1073741811;
      v74 = 0;
      v75 = (unsigned __int64)v295;
      goto LABEL_322;
    }
    v231 = v298;
    v232 = *(_QWORD *)(*((_QWORD *)v298 + 5) + 56LL);
    if ( (*(_DWORD *)(v232 + 12) & 0x20) == 0 )
    {
      v233 = WdLogNewEntry5_WdAssertion(v232);
      *(_QWORD *)(v233 + 24) = 5841LL;
      WdLogEvent5_WdAssertion(v233);
      v231 = v298;
    }
    v234 = *(_QWORD *)(*((_QWORD *)v231 + 5) + 56LL);
    *(_DWORD *)(v234 + 200) = v335.Width;
    *(_DWORD *)(v234 + 204) = v335.Height;
    *(_DWORD *)(v234 + 208) = v335.Format;
    v235 = v322->Flags;
    if ( (*((_BYTE *)v18 + 1749) & 1) == 0 )
    {
      if ( (*(_BYTE *)&v235 & 0x20) == 0 )
      {
        *(_QWORD *)(v234 + 184) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                    *((VIDMM_EXPORT **)v18[2] + 68),
                                    *((struct VIDMM_GLOBAL **)v18[2] + 69),
                                    *((struct _VIDMM_MULTI_ALLOC **)v298 + 3));
        *(_DWORD *)(v234 + 12) |= 0x400u;
      }
      *(_QWORD *)(v234 + 216) = VIDMM_EXPORT::VidMmGetAllocationFlipQueueReferencesPointer(
                                  *((VIDMM_EXPORT **)v18[2] + 68),
                                  *((struct VIDMM_GLOBAL **)v18[2] + 69),
                                  *((struct _VIDMM_MULTI_ALLOC **)v298 + 3));
LABEL_378:
      v242 = v309;
      *(_DWORD *)(v234 + 224) = v309;
      if ( v242 != -1 )
      {
        *(_DWORD *)(v234 + 12) |= 0x40u;
        *(_DWORD *)(v234 + 12) ^= ((unsigned __int8)*(_DWORD *)(v234 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
LABEL_380:
      v243 = v307;
      goto LABEL_381;
    }
    if ( (*(_DWORD *)&v235 & 0x20000) != 0 )
    {
      v236 = v299;
      v237 = ObReferenceObjectByHandle(v299->hSection, 0x20000u, 0LL, a3, &v341, 0LL);
      v238 = v237;
      v239 = v341;
      *(_QWORD *)(v234 + 184) = v341;
      LODWORD(v41) = v237;
      Resident = v237;
      if ( v237 < 0 )
      {
        v240 = WdLogNewEntry5_WdError(v239);
        *(_QWORD *)(v240 + 24) = v236->hSection;
        *(_QWORD *)(v240 + 32) = v238;
LABEL_376:
        WdLogEvent5_WdError(v240);
        v75 = (unsigned __int64)v295;
        v74 = 0;
        goto LABEL_322;
      }
    }
    else
    {
      if ( (*(_BYTE *)&v235 & 0x20) != 0 )
        goto LABEL_378;
      v342 = *((_QWORD *)v298 + 16);
      LODWORD(v41) = MmCreateSection(
                       v234 + 184,
                       0LL,
                       0LL,
                       &v342,
                       4,
                       ~(*(_DWORD *)(*((_QWORD *)v298 + 6) + 4LL) << 11) & 0x40000000 | 0x8000000u,
                       0LL,
                       0LL);
      Resident = v41;
      if ( (int)v41 < 0 )
      {
        v240 = WdLogNewEntry5_WdError(v241);
        *(_QWORD *)(v240 + 24) = 5900LL;
        goto LABEL_376;
      }
    }
    *(_DWORD *)(v234 + 12) |= 0x400u;
    goto LABEL_378;
  }
  if ( (*(_WORD *)&v225 & 0x1000) == 0 )
    goto LABEL_380;
  v243 = v307;
  VIDMM_EXPORT::VidMmSetAllocationFlipQueueReferencesPointer(
    *((VIDMM_EXPORT **)v18[2] + 68),
    *((struct VIDMM_GLOBAL **)v18[2] + 69),
    *((struct _VIDMM_MULTI_ALLOC **)v298 + 3),
    *((struct VIDMM_FLIP_QUEUE_REFERENCES **)v307 + 43));
LABEL_381:
  v244 = v18[2];
  if ( (*(_DWORD *)(*((_QWORD *)v244 + 2) + 1892LL) & 0x40) == 0 )
  {
LABEL_401:
    LODWORD(v41) = Resident;
    v74 = 0;
    v75 = (unsigned __int64)v295;
    goto LABEL_322;
  }
  if ( v243 )
  {
    if ( (*(_DWORD *)v243 & 0x200) == 0 )
    {
      memset(&v348, 0, sizeof(v348));
      v348.Protection.Value = 1LL;
      v245 = 0;
      v246 = v298;
      if ( a2->NumAllocations )
      {
        while ( 1 )
        {
          v247 = (*((_DWORD *)v246 + 18) >> 12) & 0x3F;
          if ( *((_DWORD *)v307 + 4) == 4 )
          {
            v248 = *(_DWORD *)(*((_QWORD *)v307 + 3) + 12LL);
            if ( (((v248 - 1) & 0xFFFFFFFC) != 0 || v248 == 2)
              && DXGADAPTER::ReplicateGdiContent(*((DXGADAPTER **)v18[2] + 2)) )
            {
              v247 = -1;
            }
          }
          if ( v297 )
          {
            v249 = DXGPROCESS::GetCurrent();
            v250 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)v18[2] + 2) + 4152LL),
                     *((_DWORD *)v249 + 98),
                     (const struct DXGDEVICE *)v18,
                     0,
                     *((_DWORD *)v246 + 24),
                     &v348);
          }
          else
          {
            v250 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                     *((VIDMM_EXPORT **)v244 + 68),
                     *((struct VIDMM_GLOBAL **)v244 + 69),
                     0LL,
                     *((struct _VIDMM_MULTI_ALLOC **)v246 + 3),
                     &v348,
                     0,
                     v247);
          }
          Resident = v250;
          if ( v250 < 0 )
            break;
          v254 = DXGADAPTER::ReplicateGdiContent(*((DXGADAPTER **)v18[2] + 2));
          BaseAddress = v348.BaseAddress;
          if ( v254 )
            BaseAddress = v348.VirtualAddress;
          v348.BaseAddress = BaseAddress;
          v348.VirtualAddress = 0LL;
          ++v245;
          v246 = (struct DXGALLOCATION *)*((_QWORD *)v246 + 8);
          if ( v245 >= a2->NumAllocations )
            goto LABEL_320;
        }
        v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v252, v251, v253);
        LODWORD(v41) = Resident;
        v143[3] = Resident;
        goto LABEL_229;
      }
    }
  }
LABEL_320:
  v74 = 0;
  v75 = (unsigned __int64)v295;
LABEL_321:
  LODWORD(v41) = Resident;
LABEL_322:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v334);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v345);
  if ( (int)v41 < 0 )
  {
    v269 = v298;
    if ( v298 )
    {
      v270 = 0;
      if ( a2->NumAllocations )
      {
        do
        {
          v271 = *((_QWORD *)v269 + 6);
          if ( *(_QWORD *)(v271 + 8) && !a4 )
          {
            if ( (v272 = *(_DWORD *)(v271 + 4), (v272 & 1) != 0) && !*((_DWORD *)v18 + 82) || (v272 & 2) != 0 )
            {
              if ( (v272 & 0x10) != 0 )
              {
                v273 = WdLogNewEntry5_WdAssertion(v193);
                *(_QWORD *)(v273 + 24) = 6060LL;
                WdLogEvent5_WdAssertion(v273);
                v271 = *((_QWORD *)v269 + 6);
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *((VIDMM_EXPORT **)v18[2] + 68),
                *((struct VIDMM_GLOBAL **)v18[2] + 69),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v271 + 8));
              *(_DWORD *)(*((_QWORD *)v269 + 6) + 4LL) |= 0x10u;
            }
          }
          ++v270;
          v269 = (struct DXGALLOCATION *)*((_QWORD *)v269 + 8);
        }
        while ( v270 < a2->NumAllocations );
        v269 = v298;
        LODWORD(v41) = Resident;
      }
    }
    if ( v296 )
    {
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v320, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v314, (struct DXGRESOURCE **)v320);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v320);
      DXGDEVICE::RemoveResourceFromDeviceList((DXGDEVICE *)v18, (struct DXGRESOURCE *)v75);
      DXGDEVICE::DestroyResource((DXGDEVICE *)v18, (struct DXGALLOCATION **)v75, 0LL, 0);
    }
    else if ( v269 )
    {
      if ( v300 )
      {
        DXGDEVICE::RemoveAllocationsWithoutDestroy(
          (DXGDEVICE *)v18,
          (struct DXGRESOURCE *)v75,
          v269,
          a2->NumAllocations);
        v269 = v298;
      }
      v274 = 0;
      *(_QWORD *)&v320[0].0 = 0LL;
      if ( (!v75 || *(_QWORD *)(v75 + 56)) && v269 )
      {
        do
        {
          v275 = v269;
          v276 = (_QWORD *)((char *)v269 + 64);
          v269 = (struct DXGALLOCATION *)*((_QWORD *)v269 + 8);
          *((_QWORD *)v275 + 7) = 0LL;
          *v276 = 0LL;
          if ( v75 )
          {
            v277 = *(_QWORD *)(v75 + 56);
            if ( v277 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v275 + 6) + 48LL) )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v277 + 32));
                --*(_DWORD *)(*(_QWORD *)(v75 + 56) + 124LL);
                v278 = *((_QWORD *)v275 + 6) + 48LL;
                v279 = *(_QWORD *)v278;
                v280 = *(_QWORD **)(*((_QWORD *)v275 + 6) + 56LL);
                if ( *(_QWORD *)(*(_QWORD *)v278 + 8LL) != v278 || *v280 != v278 )
                  __fastfail(3u);
                *v280 = v279;
                *(_QWORD *)(v279 + 8) = v280;
                *(_QWORD *)(*((_QWORD *)v275 + 6) + 48LL) = 0LL;
                v281 = *(_QWORD *)(v75 + 56) + 32LL;
                *(_QWORD *)(v281 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v281, 0LL);
                KeLeaveCriticalRegion();
              }
            }
          }
          DXGDEVICE::DestroyAllocations((DXGDEVICE *)v18, 0LL, 0LL, v275, 0LL, v320[0]);
        }
        while ( v269 );
        v269 = v298;
        v274 = v320[0].Value;
      }
      if ( v75 )
      {
        v282 = *(_QWORD *)(v75 + 56);
        if ( v282 )
        {
          v283 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v282 + 32));
          v284 = *(_DWORD *)(v75 + 4);
          if ( (v284 & 0x10) == 0 )
          {
            *(_DWORD *)(v75 + 4) = v284 | 0x10;
            v283 = 1;
          }
          v285 = *(_QWORD *)(v75 + 56) + 32LL;
          *(_QWORD *)(v285 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v285, 0LL);
          KeLeaveCriticalRegion();
          if ( v283 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList((DXGDEVICE *)v18, (struct DXGRESOURCE *)v75);
            v286 = DXGPROCESS::GetCurrent();
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
              (DXGHANDLETABLELOCKEXCLUSIVE *)v347,
              (struct _KTHREAD **)v286);
            DXGPROCESS::GetResourceUnsafe((__int64)v286, (DXGRESOURCEREFERENCE *)&v332, *(_DWORD *)(v75 + 16));
            if ( v332 )
            {
              Count = v332[2].Count;
              v288 = (Count >> 6) & 0xFFFFFF;
              if ( v288 < *((_DWORD *)v286 + 62) )
              {
                v289 = *((_QWORD *)v286 + 29);
                v290 = *(_DWORD *)(v289 + 16LL * v288 + 8);
                if ( ((Count >> 25) & 0x60) == (v290 & 0x60) && (v290 & 0x2000) == 0 && (v290 & 0x1F) != 0 )
                  *(_DWORD *)(v289 + 16LL * ((Count >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
              DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v331, 0LL);
              DXGRESOURCEREFERENCE::MoveAssign(&v314, (struct DXGRESOURCE **)&v331);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v331);
            }
            else
            {
              v283 = 0;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v332);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v347);
            if ( v283 )
              DXGDEVICE::DestroyResource((DXGDEVICE *)v18, (struct DXGALLOCATION **)v75, 0LL, 0);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(
            (DXGDEVICE *)v18,
            v75,
            0LL,
            v269,
            0LL,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v274);
        }
      }
    }
    goto LABEL_470;
  }
  v194 = v298;
  if ( !v298 )
    goto LABEL_423;
  LODWORD(v312) = 0;
  if ( !a2->NumAllocations )
    goto LABEL_423;
  v195 = v343;
  while ( 2 )
  {
    LOBYTE(v196) = EvaluateCurrentState((int **)&g_Feature_3064685881_59110451_FeatureDescriptorDetails);
    if ( !v196 )
    {
      v262 = v195[5];
      v263 = *((unsigned int *)v194 + 4);
      DXGPUSHLOCK::AcquireExclusive((ADAPTER_RENDER *)((char *)v262 + 208));
      v264 = ((unsigned int)v263 >> 6) & 0xFFFFFF;
      if ( v264 < *((_DWORD *)v262 + 62) )
      {
        v265 = *((_QWORD *)v262 + 29);
        v266 = ((unsigned int)v263 >> 25) & 0x60;
        if ( (((unsigned int)v263 >> 25) & 0x60) == (*(_BYTE *)(v265 + 16LL * v264 + 8) & 0x60)
          && (*(_DWORD *)(v265 + 16LL * v264 + 8) & 0x1F) != 0 )
        {
          v267 = 2 * ((v263 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v265 + 8 * v267 + 8) & 0x2000) == 0 )
          {
            v268 = WdLogNewEntry5_WdAssertion(v266);
            *(_QWORD *)(v268 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v268);
            v265 = *((_QWORD *)v262 + 29);
          }
          *(_DWORD *)(v265 + 8 * v267 + 8) &= ~0x2000u;
        }
        if ( v264 < *((_DWORD *)v262 + 62) )
          *(_DWORD *)(*((_QWORD *)v262 + 29) + 16LL * v264 + 8) &= ~0x4000u;
      }
      *((_QWORD *)v262 + 27) = 0LL;
      v261 = (__int64)v262 + 208;
      goto LABEL_420;
    }
    v197 = DXGPROCESS::GetCurrent();
    v198 = v195[5];
    v199 = *((unsigned int *)v194 + 4);
    v200 = (ADAPTER_RENDER *)((char *)v198 + 208);
    if ( (*((_BYTE *)v197 + 323) & 8) == 0 )
    {
      DXGPUSHLOCK::AcquireExclusive(v200);
      v256 = ((unsigned int)v199 >> 6) & 0xFFFFFF;
      if ( v256 < *((_DWORD *)v198 + 62) )
      {
        v257 = *((_QWORD *)v198 + 29);
        v258 = ((unsigned int)v199 >> 25) & 0x60;
        if ( (((unsigned int)v199 >> 25) & 0x60) == (*(_BYTE *)(v257 + 16LL * v256 + 8) & 0x60)
          && (*(_DWORD *)(v257 + 16LL * v256 + 8) & 0x1F) != 0 )
        {
          v259 = 2 * ((v199 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v257 + 8 * v259 + 8) & 0x2000) == 0 )
          {
            v260 = WdLogNewEntry5_WdAssertion(v258);
            *(_QWORD *)(v260 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v260);
            v257 = *((_QWORD *)v198 + 29);
          }
          *(_DWORD *)(v257 + 8 * v259 + 8) &= ~0x2000u;
        }
        if ( v256 < *((_DWORD *)v198 + 62) )
          *(_DWORD *)(*((_QWORD *)v198 + 29) + 16LL * v256 + 8) &= ~0x4000u;
      }
      *((_QWORD *)v198 + 27) = 0LL;
      v261 = (__int64)v198 + 208;
LABEL_420:
      ExReleasePushLockExclusiveEx(v261, 0LL);
      KeLeaveCriticalRegion();
      v74 = 0;
      goto LABEL_421;
    }
    DXGPUSHLOCK::AcquireExclusive(v200);
    v201 = ((unsigned int)v199 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v201 < *((_DWORD *)v198 + 62) )
    {
      v202 = *((_QWORD *)v198 + 29);
      v203 = ((unsigned int)v199 >> 25) & 0x60;
      if ( (((unsigned int)v199 >> 25) & 0x60) == (*(_BYTE *)(v202 + 16 * v201 + 8) & 0x60)
        && (*(_DWORD *)(v202 + 16 * v201 + 8) & 0x1F) != 0 )
      {
        v204 = 2 * ((v199 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v202 + 8 * v204 + 8) & 0x2000) == 0 )
        {
          v205 = WdLogNewEntry5_WdAssertion(v203);
          *(_QWORD *)(v205 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v205);
          v202 = *((_QWORD *)v198 + 29);
        }
        *(_DWORD *)(v202 + 8 * v204 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)v198 + 27) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v198 + 208, 0LL);
    KeLeaveCriticalRegion();
LABEL_421:
    LODWORD(v312) = (_DWORD)v312 + 1;
    v194 = (struct DXGALLOCATION *)*((_QWORD *)v194 + 8);
    if ( (unsigned int)v312 < a2->NumAllocations )
      continue;
    break;
  }
  v18 = v313;
  LODWORD(v41) = Resident;
LABEL_423:
  if ( v296 )
    DXGPROCESS::CommitResourceHandleSafe(v18[5], v295);
LABEL_470:
  v291 = v302;
  if ( a2->NumAllocations )
  {
    do
      operator delete[](v291[v74++]);
    while ( v74 < a2->NumAllocations );
  }
  operator delete[](Src);
  if ( a2->NumAllocations > 5 )
  {
    operator delete[](v299);
    operator delete[](v304);
    operator delete[](v318);
    operator delete[](v291);
    operator delete[](v301);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v345);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v334);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v314);
  if ( Entry )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)((char *)v333 + 1344), Entry);
  return (unsigned int)v41;
}
