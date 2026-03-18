/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00FE090
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C00FD9F0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00EE57C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00FDC9C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00FDCB4 (--1DXGALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        const GUID *a3)
{
  __int64 v3; // rax
  struct DXGTERMINATIONTRACKER *v4; // rsi
  DXGDEVICE *v5; // r13
  void **v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *i; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v30; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v32; // rax
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  int v35; // r14d
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned __int8 v40; // cl
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // r8
  void **v44; // rcx
  void *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  char v51; // r14
  __int64 v52; // rax
  __int64 v53; // rax
  bool v54; // zf
  __int64 j; // rax
  void **v56; // r12
  __int64 v57; // rbx
  int v58; // eax
  __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  void *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  void *v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 *v76; // rax
  __int64 *v77; // rdi
  __int64 v78; // rdi
  int v79; // r13d
  __int64 v80; // rax
  __int64 v81; // rcx
  const GUID *v82; // r8
  int v83; // r9d
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned __int8 v86; // r15
  __int64 v87; // rbx
  struct _KTHREAD *v88; // rbx
  __int64 v89; // rax
  int v90; // r14d
  __int64 v91; // rax
  int v92; // r14d
  __int64 v93; // rdx
  __int64 v94; // r12
  __int64 v95; // rcx
  _QWORD *v96; // rax
  unsigned __int8 v97; // cl
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  void *v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  const GUID *v105; // r8
  char *v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  const GUID *v110; // r8
  int v111; // r9d
  int v112; // eax
  __int64 v113; // rax
  int v114; // [rsp+38h] [rbp-D0h]
  void **v115; // [rsp+40h] [rbp-C8h]
  __int64 v117; // [rsp+50h] [rbp-B8h]
  __int64 v118; // [rsp+50h] [rbp-B8h]
  __int64 v119; // [rsp+58h] [rbp-B0h] BYREF
  void **v120; // [rsp+60h] [rbp-A8h]
  __int64 v121; // [rsp+68h] [rbp-A0h] BYREF
  void **v122; // [rsp+70h] [rbp-98h]
  __int64 v123; // [rsp+78h] [rbp-90h]
  __int64 v124; // [rsp+80h] [rbp-88h]
  int v125; // [rsp+88h] [rbp-80h] BYREF
  __int64 v126; // [rsp+90h] [rbp-78h]
  char v127; // [rsp+98h] [rbp-70h]
  int v128; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v129; // [rsp+A8h] [rbp-60h]
  char v130; // [rsp+B0h] [rbp-58h]
  _BYTE v131[16]; // [rsp+B8h] [rbp-50h] BYREF
  char v132[8]; // [rsp+C8h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-38h] BYREF
  char v134[8]; // [rsp+100h] [rbp-8h] BYREF
  struct _KAPC_STATE v135; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v136[128]; // [rsp+138h] [rbp+30h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = a2;
  v5 = this;
  if ( !*(_QWORD *)a2 || (v6 = *(void ***)(v3 + 64), (v115 = v6) == 0LL) )
  {
    v6 = (void **)v136;
    v115 = (void **)v136;
  }
  v7 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  if ( v3 )
  {
    v8 = WdLogNewEntry5_WdTrace(0LL, a2);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)v4;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v4 + 8LL);
    v7 = *((_QWORD *)a2 + 5);
    *(_QWORD *)(v8 + 32) = v7;
  }
  for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)i[8] )
  {
    v10 = WdLogNewEntry5_WdTrace(v7, a2);
    *(_QWORD *)(v10 + 24) = i;
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(i[1] + 40LL);
    a2 = (struct DXGTERMINATIONTRACKER *)i[3];
    if ( a2 )
    {
      (*(void (__fastcall **)(_QWORD, struct DXGTERMINATIONTRACKER *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 544LL)
                                                                                                 + 8LL)
                                                                                     + 160LL))(
        *(_QWORD *)(*((_QWORD *)v5 + 2) + 552LL),
        a2,
        0LL,
        *((unsigned int *)v4 + 12));
      i[3] = 0LL;
    }
    v7 = i[4];
    if ( v7 )
    {
      v6[(unsigned int)v119] = (void *)v7;
      LODWORD(v119) = v119 + 1;
      i[4] = 0LL;
    }
  }
  if ( (_DWORD)v119 )
  {
    v11 = *((_QWORD *)v5 + 2);
    v120 = v6;
    v125 = -1;
    v126 = 0LL;
    v12 = *((_QWORD *)this + 59);
    v117 = v12;
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      v127 = 1;
      v125 = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v7, &EventProfilerEnter, a3, 5029);
    }
    else
    {
      v127 = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v125, 5029LL);
    CurrentProcess = PsGetCurrentProcess(v14, v13);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v19 = ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v21 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v19 = *v21;
      }
    }
    v114 = 0;
    v22 = v19 + 112;
    if ( !v19 )
      v22 = 0LL;
    if ( v22 && *(struct _KTHREAD **)(v22 + 8) == KeGetCurrentThread() )
    {
      v23 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v23 + 24) = 1448LL;
      WdLogEvent5_WdAssertion(v23);
    }
    if ( v19 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v26 = *(_DWORD *)(v22 + 16);
          if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v24, &EventBlockThread, v25, v26);
        }
        ExAcquirePushLockExclusiveEx(v22, 0LL);
      }
      *(_QWORD *)(v22 + 8) = KeGetCurrentThread();
      v114 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v11 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 16) + 4248LL));
    CurrentIrql = KeGetCurrentIrql();
    v30 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v32 = WdLogNewEntry5_WdAssertion(v28, v27);
        *(_QWORD *)(v32 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v32);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v28, v27);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v30 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v30 )
        {
          v35 = *(_DWORD *)(v30 + 136);
LABEL_46:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v132,
            *(struct DXGADAPTER **)(v11 + 16));
          v37 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v11 + 16) + 592LL))(v12, &v119);
          if ( v132[0] )
            KeUnstackDetachProcess(&ApcState);
          v38 = KeGetCurrentIrql();
          if ( CurrentIrql != (_BYTE)v38 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v36);
            v39[3] = 275LL;
            v39[4] = 16LL;
            v39[5] = v11;
            v39[6] = CurrentIrql;
            v40 = KeGetCurrentIrql();
            v39[7] = v40;
            WdLogEvent5_WdCriticalError(v39);
          }
          if ( v30 && *(_DWORD *)(v30 + 136) != v35 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v36);
            v41[3] = 275LL;
            v41[4] = 38LL;
            v41[5] = *(int *)(v30 + 136);
            v41[6] = v35;
            v41[7] = 0LL;
            WdLogEvent5_WdCriticalError(v41);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 16) + 4248LL));
          v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v36);
          v42[3] = v37;
          v42[4] = v117;
          v42[5] = (unsigned int)v119;
          v44 = v120;
          v45 = *v120;
          v42[6] = *v120;
          if ( (_DWORD)v37 )
          {
            v46 = WdLogNewEntry5_WdError(v44, v45, v43);
            *(_QWORD *)(v46 + 24) = v37;
            WdLogEvent5_WdError(v46);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v11 + 16));
          if ( v114 == 2 )
          {
            *(_QWORD *)(v22 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v22, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v47);
          if ( v127 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v48, &EventProfilerExit, a3, v125);
          v5 = this;
          goto LABEL_61;
        }
      }
      else
      {
        v30 = 0LL;
      }
    }
    v35 = 0;
    goto LABEL_46;
  }
LABEL_61:
  v49 = *(_QWORD *)v4;
  v50 = 0LL;
  v118 = 0LL;
  v51 = 1;
  if ( !*(_QWORD *)v4 )
  {
LABEL_76:
    v56 = v115;
    goto LABEL_77;
  }
  if ( (*(_DWORD *)(v49 + 4) & 1) == 0 )
  {
    v50 = *(_QWORD *)(v49 + 56);
    v118 = v50;
    goto LABEL_76;
  }
  v52 = *(_QWORD *)(v49 + 56);
  if ( v52 )
  {
    v53 = *(_QWORD *)(v52 + 144);
    if ( v53 )
    {
      if ( *(DXGDEVICE **)(v53 + 72) == v5 )
      {
        v54 = (*(_DWORD *)(v53 + 64))-- == 1;
        if ( v54 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v131,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 56LL) + 144LL) + 8LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v131);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 56LL) + 144LL) + 72LL) = 0LL;
          if ( v131[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v131);
        }
      }
    }
    a3 = 0LL;
    for ( j = *(_QWORD *)(*(_QWORD *)v4 + 24LL); j; a3 = (const GUID *)(unsigned int)((_DWORD)a3 + 1) )
      j = *(_QWORD *)(j + 64);
    v49 = *(_QWORD *)(*(_QWORD *)v4 + 56LL);
    v56 = v115;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 60), 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v49, v115, (unsigned int)a3);
    v50 = 0LL;
    v51 = 0;
    *(_QWORD *)(*(_QWORD *)v4 + 56LL) = 0LL;
  }
  else
  {
    v56 = v115;
    v51 = 0;
  }
LABEL_77:
  v57 = *((_QWORD *)v4 + 1);
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  if ( !v57 )
    goto LABEL_99;
  do
  {
    v58 = *(_DWORD *)(v57 + 72);
    v59 = *(_QWORD *)(v57 + 64);
    if ( (v58 & 0x800) != 0 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v49, v50);
      *(_QWORD *)(v60 + 24) = 1904LL;
      WdLogEvent5_WdAssertion(v60);
      v58 = *(_DWORD *)(v57 + 72);
    }
    if ( (v58 & 0x7FE) != 0 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v49, v50);
      *(_QWORD *)(v61 + 24) = 1905LL;
      WdLogEvent5_WdAssertion(v61);
    }
    v62 = *(_QWORD *)(v57 + 48);
    if ( v62 )
    {
      if ( v51 )
      {
        if ( *(_QWORD *)(v62 + 8) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 544LL) + 8LL) + 128LL))(
            *((_QWORD *)v5 + 81),
            0LL);
          *(_QWORD *)(*(_QWORD *)(v57 + 48) + 8LL) = 0LL;
          v62 = *(_QWORD *)(v57 + 48);
        }
        v63 = *(void **)(v62 + 16);
        if ( v63 )
        {
          v56[(unsigned int)v121] = v63;
          LODWORD(v121) = v121 + 1;
          *(_QWORD *)(*(_QWORD *)(v57 + 48) + 16LL) = 0LL;
        }
        goto LABEL_93;
      }
    }
    else if ( v51 )
    {
      goto LABEL_93;
    }
    v64 = *(_QWORD *)v4;
    if ( !*(_QWORD *)v4 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v49, v50);
      *(_QWORD *)(v65 + 24) = 1931LL;
      WdLogEvent5_WdAssertion(v65);
      v64 = *(_QWORD *)v4;
    }
    if ( (*(_DWORD *)(v64 + 4) & 1) == 0 )
    {
      v66 = WdLogNewEntry5_WdAssertion(v49, v50);
      *(_QWORD *)(v66 + 24) = 1932LL;
      WdLogEvent5_WdAssertion(v66);
    }
LABEL_93:
    if ( !*(_QWORD *)v4 || (*(_DWORD *)(*(_QWORD *)v4 + 4LL) & 1) == 0 )
    {
      v67 = *(void **)(v57 + 48);
      if ( v67 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(void ***)(v57 + 48));
        operator delete(v67);
      }
    }
    DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v57);
    ExFreePoolWithTag((PVOID)v57, 0);
    v57 = v59;
  }
  while ( v59 );
  v50 = v118;
LABEL_99:
  if ( v51 )
  {
    v54 = *(_QWORD *)v4 == 0LL;
    v123 = v50;
    LODWORD(v124) = !v54;
    if ( (_DWORD)v121 )
    {
      v122 = v56;
      goto LABEL_104;
    }
    v122 = 0LL;
    if ( v50 )
    {
LABEL_104:
      v68 = *((_QWORD *)v5 + 2);
      if ( !*(_BYTE *)(*(_QWORD *)(v68 + 16) + 185LL) )
      {
        v128 = -1;
        v129 = 0LL;
        if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
        {
          v130 = 1;
          v128 = 5005;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v49, &EventProfilerEnter, a3, 5005);
        }
        else
        {
          v130 = 0;
        }
        DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v128, 5005LL);
        v71 = PsGetCurrentProcess(v70, v69);
        v72 = PsGetProcessDxgProcess(v71);
        v75 = v72;
        if ( !v72 || (*(_BYTE *)(v72 + 299) & 4) != 0 )
        {
          v76 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v77 = v76;
          if ( v76 )
          {
            ObfDereferenceObject(v76);
            v75 = *v77;
          }
        }
        v78 = v75 + 112;
        v79 = 0;
        if ( !v75 )
          v78 = 0LL;
        if ( v78 && *(struct _KTHREAD **)(v78 + 8) == KeGetCurrentThread() )
        {
          v80 = WdLogNewEntry5_WdAssertion(v74, v73);
          *(_QWORD *)(v80 + 24) = 1448LL;
          WdLogEvent5_WdAssertion(v80);
        }
        if ( v75 )
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v78, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v83 = *(_DWORD *)(v78 + 16);
              if ( v83 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v81, &EventBlockThread, v82, v83);
            }
            ExAcquirePushLockExclusiveEx(v78, 0LL);
          }
          v79 = 2;
          *(_QWORD *)(v78 + 8) = KeGetCurrentThread();
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v68 + 16), 1);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v68 + 16) + 4248LL));
        v86 = KeGetCurrentIrql();
        v87 = 0LL;
        if ( v86 < 2u )
        {
          v88 = KeGetCurrentThread();
          if ( !v88 )
          {
            v89 = WdLogNewEntry5_WdAssertion(v85, v84);
            *(_QWORD *)(v89 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v89);
          }
          v90 = PsGetCurrentProcessSessionId(v85, v84);
          if ( v90
            && (unsigned int)PsGetThreadSessionId(v88) == v90
            && !IsThreadCrossSessionAttached()
            && (v91 = PsGetThreadWin32Thread(v88)) != 0
            && *(_QWORD *)v91 )
          {
            v87 = *(_QWORD *)(*(_QWORD *)v91 + 80LL);
            if ( v87 )
            {
              v92 = *(_DWORD *)(v87 + 136);
              goto LABEL_138;
            }
          }
          else
          {
            v87 = 0LL;
          }
        }
        v92 = 0;
LABEL_138:
        DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
          (DXGVALIDATIONPROCESSATTACH *)v134,
          *(struct DXGADAPTER **)(v68 + 16));
        v94 = (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v68 + 16) + 344LL))(
                *(_QWORD *)(*(_QWORD *)(v68 + 16) + 248LL),
                &v121);
        if ( v134[0] )
          KeUnstackDetachProcess(&v135);
        v95 = KeGetCurrentIrql();
        if ( v86 != (_BYTE)v95 )
        {
          v96 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v95, v93);
          v96[3] = 275LL;
          v96[4] = 16LL;
          v96[5] = v68;
          v96[6] = v86;
          v97 = KeGetCurrentIrql();
          v96[7] = v97;
          WdLogEvent5_WdCriticalError(v96);
        }
        if ( v87 && *(_DWORD *)(v87 + 136) != v92 )
        {
          v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v95, v93);
          v98[3] = 275LL;
          v98[4] = 38LL;
          v98[5] = *(int *)(v87 + 136);
          v98[6] = v92;
          v98[7] = 0LL;
          WdLogEvent5_WdCriticalError(v98);
        }
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v68 + 16) + 4248LL));
        v99 = (_QWORD *)WdLogNewEntry5_WdTrace(v95, v93);
        v99[3] = v94;
        v99[4] = (unsigned int)v124;
        v99[5] = v123;
        v99[6] = (unsigned int)v121;
        if ( v122 )
          v102 = *v122;
        else
          v102 = 0LL;
        v99[7] = v102;
        if ( (_DWORD)v94 )
        {
          v103 = WdLogNewEntry5_WdError(v102, v100, v101);
          *(_QWORD *)(v103 + 24) = v94;
          WdLogEvent5_WdError(v103);
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v68 + 16));
        if ( v79 == 2 )
        {
          *(_QWORD *)(v78 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v78, 0LL);
          KeLeaveCriticalRegion();
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v128, v104);
        if ( v130 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v49, &EventProfilerExit, v105, v128);
      }
    }
  }
  v106 = (char *)this + 136;
  if ( this != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)this + 18) == KeGetCurrentThread() )
  {
    v107 = WdLogNewEntry5_WdAssertion(v49, v50);
    *(_QWORD *)(v107 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v107);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v106, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v111 = *((_DWORD *)this + 38);
      if ( v111 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v109, &EventBlockThread, v110, v111);
    }
    ExAcquirePushLockExclusiveEx(v106, 0LL);
  }
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  v112 = *((_DWORD *)this + 438) - 1;
  *((_DWORD *)this + 438) = v112;
  if ( v112 < 0 )
  {
    v113 = WdLogNewEntry5_WdAssertion(v109, v108);
    *(_QWORD *)(v113 + 24) = 1236LL;
    WdLogEvent5_WdAssertion(v113);
    v112 = *((_DWORD *)this + 438);
  }
  if ( !v112 )
    KeSetEvent(*((PRKEVENT *)this + 220), 0, 0);
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx(v106, 0LL);
  KeLeaveCriticalRegion();
}
