/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00021E4 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023B48 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0023B5C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023D5C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D9898 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D98F0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F30A8 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C011A500 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C011CE60 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C013D838 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01428D0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01591A4 (DxgkPowerOnOffMonitor.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C01ED19C (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C01ED20C (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C01EE944 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F57CC (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C01F8344 (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C020086C (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0200B58 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205974 (DxgkSetIndirectDisplayRenderAdapter.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C020739C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C020B8D4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C02186AC (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C02247D0 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C022F2BC (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0238C58 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C023AA40 (DxgkpIsDrtEnabled.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C0284DFC (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291690 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C02AB028 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02B4848 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorDRTTest @ 0x1C02C905C (MonitorDRTTest.c)
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
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct DXGPROCESS *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGPROCESS *v35; // rdi
  __int64 v36; // rax
  char *v37; // rbx
  signed __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  DXGDEVICE *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  int updated; // eax
  __int64 v48; // r8
  char *v49; // r14
  __int64 v50; // r9
  __int64 v51; // rdx
  char *v52; // rax
  _OWORD *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  __int64 v58; // rcx
  struct _KTHREAD **v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct DXGDEVICE *v66; // rax
  __int64 v67; // rax
  ADAPTER_RENDER **v68; // rcx
  struct _KTHREAD **v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  struct DXGCONTEXT *v76; // r13
  __int64 v77; // rax
  struct DXGDEVICE *v78; // rbx
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  UINT v84; // ebx
  __int64 v85; // rax
  struct _D3DDDI_ALLOCATIONLIST *v86; // r15
  unsigned int v87; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v89; // rbx
  struct DXGDEVICE *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rax
  struct _KTHREAD **v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  struct _KTHREAD **v99; // r13
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  struct DXGDEVICE *v103; // r12
  __int64 v104; // rax
  ADAPTER_RENDER **v105; // rax
  int v106; // ebx
  __int64 v107; // r15
  UINT v108; // edi
  unsigned int v109; // ebx
  unsigned int HostProcess; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  int v115; // ecx
  unsigned int v116; // r8d
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v118; // rdx
  __int64 v119; // rdx
  _QWORD *v120; // r8
  struct _EX_RUNDOWN_REF **v121; // rcx
  struct _EX_RUNDOWN_REF **v122; // rax
  __int64 v123; // rdx
  struct _EX_RUNDOWN_REF *v124; // rax
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v126; // rdx
  __int64 v127; // rdx
  unsigned int v128; // r8d
  int v129; // edx
  __int64 v130; // rcx
  __int64 v131; // rcx
  bool v132; // bl
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rcx
  int v137; // ecx
  struct _FILE_OBJECT *v138; // rbx
  unsigned int v139; // edx
  int IsTargetInClientVidPnTopology; // ebx
  struct _FILE_OBJECT *v141; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  IRP *v143; // rax
  NTSTATUS Status; // eax
  struct DXGPROCESS *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  struct CCD_BTL *v148; // rax
  struct _KTHREAD **v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // rax
  NTSTATUS v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // rax
  struct _KTHREAD **v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r12
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  struct DXGDEVICE *v170; // r13
  __int64 v171; // rax
  ADAPTER_RENDER **v172; // rax
  __int64 v173; // r9
  struct _EX_RUNDOWN_REF **v174; // rax
  __int64 v175; // rdx
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  struct _EX_RUNDOWN_REF *v179; // rbx
  _QWORD *v180; // rax
  __int64 v181; // rdx
  _QWORD *v182; // r8
  __int64 v183; // rcx
  __int64 v184; // rcx
  int v185; // ecx
  int v186; // ecx
  __int64 v187; // rcx
  __int64 v188; // rcx
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *DiagnosticInfoArgs; // rax
  const GUID *v190; // r8
  struct _DXGKARG_COLLECTDIAGNOSTICINFO *v191; // rbx
  __int64 v192; // rdx
  __int64 v193; // r8
  struct DXGPROCESS *v194; // rax
  PKEVENT v195; // [rsp+38h] [rbp-960h]
  int v196; // [rsp+50h] [rbp-948h]
  unsigned __int8 v197[4]; // [rsp+54h] [rbp-944h] BYREF
  __int64 v198; // [rsp+58h] [rbp-940h] BYREF
  ADAPTER_RENDER **v199; // [rsp+60h] [rbp-938h] BYREF
  ADAPTER_RENDER **v200; // [rsp+68h] [rbp-930h] BYREF
  struct _EX_RUNDOWN_REF *v201; // [rsp+70h] [rbp-928h] BYREF
  DXGDEVICE *v202; // [rsp+78h] [rbp-920h] BYREF
  __int64 v203; // [rsp+80h] [rbp-918h] BYREF
  _QWORD v204[2]; // [rsp+88h] [rbp-910h] BYREF
  unsigned int v205; // [rsp+98h] [rbp-900h] BYREF
  int v206; // [rsp+9Ch] [rbp-8FCh]
  struct DXGCONTEXT *v207; // [rsp+A0h] [rbp-8F8h] BYREF
  struct DXGDEVICE *v208; // [rsp+A8h] [rbp-8F0h] BYREF
  char v209[8]; // [rsp+B0h] [rbp-8E8h] BYREF
  __int64 v210; // [rsp+B8h] [rbp-8E0h]
  char v211; // [rsp+C0h] [rbp-8D8h]
  struct DXGDEVICE *v212; // [rsp+C8h] [rbp-8D0h] BYREF
  struct DXGDEVICE *v213; // [rsp+D0h] [rbp-8C8h] BYREF
  int v214; // [rsp+D8h] [rbp-8C0h] BYREF
  struct _EX_RUNDOWN_REF *v215; // [rsp+E0h] [rbp-8B8h] BYREF
  struct _EX_RUNDOWN_REF *v216; // [rsp+E8h] [rbp-8B0h] BYREF
  struct _EX_RUNDOWN_REF *v217; // [rsp+F0h] [rbp-8A8h] BYREF
  struct DXGDEVICE *v218; // [rsp+F8h] [rbp-8A0h] BYREF
  _QWORD v219[2]; // [rsp+100h] [rbp-898h] BYREF
  char v220[8]; // [rsp+110h] [rbp-888h] BYREF
  struct DXGADAPTER *v221; // [rsp+118h] [rbp-880h]
  char v222; // [rsp+120h] [rbp-878h]
  struct _EX_RUNDOWN_REF *v223; // [rsp+128h] [rbp-870h] BYREF
  char v224[8]; // [rsp+130h] [rbp-868h] BYREF
  struct DXGADAPTER *v225; // [rsp+138h] [rbp-860h]
  char v226; // [rsp+140h] [rbp-858h]
  struct DXGDEVICE *v227; // [rsp+148h] [rbp-850h] BYREF
  struct DXGDEVICE *v228; // [rsp+150h] [rbp-848h] BYREF
  ULONG_PTR v229; // [rsp+158h] [rbp-840h]
  _BYTE v230[16]; // [rsp+160h] [rbp-838h] BYREF
  _QWORD v231[2]; // [rsp+170h] [rbp-828h] BYREF
  char v232[8]; // [rsp+180h] [rbp-818h] BYREF
  __int64 v233; // [rsp+188h] [rbp-810h]
  char v234; // [rsp+190h] [rbp-808h]
  int v235; // [rsp+198h] [rbp-800h]
  char v236[4]; // [rsp+19Ch] [rbp-7FCh] BYREF
  struct _FILE_OBJECT *v237; // [rsp+1A0h] [rbp-7F8h] BYREF
  struct _EX_RUNDOWN_REF *v238; // [rsp+1A8h] [rbp-7F0h] BYREF
  struct _EX_RUNDOWN_REF *v239; // [rsp+1B0h] [rbp-7E8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+1B8h] [rbp-7E0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1C0h] [rbp-7D8h] BYREF
  __int64 v242; // [rsp+1D0h] [rbp-7C8h]
  struct _EX_RUNDOWN_REF *v243; // [rsp+1D8h] [rbp-7C0h] BYREF
  PVOID Object; // [rsp+1E0h] [rbp-7B8h] BYREF
  char v245[8]; // [rsp+1E8h] [rbp-7B0h] BYREF
  struct DXGADAPTER *v246; // [rsp+1F0h] [rbp-7A8h]
  char v247; // [rsp+1F8h] [rbp-7A0h]
  _QWORD v248[2]; // [rsp+200h] [rbp-798h] BYREF
  struct _KEVENT Event; // [rsp+210h] [rbp-788h] BYREF
  unsigned __int8 v250[24]; // [rsp+228h] [rbp-770h] BYREF
  unsigned __int8 v251[16]; // [rsp+240h] [rbp-758h] BYREF
  __int128 v252; // [rsp+250h] [rbp-748h]
  __int128 v253; // [rsp+260h] [rbp-738h]
  __int128 v254; // [rsp+270h] [rbp-728h]
  __int128 v255; // [rsp+280h] [rbp-718h]
  __int128 v256; // [rsp+290h] [rbp-708h]
  PVOID P; // [rsp+2A0h] [rbp-6F8h] BYREF
  _BYTE v258[256]; // [rsp+2A8h] [rbp-6F0h] BYREF
  int v259; // [rsp+3A8h] [rbp-5F0h]
  struct _D3DKMT_RENDER v260; // [rsp+3B0h] [rbp-5E8h] BYREF
  _QWORD v261[54]; // [rsp+520h] [rbp-478h] BYREF
  __int64 v262[10]; // [rsp+6D0h] [rbp-2C8h] BYREF
  _QWORD v263[10]; // [rsp+720h] [rbp-278h] BYREF
  _BYTE v264[160]; // [rsp+770h] [rbp-228h] BYREF
  _BYTE v265[160]; // [rsp+810h] [rbp-188h] BYREF
  PERESOURCE *v266[20]; // [rsp+8B0h] [rbp-E8h] BYREF

  memset(v262, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v262[1]);
  v262[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v262[3]) = 45;
  LOBYTE(v262[6]) = -1;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v196 = 0;
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
      Current = DXGPROCESS::GetCurrent(v7, v6);
      if ( Current )
      {
        if ( !v11 || (IsDrtEnabled = DxgkpIsDrtEnabled(), v14 = 64, !IsDrtEnabled) )
          v14 = 0;
        *((_BYTE *)Current + 299) = v14 | *((_BYTE *)Current + 299) & 0xBF;
      }
      LODWORD(v10) = 0;
    }
    return (unsigned int)v10;
  }
  if ( !g_OSTestSigningEnabled && !(unsigned __int8)DxgkpIsDrtEnabled() )
  {
    v17 = WdLogNewEntry5_WdWarning(v7, v6, v16);
    *(_QWORD *)(v17 + 24) = 1228LL;
LABEL_241:
    WdLogEvent5_WdWarning(v17);
    goto LABEL_242;
  }
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v7, v6) + 299) & 8) != 0 )
  {
    v21 = *((_DWORD *)a2 + 2);
    if ( v21 != 16 && v21 != 29 )
    {
      v22 = WdLogNewEntry5_WdEvent(v19);
      *(_QWORD *)(v22 + 24) = 172LL;
      WdLogEvent5_WdEvent(v22);
      return 3221225485LL;
    }
  }
  v24 = *((unsigned int *)a2 + 2);
  if ( (int)v24 <= 19 )
  {
    if ( (_DWORD)v24 == 19 )
    {
      if ( *((_DWORD *)a2 + 1) < 0x10u )
        return 3221225485LL;
      if ( g_OSTestSigningEnabled )
      {
        v132 = *((_DWORD *)a2 + 3) != 0;
        *((_BYTE *)DXGGLOBAL::GetGlobal(v24, v18) + 1224) = v132;
        return (unsigned int)v10;
      }
      goto LABEL_67;
    }
    if ( (int)v24 <= 11 )
    {
      if ( (_DWORD)v24 == 11 )
      {
        v48 = *((unsigned int *)this + 684);
        if ( (_DWORD)v48 )
        {
          v24 = (unsigned int)(v48 - 1);
          v18 = 344 * v24 + 360;
          if ( *((unsigned int *)a2 + 1) >= v18 )
          {
            v49 = (char *)a2 + 352;
            v50 = (unsigned int)v48;
            do
            {
              v51 = *((_QWORD *)this + 324);
              v52 = v49 - 336;
              v53 = (_OWORD *)(v9 + v51 + 8);
              v54 = 2LL;
              do
              {
                *(_OWORD *)v52 = *v53;
                *((_OWORD *)v52 + 1) = v53[1];
                *((_OWORD *)v52 + 2) = v53[2];
                *((_OWORD *)v52 + 3) = v53[3];
                *((_OWORD *)v52 + 4) = v53[4];
                *((_OWORD *)v52 + 5) = v53[5];
                *((_OWORD *)v52 + 6) = v53[6];
                v52 += 128;
                *((_OWORD *)v52 - 1) = v53[7];
                v53 += 8;
                --v54;
              }
              while ( v54 );
              *(_OWORD *)v52 = *v53;
              *((_OWORD *)v52 + 1) = v53[1];
              *((_OWORD *)v52 + 2) = v53[2];
              *((_OWORD *)v52 + 3) = v53[3];
              *((_OWORD *)v52 + 4) = v53[4];
              *(_DWORD *)v49 = *(_DWORD *)(v9 + v51 + 344);
              v49[4] = *(_BYTE *)(v9 + v51 + 356);
              v9 += 520LL;
              v49 += 344;
              --v50;
            }
            while ( v50 );
            return (unsigned int)v10;
          }
        }
        v17 = WdLogNewEntry5_WdWarning(v24, v18, v48);
        *(_QWORD *)(v17 + 24) = 303LL;
        goto LABEL_241;
      }
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            if ( DXGADAPTER::IsCoreResourceSharedOwner(a3[3]) )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            LODWORD(v10) = COREADAPTERACCESS::AcquireExclusive(a3, 1LL);
            if ( (int)v10 >= 0 )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            return (unsigned int)v10;
          }
          v28 = (unsigned int)(v27 - 1);
          if ( !(_DWORD)v28 )
          {
            if ( *((_DWORD *)a2 + 1) < 0x10u )
            {
              v17 = WdLogNewEntry5_WdWarning(v28, v18, v20);
              *(_QWORD *)(v17 + 24) = 244LL;
              goto LABEL_241;
            }
            v46 = *((unsigned int *)a2 + 3);
            if ( (unsigned int)(v46 - 1) > 0x3FF )
            {
              v17 = WdLogNewEntry5_WdWarning(v46, v18, v20);
              *(_QWORD *)(v17 + 24) = 253LL;
              goto LABEL_241;
            }
            g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
            return (unsigned int)v10;
          }
          v29 = (unsigned int)(v28 - 1);
          if ( !(_DWORD)v29 )
          {
            if ( *((_DWORD *)a2 + 1) < 0x14u )
            {
              v17 = WdLogNewEntry5_WdWarning(v29, v18, v20);
              *(_QWORD *)(v17 + 24) = 267LL;
              goto LABEL_241;
            }
            g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
            return (unsigned int)v10;
          }
          v30 = (unsigned int)(v29 - 1);
          if ( (_DWORD)v30 )
          {
            if ( (_DWORD)v30 == 4 )
            {
              if ( *((_DWORD *)a2 + 1) < 0x10u )
              {
                v17 = WdLogNewEntry5_WdWarning(v30, v18, v20);
                *(_QWORD *)(v17 + 24) = 284LL;
                goto LABEL_241;
              }
              *((_DWORD *)a2 + 3) = *((_DWORD *)this + 684);
              return (unsigned int)v10;
            }
LABEL_294:
            v17 = WdLogNewEntry5_WdWarning(v30, v18, v20);
            *(_QWORD *)(v17 + 24) = *((int *)a2 + 2);
            goto LABEL_241;
          }
          if ( *((_DWORD *)a2 + 1) < 0x114u )
          {
            v17 = WdLogNewEntry5_WdWarning(v30, v18, v20);
            *(_QWORD *)(v17 + 24) = 341LL;
            goto LABEL_241;
          }
          v31 = DXGPROCESS::GetCurrent(v30, v18);
          v35 = v31;
          if ( !v31 )
          {
            v36 = WdLogNewEntry5_WdError(v33, v32, v34);
            *(_QWORD *)(v36 + 24) = 349LL;
LABEL_36:
            WdLogEvent5_WdError(v36);
LABEL_242:
            LODWORD(v10) = -1073741811;
            return (unsigned int)v10;
          }
          v37 = (char *)v31 + 160;
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v37, 0LL);
          *((_QWORD *)v37 + 1) = KeGetCurrentThread();
          v202 = 0LL;
          v40 = *((unsigned int *)a2 + 3);
          if ( (_DWORD)v40 )
          {
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v212, v40, (struct _KTHREAD **)v35, &v202);
            if ( !v202 )
            {
              v41 = WdLogNewEntry5_WdError(v38, v40, v39);
              *(_QWORD *)(v41 + 24) = *((unsigned int *)a2 + 3);
              WdLogEvent5_WdError(v41);
              LODWORD(v10) = -1073741811;
              if ( v212 )
              {
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v212 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v212 + 2), v212);
                LODWORD(v10) = -1073741811;
              }
              goto LABEL_43;
            }
            if ( v212 )
            {
              v38 = _InterlockedDecrement64((volatile signed __int64 *)v212 + 8);
              if ( !v38 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v212 + 2), v212);
            }
          }
          if ( !v202 )
          {
            v42 = *((_QWORD *)v35 + 31);
            if ( v42 )
            {
              v43 = (DXGDEVICE *)(v42 - 24);
              v202 = v43;
            }
            else
            {
              v202 = 0LL;
              v43 = 0LL;
            }
            if ( !v43 )
            {
              v44 = WdLogNewEntry5_WdError(v38, v40, v39);
              *(_QWORD *)(v44 + 24) = 376LL;
              WdLogEvent5_WdError(v44);
              LODWORD(v10) = -1073741811;
LABEL_43:
              *((_QWORD *)v37 + 1) = 0LL;
              ExReleasePushLockExclusiveEx(v37, 0LL);
              KeLeaveCriticalRegion();
              return (unsigned int)v10;
            }
          }
          DXGDEVICE::GetContexts(v202, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
          *((_DWORD *)a2 + 3) = *(_DWORD *)(v45 + 332);
          *((_QWORD *)v37 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v37, 0LL);
          KeLeaveCriticalRegion();
LABEL_54:
          LODWORD(v10) = v196;
          return (unsigned int)v10;
        }
LABEL_67:
        LODWORD(v10) = -1073741637;
        return (unsigned int)v10;
      }
      updated = MonitorDRTTest(this, a2, (__int64)v262);
LABEL_69:
      LODWORD(v10) = updated;
      return (unsigned int)v10;
    }
    v55 = (unsigned int)(v24 - 12);
    if ( !(_DWORD)v55 )
    {
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        v131 = *((_QWORD *)this + 320);
        if ( v131 )
          *(_BYTE *)(v131 + 776) = *((_BYTE *)a2 + 12);
        return (unsigned int)v10;
      }
      v17 = WdLogNewEntry5_WdWarning(v55, v18, v20);
      *(_QWORD *)(v17 + 24) = 322LL;
      goto LABEL_241;
    }
    v56 = (unsigned int)(v55 - 2);
    if ( (_DWORD)v56 )
    {
      v57 = v56 - 1;
      if ( v57 )
      {
        v58 = (unsigned int)(v57 - 1);
        if ( (_DWORD)v58 )
        {
          v30 = (unsigned int)(v58 - 1);
          if ( (_DWORD)v30 )
          {
            if ( (_DWORD)v30 != 1 )
              goto LABEL_294;
            if ( *((_DWORD *)a2 + 1) < 0x10u )
            {
              v17 = WdLogNewEntry5_WdWarning(v30, v18, v20);
              *(_QWORD *)(v17 + 24) = 803LL;
              goto LABEL_241;
            }
            v59 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v30, v18);
            if ( !v59 )
            {
              v36 = WdLogNewEntry5_WdError(v61, v60, v62);
              *(_QWORD *)(v36 + 24) = 811LL;
              goto LABEL_36;
            }
            v208 = 0LL;
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v213, *((_DWORD *)a2 + 3), v59, &v208);
            v66 = v208;
            if ( v208 )
            {
              *((_BYTE *)v208 + 1751) = 1;
              *(_BYTE *)(*((_QWORD *)v66 + 5) + 265LL) = 1;
            }
            else
            {
              v67 = WdLogNewEntry5_WdError(v64, v63, v65);
              *(_QWORD *)(v67 + 24) = *((unsigned int *)a2 + 3);
              WdLogEvent5_WdError(v67);
              LODWORD(v10) = -1073741811;
              v196 = -1073741811;
            }
            if ( !v213 )
              return (unsigned int)v10;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v213 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
              goto LABEL_54;
            v68 = (ADAPTER_RENDER **)v213;
LABEL_139:
            ADAPTER_RENDER::DestroyDeviceNoLocks(v68[2], (struct DXGDEVICE *)v68);
            goto LABEL_54;
          }
          if ( *((_DWORD *)a2 + 1) < 0xA8u )
          {
            v17 = WdLogNewEntry5_WdWarning(v30, v18, v20);
            *(_QWORD *)(v17 + 24) = 689LL;
            goto LABEL_241;
          }
          v69 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v30, v18);
          if ( !v69 )
          {
            v36 = WdLogNewEntry5_WdError(v71, v70, v72);
            *(_QWORD *)(v36 + 24) = 697LL;
            goto LABEL_36;
          }
          v207 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v230, *((_DWORD *)a2 + 3), v69, &v207, 0);
          v76 = v207;
          if ( !v207 )
          {
            v77 = WdLogNewEntry5_WdError(v74, v73, v75);
            *(_QWORD *)(v77 + 24) = 707LL;
            WdLogEvent5_WdError(v77);
            LODWORD(v10) = -1073741811;
LABEL_100:
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v230);
            return (unsigned int)v10;
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
          v78 = (struct DXGDEVICE *)*((_QWORD *)v76 + 2);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v219, v78);
          DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v76 + 456));
          v221 = this;
          v222 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v220);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v265, (__int64)v78, 0, v79, 0);
          LODWORD(v10) = COREDEVICEACCESS::AcquireShared((__int64)v265, 0xFFFFFFFF, 0LL);
          if ( (int)v10 < 0 )
          {
            *((_QWORD *)v76 + 58) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v76 + 456, 0LL);
            KeLeaveCriticalRegion();
LABEL_103:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v265);
            if ( v222 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v220);
            if ( v219[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v219);
            goto LABEL_100;
          }
          if ( *((_DWORD *)a2 + 8) > 0x10u )
          {
            v83 = WdLogNewEntry5_WdError(v81, v80, v82);
            *(_QWORD *)(v83 + 24) = 728LL;
            WdLogEvent5_WdError(v83);
            LODWORD(v10) = -1073741811;
          }
          v84 = *((_DWORD *)a2 + 4);
          if ( !v84 )
          {
            v85 = WdLogNewEntry5_WdError(v81, v80, v82);
            *(_QWORD *)(v85 + 24) = 733LL;
            WdLogEvent5_WdError(v85);
            LODWORD(v10) = -1073741811;
            v84 = *((_DWORD *)a2 + 4);
          }
          memset(&v260, 0, sizeof(v260));
          v260.hDevice = *((_DWORD *)a2 + 3);
          v260.AllocationCount = *((_DWORD *)a2 + 8);
          v260.CommandLength = v84;
          v260.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
          v86 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
          v260.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
          *(_DWORD *)&v260.Flags |= 0x20u;
          IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 16LL));
          v197[0] = IsDxgmms2;
          v205 = v87;
          P = 0LL;
          v259 = 0;
          v89 = 0LL;
          v208 = 0LL;
          if ( IsDxgmms2 )
          {
            v90 = (struct DXGDEVICE *)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, v87);
            v89 = (struct DXGALLOCATION **)v90;
            v208 = v90;
            if ( !v90 )
            {
              v94 = WdLogNewEntry5_WdWarning(v92, v91, v93);
              *(_QWORD *)(v94 + 24) = 762LL;
              WdLogEvent5_WdWarning(v94);
              if ( P != v258 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v259 = 0;
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v265);
              if ( v222 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v220);
              if ( v219[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v219);
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v230);
              return 3221225495LL;
            }
            LODWORD(v10) = DxgkReferenceAllocationList(
                             &v205,
                             v86,
                             (struct DXGALLOCATION **)v90,
                             *((struct DXGDEVICE **)v76 + 2));
          }
          if ( (int)v10 >= 0 )
          {
            LODWORD(v10) = DXGCONTEXT::Render(
                             v76,
                             &v260,
                             (struct COREDEVICEACCESS *)v265,
                             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v220,
                             &v207,
                             v89,
                             0LL);
            v76 = v207;
          }
          if ( IsDxgmms2 )
            DxgkUnreferenceAllocationList(v205, (struct _EX_RUNDOWN_REF **)v89);
          *((_QWORD *)v76 + 58) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v76 + 456, 0LL);
          KeLeaveCriticalRegion();
          if ( P != v258 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v259 = 0;
          goto LABEL_103;
        }
        if ( *((_DWORD *)a2 + 1) < 0x60u )
        {
          v17 = WdLogNewEntry5_WdWarning(v58, v18, v20);
          *(_QWORD *)(v17 + 24) = 391LL;
          goto LABEL_241;
        }
        v95 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v58, v18);
        v99 = v95;
        if ( !v95 )
        {
          v36 = WdLogNewEntry5_WdError(v97, v96, v98);
          *(_QWORD *)(v36 + 24) = 399LL;
          goto LABEL_36;
        }
        v227 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v200, *((_DWORD *)a2 + 3), v95, &v227);
        v103 = v227;
        if ( !v227 )
        {
          v104 = WdLogNewEntry5_WdError(v101, v100, v102);
          *(_QWORD *)(v104 + 24) = *((unsigned int *)a2 + 3);
          goto LABEL_136;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
        v106 = 0;
        v206 = 0;
        v229 = 0LL;
        v107 = *(_QWORD *)(*((_QWORD *)v103 + 2) + 16LL);
        v242 = v107;
        if ( *(_BYTE *)(v107 + 185) )
        {
          *(_OWORD *)v251 = *(_OWORD *)a2;
          v252 = *((_OWORD *)a2 + 1);
          v253 = *((_OWORD *)a2 + 2);
          v254 = *((_OWORD *)a2 + 3);
          v255 = *((_OWORD *)a2 + 4);
          v256 = *((_OWORD *)a2 + 5);
          v235 = 0;
          *(_DWORD *)&v251[12] = *((_DWORD *)v103 + 84);
          v108 = *(_DWORD *)&v251[12];
          v109 = *(_DWORD *)(v107 + 4208);
          HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v99);
          LODWORD(v195) = 96;
          if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                      (DXG_GUEST_VIRTUALGPU_VMBUS *)(v107 + 4144),
                      HostProcess,
                      v109,
                      v108,
                      0,
                      D3DKMT_ESCAPE_DRT_TEST,
                      0,
                      (size_t)v195,
                      v251) < 0 )
          {
            v104 = WdLogNewEntry5_WdError(v112, v111, v113);
            *(_QWORD *)(v104 + 24) = 441LL;
LABEL_136:
            WdLogEvent5_WdError(v104);
            LODWORD(v10) = -1073741811;
            v196 = -1073741811;
            v105 = v200;
            if ( !v200 )
              return (unsigned int)v10;
            goto LABEL_137;
          }
          v106 = HIDWORD(v253);
          v206 = v254;
          v229 = v256;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v231, v103);
        v233 = *(_QWORD *)(*((_QWORD *)v103 + 2) + 16LL);
        v234 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v232);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v266, (__int64)v103, 0, v114, 0);
        LODWORD(v10) = COREDEVICEACCESS::AcquireShared((__int64)v266, 0xFFFFFFFF, 0LL);
        v196 = v10;
        if ( (int)v10 >= 0 )
        {
          memset(v261, 0, 0x1A8uLL);
          HIDWORD(v261[0]) = *((_DWORD *)a2 + 3);
          LODWORD(v261[2]) = 4;
          v261[3] = (char *)a2 + 16;
          v115 = LODWORD(v261[0]) | 0x200;
          LODWORD(v261[0]) |= 0x200u;
          if ( *((_BYTE *)a2 + 60) )
          {
            v115 |= 1u;
            LODWORD(v261[0]) = v115;
          }
          if ( *((_BYTE *)a2 + 65) )
          {
            v115 |= 0x20u;
            LODWORD(v261[0]) = v115;
          }
          if ( *((_BYTE *)a2 + 61) )
          {
            v115 |= 0x400u;
            LODWORD(v261[0]) = v115;
          }
          if ( *((_BYTE *)a2 + 62) )
          {
            v115 |= 0x1000u;
            LODWORD(v261[0]) = v115;
          }
          if ( *((_BYTE *)a2 + 63) )
          {
            v115 |= 0x2000u;
            LODWORD(v261[0]) = v115;
          }
          if ( (*((_DWORD *)a2 + 22) & 1) != 0 )
            LODWORD(v261[0]) = v115 | 0x8000;
          LOBYTE(v261[51]) = *((_BYTE *)a2 + 64);
          LODWORD(v261[48]) = *((_DWORD *)a2 + 14);
          HIDWORD(v261[48]) = *((_DWORD *)a2 + 17);
          HIDWORD(v261[47]) = *((_DWORD *)a2 + 10);
          LODWORD(v261[49]) = *((_DWORD *)a2 + 18);
          v261[50] = *((_QWORD *)a2 + 10);
          LODWORD(v10) = DXGDEVICE::CreateStandardAllocation(v103, (struct _D3DKM_CREATESTANDARDALLOCATION *)v261, v266);
          v196 = v10;
          if ( (int)v10 < 0 )
          {
            LODWORD(v10) = -1073741811;
            v196 = -1073741811;
            goto LABEL_145;
          }
          v116 = HIDWORD(v261[6]);
          *((_DWORD *)a2 + 11) = HIDWORD(v261[6]);
          *((_QWORD *)a2 + 6) = v261[1];
          if ( (*((_BYTE *)v99 + 299) & 8) != 0 )
          {
            v215 = 0LL;
            AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                          (__int64)v99,
                                                          (DXGALLOCATIONREFERENCE *)&v243,
                                                          v116);
            DXGALLOCATIONREFERENCE::MoveAssign(&v215, AllocationSafe);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v243, v118);
            if ( v215
              && (v120 = (_QWORD *)*((_QWORD *)v103 + 2),
                  v119 = *(_QWORD *)(v215[1].Count + 16),
                  *(_QWORD *)(v119 + 16) == v120[2]) )
            {
              *((_QWORD *)a2 + 10) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v120[68] + 8LL)
                                                                                          + 624LL))(
                                       v120[69],
                                       v215[3].Count,
                                       0LL);
            }
            else
            {
              *((_QWORD *)a2 + 10) = 0LL;
            }
            v121 = &v215;
          }
          else
          {
            if ( !*(_BYTE *)(v242 + 185) )
              goto LABEL_145;
            v217 = 0LL;
            v122 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                (__int64)v99,
                                                (DXGALLOCATIONREFERENCE *)&v239,
                                                v116);
            DXGALLOCATIONREFERENCE::MoveAssign(&v217, v122);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v239, v123);
            v124 = v217;
            if ( v217 )
            {
              LODWORD(v217[12].Count) = v106;
              HIDWORD(v124[12].Ptr) = v106;
              v124[16].Count = v229;
            }
            v216 = 0LL;
            ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                        (__int64)v99,
                                                        (DXGRESOURCEREFERENCE *)&v238,
                                                        *((_DWORD *)a2 + 12));
            DXGRESOURCEREFERENCE::MoveAssign(&v216, ResourceSafe);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v238, v126);
            if ( v216 )
              HIDWORD(v216[2].Ptr) = v206;
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v216, v127);
            v121 = &v217;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v121, v119);
        }
LABEL_145:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v266);
        if ( v234 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v232);
        if ( v231[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v231);
        v105 = v200;
        if ( !v200 )
          return (unsigned int)v10;
LABEL_137:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
          goto LABEL_54;
        v68 = v200;
        goto LABEL_139;
      }
      if ( *((_DWORD *)a2 + 1) < 0xA8u )
        return 3221225485LL;
      v128 = *((_DWORD *)a2 + 4);
      if ( v128 >= *((_DWORD *)this + 684) )
        return 3221225485LL;
      v129 = *((_DWORD *)a2 + 3);
      if ( v129 )
      {
        if ( v129 <= 0 )
          return 3221225485LL;
        if ( v129 <= 3 )
        {
          DXGADAPTER::ForcePState((__int64)this, v129, v128, *((_DWORD *)a2 + 6));
        }
        else if ( v129 == 4 )
        {
          *((_DWORD *)a2 + 7) = *((_DWORD *)this + 978);
        }
        else
        {
          if ( v129 != 5 )
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
    if ( *((_DWORD *)a2 + 1) < 0x14u )
    {
      v17 = WdLogNewEntry5_WdWarning(v56, v18, v20);
      *(_QWORD *)(v17 + 24) = 834LL;
      goto LABEL_241;
    }
    v130 = *((_QWORD *)this + 24);
    if ( v130 )
    {
      updated = DxgkHandleThermalCoolingDrtEscape(v130, a2);
      goto LABEL_69;
    }
LABEL_193:
    LODWORD(v10) = -1073741823;
    return (unsigned int)v10;
  }
  if ( (int)v24 > 27 )
  {
    v184 = (unsigned int)(v24 - 28);
    if ( (_DWORD)v184 )
    {
      v185 = v184 - 1;
      if ( !v185 )
      {
        updated = DrtTestSignalEventCb(this, a2);
        goto LABEL_69;
      }
      v186 = v185 - 1;
      if ( !v186 )
      {
        if ( (*((_DWORD *)this + 479) & 0x800) != 0 )
        {
          v246 = this;
          v247 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v245);
          if ( *((_QWORD *)this + 320) )
          {
            if ( *((_DWORD *)this + 44) == 1 )
            {
              LOBYTE(v193) = 1;
              LOBYTE(v192) = 1;
              LODWORD(v10) = ADAPTER_RENDER::EnableIoMmuIsolation(*((ADAPTER_RENDER **)this + 320), v192, v193);
            }
            else
            {
              LODWORD(v10) = 0;
            }
          }
          if ( v247 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v245);
        }
        return (unsigned int)v10;
      }
      v187 = (unsigned int)(v186 - 1);
      if ( !(_DWORD)v187 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        {
          v17 = WdLogNewEntry5_WdWarning(v187, v18, v20);
          *(_QWORD *)(v17 + 24) = 1141LL;
          goto LABEL_241;
        }
        updated = DrtTestUpdateRegistryForNewOverride(
                    *(struct _LUID *)((char *)a2 + 12),
                    *((_DWORD *)a2 + 5),
                    *((_DWORD *)a2 + 6));
        goto LABEL_69;
      }
      v30 = (unsigned int)(v187 - 3);
      if ( !(_DWORD)v30 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          v188 = *((unsigned int *)a2 + 3);
          if ( (unsigned int)(v188 - 1) <= 1 )
          {
            if ( *((int *)this + 613) >= 2600 && *((_QWORD *)this + 319) && *((_QWORD *)this + 320) )
            {
              DiagnosticInfoArgs = (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)DxgAllocateDiagnosticInfoArgs(v188);
              v191 = DiagnosticInfoArgs;
              if ( DiagnosticInfoArgs )
              {
                LODWORD(v10) = DXGADAPTER::DdiCollectDiagnosticInfo(this, DiagnosticInfoArgs, v190);
                DxgFreeDiagnosticInfoArgs(v191);
              }
              else
              {
                LODWORD(v10) = -1073741801;
              }
            }
            return (unsigned int)v10;
          }
          v17 = WdLogNewEntry5_WdWarning(v188, v18, v20);
          *(_QWORD *)(v17 + 24) = 1169LL;
        }
        else
        {
          v17 = WdLogNewEntry5_WdWarning(v30, v18, v20);
          *(_QWORD *)(v17 + 24) = 1155LL;
        }
        goto LABEL_241;
      }
      if ( (_DWORD)v30 != 1 )
        goto LABEL_294;
      if ( g_OSTestSigningEnabled )
      {
        if ( *((_DWORD *)a2 + 1) < 0x18u )
        {
          v17 = WdLogNewEntry5_WdWarning(v30, v18, v20);
          *(_QWORD *)(v17 + 24) = 1205LL;
          goto LABEL_241;
        }
        updated = DxgkSetIndirectDisplayRenderAdapter(*((_DWORD *)a2 + 3), (struct _LUID *)a2 + 2);
        goto LABEL_69;
      }
    }
    else
    {
      if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
        return 3221225485LL;
      v194 = DXGPROCESS::GetCurrent(v184, v18);
      if ( v194 )
      {
        *((_BYTE *)v194 + 299) = *((_BYTE *)v194 + 299) & 0x7F | (*((_BYTE *)a2 + 12) << 7);
        return (unsigned int)v10;
      }
    }
    return 3221225506LL;
  }
  if ( (_DWORD)v24 == 27 )
  {
    updated = VailDRTTest((struct DXGADAPTER *const)v24, a2);
    goto LABEL_69;
  }
  v133 = (unsigned int)(v24 - 20);
  if ( !(_DWORD)v133 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x18u )
    {
      v17 = WdLogNewEntry5_WdWarning(v133, v18, v20);
      *(_QWORD *)(v17 + 24) = 554LL;
      goto LABEL_241;
    }
    v162 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v133, v18);
    v166 = (__int64)v162;
    if ( !v162 )
    {
      v36 = WdLogNewEntry5_WdError(v164, v163, v165);
      *(_QWORD *)(v36 + 24) = 562LL;
      goto LABEL_36;
    }
    v228 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v199, *((_DWORD *)a2 + 3), v162, &v228);
    v170 = v228;
    if ( !v228 )
    {
      v171 = WdLogNewEntry5_WdError(v168, v167, v169);
      *(_QWORD *)(v171 + 24) = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v171);
      LODWORD(v10) = -1073741811;
      v196 = -1073741811;
      v172 = v199;
      if ( !v199 )
        return (unsigned int)v10;
      goto LABEL_264;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v204, v170);
    v210 = *(_QWORD *)(*((_QWORD *)v170 + 2) + 16LL);
    v211 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v209);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v264, (__int64)v170, 0, v173, 0);
    LODWORD(v10) = COREDEVICEACCESS::AcquireShared((__int64)v264, 0xFFFFFFFF, 0LL);
    v196 = v10;
    if ( (int)v10 < 0 )
    {
LABEL_267:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v264);
      if ( v211 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v209);
      if ( v204[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v204);
      v172 = v199;
      if ( !v199 )
        return (unsigned int)v10;
LABEL_264:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v172 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_54;
      v68 = v199;
      goto LABEL_139;
    }
    v201 = 0LL;
    v174 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                        v166,
                                        (DXGALLOCATIONREFERENCE *)&v223,
                                        *((_DWORD *)a2 + 4));
    DXGALLOCATIONREFERENCE::MoveAssign(&v201, v174);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v223, v175);
    v179 = v201;
    if ( v201 )
    {
      v182 = (_QWORD *)*((_QWORD *)v170 + 2);
      v183 = *(_QWORD *)(v201[1].Count + 16);
      if ( *(_QWORD *)(v183 + 16) == v182[2] )
      {
        if ( *((_BYTE *)a2 + 20) )
        {
          if ( (v201[9].Count & 0x800) == 0 )
          {
            v198 = 0LL;
            LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, char *, __int64 *))(*(_QWORD *)(v182[68] + 8LL)
                                                                                           + 224LL))(
                             v182[69],
                             v201[3].Count,
                             v236,
                             &v198);
            v196 = v10;
            if ( (int)v10 >= 0 )
              LODWORD(v179[9].Count) |= 0x800u;
            goto LABEL_276;
          }
          v180 = (_QWORD *)WdLogNewEntry5_WdError(v183, v176, v182);
          v180[3] = 610LL;
        }
        else
        {
          if ( (v201[9].Count & 0x800) != 0 )
          {
            (*(void (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(v182[68] + 8LL) + 232LL))(v182[69], v201[3].Count);
            goto LABEL_276;
          }
          v180 = (_QWORD *)WdLogNewEntry5_WdError(v183, v176, v182);
          v180[3] = 629LL;
        }
      }
      else
      {
        v180 = (_QWORD *)WdLogNewEntry5_WdError(v183, v176, v182);
        v180[3] = v170;
        v180[4] = v179;
        v180[5] = -1073741811LL;
      }
    }
    else
    {
      v180 = (_QWORD *)WdLogNewEntry5_WdError(v177, v176, v178);
      v180[3] = *((unsigned int *)a2 + 4);
    }
    WdLogEvent5_WdError(v180);
    LODWORD(v10) = -1073741811;
    v196 = -1073741811;
LABEL_276:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v201, v181);
    goto LABEL_267;
  }
  v134 = (unsigned int)(v133 - 1);
  if ( !(_DWORD)v134 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x18u )
    {
      v17 = WdLogNewEntry5_WdWarning(v134, v18, v20);
      *(_QWORD *)(v17 + 24) = 642LL;
      goto LABEL_241;
    }
    v149 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v134, v18);
    if ( !v149 )
    {
      v36 = WdLogNewEntry5_WdError(v151, v150, v152);
      *(_QWORD *)(v36 + 24) = 650LL;
      goto LABEL_36;
    }
    v218 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v203, *((_DWORD *)a2 + 3), v149, &v218);
    if ( v218 )
    {
      v157 = ObReferenceObjectByHandle(*((HANDLE *)a2 + 2), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v10 = v157;
      v196 = v157;
      if ( v157 >= 0 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v248, v218);
        KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
        if ( v248[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v248);
      }
      else
      {
        v161 = WdLogNewEntry5_WdError(v159, v158, v160);
        *(_QWORD *)(v161 + 24) = v10;
        WdLogEvent5_WdError(v161);
      }
    }
    else
    {
      v156 = WdLogNewEntry5_WdError(v154, v153, v155);
      *(_QWORD *)(v156 + 24) = *((unsigned int *)a2 + 3);
      WdLogEvent5_WdError(v156);
      LODWORD(v10) = -1073741811;
      v196 = -1073741811;
    }
    if ( !v203 )
      return (unsigned int)v10;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v203 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_54;
    v68 = (ADAPTER_RENDER **)v203;
    goto LABEL_139;
  }
  v135 = (unsigned int)(v134 - 1);
  if ( !(_DWORD)v135 )
  {
    v145 = DXGPROCESS::GetCurrent(v135, v18);
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v250, v145);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v250, 0);
    v148 = CCD_BTL::Global(v147, v146);
    CCD_TOPOLOGY::Clear((struct CCD_BTL *)((char *)v148 + 8));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v250);
    return (unsigned int)v10;
  }
  v136 = (unsigned int)(v135 - 1);
  if ( !(_DWORD)v136 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x30u )
    {
      v17 = WdLogNewEntry5_WdWarning(v136, v18, v20);
      *(_QWORD *)(v17 + 24) = 233LL;
      goto LABEL_241;
    }
    updated = DxgkpSendTestVmBusCommand(this, a2, v20);
    goto LABEL_69;
  }
  v137 = v136 - 1;
  if ( !v137 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x10u )
      return 3221225485LL;
    g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
    return (unsigned int)v10;
  }
  v30 = (unsigned int)(v137 - 1);
  if ( !(_DWORD)v30 )
  {
    if ( *((_DWORD *)a2 + 1) < 0x1Cu )
      return 3221225485LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    result = DxgkGetMonitorDeviceObject(
               (const struct _LUID *)((char *)a2 + 12),
               *((_DWORD *)a2 + 5),
               &v237,
               &DeviceObject);
    if ( (int)result < 0 )
      return result;
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    v143 = IoBuildDeviceIoControlRequest(
             0x232433u,
             AttachedDeviceReference,
             (char *)a2 + 24,
             4u,
             0LL,
             0,
             1u,
             &Event,
             &IoStatusBlock);
    if ( v143 )
    {
      Status = IofCallDriver(AttachedDeviceReference, v143);
      if ( Status == 259 )
      {
        while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
          ;
        Status = IoStatusBlock.Status;
      }
      LODWORD(v10) = Status;
    }
    else
    {
      LODWORD(v10) = -1073741823;
    }
    ObfDereferenceObject(AttachedDeviceReference);
    v141 = v237;
    goto LABEL_227;
  }
  if ( (_DWORD)v30 != 1 )
    goto LABEL_294;
  if ( !g_OSTestSigningEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) < 0x14u )
    return 3221225485LL;
  v138 = 0LL;
  v225 = this;
  v226 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v224);
  if ( *((_DWORD *)this + 44) != 1 )
  {
LABEL_223:
    if ( v226 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v224);
    if ( !v138 )
      goto LABEL_193;
    memset(v263, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v263[1]);
    v263[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v263[3]) = 45;
    LOBYTE(v263[6]) = -1;
    v214 = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
    LODWORD(v10) = DxgkPowerOnOffMonitor(
                     (__int64)v138,
                     1u,
                     (_DWORD *)a2 + 3,
                     &v214,
                     1,
                     (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v263);
    v141 = v138;
LABEL_227:
    ObfDereferenceObject(v141);
    return (unsigned int)v10;
  }
  v139 = *((_DWORD *)a2 + 3);
  if ( v139 == -1 )
  {
LABEL_222:
    v138 = (struct _FILE_OBJECT *)*((_QWORD *)this + 24);
    ObfReferenceObject(v138);
    goto LABEL_223;
  }
  IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(this, v139, v197);
  if ( IsTargetInClientVidPnTopology >= 0 )
  {
    if ( !v197[0] )
    {
      if ( v226 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v224);
      return 3221225485LL;
    }
    goto LABEL_222;
  }
  if ( v226 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v224);
  return (unsigned int)IsTargetInClientVidPnTopology;
}
