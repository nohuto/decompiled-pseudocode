/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0013B08 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001A0FC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002100C (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0021020 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00212B0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002D4FC (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C002D580 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEC28 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C00BB48C (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00C9978 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C01151A0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0115D80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01309A0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01438D4 (DxgkPowerOnOffMonitor.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C01BD57C (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C01BD5EC (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C01BEDA4 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01C646C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C01D88D8 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C01DCD24 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C01E88C8 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C01F4430 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C01FE980 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0206C1C (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0208860 (DxgkpIsDrtEnabled.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AFA0 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C026E068 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C027A488 (-DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     MonitorDRTTest @ 0x1C028FF58 (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(struct DXGADAPTER *this, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // edi
  struct DXGPROCESS *Current; // rbx
  char IsDrtEnabled; // al
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct DXGPROCESS *v32; // rax
  __int64 v33; // rcx
  struct DXGPROCESS *v34; // rbx
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  DXGDEVICE *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  struct _KTHREAD **v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  struct DXGCONTEXT *v52; // r13
  __int64 v53; // rax
  struct DXGDEVICE *v54; // rbx
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // rax
  UINT v58; // ebx
  __int64 v59; // rax
  struct _D3DDDI_ALLOCATIONLIST *v60; // r15
  unsigned int v61; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v63; // rbx
  struct DXGDEVICE *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  struct _KTHREAD **v69; // rax
  __int64 v70; // rcx
  struct _KTHREAD **v71; // r15
  __int64 v72; // rcx
  struct DXGDEVICE *v73; // r13
  __int64 v74; // rax
  ADAPTER_RENDER **v75; // rcx
  int v76; // ebx
  __int64 v77; // r12
  UINT v78; // edi
  UINT v79; // ebx
  UINT HostProcess; // eax
  __int64 v81; // rcx
  __int64 v82; // r9
  int v83; // eax
  unsigned int v84; // r8d
  struct DXGALLOCATION **AllocationSafe; // rax
  _QWORD *v86; // r8
  __int64 v87; // rax
  struct DXGALLOCATION **v88; // rcx
  struct DXGALLOCATION **v89; // rax
  struct DXGALLOCATION *v90; // rax
  struct DXGRESOURCE **ResourceSafe; // rax
  unsigned int v92; // r8d
  int v93; // edx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // r8
  char *v97; // r14
  __int64 v98; // r9
  __int64 v99; // rdx
  char *v100; // rax
  _OWORD *v101; // rcx
  __int64 v102; // r8
  struct _KTHREAD **v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rcx
  struct DXGDEVICE *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  int v111; // ecx
  struct DXGPROCESS *v112; // rax
  __int64 v113; // rcx
  struct CCD_BTL *v114; // rax
  struct _KTHREAD **v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rax
  NTSTATUS v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rax
  struct _KTHREAD **v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r12
  __int64 v125; // rcx
  struct DXGDEVICE *v126; // r15
  __int64 v127; // rax
  __int64 v128; // r9
  struct DXGALLOCATION **v129; // rax
  __int64 v130; // rcx
  struct _EX_RUNDOWN_REF *v131; // rbx
  _QWORD *v132; // rax
  __int64 v133; // r9
  __int64 v134; // rcx
  bool v135; // bl
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  IRP *v137; // rax
  PVOID v138; // rcx
  int v139; // ecx
  struct DXGADAPTER *v140; // rcx
  int v141; // ecx
  int v142; // ecx
  int v143; // r8d
  const struct _LUID *v144; // rdx
  struct DXGPROCESS *v145; // rax
  void *v146; // rbx
  int v147; // edx
  int IsTargetInClientVidPnTopology; // ebx
  PKEVENT v149; // [rsp+38h] [rbp-8B0h]
  int v150; // [rsp+50h] [rbp-898h]
  unsigned __int8 v151; // [rsp+54h] [rbp-894h] BYREF
  struct _LUID v152; // [rsp+58h] [rbp-890h] BYREF
  __int64 v153; // [rsp+60h] [rbp-888h] BYREF
  struct DXGDEVICE *v154; // [rsp+68h] [rbp-880h] BYREF
  struct _EX_RUNDOWN_REF *v155; // [rsp+70h] [rbp-878h] BYREF
  struct DXGDEVICE *v156; // [rsp+78h] [rbp-870h] BYREF
  __int64 v157; // [rsp+80h] [rbp-868h] BYREF
  _QWORD v158[2]; // [rsp+88h] [rbp-860h] BYREF
  unsigned int v159; // [rsp+98h] [rbp-850h] BYREF
  int v160; // [rsp+9Ch] [rbp-84Ch]
  struct DXGCONTEXT *v161; // [rsp+A0h] [rbp-848h] BYREF
  DXGDEVICE *v162; // [rsp+A8h] [rbp-840h] BYREF
  __int64 v163; // [rsp+B0h] [rbp-838h] BYREF
  char v164[8]; // [rsp+B8h] [rbp-830h] BYREF
  __int64 v165; // [rsp+C0h] [rbp-828h]
  char v166; // [rsp+C8h] [rbp-820h]
  struct _D3DDDI_ESCAPEFLAGS v167[2]; // [rsp+D0h] [rbp-818h]
  struct DXGDEVICE *v168; // [rsp+D8h] [rbp-810h] BYREF
  int v169; // [rsp+E0h] [rbp-808h] BYREF
  char v170[8]; // [rsp+E8h] [rbp-800h] BYREF
  struct DXGALLOCATION *v171; // [rsp+F0h] [rbp-7F8h] BYREF
  struct _EX_RUNDOWN_REF *v172; // [rsp+F8h] [rbp-7F0h] BYREF
  struct DXGALLOCATION *v173; // [rsp+100h] [rbp-7E8h] BYREF
  _QWORD v174[2]; // [rsp+108h] [rbp-7E0h] BYREF
  char v175[8]; // [rsp+118h] [rbp-7D0h] BYREF
  struct DXGADAPTER *v176; // [rsp+120h] [rbp-7C8h]
  char v177; // [rsp+128h] [rbp-7C0h]
  struct DXGDEVICE *v178; // [rsp+130h] [rbp-7B8h] BYREF
  struct DXGDEVICE *v179; // [rsp+138h] [rbp-7B0h] BYREF
  struct DXGDEVICE *v180; // [rsp+140h] [rbp-7A8h] BYREF
  char v181[8]; // [rsp+148h] [rbp-7A0h] BYREF
  struct DXGADAPTER *v182; // [rsp+150h] [rbp-798h]
  char v183; // [rsp+158h] [rbp-790h]
  union _LARGE_INTEGER v184; // [rsp+160h] [rbp-788h] BYREF
  _BYTE v185[16]; // [rsp+168h] [rbp-780h] BYREF
  _QWORD v186[2]; // [rsp+178h] [rbp-770h] BYREF
  char v187[8]; // [rsp+188h] [rbp-760h] BYREF
  __int64 v188; // [rsp+190h] [rbp-758h]
  char v189; // [rsp+198h] [rbp-750h]
  int v190; // [rsp+1A0h] [rbp-748h]
  unsigned int v191; // [rsp+1A4h] [rbp-744h] BYREF
  struct _EX_RUNDOWN_REF *v192; // [rsp+1A8h] [rbp-740h] BYREF
  struct _EX_RUNDOWN_REF *v193; // [rsp+1B0h] [rbp-738h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+1B8h] [rbp-730h] BYREF
  PVOID v195; // [rsp+1C0h] [rbp-728h] BYREF
  struct _EX_RUNDOWN_REF *v196; // [rsp+1C8h] [rbp-720h] BYREF
  PVOID Object; // [rsp+1D0h] [rbp-718h] BYREF
  struct _EX_RUNDOWN_REF *v198; // [rsp+1D8h] [rbp-710h] BYREF
  char v199[8]; // [rsp+1E0h] [rbp-708h] BYREF
  struct DXGADAPTER *v200; // [rsp+1E8h] [rbp-700h]
  char v201; // [rsp+1F0h] [rbp-6F8h]
  _QWORD v202[2]; // [rsp+1F8h] [rbp-6F0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+208h] [rbp-6E0h] BYREF
  _BYTE v204[24]; // [rsp+218h] [rbp-6D0h] BYREF
  struct _KEVENT Event; // [rsp+230h] [rbp-6B8h] BYREF
  unsigned __int8 v206[16]; // [rsp+250h] [rbp-698h] BYREF
  __int128 v207; // [rsp+260h] [rbp-688h]
  __int128 v208; // [rsp+270h] [rbp-678h]
  __int128 v209; // [rsp+280h] [rbp-668h]
  __int128 v210; // [rsp+290h] [rbp-658h]
  __int64 v211; // [rsp+2A0h] [rbp-648h]
  _BYTE v212[96]; // [rsp+2B0h] [rbp-638h] BYREF
  _BYTE v213[96]; // [rsp+310h] [rbp-5D8h] BYREF
  PERESOURCE *v214[12]; // [rsp+370h] [rbp-578h] BYREF
  PVOID P; // [rsp+3D0h] [rbp-518h] BYREF
  _BYTE v216[256]; // [rsp+3D8h] [rbp-510h] BYREF
  int v217; // [rsp+4D8h] [rbp-410h]
  struct _D3DKMT_RENDER v218; // [rsp+4E0h] [rbp-408h] BYREF
  _QWORD v219[54]; // [rsp+650h] [rbp-298h] BYREF
  __int64 v220[10]; // [rsp+800h] [rbp-E8h] BYREF
  _QWORD v221[10]; // [rsp+850h] [rbp-98h] BYREF

  memset(v220, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v220[1]);
  v220[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v220[3]) = 45;
  LOBYTE(v220[6]) = -1;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v150 = 0;
  if ( !*((_DWORD *)a2 + 2) )
  {
    if ( *((_DWORD *)a2 + 1) < 0x10u )
    {
      v15 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v15 + 24) = *((unsigned int *)a2 + 1);
      WdLogEvent5_WdWarning(v15);
      LODWORD(v10) = -1073741789;
    }
    else
    {
      v11 = *((_DWORD *)a2 + 3);
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( !v11 || (IsDrtEnabled = DxgkpIsDrtEnabled(), v14 = 64, !IsDrtEnabled) )
          v14 = 0;
        *((_BYTE *)Current + 323) = v14 | *((_BYTE *)Current + 323) & 0xBF;
      }
      LODWORD(v10) = 0;
    }
    return (unsigned int)v10;
  }
  if ( !g_OSTestSigningEnabled && !(unsigned __int8)DxgkpIsDrtEnabled() )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = 1155LL;
LABEL_206:
    WdLogEvent5_WdWarning(v19);
    goto LABEL_207;
  }
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 8) != 0 )
  {
    v23 = *((_DWORD *)a2 + 2);
    if ( v23 != 16 && v23 != 29 )
    {
      v24 = WdLogNewEntry5_WdEvent(v21, v20);
      *(_QWORD *)(v24 + 24) = 172LL;
      WdLogEvent5_WdEvent(v24);
      return 3221225485LL;
    }
  }
  v26 = *((unsigned int *)a2 + 2);
  if ( (int)v26 <= 18 )
  {
    if ( (_DWORD)v26 == 18 )
    {
      if ( *((_DWORD *)a2 + 1) < 0x10u )
      {
        v19 = WdLogNewEntry5_WdWarning(v26, v20, v22);
        *(_QWORD *)(v19 + 24) = 795LL;
        goto LABEL_206;
      }
      v103 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      if ( !v103 )
      {
        v35 = WdLogNewEntry5_WdError(v104);
        *(_QWORD *)(v35 + 24) = 803LL;
        goto LABEL_32;
      }
      v179 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v163, *((_DWORD *)a2 + 3), v103, &v179);
      v106 = v179;
      if ( v179 )
      {
        *((_BYTE *)v179 + 1751) = 1;
        *(_BYTE *)(*((_QWORD *)v106 + 5) + 289LL) = 1;
      }
      else
      {
        v107 = WdLogNewEntry5_WdError(v105);
        *(_QWORD *)(v107 + 24) = *((unsigned int *)a2 + 3);
        WdLogEvent5_WdError(v107);
        LODWORD(v10) = -1073741811;
        v150 = -1073741811;
      }
      if ( !v163 )
        return (unsigned int)v10;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v163 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_121;
      v75 = (ADAPTER_RENDER **)v163;
      goto LABEL_120;
    }
    if ( (int)v26 <= 10 )
    {
      if ( (_DWORD)v26 == 10 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
        {
          v19 = WdLogNewEntry5_WdWarning(v26, v20, v22);
          *(_QWORD *)(v19 + 24) = 280LL;
          goto LABEL_206;
        }
        *((_DWORD *)a2 + 3) = *((_DWORD *)this + 676);
        return (unsigned int)v10;
      }
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( !v29 )
          {
            if ( DXGADAPTER::IsCoreResourceSharedOwner(a3[3]) )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            LODWORD(v10) = COREADAPTERACCESS::AcquireExclusive(a3, 1LL);
            if ( (int)v10 >= 0 )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            return (unsigned int)v10;
          }
          v30 = (unsigned int)(v29 - 1);
          if ( (_DWORD)v30 )
          {
            v31 = (unsigned int)(v30 - 1);
            if ( (_DWORD)v31 )
            {
              if ( (_DWORD)v31 == 1 )
              {
                if ( *((_DWORD *)a2 + 1) < 0x114u )
                {
                  v19 = WdLogNewEntry5_WdWarning(v31, v20, v22);
                  *(_QWORD *)(v19 + 24) = 337LL;
                  goto LABEL_206;
                }
                v32 = DXGPROCESS::GetCurrent();
                v34 = v32;
                if ( !v32 )
                {
                  v35 = WdLogNewEntry5_WdError(v33);
                  *(_QWORD *)(v35 + 24) = 345LL;
LABEL_32:
                  WdLogEvent5_WdError(v35);
LABEL_207:
                  LODWORD(v10) = -1073741811;
                  return (unsigned int)v10;
                }
                DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v170, v32);
                v162 = 0LL;
                v36 = *((_DWORD *)a2 + 3);
                if ( v36 )
                {
                  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v168, v36, (struct _KTHREAD **)v34, &v162);
                  if ( !v162 )
                  {
                    v38 = WdLogNewEntry5_WdError(v37);
                    *(_QWORD *)(v38 + 24) = *((unsigned int *)a2 + 3);
                    WdLogEvent5_WdError(v38);
                    LODWORD(v10) = -1073741811;
                    if ( v168 )
                    {
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v168 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v168 + 2), v168);
                      LODWORD(v10) = -1073741811;
                    }
                    goto LABEL_39;
                  }
                  if ( v168 )
                  {
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v168 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v168 + 2), v168);
                    LODWORD(v10) = 0;
                  }
                }
                if ( v162
                  || ((v39 = *((_QWORD *)v34 + 34)) == 0 ? (v40 = 0LL) : (v40 = (DXGDEVICE *)(v39 - 24)),
                      (v162 = v40) != 0LL) )
                {
                  DXGDEVICE::GetContexts(v162, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
                  *((_DWORD *)a2 + 3) = *(_DWORD *)(v42 + 332);
                }
                else
                {
                  v41 = WdLogNewEntry5_WdError(0LL);
                  *(_QWORD *)(v41 + 24) = 372LL;
                  WdLogEvent5_WdError(v41);
                  LODWORD(v10) = -1073741811;
                }
LABEL_39:
                DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v170);
                return (unsigned int)v10;
              }
LABEL_271:
              v19 = WdLogNewEntry5_WdWarning(v31, v20, v22);
              *(_QWORD *)(v19 + 24) = *((int *)a2 + 2);
              goto LABEL_206;
            }
            if ( *((_DWORD *)a2 + 1) < 0x14u )
            {
              v19 = WdLogNewEntry5_WdWarning(v31, v20, v22);
              *(_QWORD *)(v19 + 24) = 263LL;
              goto LABEL_206;
            }
            g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
          }
          else
          {
            if ( *((_DWORD *)a2 + 1) < 0x10u )
            {
              v19 = WdLogNewEntry5_WdWarning(v30, v20, v22);
              *(_QWORD *)(v19 + 24) = 240LL;
              goto LABEL_206;
            }
            v43 = *((unsigned int *)a2 + 3);
            if ( (unsigned int)(v43 - 1) > 0x3FF )
            {
              v19 = WdLogNewEntry5_WdWarning(v43, v20, v22);
              *(_QWORD *)(v19 + 24) = 249LL;
              goto LABEL_206;
            }
            g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
          }
          return (unsigned int)v10;
        }
        v44 = DmmDRTTest(this, a2);
      }
      else
      {
        v44 = MonitorDRTTest(this, a2, (__int64)v220);
      }
      goto LABEL_288;
    }
    v45 = (unsigned int)(v26 - 11);
    if ( !(_DWORD)v45 )
    {
      v96 = *((unsigned int *)this + 676);
      if ( (_DWORD)v96 )
      {
        v45 = (unsigned int)(v96 - 1);
        v20 = 344 * v45 + 360;
        if ( *((unsigned int *)a2 + 1) >= v20 )
        {
          v97 = (char *)a2 + 352;
          v98 = (unsigned int)v96;
          do
          {
            v99 = *((_QWORD *)this + 320);
            v100 = v97 - 336;
            v101 = (_OWORD *)(v9 + v99 + 8);
            v102 = 2LL;
            do
            {
              *(_OWORD *)v100 = *v101;
              *((_OWORD *)v100 + 1) = v101[1];
              *((_OWORD *)v100 + 2) = v101[2];
              *((_OWORD *)v100 + 3) = v101[3];
              *((_OWORD *)v100 + 4) = v101[4];
              *((_OWORD *)v100 + 5) = v101[5];
              *((_OWORD *)v100 + 6) = v101[6];
              v100 += 128;
              *((_OWORD *)v100 - 1) = v101[7];
              v101 += 8;
              --v102;
            }
            while ( v102 );
            *(_OWORD *)v100 = *v101;
            *((_OWORD *)v100 + 1) = v101[1];
            *((_OWORD *)v100 + 2) = v101[2];
            *((_OWORD *)v100 + 3) = v101[3];
            *((_OWORD *)v100 + 4) = v101[4];
            *(_DWORD *)v97 = *(_DWORD *)(v9 + v99 + 344);
            v97[4] = *(_BYTE *)(v9 + v99 + 356);
            v9 += 520LL;
            v97 += 344;
            --v98;
          }
          while ( v98 );
          return (unsigned int)v10;
        }
      }
      v19 = WdLogNewEntry5_WdWarning(v45, v20, v96);
      *(_QWORD *)(v19 + 24) = 299LL;
      goto LABEL_206;
    }
    v46 = (unsigned int)(v45 - 1);
    if ( !(_DWORD)v46 )
    {
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        v95 = *((_QWORD *)this + 316);
        if ( v95 )
          *(_BYTE *)(v95 + 776) = *((_BYTE *)a2 + 12);
        return (unsigned int)v10;
      }
      v19 = WdLogNewEntry5_WdWarning(v46, v20, v22);
      *(_QWORD *)(v19 + 24) = 318LL;
      goto LABEL_206;
    }
    v47 = (unsigned int)(v46 - 2);
    if ( (_DWORD)v47 )
    {
      v48 = v47 - 1;
      if ( !v48 )
      {
        if ( *((_DWORD *)a2 + 1) < 0xA8u )
          return 3221225485LL;
        v92 = *((_DWORD *)a2 + 4);
        if ( v92 >= *((_DWORD *)this + 676) )
          return 3221225485LL;
        v93 = *((_DWORD *)a2 + 3);
        if ( v93 )
        {
          if ( v93 <= 0 )
            return 3221225485LL;
          if ( v93 <= 3 )
          {
            DXGADAPTER::ForcePState((__int64)this, v93, v92, *((_DWORD *)a2 + 6));
          }
          else if ( v93 == 4 )
          {
            *((_DWORD *)a2 + 7) = *((_DWORD *)this + 970);
          }
          else
          {
            if ( v93 != 5 )
              return 3221225485LL;
            DXGADAPTER::QueryPStateEngineData(
              this,
              *((_DWORD *)a2 + 5),
              (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
              (unsigned int *)a2 + 4);
          }
        }
        else
        {
          DXGADAPTER::ForcePStateAcrossNodes(this, *((_DWORD *)a2 + 6));
        }
        return (unsigned int)v10;
      }
      v31 = (unsigned int)(v48 - 1);
      if ( (_DWORD)v31 )
      {
        if ( (_DWORD)v31 != 1 )
          goto LABEL_271;
        if ( *((_DWORD *)a2 + 1) < 0xA8u )
        {
          v19 = WdLogNewEntry5_WdWarning(v31, v20, v22);
          *(_QWORD *)(v19 + 24) = 681LL;
          goto LABEL_206;
        }
        v49 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
        if ( !v49 )
        {
          v35 = WdLogNewEntry5_WdError(v50);
          *(_QWORD *)(v35 + 24) = 689LL;
          goto LABEL_32;
        }
        v161 = 0LL;
        DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v185, *((_DWORD *)a2 + 3), v49, &v161, 0);
        v52 = v161;
        if ( !v161 )
        {
          v53 = WdLogNewEntry5_WdError(v51);
          *(_QWORD *)(v53 + 24) = 699LL;
          WdLogEvent5_WdError(v53);
          LODWORD(v10) = -1073741811;
LABEL_80:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v185);
          return (unsigned int)v10;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
        v54 = (struct DXGDEVICE *)*((_QWORD *)v52 + 2);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v174, v54);
        DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v52 + 440));
        v176 = this;
        v177 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v213, (__int64)v54, 0, v55, 0);
        LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v213);
        if ( (int)v10 < 0 )
        {
          *((_QWORD *)v52 + 56) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v52 + 440, 0LL);
          KeLeaveCriticalRegion();
LABEL_83:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v213);
          if ( v177 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
          if ( v174[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v174);
          goto LABEL_80;
        }
        if ( *((_DWORD *)a2 + 8) > 0x10u )
        {
          v57 = WdLogNewEntry5_WdError(v56);
          *(_QWORD *)(v57 + 24) = 720LL;
          WdLogEvent5_WdError(v57);
          LODWORD(v10) = -1073741811;
        }
        v58 = *((_DWORD *)a2 + 4);
        if ( !v58 )
        {
          v59 = WdLogNewEntry5_WdError(v56);
          *(_QWORD *)(v59 + 24) = 725LL;
          WdLogEvent5_WdError(v59);
          LODWORD(v10) = -1073741811;
          v58 = *((_DWORD *)a2 + 4);
        }
        memset(&v218, 0, sizeof(v218));
        v218.hDevice = *((_DWORD *)a2 + 3);
        v218.AllocationCount = *((_DWORD *)a2 + 8);
        v218.CommandLength = v58;
        v218.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
        v60 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
        v218.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
        *(_DWORD *)&v218.Flags |= 0x20u;
        IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v52 + 2) + 16LL) + 16LL));
        v151 = IsDxgmms2;
        v159 = v61;
        P = 0LL;
        v217 = 0;
        v63 = 0LL;
        v156 = 0LL;
        if ( IsDxgmms2 )
        {
          v64 = (struct DXGDEVICE *)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, v61);
          v63 = (struct DXGALLOCATION **)v64;
          v156 = v64;
          if ( !v64 )
          {
            v68 = WdLogNewEntry5_WdWarning(v66, v65, v67);
            *(_QWORD *)(v68 + 24) = 754LL;
            WdLogEvent5_WdWarning(v68);
            if ( P != v216 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v217 = 0;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v213);
            if ( v177 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
            if ( v174[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v174);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v185);
            return 3221225495LL;
          }
          LODWORD(v10) = DxgkReferenceAllocationList(
                           &v159,
                           v60,
                           (struct DXGALLOCATION **)v64,
                           *((struct DXGDEVICE **)v52 + 2));
        }
        if ( (int)v10 >= 0 )
        {
          LODWORD(v10) = DXGCONTEXT::Render(
                           v52,
                           &v218,
                           (struct COREDEVICEACCESS *)v213,
                           (struct DXGADAPTERSTOPRESETLOCKSHARED *)v175,
                           &v161,
                           v63,
                           0LL);
          v52 = v161;
        }
        if ( IsDxgmms2 )
          DxgkUnreferenceAllocationList(v159, (struct _EX_RUNDOWN_REF **)v63);
        *((_QWORD *)v52 + 56) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v52 + 440, 0LL);
        KeLeaveCriticalRegion();
        if ( P != v216 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v217 = 0;
        goto LABEL_83;
      }
      if ( *((_DWORD *)a2 + 1) < 0x58u )
      {
        v19 = WdLogNewEntry5_WdWarning(v31, v20, v22);
        *(_QWORD *)(v19 + 24) = 387LL;
        goto LABEL_206;
      }
      v69 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      v71 = v69;
      if ( !v69 )
      {
        v35 = WdLogNewEntry5_WdError(v70);
        *(_QWORD *)(v35 + 24) = 395LL;
        goto LABEL_32;
      }
      v178 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v154, *((_DWORD *)a2 + 3), v69, &v178);
      v73 = v178;
      if ( !v178 )
      {
        v74 = WdLogNewEntry5_WdError(v72);
        *(_QWORD *)(v74 + 24) = *((unsigned int *)a2 + 3);
LABEL_116:
        WdLogEvent5_WdError(v74);
        LODWORD(v10) = -1073741811;
        v150 = -1073741811;
        goto LABEL_117;
      }
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
      v76 = 0;
      v160 = 0;
      *(_QWORD *)&v167[0].0 = 0LL;
      v77 = *(_QWORD *)(*((_QWORD *)v73 + 2) + 16LL);
      if ( *(_BYTE *)(v77 + 185) )
      {
        *(_OWORD *)v206 = *(_OWORD *)a2;
        v207 = *((_OWORD *)a2 + 1);
        v208 = *((_OWORD *)a2 + 2);
        v209 = *((_OWORD *)a2 + 3);
        v210 = *((_OWORD *)a2 + 4);
        v211 = *((_QWORD *)a2 + 10);
        *(_QWORD *)&v167[0].0 = 0LL;
        v190 = 0;
        *(_DWORD *)&v206[12] = *((_DWORD *)v73 + 84);
        v78 = *(_DWORD *)&v206[12];
        v79 = *(_DWORD *)(v77 + 4216);
        HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v71);
        LODWORD(v149) = 88;
        if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v77 + 4152),
                    HostProcess,
                    v79,
                    v78,
                    0,
                    D3DKMT_ESCAPE_DRT_TEST,
                    v167[0],
                    (size_t)v149,
                    v206) < 0 )
        {
          v74 = WdLogNewEntry5_WdError(v81);
          *(_QWORD *)(v74 + 24) = 437LL;
          goto LABEL_116;
        }
        v76 = HIDWORD(v208);
        v160 = v209;
        *(_QWORD *)&v167[0].0 = v211;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v186, v73);
      v188 = *(_QWORD *)(*((_QWORD *)v73 + 2) + 16LL);
      v189 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v214, (__int64)v73, 0, v82, 0);
      LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v214);
      v150 = v10;
      if ( (int)v10 >= 0 )
      {
        memset(v219, 0, 0x1A8uLL);
        HIDWORD(v219[0]) = *((_DWORD *)a2 + 3);
        LODWORD(v219[2]) = 4;
        v219[3] = (char *)a2 + 16;
        v83 = LODWORD(v219[0]) | 0x200;
        LODWORD(v219[0]) |= 0x200u;
        if ( *((_BYTE *)a2 + 60) )
        {
          v83 |= 1u;
          LODWORD(v219[0]) = v83;
        }
        if ( *((_BYTE *)a2 + 65) )
        {
          v83 |= 0x20u;
          LODWORD(v219[0]) = v83;
        }
        if ( *((_BYTE *)a2 + 61) )
        {
          v83 |= 0x400u;
          LODWORD(v219[0]) = v83;
        }
        if ( *((_BYTE *)a2 + 62) )
        {
          v83 |= 0x1000u;
          LODWORD(v219[0]) = v83;
        }
        if ( *((_BYTE *)a2 + 63) )
          LODWORD(v219[0]) = v83 | 0x2000;
        LOBYTE(v219[51]) = *((_BYTE *)a2 + 64);
        LODWORD(v219[48]) = *((_DWORD *)a2 + 14);
        HIDWORD(v219[48]) = *((_DWORD *)a2 + 17);
        HIDWORD(v219[47]) = *((_DWORD *)a2 + 10);
        LODWORD(v219[49]) = *((_DWORD *)a2 + 18);
        v219[50] = *((_QWORD *)a2 + 10);
        LODWORD(v10) = DXGDEVICE::CreateStandardAllocation(v73, (struct _D3DKM_CREATESTANDARDALLOCATION *)v219, v214);
        v150 = v10;
        if ( (int)v10 >= 0 )
        {
          v84 = HIDWORD(v219[6]);
          *((_DWORD *)a2 + 11) = HIDWORD(v219[6]);
          *((_QWORD *)a2 + 6) = v219[1];
          if ( (*((_BYTE *)v71 + 323) & 8) != 0 )
          {
            v171 = 0LL;
            AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v71,
                                                        (DXGALLOCATIONREFERENCE *)&v192,
                                                        v84);
            DXGALLOCATIONREFERENCE::MoveAssign(&v171, AllocationSafe);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v192);
            if ( v171
              && (v86 = (_QWORD *)*((_QWORD *)v73 + 2),
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v171 + 1) + 16LL) + 16LL) == v86[2]) )
            {
              v87 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v86[68] + 8LL) + 624LL))(
                      v86[69],
                      *((_QWORD *)v171 + 3),
                      0LL);
            }
            else
            {
              v87 = 0LL;
            }
            *((_QWORD *)a2 + 10) = v87;
            v88 = &v171;
          }
          else
          {
            if ( !*(_BYTE *)(v77 + 185) )
              goto LABEL_127;
            v173 = 0LL;
            v89 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                             (__int64)v71,
                                             (DXGALLOCATIONREFERENCE *)&v193,
                                             v84);
            DXGALLOCATIONREFERENCE::MoveAssign(&v173, v89);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v193);
            v90 = v173;
            if ( v173 )
            {
              *((_DWORD *)v173 + 24) = v76;
              *((_DWORD *)v90 + 25) = v76;
              *((_QWORD *)v90 + 16) = *(_QWORD *)&v167[0].0;
            }
            v172 = 0LL;
            ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                                    (__int64)v71,
                                                    (DXGRESOURCEREFERENCE *)&v198,
                                                    *((_DWORD *)a2 + 12));
            DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v172, ResourceSafe);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v198);
            if ( v172 )
              HIDWORD(v172[2].Ptr) = v160;
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v172);
            v88 = &v173;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v88);
          goto LABEL_127;
        }
        LODWORD(v10) = -1073741811;
        v150 = -1073741811;
      }
LABEL_127:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v214);
      if ( v189 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
      if ( v186[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v186);
LABEL_117:
      if ( !v154 )
        return (unsigned int)v10;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v154 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v75 = (ADAPTER_RENDER **)v154;
LABEL_120:
        ADAPTER_RENDER::DestroyDeviceNoLocks(v75[2], (struct DXGDEVICE *)v75);
        goto LABEL_121;
      }
      goto LABEL_121;
    }
    if ( *((_DWORD *)a2 + 1) < 0x14u )
    {
      v19 = WdLogNewEntry5_WdWarning(v47, v20, v22);
      *(_QWORD *)(v19 + 24) = 826LL;
      goto LABEL_206;
    }
    v94 = *((_QWORD *)this + 24);
    if ( v94 )
    {
      v44 = DxgkHandleThermalCoolingDrtEscape(v94, a2);
      goto LABEL_288;
    }
LABEL_171:
    LODWORD(v10) = -1073741823;
    return (unsigned int)v10;
  }
  if ( (int)v26 <= 25 )
  {
    if ( (_DWORD)v26 != 25 )
    {
      v108 = (unsigned int)(v26 - 19);
      if ( !(_DWORD)v108 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          if ( g_OSTestSigningEnabled )
          {
            v135 = *((_DWORD *)a2 + 3) != 0;
            *((_BYTE *)DXGGLOBAL::GetGlobal(v108) + 1256) = v135;
          }
          else
          {
            LODWORD(v10) = -1073741637;
          }
          return (unsigned int)v10;
        }
        return 3221225485LL;
      }
      v109 = (unsigned int)(v108 - 1);
      if ( (_DWORD)v109 )
      {
        v110 = (unsigned int)(v109 - 1);
        if ( (_DWORD)v110 )
        {
          v111 = v110 - 1;
          if ( !v111 )
          {
            v112 = DXGPROCESS::GetCurrent();
            DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v204, v112);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v204, 0);
            v114 = CCD_BTL::Global(v113);
            CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v114 + 8));
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v204);
            return (unsigned int)v10;
          }
          v31 = (unsigned int)(v111 - 1);
          if ( (_DWORD)v31 )
          {
            if ( (_DWORD)v31 != 1 )
              goto LABEL_271;
            if ( *((_DWORD *)a2 + 1) < 0x10u )
              return 3221225485LL;
            g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
            return (unsigned int)v10;
          }
          if ( *((_DWORD *)a2 + 1) < 0x30u )
          {
            v19 = WdLogNewEntry5_WdWarning(v31, v20, v22);
            *(_QWORD *)(v19 + 24) = 229LL;
            goto LABEL_206;
          }
          v44 = DxgkpSendTestVmBusCommand(this, a2);
LABEL_288:
          LODWORD(v10) = v44;
          return (unsigned int)v10;
        }
        if ( *((_DWORD *)a2 + 1) < 0x18u )
        {
          v19 = WdLogNewEntry5_WdWarning(v110, v20, v22);
          *(_QWORD *)(v19 + 24) = 634LL;
          goto LABEL_206;
        }
        v115 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
        if ( !v115 )
        {
          v35 = WdLogNewEntry5_WdError(v116);
          *(_QWORD *)(v35 + 24) = 642LL;
          goto LABEL_32;
        }
        v156 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v157, *((_DWORD *)a2 + 3), v115, &v156);
        if ( v156 )
        {
          v119 = ObReferenceObjectByHandle(
                   *((HANDLE *)a2 + 2),
                   0x1F0003u,
                   (POBJECT_TYPE)ExEventObjectType,
                   1,
                   &Object,
                   0LL);
          v10 = v119;
          v150 = v119;
          if ( v119 >= 0 )
          {
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v202, v156);
            KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
            if ( v202[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v202);
          }
          else
          {
            v121 = WdLogNewEntry5_WdError(v120);
            *(_QWORD *)(v121 + 24) = v10;
            WdLogEvent5_WdError(v121);
          }
        }
        else
        {
          v118 = WdLogNewEntry5_WdError(v117);
          *(_QWORD *)(v118 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v118);
          LODWORD(v10) = -1073741811;
          v150 = -1073741811;
        }
        if ( !v157 )
          return (unsigned int)v10;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v157 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v75 = (ADAPTER_RENDER **)v157;
          goto LABEL_120;
        }
LABEL_121:
        LODWORD(v10) = v150;
        return (unsigned int)v10;
      }
      if ( *((_DWORD *)a2 + 1) < 0x18u )
      {
        v19 = WdLogNewEntry5_WdWarning(v109, v20, v22);
        *(_QWORD *)(v19 + 24) = 546LL;
        goto LABEL_206;
      }
      v122 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      v124 = (__int64)v122;
      if ( !v122 )
      {
        v35 = WdLogNewEntry5_WdError(v123);
        *(_QWORD *)(v35 + 24) = 554LL;
        goto LABEL_32;
      }
      v180 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v153, *((_DWORD *)a2 + 3), v122, &v180);
      v126 = v180;
      if ( !v180 )
      {
        v127 = WdLogNewEntry5_WdError(v125);
        *(_QWORD *)(v127 + 24) = *((unsigned int *)a2 + 3);
        WdLogEvent5_WdError(v127);
        LODWORD(v10) = -1073741811;
        v150 = -1073741811;
LABEL_229:
        if ( !v153 )
          return (unsigned int)v10;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v153 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
          goto LABEL_121;
        v75 = (ADAPTER_RENDER **)v153;
        goto LABEL_120;
      }
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v158, v126);
      v165 = *(_QWORD *)(*((_QWORD *)v126 + 2) + 16LL);
      v166 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v164);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v212, (__int64)v126, 0, v128, 0);
      LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v212);
      v150 = v10;
      if ( (int)v10 < 0 )
      {
LABEL_233:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v212);
        if ( v166 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v164);
        if ( v158[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v158);
        goto LABEL_229;
      }
      v155 = 0LL;
      v129 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                        v124,
                                        (DXGALLOCATIONREFERENCE *)&v196,
                                        *((_DWORD *)a2 + 4));
      DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v155, v129);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v196);
      v131 = v155;
      if ( v155 )
      {
        v133 = *((_QWORD *)v126 + 2);
        v134 = *(_QWORD *)(v155[1].Count + 16);
        if ( *(_QWORD *)(v134 + 16) == *(_QWORD *)(v133 + 16) )
        {
          if ( *((_BYTE *)a2 + 20) )
          {
            if ( (v155[9].Count & 0x800) == 0 )
            {
              LODWORD(v10) = VIDMM_EXPORT::VidMmPinAllocation(
                               *(VIDMM_EXPORT **)(v133 + 544),
                               *(struct VIDMM_GLOBAL **)(v133 + 552),
                               (struct _VIDMM_MULTI_ALLOC *)v155[3].Count,
                               &v191,
                               &v184);
              v150 = v10;
              if ( (int)v10 >= 0 )
                LODWORD(v131[9].Count) |= 0x800u;
              goto LABEL_240;
            }
            v132 = (_QWORD *)WdLogNewEntry5_WdError(v134);
            v132[3] = 602LL;
          }
          else
          {
            if ( (v155[9].Count & 0x800) != 0 )
            {
              VIDMM_EXPORT::VidMmUnpinAllocation(
                *(VIDMM_EXPORT **)(v133 + 544),
                *(struct VIDMM_GLOBAL **)(v133 + 552),
                (struct _VIDMM_MULTI_ALLOC *)v155[3].Count);
              goto LABEL_240;
            }
            v132 = (_QWORD *)WdLogNewEntry5_WdError(v134);
            v132[3] = 621LL;
          }
        }
        else
        {
          v132 = (_QWORD *)WdLogNewEntry5_WdError(v134);
          v132[3] = v126;
          v132[4] = v131;
          v132[5] = -1073741811LL;
        }
      }
      else
      {
        v132 = (_QWORD *)WdLogNewEntry5_WdError(v130);
        v132[3] = *((unsigned int *)a2 + 4);
      }
      WdLogEvent5_WdError(v132);
      LODWORD(v10) = -1073741811;
      v150 = -1073741811;
LABEL_240:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v155);
      goto LABEL_233;
    }
    if ( *((_DWORD *)a2 + 1) < 0x1Cu )
      return 3221225485LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    result = DxgkGetMonitorDeviceObject(
               (const struct _LUID *)((char *)a2 + 12),
               *((_DWORD *)a2 + 5),
               (struct _FILE_OBJECT **)&v195,
               &DeviceObject);
    if ( (int)result < 0 )
      return result;
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
    v137 = IoBuildDeviceIoControlRequest(
             0x232433u,
             AttachedDeviceReference,
             (char *)a2 + 24,
             4u,
             0LL,
             0,
             1u,
             &Event,
             &IoStatusBlock);
    if ( v137 )
    {
      LODWORD(v10) = IofCallDriver(AttachedDeviceReference, v137);
      if ( (_DWORD)v10 == 259 )
      {
        while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
          ;
        LODWORD(v10) = IoStatusBlock.Status;
      }
    }
    else
    {
      LODWORD(v10) = -1073741823;
    }
    ObfDereferenceObject(AttachedDeviceReference);
    v138 = v195;
LABEL_263:
    ObfDereferenceObject(v138);
    return (unsigned int)v10;
  }
  v139 = v26 - 26;
  if ( v139 )
  {
    v140 = (struct DXGADAPTER *)(unsigned int)(v139 - 1);
    if ( !(_DWORD)v140 )
    {
      v44 = VailDRTTest(v140, a2);
      goto LABEL_288;
    }
    v141 = (_DWORD)v140 - 1;
    if ( v141 )
    {
      v142 = v141 - 1;
      if ( v142 )
      {
        v31 = (unsigned int)(v142 - 1);
        if ( !(_DWORD)v31 )
        {
          if ( (*((_DWORD *)this + 473) & 0x800) != 0 )
          {
            v200 = this;
            v201 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v199);
            if ( *((_QWORD *)this + 316) )
            {
              if ( *((_DWORD *)this + 44) == 1 )
                LODWORD(v10) = ADAPTER_RENDER::EnableIoMmuIsolation(*((ADAPTER_RENDER **)this + 316), 1, 1);
              else
                LODWORD(v10) = 0;
            }
            if ( v201 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v199);
          }
          return (unsigned int)v10;
        }
        if ( (_DWORD)v31 != 1 )
          goto LABEL_271;
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          v19 = WdLogNewEntry5_WdWarning(v31, v20, v22);
          *(_QWORD *)(v19 + 24) = 1133LL;
          goto LABEL_206;
        }
        v143 = *((_DWORD *)a2 + 6);
        v144 = (const struct _LUID *)*((unsigned int *)a2 + 5);
        v152 = *(struct _LUID *)((char *)a2 + 12);
        v44 = DpiPersistence::WriteDpiToRegistry(&v152, v144, v143);
      }
      else
      {
        v44 = DrtTestSignalEventCb(this, a2);
      }
      goto LABEL_288;
    }
    if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
      return 3221225485LL;
    v145 = DXGPROCESS::GetCurrent();
    if ( v145 )
    {
      *((_BYTE *)v145 + 323) = *((_BYTE *)v145 + 323) & 0x7F | (*((_BYTE *)a2 + 12) << 7);
      return (unsigned int)v10;
    }
    return 3221225506LL;
  }
  if ( !g_OSTestSigningEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) < 0x14u )
    return 3221225485LL;
  v146 = 0LL;
  v182 = this;
  v183 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
  if ( *((_DWORD *)this + 44) != 1 )
  {
LABEL_302:
    if ( v183 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
    if ( !v146 )
      goto LABEL_171;
    memset(v221, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v221[1]);
    v221[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v221[3]) = 45;
    LOBYTE(v221[6]) = -1;
    v169 = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
    LODWORD(v10) = DxgkPowerOnOffMonitor(
                     (__int64)v146,
                     1u,
                     (_DWORD *)a2 + 3,
                     &v169,
                     1,
                     (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v221);
    v138 = v146;
    goto LABEL_263;
  }
  v147 = *((_DWORD *)a2 + 3);
  if ( v147 == -1 )
  {
LABEL_301:
    v146 = (void *)*((_QWORD *)this + 24);
    ObfReferenceObject(v146);
    goto LABEL_302;
  }
  IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(this, v147, (bool *)&v151);
  if ( IsTargetInClientVidPnTopology >= 0 )
  {
    if ( !v151 )
    {
      if ( v183 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
      return 3221225485LL;
    }
    goto LABEL_301;
  }
  if ( v183 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
  return (unsigned int)IsTargetInClientVidPnTopology;
}
