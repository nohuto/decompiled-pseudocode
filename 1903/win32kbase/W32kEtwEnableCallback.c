/*
 * XREFs of W32kEtwEnableCallback @ 0x1C0073D6C
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0073690 (McGenControlCallbackV2.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0011680 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C010C800 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01C8544 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  const struct _GUID *v6; // r13
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ebx
  void *v19; // rsi
  int v20; // edi
  ULONG v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *v24; // r14
  int v25; // esi
  LONGLONG v26; // rcx
  LONGLONG v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // rcx
  LARGE_INTEGER *v48; // rbx
  __int64 v49; // rax
  struct tagTHREADINFO *v50; // rbx
  struct tagTHREADINFO **v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PVOID v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned int v57; // r9d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  PERESOURCE *v63; // rbx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 *v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  PERESOURCE *v75; // rdi
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rcx
  LARGE_INTEGER *v79; // rbx
  __int64 v80; // rax
  struct tagTHREADINFO *v81; // rbx
  struct tagTHREADINFO **v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  PVOID v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned int v88; // r9d
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rcx
  PERESOURCE *v93; // rbx
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  PERESOURCE *v104; // rdi
  __int64 v105; // r8
  __int64 *v106; // rsi
  __int64 v107; // rdx
  __int64 v108; // rcx
  int v109; // [rsp+38h] [rbp-D0h] BYREF
  int v110; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v111; // [rsp+40h] [rbp-C8h] BYREF
  int v112; // [rsp+44h] [rbp-C4h] BYREF
  int v113; // [rsp+48h] [rbp-C0h] BYREF
  int v114; // [rsp+4Ch] [rbp-BCh] BYREF
  int v115; // [rsp+50h] [rbp-B8h] BYREF
  int v116; // [rsp+54h] [rbp-B4h] BYREF
  int v117; // [rsp+58h] [rbp-B0h] BYREF
  int v118; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG ResultLength[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _GUID *v120; // [rsp+68h] [rbp-A0h]
  ULONG v121[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-80h] BYREF
  __int64 v124; // [rsp+98h] [rbp-70h]
  unsigned __int8 v125; // [rsp+A0h] [rbp-68h]
  GUID ActivityId; // [rsp+A4h] [rbp-64h] BYREF
  __int64 v127; // [rsp+B8h] [rbp-50h]
  unsigned __int8 v128; // [rsp+C0h] [rbp-48h]
  GUID pActivityId; // [rsp+C4h] [rbp-44h] BYREF
  __int64 v130; // [rsp+D8h] [rbp-30h]
  unsigned __int8 v131; // [rsp+E0h] [rbp-28h]
  GUID v132; // [rsp+E4h] [rbp-24h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  int *v134; // [rsp+118h] [rbp+10h]
  __int64 v135; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v136; // [rsp+128h] [rbp+20h] BYREF
  int *v137; // [rsp+148h] [rbp+40h]
  __int64 v138; // [rsp+150h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR v139; // [rsp+158h] [rbp+50h] BYREF
  int *v140; // [rsp+178h] [rbp+70h]
  __int64 v141; // [rsp+180h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v142; // [rsp+188h] [rbp+80h] BYREF
  int *v143; // [rsp+1A8h] [rbp+A0h]
  __int64 v144; // [rsp+1B0h] [rbp+A8h]
  EVENT_DATA_DESCRIPTOR v145; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v146; // [rsp+1D8h] [rbp+D0h]
  __int64 v147; // [rsp+1E0h] [rbp+D8h]
  EVENT_DATA_DESCRIPTOR v148; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v149; // [rsp+208h] [rbp+100h]
  __int64 v150; // [rsp+210h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR v151; // [rsp+218h] [rbp+110h] BYREF
  int *v152; // [rsp+238h] [rbp+130h]
  __int64 v153; // [rsp+240h] [rbp+138h]
  EVENT_DATA_DESCRIPTOR v154; // [rsp+248h] [rbp+140h] BYREF
  ULONG *v155; // [rsp+268h] [rbp+160h]
  __int64 v156; // [rsp+270h] [rbp+168h]
  EVENT_DATA_DESCRIPTOR v157; // [rsp+278h] [rbp+170h] BYREF
  unsigned int *v158; // [rsp+298h] [rbp+190h]
  __int64 v159; // [rsp+2A0h] [rbp+198h]
  _BYTE KeyValueInformation[12]; // [rsp+2A8h] [rbp+1A0h] BYREF
  unsigned int v161; // [rsp+2B4h] [rbp+1ACh]
  _BYTE v162[12]; // [rsp+2C0h] [rbp+1B8h] BYREF
  ULONG v163; // [rsp+2CCh] [rbp+1C4h]

  v120 = a1;
  v6 = a1;
  if ( a2 <= 1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v125 = 1;
      v29 = PsGetCurrentThreadWin32Thread(v7);
      v124 = v29;
      if ( v29 && (*(int *)(v29 + 24) > 0 || *(_DWORD *)(v124 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v112 = v125;
            v134 = &v112;
            v135 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v124 = 0LL;
    }
    v9 = 0LL;
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v9 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v9 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v124
      && (*(_DWORD *)(v124 + 48) || *(int *)(v124 + 24) > 0) )
    {
      *(_DWORD *)(v124 + 44) = 1;
      *(GUID *)(v124 + 28) = ActivityId;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v113 = v125;
          v137 = &v113;
          v138 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v136);
          v30 = dword_1C020FB50;
        }
        if ( v30 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v114 = v125;
          v140 = &v114;
          v141 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v139);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v16, v17);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v41 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v41[2];
          v42 = *v41;
          v41[2] = 0LL;
          if ( !*(_DWORD *)(v42 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
          v45 = (PERESOURCE *)GetDomainLockRef(12LL, v38, v40);
          if ( v45 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46);
          ExReleaseResourceAndLeaveCriticalRegion(*v45);
          HMUnlockObject(*v41);
          tagDomLock::LockExclusive(v45);
          v41 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v6 = v120;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    v18 = v111;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    v109 = gdwPolicyFlags;
    while ( 1 )
    {
      v19 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v109);
      if ( !v19 )
        break;
      RtlInitUnicodeString(&DestinationString, L"ThreadUnresponsiveLogTimeout");
      if ( ZwQueryValueKey(
             v19,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength[1]) >= 0 )
      {
        v18 = v161;
        v20 = 0;
        v109 = 0;
      }
      else
      {
        v20 = v109;
        if ( !v109 )
          v18 = 200;
      }
      ZwClose(v19);
      if ( !v20 )
        goto LABEL_21;
    }
    v18 = 200;
LABEL_21:
    v21 = ResultLength[1];
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    v110 = gdwPolicyFlags;
    while ( 1 )
    {
      v24 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v110);
      if ( !v24 )
        break;
      RtlInitUnicodeString(&ValueName, L"UserCritAcquireDelayLogTimeout");
      if ( ZwQueryValueKey(v24, &ValueName, KeyValuePartialInformation, v162, 0x14u, v121) >= 0 )
      {
        v21 = v163;
        v25 = 0;
        v110 = 0;
      }
      else
      {
        v25 = v110;
        if ( !v110 )
          v21 = 500;
      }
      ZwClose(v24);
      if ( !v25 )
        goto LABEL_27;
    }
    v21 = 500;
LABEL_27:
    UserSessionSwitchLeaveCrit(v23, v22);
    if ( v18 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v18;
      W32kEtwInputProcessDelayTimeoutMs = v18;
    }
    if ( v21 > 0x1F4 )
      W32kEtwUserCritAcquireDelayTimeoutus = v21;
    if ( a2 == 1 )
    {
      v26 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutus;
      v27 = 3600 * gliQpcFreq.QuadPart;
      v28 = v26 / 1000000;
    }
    else
    {
      v27 = -1LL;
      v28 = -1LL;
    }
    W32kEtwUserCritAcquireDelayTimeoutQPC = v28;
    W32KEtwUserCritTelemetryThrottleQPC = v27;
    W32kEtwEnabledKeyword = a4;
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C020F438 - 1) <= 2u
       || (qword_1C020F420 & 0x8000000000040000uLL) == 0
       || (qword_1C020F428 & 0x8000000000040000uLL) != qword_1C020F428)
      && W32kEtwWaitCursorActiveType )
    {
      v48 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v26);
      if ( v48 )
        v48[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&pActivityId.Data1 = 0LL;
      *(_QWORD *)pActivityId.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v128 = 1;
        v49 = PsGetCurrentThreadWin32Thread(v47);
        v127 = v49;
        if ( v49 && (*(int *)(v49 + 24) > 0 || *(_DWORD *)(v127 + 48)) )
        {
          EtwActivityIdControl(3u, &pActivityId);
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v115 = v128;
              v143 = &v115;
              v144 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &pActivityId, 0LL, 3u, &v142);
            }
          }
        }
      }
      else
      {
        v127 = 0LL;
      }
      v50 = 0LL;
      while ( 1 )
      {
        v51 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v51 )
          v50 = *v51;
        v54 = (PVOID)PsGetCurrentProcess(v53, v52);
        if ( v54 )
        {
          if ( v54 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v56, v55) == gpepCSRSS && v50 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v50 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v127
        && (*(_DWORD *)(v127 + 48) || *(int *)(v127 + 24) > 0) )
      {
        *(_DWORD *)(v127 + 44) = 1;
        *(GUID *)(v127 + 28) = pActivityId;
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v116 = v128;
            v146 = &v116;
            v147 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &pActivityId, 0LL, 3u, &v145);
            v57 = dword_1C020FB50;
          }
          if ( v57 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v117 = v128;
            v149 = &v117;
            v150 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &pActivityId, 0LL, 3u, &v148);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v50;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        v63 = (PERESOURCE *)GetDomainLockRef(12LL, v58, v60);
        if ( v63 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v62, v61, v64);
        if ( ExIsResourceAcquiredExclusiveLite(*v63) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v67);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v63);
        v71 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v71[2];
            v72 = *v71;
            v71[2] = 0LL;
            if ( !*(_DWORD *)(v72 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v69, v68, v70);
            v75 = (PERESOURCE *)GetDomainLockRef(12LL, v68, v70);
            if ( v75 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v74, v73, v76);
            ExReleaseResourceAndLeaveCriticalRegion(*v75);
            HMUnlockObject(*v71);
            tagDomLock::LockExclusive(v75);
            v71 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v6 = v120;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v63);
      }
      W32kEtwWaitCursorActiveType = 0;
      UserSessionSwitchLeaveCrit(v59, v58);
    }
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    v79 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v77);
    if ( v79 )
      v79[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&v132.Data1 = 0LL;
    *(_QWORD *)v132.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v131 = 1;
      v80 = PsGetCurrentThreadWin32Thread(v78);
      v130 = v80;
      if ( v80 && (*(int *)(v80 + 24) > 0 || *(_DWORD *)(v130 + 48)) )
      {
        EtwActivityIdControl(3u, &v132);
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v118 = v131;
            v152 = &v118;
            v153 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &v132, 0LL, 3u, &v151);
          }
        }
      }
    }
    else
    {
      v130 = 0LL;
    }
    v81 = 0LL;
    while ( 1 )
    {
      v82 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v82 )
        v81 = *v82;
      v85 = (PVOID)PsGetCurrentProcess(v84, v83);
      if ( v85 )
      {
        if ( v85 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v87, v86) == gpepCSRSS && v81 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v81 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v130
      && (*(_DWORD *)(v130 + 48) || *(int *)(v130 + 24) > 0) )
    {
      *(_DWORD *)(v130 + 44) = 1;
      *(GUID *)(v130 + 28) = v132;
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          ResultLength[0] = v131;
          v155 = ResultLength;
          v156 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &v132, 0LL, 3u, &v154);
          v88 = dword_1C020FB50;
        }
        if ( v88 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v111 = v131;
          v158 = &v111;
          v159 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &v132, 0LL, 3u, &v157);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v81;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      v93 = (PERESOURCE *)GetDomainLockRef(12LL, v89, v90);
      if ( v93 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v92, v91, v94);
      if ( ExIsResourceAcquiredExclusiveLite(*v93) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v96, v95, v97);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v93);
      while ( 1 )
      {
        v106 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v101 = *v106;
        v106[2] = 0LL;
        if ( !*(_DWORD *)(v101 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v99, v98, v100);
        v104 = (PERESOURCE *)GetDomainLockRef(12LL, v98, v100);
        if ( v104 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v103, v102, v105);
        ExReleaseResourceAndLeaveCriticalRegion(*v104);
        HMUnlockObject(*v106);
        tagDomLock::LockExclusive(v104);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v93);
    }
    CitEtwEnableCallback(v6, 2u, a4);
    UserSessionSwitchLeaveCrit(v108, v107);
  }
}
