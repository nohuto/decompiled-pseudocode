/*
 * XREFs of DxgkRender @ 0x1C00EAB30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C01151A0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0115D80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0130EA0 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C01D88D8 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C01DCD24 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0224A24 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 *ThreadProperty; // rax
  __int64 *v9; // rbx
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rcx
  const GUID *v13; // r8
  bool v14; // zf
  _OWORD *v15; // rax
  _D3DKMT_RENDER *v16; // rcx
  __int64 v17; // rdx
  __int64 hDevice; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGCONTEXT *v22; // r13
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  struct _KEVENT *v31; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v33; // eax
  int v34; // ebx
  int v35; // r14d
  int v36; // r12d
  struct _KEVENT *v37; // rdi
  struct _KEVENT *v38; // rdi
  __int64 v39; // r14
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  unsigned __int8 v44; // bl
  const GUID *v45; // r8
  ULONG BroadcastContextCount; // r14d
  __int64 v47; // rax
  __int64 v48; // rdi
  _QWORD *PoolWithTag; // rcx
  __int64 v50; // rax
  unsigned int v51; // ebx
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // r9
  unsigned int v55; // ecx
  __int64 *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r14
  __int64 v61; // rdx
  int v62; // r8d
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  const GUID *v72; // r8
  struct DXGADAPTER *v73; // rbx
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rcx
  const GUID *v78; // r8
  struct DXGCONTEXT *v80; // rbx
  unsigned __int64 v81; // rcx
  __int64 CommandOffset; // rdi
  _QWORD *v83; // rax
  D3DDDI_ALLOCATIONLIST *CommandLength; // rdx
  __int64 v85; // r14
  _QWORD *v86; // rax
  __int64 AllocationCount; // r15
  __int64 PatchLocationCount; // rdi
  char Flags; // r14
  __int64 v90; // rax
  char v91; // al
  struct DXGALLOCATION **v92; // r12
  struct DXGALLOCATION **v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rcx
  const GUID *v99; // r8
  UINT NewCommandBufferSize; // r12d
  UINT NewAllocationListSize; // r15d
  UINT NewPatchLocationListSize; // r14d
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  int v105; // eax
  int v106; // edx
  __int64 v107; // r8
  __int64 v108; // r9
  _QWORD *v109; // rax
  __int64 v110; // rdx
  ULONG64 v111; // r10
  __int64 v112; // rbx
  DXGGLOBAL **v113; // rcx
  char v114; // [rsp+40h] [rbp-458h]
  int v115; // [rsp+48h] [rbp-450h] BYREF
  __int64 v116; // [rsp+50h] [rbp-448h]
  char v117; // [rsp+58h] [rbp-440h]
  _BYTE v118[16]; // [rsp+60h] [rbp-438h] BYREF
  PVOID P; // [rsp+70h] [rbp-428h]
  _BYTE v120[32]; // [rsp+78h] [rbp-420h] BYREF
  unsigned int v121; // [rsp+98h] [rbp-400h]
  __int64 v122; // [rsp+A0h] [rbp-3F8h] BYREF
  int v123; // [rsp+A8h] [rbp-3F0h]
  unsigned int v124; // [rsp+B0h] [rbp-3E8h] BYREF
  int v125; // [rsp+B4h] [rbp-3E4h] BYREF
  int v126; // [rsp+B8h] [rbp-3E0h] BYREF
  struct DXGCONTEXT *v127; // [rsp+C0h] [rbp-3D8h] BYREF
  __int64 v128; // [rsp+C8h] [rbp-3D0h] BYREF
  struct DXGADAPTER *v129; // [rsp+D0h] [rbp-3C8h]
  char v130; // [rsp+D8h] [rbp-3C0h]
  __int64 v131; // [rsp+E0h] [rbp-3B8h]
  __int64 v132; // [rsp+E8h] [rbp-3B0h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+F0h] [rbp-3A8h]
  __int64 v134; // [rsp+F8h] [rbp-3A0h] BYREF
  ULONG64 v135; // [rsp+100h] [rbp-398h]
  __int64 v136; // [rsp+108h] [rbp-390h]
  __int64 v137; // [rsp+110h] [rbp-388h]
  char v138[8]; // [rsp+120h] [rbp-378h] BYREF
  struct _KTHREAD **v139[2]; // [rsp+128h] [rbp-370h] BYREF
  DXGADAPTER *v140; // [rsp+138h] [rbp-360h]
  char v141; // [rsp+140h] [rbp-358h]
  struct _KTHREAD **v142[5]; // [rsp+148h] [rbp-350h] BYREF
  char v143; // [rsp+170h] [rbp-328h]
  _BYTE v144[24]; // [rsp+180h] [rbp-318h] BYREF
  _QWORD v145[6]; // [rsp+198h] [rbp-300h] BYREF
  char v146; // [rsp+1C8h] [rbp-2D0h]
  __int64 v147; // [rsp+1D0h] [rbp-2C8h]
  __int64 v148; // [rsp+1D8h] [rbp-2C0h]
  PVOID v149; // [rsp+1E0h] [rbp-2B8h] BYREF
  _BYTE v150[256]; // [rsp+1E8h] [rbp-2B0h] BYREF
  int v151; // [rsp+2E8h] [rbp-1B0h]
  _D3DKMT_RENDER v152; // [rsp+2F0h] [rbp-1A8h] BYREF

  v135 = a1;
  v115 = -1;
  v116 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v117 = 1;
    v115 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2013);
  }
  else
  {
    v117 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v115, 2013);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v9 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v9;
      }
    }
  }
  v132 = v7;
  if ( !v7 )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = PsGetCurrentProcess();
    v11 = -1073741811;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    v14 = v117 == 0;
    goto LABEL_87;
  }
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  v16 = &v152;
  v17 = 2LL;
  do
  {
    *(_OWORD *)&v16->hDevice = *v15;
    *(_OWORD *)&v16->PatchLocationCount = v15[1];
    *(_OWORD *)&v16->NewCommandBufferSize = v15[2];
    *(_OWORD *)&v16->NewAllocationListSize = v15[3];
    *(_OWORD *)&v16->NewPatchLocationListSize = v15[4];
    *(_OWORD *)&v16->BroadcastContextCount = v15[5];
    *(_OWORD *)&v16->BroadcastContext[3] = v15[6];
    v16 = (_D3DKMT_RENDER *)((char *)v16 + 128);
    *(_OWORD *)&v16[-1].pPrivateDriverData = v15[7];
    v15 += 8;
    --v17;
  }
  while ( v17 );
  *(_OWORD *)&v16->hDevice = *v15;
  *(_OWORD *)&v16->PatchLocationCount = v15[1];
  *(_OWORD *)&v16->NewCommandBufferSize = v15[2];
  *(_OWORD *)&v16->NewAllocationListSize = v15[3];
  *(_OWORD *)&v16->NewPatchLocationListSize = v15[4];
  *(_OWORD *)&v16->BroadcastContextCount = v15[5];
  *(_OWORD *)&v16->BroadcastContext[3] = v15[6];
  hDevice = v152.hDevice;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118, v152.hDevice, (struct _KTHREAD **)v7, &v127, 0);
  v22 = v127;
  if ( !v127 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v23[3] = v7;
    v23[4] = hDevice;
    v11 = -1073741811;
    v23[5] = -1073741811LL;
    WdLogEvent5_WdError(v23);
    goto LABEL_86;
  }
  v24 = (unsigned int)(*(_DWORD *)&v152.Flags | (*(_DWORD *)&v152.Flags >> 1));
  if ( ((*(_BYTE *)&v152.Flags | (unsigned __int8)(*(_DWORD *)&v152.Flags >> 1)) & 0x20) != 0 )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v25 + 24) = hDevice;
    v11 = -1073741811;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_86;
  }
  v26 = *((_DWORD *)v127 + 99);
  if ( (v26 & 0x10) != 0 )
  {
    v27 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v27 + 24) = v22;
    WdLogEvent5_WdError(v27);
    goto LABEL_95;
  }
  if ( (v26 & 8) != 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(v24, v19, v21);
    *(_QWORD *)(v28 + 24) = 88LL;
    WdLogEvent5_WdWarning(v28);
    goto LABEL_95;
  }
  if ( *((_BYTE *)v127 + 430) )
  {
    v29 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v29 + 24) = hDevice;
    WdLogEvent5_WdError(v29);
LABEL_95:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v71, &EventProfilerExit, v72, v115);
    return (unsigned int)-1073741811;
  }
  v30 = *((_QWORD *)v127 + 2);
  v131 = v30;
  v136 = v30;
  v122 = v30;
  v31 = *(struct _KEVENT **)(v30 + 16);
  Blink = v31->Header.WaitListHead.Blink;
  if ( SLODWORD(Blink[135].Flink) >= 0x2000 || BYTE4(Blink[153].Flink) )
  {
    v33 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v31) + 255);
    v123 = v33;
    v31 = *(struct _KEVENT **)(v30 + 16);
    v34 = v33;
    v35 = v33;
    v36 = v33;
  }
  else
  {
    v123 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
  }
  if ( *(_DWORD *)(v30 + 328) == 2 )
  {
    v37 = v31 + 4;
    if ( !KeReadStateEvent(v31 + 4) )
    {
      KeWaitForSingleObject(v37, Executive, 0, 0, 0LL);
      v34 = v35;
    }
  }
  else
  {
    v38 = v31 + 3;
    v34 = v33;
    if ( !KeReadStateEvent(v31 + 3) )
    {
      KeWaitForSingleObject(v38, Executive, 0, 0, 0LL);
      v34 = v36;
    }
  }
  KeEnterCriticalRegion();
  v39 = v131;
  if ( v34 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v131 + 112, 0LL) )
      goto LABEL_45;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 96LL));
    v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v39 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v39 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v131 + 104), 0) )
      goto LABEL_45;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 96LL));
    v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v39 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v43, &EventBlockThread, v45, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v39 + 104), 1u);
  }
  if ( v44 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v39 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_45:
  BroadcastContextCount = v152.BroadcastContextCount;
  if ( v152.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 16LL))
    || BroadcastContextCount > 0x40 )
  {
    v47 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v47 + 24) = v22;
    v11 = -1073741811;
    *(_QWORD *)(v47 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v47);
    goto LABEL_85;
  }
  v48 = BroadcastContextCount + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v121 = 0;
  if ( (unsigned int)v48 <= 4 )
  {
    PoolWithTag = v120;
    P = v120;
  }
  else
  {
    v40 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v48;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v48 < 8 )
      goto LABEL_55;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v48, 0x4B677844u);
    P = PoolWithTag;
  }
  v121 = BroadcastContextCount + 1;
  if ( !PoolWithTag )
  {
LABEL_56:
    v50 = WdLogNewEntry5_WdWarning(PoolWithTag, v40, v42);
    *(_QWORD *)(v50 + 24) = 129LL;
    WdLogEvent5_WdWarning(v50);
LABEL_57:
    if ( P != v120 && P )
      ExFreePoolWithTag(P, 0);
LABEL_137:
    P = 0LL;
    v121 = 0;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v122);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v98, &EventProfilerExit, v99, v115);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8 * v48);
  PoolWithTag = P;
LABEL_55:
  if ( !PoolWithTag )
    goto LABEL_56;
  *PoolWithTag = v22;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v144, (struct _KTHREAD **)v7);
  v51 = 0;
  if ( !BroadcastContextCount )
  {
LABEL_76:
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v144);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v145,
      P,
      v121);
    if ( v146 )
    {
      if ( v145[0] )
      {
        v70 = WdLogNewEntry5_WdWarning(v65, v64, v66);
        *(_QWORD *)(v70 + 24) = 201LL;
        WdLogEvent5_WdWarning(v70);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
LABEL_91:
        if ( P != v120 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v121 = 0;
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v122);
        goto LABEL_95;
      }
      v67 = WdLogNewEntry5_WdWarning(v65, v64, v66);
      *(_QWORD *)(v67 + 24) = 196LL;
      WdLogEvent5_WdWarning(v67);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
      goto LABEL_57;
    }
    v129 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 16LL);
    v130 = 0;
    _InterlockedIncrement64((volatile signed __int64 *)v129 + 3);
    v128 = -1LL;
    v73 = v129;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v73 + 120, 0LL);
    v130 = 1;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v138, *((_QWORD *)v22 + 2), 0, v74, 0);
    COREACCESS::AcquireShared((DXGADAPTER **)v139);
    if ( *((_DWORD *)v142[4] + 116) != 1 )
    {
LABEL_103:
      COREACCESS::Release(v139);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
      if ( v130 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v128);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
      if ( P != v120 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v121 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v122);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v77, &EventProfilerExit, v78, v115);
      return 3221226166LL;
    }
    if ( v143 )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)v142);
      if ( *((_DWORD *)v142[2] + 44) != 1 )
      {
        COREACCESS::Release(v142);
        goto LABEL_103;
      }
    }
    v80 = v127;
    v81 = *((_QWORD *)v127 + 6);
    CommandOffset = v152.CommandOffset;
    if ( v152.CommandOffset >= v81 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v75, v76);
      v83[3] = v80;
      v83[4] = CommandOffset;
      v83[5] = *((_QWORD *)v80 + 6);
      v11 = -1073741811;
      v83[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v83);
      goto LABEL_175;
    }
    CommandLength = (D3DDDI_ALLOCATIONLIST *)v152.CommandLength;
    v85 = v152.CommandLength;
    if ( v152.CommandLength + (unsigned __int64)v152.CommandOffset <= v81 )
    {
      AllocationCount = v152.AllocationCount;
      if ( v152.AllocationCount <= *((_DWORD *)v127 + 18) )
      {
        PatchLocationCount = v152.PatchLocationCount;
        if ( v152.PatchLocationCount <= *((_DWORD *)v127 + 26) )
        {
          v11 = 0;
          Flags = (char)v152.Flags;
          if ( v152.CommandLength )
          {
            if ( (*(_BYTE *)&v152.Flags & 0x20) != 0 )
            {
              CommandLength = v152.pNewAllocationList;
              pNewAllocationList = v152.pNewAllocationList;
            }
            else
            {
              pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v127 + 11);
            }
            v90 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 16LL);
            if ( *(int *)(v90 + 2160) >= 0x2000 || (v91 = *(_BYTE *)(v90 + 2452)) != 0 )
              v91 = 1;
            v114 = v91;
            v124 = v152.AllocationCount;
            v149 = 0LL;
            v151 = 0;
            v92 = 0LL;
            if ( v91 )
            {
              v93 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                               &v149,
                                               v152.AllocationCount);
              v92 = v93;
              if ( !v93 )
              {
                v97 = WdLogNewEntry5_WdWarning(v95, v94, v96);
                *(_QWORD *)(v97 + 24) = 284LL;
                WdLogEvent5_WdWarning(v97);
                if ( v149 != v150 && v149 )
                  ExFreePoolWithTag(v149, 0);
                v149 = 0LL;
                v151 = 0;
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
                if ( v130 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v128);
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
                if ( P != v120 && P )
                  ExFreePoolWithTag(P, 0);
                goto LABEL_137;
              }
              v11 = DxgkReferenceAllocationList(&v124, pNewAllocationList, v93, *((struct DXGDEVICE **)v22 + 2));
              LODWORD(AllocationCount) = v124;
            }
            if ( v11 >= 0 )
            {
              v11 = DXGCONTEXT::Render(
                      v80,
                      &v152,
                      (struct COREDEVICEACCESS *)v138,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v128,
                      (struct DXGCONTEXT **)P,
                      v92,
                      0LL);
              Flags = (char)v152.Flags;
            }
            if ( v114 )
              DxgkUnreferenceAllocationList(AllocationCount, v92);
            if ( v11 >= 0 && (Flags & 0x10) != 0 )
              v11 = DXGCONTEXT::HandleVistaBltStub(
                      v80,
                      v152.PresentHistoryToken,
                      1,
                      (struct COREDEVICEACCESS *)v138,
                      (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v128,
                      v152.BroadcastContextCount,
                      v152.BroadcastContext,
                      (struct DXGCONTEXT **)P);
            v81 = (unsigned __int64)v149;
            if ( v149 != v150 && v149 )
              ExFreePoolWithTag(v149, 0);
            if ( v11 < 0 )
              goto LABEL_175;
          }
          if ( (Flags & 1) == 0 && (Flags & 2) == 0 && (Flags & 4) == 0 )
          {
LABEL_175:
            v105 = 0;
            v134 = 0LL;
            v106 = 0;
            v125 = 0;
            v107 = 0LL;
            v126 = 0;
            v108 = 0LL;
            if ( v11 != -1073741130 )
            {
              if ( v143 )
                COREACCESS::Release(v142);
              if ( !v141 )
              {
                v109 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81);
                v109[3] = 275LL;
                v109[4] = 4LL;
                v109[5] = v139;
                v109[6] = 0LL;
                v109[7] = 0LL;
                WdLogEvent5_WdCriticalError(v109);
              }
              v141 = 0;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v140 + 20) )
                DXGADAPTER::ReleaseCoreResource(v140);
              v80 = v127;
              if ( !*((_BYTE *)v22 + 430) )
                (*(void (__fastcall **)(_QWORD, __int64 *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 480LL))(
                  *((_QWORD *)v127 + 29),
                  &v134,
                  &v125,
                  &v126);
              v110 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 520LL) + 8LL);
              LODWORD(v108) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v110 + 448))(
                                *((_QWORD *)v80 + 32),
                                v110,
                                v107,
                                v108);
              v105 = v134;
              v106 = v125;
              LODWORD(v107) = v126;
            }
            v147 = *((_QWORD *)v80 + 7);
            v111 = v135;
            *(_QWORD *)(v135 + 24) = v147;
            *(_DWORD *)(v111 + 32) = v105;
            v148 = *((_QWORD *)v80 + 11);
            *(_QWORD *)(v111 + 40) = v148;
            *(_DWORD *)(v111 + 48) = v106;
            v137 = *((_QWORD *)v80 + 15);
            *(_QWORD *)(v111 + 56) = v137;
            *(_DWORD *)(v111 + 64) = v107;
            *(_DWORD *)(v111 + 340) = v108;
            v112 = v131;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
            if ( v130 )
            {
              v130 = 0;
              ExReleasePushLockSharedEx((char *)v129 + 120, 0LL);
              KeLeaveCriticalRegion();
              v113 = (DXGGLOBAL **)v129;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v129 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(v113[2], (struct DXGADAPTER *)v113);
            }
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v145);
            if ( P != v120 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v121 = 0;
            if ( v123 )
              ExReleasePushLockSharedEx(v112 + 112, 0LL);
            else
              ExReleaseResourceLite(*(PERESOURCE *)(v112 + 104));
            KeLeaveCriticalRegion();
            goto LABEL_86;
          }
          NewCommandBufferSize = v152.NewCommandBufferSize;
          if ( (Flags & 1) == 0 )
            NewCommandBufferSize = *((_DWORD *)v80 + 50);
          NewAllocationListSize = v152.NewAllocationListSize;
          if ( (Flags & 2) == 0 )
            NewAllocationListSize = *((_DWORD *)v80 + 53);
          v14 = (Flags & 4) == 0;
          NewPatchLocationListSize = v152.NewPatchLocationListSize;
          if ( v14 )
            NewPatchLocationListSize = *((_DWORD *)v80 + 54);
          v81 = *((unsigned int *)v80 + 50);
          if ( NewCommandBufferSize < (unsigned int)v81 )
            goto LABEL_169;
          if ( NewAllocationListSize >= *((_DWORD *)v80 + 53) && NewPatchLocationListSize >= *((_DWORD *)v80 + 54) )
          {
            if ( DXGADAPTER::IsCoreResourceSharedOwner(v140) )
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)v138);
            DXGCONTEXT::ResizeUserModeBuffers(
              v80,
              *((struct VIDMM_DMA_POOL **)v80 + 29),
              NewCommandBufferSize,
              NewAllocationListSize,
              NewPatchLocationListSize);
            v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v138);
            goto LABEL_175;
          }
          if ( NewCommandBufferSize < (unsigned int)v81 )
          {
LABEL_169:
            v103 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, CommandLength, v76);
            v103[3] = v80;
            v103[4] = NewCommandBufferSize;
            v103[5] = *((unsigned int *)v80 + 50);
            WdLogEvent5_WdWarning(v103);
          }
          if ( NewAllocationListSize < *((_DWORD *)v80 + 53) )
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, CommandLength, v76);
            v104[3] = v80;
            v104[4] = NewAllocationListSize;
            v104[5] = *((unsigned int *)v80 + 53);
            WdLogEvent5_WdWarning(v104);
          }
          if ( NewPatchLocationListSize >= *((_DWORD *)v80 + 54) )
            goto LABEL_175;
          v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, CommandLength, v76);
          v86[3] = v80;
          v86[4] = NewPatchLocationListSize;
          v86[5] = *((unsigned int *)v80 + 54);
        }
        else
        {
          v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v152.CommandLength, v76);
          v86[3] = v80;
          v86[4] = PatchLocationCount;
          v86[5] = *((unsigned int *)v80 + 26);
          v11 = -1073741811;
          v86[6] = -1073741811LL;
        }
      }
      else
      {
        v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v152.CommandLength, v76);
        v86[3] = v80;
        v86[4] = AllocationCount;
        v86[5] = *((unsigned int *)v80 + 18);
        v11 = -1073741811;
        v86[6] = -1073741811LL;
      }
    }
    else
    {
      v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v152.CommandLength, v76);
      v86[3] = v80;
      v86[4] = v85;
      v86[5] = *((_QWORD *)v80 + 6);
      v11 = -1073741811;
      v86[6] = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v86);
    goto LABEL_175;
  }
  while ( 1 )
  {
    v52 = v152.BroadcastContext[v51];
    v53 = (v152.BroadcastContext[v51] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v53 < *(_DWORD *)(v7 + 248) )
    {
      v54 = *(_QWORD *)(v7 + 232);
      v55 = *(_DWORD *)(v54 + 16 * v53 + 8);
      if ( v152.BroadcastContext[v51] >> 30 == ((v55 >> 5) & 3) && (v55 & 0x2000) == 0 && (v55 & 0x1F) != 0 )
      {
        v56 = (__int64 *)(v54 + 16LL * (unsigned int)v53);
        v57 = v55 & 0x1F;
        if ( (_BYTE)v57 == 7 )
        {
          v59 = *v56;
          goto LABEL_69;
        }
        v58 = WdLogNewEntry5_WdError(v57);
        *(_QWORD *)(v58 + 24) = 316LL;
        WdLogEvent5_WdError(v58);
      }
    }
    v59 = 0LL;
LABEL_69:
    v60 = v51 + 1;
    *((_QWORD *)P + v60) = v59;
    v61 = *((_QWORD *)P + v60);
    if ( !v61 )
      break;
    v62 = *(_DWORD *)(v61 + 396);
    if ( (v62 & 8) != 0 )
      break;
    v59 = *(_QWORD *)(v61 + 16);
    if ( v59 != *((_QWORD *)v22 + 2) )
      break;
    if ( (v62 & 0x10) != 0 )
    {
      v68 = WdLogNewEntry5_WdError(v59);
      *(_QWORD *)(v68 + 24) = *((_QWORD *)P + v60);
      WdLogEvent5_WdError(v68);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v144);
      goto LABEL_91;
    }
    if ( *(_BYTE *)(v61 + 430) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v59);
      *(_QWORD *)(v63 + 24) = 183LL;
      WdLogEvent5_WdAssertion(v63);
    }
    ++v51;
    if ( (unsigned int)v60 >= v152.BroadcastContextCount )
      goto LABEL_76;
  }
  v69 = (_QWORD *)WdLogNewEntry5_WdError(v59);
  v69[3] = v22;
  v69[4] = v52;
  v69[5] = v51;
  v11 = -1073741811;
  v69[6] = -1073741811LL;
  WdLogEvent5_WdError(v69);
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v144);
  if ( P != v120 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v121 = 0;
LABEL_85:
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v122);
LABEL_86:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v118);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
  v14 = v117 == 0;
LABEL_87:
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v115);
  return (unsigned int)v11;
}
