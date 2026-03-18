/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010ACB0
 * Callers:
 *     DxgkSubmitCommand @ 0x1C010B980 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229B90 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BC08 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C1C0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000D348 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000D3B8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A710 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A838 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0023884 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0044964 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01025B4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C010B3C0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0131D88 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C01336D4 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C0133720 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C0226BBC (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0255BA4 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025928C (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0267590 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(
        const struct _D3DKMT_SUBMITCOMMAND *a1,
        struct _KTHREAD **a2,
        const GUID *a3)
{
  const struct _D3DKMT_SUBMITCOMMAND *v4; // rbx
  _D3DKMT_SUBMITCOMMAND *v5; // rsi
  _D3DKMT_SUBMITCOMMAND *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGCONTEXT *v12; // rdi
  int v13; // eax
  unsigned __int64 BroadcastContextCount; // rbx
  __int64 v15; // rcx
  _BYTE *PoolWithTag; // rcx
  __int64 v17; // r8
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // r14d
  struct _KEVENT *v24; // r12
  struct _KEVENT *v25; // r12
  signed __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int i; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r13
  struct DXGADAPTER *v33; // rbx
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  const GUID *v39; // r8
  __int64 v40; // rcx
  struct DXGCONTEXT *v41; // rbx
  struct _VIDMM_MULTI_ALLOC **v42; // r14
  int v43; // r14d
  __int64 v44; // rdx
  unsigned __int64 PresentHistoryToken; // rcx
  DXGGLOBAL **v46; // rcx
  __int64 v47; // rdx
  DXGCONTEXT **v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // rcx
  const GUID *v51; // r8
  _QWORD *v53; // rax
  __int64 NumPrimaries; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  const GUID *v57; // r8
  __int64 v58; // rax
  unsigned int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rcx
  const GUID *v62; // r8
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  const GUID *v66; // r8
  const GUID *v67; // r8
  __int64 v68; // rcx
  char v69; // r14
  __int64 v70; // rcx
  char v71; // r12
  __int64 v72; // rdx
  __int64 v73; // rax
  struct _KTHREAD *v74; // rbx
  __int64 v75; // rbx
  signed __int64 v76; // rax
  signed __int64 v77; // rtt
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  const GUID *v86; // r8
  _QWORD *v87; // rax
  __int64 Elements; // r12
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 j; // r12
  D3DKMT_HANDLE *HistoryBufferArray; // rax
  unsigned int *v96; // rdx
  unsigned int v97; // eax
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  const GUID *v105; // r8
  _QWORD *v106; // rax
  __int64 v107; // r8
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rcx
  const GUID *v111; // r8
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  int v115; // r12d
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  const GUID *v119; // r8
  __int64 v120; // rax
  unsigned int v121; // r9d
  unsigned int *v122; // r10
  _QWORD *v123; // rax
  __int64 v124; // rdx
  unsigned __int8 v125; // [rsp+40h] [rbp-4A8h]
  int v126; // [rsp+48h] [rbp-4A0h] BYREF
  __int64 v127; // [rsp+50h] [rbp-498h]
  char v128; // [rsp+58h] [rbp-490h]
  PVOID P; // [rsp+60h] [rbp-488h]
  _BYTE v130[32]; // [rsp+68h] [rbp-480h] BYREF
  unsigned int v131; // [rsp+88h] [rbp-460h]
  DXGCONTEXT *v132; // [rsp+90h] [rbp-458h] BYREF
  char v133; // [rsp+98h] [rbp-450h]
  __int64 v134; // [rsp+A0h] [rbp-448h] BYREF
  int v135; // [rsp+A8h] [rbp-440h]
  DXGCONTEXT **v136; // [rsp+B0h] [rbp-438h] BYREF
  unsigned int v137; // [rsp+B8h] [rbp-430h]
  __int64 v138; // [rsp+C0h] [rbp-428h] BYREF
  struct DXGADAPTER *v139; // [rsp+C8h] [rbp-420h]
  char v140; // [rsp+D0h] [rbp-418h]
  struct DXGCONTEXT *v141; // [rsp+D8h] [rbp-410h] BYREF
  __int64 v142; // [rsp+E0h] [rbp-408h]
  __int64 v143; // [rsp+E8h] [rbp-400h]
  unsigned int v144; // [rsp+F0h] [rbp-3F8h]
  int v145; // [rsp+F4h] [rbp-3F4h]
  __int64 v146; // [rsp+F8h] [rbp-3F0h]
  struct DXGPROCESS *v147; // [rsp+100h] [rbp-3E8h]
  struct _KTHREAD **v148; // [rsp+108h] [rbp-3E0h]
  struct _EX_RUNDOWN_REF *v149; // [rsp+110h] [rbp-3D8h] BYREF
  _QWORD v150[6]; // [rsp+118h] [rbp-3D0h] BYREF
  char v151; // [rsp+148h] [rbp-3A0h]
  _BYTE v152[32]; // [rsp+150h] [rbp-398h] BYREF
  void *v153; // [rsp+170h] [rbp-378h] BYREF
  char v154; // [rsp+178h] [rbp-370h] BYREF
  int v155; // [rsp+1F8h] [rbp-2F0h]
  char v156[8]; // [rsp+200h] [rbp-2E8h] BYREF
  _BYTE v157[16]; // [rsp+208h] [rbp-2E0h] BYREF
  __int64 v158; // [rsp+218h] [rbp-2D0h]
  char v159; // [rsp+220h] [rbp-2C8h]
  int v160; // [rsp+224h] [rbp-2C4h]
  __int64 v161; // [rsp+228h] [rbp-2C0h]
  _BYTE v162[16]; // [rsp+248h] [rbp-2A0h] BYREF
  __int64 v163; // [rsp+258h] [rbp-290h]
  __int64 v164; // [rsp+288h] [rbp-260h]
  char v165; // [rsp+290h] [rbp-258h]
  _BYTE v166[144]; // [rsp+2A0h] [rbp-248h] BYREF
  _D3DKMT_SUBMITCOMMAND v167; // [rsp+330h] [rbp-1B8h] BYREF

  v147 = (struct DXGPROCESS *)a2;
  v4 = a1;
  v148 = a2;
  v126 = -1;
  v127 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v128 = 1;
    v126 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2102);
  }
  else
  {
    v128 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v126, 2102LL);
  v125 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v167, 0, sizeof(v167));
  v5 = &v167;
  if ( v125 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v6 = &v167;
    v7 = 3LL;
    do
    {
      *(_OWORD *)&v6->Commands = *(_OWORD *)&v4->Commands;
      *(_OWORD *)&v6->PresentHistoryToken = *(_OWORD *)&v4->PresentHistoryToken;
      *(_OWORD *)&v6->BroadcastContext[1] = *(_OWORD *)&v4->BroadcastContext[1];
      *(_OWORD *)&v6->BroadcastContext[5] = *(_OWORD *)&v4->BroadcastContext[5];
      *(_OWORD *)&v6->BroadcastContext[9] = *(_OWORD *)&v4->BroadcastContext[9];
      *(_OWORD *)&v6->BroadcastContext[13] = *(_OWORD *)&v4->BroadcastContext[13];
      *(_OWORD *)&v6->BroadcastContext[17] = *(_OWORD *)&v4->BroadcastContext[17];
      v6 = (_D3DKMT_SUBMITCOMMAND *)((char *)v6 + 128);
      *(_OWORD *)&v6[-1].NumHistoryBuffers = *(_OWORD *)&v4->BroadcastContext[21];
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)((char *)v4 + 128);
      --v7;
    }
    while ( v7 );
  }
  else
  {
    v5 = (_D3DKMT_SUBMITCOMMAND *)v4;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132, v5->BroadcastContext[0], a2, &v141, 0);
  v12 = v141;
  if ( !v141 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v53[3] = a2;
    NumPrimaries = v5->BroadcastContext[0];
    v53[5] = -1073741811LL;
LABEL_70:
    v53[4] = NumPrimaries;
LABEL_72:
    WdLogEvent5_WdError(v53);
    goto LABEL_74;
  }
  v13 = *((_DWORD *)v141 + 103);
  if ( (v13 & 0x10) != 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v53[3] = v12;
    goto LABEL_72;
  }
  if ( (v13 & 8) != 0 )
  {
    v58 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v58 + 24) = 1650LL;
    WdLogEvent5_WdWarning(v58);
    goto LABEL_74;
  }
  BroadcastContextCount = v5->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    v123 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v123[3] = v12;
    v123[4] = v5->BroadcastContextCount;
    v123[5] = 64LL;
    v123[6] = -1073741811LL;
    WdLogEvent5_WdError(v123);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126, v124);
    if ( !v128 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_222;
  }
  if ( v5->NumPrimaries > 0x10 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v53[3] = v12;
    NumPrimaries = v5->NumPrimaries;
    v53[5] = 16LL;
    v53[6] = -1073741811LL;
    goto LABEL_70;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v141 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v15 + 185) )
  {
    v59 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v15 + 4144),
            (struct DXGPROCESS *)a2,
            v5);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126, v60);
    if ( v128 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v61, &EventProfilerExit, v62, v126);
    return v59;
  }
  PoolWithTag = 0LL;
  P = 0LL;
  v17 = 0LL;
  v131 = 0;
  if ( (unsigned int)BroadcastContextCount > 4 )
  {
    v8 = 0xFFFFFFFFFFFFFFFFuLL % BroadcastContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / BroadcastContextCount < 8 )
      goto LABEL_18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * BroadcastContextCount, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v130;
    P = v130;
  }
  v17 = (unsigned int)BroadcastContextCount;
  v131 = BroadcastContextCount;
  if ( !PoolWithTag )
    goto LABEL_84;
  memset(PoolWithTag, 0, 8LL * (unsigned int)BroadcastContextCount);
  v17 = v131;
  PoolWithTag = P;
LABEL_18:
  if ( !PoolWithTag )
  {
LABEL_84:
    v63 = WdLogNewEntry5_WdLowResource(PoolWithTag, v8, v17, v11);
    *(_QWORD *)(v63 + 24) = 1687LL;
    WdLogEvent5_WdLowResource(v63);
    if ( P != v130 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v131 = 0;
    goto LABEL_89;
  }
  v136 = (DXGCONTEXT **)PoolWithTag;
  v137 = v17;
  _m_prefetchw((char *)v12 + 32);
  v18 = *((_QWORD *)v12 + 4);
  if ( !v18 )
  {
LABEL_22:
    v20 = WdLogNewEntry5_WdError(PoolWithTag, v8, v17);
    *(_QWORD *)(v20 + 24) = v141;
    WdLogEvent5_WdError(v20);
LABEL_160:
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v136);
    if ( P != v130 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v131 = 0;
    goto LABEL_74;
  }
  while ( 1 )
  {
    PoolWithTag = (_BYTE *)(v18 + 1);
    v19 = v18;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 4, v18 + 1, v18);
    if ( v19 == v18 )
      break;
    if ( !v18 )
      goto LABEL_22;
  }
  *(_QWORD *)P = v141;
  v21 = *((_QWORD *)v12 + 2);
  v134 = v21;
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  if ( *(int *)(v22 + 2184) >= 0x2000 || *(_BYTE *)(v22 + 2484) )
  {
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal(v22, v8) + 247);
    v135 = v23;
  }
  else
  {
    v23 = 0;
    v135 = 0;
  }
  v24 = *(struct _KEVENT **)(v21 + 16);
  if ( *(_DWORD *)(v21 + 328) == 2 )
  {
    v25 = v24 + 4;
    if ( KeReadStateEvent(v25) )
      goto LABEL_27;
  }
  else
  {
    v25 = v24 + 3;
    if ( KeReadStateEvent(v25) )
      goto LABEL_27;
  }
  KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
LABEL_27:
  KeEnterCriticalRegion();
  if ( !v23 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 0) )
      goto LABEL_29;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL));
    v68 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    if ( *(_DWORD *)(v68 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v68, 0xFFFFFFFFLL);
      v69 = 1;
    }
    else
    {
      v69 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v68, &EventBlockThread, v67, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 1u);
    if ( !v69 )
    {
LABEL_111:
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_29;
    }
LABEL_110:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    goto LABEL_111;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL));
    v70 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    if ( *(_DWORD *)(v70 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v70, 0xFFFFFFFFLL);
      v71 = 1;
    }
    else
    {
      v71 = 0;
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 112));
    if ( !v71 )
      goto LABEL_111;
    goto LABEL_110;
  }
LABEL_29:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v152, a2);
  for ( i = 1; i < v5->BroadcastContextCount; ++i )
  {
    v72 = v5->BroadcastContext[i];
    v73 = (v5->BroadcastContext[i] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v73 >= *((_DWORD *)a2 + 56) )
      goto LABEL_132;
    v27 = (unsigned int)v73;
    v74 = a2[26];
    v26 = *((unsigned int *)v74 + 4 * v73 + 2);
    v72 = ((unsigned int)v72 >> 25) & 0x60;
    if ( (_BYTE)v72 != (*((_BYTE *)v74 + 16 * v73 + 8) & 0x60) || (v26 & 0x2000) != 0 || (v26 & 0x1F) == 0 )
      goto LABEL_132;
    v27 = 2LL * (unsigned int)v73;
    v26 &= 0x1Fu;
    if ( (_BYTE)v26 != 7 )
    {
      v80 = WdLogNewEntry5_WdError(v26, v72, v27);
      *(_QWORD *)(v80 + 24) = 267LL;
      WdLogEvent5_WdError(v80);
LABEL_132:
      v75 = 0LL;
LABEL_133:
      v81 = (_QWORD *)WdLogNewEntry5_WdError(v26, v72, v27);
      v81[3] = v141;
      v81[4] = v75;
      v81[5] = i;
      v81[6] = -1073741811LL;
      WdLogEvent5_WdError(v81);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v152);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v136);
      if ( P != v130 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v131 = 0;
LABEL_74:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126, v55);
      if ( !v128 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
LABEL_222:
      McTemplateK0q(v56, &EventProfilerExit, v57, v126);
      return 3221225485LL;
    }
    v75 = *((_QWORD *)v74 + 2 * (unsigned int)v73);
    if ( !v75 )
      goto LABEL_133;
    v26 = *(unsigned int *)(v75 + 412);
    if ( (v26 & 8) != 0 || *(_QWORD *)(v75 + 16) != *((_QWORD *)v12 + 2) )
      goto LABEL_133;
    if ( (v26 & 0x10) != 0 || (_m_prefetchw((const void *)(v75 + 32)), (v76 = *(_QWORD *)(v75 + 32)) == 0) )
    {
LABEL_124:
      v78 = WdLogNewEntry5_WdError(v26, v72, v27);
      *(_QWORD *)(v78 + 24) = v75;
      WdLogEvent5_WdError(v78);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v152);
      goto LABEL_127;
    }
    while ( 1 )
    {
      v26 = v76 + 1;
      v77 = v76;
      v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 32), v76 + 1, v76);
      if ( v77 == v76 )
        break;
      if ( !v76 )
        goto LABEL_124;
    }
    *((_QWORD *)P + i) = v75;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v152);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v150,
    P,
    v131);
  if ( v151 )
  {
    if ( v150[0] )
    {
      v79 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      *(_QWORD *)(v79 + 24) = 1775LL;
      WdLogEvent5_WdWarning(v79);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v150);
LABEL_127:
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v136);
      if ( P != v130 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v131 = 0;
      goto LABEL_74;
    }
    v82 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v82 + 24) = 1770LL;
    WdLogEvent5_WdWarning(v82);
    goto LABEL_139;
  }
  v32 = *((_QWORD *)v12 + 2);
  v139 = *(struct DXGADAPTER **)(*(_QWORD *)(v32 + 16) + 16LL);
  v140 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v139 + 3);
  v138 = -1LL;
  v33 = v139;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v33 + 120, 0LL);
  v140 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v156, v32, 0, v34, 0);
  if ( v159 )
  {
    v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35);
    v83[3] = 275LL;
    v83[4] = 4LL;
    v83[5] = v157;
    v83[6] = 0LL;
    v83[7] = 0LL;
    WdLogEvent5_WdCriticalError(v83);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v158 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v158 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v38, &EventBlockThread, v39, 72);
      KeWaitForSingleObject((PVOID)(v158 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v158, 0x836u, 0LL);
  }
  v160 = 2102;
  v161 = 0LL;
  v159 = 1;
  v40 = *(unsigned int *)(v164 + 464);
  if ( (_DWORD)v40 != 1 )
    goto LABEL_148;
  if ( v165 )
  {
    COREACCESS::AcquireShared((__int64)v162, 0xFFFFFFFF, 0LL);
    v40 = *(unsigned int *)(v163 + 176);
    if ( (_DWORD)v40 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v162);
LABEL_148:
      COREACCESS::Release((COREACCESS *)v157);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
      if ( v140 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v138);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v150);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v136);
      if ( P != v130 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v131 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126, v84);
      if ( v128 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v85, &EventProfilerExit, v86, v126);
      return 3221226166LL;
    }
  }
  v41 = v141;
  if ( !*((_BYTE *)v141 + 446) )
  {
    v87 = (_QWORD *)WdLogNewEntry5_WdError(v40, v35, v37);
    v87[3] = v147;
    v87[4] = v5->BroadcastContext[0];
    v87[5] = -1073741811LL;
    v87[6] = 1797LL;
    WdLogEvent5_WdError(v87);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
    if ( v140 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v138);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v150);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
    goto LABEL_160;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v166);
  v153 = 0LL;
  v155 = 0;
  v42 = 0LL;
  if ( !v5->NumHistoryBuffers )
  {
LABEL_41:
    if ( v5->CommandLength )
    {
      v43 = DXGCONTEXT::SubmitCommand(
              v41,
              v5,
              (struct COREDEVICEACCESS *)v156,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v138,
              (struct DXGCONTEXT **)P,
              v42,
              v5->NumHistoryBuffers,
              v125);
      if ( v43 < 0 )
      {
LABEL_46:
        if ( v153 != &v154 )
          operator delete[](v153);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v166);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
        if ( v140 )
        {
          v140 = 0;
          ExReleasePushLockSharedEx((char *)v139 + 120, 0LL);
          KeLeaveCriticalRegion();
          v46 = (DXGGLOBAL **)v139;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v139 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v46[2], (struct DXGADAPTER *)v46);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v150);
        if ( v135 )
          ExReleasePushLockSharedEx(v134 + 112, 0LL);
        else
          ExReleaseResourceLite(*(PERESOURCE *)(v134 + 104));
        KeLeaveCriticalRegion();
        v48 = v136;
        if ( v136 && v137 )
        {
          v49 = v137;
          do
          {
            if ( *v48 )
              DXGCONTEXT::ReleaseReference(*v48);
            ++v48;
            --v49;
          }
          while ( v49 );
        }
        if ( P != v130 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v131 = 0;
        if ( v132 && !v133 )
          DXGCONTEXT::ReleaseReference(v132);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126, v47);
        if ( v128 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v50, &EventProfilerExit, v51, v126);
        return (unsigned int)v43;
      }
    }
    else
    {
      v43 = 0;
    }
    v44 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 1792LL);
    PresentHistoryToken = 0LL;
    if ( ((*(_DWORD *)&v5->Flags >> 1) & 1) != 0 )
    {
      PresentHistoryToken = v5->PresentHistoryToken;
    }
    else if ( v44 && *(_QWORD *)v44 && *(_DWORD *)(v44 + 12) != *((_DWORD *)v41 + 6) )
    {
      PresentHistoryToken = *(_QWORD *)v44;
    }
    if ( PresentHistoryToken )
    {
      v121 = v5->BroadcastContextCount;
      v122 = &v5->BroadcastContext[1];
      if ( v121 <= 1 )
        v122 = 0LL;
      v43 = DXGCONTEXT::HandleVistaBltStub(
              v41,
              PresentHistoryToken,
              (*(_DWORD *)&v5->Flags >> 1) & 1,
              (struct COREDEVICEACCESS *)v156,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v138,
              v121 - 1,
              v122,
              (struct DXGCONTEXT **)P);
    }
    goto LABEL_46;
  }
  Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(v166);
  v142 = Elements;
  v89 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&v153, v5->NumHistoryBuffers);
  v42 = (struct _VIDMM_MULTI_ALLOC **)v89;
  if ( !Elements || !v89 )
  {
    v120 = WdLogNewEntry5_WdLowResource(v91, v90, v92, v93);
    *(_QWORD *)(v120 + 24) = 1832LL;
    WdLogEvent5_WdLowResource(v120);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v153);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v166);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
    if ( v140 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v138);
LABEL_139:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v150);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v136);
    if ( P != v130 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v131 = 0;
LABEL_89:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126, v64);
    if ( v128 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v65, &EventProfilerExit, v66, v126);
    return 3221225495LL;
  }
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    v145 = j;
    if ( (unsigned int)j >= v5->NumHistoryBuffers )
      break;
    HistoryBufferArray = v5->HistoryBufferArray;
    if ( v125 )
    {
      v96 = &HistoryBufferArray[j];
      if ( (unsigned __int64)v96 >= MmUserProbeAddress )
        v96 = (unsigned int *)MmUserProbeAddress;
      v97 = *v96;
    }
    else
    {
      v97 = HistoryBufferArray[j];
    }
    v144 = v97;
    LODWORD(v143) = v97;
    v146 = 8LL * (unsigned int)j;
    AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                  (__int64)v147,
                                                  (DXGALLOCATIONREFERENCE *)&v149,
                                                  v97);
    DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)(v146 + v142), AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v149, v99);
    v101 = *(_QWORD *)(v142 + v146);
    if ( !v101 )
    {
      v102 = WdLogNewEntry5_WdError(0LL, v146, v100);
      *(_QWORD *)(v102 + 24) = (unsigned int)v143;
      WdLogEvent5_WdError(v102);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v153);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v166);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
      if ( v140 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v138);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v150);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v136);
      if ( P != v130 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v131 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126, v103);
      if ( v128 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v104, &EventProfilerExit, v105, v126);
      return 3221225485LL;
    }
    v143 = *((_QWORD *)v12 + 2);
    if ( *(_QWORD *)(v101 + 8) != v143 )
    {
      _mm_lfence();
      v106 = (_QWORD *)WdLogNewEntry5_WdError(v101, v146, v100);
      v107 = v146;
      v108 = v142;
      v106[3] = *(_QWORD *)(v142 + v146);
      v106[4] = *(_QWORD *)(*(_QWORD *)(v108 + v107) + 8LL);
      v106[5] = *((_QWORD *)v12 + 2);
      WdLogEvent5_WdError(v106);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v153);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v166);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
      if ( v140 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v138);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v150);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v136);
      if ( P != v130 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v131 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126, v109);
      if ( v128 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v110, &EventProfilerExit, v111, v126);
      return 3221225485LL;
    }
    v42[(unsigned __int64)v146 / 8] = *(struct _VIDMM_MULTI_ALLOC **)(v101 + 24);
  }
  v115 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 16)
                                                                                                 + 544LL)
                                                                                     + 8LL)
                                                                         + 1064LL))(
           *(_QWORD *)(*(_QWORD *)(v32 + 16) + 552LL),
           v42);
  if ( v115 >= 0 )
    goto LABEL_41;
  v116 = WdLogNewEntry5_WdError(v113, v112, v114);
  *(_QWORD *)(v116 + 24) = 1904LL;
  WdLogEvent5_WdError(v116);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v153);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v166);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v156);
  if ( v140 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v138);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v150);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v136);
  if ( P != v130 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v131 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v132);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v126, v117);
  if ( v128 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v118, &EventProfilerExit, v119, v126);
  return (unsigned int)v115;
}
