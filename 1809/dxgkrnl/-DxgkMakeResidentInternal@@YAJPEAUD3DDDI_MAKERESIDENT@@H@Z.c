/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C01235A0
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C01234E0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     DxgkMakeResident @ 0x1C0123580 (DxgkMakeResident.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F04D0 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010C44 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010F58 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D6A4 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0021074 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0ppqq @ 0x1C003CAF4 (McTemplateK0ppqq.c)
 *     McTemplateK0qxx @ 0x1C003CB8C (McTemplateK0qxx.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C01F5024 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C022164C (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0221688 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, const GUID *a3)
{
  __int64 CurrentProcess; // rax
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct DXGPROCESS *v9; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  bool v15; // zf
  struct D3DDDI_MAKERESIDENT *v16; // rax
  struct D3DDDI_MAKERESIDENT *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGPAGINGQUEUE *v24; // r15
  __int64 v25; // rax
  unsigned __int64 NumAllocations; // rdi
  _BYTE *v27; // r13
  __int64 v28; // rax
  bool v29; // cf
  SIZE_T v30; // rax
  char *v31; // rax
  _BYTE *PoolWithTag; // rcx
  unsigned int *AllocationList; // r12
  __int64 v34; // r13
  struct _KEVENT *v35; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v37; // eax
  int v38; // ebx
  int v39; // esi
  int v40; // r15d
  struct _KEVENT *v41; // rdi
  struct _KEVENT *v42; // rdi
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned __int8 v45; // bl
  const GUID *v46; // r8
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  const GUID *v50; // r8
  __int64 v51; // rcx
  const GUID *v52; // r8
  char v54; // r15
  __int64 v55; // rax
  __int64 v56; // rax
  struct _KTHREAD **v57; // rsi
  struct _KTHREAD ***v58; // rax
  struct _KTHREAD ***v59; // rbx
  struct DXGALLOCATION **v60; // rbx
  unsigned int *v61; // rax
  unsigned int v62; // r8d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct _EX_RUNDOWN_REF *v66; // rax
  ULONG_PTR Count; // rbx
  __int64 v68; // rax
  ULONG_PTR *v69; // rax
  struct _EX_RUNDOWN_REF *v70; // rcx
  __int64 v71; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v73; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v78; // rax
  struct _KTHREAD *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rcx
  int v82; // ebx
  __int64 v83; // rbx
  __int64 *v84; // rax
  __int64 v85; // rbx
  _QWORD *v86; // rax
  __int64 v87; // rcx
  const GUID *v88; // r8
  struct DXGPAGINGQUEUE *v89; // rbx
  __int64 v90; // rdi
  __int64 v91; // rax
  int Resident; // ebx
  struct D3DDDI_MAKERESIDENT *v93; // r15
  int v94; // r8d
  int v95; // esi
  unsigned __int64 *p_PagingFenceValue; // r12
  __int64 v97; // rdx
  __int64 v98; // rcx
  const GUID *v99; // r8
  __int64 v100; // rdi
  unsigned int v101; // esi
  unsigned __int64 *p_NumBytesToTrim; // rbx
  unsigned int HostProcess; // eax
  struct D3DDDI_MAKERESIDENT *v104; // r9
  _QWORD *v105; // rdx
  _QWORD *v106; // rdx
  __int64 v107; // rcx
  const GUID *v108; // r8
  __int64 v109; // rax
  __int64 v110; // rcx
  const GUID *v111; // r8
  int v112; // [rsp+50h] [rbp-418h] BYREF
  __int64 v113; // [rsp+58h] [rbp-410h]
  char v114; // [rsp+60h] [rbp-408h]
  struct _EX_RUNDOWN_REF *v115; // [rsp+68h] [rbp-400h] BYREF
  struct DXGALLOCATION **v116; // [rsp+70h] [rbp-3F8h]
  char v117[8]; // [rsp+78h] [rbp-3F0h] BYREF
  struct D3DDDI_MAKERESIDENT *v118; // [rsp+80h] [rbp-3E8h]
  _BYTE *v119; // [rsp+88h] [rbp-3E0h]
  struct DXGPAGINGQUEUE *v120; // [rsp+90h] [rbp-3D8h] BYREF
  struct DXGPROCESS *v121; // [rsp+98h] [rbp-3D0h]
  struct DXGALLOCATIONREFERENCE *v122; // [rsp+A0h] [rbp-3C8h]
  struct D3DDDI_MAKERESIDENT *v123; // [rsp+A8h] [rbp-3C0h]
  __int64 v124; // [rsp+B0h] [rbp-3B8h] BYREF
  int v125; // [rsp+B8h] [rbp-3B0h]
  ULONG_PTR *v126; // [rsp+C0h] [rbp-3A8h]
  __int64 v127; // [rsp+C8h] [rbp-3A0h]
  unsigned int v128; // [rsp+D0h] [rbp-398h]
  unsigned int *v129; // [rsp+D8h] [rbp-390h]
  struct D3DDDI_MAKERESIDENT *v130; // [rsp+E0h] [rbp-388h]
  _BYTE v131[24]; // [rsp+E8h] [rbp-380h] BYREF
  char v132[8]; // [rsp+100h] [rbp-368h] BYREF
  struct _KTHREAD **v133[2]; // [rsp+108h] [rbp-360h] BYREF
  DXGADAPTER *v134; // [rsp+118h] [rbp-350h]
  char v135; // [rsp+120h] [rbp-348h]
  struct _KTHREAD **v136[5]; // [rsp+128h] [rbp-340h] BYREF
  char v137; // [rsp+150h] [rbp-318h]
  PVOID P; // [rsp+160h] [rbp-308h]
  _BYTE v139[320]; // [rsp+168h] [rbp-300h] BYREF
  int v140; // [rsp+2A8h] [rbp-1C0h]
  _OWORD v141[3]; // [rsp+2B0h] [rbp-1B8h] BYREF
  _BYTE *v142; // [rsp+2E0h] [rbp-188h] BYREF
  _BYTE v143[320]; // [rsp+2E8h] [rbp-180h] BYREF
  int v144; // [rsp+428h] [rbp-40h]

  v123 = a1;
  v130 = a1;
  v112 = -1;
  v113 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v114 = 1;
    v112 = 2115;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2115);
  }
  else
  {
    v114 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v112, 2115);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  v121 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*((_BYTE *)ProcessDxgProcess + 323) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v11 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v9 = *v11;
      v121 = *v11;
    }
    else
    {
      v9 = v121;
    }
  }
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v112);
    v15 = v114 == 0;
LABEL_110:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v112);
    return 3221225485LL;
  }
  v118 = 0LL;
  if ( a2 )
  {
    v16 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v16 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    v141[0] = *(_OWORD *)&v16->hPagingQueue;
    v141[1] = *(_OWORD *)&v16->PriorityList;
    v141[2] = *(_OWORD *)&v16->PagingFenceValue;
    v17 = (struct D3DDDI_MAKERESIDENT *)v141;
    v118 = (struct D3DDDI_MAKERESIDENT *)v141;
    v9 = v121;
  }
  else
  {
    v17 = a1;
    v118 = a1;
  }
  if ( !v17->NumAllocations )
  {
    v18 = WdLogNewEntry5_WdWarning(v9, v7, v8);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
LABEL_109:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v112);
    v15 = v114 == 0;
    goto LABEL_110;
  }
  if ( !v17->AllocationList )
  {
    v19 = WdLogNewEntry5_WdWarning(v9, v7, v8);
    *(_QWORD *)(v19 + 24) = 497LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_109;
  }
  if ( v17->Flags.Value >= 4 )
  {
    v20 = WdLogNewEntry5_WdWarning(v9, v7, v8);
    *(_QWORD *)(v20 + 24) = 504LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_109;
  }
  v120 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
    (DXGPAGINGQUEUEBYHANDLE *)v117,
    v17->hPagingQueue,
    (struct _KTHREAD **)v9,
    &v120,
    1);
  v24 = v120;
  if ( !v120 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = v17->hPagingQueue;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
LABEL_108:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v117);
    goto LABEL_109;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v142);
  P = 0LL;
  v140 = 0;
  NumAllocations = v17->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v27 = v143;
    v122 = (struct DXGALLOCATIONREFERENCE *)v143;
    goto LABEL_36;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 8 )
  {
    v27 = 0LL;
    v122 = 0LL;
    goto LABEL_38;
  }
  v28 = 8LL * (unsigned int)NumAllocations;
  if ( !is_mul_ok((unsigned int)NumAllocations, 8uLL) )
    v28 = -1LL;
  v29 = __CFADD__(v28, 8LL);
  v30 = v28 + 8;
  if ( v29 )
    v30 = -1LL;
  v31 = (char *)operator new[](v30, 0x4B677844u, PagedPool);
  if ( v31 )
  {
    *(_QWORD *)v31 = (unsigned int)NumAllocations;
    v27 = v31 + 8;
    v122 = (struct DXGALLOCATIONREFERENCE *)(v31 + 8);
    `vector constructor iterator'(
      v31 + 8,
      8LL,
      (unsigned int)NumAllocations,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
LABEL_36:
    v142 = v27;
    goto LABEL_37;
  }
  v27 = 0LL;
  v122 = 0LL;
  v142 = 0LL;
LABEL_37:
  v144 = NumAllocations;
  LODWORD(NumAllocations) = v17->NumAllocations;
LABEL_38:
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    PoolWithTag = v139;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations < 8 )
    {
      PoolWithTag = 0LL;
LABEL_45:
      v119 = PoolWithTag;
      goto LABEL_46;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)NumAllocations, 0x4B677844u);
  }
  P = PoolWithTag;
  v119 = PoolWithTag;
  v140 = NumAllocations;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * (unsigned int)NumAllocations);
    PoolWithTag = P;
    goto LABEL_45;
  }
LABEL_46:
  if ( v27 && PoolWithTag )
  {
    AllocationList = (unsigned int *)v17->AllocationList;
    v129 = &AllocationList[v17->NumAllocations];
    v116 = (struct DXGALLOCATION **)v27;
    v126 = (ULONG_PTR *)PoolWithTag;
    v34 = *((_QWORD *)v24 + 2);
    v127 = v34;
    v124 = v34;
    v35 = *(struct _KEVENT **)(v34 + 16);
    Blink = v35->Header.WaitListHead.Blink;
    if ( SLODWORD(Blink[135].Flink) >= 0x2000 || BYTE4(Blink[153].Flink) )
    {
      v37 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v35) + 255);
      v125 = v37;
      v35 = *(struct _KEVENT **)(v34 + 16);
      v38 = v37;
      v39 = v37;
      v40 = v37;
    }
    else
    {
      v125 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
    }
    if ( *(_DWORD *)(v34 + 328) == 2 )
    {
      v41 = v35 + 4;
      if ( !KeReadStateEvent(v35 + 4) )
      {
        KeWaitForSingleObject(v41, Executive, 0, 0, 0LL);
        v38 = v39;
      }
    }
    else
    {
      v42 = v35 + 3;
      v38 = v37;
      if ( !KeReadStateEvent(v35 + 3) )
      {
        KeWaitForSingleObject(v42, Executive, 0, 0, 0LL);
        v38 = v40;
      }
    }
    KeEnterCriticalRegion();
    if ( v38 )
    {
      if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v34 + 112, 0LL) )
        goto LABEL_68;
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 96LL));
      v45 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v34 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v34 + 112));
    }
    else
    {
      if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v34 + 104), 0) )
        goto LABEL_68;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 96LL));
      v45 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v34 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v44, &EventBlockThread, v46, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v34 + 104), 1u);
    }
    if ( v45 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v34 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
LABEL_68:
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v132, v34, 0, v43, 0);
    if ( v135 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47);
      v48[3] = 275LL;
      v48[4] = 4LL;
      v48[5] = v133;
      v48[6] = 0LL;
      v48[7] = 0LL;
      WdLogEvent5_WdCriticalError(v48);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v134 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v134 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v49, &EventBlockThread, v50, 72);
        KeWaitForSingleObject((char *)v134 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v134);
    }
    v135 = 1;
    if ( *((_DWORD *)v136[4] + 116) != 1 )
      goto LABEL_81;
    if ( v137 )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)v136);
      if ( *((_DWORD *)v136[2] + 44) != 1 )
      {
        COREACCESS::Release(v136);
LABEL_81:
        COREACCESS::Release(v133);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v124);
        if ( P != v139 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v140 = 0;
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v142);
        DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v117);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v112);
        if ( v114 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v51, &EventProfilerExit, v52, v112);
        return 3221226166LL;
      }
    }
    v54 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 185LL);
    v55 = PsGetCurrentProcess();
    v56 = PsGetProcessDxgProcess(v55);
    v57 = (struct _KTHREAD **)v56;
    if ( v56 )
    {
      if ( (*(_BYTE *)(v56 + 323) & 4) != 0 )
      {
        v58 = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v59 = v58;
        if ( v58 )
        {
          ObfDereferenceObject(v58);
          v57 = *v59;
        }
      }
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v131, v57);
LABEL_93:
    v60 = v116;
    while ( AllocationList != v129 )
    {
      if ( a2 )
      {
        v61 = AllocationList;
        if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
          v61 = (unsigned int *)MmUserProbeAddress;
        v62 = *v61;
        v128 = *v61;
      }
      else
      {
        v62 = *AllocationList;
      }
      DXGPROCESS::GetAllocationUnsafe((__int64)v57, (DXGALLOCATIONREFERENCE *)&v115, v62);
      if ( !v115 )
      {
        v66 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v64);
        v66[3].Count = (ULONG_PTR)v115;
        goto LABEL_104;
      }
      if ( v115[1].Count != v34 )
      {
        v66 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v64);
        v66[3].Count = v34;
        v66[4].Count = v115[1].Count;
LABEL_104:
        WdLogEvent5_WdError(v66);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v115);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v131);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v124);
        if ( P != v139 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v140 = 0;
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v142);
        goto LABEL_108;
      }
      if ( !v54 )
      {
        Count = v115[3].Count;
        if ( !Count )
        {
          v68 = WdLogNewEntry5_WdWarning(v64, v63, v65);
          *(_QWORD *)(v68 + 24) = v115;
          WdLogEvent5_WdWarning(v68);
        }
        v69 = v126;
        *v126 = Count;
        v126 = v69 + 1;
        v60 = v116;
      }
      DXGALLOCATIONREFERENCE::MoveAssign(v60++, (struct DXGALLOCATION **)&v115);
      v116 = v60;
      ++AllocationList;
      v70 = v115;
      if ( v115 )
        ExReleaseRundownProtection(v115 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v70) + 255) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v73 = WdLogNewEntry5_WdAssertion(v71);
          *(_QWORD *)(v73 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v73);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v71);
        if ( !CurrentProcessSessionId )
          goto LABEL_93;
        v15 = (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId;
        v60 = v116;
        if ( v15 )
        {
          v75 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v75 = *ThreadWin32Thread;
          }
          v78 = v75 ? *(_QWORD *)(v75 + 80) : 0LL;
          v60 = v116;
          if ( v78 )
          {
            v79 = KeGetCurrentThread();
            if ( !v79 )
            {
              v80 = WdLogNewEntry5_WdAssertion(v76);
              *(_QWORD *)(v80 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v80);
            }
            v82 = PsGetCurrentProcessSessionId(v76);
            if ( !v82 || (unsigned int)PsGetThreadSessionId(v79) != v82 )
              goto LABEL_141;
            v83 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v84 = (__int64 *)PsGetThreadWin32Thread(v79);
              if ( v84 )
                v83 = *v84;
            }
            if ( v83 )
              v85 = *(_QWORD *)(v83 + 80);
            else
LABEL_141:
              v85 = 0LL;
            if ( *(_DWORD *)(v85 + 136) )
            {
              v86 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81);
              v86[3] = 275LL;
              v86[4] = 38LL;
              v86[5] = *(int *)(v85 + 136);
              v86[6] = 0LL;
              v86[7] = 0LL;
              WdLogEvent5_WdCriticalError(v86);
            }
            goto LABEL_93;
          }
        }
      }
    }
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v131);
    if ( v54 )
    {
      v100 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL);
      v101 = *((_DWORD *)v120 + 7);
      v93 = v118;
      p_PagingFenceValue = &v118->PagingFenceValue;
      p_NumBytesToTrim = &v118->NumBytesToTrim;
      HostProcess = DXGPROCESS::GetHostProcess(v121);
      Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v100 + 4152),
                   HostProcess,
                   0,
                   v101,
                   v93->Flags,
                   v93->NumAllocations,
                   v122,
                   p_PagingFenceValue,
                   p_NumBytesToTrim);
    }
    else
    {
      v89 = v120;
      v90 = *((_QWORD *)v120 + 2);
      if ( !*(_BYTE *)(v90 + 1751)
        && (*(_DWORD *)(v90 + 328) != 2
         || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v90 + 16) + 16LL)) < 2000) )
      {
        v91 = WdLogNewEntry5_WdError(v87);
        *(_QWORD *)(v91 + 24) = v89;
        WdLogEvent5_WdError(v91);
        Resident = -1073741637;
        v93 = v118;
        v94 = a2;
        goto LABEL_161;
      }
      v93 = v118;
      v95 = v118->Flags.Value & 1 | 2;
      if ( (v118->Flags.Value & 2) == 0 )
        v95 = v118->Flags.Value & 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0ppqq(
          *(_QWORD *)(*((_QWORD *)v89 + 5) + 32LL),
          &EventMakeResidentBegin,
          v88,
          v89,
          *(_QWORD *)(*((_QWORD *)v89 + 5) + 32LL),
          v118->NumAllocations,
          v118->Flags.Value);
      p_PagingFenceValue = &v93->PagingFenceValue;
      Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 16) + 544LL) + 8LL) + 768LL))(
                   *(_QWORD *)(*(_QWORD *)(v90 + 16) + 552LL),
                   *((_QWORD *)v89 + 4),
                   v119,
                   v93->NumAllocations,
                   v95,
                   &v93->PagingFenceValue,
                   &v93->NumBytesToTrim);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0qxx(v98, v97, v99, Resident, v93->NumBytesToTrim, *p_PagingFenceValue);
    }
    v94 = a2;
    if ( Resident >= 0 && a2 )
    {
      v104 = v123;
      v105 = &v123->PagingFenceValue;
      if ( (unsigned __int64)&v123->PagingFenceValue >= MmUserProbeAddress )
        v105 = (_QWORD *)MmUserProbeAddress;
      *v105 = *p_PagingFenceValue;
      goto LABEL_162;
    }
LABEL_161:
    v104 = v123;
LABEL_162:
    if ( v94 )
    {
      v106 = &v104->NumBytesToTrim;
      if ( (unsigned __int64)&v104->NumBytesToTrim >= MmUserProbeAddress )
        v106 = (_QWORD *)MmUserProbeAddress;
      *v106 = v93->NumBytesToTrim;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
    if ( v125 )
      ExReleasePushLockSharedEx(v124 + 112, 0LL);
    else
      ExReleaseResourceLite(*(PERESOURCE *)(v124 + 104));
    KeLeaveCriticalRegion();
    if ( P != v139 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v140 = 0;
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v142);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v117);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v112);
    if ( v114 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v107, &EventProfilerExit, v108, v112);
    return (unsigned int)Resident;
  }
  v109 = WdLogNewEntry5_WdLowResource(PoolWithTag);
  *(_QWORD *)(v109 + 24) = 539LL;
  WdLogEvent5_WdLowResource(v109);
  if ( P != v139 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v140 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v142);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v117);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v112);
  if ( v114 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v110, &EventProfilerExit, v111, v112);
  return 3221225495LL;
}
