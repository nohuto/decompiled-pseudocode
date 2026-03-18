/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C009CBE0
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00A5BA0 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UserDeactivateMITInputProcessingHelper @ 0x1C0187200 (UserDeactivateMITInputProcessingHelper.c)
 * Callees:
 *     ProtectHandle @ 0x1C000FCDC (ProtectHandle.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C009CE5C (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C009CEC4 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall IOCPDispatcher::Close(IOCPDispatcher *this, char a2)
{
  HANDLE *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  HANDLE v6; // rcx
  int v7; // eax
  int v8; // edx
  _UNKNOWN **v9; // rcx
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // r14
  HANDLE v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  __int64 v38; // r8
  int pData; // [rsp+28h] [rbp-D8h]
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v43[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  IOCPDispatcher *v45; // [rsp+48h] [rbp-B8h]
  _BYTE v46[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h]
  unsigned __int8 v48; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  EVENT_DATA_DESCRIPTOR v50; // [rsp+90h] [rbp-70h] BYREF
  int *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+C0h] [rbp-40h] BYREF
  int *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v56; // [rsp+F0h] [rbp-10h] BYREF
  int *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]

  v45 = this;
  v3 = (HANDLE *)this;
  if ( *((_QWORD *)this + 343) )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects(this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)v3);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v5, v4);
      memset(v46, 0, sizeof(v46));
      while ( 1 )
      {
        v6 = v3[343];
        LOBYTE(pData) = 0;
        v44 = -200000LL;
        v7 = ZwRemoveIoCompletionEx(v6, v46, 1LL, v43, &v44, pData);
        if ( v7 < 0 )
          break;
        if ( v7 == 258 )
          goto LABEL_6;
      }
      v9 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_D((_DWORD)gBaseLog, v8, 3, 21, (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids, v7);
      }
LABEL_6:
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)&ActivityId.Data1 = 0LL;
      *(_QWORD *)ActivityId.Data4 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v48 = 1;
        v32 = PsGetCurrentThreadWin32Thread(v10);
        v47 = v32;
        if ( v32 && (*(int *)(v32 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v40 = v48;
              v51 = &v40;
              v52 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &v50);
            }
          }
        }
      }
      else
      {
        v47 = 0LL;
      }
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v13 )
          v12 = *v13;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v12 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v47 && (*(_DWORD *)(v47 + 48) || *(int *)(v47 + 24) > 0) )
      {
        *(_DWORD *)(v47 + 44) = 1;
        *(GUID *)(v47 + 28) = ActivityId;
        if ( dword_1C020FB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v41 = v48;
            v54 = &v41;
            v55 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v53);
            v33 = dword_1C020FB50;
          }
          if ( v33 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            v42 = v48;
            v57 = &v42;
            v58 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v56);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v12;
      gbValidateHandleForIL = 1;
      if ( IsValidGuiThreadContext() )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v4, v19);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v30 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v30[2];
            v34 = *v30;
            v30[2] = 0LL;
            if ( !*(_DWORD *)(v34 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
            v37 = (PERESOURCE *)GetDomainLockRef(12LL, v27, v29);
            if ( v37 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38);
            ExReleaseResourceAndLeaveCriticalRegion(*v37);
            HMUnlockObject(*v30);
            tagDomLock::LockExclusive(v37);
            v30 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v3 = (HANDLE *)v45;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    v31 = v3[344];
    if ( v31 )
    {
      ProtectHandle(v31, v4, 0LL, 0);
      ObCloseHandle(v3[344], 1);
      v3[344] = 0LL;
    }
    ZwClose(v3[343]);
    v3[343] = 0LL;
  }
}
