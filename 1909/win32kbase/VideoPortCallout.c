/*
 * XREFs of VideoPortCallout @ 0x1C0106300
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     CreateKernelEvent @ 0x1C005EAA0 (CreateKernelEvent.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C0104B80 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     CSTRemove @ 0x1C0108500 (CSTRemove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rcx
  int v3; // r14d
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *v31; // rdi
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  LARGE_INTEGER *v37; // rbx
  __int64 v38; // rax
  struct tagTHREADINFO *v39; // rbx
  struct tagTHREADINFO **v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  PVOID v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rbx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  PERESOURCE *v63; // rdi
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // [rsp+48h] [rbp-C0h] BYREF
  int v68; // [rsp+4Ch] [rbp-BCh] BYREF
  int v69; // [rsp+50h] [rbp-B8h] BYREF
  int v70; // [rsp+54h] [rbp-B4h] BYREF
  int v71; // [rsp+58h] [rbp-B0h] BYREF
  int v72; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v73; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+68h] [rbp-A0h] BYREF
  PVOID KernelEvent; // [rsp+70h] [rbp-98h]
  __int64 v76; // [rsp+78h] [rbp-90h]
  PVOID Object[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v78; // [rsp+90h] [rbp-78h]
  unsigned __int8 v79; // [rsp+98h] [rbp-70h]
  GUID ActivityId; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v81; // [rsp+B0h] [rbp-58h]
  unsigned __int8 v82; // [rsp+B8h] [rbp-50h]
  GUID pActivityId; // [rsp+BCh] [rbp-4Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-38h] BYREF
  int *v85; // [rsp+F0h] [rbp-18h]
  __int64 v86; // [rsp+F8h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR v87; // [rsp+100h] [rbp-8h] BYREF
  int *v88; // [rsp+120h] [rbp+18h]
  __int64 v89; // [rsp+128h] [rbp+20h]
  EVENT_DATA_DESCRIPTOR v90; // [rsp+130h] [rbp+28h] BYREF
  int *v91; // [rsp+150h] [rbp+48h]
  __int64 v92; // [rsp+158h] [rbp+50h]
  EVENT_DATA_DESCRIPTOR v93; // [rsp+160h] [rbp+58h] BYREF
  int *v94; // [rsp+180h] [rbp+78h]
  __int64 v95; // [rsp+188h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR v96; // [rsp+190h] [rbp+88h] BYREF
  int *v97; // [rsp+1B0h] [rbp+A8h]
  __int64 v98; // [rsp+1B8h] [rbp+B0h]
  EVENT_DATA_DESCRIPTOR v99; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 *v100; // [rsp+1E0h] [rbp+D8h]
  __int64 v101; // [rsp+1E8h] [rbp+E0h]

  v76 = a1;
  v1 = a1;
  v74 = a1;
  v67 = 0;
  KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
  if ( KernelEvent )
  {
    if ( *(_BYTE *)(v74 + 31) )
    {
      Object[0] = gpevtVideoInitialized;
      Object[1] = gpevtQueueReadyForCallout;
      KeWaitForMultipleObjects(2u, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    }
    if ( gbVideoInitialized )
    {
      if ( CsrApiPort )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&ActivityId.Data1 = 0LL;
        *(_QWORD *)ActivityId.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v79 = 1;
          v6 = PsGetCurrentThreadWin32Thread(v4);
          v78 = v6;
          if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v78 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v68 = v79;
                v85 = &v68;
                v86 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
              }
            }
          }
        }
        else
        {
          v78 = 0LL;
        }
        v7 = 0LL;
        while ( 1 )
        {
          v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v8 )
            v7 = *v8;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v7 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v78
          && (*(_DWORD *)(v78 + 48) || *(int *)(v78 + 24) > 0) )
        {
          *(_DWORD *)(v78 + 44) = 1;
          *(GUID *)(v78 + 28) = ActivityId;
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v69 = v79;
              v88 = &v69;
              v89 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v87);
              v14 = dword_1C020CB50;
            }
            if ( v14 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v70 = v79;
              v91 = &v70;
              v92 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v90);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v7;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v15, v16);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v27 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v27[2];
              v28 = *v27;
              v27[2] = 0LL;
              if ( !*(_DWORD *)(v28 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
              v31 = (PERESOURCE *)GetDomainLockRef(12LL, v24, v26);
              if ( v31 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32);
              ExReleaseResourceAndLeaveCriticalRegion(*v31);
              HMUnlockObject(*v27);
              tagDomLock::LockExclusive(v31);
              v27 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v1 = v76;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
        v3 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v74, &v67);
        UserSessionSwitchLeaveCrit(v34, v33);
        if ( v3 < 0 )
        {
          if ( v67 )
          {
            v37 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v35);
            if ( v37 )
              v37[1] = KeQueryPerformanceCounter(0LL);
            *(_QWORD *)&pActivityId.Data1 = 0LL;
            *(_QWORD *)pActivityId.Data4 = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v82 = 1;
              v38 = PsGetCurrentThreadWin32Thread(v36);
              v81 = v38;
              if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v81 + 48)) )
              {
                EtwActivityIdControl(3u, &pActivityId);
                if ( dword_1C020CB50 > 6u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                  {
                    v71 = v82;
                    v94 = &v71;
                    v95 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &pActivityId, 0LL, 3u, &v93);
                  }
                }
              }
            }
            else
            {
              v81 = 0LL;
            }
            v39 = 0LL;
            while ( 1 )
            {
              v40 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
              if ( v40 )
                v39 = *v40;
              v43 = (PVOID)PsGetCurrentProcess(v42, v41);
              if ( v43 )
              {
                if ( v43 == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v45, v44) == gpepCSRSS && v39 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v39 == gptiRit )
              {
                break;
              }
              ++gcDITHitTestWaiters;
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
              && v81
              && (*(_DWORD *)(v81 + 48) || *(int *)(v81 + 24) > 0) )
            {
              *(_DWORD *)(v81 + 44) = 1;
              *(GUID *)(v81 + 28) = pActivityId;
              if ( dword_1C020CB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                {
                  v72 = v82;
                  v97 = &v72;
                  v98 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &pActivityId, 0LL, 3u, &v96);
                  v46 = dword_1C020CB50;
                }
                if ( v46 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                {
                  LODWORD(v73) = v82;
                  v100 = &v73;
                  v101 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &pActivityId, 0LL, 3u, &v99);
                }
              }
            }
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v39;
            gbValidateHandleForIL = 1;
            if ( IsValidGuiThreadContext() )
            {
              v51 = (PERESOURCE *)GetDomainLockRef(12LL, v47, v48);
              if ( v51 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52);
              if ( ExIsResourceAcquiredExclusiveLite(*v51) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v55);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v51);
              v59 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v59[2];
                  v60 = *v59;
                  v59[2] = 0LL;
                  if ( !*(_DWORD *)(v60 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58);
                  v63 = (PERESOURCE *)GetDomainLockRef(12LL, v56, v58);
                  if ( v63 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v62, v61, v64);
                  ExReleaseResourceAndLeaveCriticalRegion(*v63);
                  HMUnlockObject(*v59);
                  tagDomLock::LockExclusive(v63);
                  v59 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v1 = v76;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v51);
            }
            CSTRemove(4LL, &v74);
            UserSessionSwitchLeaveCrit(v66, v65);
          }
        }
        else
        {
          KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
          v3 = *(_DWORD *)(v1 + 24);
        }
      }
      else
      {
        v3 = -1073741816;
      }
    }
    else
    {
      v3 = -1073741823;
    }
    Win32FreePool((__int64)KernelEvent);
    *(_DWORD *)(v1 + 24) = v3;
  }
  else
  {
    *(_DWORD *)(v1 + 24) = -1073741801;
  }
}
