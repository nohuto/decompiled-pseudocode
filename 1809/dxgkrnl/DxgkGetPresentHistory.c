/*
 * XREFs of DxgkGetPresentHistory @ 0x1C00DB730
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000CF10 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C000D1FC (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C000D26C (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0012380 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002195C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     McTemplateK0ppqqx @ 0x1C0037678 (McTemplateK0ppqqx.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, int a2, const GUID *a3)
{
  int v5; // r14d
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  ULONG64 v14; // rcx
  const GUID *v15; // r8
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rcx
  struct DXGADAPTER *v20; // rbx
  __int64 v21; // rcx
  struct DXGADAPTER *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  signed __int64 v26; // rcx
  struct DXGADAPTER *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  DXGSESSIONMGR *v39; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rcx
  const GUID *v47; // r8
  char *v48; // rcx
  unsigned int v49; // ebx
  unsigned int v50; // edi
  unsigned int v51; // eax
  __int64 v52; // r8
  unsigned int *v53; // r12
  unsigned int v54; // eax
  unsigned int v55; // edi
  int v56; // edi
  unsigned int v57; // esi
  LONG v58; // r12d
  char *v59; // r15
  int *v60; // rdi
  int v61; // edx
  __int64 v62; // rcx
  LONG v63; // edi
  unsigned int v64; // r12d
  __int64 v65; // rcx
  const GUID *v66; // r8
  unsigned int v68; // edi
  unsigned int v69; // eax
  unsigned int v70; // edi
  char *v71; // r9
  unsigned __int8 v72; // al
  unsigned int v73; // ecx
  int v74; // edx
  _QWORD *v75; // rax
  __int16 v76; // dx
  unsigned int v77; // ecx
  int v78; // ecx
  __int64 v79; // rax
  __int64 v80; // rcx
  const GUID *v81; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v83; // rdi
  __int64 v84; // rax
  bool v85; // zf
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  const GUID *v89; // r8
  _QWORD *v90; // rax
  int v91; // eax
  __int64 v92; // rax
  int v93; // r9d
  __int64 v94; // rax
  __int64 v95; // rax
  _OWORD *v96; // rax
  _DWORD *v97; // rdx
  _DWORD *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rbx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  int v106; // r9d
  _QWORD *v107; // rax
  int v108; // r12d
  __int64 v109; // rax
  int v110; // r9d
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  void *v117; // r9
  char *v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rax
  _DWORD *v121; // rdx
  _DWORD *v122; // rdx
  _DWORD *v123; // rdx
  __int64 v124; // rcx
  const GUID *v125; // r8
  unsigned __int64 *v126; // [rsp+28h] [rbp-160h]
  __int64 v127; // [rsp+30h] [rbp-158h]
  int v128; // [rsp+40h] [rbp-148h]
  int v129; // [rsp+48h] [rbp-140h] BYREF
  __int64 v130; // [rsp+50h] [rbp-138h]
  char v131; // [rsp+58h] [rbp-130h]
  unsigned int v132; // [rsp+60h] [rbp-128h]
  __int64 v133; // [rsp+68h] [rbp-120h] BYREF
  char v134; // [rsp+70h] [rbp-118h]
  struct DXGADAPTER *v135; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v136; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v137; // [rsp+84h] [rbp-104h]
  int v138; // [rsp+88h] [rbp-100h]
  void *v139; // [rsp+90h] [rbp-F8h]
  __int64 v140; // [rsp+98h] [rbp-F0h]
  char *v141; // [rsp+A0h] [rbp-E8h]
  DXGADAPTER *v142; // [rsp+A8h] [rbp-E0h] BYREF
  unsigned int i; // [rsp+B8h] [rbp-D0h]
  __int64 v144; // [rsp+C0h] [rbp-C8h] BYREF
  char v145; // [rsp+C8h] [rbp-C0h]
  char *v146; // [rsp+D0h] [rbp-B8h]
  _BYTE v147[16]; // [rsp+D8h] [rbp-B0h] BYREF
  DXGADAPTER *v148; // [rsp+E8h] [rbp-A0h]
  char v149; // [rsp+F0h] [rbp-98h]
  char v150[8]; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v151; // [rsp+100h] [rbp-88h]
  int v152; // [rsp+108h] [rbp-80h]
  int v153; // [rsp+110h] [rbp-78h]
  unsigned int v154; // [rsp+114h] [rbp-74h]
  struct DXGADAPTER *v155[2]; // [rsp+118h] [rbp-70h] BYREF
  unsigned int v156[4]; // [rsp+128h] [rbp-60h]
  __int128 v157; // [rsp+138h] [rbp-50h]
  unsigned __int64 v158[8]; // [rsp+148h] [rbp-40h] BYREF
  int PairingAdapters; // [rsp+1A0h] [rbp+18h]
  int v161; // [rsp+1A0h] [rbp+18h]
  int v162; // [rsp+1A8h] [rbp+20h]

  v129 = -1;
  v5 = 0;
  v130 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v131 = 1;
    v129 = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2060);
  }
  else
  {
    v131 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v129, 2060);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v83 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v83;
      }
    }
  }
  v140 = v11;
  if ( !v11 )
  {
    v84 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v84 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v84);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129);
    v85 = v131 == 0;
LABEL_123:
    if ( v85 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_203;
  }
  if ( *(_BYTE *)(v11 + 322) )
  {
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v133, (struct DXGFASTMUTEX *const *)v11);
    if ( v134 )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12);
      v90[3] = 275LL;
      v90[4] = 4LL;
      v90[5] = &v133;
      v90[6] = 0LL;
      v90[7] = 0LL;
      WdLogEvent5_WdCriticalError(v90);
    }
    v13 = v133;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v13 + 8) == KeGetCurrentThread() )
    {
      v91 = *(_DWORD *)(v13 + 24);
      if ( v91 <= 0 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v92 + 24) = 409LL;
        WdLogEvent5_WdAssertion(v92);
        v91 = *(_DWORD *)(v13 + 24);
      }
      v17 = v91 + 1;
      v16 = 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v93 = *(_DWORD *)(v13 + 28);
          if ( v93 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v14, &EventBlockThread, v15, v93);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v13);
        ExAcquirePushLockExclusiveEx(v13 + 16, 0LL);
      }
      if ( *(_QWORD *)(v13 + 8) )
      {
        v94 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v94 + 24) = 433LL;
        WdLogEvent5_WdAssertion(v94);
      }
      if ( *(_DWORD *)(v13 + 24) )
      {
        v95 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v95 + 24) = 434LL;
        WdLogEvent5_WdAssertion(v95);
      }
      *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
      v16 = 1;
      v17 = 1;
    }
    *(_DWORD *)(v13 + 24) = v17;
    v134 = 1;
    if ( a2 )
    {
      v153 = 0;
      v96 = (_OWORD *)a1;
      if ( a1 >= MmUserProbeAddress )
        v96 = (_OWORD *)MmUserProbeAddress;
      *(_OWORD *)v156 = *v96;
      v157 = v96[1];
      v97 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v97 = (_DWORD *)MmUserProbeAddress;
      *v97 = 0;
      v98 = (_DWORD *)(a1 + 8);
      v14 = MmUserProbeAddress;
      if ( a1 + 8 >= MmUserProbeAddress )
        v98 = (_DWORD *)MmUserProbeAddress;
      *v98 = 0;
    }
    else
    {
      *(_OWORD *)v156 = *(_OWORD *)a1;
      v157 = *(_OWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    if ( !(_QWORD)v157 )
    {
      v86 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v86 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v86);
LABEL_122:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v133);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129);
      v85 = v131 == 0;
      goto LABEL_123;
    }
    v18 = v156[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v142, v156[0], (struct _KTHREAD **)v11, v155, 1);
    v20 = v155[0];
    if ( !v155[0] )
    {
      v99 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v99 + 24) = v18;
      *(_QWORD *)(v99 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v99);
LABEL_147:
      if ( v142 )
        DXGADAPTER::ReleaseReference(v142);
      goto LABEL_122;
    }
    PairingAdapters = DxgkpGetPairingAdapters(v155[0], 0, &v135, v158, 0LL, 0LL);
    if ( PairingAdapters < 0 )
    {
      v102 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v102 + 24) = v20;
      v64 = PairingAdapters;
      *(_QWORD *)(v102 + 32) = PairingAdapters;
      WdLogEvent5_WdError(v102);
      if ( v142 )
        DXGADAPTER::ReleaseReference(v142);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v133);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129);
      if ( v131 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_194:
        McTemplateK0q(v65, &EventProfilerExit, v66, v129);
      return v64;
    }
    else
    {
      v22 = v135;
      if ( !v135 )
      {
        v103 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v103 + 24) = 271LL;
        WdLogEvent5_WdAssertion(v103);
      }
      COREACCESS::COREACCESS((COREACCESS *)v147, v22);
      if ( v149 )
      {
        v104 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23);
        v104[3] = 275LL;
        v104[4] = 4LL;
        v104[5] = v147;
        v104[6] = 0LL;
        v104[7] = 0LL;
        WdLogEvent5_WdCriticalError(v104);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v148 + 20) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v148 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v24, &EventBlockThread, v25, 72);
          KeWaitForSingleObject((char *)v148 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v148);
      }
      v149 = 1;
      v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v135 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v27 = v135;
      if ( v26 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v135 + 2), v135);
      v28 = *((_QWORD *)v27 + 316);
      if ( !v28 )
      {
        v105 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v105 + 24) = 283LL;
        WdLogEvent5_WdAssertion(v105);
        v28 = *((_QWORD *)v27 + 316);
      }
      v138 = 0;
      v137 = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150, (struct _KTHREAD **)(v28 + 736), 0);
      KeEnterCriticalRegion();
      v29 = v151;
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v151, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v106 = *(_DWORD *)(v29 + 16);
          if ( v106 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v30, &EventBlockThread, v31, v106);
        }
        ExAcquirePushLockSharedEx(v29, 0LL);
      }
      v152 = 1;
      v32 = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionId(v32);
      if ( ProcessSessionId < *(_DWORD *)(v28 + 760) && *(_QWORD *)(*(_QWORD *)(v28 + 768) + 8LL * ProcessSessionId) )
      {
        _mm_lfence();
        v36 = *(_QWORD *)(*(_QWORD *)(v28 + 768) + 8LL * ProcessSessionId);
        v155[1] = (struct DXGADAPTER *)v36;
        if ( v36 )
        {
          v39 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v35) + 77);
          if ( v39 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v38);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v39,
                                               CurrentProcessSessionId);
            v42 = SessionDataForSpecifiedSession;
            if ( SessionDataForSpecifiedSession )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)&v144,
                (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
                0);
              if ( v145 )
              {
                v107 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43);
                v107[3] = 275LL;
                v107[4] = 4LL;
                v107[5] = &v144;
                v107[6] = 0LL;
                v107[7] = 0LL;
                WdLogEvent5_WdCriticalError(v107);
              }
              v44 = v144;
              KeEnterCriticalRegion();
              if ( *(struct _KTHREAD **)(v44 + 8) == KeGetCurrentThread() )
              {
                v108 = *(_DWORD *)(v44 + 24);
                if ( v108 <= 0 )
                {
                  v109 = WdLogNewEntry5_WdAssertion(v45);
                  *(_QWORD *)(v109 + 24) = 409LL;
                  WdLogEvent5_WdAssertion(v109);
                  v108 = *(_DWORD *)(v44 + 24);
                }
                v16 = v108 + 1;
              }
              else
              {
                if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v44 + 16, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v110 = *(_DWORD *)(v44 + 28);
                    if ( v110 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q(v46, &EventBlockThread, v47, v110);
                  }
                  _InterlockedIncrement64((volatile signed __int64 *)v44);
                  ExAcquirePushLockExclusiveEx(v44 + 16, 0LL);
                }
                if ( *(_QWORD *)(v44 + 8) )
                {
                  v111 = WdLogNewEntry5_WdAssertion(v46);
                  *(_QWORD *)(v111 + 24) = 433LL;
                  WdLogEvent5_WdAssertion(v111);
                }
                if ( *(_DWORD *)(v44 + 24) )
                {
                  v112 = WdLogNewEntry5_WdAssertion(v46);
                  *(_QWORD *)(v112 + 24) = 434LL;
                  WdLogEvent5_WdAssertion(v112);
                }
                *(_QWORD *)(v44 + 8) = KeGetCurrentThread();
              }
              *(_DWORD *)(v44 + 24) = v16;
              v145 = 1;
              v146 = (char *)v42 + 56;
              v141 = (char *)v42 + 16440;
              v139 = (void *)v157;
              v132 = v156[1];
              v136 = 2048;
              if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
                          (KSPIN_LOCK *)v36,
                          (__int64)v42 + 16440,
                          &v136,
                          (struct DXGSESSIONDATA *)((char *)v42 + 56),
                          (struct DXGSESSIONDATA *)((char *)v42 + 16440)) < 0 )
              {
                v113 = WdLogNewEntry5_WdAssertion(v48);
                *(_QWORD *)(v113 + 24) = 351LL;
                WdLogEvent5_WdAssertion(v113);
              }
              v161 = 0;
              v128 = 0;
              v49 = 0;
              v162 = v138;
              v50 = v137;
              v51 = v136;
              for ( i = v136; ; v51 = i )
              {
                if ( v49 >= v51 )
                {
LABEL_55:
                  v154 = v49;
                  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v36, 0);
                  if ( a2 )
                  {
                    v121 = (_DWORD *)(a1 + 24);
                    if ( a1 + 24 >= MmUserProbeAddress )
                      v121 = (_DWORD *)MmUserProbeAddress;
                    *v121 = v49;
                    if ( v49 || !v50 )
                    {
                      v123 = (_DWORD *)(a1 + 8);
                      if ( a1 + 8 >= MmUserProbeAddress )
                        v123 = (_DWORD *)MmUserProbeAddress;
                      *v123 = v162;
                    }
                    else
                    {
                      v122 = (_DWORD *)(a1 + 8);
                      if ( a1 + 8 >= MmUserProbeAddress )
                        v122 = (_DWORD *)MmUserProbeAddress;
                      *v122 = v50;
                      v161 = -1073741789;
                      v128 = -1073741789;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(a1 + 24) = v49;
                    if ( v49 || !v50 )
                    {
                      *(_DWORD *)(a1 + 8) = v162;
                    }
                    else
                    {
                      *(_DWORD *)(a1 + 8) = v50;
                      v161 = -1073741789;
                      v128 = -1073741789;
                    }
                  }
                  v57 = 0;
                  v58 = v49;
                  v59 = v146;
                  while ( v57 < v49 )
                  {
                    v60 = *(int **)&v59[8 * v57];
                    v61 = *v60;
                    if ( *v60 == 2
                      && (v141[v57] & 1) != 0
                      && (v77 = v60[15] ^ (v60[15] ^ ((v60[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
                          v60[15] = v77,
                          (v77 & 0x30000) < 0x20000) )
                    {
                      --v58;
                      ++v57;
                    }
                    else
                    {
                      if ( bTracingEnabled )
                      {
                        if ( v61 == 3 || v61 == 1 )
                        {
LABEL_64:
                          v62 = *((_QWORD *)v60 + 2);
                        }
                        else
                        {
                          switch ( v61 )
                          {
                            case 2:
                              v62 = *((_QWORD *)v60 + 3);
                              break;
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                              goto LABEL_64;
                            default:
                              v62 = 0LL;
                              break;
                          }
                        }
                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        {
                          LODWORD(v127) = v60[1];
                          LODWORD(v126) = v61;
                          McTemplateK0ppqqx(
                            v62,
                            &EventRetirePresentHistory,
                            (const GUID *)(unsigned int)v127,
                            v135,
                            v60,
                            v126,
                            v127,
                            v62);
                        }
                      }
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v36 + 48), (PSLIST_ENTRY)v60 - 1);
                      ++v57;
                    }
                  }
                  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v36, v49);
                  v63 = v58;
                  v85 = v58 == 0;
                  v64 = v161;
                  if ( !v85 )
                    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v36 + 64), 0, v63, 0);
                  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v144);
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
                  COREACCESS::~COREACCESS((COREACCESS *)v147);
                  if ( v142 )
                  {
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v142 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v142 + 2), v142);
                    v64 = v128;
                  }
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v133);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129);
                  if ( v131 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                    goto LABEL_194;
                  return v64;
                }
                v52 = v49;
                v53 = *(unsigned int **)&v146[8 * v49];
                v54 = *v53;
                if ( *v53 == 3 )
                {
                  v68 = v53[10];
                  if ( v68 <= 0x10 )
                  {
                    v56 = 16 * v68 + 51;
                    goto LABEL_78;
                  }
                  v114 = WdLogNewEntry5_WdAssertion(v48);
                  *(_QWORD *)(v114 + 24) = 73LL;
                }
                else if ( v54 == 1 )
                {
                  v55 = v53[14];
                  if ( v55 <= 0x10 )
                  {
                    v56 = 16 * v55 + 67;
LABEL_78:
                    v50 = v56 & 0xFFFFFFF8;
                    goto LABEL_79;
                  }
                  v114 = WdLogNewEntry5_WdAssertion(v48);
                  *(_QWORD *)(v114 + 24) = 53LL;
                }
                else
                {
                  switch ( v54 )
                  {
                    case 2u:
                      v70 = v53[205];
                      if ( v70 <= 0x10 )
                      {
                        v56 = 16 * v70 + 831;
                        goto LABEL_78;
                      }
                      v114 = WdLogNewEntry5_WdAssertion(v48);
                      *(_QWORD *)(v114 + 24) = 63LL;
                      break;
                    case 4u:
                    case 5u:
                    case 7u:
                    case 8u:
                      v56 = 31;
                      goto LABEL_78;
                    case 9u:
                      v56 = 47;
                      goto LABEL_78;
                    default:
                      v115 = WdLogNewEntry5_WdAssertion(v48);
                      *(_QWORD *)(v115 + 24) = 96LL;
                      WdLogEvent5_WdAssertion(v115);
                      v56 = 7;
                      v52 = v49;
                      goto LABEL_78;
                  }
                }
                WdLogEvent5_WdAssertion(v114);
                v50 = 0;
                v52 = v49;
LABEL_79:
                v137 = v50;
                if ( !v50 )
                {
                  v116 = WdLogNewEntry5_WdAssertion(v48);
                  *(_QWORD *)(v116 + 24) = 361LL;
                  WdLogEvent5_WdAssertion(v116);
                  v52 = v49;
                }
                if ( v50 > v132 )
                {
                  v161 = 261;
                  v128 = 261;
                  goto LABEL_55;
                }
                v53[1] = v50;
                v69 = *v53;
                if ( *v53 == 2 )
                {
                  v71 = v141;
                  v72 = v141[v52];
                  v73 = v53[15];
                  if ( (v72 & 1) != 0 )
                  {
                    v78 = v73 | 0x2000;
                    v53[15] = v78;
                    v53[15] = v78 ^ (v78 ^ ((unsigned __int8)v71[v52] << 17)) & 0x40000;
                  }
                  else
                  {
                    v74 = v73 ^ (v73 ^ (v72 << 18)) & 0x100000;
                    v53[15] = v74;
                    if ( (v71[v52] & 8) != 0 )
                      v53[15] = v74 | 0x1000000;
                  }
                  v75 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
                  v75[3] = v53;
                  v75[4] = *((_QWORD *)v53 + 2);
                  v75[5] = (v53[15] >> 13) & 1;
                  v75[6] = *((_QWORD *)v53 + 9);
                  v75[7] = *((_QWORD *)v53 + 1);
                  WdLogEvent5_WdPresentTokenEvent(v75);
                  v69 = *v53;
                  v52 = v49;
                }
                if ( v69 == 9 )
                  v53[8] ^= (v53[8] ^ ((unsigned __int8)v141[v52] >> 4)) & 1;
                if ( a2 )
                {
                  v117 = v139;
                  v118 = (char *)v139 + v50;
                  if ( (unsigned __int64)v118 > MmUserProbeAddress || v118 <= v139 )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v117, v53, v50);
                }
                else
                {
                  memmove(v139, v53, v50);
                }
                if ( *v53 == 2 )
                {
                  v48 = v141;
                  if ( (v141[v49] & 1) != 0 )
                  {
                    v48 = (char *)v53[15];
                    if ( ((unsigned __int16)v48 & 0x2000) == 0 )
                    {
                      v119 = WdLogNewEntry5_WdAssertion(v48);
                      *(_QWORD *)(v119 + 24) = 427LL;
                      WdLogEvent5_WdAssertion(v119);
                      v48 = (char *)v53[15];
                    }
                    v76 = (__int16)v48;
                    if ( (unsigned int)((__int16)v48 >> 14) > 1 )
                    {
                      v120 = WdLogNewEntry5_WdAssertion(v48);
                      *(_QWORD *)(v120 + 24) = 428LL;
                      WdLogEvent5_WdAssertion(v120);
                      v76 = *((_WORD *)v53 + 30);
                      v48 = (char *)v53[15];
                    }
                    v53[15] = (unsigned int)v48 ^ ((unsigned __int16)v48 ^ (unsigned __int16)((v76 & 0xC000) + 0x4000)) & 0xC000;
                  }
                }
                v139 = (char *)v139 + v50;
                v162 += v50;
                v138 = v162;
                v132 -= v50;
                ++v49;
              }
            }
          }
          v100 = WdLogNewEntry5_WdEvent(v38, v37);
          *(_QWORD *)(v100 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v101);
          WdLogEvent5_WdEvent(v100);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
          COREACCESS::~COREACCESS((COREACCESS *)v147);
          goto LABEL_147;
        }
        v27 = v135;
      }
      v79 = WdLogNewEntry5_WdEvent(v35, v34);
      *(_QWORD *)(v79 + 24) = v27;
      WdLogEvent5_WdEvent(v79);
      LOBYTE(v5) = *((_DWORD *)v27 + 44) == 1;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v150);
      COREACCESS::~COREACCESS((COREACCESS *)v147);
      if ( v5 )
      {
        if ( v142 )
          DXGADAPTER::ReleaseReference(v142);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v133);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129);
        if ( !v131 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return 3221225485LL;
LABEL_203:
        McTemplateK0q(v80, &EventProfilerExit, v81, v129);
        return 3221225485LL;
      }
      if ( v142 )
        DXGADAPTER::ReleaseReference(v142);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v133);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129);
      if ( v131 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v124, &EventProfilerExit, v125, v129);
      return 0LL;
    }
  }
  else
  {
    v87 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v87 + 24) = v11;
    *(_QWORD *)(v87 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v87);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129);
    if ( v131 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v88, &EventProfilerExit, v89, v129);
    return 3221225506LL;
  }
}
