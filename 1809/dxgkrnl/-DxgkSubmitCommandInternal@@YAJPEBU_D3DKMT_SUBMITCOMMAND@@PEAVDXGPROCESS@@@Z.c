/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C01109C0
 * Callers:
 *     DxgkSubmitCommand @ 0x1C0112460 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F9A20 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C002231C (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00F54D4 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00F5510 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00F5560 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0111EA0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C012355C (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C01F6B9C (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0224A24 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C02330F0 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, const GUID *a3)
{
  int v5; // r12d
  char CurrentThreadPreviousMode; // al
  _D3DKMT_SUBMITCOMMAND *v7; // rcx
  _D3DKMT_SUBMITCOMMAND *v8; // rsi
  const struct _D3DKMT_SUBMITCOMMAND *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGCONTEXT *v15; // r13
  _QWORD *v16; // rax
  __int64 NumPrimaries; // rcx
  int v18; // eax
  __int64 v19; // rax
  unsigned __int64 BroadcastContextCount; // rdi
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  const GUID *v24; // r8
  _BYTE *PoolWithTag; // rcx
  unsigned int v27; // r8d
  __int64 v28; // rax
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  __int64 v31; // rax
  __int64 v32; // rdi
  struct _KEVENT *v33; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v35; // eax
  int v36; // ebx
  int v37; // r15d
  struct _KEVENT *v38; // r14
  __int64 v39; // rcx
  unsigned __int8 v40; // bl
  const GUID *v41; // r8
  struct _KEVENT *v42; // r14
  struct DXGPROCESS *v43; // r14
  signed __int64 v44; // rcx
  unsigned int v45; // edi
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rbx
  int v49; // edx
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r15
  struct DXGADAPTER *v60; // rbx
  __int64 v61; // r9
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  const GUID *v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rcx
  const GUID *v68; // r8
  struct DXGCONTEXT *v69; // rdi
  _QWORD *v70; // rax
  struct _VIDMM_MULTI_ALLOC **v71; // r12
  unsigned int NumHistoryBuffers; // edx
  char *Elements; // r14
  __int64 v74; // rax
  __int64 v75; // rcx
  UINT i; // ebx
  unsigned int *v77; // rdx
  unsigned int v78; // edi
  struct DXGALLOCATION **v79; // r14
  struct DXGALLOCATION **AllocationSafe; // rax
  struct DXGALLOCATION *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  const GUID *v84; // r8
  _QWORD *v85; // rax
  __int64 v86; // rcx
  const GUID *v87; // r8
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  const GUID *v92; // r8
  __int64 v93; // r9
  unsigned __int64 PresentHistoryToken; // rdx
  unsigned int v95; // r9d
  unsigned int *v96; // r10
  DXGGLOBAL **v97; // rcx
  __int64 v98; // rcx
  const GUID *v99; // r8
  int v100; // [rsp+40h] [rbp-468h] BYREF
  __int64 v101; // [rsp+48h] [rbp-460h]
  char v102; // [rsp+50h] [rbp-458h]
  unsigned __int8 v103; // [rsp+58h] [rbp-450h]
  PVOID P; // [rsp+60h] [rbp-448h]
  _BYTE v105[32]; // [rsp+68h] [rbp-440h] BYREF
  unsigned int v106; // [rsp+88h] [rbp-420h]
  _BYTE v107[16]; // [rsp+90h] [rbp-418h] BYREF
  __int64 v108; // [rsp+A0h] [rbp-408h] BYREF
  int v109; // [rsp+A8h] [rbp-400h]
  __int64 v110; // [rsp+B0h] [rbp-3F8h] BYREF
  struct DXGADAPTER *v111; // [rsp+B8h] [rbp-3F0h]
  char v112; // [rsp+C0h] [rbp-3E8h]
  _BYTE *v113; // [rsp+C8h] [rbp-3E0h] BYREF
  unsigned int v114; // [rsp+D0h] [rbp-3D8h]
  struct DXGCONTEXT *v115; // [rsp+D8h] [rbp-3D0h] BYREF
  unsigned int v116; // [rsp+E0h] [rbp-3C8h]
  UINT v117; // [rsp+E4h] [rbp-3C4h]
  struct DXGPROCESS *v118; // [rsp+E8h] [rbp-3C0h]
  char *v119; // [rsp+F0h] [rbp-3B8h]
  struct DXGPROCESS *v120; // [rsp+F8h] [rbp-3B0h]
  char v121[8]; // [rsp+100h] [rbp-3A8h] BYREF
  struct _KTHREAD **v122[2]; // [rsp+108h] [rbp-3A0h] BYREF
  DXGADAPTER *v123; // [rsp+118h] [rbp-390h]
  char v124; // [rsp+120h] [rbp-388h]
  struct _KTHREAD **v125[5]; // [rsp+128h] [rbp-380h] BYREF
  char v126; // [rsp+150h] [rbp-358h]
  struct _EX_RUNDOWN_REF *v127; // [rsp+160h] [rbp-348h] BYREF
  __int64 v128; // [rsp+168h] [rbp-340h]
  __int64 v129; // [rsp+170h] [rbp-338h]
  _QWORD v130[6]; // [rsp+178h] [rbp-330h] BYREF
  char v131; // [rsp+1A8h] [rbp-300h]
  _BYTE v132[32]; // [rsp+1B0h] [rbp-2F8h] BYREF
  void *v133; // [rsp+1D0h] [rbp-2D8h] BYREF
  char v134; // [rsp+1D8h] [rbp-2D0h] BYREF
  int v135; // [rsp+258h] [rbp-250h]
  DXGALLOCATIONREFERENCE *v136[18]; // [rsp+260h] [rbp-248h] BYREF
  _D3DKMT_SUBMITCOMMAND v137; // [rsp+2F0h] [rbp-1B8h] BYREF

  v118 = a2;
  v120 = a2;
  v100 = -1;
  v5 = 0;
  v101 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v102 = 1;
    v100 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2102);
  }
  else
  {
    v102 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v100, 2102);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v103 = CurrentThreadPreviousMode == 1;
  v8 = &v137;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v7 = &v137;
    v10 = 3LL;
    do
    {
      *(_OWORD *)&v7->Commands = *(_OWORD *)&v9->Commands;
      *(_OWORD *)&v7->PresentHistoryToken = *(_OWORD *)&v9->PresentHistoryToken;
      *(_OWORD *)&v7->BroadcastContext[1] = *(_OWORD *)&v9->BroadcastContext[1];
      *(_OWORD *)&v7->BroadcastContext[5] = *(_OWORD *)&v9->BroadcastContext[5];
      *(_OWORD *)&v7->BroadcastContext[9] = *(_OWORD *)&v9->BroadcastContext[9];
      *(_OWORD *)&v7->BroadcastContext[13] = *(_OWORD *)&v9->BroadcastContext[13];
      *(_OWORD *)&v7->BroadcastContext[17] = *(_OWORD *)&v9->BroadcastContext[17];
      v7 = (_D3DKMT_SUBMITCOMMAND *)((char *)v7 + 128);
      *(_OWORD *)&v7[-1].NumHistoryBuffers = *(_OWORD *)&v9->BroadcastContext[21];
      v9 = (const struct _D3DKMT_SUBMITCOMMAND *)((char *)v9 + 128);
      --v10;
    }
    while ( v10 );
  }
  else
  {
    v8 = a1;
  }
  if ( (*((_BYTE *)a2 + 323) & 8) != 0 && (*(_DWORD *)&a1->Flags & 2) != 0 )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = 1639LL;
    WdLogEvent5_WdError(v11);
LABEL_201:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v100);
    if ( v102 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v98, &EventProfilerExit, v99, v100);
    }
    return 3221225485LL;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v107,
    v8->BroadcastContext[0],
    (struct _KTHREAD **)a2,
    &v115,
    0);
  v15 = v115;
  if ( !v115 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v16[3] = a2;
    NumPrimaries = v8->BroadcastContext[0];
    v16[5] = -1073741811LL;
LABEL_198:
    v16[4] = NumPrimaries;
    goto LABEL_199;
  }
  v18 = *((_DWORD *)v115 + 99);
  if ( (v18 & 0x10) != 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v16[3] = v15;
LABEL_199:
    WdLogEvent5_WdError(v16);
    goto LABEL_200;
  }
  if ( (v18 & 8) != 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v19 + 24) = 1663LL;
    WdLogEvent5_WdWarning(v19);
LABEL_200:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v107);
    goto LABEL_201;
  }
  BroadcastContextCount = v8->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v16[3] = v15;
    NumPrimaries = v8->BroadcastContextCount;
    v16[5] = 64LL;
    goto LABEL_197;
  }
  if ( v8->NumPrimaries > 0x10 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v16[3] = v15;
    NumPrimaries = v8->NumPrimaries;
    v16[5] = 16LL;
LABEL_197:
    v16[6] = -1073741811LL;
    goto LABEL_198;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v115 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v21 + 185) )
  {
    v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v21 + 4152), a2, v8);
LABEL_26:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v107);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v100);
    if ( v102 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v100);
    return (unsigned int)v22;
  }
  PoolWithTag = 0LL;
  P = 0LL;
  v27 = 0;
  v106 = 0;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    PoolWithTag = v105;
    P = v105;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / BroadcastContextCount < 8 )
      goto LABEL_36;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * BroadcastContextCount, 0x4B677844u);
    P = PoolWithTag;
  }
  v106 = BroadcastContextCount;
  if ( !PoolWithTag )
    goto LABEL_37;
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  v27 = v106;
  PoolWithTag = P;
LABEL_36:
  if ( !PoolWithTag )
  {
LABEL_37:
    v28 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v28 + 24) = 1700LL;
    WdLogEvent5_WdLowResource(v28);
    if ( P != v105 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v106 = 0;
LABEL_169:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v107);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v100);
    if ( v102 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v91, &EventProfilerExit, v92, v100);
    return 3221225495LL;
  }
  v113 = PoolWithTag;
  v114 = v27;
  _m_prefetchw((char *)v15 + 32);
  v29 = *((_QWORD *)v15 + 4);
  if ( !v29 )
  {
LABEL_44:
    v31 = WdLogNewEntry5_WdError(PoolWithTag);
    *(_QWORD *)(v31 + 24) = v115;
    WdLogEvent5_WdError(v31);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v113);
    if ( P != v105 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v106 = 0;
    goto LABEL_200;
  }
  while ( 1 )
  {
    PoolWithTag = (_BYTE *)(v29 + 1);
    v30 = v29;
    v29 = _InterlockedCompareExchange64((volatile signed __int64 *)v15 + 4, v29 + 1, v29);
    if ( v30 == v29 )
      break;
    if ( !v29 )
      goto LABEL_44;
  }
  *(_QWORD *)P = v115;
  v32 = *((_QWORD *)v15 + 2);
  v108 = v32;
  v33 = *(struct _KEVENT **)(v32 + 16);
  Blink = v33->Header.WaitListHead.Blink;
  if ( SLODWORD(Blink[135].Flink) >= 0x2000 || BYTE4(Blink[153].Flink) )
  {
    v35 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v33) + 255);
    v109 = v35;
    v33 = *(struct _KEVENT **)(v32 + 16);
    v36 = v35;
    v37 = v35;
    v5 = v35;
  }
  else
  {
    v109 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
  }
  if ( *(_DWORD *)(v32 + 328) == 2 )
  {
    v38 = v33 + 4;
    if ( !KeReadStateEvent(v33 + 4) )
    {
      KeWaitForSingleObject(v38, Executive, 0, 0, 0LL);
      v36 = v37;
    }
  }
  else
  {
    v42 = v33 + 3;
    v36 = v35;
    if ( !KeReadStateEvent(v33 + 3) )
    {
      KeWaitForSingleObject(v42, Executive, 0, 0, 0LL);
      v36 = v5;
    }
  }
  KeEnterCriticalRegion();
  if ( v36 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v32 + 112, 0LL) )
      goto LABEL_68;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 96LL));
    v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v32 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v32 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v32 + 104), 0) )
      goto LABEL_68;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 96LL));
    v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v32 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v39, &EventBlockThread, v41, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v32 + 104), 1u);
  }
  if ( v40 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v32 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_68:
  v43 = v118;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v132, (struct _KTHREAD **)v118);
  if ( v8->BroadcastContextCount > 1 )
  {
    v45 = 1;
LABEL_70:
    v46 = (v8->BroadcastContext[v45] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v46 < *((_DWORD *)v43 + 62) )
    {
      v47 = *((_QWORD *)v43 + 29);
      v44 = *(unsigned int *)(v47 + 16 * v46 + 8);
      if ( v8->BroadcastContext[v45] >> 30 == ((*(_DWORD *)(v47 + 16 * v46 + 8) >> 5) & 3)
        && (v44 & 0x2000) == 0
        && (v44 & 0x1F) != 0 )
      {
        v44 &= 0x1Fu;
        if ( (_BYTE)v44 == 7 )
        {
          v48 = *(_QWORD *)(v47 + 16LL * (unsigned int)v46);
          if ( v48 )
          {
            v49 = *(_DWORD *)(v48 + 396);
            if ( (v49 & 8) == 0 )
            {
              v44 = *(_QWORD *)(v48 + 16);
              if ( v44 == *((_QWORD *)v15 + 2) )
              {
                if ( (v49 & 0x10) == 0 )
                {
                  _m_prefetchw((const void *)(v48 + 32));
                  v50 = *(_QWORD *)(v48 + 32);
                  while ( v50 )
                  {
                    v44 = v50 + 1;
                    v51 = v50;
                    v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 32), v50 + 1, v50);
                    if ( v51 == v50 )
                    {
                      *((_QWORD *)P + v45++) = v48;
                      if ( v45 < v8->BroadcastContextCount )
                        goto LABEL_70;
                      goto LABEL_83;
                    }
                  }
                }
                v56 = (_QWORD *)WdLogNewEntry5_WdError(v44);
                v56[3] = v48;
                goto LABEL_87;
              }
            }
          }
LABEL_94:
          v56 = (_QWORD *)WdLogNewEntry5_WdError(v44);
          v56[3] = v115;
          v56[4] = v48;
          v56[5] = v45;
          v56[6] = -1073741811LL;
LABEL_87:
          WdLogEvent5_WdError(v56);
          DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v132);
          goto LABEL_88;
        }
        v57 = WdLogNewEntry5_WdError(v44);
        *(_QWORD *)(v57 + 24) = 316LL;
        WdLogEvent5_WdError(v57);
      }
    }
    v48 = 0LL;
    goto LABEL_94;
  }
LABEL_83:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v132);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v130,
    P,
    v106);
  if ( v131 )
  {
    if ( v130[0] )
    {
      v58 = WdLogNewEntry5_WdWarning(v53, v52, v54);
      *(_QWORD *)(v58 + 24) = 1788LL;
      WdLogEvent5_WdWarning(v58);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v130);
LABEL_88:
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v108);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v113);
      if ( P != v105 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v106 = 0;
      goto LABEL_200;
    }
    v55 = WdLogNewEntry5_WdWarning(v53, v52, v54);
    *(_QWORD *)(v55 + 24) = 1783LL;
    WdLogEvent5_WdWarning(v55);
LABEL_165:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v130);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v108);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v113);
    if ( P != v105 && P )
      ExFreePoolWithTag(P, 0);
    v106 = 0;
    P = 0LL;
    goto LABEL_169;
  }
  v59 = *((_QWORD *)v15 + 2);
  v128 = v59;
  v111 = *(struct DXGADAPTER **)(*(_QWORD *)(v59 + 16) + 16LL);
  v112 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v111 + 3);
  v110 = -1LL;
  v60 = v111;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v60 + 120, 0LL);
  v112 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v121, v59, 0, v61, 0);
  if ( v124 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v62);
    v63[3] = 275LL;
    v63[4] = 4LL;
    v63[5] = v122;
    v63[6] = 0LL;
    v63[7] = 0LL;
    WdLogEvent5_WdCriticalError(v63);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v123 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v123 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v64, &EventBlockThread, v65, 72);
      KeWaitForSingleObject((char *)v123 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v123);
  }
  v124 = 1;
  v66 = *((unsigned int *)v125[4] + 116);
  if ( (_DWORD)v66 == 1 )
  {
    if ( v126 )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)v125);
      v66 = *((unsigned int *)v125[2] + 44);
      if ( (_DWORD)v66 != 1 )
      {
        COREACCESS::Release(v125);
        goto LABEL_109;
      }
    }
    v69 = v115;
    if ( !*((_BYTE *)v115 + 430) )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdError(v66);
      v70[3] = v43;
      v70[4] = v8->BroadcastContext[0];
      v70[5] = -1073741811LL;
      v70[6] = 1810LL;
      WdLogEvent5_WdError(v70);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
      if ( v112 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v130);
      goto LABEL_88;
    }
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)v136);
    v133 = 0LL;
    v135 = 0;
    v71 = 0LL;
    NumHistoryBuffers = v8->NumHistoryBuffers;
    if ( NumHistoryBuffers )
    {
      Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements((__int64)v136, NumHistoryBuffers);
      v119 = Elements;
      v74 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&v133, v8->NumHistoryBuffers);
      v71 = (struct _VIDMM_MULTI_ALLOC **)v74;
      if ( Elements && v74 )
      {
        for ( i = 0; ; ++i )
        {
          v117 = i;
          if ( i >= v8->NumHistoryBuffers )
            break;
          v77 = &v8->HistoryBufferArray[i];
          if ( v103 )
          {
            if ( (unsigned __int64)v77 >= MmUserProbeAddress )
              v77 = (unsigned int *)MmUserProbeAddress;
            v78 = *v77;
          }
          else
          {
            v78 = *v77;
          }
          v116 = v78;
          v79 = (struct DXGALLOCATION **)&Elements[8 * i];
          AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v118,
                                                      (DXGALLOCATIONREFERENCE *)&v127,
                                                      v78);
          DXGALLOCATIONREFERENCE::MoveAssign(v79, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v127);
          v81 = *v79;
          if ( !*v79 )
          {
            v82 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v82 + 24) = v78;
            WdLogEvent5_WdError(v82);
            PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v133);
            PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v136);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
            if ( v112 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v130);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v108);
            ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v113);
            if ( P != v105 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v106 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v107);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v100);
            if ( v102 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v83, &EventProfilerExit, v84, v100);
            return 3221225485LL;
          }
          v129 = *((_QWORD *)v15 + 2);
          if ( *((_QWORD *)v81 + 1) != v129 )
          {
            _mm_lfence();
            v85 = (_QWORD *)WdLogNewEntry5_WdError(v81);
            v85[3] = *(_QWORD *)&v119[8 * i];
            v85[4] = *((_QWORD *)*v79 + 1);
            v85[5] = *((_QWORD *)v15 + 2);
            WdLogEvent5_WdError(v85);
            PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v133);
            PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v136);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
            if ( v112 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v130);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v108);
            ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v113);
            if ( P != v105 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v106 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v107);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v100);
            if ( v102 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v86, &EventProfilerExit, v87, v100);
            return 3221225485LL;
          }
          v71[i] = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v81 + 3);
          Elements = v119;
        }
        v22 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v128 + 16) + 544LL)
                                                                                          + 8LL)
                                                                              + 1064LL))(
                *(_QWORD *)(*(_QWORD *)(v128 + 16) + 552LL),
                v71);
        if ( v22 >= 0 )
        {
          v69 = v115;
          goto LABEL_161;
        }
        v89 = WdLogNewEntry5_WdError(v88);
        *(_QWORD *)(v89 + 24) = 1917LL;
        WdLogEvent5_WdError(v89);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v133);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v136);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
        if ( v112 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v130);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v108);
        ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v113);
        if ( P != v105 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v106 = 0;
        goto LABEL_26;
      }
      v90 = WdLogNewEntry5_WdLowResource(v75);
      *(_QWORD *)(v90 + 24) = 1845LL;
      WdLogEvent5_WdLowResource(v90);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v133);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v136);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
      if ( v112 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
      goto LABEL_165;
    }
LABEL_161:
    if ( v8->CommandLength )
    {
      v22 = DXGCONTEXT::SubmitCommand(
              v69,
              v8,
              (struct COREDEVICEACCESS *)v121,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v110,
              (struct DXGCONTEXT **)P,
              v71,
              v8->NumHistoryBuffers,
              v103);
      if ( v22 < 0 )
      {
LABEL_184:
        if ( v133 != &v134 )
          operator delete[](v133);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v136);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
        if ( v112 )
        {
          v112 = 0;
          ExReleasePushLockSharedEx((char *)v111 + 120, 0LL);
          KeLeaveCriticalRegion();
          v97 = (DXGGLOBAL **)v111;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v111 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v97[2], (struct DXGADAPTER *)v97);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v130);
        if ( v109 )
          ExReleasePushLockSharedEx(v108 + 112, 0LL);
        else
          ExReleaseResourceLite(*(PERESOURCE *)(v108 + 104));
        KeLeaveCriticalRegion();
        ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v113);
        if ( P != v105 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v106 = 0;
        goto LABEL_26;
      }
    }
    else
    {
      v22 = 0;
    }
    v93 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 1792LL);
    PresentHistoryToken = 0LL;
    if ( ((*(_DWORD *)&v8->Flags >> 1) & 1) != 0 )
    {
      PresentHistoryToken = v8->PresentHistoryToken;
    }
    else if ( v93 && *(_QWORD *)v93 && *(_DWORD *)(v93 + 12) != *((_DWORD *)v69 + 6) )
    {
      PresentHistoryToken = *(_QWORD *)v93;
    }
    if ( PresentHistoryToken )
    {
      v95 = v8->BroadcastContextCount;
      v96 = &v8->BroadcastContext[1];
      if ( v95 <= 1 )
        v96 = 0LL;
      v22 = DXGCONTEXT::HandleVistaBltStub(
              v69,
              PresentHistoryToken,
              (*(_DWORD *)&v8->Flags >> 1) & 1,
              (struct COREDEVICEACCESS *)v121,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v110,
              v95 - 1,
              v96,
              (struct DXGCONTEXT **)P);
    }
    goto LABEL_184;
  }
LABEL_109:
  COREACCESS::Release(v122);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
  if ( v112 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v110);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v130);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v108);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v113);
  if ( P != v105 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v106 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v107);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v100);
  if ( v102 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v67, &EventProfilerExit, v68, v100);
  return 3221226166LL;
}
