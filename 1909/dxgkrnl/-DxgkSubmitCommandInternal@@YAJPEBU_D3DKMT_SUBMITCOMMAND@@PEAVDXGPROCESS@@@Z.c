/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010FE00
 * Callers:
 *     DxgkSubmitCommand @ 0x1C0111970 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A200 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A950 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001AAB8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00238D4 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0044AC4 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C01113B0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C01355F8 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C0137424 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C0137470 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C022722C (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0256224 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025990C (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0267C20 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, const GUID *a3)
{
  __int64 v5; // rdx
  _D3DKMT_SUBMITCOMMAND *v6; // rcx
  __int64 v7; // r8
  _D3DKMT_SUBMITCOMMAND *v8; // r14
  const struct _D3DKMT_SUBMITCOMMAND *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGCONTEXT *v16; // r13
  _QWORD *v17; // rax
  __int64 NumPrimaries; // rcx
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 BroadcastContextCount; // rbx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  _BYTE *PoolWithTag; // rcx
  __int64 v29; // r8
  unsigned int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  int v40; // edi
  struct _KEVENT *v41; // rsi
  struct _KEVENT *v42; // rcx
  const GUID *v43; // r8
  __int64 v44; // rcx
  char v45; // di
  __int64 v46; // rcx
  signed __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // rbx
  signed __int64 v53; // rax
  signed __int64 v54; // rtt
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdi
  struct DXGADAPTER *v64; // rbx
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // rax
  unsigned __int64 v70; // rdi
  __int64 v71; // rcx
  const GUID *v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  const GUID *v76; // r8
  struct DXGCONTEXT *v77; // rbx
  _QWORD *v78; // rax
  struct _VIDMM_MULTI_ALLOC **v79; // r12
  __int64 Elements; // rsi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  UINT i; // ebx
  D3DKMT_HANDLE *HistoryBufferArray; // rax
  unsigned int *v88; // rdx
  unsigned int v89; // edi
  struct _EX_RUNDOWN_REF **v90; // rsi
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // r8
  struct _EX_RUNDOWN_REF *v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  const GUID *v99; // r8
  _QWORD *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  const GUID *v103; // r8
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rax
  int v108; // esi
  __int64 v109; // rax
  __int64 v110; // r9
  unsigned __int64 PresentHistoryToken; // rdx
  unsigned int v112; // r9d
  unsigned int *v113; // r10
  DXGGLOBAL **v114; // rcx
  __int64 v115; // rdx
  DXGCONTEXT **v116; // rbx
  __int64 v117; // rcx
  const GUID *v118; // r8
  __int64 v119; // rcx
  const GUID *v120; // r8
  int v121; // [rsp+40h] [rbp-4A8h] BYREF
  __int64 v122; // [rsp+48h] [rbp-4A0h]
  char v123; // [rsp+50h] [rbp-498h]
  unsigned __int8 v124; // [rsp+58h] [rbp-490h]
  PVOID P; // [rsp+60h] [rbp-488h]
  _BYTE v126[32]; // [rsp+68h] [rbp-480h] BYREF
  unsigned int v127; // [rsp+88h] [rbp-460h]
  DXGCONTEXT *v128; // [rsp+90h] [rbp-458h] BYREF
  char v129; // [rsp+98h] [rbp-450h]
  __int64 v130; // [rsp+A0h] [rbp-448h] BYREF
  int v131; // [rsp+A8h] [rbp-440h]
  DXGCONTEXT **v132; // [rsp+B0h] [rbp-438h] BYREF
  unsigned int v133; // [rsp+B8h] [rbp-430h]
  __int64 v134; // [rsp+C0h] [rbp-428h] BYREF
  struct DXGADAPTER *v135; // [rsp+C8h] [rbp-420h]
  char v136; // [rsp+D0h] [rbp-418h]
  struct DXGCONTEXT *v137; // [rsp+D8h] [rbp-410h] BYREF
  unsigned int v138; // [rsp+E0h] [rbp-408h]
  UINT v139; // [rsp+E4h] [rbp-404h]
  struct DXGPROCESS *v140; // [rsp+E8h] [rbp-400h]
  struct DXGPROCESS *v141; // [rsp+F0h] [rbp-3F8h]
  struct _EX_RUNDOWN_REF *v142; // [rsp+F8h] [rbp-3F0h] BYREF
  __int64 v143; // [rsp+100h] [rbp-3E8h]
  __int64 v144; // [rsp+108h] [rbp-3E0h]
  __int64 v145; // [rsp+110h] [rbp-3D8h]
  _QWORD v146[6]; // [rsp+118h] [rbp-3D0h] BYREF
  char v147; // [rsp+148h] [rbp-3A0h]
  _BYTE v148[32]; // [rsp+150h] [rbp-398h] BYREF
  void *v149; // [rsp+170h] [rbp-378h] BYREF
  char v150; // [rsp+178h] [rbp-370h] BYREF
  int v151; // [rsp+1F8h] [rbp-2F0h]
  char v152[8]; // [rsp+200h] [rbp-2E8h] BYREF
  _BYTE v153[16]; // [rsp+208h] [rbp-2E0h] BYREF
  __int64 v154; // [rsp+218h] [rbp-2D0h]
  char v155; // [rsp+220h] [rbp-2C8h]
  int v156; // [rsp+224h] [rbp-2C4h]
  __int64 v157; // [rsp+228h] [rbp-2C0h]
  _BYTE v158[16]; // [rsp+248h] [rbp-2A0h] BYREF
  __int64 v159; // [rsp+258h] [rbp-290h]
  __int64 v160; // [rsp+288h] [rbp-260h]
  char v161; // [rsp+290h] [rbp-258h]
  _BYTE v162[144]; // [rsp+2A0h] [rbp-248h] BYREF
  _D3DKMT_SUBMITCOMMAND v163; // [rsp+330h] [rbp-1B8h] BYREF

  v141 = a2;
  v140 = a2;
  v121 = -1;
  v122 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v123 = 1;
    v121 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2102);
  }
  else
  {
    v123 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v121, 2102LL);
  v124 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v163, 0, sizeof(v163));
  v8 = &v163;
  if ( v124 )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v6 = &v163;
    v5 = 3LL;
    do
    {
      *(_OWORD *)&v6->Commands = *(_OWORD *)&v9->Commands;
      *(_OWORD *)&v6->PresentHistoryToken = *(_OWORD *)&v9->PresentHistoryToken;
      *(_OWORD *)&v6->BroadcastContext[1] = *(_OWORD *)&v9->BroadcastContext[1];
      *(_OWORD *)&v6->BroadcastContext[5] = *(_OWORD *)&v9->BroadcastContext[5];
      *(_OWORD *)&v6->BroadcastContext[9] = *(_OWORD *)&v9->BroadcastContext[9];
      *(_OWORD *)&v6->BroadcastContext[13] = *(_OWORD *)&v9->BroadcastContext[13];
      *(_OWORD *)&v6->BroadcastContext[17] = *(_OWORD *)&v9->BroadcastContext[17];
      v6 = (_D3DKMT_SUBMITCOMMAND *)((char *)v6 + 128);
      *(_OWORD *)&v6[-1].NumHistoryBuffers = *(_OWORD *)&v9->BroadcastContext[21];
      v9 = (const struct _D3DKMT_SUBMITCOMMAND *)((char *)v9 + 128);
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v8 = a1;
  }
  if ( (*((_BYTE *)a2 + 299) & 8) != 0 && (*(_DWORD *)&a1->Flags & 2) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v10 + 24) = 1635LL;
    WdLogEvent5_WdError(v10);
LABEL_222:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121, v11);
    if ( v123 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v119, &EventProfilerExit, v120, v121);
    }
    return 3221225485LL;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v128,
    v8->BroadcastContext[0],
    (struct _KTHREAD **)a2,
    &v137,
    0);
  v16 = v137;
  if ( !v137 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v17[3] = a2;
    NumPrimaries = v8->BroadcastContext[0];
    v17[5] = -1073741811LL;
LABEL_219:
    v17[4] = NumPrimaries;
    goto LABEL_220;
  }
  v19 = *((_DWORD *)v137 + 103);
  if ( (v19 & 0x10) != 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v17[3] = v16;
LABEL_220:
    WdLogEvent5_WdError(v17);
    goto LABEL_221;
  }
  if ( (v19 & 8) != 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v20 + 24) = 1659LL;
    WdLogEvent5_WdWarning(v20);
LABEL_221:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v128);
    goto LABEL_222;
  }
  BroadcastContextCount = v8->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v17[3] = v16;
    NumPrimaries = v8->BroadcastContextCount;
    v17[5] = 64LL;
    goto LABEL_218;
  }
  if ( v8->NumPrimaries > 0x10 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v17[3] = v16;
    NumPrimaries = v8->NumPrimaries;
    v17[5] = 16LL;
LABEL_218:
    v17[6] = -1073741811LL;
    goto LABEL_219;
  }
  v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v137 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v22 + 185) )
  {
    v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v22 + 4144), a2, v8);
LABEL_26:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v128);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121, v24);
    if ( v123 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v25, &EventProfilerExit, v26, v121);
    return (unsigned int)v23;
  }
  PoolWithTag = 0LL;
  P = 0LL;
  v29 = 0LL;
  v127 = 0;
  v30 = 1;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    PoolWithTag = v126;
    P = v126;
  }
  else
  {
    v12 = 0xFFFFFFFFFFFFFFFFuLL % BroadcastContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / BroadcastContextCount < 8 )
      goto LABEL_36;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * BroadcastContextCount, 0x4B677844u);
    P = PoolWithTag;
  }
  v29 = (unsigned int)BroadcastContextCount;
  v127 = BroadcastContextCount;
  if ( !PoolWithTag )
  {
LABEL_37:
    v31 = WdLogNewEntry5_WdLowResource(PoolWithTag, v12, v29, v15);
    *(_QWORD *)(v31 + 24) = 1696LL;
    WdLogEvent5_WdLowResource(v31);
    goto LABEL_38;
  }
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  v29 = v127;
  PoolWithTag = P;
LABEL_36:
  if ( !PoolWithTag )
    goto LABEL_37;
  v132 = (DXGCONTEXT **)PoolWithTag;
  v133 = v29;
  _m_prefetchw((char *)v16 + 32);
  v35 = *((_QWORD *)v16 + 4);
  if ( !v35 )
  {
LABEL_49:
    v37 = WdLogNewEntry5_WdError(PoolWithTag, v12, v29);
    *(_QWORD *)(v37 + 24) = v137;
    WdLogEvent5_WdError(v37);
    goto LABEL_96;
  }
  while ( 1 )
  {
    PoolWithTag = (_BYTE *)(v35 + 1);
    v36 = v35;
    v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 4, v35 + 1, v35);
    if ( v36 == v35 )
      break;
    if ( !v35 )
      goto LABEL_49;
  }
  *(_QWORD *)P = v137;
  v38 = *((_QWORD *)v16 + 2);
  v130 = v38;
  v39 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL);
  if ( *(int *)(v39 + 2184) >= 0x2000 || *(_BYTE *)(v39 + 2484) )
    v40 = *((_DWORD *)DXGGLOBAL::GetGlobal(v39, v12) + 247);
  else
    v40 = 0;
  v131 = v40;
  v41 = *(struct _KEVENT **)(v38 + 16);
  if ( *(_DWORD *)(v38 + 328) == 2 )
  {
    if ( KeReadStateEvent(v41 + 4) )
      goto LABEL_60;
    v42 = v41 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v41 + 3) )
      goto LABEL_60;
    v42 = v41 + 3;
  }
  KeWaitForSingleObject(v42, Executive, 0, 0, 0LL);
LABEL_60:
  KeEnterCriticalRegion();
  if ( v40 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v38 + 112, 0LL) )
      goto LABEL_77;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 96LL));
    v46 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL);
    if ( *(_DWORD *)(v46 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v46, 0xFFFFFFFFLL);
      v45 = 1;
    }
    else
    {
      v45 = 0;
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v38 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v38 + 104), 0) )
      goto LABEL_77;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 96LL));
    v44 = *(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL);
    if ( *(_DWORD *)(v44 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v44, 0xFFFFFFFFLL);
      v45 = 1;
    }
    else
    {
      v45 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v44, &EventBlockThread, v43, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v38 + 104), 1u);
  }
  if ( v45 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v38 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_77:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v148, (struct _KTHREAD **)a2);
  if ( v8->BroadcastContextCount > 1 )
  {
LABEL_78:
    v49 = (v8->BroadcastContext[v30] >> 6) & 0xFFFFFF;
    v50 = v8->BroadcastContext[v30] >> 30;
    if ( (unsigned int)v49 < *((_DWORD *)a2 + 56) )
    {
      v48 = (unsigned int)v49;
      v51 = *((_QWORD *)a2 + 26);
      v47 = *(unsigned int *)(v51 + 16 * v49 + 8);
      if ( (_DWORD)v50 == ((*(_DWORD *)(v51 + 16 * v49 + 8) >> 5) & 3) && (v47 & 0x2000) == 0 && (v47 & 0x1F) != 0 )
      {
        v48 = 2LL * (unsigned int)v49;
        v47 &= 0x1Fu;
        if ( (_BYTE)v47 == 7 )
        {
          v52 = *(_QWORD *)(v51 + 16LL * (unsigned int)v49);
          if ( v52 )
          {
            v50 = *(unsigned int *)(v52 + 412);
            if ( (v50 & 8) == 0 )
            {
              v47 = *(_QWORD *)(v52 + 16);
              if ( v47 == *((_QWORD *)v16 + 2) )
              {
                if ( (v50 & 0x10) == 0 )
                {
                  _m_prefetchw((const void *)(v52 + 32));
                  v53 = *(_QWORD *)(v52 + 32);
                  while ( v53 )
                  {
                    v47 = v53 + 1;
                    v54 = v53;
                    v53 = _InterlockedCompareExchange64((volatile signed __int64 *)(v52 + 32), v53 + 1, v53);
                    if ( v54 == v53 )
                    {
                      *((_QWORD *)P + v30++) = v52;
                      if ( v30 < v8->BroadcastContextCount )
                        goto LABEL_78;
                      goto LABEL_91;
                    }
                  }
                }
                v59 = WdLogNewEntry5_WdError(v47, v50, v48);
                *(_QWORD *)(v59 + 24) = v52;
                WdLogEvent5_WdError(v59);
                DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v148);
LABEL_95:
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v130);
LABEL_96:
                ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v132);
                if ( P != v126 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v127 = 0;
                goto LABEL_221;
              }
            }
          }
          goto LABEL_102;
        }
        v60 = WdLogNewEntry5_WdError(v47, v50, v48);
        *(_QWORD *)(v60 + 24) = 267LL;
        WdLogEvent5_WdError(v60);
      }
    }
    v52 = 0LL;
LABEL_102:
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v47, v50, v48);
    v61[3] = v137;
    v61[4] = v52;
    v61[5] = v30;
    v61[6] = -1073741811LL;
    WdLogEvent5_WdError(v61);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v148);
LABEL_103:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v130);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v132);
    if ( P != v126 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v127 = 0;
    goto LABEL_221;
  }
LABEL_91:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v148);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v146,
    P,
    v127);
  if ( v147 )
  {
    if ( !v146[0] )
    {
      v58 = WdLogNewEntry5_WdWarning(v56, v55, v57);
      *(_QWORD *)(v58 + 24) = 1779LL;
      WdLogEvent5_WdWarning(v58);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v146);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v130);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v132);
LABEL_38:
      if ( P != v126 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v127 = 0;
LABEL_42:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v128);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121, v32);
      if ( v123 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v33, &EventProfilerExit, v34, v121);
      return 3221225495LL;
    }
    v62 = WdLogNewEntry5_WdWarning(v56, v55, v57);
    *(_QWORD *)(v62 + 24) = 1784LL;
    WdLogEvent5_WdWarning(v62);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v146);
    goto LABEL_95;
  }
  v63 = *((_QWORD *)v16 + 2);
  v144 = v63;
  v135 = *(struct DXGADAPTER **)(*(_QWORD *)(v63 + 16) + 16LL);
  v136 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v135 + 3);
  v134 = -1LL;
  v64 = v135;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v64 + 120, 0LL);
  v136 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, v63, 0, v65, 0);
  if ( v155 )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v67, v66);
    v69[3] = 275LL;
    v69[4] = 4LL;
    v69[5] = v153;
    v70 = 0LL;
    v69[6] = 0LL;
    v69[7] = 0LL;
    WdLogEvent5_WdCriticalError(v69);
  }
  else
  {
    v70 = 0LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v154 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v154 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v71, &EventBlockThread, v72, 72);
      KeWaitForSingleObject((PVOID)(v154 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v154, 0x836u, 0LL);
  }
  v156 = 2102;
  v157 = 0LL;
  v155 = 1;
  v73 = *(unsigned int *)(v160 + 464);
  if ( (_DWORD)v73 != 1 )
    goto LABEL_122;
  if ( v161 )
  {
    COREACCESS::AcquireShared((__int64)v158, 0xFFFFFFFF, 0LL);
    v73 = *(unsigned int *)(v159 + 176);
    if ( (_DWORD)v73 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v158);
LABEL_122:
      COREACCESS::Release((COREACCESS *)v153);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
      if ( v136 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v134);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v146);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v130);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v132);
      if ( P != v126 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v127 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v128);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121, v74);
      if ( v123 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v75, &EventProfilerExit, v76, v121);
      return 3221226166LL;
    }
  }
  v77 = v137;
  if ( !*((_BYTE *)v137 + 446) )
  {
    v78 = (_QWORD *)WdLogNewEntry5_WdError(v73, v66, v68);
    v78[3] = a2;
    v78[4] = v8->BroadcastContext[0];
    v78[5] = -1073741811LL;
    v78[6] = 1806LL;
    WdLogEvent5_WdError(v78);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
    if ( v136 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v134);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v146);
    goto LABEL_103;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v162);
  v149 = 0LL;
  v151 = 0;
  v79 = 0LL;
  if ( v8->NumHistoryBuffers )
  {
    Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(v162);
    v143 = Elements;
    v81 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&v149, v8->NumHistoryBuffers);
    v79 = (struct _VIDMM_MULTI_ALLOC **)v81;
    if ( Elements && v81 )
    {
      for ( i = 0; ; ++i )
      {
        v139 = i;
        if ( i >= v8->NumHistoryBuffers )
          break;
        HistoryBufferArray = v8->HistoryBufferArray;
        if ( v124 )
        {
          v88 = &HistoryBufferArray[i];
          if ( (unsigned __int64)v88 >= MmUserProbeAddress )
            v88 = (unsigned int *)MmUserProbeAddress;
          v89 = *v88;
        }
        else
        {
          v89 = HistoryBufferArray[i];
        }
        v138 = v89;
        v90 = (struct _EX_RUNDOWN_REF **)(8LL * i + Elements);
        AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                      (__int64)v141,
                                                      (DXGALLOCATIONREFERENCE *)&v142,
                                                      v89);
        DXGALLOCATIONREFERENCE::MoveAssign(v90, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v142, v92);
        v95 = *v90;
        if ( !*v90 )
        {
          v96 = WdLogNewEntry5_WdError(0LL, v93, v94);
          *(_QWORD *)(v96 + 24) = v89;
          WdLogEvent5_WdError(v96);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v149);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v162);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
          if ( v136 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v134);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v146);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v130);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v132);
          if ( P != v126 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v127 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v128);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121, v97);
          if ( v123 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v98, &EventProfilerExit, v99, v121);
          return 3221225485LL;
        }
        v145 = *((_QWORD *)v16 + 2);
        if ( v95[1].Count != v145 )
        {
          _mm_lfence();
          v100 = (_QWORD *)WdLogNewEntry5_WdError(v95, v93, v94);
          v100[3] = *v90;
          v100[4] = (*v90)[1].Count;
          v100[5] = *((_QWORD *)v16 + 2);
          WdLogEvent5_WdError(v100);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v149);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v162);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
          if ( v136 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v134);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v146);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v130);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v132);
          if ( P != v126 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v127 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v128);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121, v101);
          if ( v123 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v102, &EventProfilerExit, v103, v121);
          return 3221225485LL;
        }
        v79[i] = (struct _VIDMM_MULTI_ALLOC *)v95[3].Count;
        Elements = v143;
      }
      v23 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v144 + 16) + 544LL)
                                                                                        + 8LL)
                                                                            + 1064LL))(
              *(_QWORD *)(*(_QWORD *)(v144 + 16) + 552LL),
              v79);
      if ( v23 >= 0 )
      {
        v77 = v137;
        v70 = 0LL;
        goto LABEL_174;
      }
      v107 = WdLogNewEntry5_WdError(v105, v104, v106);
      *(_QWORD *)(v107 + 24) = 1913LL;
      WdLogEvent5_WdError(v107);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v149);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v162);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
      if ( v136 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v134);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v146);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v130);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v132);
      if ( P != v126 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v127 = 0;
      goto LABEL_26;
    }
    v109 = WdLogNewEntry5_WdLowResource(v83, v82, v84, v85);
    *(_QWORD *)(v109 + 24) = 1841LL;
    WdLogEvent5_WdLowResource(v109);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v149);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v162);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
    if ( v136 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v134);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v146);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v130);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v132);
    if ( P != v126 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v127 = 0;
    goto LABEL_42;
  }
LABEL_174:
  if ( !v8->CommandLength )
  {
    v108 = 0;
LABEL_183:
    v110 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 1792LL);
    PresentHistoryToken = 0LL;
    if ( ((*(_DWORD *)&v8->Flags >> 1) & 1) != 0 )
    {
      PresentHistoryToken = v8->PresentHistoryToken;
    }
    else if ( v110 && *(_QWORD *)v110 && *(_DWORD *)(v110 + 12) != *((_DWORD *)v77 + 6) )
    {
      PresentHistoryToken = *(_QWORD *)v110;
    }
    if ( PresentHistoryToken )
    {
      v112 = v8->BroadcastContextCount;
      v113 = &v8->BroadcastContext[1];
      if ( v112 <= 1 )
        v113 = 0LL;
      v108 = DXGCONTEXT::HandleVistaBltStub(
               v77,
               PresentHistoryToken,
               (*(_DWORD *)&v8->Flags >> 1) & 1,
               (struct COREDEVICEACCESS *)v152,
               (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v134,
               v112 - 1,
               v113,
               (struct DXGCONTEXT **)P);
    }
    goto LABEL_193;
  }
  v108 = DXGCONTEXT::SubmitCommand(
           v77,
           v8,
           (struct COREDEVICEACCESS *)v152,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v134,
           (struct DXGCONTEXT **)P,
           v79,
           v8->NumHistoryBuffers,
           v124);
  if ( v108 >= 0 )
    goto LABEL_183;
LABEL_193:
  if ( v149 != &v150 )
    operator delete[](v149);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v162);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
  if ( v136 )
  {
    v136 = 0;
    ExReleasePushLockSharedEx((char *)v135 + 120, 0LL);
    KeLeaveCriticalRegion();
    v114 = (DXGGLOBAL **)v135;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v135 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v114[2], (struct DXGADAPTER *)v114);
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v146);
  if ( v131 )
    ExReleasePushLockSharedEx(v130 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v130 + 104));
  KeLeaveCriticalRegion();
  v116 = v132;
  if ( v132 && v133 )
  {
    v70 = v133;
    do
    {
      if ( *v116 )
        DXGCONTEXT::ReleaseReference(*v116);
      ++v116;
      --v70;
    }
    while ( v70 );
  }
  if ( P != v126 && P )
    ExFreePoolWithTag(P, 0);
  P = (PVOID)v70;
  v127 = v70;
  if ( v128 && !v129 )
    DXGCONTEXT::ReleaseReference(v128);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121, v115);
  if ( v123 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v117, &EventProfilerExit, v118, v121);
  return (unsigned int)v108;
}
