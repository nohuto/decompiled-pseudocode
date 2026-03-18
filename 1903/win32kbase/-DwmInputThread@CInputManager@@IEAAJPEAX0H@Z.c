/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01C7380
 * Callers:
 *     NtCompositionInputThread @ 0x1C01C7CA0 (NtCompositionInputThread.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C01C72E0 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     ?ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z @ 0x1C01C7B18 (-ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(CInputManager *this, void *a2, void *a3, int a4)
{
  CInputManager *v4; // r15
  int v7; // r14d
  struct _KTHREAD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v12; // rax
  struct tagTHREADINFO *v13; // rbx
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v43; // [rsp+38h] [rbp-C8h] BYREF
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  CInputManager *v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v49; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-88h] BYREF
  int *v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR v54; // [rsp+A8h] [rbp-58h] BYREF
  int *v55; // [rsp+C8h] [rbp-38h]
  __int64 v56; // [rsp+D0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR v57; // [rsp+D8h] [rbp-28h] BYREF
  int *v58; // [rsp+F8h] [rbp-8h]
  __int64 v59; // [rsp+100h] [rbp+0h]

  v4 = g_pInputManager;
  v47 = g_pInputManager;
  Handle = 0LL;
  v43 = 0LL;
  v7 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v7 >= 0 )
  {
    v7 = CInputManager::ValidateUserEvent(a3, &v43);
    if ( v7 >= 0 )
    {
      v8 = (struct _KTHREAD *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v4 + 1,
                                (signed __int64)KeGetCurrentThread(),
                                0LL);
      if ( !v8 || v8 == KeGetCurrentThread() )
      {
        *((_QWORD *)v4 + 2) = Handle;
        *((_QWORD *)v4 + 3) = v43;
        *((_QWORD *)v4 + 4) = *(_QWORD *)v4;
        Handle = 0LL;
        v43 = 0LL;
        *((_DWORD *)v4 + 15) = a4;
        v7 = UserActivateDwmInputProcessing((char *)v4 + 16);
        if ( v7 >= 0 )
          v7 = UserProcessDwmInput((char *)v4 + 16);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&ActivityId.Data1 = 0LL;
        *(_QWORD *)ActivityId.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v49 = 1;
          v12 = PsGetCurrentThreadWin32Thread(v10);
          v48 = v12;
          if ( v12 && (*(int *)(v12 + 24) > 0 || *(_DWORD *)(v48 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( dword_1C020FB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v44 = v49;
                v52 = &v44;
                v53 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
              }
            }
          }
        }
        else
        {
          v48 = 0LL;
        }
        v13 = 0LL;
        while ( 1 )
        {
          v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v14 )
            v13 = *v14;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v16, v15);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v19, v18) == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v13 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v48
          && (*(_DWORD *)(v48 + 48) || *(int *)(v48 + 24) > 0) )
        {
          *(_DWORD *)(v48 + 44) = 1;
          *(GUID *)(v48 + 28) = ActivityId;
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v45 = v49;
              v55 = &v45;
              v56 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v54);
              v20 = dword_1C020FB50;
            }
            if ( v20 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v46 = v49;
              v58 = &v46;
              v59 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v57);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v13;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v21, v22);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v33 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v33[2];
              v34 = *v33;
              v33[2] = 0LL;
              if ( !*(_DWORD *)(v34 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
              v37 = (PERESOURCE *)GetDomainLockRef(12LL, v30, v32);
              if ( v37 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38);
              ExReleaseResourceAndLeaveCriticalRegion(*v37);
              HMUnlockObject(*v33);
              tagDomLock::LockExclusive(v37);
              v33 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v4 = v47;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
        CInputManager::CleanupDwmInputThread(v4);
        UserSessionSwitchLeaveCrit(v40, v39);
      }
      else
      {
        v7 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v43 )
        ZwClose(v43);
    }
  }
  return (unsigned int)v7;
}
