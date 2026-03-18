/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0628 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F30A8 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F3A54 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0114BB0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000658C (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007260 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000784C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00087D0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C000C498 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000C4C0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C5E0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000C5F4 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C788 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CCF4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00140AC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0017B5C (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00182D8 (-CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0019B54 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0019CF8 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VID.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ExFreeToPagedLookasideList @ 0x1C0023A5C (ExFreeToPagedLookasideList.c)
 *     ??0DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0023B88 (--0DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023E40 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0023F60 (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0036658 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_EXPORT@@QEAAPEAUVIDMM_FLIP_QUEUE_REFERENCES@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C003BEF4 (-VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_EXPORT@@QEAAPEAUVIDMM_FLIP_QUEUE_REFERENCES@.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C003BF20 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@E@Z @ 0x1C003BF4C (-VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_A.c)
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C003BF7C (-VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MU.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00C2180 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00E3AB4 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00E4D14 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C00EE500 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F3A30 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00FFA80 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C0102E40 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01169E4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C0116A68 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0136F50 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1C013D0C8 (-CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C013D838 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C014C220 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02079D0 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0207AFC (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C02230A0 (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C02256A8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0225890 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C0230214 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0230304 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        unsigned __int8 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        UINT a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        unsigned int a15)
{
  unsigned __int8 v16; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 Flags; // rcx
  __int64 v27; // rax
  _QWORD *v29; // rax
  UINT v30; // r15d
  __int64 NumAllocations; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  int v34; // ebx
  SIZE_T v35; // rax
  SIZE_T v36; // rax
  SIZE_T v37; // rax
  void **v38; // r13
  SIZE_T v39; // rax
  SIZE_T v40; // rax
  void **v41; // rdx
  char *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  UINT v53; // ecx
  struct DXGRESOURCE *v54; // r13
  size_t v55; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  UINT v59; // r12d
  __int64 v60; // rdx
  char *v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rbx
  SIZE_T Size; // rsi
  __int64 v70; // rdx
  void **v71; // r13
  char *v72; // rsi
  SIZE_T v73; // rcx
  _QWORD *v74; // rax
  UINT v75; // r15d
  void **v76; // r12
  __int64 v77; // rdx
  __int64 v78; // rcx
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  char *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rbx
  _QWORD *v86; // rax
  __int64 v87; // rcx
  char *v88; // r9
  size_t v89; // r8
  char *v90; // rdx
  unsigned __int8 v91; // bl
  UINT PrivateDriverDataSize; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  PVOID v96; // r9
  size_t v97; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  struct _D3DKM_CREATESTANDARDALLOCATION *v99; // r15
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  _QWORD *v103; // rax
  ULONG64 v104; // rdx
  __int64 v105; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v106; // eax
  int v107; // eax
  __int64 v108; // rax
  __int64 v109; // rax
  char v110; // cl
  void **v111; // r15
  __int64 DriverAllocations; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v113; // eax
  struct _DXGK_ALLOCATIONINFO *v114; // rcx
  __int64 v115; // rax
  struct VIDMM_GLOBAL *v116; // r15
  VIDMM_EXPORT *v117; // r12
  struct DXGALLOCATION *v118; // rsi
  UINT v119; // ebx
  unsigned __int64 *v120; // r13
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  struct DXGGLOBAL *Global; // rax
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  D3DKMT_HANDLE v132; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v133; // eax
  D3DKMT_HANDLE v134; // ecx
  const GUID *v135; // r8
  struct DXGALLOCATION *i; // r9
  UINT v137; // eax
  struct DXGALLOCATION *v138; // r9
  UINT v139; // esi
  struct DXGALLOCATION *v140; // rbx
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // rcx
  _QWORD *v145; // rax
  __int64 PrivateRuntimeDataSize; // rcx
  _QWORD *v147; // rax
  unsigned __int8 v148; // bl
  size_t v149; // r8
  char *pPrivateRuntimeData; // rdx
  void *v151; // r9
  UINT v152; // eax
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // rcx
  const void *v157; // rdx
  UINT v158; // esi
  struct DXGALLOCATION *v159; // r15
  struct _D3DDDI_ALLOCATIONINFO2 *v160; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v161; // rbx
  __int64 v162; // rdx
  __int64 v163; // r8
  void *v164; // rcx
  void *v165; // rdx
  _QWORD *v166; // rax
  __int64 v167; // r15
  __int64 v168; // rdx
  __int64 v169; // rcx
  unsigned int HostProcess; // esi
  __int64 v171; // r8
  __int64 v172; // rax
  UINT v173; // r13d
  char v174; // bl
  D3DKMT_CREATEALLOCATIONFLAGS v175; // edx
  const void *v176; // r11
  const void *v177; // r10
  void **v178; // rax
  unsigned int v179; // r9d
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  unsigned __int8 *v183; // rbx
  __int64 v184; // rax
  _DWORD *v185; // r9
  struct DXGRESOURCE *v186; // rsi
  D3DKMT_CREATEALLOCATIONFLAGS v187; // eax
  __int64 v188; // rax
  __int64 v189; // rcx
  struct DXGALLOCATION *v190; // rsi
  UINT v191; // r15d
  struct _D3DDDI_ALLOCATIONINFO2 *v192; // rbx
  _DWORD *v193; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v194; // eax
  bool IsFullWDDMDevice; // al
  D3DKMT_CREATEALLOCATIONFLAGS v196; // eax
  HANDLE hSection; // r15
  struct _DXGK_ALLOCATIONINFO *v198; // rbx
  __int64 v199; // rdx
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // eax
  struct _D3DDDI_ALLOCATIONINFO2 *v201; // r12
  NTSTATUS v202; // eax
  __int64 v203; // rdx
  __int64 v204; // r8
  __int64 v205; // r15
  __int64 v206; // rax
  struct _DXGK_ALLOCATIONINFO *v207; // r15
  PVOID v208; // rbx
  int v209; // eax
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  _QWORD *v213; // rax
  __int64 v214; // r15
  struct _D3DDDI_ALLOCATIONINFO2 *v215; // r13
  __int64 v216; // rdx
  unsigned int v217; // ebx
  __int64 v218; // rdx
  __int64 v219; // rcx
  struct DXGPROCESS *Current; // rax
  int Resident; // eax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // rax
  __int64 v226; // rdx
  _OWORD *v227; // rdx
  char *v228; // rcx
  size_t v229; // rbx
  __int64 v230; // r15
  const void *v231; // rdx
  char *pPrivateDriverData; // rcx
  size_t v233; // r8
  unsigned __int64 *v234; // r12
  void **v235; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v236; // eax
  int v237; // eax
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // r8
  _QWORD *v241; // rax
  struct DXGALLOCATION *v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rax
  __int64 v245; // rbx
  D3DKMT_CREATEALLOCATIONFLAGS v246; // eax
  struct _D3DDDI_ALLOCATIONINFO2 *v247; // r13
  NTSTATUS v248; // eax
  __int64 v249; // rdx
  __int64 v250; // r8
  __int64 v251; // rsi
  PVOID v252; // rcx
  __int64 v253; // rax
  __int64 v254; // rdx
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // rax
  int v258; // eax
  struct _D3DKM_CREATESTANDARDALLOCATION *v259; // rbx
  __int64 v260; // r13
  __int64 v261; // rdx
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  struct DXGALLOCATION *v263; // rsi
  unsigned int v264; // ebx
  struct DXGPROCESS *v265; // rax
  int v266; // eax
  __int64 v267; // rdx
  __int64 v268; // r8
  bool v269; // al
  struct DXGALLOCATION *v270; // rbx
  UINT v271; // esi
  __int64 v272; // r8
  int v273; // eax
  __int64 v274; // rax
  struct DXGALLOCATION *v275; // rsi
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
  __int64 v286; // rdx
  __int64 v287; // rcx
  struct DXGPROCESS *v288; // rsi
  unsigned int v289; // r8d
  unsigned int v290; // ecx
  __int64 v291; // r9
  int v292; // edx
  void **v293; // rbx
  struct _D3DKM_CREATESTANDARDALLOCATION *v294; // [rsp+48h] [rbp-2E0h]
  unsigned __int8 v297[8]; // [rsp+80h] [rbp-2A8h] BYREF
  struct DXGRESOURCE *v298; // [rsp+88h] [rbp-2A0h]
  char v299; // [rsp+90h] [rbp-298h]
  __int64 v300; // [rsp+98h] [rbp-290h]
  struct DXGALLOCATION *v301; // [rsp+A0h] [rbp-288h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v302; // [rsp+A8h] [rbp-280h]
  char v303; // [rsp+B0h] [rbp-278h]
  UINT v304; // [rsp+B4h] [rbp-274h]
  unsigned __int8 v305; // [rsp+B8h] [rbp-270h]
  char v306; // [rsp+C0h] [rbp-268h]
  void **v307; // [rsp+C8h] [rbp-260h]
  struct _DXGK_ALLOCATIONINFO *v308; // [rsp+D0h] [rbp-258h]
  void **v309; // [rsp+D8h] [rbp-250h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v310; // [rsp+E0h] [rbp-248h]
  struct _D3DDDI_ALLOCATIONINFO2 *v311; // [rsp+E8h] [rbp-240h]
  int v312; // [rsp+F0h] [rbp-238h]
  unsigned __int64 *v313; // [rsp+F8h] [rbp-230h]
  struct _EPROCESS *v314; // [rsp+100h] [rbp-228h]
  DXGDEVICE *v315; // [rsp+108h] [rbp-220h]
  struct _D3DKMT_CREATEALLOCATION *v316; // [rsp+110h] [rbp-218h]
  unsigned __int8 *v317; // [rsp+120h] [rbp-208h] BYREF
  void *Src; // [rsp+128h] [rbp-200h]
  struct _DXGK_OPENALLOCATIONINFO *v319; // [rsp+130h] [rbp-1F8h]
  struct DXGRESOURCE *v320; // [rsp+138h] [rbp-1F0h] BYREF
  struct _D3DKMT_CREATESTANDARDALLOCATION *v321; // [rsp+140h] [rbp-1E8h]
  struct _EX_RUNDOWN_REF *v322; // [rsp+148h] [rbp-1E0h] BYREF
  struct _DXGSHAREDALLOCOBJECT *v323; // [rsp+150h] [rbp-1D8h]
  struct DXGALLOCATION *v324; // [rsp+158h] [rbp-1D0h]
  unsigned __int64 *v325; // [rsp+160h] [rbp-1C8h]
  struct _EX_RUNDOWN_REF *v326; // [rsp+168h] [rbp-1C0h] BYREF
  __int64 v327; // [rsp+170h] [rbp-1B8h] BYREF
  char v328[8]; // [rsp+178h] [rbp-1B0h] BYREF
  char v329[8]; // [rsp+180h] [rbp-1A8h] BYREF
  __int64 v330; // [rsp+188h] [rbp-1A0h] BYREF
  PVOID Entry; // [rsp+190h] [rbp-198h]
  struct _DXGKARG_DESCRIBEALLOCATION v332; // [rsp+198h] [rbp-190h] BYREF
  int v333; // [rsp+1C8h] [rbp-160h]
  struct DXGALLOCATION *v334; // [rsp+1D0h] [rbp-158h] BYREF
  unsigned __int64 *v335; // [rsp+1D8h] [rbp-150h]
  unsigned int *v336; // [rsp+1E0h] [rbp-148h]
  struct COREDEVICEACCESS *v337; // [rsp+1E8h] [rbp-140h]
  PVOID Object; // [rsp+1F0h] [rbp-138h] BYREF
  PVOID v339; // [rsp+1F8h] [rbp-130h] BYREF
  __int64 v340; // [rsp+200h] [rbp-128h]
  _BYTE v341[16]; // [rsp+208h] [rbp-120h] BYREF
  _BYTE v342[16]; // [rsp+218h] [rbp-110h] BYREF
  _BYTE v343[24]; // [rsp+228h] [rbp-100h] BYREF
  _BYTE v344[24]; // [rsp+240h] [rbp-E8h] BYREF
  _BYTE v345[24]; // [rsp+258h] [rbp-D0h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v346; // [rsp+270h] [rbp-B8h] BYREF

  v16 = a3;
  v315 = this;
  v316 = a2;
  v305 = a3;
  v323 = a5;
  v310 = a6;
  v337 = a7;
  v314 = a9;
  v336 = a10;
  v335 = a11;
  v313 = a12;
  v321 = a13;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v22 + 24) = 4539LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  if ( a7 )
  {
    v20 = *((_QWORD *)a7 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v20 + 144));
  }
  if ( v16 && a4 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v23 + 24) = 4544LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = *((_QWORD *)this + 2);
  v25 = *(_QWORD *)(v24 + 16);
  v299 = *(_BYTE *)(v25 + 185);
  v306 = v299;
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v25 + 1916) & 0x10) == 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(Flags, v19, v21);
      *(_QWORD *)(v27 + 24) = this;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      return 3221225485LL;
    }
    if ( (Flags & 2) == 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(Flags, v19, v21);
      v29[3] = this;
      v29[4] = -1073741811LL;
      v29[5] = 1LL;
      WdLogEvent5_WdWarning(v29);
      return 3221225485LL;
    }
  }
  v30 = 0;
  v307 = 0LL;
  Src = 0LL;
  Entry = 0LL;
  v340 = v24;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations > 5 )
  {
    v302 = 0LL;
    v311 = 0LL;
    v32 = (unsigned int)NumAllocations;
    v33 = 96 * NumAllocations;
    v34 = 0;
    if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
    {
      v35 = 96LL * (unsigned int)NumAllocations;
      if ( !is_mul_ok(v32, 0x60uLL) )
        v35 = -1LL;
      v302 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new[](v35, 0x4B677844u, PagedPool);
      v311 = v302;
    }
    else
    {
      v34 = -1073741675;
    }
    v308 = 0LL;
    if ( v33 <= 0xFFFFFFFF )
    {
      v34 = 0;
      if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v36 = 88LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
          v36 = -1LL;
        v308 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v36, 0x4B677844u, PagedPool);
      }
      else
      {
        v34 = -1073741675;
      }
    }
    v319 = 0LL;
    if ( v34 >= 0 )
    {
      v34 = 0;
      if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v37 = 32LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
          v37 = -1LL;
        v319 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v37, 0x4B677844u, PagedPool);
      }
      else
      {
        v34 = -1073741675;
      }
    }
    v38 = 0LL;
    v309 = 0LL;
    if ( v34 >= 0 )
    {
      v34 = 0;
      if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v39 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v39 = -1LL;
        v38 = (void **)operator new[](v39, 0x4B677844u, PagedPool);
        v309 = v38;
        v16 = a3;
        if ( a3 )
        {
          v40 = 8LL * a2->NumAllocations;
          if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
            v40 = -1LL;
          v41 = (void **)operator new[](v40, 0x4B677844u, PagedPool);
          v307 = v41;
        }
        else
        {
          v41 = v307;
        }
        goto LABEL_45;
      }
      v34 = -1073741675;
    }
    v16 = a3;
    v41 = 0LL;
LABEL_45:
    v42 = (char *)v302;
    if ( v34 < 0 || !v302 || !v308 || !v319 || !v38 || !v41 && v16 )
    {
      operator delete[](v302);
      operator delete[](v308);
      operator delete[](v319);
      operator delete[](v38);
      operator delete[](v307);
      v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
      v46[3] = this;
      v46[4] = a2->NumAllocations;
      if ( v34 >= 0 )
      {
        v34 = -1073741801;
        v46[5] = -1073741801LL;
      }
      else
      {
        v46[5] = v34;
      }
      WdLogEvent5_WdWarning(v46);
      return (unsigned int)v34;
    }
    v30 = 0;
    goto LABEL_62;
  }
  v47 = v24 + 1344;
  ++*(_DWORD *)(v47 + 20);
  v42 = (char *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v47);
  v302 = (struct _D3DDDI_ALLOCATIONINFO2 *)v42;
  if ( !v42 )
  {
    ++*(_DWORD *)(v47 + 24);
    v42 = (char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v47 + 48))(
                    *(unsigned int *)(v47 + 36),
                    *(unsigned int *)(v47 + 44),
                    *(unsigned int *)(v47 + 40));
    v302 = (struct _D3DDDI_ALLOCATIONINFO2 *)v42;
  }
  Entry = v42;
  if ( !v42 )
  {
    v52 = WdLogNewEntry5_WdLowResource(v49, v48, v50, v51);
    *(_QWORD *)(v52 + 24) = this;
    WdLogEvent5_WdLowResource(v52);
    return -1073741801LL;
  }
  v308 = (struct _DXGK_ALLOCATIONINFO *)(v42 + 720);
  v319 = (struct _DXGK_OPENALLOCATIONINFO *)(v42 + 480);
  v38 = (void **)(v42 + 640);
  v309 = (void **)(v42 + 640);
  v41 = (void **)(v42 + 680);
  v307 = (void **)(v42 + 680);
  v311 = (struct _D3DDDI_ALLOCATIONINFO2 *)v42;
LABEL_62:
  v53 = 0;
  v304 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v38[v53] = 0LL;
      if ( v16 )
        v41[v53] = 0LL;
      ++v53;
    }
    while ( v53 < a2->NumAllocations );
    v304 = v53;
  }
  v301 = 0LL;
  v300 = 0LL;
  v297[0] = 0;
  v54 = 0LL;
  v298 = 0LL;
  v303 = 0;
  v320 = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v342);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v343, 0LL, 0);
  if ( v16 )
  {
    v55 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v55) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v55 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v42, pAllocationInfo, v55);
  }
  else
  {
    memmove(v42, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v312 = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    *((_QWORD *)v42 + 2) = a14;
    *((_DWORD *)v42 + 6) = a15;
  }
  v59 = 0;
  if ( a2->NumAllocations )
  {
    v60 = (unsigned int)a2->Flags;
    while ( 1 )
    {
      if ( (v60 & 0x800) != 0 )
      {
        v58 = 96LL * v59;
        v60 = *(unsigned int *)&v42[v58 + 32];
        v57 = (unsigned int)v60;
        if ( (v60 & 1) != 0 )
        {
          v312 = *(_DWORD *)&v42[v58 + 28];
          if ( !*((_QWORD *)this + 216) )
          {
            v57 = (unsigned int)v60 & 0xFFFFFFFE;
            *(_DWORD *)&v42[v58 + 32] = v57;
          }
        }
        if ( (v57 & 2) != 0 )
          break;
      }
      v61 = &v42[96 * v59];
      if ( (*((_DWORD *)v61 + 8) & 1) != 0 )
      {
        v62 = *((_QWORD *)this + 216);
        if ( !v62 )
          goto LABEL_119;
        if ( !DXGADAPTER::IsDisplayAdapter(*((DXGADAPTER **)this + 216))
          || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(v62 + 2552)) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v63, v60);
          *(_QWORD *)(v64 + 24) = 4794LL;
          WdLogEvent5_WdAssertion(v64);
        }
        v57 = *(unsigned int *)(*(_QWORD *)(v62 + 2552) + 80LL);
        v65 = *((_DWORD *)this + 434);
        if ( (_DWORD)v57 != v65 )
        {
          v66 = WdLogNewEntry5_WdAssertion(v57, v60);
          *(_QWORD *)(v66 + 24) = 4800LL;
          WdLogEvent5_WdAssertion(v66);
          v65 = *((_DWORD *)this + 434);
        }
        v58 = *((unsigned int *)v61 + 7);
        if ( (unsigned int)v58 >= v65 )
        {
LABEL_119:
          v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v60, v58);
          v79[3] = this;
          v79[4] = v302[v59].VidPnSourceId;
          v79[5] = -1073741811LL;
          goto LABEL_117;
        }
        if ( !*((_DWORD *)this + 82)
          && !a4
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v62 + 2552), this, v58) )
        {
          v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v60, v58);
          v80[3] = -1071775744LL;
          v80[4] = this;
          v80[5] = v302[v59].VidPnSourceId;
          v80[6] = v59;
          WdLogEvent5_WdWarning(v80);
          v75 = 0;
          LODWORD(v76) = -1071775744;
          goto LABEL_113;
        }
      }
      v67 = *((_DWORD *)v61 + 8);
      if ( (v67 & 2) != 0 && (v67 & 1) == 0 )
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v60, v58);
        v79[3] = -1073741811LL;
        v79[4] = this;
        goto LABEL_117;
      }
      v60 = (unsigned int)a2->Flags;
      if ( (v60 & 0x10000) != 0 )
      {
        v57 = v60 & 0x20;
        if ( (v60 & 0x20) != 0 && !*((_QWORD *)v61 + 1) || (v60 & 0x20000) != 0 && !*((_QWORD *)v61 + 1) )
        {
          v81 = WdLogNewEntry5_WdError(v57, v60, v58);
          *(_QWORD *)(v81 + 24) = this;
          *(_QWORD *)(v81 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v81);
          LODWORD(v76) = -1073741811;
          v75 = 0;
          goto LABEL_113;
        }
        if ( (v68 = *((_QWORD *)v61 + 1), Size = a2->pStandardAllocation->ExistingHeapData.Size, (v60 & 0x20) != 0)
          && v68 != (v68 & 0xFFFFFFFFFFFFF000uLL)
          || Size != (Size & 0xFFFFFFFFFFFFF000uLL) )
        {
          v82 = WdLogNewEntry5_WdError(v57, v60, v58);
          *(_QWORD *)(v82 + 24) = v68;
          *(_QWORD *)(v82 + 32) = Size;
          WdLogEvent5_WdError(v82);
          LODWORD(v76) = -1073741811;
          v75 = 0;
          goto LABEL_113;
        }
      }
      ++v59;
      v42 = (char *)v302;
      if ( v59 >= a2->NumAllocations )
      {
        v30 = 0;
        goto LABEL_105;
      }
    }
    v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v60, v58);
    v79[3] = this;
    v79[4] = -1073741811LL;
LABEL_117:
    WdLogEvent5_WdWarning(v79);
    LODWORD(v76) = -1073741811;
    v75 = 0;
    goto LABEL_113;
  }
LABEL_105:
  v70 = a3;
  v71 = v309;
  while ( 1 )
  {
    v304 = v30;
    if ( v30 >= a2->NumAllocations )
      break;
    v72 = &v42[96 * v30];
    v73 = *((unsigned int *)v72 + 6);
    if ( (unsigned int)v73 > 0x7FFFFFFF )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v70, v58);
      v74[3] = -1073741811LL;
      goto LABEL_109;
    }
    if ( *((_QWORD *)v72 + 2) && (_DWORD)v73 )
    {
      if ( a3 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        v73 = (unsigned int)(2 * v73);
      v83 = (char *)operator new[](v73, 0x4B677844u, PagedPool);
      v85 = v30;
      v71[v85] = v83;
      if ( !v83 )
      {
        LODWORD(v76) = -1073741801;
        v86 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v84, v58);
        v86[3] = this;
        v87 = a2->NumAllocations;
        goto LABEL_130;
      }
      if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
      {
        v70 = a3;
      }
      else
      {
        v88 = &v83[*((unsigned int *)v72 + 6)];
        v307[v85] = v88;
        v89 = *((unsigned int *)v72 + 6);
        v90 = (char *)*((_QWORD *)v72 + 2);
        if ( &v90[v89] < v90 || (unsigned __int64)&v90[v89] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v88, v90, v89);
        v70 = a3;
      }
LABEL_142:
      ++v30;
      v42 = (char *)v302;
    }
    else
    {
      v71[v30] = 0LL;
      if ( !(_BYTE)v70 )
        goto LABEL_142;
      v307[v30++] = 0LL;
      v42 = (char *)v302;
    }
  }
  v91 = a3;
  if ( a3 )
  {
    if ( a2->pStandardAllocation )
    {
      PrivateDriverDataSize = a2->PrivateDriverDataSize;
      if ( PrivateDriverDataSize )
      {
        v96 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
        Src = v96;
        if ( !v96 )
        {
          LODWORD(v76) = -1073741801;
          v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v94, v93, v95);
          v86[3] = this;
          v87 = a2->PrivateDriverDataSize;
LABEL_130:
          v86[4] = v87;
          v86[5] = -1073741801LL;
LABEL_131:
          WdLogEvent5_WdWarning(v86);
LABEL_132:
          v75 = 0;
          goto LABEL_112;
        }
        v97 = a2->PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v97) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v97 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v96, pStandardAllocation, v97);
      }
    }
  }
  v99 = v310;
  LODWORD(v76) = DXGDEVICE::OpenResourceObject(
                   (ADAPTER_RENDER **)this,
                   a2,
                   (struct _D3DDDI_ALLOCATIONINFO2 *)v42,
                   a4,
                   v314,
                   v323,
                   (struct DXGRESOURCEREFERENCE *)&v320,
                   v297,
                   v310,
                   (struct DXGAUTOMUTEX *)v342,
                   (struct DXGAUTOPUSHLOCK *)v343);
  if ( (int)v76 < 0 )
    goto LABEL_132;
  v54 = v320;
  v298 = v320;
  if ( v320 && (*((_DWORD *)v320 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    v103 = (_QWORD *)WdLogNewEntry5_WdError(v101, v100, v102);
    v103[3] = this;
    v103[4] = v54;
    v103[5] = -1073741811LL;
    WdLogEvent5_WdError(v103);
    LODWORD(v76) = -1073741811;
    v75 = 0;
    goto LABEL_113;
  }
  LODWORD(v76) = DXGDEVICE::CreateDestructionBuffers(this, a2->NumAllocations, v320, v297[0]);
  if ( (int)v76 < 0 )
    goto LABEL_132;
  LODWORD(v76) = DXGDEVICE::CreateAllocationObjects(this, a2->NumAllocations, &v301, v54, &v334);
  v300 = (unsigned int)v76;
  if ( (int)v76 < 0 )
    goto LABEL_132;
  if ( v334 )
  {
    DXGDEVICE::AppendAllocationListToResourceOrDevice(this, v54, v301, v334);
    v303 = 1;
  }
  v106 = a2->Flags;
  if ( (*(_WORD *)&v106 & 0x800) != 0 )
  {
    if ( v312 != -1 )
    {
      *(_DWORD *)(*((_QWORD *)v54 + 7) + 12LL) |= 0x40u;
      *((_DWORD *)v54 + 1) |= 8u;
      *(_DWORD *)(*((_QWORD *)v54 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v54 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
    }
    goto LABEL_173;
  }
  if ( (*(_WORD *)&v106 & 0x1000) == 0 )
  {
    if ( !v54 )
      goto LABEL_173;
    v109 = *((_QWORD *)v54 + 7);
    if ( !v109 || (*(_BYTE *)(v109 + 12) & 0x60) != 0x60 )
      goto LABEL_173;
LABEL_172:
    *((_DWORD *)v54 + 1) |= 8u;
    goto LABEL_173;
  }
  v107 = *(_DWORD *)v99;
  if ( (*(_DWORD *)v99 & 0x80u) != 0 )
  {
    v108 = WdLogNewEntry5_WdAssertion(v105, v104);
    *(_QWORD *)(v108 + 24) = 5085LL;
    WdLogEvent5_WdAssertion(v108);
    v107 = *(_DWORD *)v99;
  }
  if ( (v107 & 0x100) != 0 )
    goto LABEL_172;
LABEL_173:
  if ( !v299 )
  {
    memset(v308, 0, 88LL * a2->NumAllocations);
    v110 = a4;
    v76 = v307;
    if ( a4 )
    {
      LODWORD(DriverAllocations) = v300;
      v111 = v309;
    }
    else
    {
      v294 = v99;
      v111 = v309;
      DriverAllocations = DXGDEVICE::CreateDriverAllocations(
                            this,
                            a2,
                            (const GUID *)v42,
                            v308,
                            v301,
                            v54,
                            v309,
                            v307,
                            Src,
                            v294,
                            a3,
                            v321);
      v300 = DriverAllocations;
      v110 = 0;
    }
    if ( (int)DriverAllocations < 0 )
      goto LABEL_110;
    LODWORD(v76) = DXGDEVICE::OpenAllocations(
                     this,
                     a2,
                     (struct _D3DDDI_ALLOCATIONINFO2 *)v42,
                     v301,
                     v319,
                     v111,
                     v76,
                     (D3DKMT_CREATESTANDARDALLOCATION *)Src,
                     a3,
                     v110,
                     a8,
                     v336,
                     v335);
    if ( (int)v76 < 0 )
      goto LABEL_132;
    v113 = a2->Flags;
    v114 = v308;
    if ( (*(_BYTE *)&v113 & 8) != 0 )
    {
      v308->Flags.Value |= 0x4000008u;
      v113 = a2->Flags;
    }
    if ( (*(_WORD *)&v113 & 0x100) != 0 )
    {
      v114->Flags.Value = v114->Flags.Value & 0xFEFFFFFB | 0x1000000;
    }
    else if ( (*(_WORD *)&v113 & 0x200) != 0 )
    {
      v114->Flags.Value |= 0x800004u;
    }
    if ( (*(_DWORD *)&a2->Flags & 0x8000) != 0 )
      v114->Flags.Value |= 0x800u;
    else
      v114->Flags.Value &= ~0x800u;
    LODWORD(v76) = DXGDEVICE::CreateVidMmAllocations(
                     this,
                     a2,
                     (struct _D3DDDI_ALLOCATIONINFO2 *)v42,
                     v114,
                     v301,
                     v310,
                     a4,
                     v337);
    v300 = (unsigned int)v76;
    if ( (int)v76 < 0 )
      goto LABEL_132;
    if ( v313 )
    {
      v115 = *((_QWORD *)this + 2);
      v116 = *(struct VIDMM_GLOBAL **)(v115 + 552);
      v117 = *(VIDMM_EXPORT **)(v115 + 544);
      v118 = v301;
      v119 = 0;
      if ( a2->NumAllocations )
      {
        v120 = v313;
        do
        {
          v120[v119] = VIDMM_EXPORT::VidMmQueryAllocationSizeInSystemMemory(
                         v117,
                         v116,
                         *((struct _VIDMM_MULTI_ALLOC **)v118 + 3),
                         (*(_DWORD *)&a2->Flags & 0x20) != 0);
          v118 = (struct DXGALLOCATION *)*((_QWORD *)v118 + 8);
          ++v119;
        }
        while ( v119 < a2->NumAllocations );
      }
      v91 = a3;
      v54 = v298;
      LODWORD(v76) = v300;
    }
  }
  if ( v297[0] )
  {
    if ( v54 )
    {
      if ( (*((_DWORD *)v54 + 1) & 1) != 0 )
      {
        v121 = *((_QWORD *)v54 + 7);
        if ( !*(_DWORD *)(v121 + 24) && (*(_DWORD *)(v121 + 12) & 8) == 0 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v341);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v341);
          if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
          {
            v124 = WdLogNewEntry5_WdAssertion(v123, v122);
            *(_QWORD *)(v124 + 24) = 5218LL;
            WdLogEvent5_WdAssertion(v124);
          }
          Global = DXGGLOBAL::GetGlobal(v123, v122);
          v126 = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v54 + 7), 2u);
          v129 = *((_QWORD *)v54 + 7);
          *(_DWORD *)(v129 + 24) = v126;
          if ( !*(_DWORD *)(*((_QWORD *)v54 + 7) + 24LL) )
          {
            v130 = WdLogNewEntry5_WdWarning(v129, v127, v128);
            *(_QWORD *)(v130 + 24) = this;
            *(_QWORD *)(v130 + 32) = -1073741801LL;
            WdLogEvent5_WdWarning(v130);
            LODWORD(v76) = -1073741801;
            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v341);
            v75 = 0;
            goto LABEL_112;
          }
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v341);
        }
      }
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v344, (struct _KTHREAD **)this + 23);
    v131 = *((_QWORD *)this + 7);
    if ( v131 )
    {
      *(_QWORD *)(v131 + 32) = v54;
      v131 = *((_QWORD *)this + 7);
    }
    *((_QWORD *)v54 + 5) = v131;
    *((_QWORD *)this + 7) = v54;
    DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v344);
  }
  v75 = 0;
  v132 = 0;
  if ( v54 )
    v132 = *((_DWORD *)v54 + 4);
  a2->hResource = v132;
  v133 = a2->Flags;
  if ( ((*(_BYTE *)&v133 & 2) != 0 || a4) && (*(_BYTE *)&v133 & 0x40) == 0 )
    v134 = *(_DWORD *)(*((_QWORD *)v54 + 7) + 24LL);
  else
    v134 = 0;
  a2->hGlobalShare = v134;
  if ( v91 )
  {
    v135 = 0LL;
    v304 = 0;
    for ( i = v301; ; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
    {
      v137 = a2->NumAllocations;
      if ( (unsigned int)v135 >= v137 )
        break;
      v104 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v135;
      if ( v104 >= MmUserProbeAddress )
        v104 = MmUserProbeAddress;
      *(_DWORD *)v104 = *((_DWORD *)i + 4);
      v135 = (const GUID *)(unsigned int)((_DWORD)v135 + 1);
      v304 = (unsigned int)v135;
    }
    if ( (int)v76 < 0 )
      goto LABEL_112;
  }
  else
  {
    v135 = 0LL;
    v138 = v301;
    v137 = a2->NumAllocations;
    if ( v137 )
    {
      do
      {
        v104 = 96LL * (unsigned int)v135;
        *(D3DKMT_HANDLE *)((char *)&a2->pAllocationInfo->hAllocation + v104) = *((_DWORD *)v138 + 4);
        v135 = (const GUID *)(unsigned int)((_DWORD)v135 + 1);
        v138 = (struct DXGALLOCATION *)*((_QWORD *)v138 + 8);
        v137 = a2->NumAllocations;
      }
      while ( (unsigned int)v135 < v137 );
    }
  }
  v139 = 0;
  v304 = 0;
  v140 = v301;
  v324 = v301;
  if ( v137 )
  {
    do
    {
      v104 = *(unsigned int *)(*((_QWORD *)v140 + 6) + 4LL);
      if ( (v104 & 1) != 0 )
      {
        v300 = DXGDEVICE::AddPrimaryAllocation(this, v140);
        if ( (int)v300 < 0 )
          goto LABEL_111;
      }
      else if ( (v104 & 2) != 0 )
      {
        DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, ((unsigned int)v104 >> 6) & 0xF, v140, 0, 1u);
      }
      v304 = ++v139;
      v140 = (struct DXGALLOCATION *)*((_QWORD *)v140 + 8);
      v324 = v140;
    }
    while ( v139 < a2->NumAllocations );
  }
  if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
    goto LABEL_268;
  if ( a2->pPrivateRuntimeData )
  {
    v141 = *((_QWORD *)v54 + 7);
    if ( *(_QWORD *)(v141 + 96) )
    {
      if ( *(_DWORD *)(v141 + 104) != a2->PrivateRuntimeDataSize )
      {
        LODWORD(v76) = -1073741811;
        v147 = (_QWORD *)WdLogNewEntry5_WdWarning(v141, v104, v135);
        v147[3] = this;
        v147[4] = a2->PrivateRuntimeDataSize;
        v147[5] = *(unsigned int *)(*((_QWORD *)v54 + 7) + 104LL);
        WdLogEvent5_WdWarning(v147);
        goto LABEL_112;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v54 + 7) + 96LL) = operator new[](a2->PrivateRuntimeDataSize, 0x4B677844u, PagedPool);
      v144 = *((_QWORD *)v54 + 7);
      if ( !*(_QWORD *)(v144 + 96) )
      {
        LODWORD(v76) = -1073741801;
        v145 = (_QWORD *)WdLogNewEntry5_WdWarning(v144, v142, v143);
        v145[3] = this;
        PrivateRuntimeDataSize = a2->PrivateRuntimeDataSize;
LABEL_236:
        v145[4] = PrivateRuntimeDataSize;
        v145[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v145);
        goto LABEL_112;
      }
      *(_DWORD *)(v144 + 104) = a2->PrivateRuntimeDataSize;
    }
    v148 = a3;
    if ( a3 )
    {
      v149 = a2->PrivateRuntimeDataSize;
      pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
      v151 = *(void **)(*((_QWORD *)v54 + 7) + 96LL);
      if ( &pPrivateRuntimeData[v149] < pPrivateRuntimeData
        || (unsigned __int64)&pPrivateRuntimeData[v149] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v151, pPrivateRuntimeData, v149);
    }
    else
    {
      memmove(*(void **)(*((_QWORD *)v54 + 7) + 96LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
    }
  }
  else
  {
    v148 = a3;
  }
  if ( a2->pStandardAllocation )
  {
    v152 = a2->PrivateDriverDataSize;
    if ( v152 )
    {
      v153 = *((_QWORD *)v54 + 7);
      if ( *(_QWORD *)(v153 + 112) )
      {
        if ( *(_DWORD *)(v153 + 120) != v152 )
        {
          LODWORD(v76) = -1073741811;
          v166 = (_QWORD *)WdLogNewEntry5_WdWarning(v153, v104, v135);
          v166[3] = this;
          v166[4] = a2->PrivateDriverDataSize;
          v166[5] = *(unsigned int *)(*((_QWORD *)v54 + 7) + 120LL);
          v166[6] = 5449LL;
          WdLogEvent5_WdWarning(v166);
          goto LABEL_112;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v54 + 7) + 112LL) = operator new[](v152, 0x4B677844u, PagedPool);
        v156 = *((_QWORD *)v54 + 7);
        if ( !*(_QWORD *)(v156 + 112) )
        {
          LODWORD(v76) = -1073741801;
          v145 = (_QWORD *)WdLogNewEntry5_WdWarning(v156, v154, v155);
          v145[3] = this;
          PrivateRuntimeDataSize = a2->PrivateDriverDataSize;
          goto LABEL_236;
        }
        *(_DWORD *)(v156 + 120) = a2->PrivateDriverDataSize;
      }
      v157 = Src;
      if ( !v148 )
        v157 = a2->pStandardAllocation;
      memmove(*(void **)(*((_QWORD *)v54 + 7) + 112LL), v157, a2->PrivateDriverDataSize);
    }
  }
  v158 = 0;
  v304 = 0;
  v159 = v301;
  v324 = v301;
  if ( !a2->NumAllocations )
  {
LABEL_268:
    v167 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_BYTE *)(v167 + 185) || a4 )
      goto LABEL_347;
    HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
    if ( !HostProcess )
    {
      v172 = WdLogNewEntry5_WdError(v169, v168, v171);
      *(_QWORD *)(v172 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v172);
      LODWORD(v76) = -1073741823;
      v75 = 0;
      goto LABEL_112;
    }
    v173 = 0;
    v317 = 0LL;
    v174 = DXGDEVICE::UmdManagesResidency(this) && v310 && (unsigned int)(*((_DWORD *)v310 + 4) - 1) <= 2;
    v175 = a2->Flags;
    if ( (*(_BYTE *)&v175 & 2) != 0 )
      v176 = *(const void **)(*((_QWORD *)v298 + 7) + 96LL);
    else
      v176 = 0LL;
    v177 = Src;
    if ( a3 )
    {
      v178 = v307;
      if ( (*(_DWORD *)&v175 & 0x10000) == 0 )
        goto LABEL_285;
    }
    else
    {
      v177 = a2->pStandardAllocation;
    }
    v178 = v309;
LABEL_285:
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      v179 = *((_DWORD *)v298 + 5);
    else
      v179 = 0;
    v76 = (void **)(int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v167 + 4144),
                          HostProcess,
                          *((_DWORD *)this + 84),
                          v179,
                          a2,
                          v302,
                          v178,
                          v177,
                          v176,
                          a3,
                          v174,
                          &v317);
    v183 = v317;
    if ( !v317 )
    {
      v184 = WdLogNewEntry5_WdError(v181, v180, v182);
      *(_QWORD *)(v184 + 24) = v76;
      WdLogEvent5_WdError(v184);
      v75 = 0;
      goto LABEL_112;
    }
    v185 = v317;
    v314 = (struct _EPROCESS *)v317;
    v186 = v298;
    if ( !v298 || (*((_DWORD *)v298 + 5) = *((_DWORD *)v317 + 1), v187 = a2->Flags, (*(_BYTE *)&v187 & 2) == 0) )
    {
LABEL_300:
      v313 = 0LL;
      v325 = 0LL;
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v186 )
      {
        v313 = *(unsigned __int64 **)(*((_QWORD *)v186 + 7) + 128LL);
        v325 = v313;
      }
      v190 = v301;
      v191 = 0;
      if ( a2->NumAllocations )
      {
        v192 = v302;
        do
        {
          v193 = &v185[18 * v191];
          *((_DWORD *)v190 + 24) = v193[4];
          *((_DWORD *)v190 + 25) = v193[4];
          v194 = a2->Flags;
          if ( (*(_BYTE *)&v194 & 2) != 0 && (*(_DWORD *)&v194 & 0x20020) != 0 )
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v190 + 5) + 56LL) + 192LL) = v193[7];
          else
            *((_DWORD *)v190 + 34) = v193[7];
          *((_DWORD *)v190 + 35) = v185[3];
          if ( v185[3] & 1 | ((v185[3] & 2) != 0) )
            *((_QWORD *)v190 + 14) = v192[v191].hSection;
          *(_DWORD *)(*((_QWORD *)v190 + 6) + 4LL) = v193[6];
          *(_DWORD *)(*((_QWORD *)v190 + 6) + 4LL) |= 0x20000u;
          if ( (v192[v191].Flags.Value & 1) != 0 )
          {
            IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(this);
            v185 = v314;
            if ( !IsFullWDDMDevice )
              *(_DWORD *)(*((_QWORD *)v190 + 6) + 4LL) |= 4u;
          }
          ++v191;
          v190 = (struct DXGALLOCATION *)*((_QWORD *)v190 + 8);
        }
        while ( v191 < a2->NumAllocations );
        v190 = v301;
        v183 = v317;
      }
      v75 = 0;
      if ( (int)v76 < 0 )
        goto LABEL_112;
      while ( 1 )
      {
        LODWORD(v321) = v173;
        v323 = v190;
        if ( v173 >= a2->NumAllocations )
          break;
        v196 = a2->Flags;
        if ( (*(_DWORD *)&v196 & 0x10000) != 0 )
        {
          if ( (*(_BYTE *)&v196 & 0x20) != 0 )
          {
            hSection = v302[v173].hSection;
            v198 = &v308[v173];
            LODWORD(v76) = ProcessSysMemAttributes(hSection, v185[18 * v173 + 8], v198);
            v300 = (unsigned int)v76;
            if ( (int)v76 < 0 )
              goto LABEL_132;
            v199 = *(_QWORD *)(*((_QWORD *)v190 + 5) + 56LL);
            *(_DWORD *)(v199 + 12) |= 0x200u;
            *(_QWORD *)(v199 + 184) = hSection;
            *(_DWORD *)(v199 + 196) = v198->Alignment;
            Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v198->Flags.Value;
          }
          else
          {
            v201 = &v302[v173];
            v202 = ObReferenceObjectByHandle(v201->hSection, 0x20000u, MmSectionObjectType, a3, &Object, 0LL);
            v205 = v202;
            v300 = (unsigned int)v202;
            if ( v202 < 0 )
            {
              v206 = WdLogNewEntry5_WdError((unsigned int)v202, v203, v204);
              *(_QWORD *)(v206 + 24) = v201->hSection;
              *(_QWORD *)(v206 + 32) = v205;
              WdLogEvent5_WdError(v206);
              goto LABEL_110;
            }
            v207 = &v308[v173];
            v208 = Object;
            v209 = ProcessSectionAttributes(Object, v207);
            v76 = (void **)v209;
            v300 = v209;
            if ( v209 < 0 )
            {
              v213 = (_QWORD *)WdLogNewEntry5_WdError(v211, v210, v212);
              v213[3] = this;
              v213[4] = v76;
              v213[5] = 5688LL;
              WdLogEvent5_WdError(v213);
              ObfDereferenceObject(v208);
              v75 = 0;
              goto LABEL_112;
            }
            v199 = *(_QWORD *)(*((_QWORD *)v190 + 5) + 56LL);
            *(_DWORD *)(v199 + 12) |= 0x400u;
            *(_QWORD *)(v199 + 184) = v208;
            *(_DWORD *)(v199 + 196) = v207->Alignment;
            Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v207->Flags.Value;
          }
          *(_DWORD *)(v199 + 12) ^= ((unsigned __int16)*(_DWORD *)(v199 + 12) ^ (unsigned __int16)(*(_WORD *)&Value << 9)) & 0x800;
        }
        v214 = v173;
        v215 = &v302[v173];
        if ( (v215->Flags.Value & 1) != 0 )
        {
          v333 = 3;
          v322 = 0LL;
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
            (DXGALLOCATIONREFERENCE *)&v326,
            (struct _EX_RUNDOWN_REF *)v190);
          DXGALLOCATIONREFERENCE::MoveAssign(&v322, &v326);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v326, v216);
          v217 = *((_DWORD *)this + 84);
          Current = DXGPROCESS::GetCurrent(v219, v218);
          Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4144LL),
                       *((_DWORD *)Current + 92),
                       v217,
                       0,
                       (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                       1u,
                       (const struct DXGALLOCATIONREFERENCE *)&v322,
                       0LL,
                       0LL);
          v76 = (void **)Resident;
          v300 = Resident;
          if ( Resident < 0 )
          {
            v225 = WdLogNewEntry5_WdError(v223, v222, v224);
            *(_QWORD *)(v225 + 24) = v76;
            WdLogEvent5_WdError(v225);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v322, v226);
            v183 = v317;
            v75 = 0;
            goto LABEL_346;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v322, v222);
        }
        *(_QWORD *)(*((_QWORD *)v190 + 6) + 16LL) = *((_QWORD *)v190 + 6);
        v227 = (_OWORD *)*((_QWORD *)v190 + 6);
        v228 = (char *)v314 + 72 * v214;
        *((_QWORD *)v190 + 16) = *((_QWORD *)v228 + 4);
        v227[4] = *(_OWORD *)(v228 + 40);
        v227[5] = *(_OWORD *)(v228 + 56);
        v227[6] = *(_OWORD *)(v228 + 72);
        if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v229 = v215->PrivateDriverDataSize;
          v230 = v214;
          v233 = v229;
          v231 = v309[v230];
          pPrivateDriverData = (char *)v215->pPrivateDriverData;
        }
        else
        {
          v229 = v215->PrivateDriverDataSize;
          v230 = v214;
          v231 = v307[v230];
          pPrivateDriverData = (char *)v215->pPrivateDriverData;
          if ( (unsigned __int64)&pPrivateDriverData[v229] > MmUserProbeAddress
            || &pPrivateDriverData[v229] <= pPrivateDriverData )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          v233 = v229;
        }
        memmove(pPrivateDriverData, v231, v233);
        v234 = v313;
        if ( v313 )
        {
          if ( !a3 || (v235 = v307, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
            v235 = v309;
          memmove((void *)*(v313 - 2), v235[v230], v229);
          v313 = (unsigned __int64 *)*v234;
          v325 = v313;
        }
        v75 = 0;
        v173 = (_DWORD)v321 + 1;
        v190 = (struct DXGALLOCATION *)*((_QWORD *)v190 + 8);
        v183 = v317;
        v185 = v314;
      }
      LODWORD(v76) = v300;
LABEL_346:
      operator delete[](v183);
      if ( (int)v76 < 0 )
        goto LABEL_112;
LABEL_347:
      v236 = a2->Flags;
      if ( (*(_WORD *)&v236 & 0x800) == 0 )
      {
        if ( (*(_WORD *)&v236 & 0x1000) != 0 )
        {
          v259 = v310;
          VIDMM_EXPORT::VidMmSetAllocationFlipQueueReferencesPointer(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
            *((struct _VIDMM_MULTI_ALLOC **)v301 + 3),
            *((struct VIDMM_FLIP_QUEUE_REFERENCES **)v310 + 43));
LABEL_369:
          v260 = *((_QWORD *)this + 2);
          if ( (*(_DWORD *)(*(_QWORD *)(v260 + 16) + 1916LL) & 0x40) == 0 || !v259 || (*(_DWORD *)v259 & 0x200) != 0 )
            goto LABEL_110;
          memset(&v346, 0, sizeof(v346));
          v346.Protection.Value = 1LL;
          v75 = 0;
          v263 = v301;
          if ( !a2->NumAllocations )
            goto LABEL_111;
          while ( 1 )
          {
            v264 = (*((_DWORD *)v263 + 18) >> 12) & 0x3F;
            if ( *((_DWORD *)v310 + 4) == 4 )
            {
              BaseAddress = *(unsigned int *)(*((_QWORD *)v310 + 3) + 12LL);
              if ( ((((_DWORD)BaseAddress - 1) & 0xFFFFFFFC) != 0 || (_DWORD)BaseAddress == 2)
                && DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
              {
                v264 = -1;
              }
            }
            if ( v299 )
            {
              v265 = DXGPROCESS::GetCurrent(BaseAddress, v261);
              v266 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4144LL),
                       *((_DWORD *)v265 + 92),
                       this,
                       0,
                       *((_DWORD *)v263 + 24),
                       &v346);
            }
            else
            {
              v266 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                       *(VIDMM_EXPORT **)(v260 + 544),
                       *(struct VIDMM_GLOBAL **)(v260 + 552),
                       0LL,
                       *((struct _VIDMM_MULTI_ALLOC **)v263 + 3),
                       &v346,
                       0,
                       v264);
            }
            v300 = (unsigned int)v266;
            if ( v266 < 0 )
              break;
            v269 = DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL));
            BaseAddress = v346.BaseAddress;
            if ( v269 )
              BaseAddress = v346.VirtualAddress;
            v346.BaseAddress = BaseAddress;
            v346.VirtualAddress = 0LL;
            ++v75;
            v263 = (struct DXGALLOCATION *)*((_QWORD *)v263 + 8);
            if ( v75 >= a2->NumAllocations )
              goto LABEL_110;
          }
          v86 = (_QWORD *)WdLogNewEntry5_WdWarning((unsigned int)v266, v267, v268);
          LODWORD(v76) = v300;
          v86[3] = (int)v300;
          goto LABEL_131;
        }
LABEL_368:
        v259 = v310;
        goto LABEL_369;
      }
      memset(&v332, 0, sizeof(v332));
      v332.hAllocation = *(HANDLE *)(*((_QWORD *)v301 + 6) + 16LL);
      v237 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)this + 2), &v332, v135);
      v76 = (void **)v237;
      v300 = v237;
      if ( v237 < 0 )
      {
        v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v239, v238, v240);
        v86[3] = v76;
        v86[4] = this;
        v86[5] = *((unsigned int *)v301 + 4);
        v86[6] = v301;
        goto LABEL_131;
      }
      if ( v332.Format == D3DDDIFMT_UNKNOWN && v332.Height != 1 )
      {
        v241 = (_QWORD *)WdLogNewEntry5_WdWarning(v239, v238, v240);
        v241[3] = -1073741811LL;
        v241[4] = this;
        v241[5] = v332.Height;
        WdLogEvent5_WdWarning(v241);
        LODWORD(v76) = -1073741811;
        v75 = 0;
        goto LABEL_112;
      }
      v242 = v301;
      v243 = *(_QWORD *)(*((_QWORD *)v301 + 5) + 56LL);
      if ( (*(_DWORD *)(v243 + 12) & 0x20) == 0 )
      {
        v244 = WdLogNewEntry5_WdAssertion(v243, v301);
        *(_QWORD *)(v244 + 24) = 5815LL;
        WdLogEvent5_WdAssertion(v244);
        v242 = v301;
      }
      v245 = *(_QWORD *)(*((_QWORD *)v242 + 5) + 56LL);
      *(_DWORD *)(v245 + 200) = v332.Width;
      *(_DWORD *)(v245 + 204) = v332.Height;
      *(_DWORD *)(v245 + 208) = v332.Format;
      v246 = a2->Flags;
      if ( (*((_BYTE *)this + 1749) & 1) == 0 )
      {
        if ( (*(_BYTE *)&v246 & 0x20) == 0 )
        {
          *(_QWORD *)(v245 + 184) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                                      *((struct _VIDMM_MULTI_ALLOC **)v301 + 3));
          *(_DWORD *)(v245 + 12) |= 0x400u;
        }
        *(_QWORD *)(v245 + 216) = VIDMM_EXPORT::VidMmGetAllocationFlipQueueReferencesPointer(
                                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                                    *((struct _VIDMM_MULTI_ALLOC **)v301 + 3));
        goto LABEL_366;
      }
      if ( (*(_DWORD *)&v246 & 0x20000) != 0 )
      {
        v247 = v302;
        v75 = 0;
        v248 = ObReferenceObjectByHandle(v302->hSection, 0x20000u, MmSectionObjectType, a3, &v339, 0LL);
        v251 = v248;
        v252 = v339;
        *(_QWORD *)(v245 + 184) = v339;
        LODWORD(v76) = v248;
        v300 = (unsigned int)v248;
        if ( v248 < 0 )
        {
          v253 = WdLogNewEntry5_WdError(v252, v249, v250);
          *(_QWORD *)(v253 + 24) = v247->hSection;
          *(_QWORD *)(v253 + 32) = v251;
          WdLogEvent5_WdError(v253);
          goto LABEL_112;
        }
      }
      else
      {
        if ( (*(_BYTE *)&v246 & 0x20) != 0 )
          goto LABEL_366;
        v75 = 0;
        v327 = 0LL;
        v327 = *((_QWORD *)v301 + 16);
        LODWORD(v76) = MmCreateSection(
                         v245 + 184,
                         0LL,
                         0LL,
                         &v327,
                         4,
                         ~(*(_DWORD *)(*((_QWORD *)v301 + 6) + 4LL) << 11) & 0x40000000 | 0x8000000u,
                         0LL,
                         0LL);
        v300 = (unsigned int)v76;
        if ( (int)v76 < 0 )
        {
          v257 = WdLogNewEntry5_WdError(v255, v254, v256);
          *(_QWORD *)(v257 + 24) = 5873LL;
          WdLogEvent5_WdError(v257);
          goto LABEL_112;
        }
      }
      *(_DWORD *)(v245 + 12) |= 0x400u;
LABEL_366:
      v258 = v312;
      *(_DWORD *)(v245 + 224) = v312;
      if ( v258 != -1 )
      {
        *(_DWORD *)(v245 + 12) |= 0x40u;
        *(_DWORD *)(v245 + 12) ^= ((unsigned __int8)*(_DWORD *)(v245 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_368;
    }
    if ( (*(_BYTE *)&v187 & 0x40) != 0 )
    {
      if ( !*((_DWORD *)v183 + 2) )
      {
LABEL_298:
        LODWORD(v189) = *((_DWORD *)v183 + 2);
        goto LABEL_299;
      }
      v188 = WdLogNewEntry5_WdAssertion(v181, v180);
      *(_QWORD *)(v188 + 24) = 5563LL;
    }
    else
    {
      v189 = *((unsigned int *)v183 + 2);
      if ( (_DWORD)v189 )
      {
LABEL_299:
        *(_DWORD *)(*((_QWORD *)v186 + 7) + 28LL) = v189;
        v183 = v317;
        v185 = v314;
        goto LABEL_300;
      }
      v188 = WdLogNewEntry5_WdAssertion(v189, v180);
      *(_QWORD *)(v188 + 24) = 5567LL;
    }
    WdLogEvent5_WdAssertion(v188);
    goto LABEL_298;
  }
  v160 = v302;
  while ( 1 )
  {
    v161 = &v160[v158];
    if ( v161->pPrivateDriverData )
      break;
LABEL_267:
    v304 = ++v158;
    v159 = (struct DXGALLOCATION *)*((_QWORD *)v159 + 8);
    v324 = v159;
    if ( v158 >= a2->NumAllocations )
      goto LABEL_268;
  }
  *(_QWORD *)(*((_QWORD *)v159 + 6) + 32LL) = operator new[](v161->PrivateDriverDataSize, 0x4B677844u, PagedPool);
  v164 = *(void **)(*((_QWORD *)v159 + 6) + 32LL);
  if ( v164 )
  {
    if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
      v165 = v161->pPrivateDriverData;
    else
      v165 = v307[v158];
    memmove(v164, v165, v161->PrivateDriverDataSize);
    *(_DWORD *)(*((_QWORD *)v159 + 6) + 40LL) = v161->PrivateDriverDataSize;
    goto LABEL_267;
  }
  v300 = 3221225495LL;
  v74 = (_QWORD *)WdLogNewEntry5_WdWarning(3221225495LL, v162, v163);
  v74[3] = this;
  v74[4] = v158 + 1;
  v74[5] = v160[v158].PrivateDriverDataSize;
  v74[6] = -1073741801LL;
LABEL_109:
  WdLogEvent5_WdWarning(v74);
LABEL_110:
  v75 = 0;
LABEL_111:
  LODWORD(v76) = v300;
LABEL_112:
  v54 = v298;
LABEL_113:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v342);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v343);
  if ( (int)v76 >= 0 )
  {
    if ( v297[0] )
      DXGPROCESS::CommitResourceHandleSafe(*((DXGPROCESS **)this + 5), v54);
    goto LABEL_434;
  }
  v270 = v301;
  if ( v301 )
  {
    v271 = 0;
    if ( a2->NumAllocations )
    {
      do
      {
        v272 = *((_QWORD *)v270 + 6);
        if ( *(_QWORD *)(v272 + 8) && !a4 )
        {
          if ( (v273 = *(_DWORD *)(v272 + 4), (v273 & 1) != 0) && !*((_DWORD *)this + 82) || (v273 & 2) != 0 )
          {
            if ( (v273 & 0x10) != 0 )
            {
              v274 = WdLogNewEntry5_WdAssertion(v78, v77);
              *(_QWORD *)(v274 + 24) = 6002LL;
              WdLogEvent5_WdAssertion(v274);
              v272 = *((_QWORD *)v270 + 6);
            }
            VIDMM_EXPORT::VidMmInvalidateAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
              *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v272 + 8));
            *(_DWORD *)(*((_QWORD *)v270 + 6) + 4LL) |= 0x10u;
          }
        }
        ++v271;
        v270 = (struct DXGALLOCATION *)*((_QWORD *)v270 + 8);
      }
      while ( v271 < a2->NumAllocations );
      v270 = v301;
      v54 = v298;
    }
  }
  if ( v297[0] )
  {
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v328, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v320, v328);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v328);
    DXGDEVICE::RemoveResourceFromDeviceList(this, v54);
    goto LABEL_432;
  }
  if ( v270 )
  {
    if ( v303 )
    {
      DXGDEVICE::RemoveAllocationsWithoutDestroy(this, v54, v270, a2->NumAllocations);
      v270 = v301;
    }
    if ( (!v54 || *((_QWORD *)v54 + 7)) && v270 )
    {
      do
      {
        v275 = v270;
        v276 = (_QWORD *)((char *)v270 + 64);
        v270 = (struct DXGALLOCATION *)*((_QWORD *)v270 + 8);
        *((_QWORD *)v275 + 7) = 0LL;
        *v276 = 0LL;
        if ( v54 )
        {
          v277 = *((_QWORD *)v54 + 7);
          if ( v277 )
          {
            if ( *(_QWORD *)(*((_QWORD *)v275 + 6) + 48LL) )
            {
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v277 + 32));
              --*(_DWORD *)(*((_QWORD *)v54 + 7) + 124LL);
              v278 = *((_QWORD *)v275 + 6) + 48LL;
              v279 = *(_QWORD *)v278;
              v280 = *(_QWORD **)(*((_QWORD *)v275 + 6) + 56LL);
              if ( *(_QWORD *)(*(_QWORD *)v278 + 8LL) != v278 || *v280 != v278 )
                __fastfail(3u);
              *v280 = v279;
              *(_QWORD *)(v279 + 8) = v280;
              *(_QWORD *)(*((_QWORD *)v275 + 6) + 48LL) = 0LL;
              v281 = *((_QWORD *)v54 + 7) + 32LL;
              *(_QWORD *)(v281 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v281, 0LL);
              KeLeaveCriticalRegion();
            }
          }
        }
        DXGDEVICE::DestroyAllocations(this, 0LL, 0, v275, 0LL, 0);
      }
      while ( v270 );
      v270 = v301;
    }
    if ( v54 )
    {
      v282 = *((_QWORD *)v54 + 7);
      if ( !v282 )
      {
        DXGDEVICE::DestroyAllocations(this, v54, 0, v270, 0LL, 0);
        goto LABEL_434;
      }
      v283 = 0;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v282 + 32));
      v284 = *((_DWORD *)v54 + 1);
      if ( (v284 & 0x10) == 0 )
      {
        *((_DWORD *)v54 + 1) = v284 | 0x10;
        v283 = 1;
      }
      v285 = *((_QWORD *)v54 + 7) + 32LL;
      *(_QWORD *)(v285 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v285, 0LL);
      KeLeaveCriticalRegion();
      if ( v283 )
      {
        DXGDEVICE::RemoveResourceFromDeviceList(this, v54);
        v288 = DXGPROCESS::GetCurrent(v287, v286);
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
          (DXGHANDLETABLELOCKEXCLUSIVE *)v345,
          (struct _KTHREAD **)v288);
        DXGPROCESS::GetResourceUnsafe((__int64)v288, (DXGRESOURCEREFERENCE *)&v330, *((_DWORD *)v54 + 4));
        if ( v330 )
        {
          v289 = *(_DWORD *)(v330 + 16);
          v290 = (v289 >> 6) & 0xFFFFFF;
          if ( v290 < *((_DWORD *)v288 + 56) )
          {
            v291 = *((_QWORD *)v288 + 26);
            v292 = *(_DWORD *)(v291 + 16LL * v290 + 8);
            if ( ((v289 >> 25) & 0x60) == (v292 & 0x60) && (v292 & 0x2000) == 0 && (v292 & 0x1F) != 0 )
              *(_DWORD *)(v291 + 16LL * ((v289 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v329, 0LL);
          DXGRESOURCEREFERENCE::MoveAssign(&v320, v329);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v329);
        }
        else
        {
          v283 = 0;
        }
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v330);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v345);
        if ( v283 )
LABEL_432:
          DXGDEVICE::DestroyResource(this, (struct DXGALLOCATION **)v54, 0LL, 0);
      }
    }
  }
LABEL_434:
  v293 = v309;
  if ( a2->NumAllocations )
  {
    do
      operator delete[](v293[v75++]);
    while ( v75 < a2->NumAllocations );
  }
  operator delete[](Src);
  if ( a2->NumAllocations > 5 )
  {
    operator delete[](v302);
    operator delete[](v308);
    operator delete[](v319);
    operator delete[](v293);
    operator delete[](v307);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v343);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v342);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v320);
  if ( Entry )
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v340 + 1344), Entry);
  return (unsigned int)v76;
}
