/*
 * XREFs of DxgkGetPresentHistoryInternal @ 0x1C0103F20
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AD00 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     DxgkGetPresentHistory @ 0x1C025C570 (DxgkGetPresentHistory.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C000B740 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C000B8B8 (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BFCC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C5E0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C788 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00244A8 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     McTemplateK0ppqqx @ 0x1C003DC10 (McTemplateK0ppqqx.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistoryInternal(ULONG64 a1, int a2, const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _DWORD *v16; // rdx
  ULONG64 v17; // rcx
  const GUID *v18; // r8
  struct _KTHREAD **v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGADAPTER *v24; // rdi
  int PairingAdapters; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  struct DXGADAPTER *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  const GUID *v34; // r8
  signed __int64 v35; // rcx
  struct DXGADAPTER *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v42; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  DXGSESSIONMGR *v50; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  const GUID *v61; // r8
  unsigned int v62; // r13d
  __int64 v63; // rdx
  char *v64; // rcx
  unsigned int v65; // edi
  int v66; // r12d
  __int64 v67; // rbx
  unsigned int v68; // eax
  __int64 v69; // rdx
  unsigned int *v70; // r12
  unsigned int v71; // eax
  unsigned int v72; // ebx
  int v73; // ebx
  LONG v74; // r12d
  __int64 v75; // rsi
  char *v76; // r13
  char *v77; // r14
  int *v78; // rbx
  int v79; // edx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  const GUID *v83; // r8
  unsigned int v85; // ebx
  unsigned int v86; // eax
  __int64 v87; // r13
  __int64 v88; // rdx
  unsigned int v89; // ebx
  char *v90; // r8
  unsigned __int8 v91; // al
  int v92; // ecx
  _QWORD *v93; // rax
  __int16 v94; // dx
  unsigned int v95; // ecx
  int v96; // ecx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  const GUID *v100; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rdx
  bool v105; // zf
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  const GUID *v111; // r8
  _QWORD *v112; // rax
  int v113; // eax
  __int64 v114; // rax
  int v115; // r9d
  __int64 v116; // rax
  __int64 v117; // rax
  _OWORD *v118; // rax
  _DWORD *v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  const GUID *v127; // r8
  __int64 v128; // rax
  _QWORD *v129; // rax
  __int64 v130; // rax
  int v131; // r9d
  _QWORD *v132; // rax
  int v133; // eax
  __int64 v134; // rax
  int v135; // r9d
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  void *v144; // r9
  __int64 v145; // rax
  __int64 v146; // rax
  _DWORD *v147; // rdx
  _DWORD *v148; // rdx
  _DWORD *v149; // rdx
  __int64 v150; // rdx
  __int64 v151; // rcx
  const GUID *v152; // r8
  unsigned __int64 *v153; // [rsp+28h] [rbp-180h]
  __int64 v154; // [rsp+30h] [rbp-178h]
  __int64 v155; // [rsp+40h] [rbp-168h] BYREF
  __int64 v156; // [rsp+48h] [rbp-160h]
  char v157; // [rsp+50h] [rbp-158h]
  unsigned int v158; // [rsp+58h] [rbp-150h]
  int v159; // [rsp+5Ch] [rbp-14Ch]
  __int64 v160; // [rsp+60h] [rbp-148h] BYREF
  char v161; // [rsp+68h] [rbp-140h]
  struct DXGADAPTER *v162; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v163; // [rsp+78h] [rbp-130h] BYREF
  int v164; // [rsp+7Ch] [rbp-12Ch]
  int v165; // [rsp+80h] [rbp-128h]
  unsigned int v166; // [rsp+84h] [rbp-124h]
  int v167; // [rsp+88h] [rbp-120h]
  void *v168; // [rsp+90h] [rbp-118h]
  __int64 v169; // [rsp+98h] [rbp-110h]
  char *v170; // [rsp+A0h] [rbp-108h]
  DXGADAPTER *v171; // [rsp+A8h] [rbp-100h] BYREF
  unsigned int i; // [rsp+B8h] [rbp-F0h]
  __int64 v173; // [rsp+C0h] [rbp-E8h] BYREF
  char v174; // [rsp+C8h] [rbp-E0h]
  char *v175; // [rsp+D0h] [rbp-D8h]
  DXGPRESENTHISTORYTOKENQUEUE *v176; // [rsp+D8h] [rbp-D0h]
  char v177[8]; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v178; // [rsp+E8h] [rbp-C0h]
  int v179; // [rsp+F0h] [rbp-B8h]
  int v180; // [rsp+F8h] [rbp-B0h]
  unsigned int v181; // [rsp+FCh] [rbp-ACh]
  struct DXGADAPTER *v182; // [rsp+100h] [rbp-A8h] BYREF
  unsigned __int64 v183; // [rsp+108h] [rbp-A0h] BYREF
  unsigned int v184[4]; // [rsp+110h] [rbp-98h]
  __int128 v185; // [rsp+120h] [rbp-88h]
  _BYTE v186[16]; // [rsp+130h] [rbp-78h] BYREF
  __int64 v187; // [rsp+140h] [rbp-68h]
  char v188; // [rsp+148h] [rbp-60h]
  int v189; // [rsp+14Ch] [rbp-5Ch]
  __int64 v190; // [rsp+150h] [rbp-58h]

  v167 = a2;
  LODWORD(v155) = -1;
  v156 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v157 = 1;
    LODWORD(v155) = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2060);
  }
  else
  {
    v157 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v155, 2060LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v102 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v102;
    }
  }
  v169 = v12;
  if ( !v12 )
  {
    v103 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v103 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v103);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v155, v104);
    v105 = v157 == 0;
LABEL_120:
    if ( v105 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_202;
  }
  if ( *(_BYTE *)(v12 + 298) )
  {
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v160, (struct DXGFASTMUTEX *const *)v12);
    if ( v161 )
    {
      v112 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
      v112[3] = 275LL;
      v112[4] = 4LL;
      v112[5] = &v160;
      v112[6] = 0LL;
      v112[7] = 0LL;
      WdLogEvent5_WdCriticalError(v112);
    }
    v15 = v160;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v15 + 16) == KeGetCurrentThread() )
    {
      v113 = *(_DWORD *)(v15 + 24);
      if ( v113 <= 0 )
      {
        v114 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v114 + 24) = 559LL;
        WdLogEvent5_WdAssertion(v114);
        v113 = *(_DWORD *)(v15 + 24);
      }
      *(_DWORD *)(v15 + 24) = v113 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v115 = *(_DWORD *)(v15 + 28);
          if ( v115 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v17, &EventBlockThread, v18, v115);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v15 + 8));
        ExAcquirePushLockExclusiveEx(v15, 0LL);
      }
      if ( *(_QWORD *)(v15 + 16) )
      {
        v116 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v116 + 24) = 583LL;
        WdLogEvent5_WdAssertion(v116);
      }
      if ( *(_DWORD *)(v15 + 24) )
      {
        v117 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v117 + 24) = 584LL;
        WdLogEvent5_WdAssertion(v117);
      }
      *(_QWORD *)(v15 + 16) = KeGetCurrentThread();
      *(_DWORD *)(v15 + 24) = 1;
    }
    v161 = 1;
    if ( a2 )
    {
      v180 = 0;
      v118 = (_OWORD *)a1;
      if ( a1 >= MmUserProbeAddress )
        v118 = (_OWORD *)MmUserProbeAddress;
      *(_OWORD *)v184 = *v118;
      v185 = v118[1];
      v119 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v119 = (_DWORD *)MmUserProbeAddress;
      *v119 = 0;
      v16 = (_DWORD *)(a1 + 8);
      v17 = MmUserProbeAddress;
      if ( a1 + 8 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = 0;
    }
    else
    {
      *(_OWORD *)v184 = *(_OWORD *)a1;
      v185 = *(_OWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    if ( !(_QWORD)v185 )
    {
      v106 = WdLogNewEntry5_WdError(v17, v16, v18);
      *(_QWORD *)(v106 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v106);
LABEL_119:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v160);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v155, v107);
      v105 = v157 == 0;
      goto LABEL_120;
    }
    v19 = (struct _KTHREAD **)v12;
    v20 = v184[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v171, v184[0], v19, &v182, 1);
    v24 = v182;
    if ( !v182 )
    {
      v120 = WdLogNewEntry5_WdError(v22, v21, v23);
      *(_QWORD *)(v120 + 24) = v20;
      *(_QWORD *)(v120 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v120);
LABEL_144:
      if ( v171 )
        DXGADAPTER::ReleaseReferenceNoTracking(v171);
      goto LABEL_119;
    }
    PairingAdapters = DxgkpGetPairingAdapters(v182, 0, &v162, &v183, 0LL, 0LL, 0);
    v29 = PairingAdapters;
    v158 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v124 = WdLogNewEntry5_WdError(v27, v26, v28);
      *(_QWORD *)(v124 + 24) = v24;
      *(_QWORD *)(v124 + 32) = v29;
      WdLogEvent5_WdError(v124);
      if ( v171 )
        DXGADAPTER::ReleaseReferenceNoTracking(v171);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v160);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v155, v125);
      if ( v157 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v126, &EventProfilerExit, v127, v155);
      return (unsigned int)v29;
    }
    else
    {
      v30 = v162;
      if ( !v162 )
      {
        v128 = WdLogNewEntry5_WdAssertion(v27, v26);
        *(_QWORD *)(v128 + 24) = 294LL;
        WdLogEvent5_WdAssertion(v128);
      }
      COREACCESS::COREACCESS((COREACCESS *)v186, v30);
      if ( v188 )
      {
        v129 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v31);
        v129[3] = 275LL;
        v129[4] = 4LL;
        v129[5] = v186;
        v129[6] = 0LL;
        v129[7] = 0LL;
        WdLogEvent5_WdCriticalError(v129);
      }
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v187 + 160) )
      {
        if ( !KeReadStateEvent((PRKEVENT)(v187 + 48)) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v33, &EventBlockThread, v34, 72);
          KeWaitForSingleObject((PVOID)(v187 + 48), Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v187, 0xFFFFFFFFLL, 0LL);
      }
      v189 = -1;
      v190 = 0LL;
      v188 = 1;
      v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)v162 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v36 = v162;
      if ( v35 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v162 + 2), v162);
      v37 = *((_QWORD *)v36 + 320);
      if ( !v37 )
      {
        v130 = WdLogNewEntry5_WdAssertion(v35, v31);
        *(_QWORD *)(v130 + 24) = 306LL;
        WdLogEvent5_WdAssertion(v130);
        v37 = *((_QWORD *)v36 + 320);
      }
      v165 = 0;
      v164 = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177, (struct _KTHREAD **)(v37 + 736), 0);
      KeEnterCriticalRegion();
      v38 = v178;
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v178, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v131 = *(_DWORD *)(v38 + 16);
          if ( v131 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v40, &EventBlockThread, v41, v131);
        }
        ExAcquirePushLockSharedEx(v38, 0LL);
      }
      v179 = 1;
      v42 = PsGetCurrentProcess(v40, v39);
      ProcessSessionId = PsGetProcessSessionId(v42);
      if ( ProcessSessionId < *(_DWORD *)(v37 + 760) )
      {
        v46 = 8LL * ProcessSessionId;
        if ( *(_QWORD *)(v46 + *(_QWORD *)(v37 + 768)) )
        {
          _mm_lfence();
          v47 = *(_QWORD *)(v46 + *(_QWORD *)(v37 + 768));
          v176 = (DXGPRESENTHISTORYTOKENQUEUE *)v47;
          if ( v47 )
          {
            v50 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v45, v44) + 74);
            if ( v50 )
            {
              CurrentProcessSessionId = PsGetCurrentProcessSessionId(v49, v48);
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                 v50,
                                                 CurrentProcessSessionId);
              v53 = SessionDataForSpecifiedSession;
              if ( SessionDataForSpecifiedSession )
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX(
                  (DXGAUTOMUTEX *)&v173,
                  (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16),
                  0);
                if ( v174 )
                {
                  v132 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v54);
                  v132[3] = 275LL;
                  v132[4] = 4LL;
                  v132[5] = &v173;
                  v132[6] = 0LL;
                  v132[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v132);
                }
                v56 = v173;
                KeEnterCriticalRegion();
                if ( *(struct _KTHREAD **)(v56 + 16) == KeGetCurrentThread() )
                {
                  v133 = *(_DWORD *)(v56 + 24);
                  if ( v133 <= 0 )
                  {
                    v134 = WdLogNewEntry5_WdAssertion(v58, v57);
                    *(_QWORD *)(v134 + 24) = 559LL;
                    WdLogEvent5_WdAssertion(v134);
                    v133 = *(_DWORD *)(v56 + 24);
                  }
                  *(_DWORD *)(v56 + 24) = v133 + 1;
                }
                else
                {
                  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v56, 0LL) )
                  {
                    if ( bTracingEnabled )
                    {
                      v135 = *(_DWORD *)(v56 + 28);
                      if ( v135 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        McTemplateK0q(v60, &EventBlockThread, v61, v135);
                    }
                    _InterlockedIncrement64((volatile signed __int64 *)(v56 + 8));
                    ExAcquirePushLockExclusiveEx(v56, 0LL);
                  }
                  if ( *(_QWORD *)(v56 + 16) )
                  {
                    v136 = WdLogNewEntry5_WdAssertion(v60, v59);
                    *(_QWORD *)(v136 + 24) = 583LL;
                    WdLogEvent5_WdAssertion(v136);
                  }
                  if ( *(_DWORD *)(v56 + 24) )
                  {
                    v137 = WdLogNewEntry5_WdAssertion(v60, v59);
                    *(_QWORD *)(v137 + 24) = 584LL;
                    WdLogEvent5_WdAssertion(v137);
                  }
                  *(_QWORD *)(v56 + 16) = KeGetCurrentThread();
                  *(_DWORD *)(v56 + 24) = 1;
                }
                v174 = 1;
                v175 = (char *)v53 + 56;
                v170 = (char *)v53 + 16440;
                v168 = (void *)v185;
                v62 = v184[1];
                v166 = v184[1];
                v163 = 2048;
                if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
                            (KSPIN_LOCK *)v47,
                            (__int64)v53 + 16440,
                            &v163,
                            (struct DXGSESSIONDATA *)((char *)v53 + 56),
                            (struct DXGSESSIONDATA *)((char *)v53 + 16440)) < 0 )
                {
                  v138 = WdLogNewEntry5_WdAssertion(v64, v63);
                  *(_QWORD *)(v138 + 24) = 374LL;
                  WdLogEvent5_WdAssertion(v138);
                }
                v158 = 0;
                v65 = 0;
                v66 = v165;
                LODWORD(v67) = v164;
                v68 = v163;
                for ( i = v163; ; v68 = i )
                {
                  v159 = v66;
                  if ( v65 >= v68 )
                  {
LABEL_56:
                    v181 = v65;
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v47, 0);
                    if ( v167 )
                    {
                      v147 = (_DWORD *)(a1 + 24);
                      if ( a1 + 24 >= MmUserProbeAddress )
                        v147 = (_DWORD *)MmUserProbeAddress;
                      *v147 = v65;
                      if ( v65 || !(_DWORD)v67 )
                      {
                        v149 = (_DWORD *)(a1 + 8);
                        if ( a1 + 8 >= MmUserProbeAddress )
                          v149 = (_DWORD *)MmUserProbeAddress;
                        *v149 = v66;
                      }
                      else
                      {
                        v148 = (_DWORD *)(a1 + 8);
                        if ( a1 + 8 >= MmUserProbeAddress )
                          v148 = (_DWORD *)MmUserProbeAddress;
                        *v148 = v67;
                        v158 = -1073741789;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(a1 + 24) = v65;
                      if ( v65 || !(_DWORD)v67 )
                      {
                        *(_DWORD *)(a1 + 8) = v66;
                      }
                      else
                      {
                        *(_DWORD *)(a1 + 8) = v67;
                        v158 = -1073741789;
                      }
                    }
                    v74 = v65;
                    v75 = 0LL;
                    v76 = v175;
                    v77 = v170;
                    while ( (unsigned int)v75 < v65 )
                    {
                      v78 = *(int **)&v76[8 * v75];
                      v79 = *v78;
                      if ( *v78 == 2
                        && (v77[v75] & 1) != 0
                        && (v95 = v78[15] ^ (v78[15] ^ ((v78[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
                            v78[15] = v95,
                            (v95 & 0x30000) < 0x20000) )
                      {
                        --v74;
                        v75 = (unsigned int)(v75 + 1);
                      }
                      else
                      {
                        if ( bTracingEnabled )
                        {
                          switch ( v79 )
                          {
                            case 1:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                              v80 = *((_QWORD *)v78 + 2);
                              break;
                            case 2:
                              v80 = *((_QWORD *)v78 + 3);
                              break;
                            default:
                              v80 = 0LL;
                              break;
                          }
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          {
                            LODWORD(v154) = v78[1];
                            LODWORD(v153) = v79;
                            McTemplateK0ppqqx(
                              v80,
                              &EventRetirePresentHistory,
                              (const GUID *)(unsigned int)v154,
                              v162,
                              v78,
                              v153,
                              v154,
                              v80,
                              v155,
                              v156);
                          }
                        }
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v47 + 48), (PSLIST_ENTRY)v78 - 1);
                        v75 = (unsigned int)(v75 + 1);
                      }
                    }
                    DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v47, v65);
                    if ( v74 )
                      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v47 + 64), 0, v74, 0);
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v173);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
                    COREACCESS::~COREACCESS((COREACCESS *)v186);
                    if ( v171
                      && _InterlockedExchangeAdd64((volatile signed __int64 *)v171 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v171 + 2), v171);
                    }
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v160);
                    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v155, v81);
                    if ( v157 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                      McTemplateK0q(v82, &EventProfilerExit, v83, v155);
                    return v158;
                  }
                  v69 = v65;
                  v70 = *(unsigned int **)&v175[8 * v65];
                  v71 = *v70;
                  if ( *v70 == 1 )
                  {
                    v85 = v70[14];
                    if ( v85 <= 0x10 )
                    {
                      v73 = 16 * v85 + 67;
                      goto LABEL_77;
                    }
                    v142 = WdLogNewEntry5_WdAssertion(v64, v65);
                    *(_QWORD *)(v142 + 24) = 53LL;
                    WdLogEvent5_WdAssertion(v142);
                    v67 = 0LL;
                    v69 = v65;
                  }
                  else if ( v71 == 3 )
                  {
                    v72 = v70[10];
                    if ( v72 <= 0x10 )
                    {
                      v73 = 16 * v72 + 51;
LABEL_77:
                      v67 = v73 & 0xFFFFFFF8;
                      goto LABEL_78;
                    }
                    v141 = WdLogNewEntry5_WdAssertion(v64, v65);
                    *(_QWORD *)(v141 + 24) = 73LL;
                    WdLogEvent5_WdAssertion(v141);
                    v67 = 0LL;
                    v69 = v65;
                  }
                  else
                  {
                    switch ( v71 )
                    {
                      case 2u:
                        v89 = v70[205];
                        if ( v89 <= 0x10 )
                        {
                          v73 = 16 * v89 + 831;
                          goto LABEL_77;
                        }
                        v139 = WdLogNewEntry5_WdAssertion(v64, v65);
                        *(_QWORD *)(v139 + 24) = 63LL;
                        WdLogEvent5_WdAssertion(v139);
                        v67 = 0LL;
                        v69 = v65;
                        break;
                      case 4u:
                      case 5u:
                      case 7u:
                      case 8u:
                        v73 = 31;
                        goto LABEL_77;
                      case 9u:
                        v73 = 47;
                        goto LABEL_77;
                      default:
                        v140 = WdLogNewEntry5_WdAssertion(v64, v65);
                        *(_QWORD *)(v140 + 24) = 96LL;
                        WdLogEvent5_WdAssertion(v140);
                        v73 = 7;
                        v69 = v65;
                        goto LABEL_77;
                    }
                  }
LABEL_78:
                  v164 = v67;
                  if ( !(_DWORD)v67 )
                  {
                    v143 = WdLogNewEntry5_WdAssertion(v64, v69);
                    *(_QWORD *)(v143 + 24) = 384LL;
                    WdLogEvent5_WdAssertion(v143);
                    v69 = v65;
                  }
                  if ( (unsigned int)v67 > v62 )
                  {
                    v158 = 261;
                    v66 = v159;
                    goto LABEL_56;
                  }
                  v70[1] = v67;
                  v86 = *v70;
                  if ( *v70 == 2 )
                  {
                    v90 = v170;
                    v91 = v170[v69];
                    if ( (v91 & 1) != 0 )
                    {
                      v70[15] |= 0x2000u;
                      v96 = v70[15] ^ (v70[15] ^ ((unsigned __int8)v90[v69] << 17)) & 0x40000;
                    }
                    else
                    {
                      v92 = v70[15] ^ (v70[15] ^ (v91 << 18)) & 0x100000;
                      v70[15] = v92;
                      if ( (v90[v69] & 8) == 0 )
                      {
LABEL_93:
                        v93 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
                        v93[3] = v70;
                        v93[4] = *((_QWORD *)v70 + 2);
                        v93[5] = (v70[15] >> 13) & 1;
                        v93[6] = *((_QWORD *)v70 + 9);
                        v93[7] = *((_QWORD *)v70 + 1);
                        WdLogEvent5_WdPresentTokenEvent(v93);
                        v86 = *v70;
                        v69 = v65;
                        goto LABEL_82;
                      }
                      v96 = v92 | 0x1000000;
                    }
                    v70[15] = v96;
                    goto LABEL_93;
                  }
LABEL_82:
                  if ( v86 == 9 )
                    v70[8] ^= (v70[8] ^ ((unsigned __int8)v170[v69] >> 4)) & 1;
                  if ( v167 )
                  {
                    v87 = (unsigned int)v67;
                    v144 = v168;
                    if ( (unsigned __int64)v168 + v67 > MmUserProbeAddress || (char *)v168 + v67 <= v168 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v144, v70, (unsigned int)v67);
                  }
                  else
                  {
                    v87 = (unsigned int)v67;
                    memmove(v168, v70, (unsigned int)v67);
                  }
                  if ( *v70 == 2 )
                  {
                    v64 = v170;
                    if ( (v170[v65] & 1) != 0 )
                    {
                      v64 = (char *)v70[15];
                      if ( ((unsigned __int16)v64 & 0x2000) == 0 )
                      {
                        v145 = WdLogNewEntry5_WdAssertion(v64, v88);
                        *(_QWORD *)(v145 + 24) = 450LL;
                        WdLogEvent5_WdAssertion(v145);
                        v64 = (char *)v70[15];
                      }
                      v94 = (__int16)v64;
                      if ( (unsigned int)((__int16)v64 >> 14) > 1 )
                      {
                        v146 = WdLogNewEntry5_WdAssertion(v64, (unsigned __int16)v64);
                        *(_QWORD *)(v146 + 24) = 451LL;
                        WdLogEvent5_WdAssertion(v146);
                        v94 = *((_WORD *)v70 + 30);
                        v64 = (char *)v70[15];
                      }
                      v70[15] = (unsigned int)v64 ^ ((unsigned __int16)v64 ^ (unsigned __int16)((v94 & 0xC000) + 0x4000)) & 0xC000;
                    }
                  }
                  v168 = (char *)v168 + v87;
                  v66 = v67 + v159;
                  v165 = v67 + v159;
                  v62 = v166 - v67;
                  v166 -= v67;
                  ++v65;
                }
              }
            }
            v121 = WdLogNewEntry5_WdEvent(v49);
            *(_QWORD *)(v121 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v123, v122);
            WdLogEvent5_WdEvent(v121);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
            COREACCESS::~COREACCESS((COREACCESS *)v186);
            goto LABEL_144;
          }
          v36 = v162;
        }
      }
      v97 = WdLogNewEntry5_WdEvent(v45);
      *(_QWORD *)(v97 + 24) = v36;
      WdLogEvent5_WdEvent(v97);
      if ( *((_DWORD *)v36 + 44) == 1 )
      {
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
        COREACCESS::~COREACCESS((COREACCESS *)v186);
        if ( v171 )
          DXGADAPTER::ReleaseReferenceNoTracking(v171);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v160);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v155, v98);
        if ( !v157 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return 3221225485LL;
LABEL_202:
        McTemplateK0q(v99, &EventProfilerExit, v100, v155);
        return 3221225485LL;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v177);
      COREACCESS::~COREACCESS((COREACCESS *)v186);
      if ( v171 )
        DXGADAPTER::ReleaseReferenceNoTracking(v171);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v160);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v155, v150);
      if ( v157 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v151, &EventProfilerExit, v152, v155);
      return 0LL;
    }
  }
  else
  {
    v108 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v108 + 24) = v12;
    *(_QWORD *)(v108 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v108);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v155, v109);
    if ( v157 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v110, &EventProfilerExit, v111, v155);
    return 3221225506LL;
  }
}
