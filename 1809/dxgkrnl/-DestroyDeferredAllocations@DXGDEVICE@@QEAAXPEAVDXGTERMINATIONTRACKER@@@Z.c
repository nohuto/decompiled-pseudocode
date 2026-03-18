/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C010E5B0
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C00F9900 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00F9350 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00FA654 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C01109A8 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        const GUID *a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct DXGTERMINATIONTRACKER *v5; // rsi
  DXGDEVICE *v6; // r12
  void **v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *i; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v19; // rdi
  __int64 v20; // rdi
  int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // r9d
  __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v28; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v30; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned __int8 v40; // cl
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  void **v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  char v48; // r13
  __int64 v49; // rax
  __int64 v50; // rax
  bool v51; // zf
  __int64 j; // rax
  __int64 v53; // rdi
  __int64 v54; // r14
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // r15
  struct DXGPROCESS *Current; // rbx
  __int64 v64; // rcx
  const GUID *v65; // r8
  int v66; // r9d
  void *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  void *v71; // rbx
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 *v77; // rax
  __int64 *v78; // rdi
  __int64 v79; // rdi
  int v80; // r13d
  __int64 v81; // rax
  __int64 v82; // rcx
  const GUID *v83; // r8
  int v84; // r9d
  __int64 v85; // rcx
  unsigned __int8 v86; // r15
  __int64 v87; // rbx
  struct _KTHREAD *v88; // rbx
  __int64 v89; // rax
  int v90; // r14d
  __int64 v91; // rax
  int v92; // r14d
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r12
  __int64 v97; // rcx
  _QWORD *v98; // rax
  unsigned __int8 v99; // cl
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  void *v102; // rcx
  __int64 v103; // rax
  const GUID *v104; // r8
  char *v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rcx
  const GUID *v108; // r8
  int v109; // r9d
  int v110; // eax
  __int64 v111; // rax
  struct DXGTERMINATIONTRACKER *v113; // [rsp+40h] [rbp-C8h]
  __int64 v114; // [rsp+48h] [rbp-C0h]
  __int64 v115; // [rsp+48h] [rbp-C0h]
  void **v116; // [rsp+50h] [rbp-B8h]
  __int64 v117; // [rsp+58h] [rbp-B0h] BYREF
  void **v118; // [rsp+60h] [rbp-A8h]
  __int64 v119; // [rsp+68h] [rbp-A0h] BYREF
  void **v120; // [rsp+70h] [rbp-98h]
  __int64 v121; // [rsp+78h] [rbp-90h]
  __int64 v122; // [rsp+80h] [rbp-88h]
  __int64 v123; // [rsp+88h] [rbp-80h]
  int v124; // [rsp+90h] [rbp-78h] BYREF
  __int64 v125; // [rsp+98h] [rbp-70h]
  char v126; // [rsp+A0h] [rbp-68h]
  int v127; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v128; // [rsp+B0h] [rbp-58h]
  char v129; // [rsp+B8h] [rbp-50h]
  _BYTE v130[16]; // [rsp+C0h] [rbp-48h] BYREF
  char v131[8]; // [rsp+D0h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-30h] BYREF
  char v133[8]; // [rsp+108h] [rbp+0h] BYREF
  struct _KAPC_STATE v134; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v135[128]; // [rsp+148h] [rbp+40h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = a2;
  v6 = this;
  v113 = a2;
  if ( !*(_QWORD *)a2 || (v7 = *(void ***)(v4 + 64), (v116 = v7) == 0LL) )
  {
    v7 = (void **)v135;
    v116 = (void **)v135;
  }
  v8 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  if ( v4 )
  {
    v9 = WdLogNewEntry5_WdTrace(0LL, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)v5;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v5 + 8LL);
    v8 = *((_QWORD *)a2 + 5);
    *(_QWORD *)(v9 + 32) = v8;
  }
  for ( i = (_QWORD *)*((_QWORD *)v5 + 1); i; i = (_QWORD *)i[8] )
  {
    v11 = WdLogNewEntry5_WdTrace(v8, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = i;
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(i[1] + 40LL);
    a2 = (struct DXGTERMINATIONTRACKER *)i[3];
    if ( a2 )
    {
      (*(void (__fastcall **)(_QWORD, struct DXGTERMINATIONTRACKER *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 544LL)
                                                                                                 + 8LL)
                                                                                     + 160LL))(
        *(_QWORD *)(*((_QWORD *)v6 + 2) + 552LL),
        a2,
        0LL,
        *((unsigned int *)v5 + 12));
      i[3] = 0LL;
    }
    v8 = i[4];
    if ( v8 )
    {
      v7[(unsigned int)v117] = (void *)v8;
      LODWORD(v117) = v117 + 1;
      i[4] = 0LL;
    }
  }
  if ( (_DWORD)v117 )
  {
    v12 = *((_QWORD *)v6 + 59);
    v13 = *((_QWORD *)v6 + 2);
    v114 = v12;
    v118 = v7;
    v124 = -1;
    v125 = 0LL;
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      v126 = 1;
      v124 = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v8, &EventProfilerEnter, a3, 5029);
    }
    else
    {
      v126 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v124, 5029);
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v17 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v19 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v17 = *v19;
        }
      }
    }
    v20 = v17 + 120;
    v21 = 0;
    if ( !v17 )
      v20 = 0LL;
    if ( v20 && *(struct _KTHREAD **)(v20 + 8) == KeGetCurrentThread() )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v22 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( v17 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v25 = *(_DWORD *)(v20 + 16);
          if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v23, &EventBlockThread, v24, v25);
        }
        ExAcquirePushLockExclusiveEx(v20, 0LL);
      }
      v21 = 2;
      *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v13 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 4256LL));
    CurrentIrql = KeGetCurrentIrql();
    v28 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v30 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v30 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v30);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v26);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v28 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v28 )
        {
          v33 = *(_DWORD *)(v28 + 136);
LABEL_46:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v131,
            *(struct DXGADAPTER **)(v13 + 16));
          v37 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v13 + 16) + 600LL))(v12, &v117);
          if ( v131[0] )
            KeUnstackDetachProcess(&ApcState);
          v38 = KeGetCurrentIrql();
          if ( CurrentIrql != (_BYTE)v38 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38);
            v39[3] = 275LL;
            v39[4] = 16LL;
            v39[5] = v13;
            v39[6] = CurrentIrql;
            v40 = KeGetCurrentIrql();
            v39[7] = v40;
            WdLogEvent5_WdCriticalError(v39);
          }
          if ( v28 && *(_DWORD *)(v28 + 136) != v33 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38);
            v41[3] = 275LL;
            v41[4] = 38LL;
            v41[5] = *(int *)(v28 + 136);
            v41[6] = v33;
            v41[7] = 0LL;
            WdLogEvent5_WdCriticalError(v41);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 4256LL));
          v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v34, v35, v36);
          v42[3] = v37;
          v42[4] = v114;
          v42[5] = (unsigned int)v117;
          v43 = v118;
          v42[6] = *v118;
          if ( (_DWORD)v37 )
          {
            v44 = WdLogNewEntry5_WdError(v43);
            *(_QWORD *)(v44 + 24) = v37;
            WdLogEvent5_WdError(v44);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v13 + 16));
          if ( v21 == 2 )
          {
            *(_QWORD *)(v20 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v20, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v124);
          if ( v126 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v45, &EventProfilerExit, a3, v124);
          v5 = v113;
          v6 = this;
          goto LABEL_61;
        }
      }
      else
      {
        v28 = 0LL;
      }
    }
    v33 = 0;
    goto LABEL_46;
  }
LABEL_61:
  v46 = *(_QWORD *)v5;
  v47 = 0LL;
  v115 = 0LL;
  v48 = 1;
  if ( *(_QWORD *)v5 )
  {
    if ( (*(_DWORD *)(v46 + 4) & 1) != 0 )
    {
      v49 = *(_QWORD *)(v46 + 56);
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 144);
        if ( v50 )
        {
          if ( *(DXGDEVICE **)(v50 + 72) == v6 )
          {
            v51 = (*(_DWORD *)(v50 + 64))-- == 1;
            if ( v51 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v130,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 144LL) + 8LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v130);
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 144LL) + 72LL) = 0LL;
              if ( v130[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v130);
            }
          }
        }
        a3 = 0LL;
        for ( j = *(_QWORD *)(*(_QWORD *)v5 + 24LL); j; a3 = (const GUID *)(unsigned int)((_DWORD)a3 + 1) )
          j = *(_QWORD *)(j + 64);
        v46 = *(_QWORD *)(*(_QWORD *)v5 + 56LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 60), 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v46, v116, (unsigned int)a3);
        v47 = 0LL;
        *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
      }
      v48 = 0;
    }
    else
    {
      v47 = *(_QWORD *)(v46 + 56);
      v115 = v47;
    }
  }
  v53 = *((_QWORD *)v5 + 1);
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  if ( v53 )
  {
    while ( 1 )
    {
      v54 = *(_QWORD *)(v53 + 64);
      v55 = *(_DWORD *)(v53 + 72);
      v123 = v54;
      if ( (v55 & 0x800) != 0 )
      {
        v56 = WdLogNewEntry5_WdAssertion(v46);
        *(_QWORD *)(v56 + 24) = 1903LL;
        WdLogEvent5_WdAssertion(v56);
        v55 = *(_DWORD *)(v53 + 72);
      }
      if ( (v55 & 0x7FE) != 0 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v46);
        *(_QWORD *)(v57 + 24) = 1904LL;
        WdLogEvent5_WdAssertion(v57);
      }
      v58 = *(_QWORD *)(v53 + 48);
      if ( v58 )
      {
        if ( !v48 )
          goto LABEL_101;
        v59 = *(_QWORD *)(v58 + 8);
        if ( v59 )
        {
          v60 = *((_QWORD *)v6 + 2);
          v61 = *((_QWORD *)v6 + 81);
          v62 = *(_QWORD *)(v60 + 544);
          Current = DXGPROCESS::GetCurrent();
          if ( Current )
          {
            if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
            {
              Current = 0LL;
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 144, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v66 = *((_DWORD *)Current + 40);
                  if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v64, &EventBlockThread, v65, v66);
                }
                ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
              }
              *((_QWORD *)Current + 19) = KeGetCurrentThread();
            }
            v5 = v113;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v62 + 8) + 128LL))(v61, 0LL, v59);
          if ( Current )
          {
            *((_QWORD *)Current + 19) = 0LL;
            ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
            KeLeaveCriticalRegion();
          }
          *(_QWORD *)(*(_QWORD *)(v53 + 48) + 8LL) = 0LL;
          v58 = *(_QWORD *)(v53 + 48);
        }
        v67 = *(void **)(v58 + 16);
        v54 = v123;
        if ( v67 )
        {
          v116[(unsigned int)v119] = v67;
          LODWORD(v119) = v119 + 1;
          *(_QWORD *)(*(_QWORD *)(v53 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v48 )
      {
LABEL_101:
        v68 = *(_QWORD *)v5;
        if ( !*(_QWORD *)v5 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v46);
          *(_QWORD *)(v69 + 24) = 1930LL;
          WdLogEvent5_WdAssertion(v69);
          v68 = *(_QWORD *)v5;
        }
        if ( (*(_DWORD *)(v68 + 4) & 1) == 0 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v46);
          *(_QWORD *)(v70 + 24) = 1931LL;
          WdLogEvent5_WdAssertion(v70);
        }
      }
      if ( !*(_QWORD *)v5 || (*(_DWORD *)(*(_QWORD *)v5 + 4LL) & 1) == 0 )
      {
        v71 = *(void **)(v53 + 48);
        if ( v71 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v53 + 48));
          operator delete(v71);
        }
      }
      DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v53);
      ExFreePoolWithTag((PVOID)v53, 0);
      v6 = this;
      v53 = v54;
      if ( !v54 )
      {
        v47 = v115;
        break;
      }
    }
  }
  if ( v48 )
  {
    v51 = *(_QWORD *)v5 == 0LL;
    v121 = v47;
    LODWORD(v122) = !v51;
    if ( (_DWORD)v119 )
    {
      v46 = (__int64)v116;
      v120 = v116;
    }
    else
    {
      v120 = 0LL;
      if ( !v47 )
        goto LABEL_167;
    }
    v72 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v72 + 16) + 185LL) )
      goto LABEL_167;
    v127 = -1;
    v128 = 0LL;
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      v129 = 1;
      v127 = 5005;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v46, &EventProfilerEnter, a3, 5005);
    }
    else
    {
      v129 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v127, 5005);
    v73 = PsGetCurrentProcess();
    v74 = PsGetProcessDxgProcess(v73);
    v76 = v74;
    if ( v74 )
    {
      if ( (*(_BYTE *)(v74 + 323) & 4) != 0 )
      {
        v77 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v78 = v77;
        if ( v77 )
        {
          ObfDereferenceObject(v77);
          v76 = *v78;
        }
      }
    }
    v79 = v76 + 120;
    v80 = 0;
    if ( !v76 )
      v79 = 0LL;
    if ( v79 && *(struct _KTHREAD **)(v79 + 8) == KeGetCurrentThread() )
    {
      v81 = WdLogNewEntry5_WdAssertion(v75);
      *(_QWORD *)(v81 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v81);
    }
    if ( v76 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v79, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v84 = *(_DWORD *)(v79 + 16);
          if ( v84 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v82, &EventBlockThread, v83, v84);
        }
        ExAcquirePushLockExclusiveEx(v79, 0LL);
      }
      v80 = 2;
      *(_QWORD *)(v79 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v72 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v72 + 16) + 4256LL));
    v86 = KeGetCurrentIrql();
    v87 = 0LL;
    if ( v86 < 2u )
    {
      v88 = KeGetCurrentThread();
      if ( !v88 )
      {
        v89 = WdLogNewEntry5_WdAssertion(v85);
        *(_QWORD *)(v89 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v89);
      }
      v90 = PsGetCurrentProcessSessionId(v85);
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
LABEL_150:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v133,
            *(struct DXGADAPTER **)(v72 + 16));
          v96 = (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v72 + 16) + 344LL))(
                  *(_QWORD *)(*(_QWORD *)(v72 + 16) + 248LL),
                  &v119);
          if ( v133[0] )
            KeUnstackDetachProcess(&v134);
          v97 = KeGetCurrentIrql();
          if ( v86 != (_BYTE)v97 )
          {
            v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v97);
            v98[3] = 275LL;
            v98[4] = 16LL;
            v98[5] = v72;
            v98[6] = v86;
            v99 = KeGetCurrentIrql();
            v98[7] = v99;
            WdLogEvent5_WdCriticalError(v98);
          }
          if ( v87 && *(_DWORD *)(v87 + 136) != v92 )
          {
            v100 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v97);
            v100[3] = 275LL;
            v100[4] = 38LL;
            v100[5] = *(int *)(v87 + 136);
            v100[6] = v92;
            v100[7] = 0LL;
            WdLogEvent5_WdCriticalError(v100);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v72 + 16) + 4256LL));
          v101 = (_QWORD *)WdLogNewEntry5_WdTrace(v97, v93, v94, v95);
          v101[3] = v96;
          v101[4] = (unsigned int)v122;
          v101[5] = v121;
          v101[6] = (unsigned int)v119;
          if ( v120 )
            v102 = *v120;
          else
            v102 = 0LL;
          v101[7] = v102;
          if ( (_DWORD)v96 )
          {
            v103 = WdLogNewEntry5_WdError(v102);
            *(_QWORD *)(v103 + 24) = v96;
            WdLogEvent5_WdError(v103);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v72 + 16));
          if ( v80 == 2 )
          {
            *(_QWORD *)(v79 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v79, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v127);
          if ( v129 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v46, &EventProfilerExit, v104, v127);
          goto LABEL_167;
        }
      }
      else
      {
        v87 = 0LL;
      }
    }
    v92 = 0;
    goto LABEL_150;
  }
LABEL_167:
  v105 = (char *)this + 136;
  if ( this != (DXGDEVICE *)-136LL && *((struct _KTHREAD **)this + 18) == KeGetCurrentThread() )
  {
    v106 = WdLogNewEntry5_WdAssertion(v46);
    *(_QWORD *)(v106 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v106);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v105, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v109 = *((_DWORD *)this + 38);
      if ( v109 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v107, &EventBlockThread, v108, v109);
    }
    ExAcquirePushLockExclusiveEx(v105, 0LL);
  }
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  v110 = *((_DWORD *)this + 438) - 1;
  *((_DWORD *)this + 438) = v110;
  if ( v110 < 0 )
  {
    v111 = WdLogNewEntry5_WdAssertion(v107);
    *(_QWORD *)(v111 + 24) = 1235LL;
    WdLogEvent5_WdAssertion(v111);
    v110 = *((_DWORD *)this + 438);
  }
  if ( !v110 )
    KeSetEvent(*((PRKEVENT *)this + 220), 0, 0);
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx(v105, 0LL);
  KeLeaveCriticalRegion();
}
