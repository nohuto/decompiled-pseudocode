/*
 * XREFs of ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0177370
 * Callers:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C015E0C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C016F1C0 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002AB70 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C00A3E64 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C00A3EF0 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C0177AE0 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LockShared(CInpLockGuard *this, struct CLockListEntryStack *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rcx
  int IsResourceAcquiredExclusiveLite; // r12d
  _BOOL8 v9; // r15
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  __int64 v11; // rcx
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
  __int64 v39; // rax
  struct tagTHREADINFO *v40; // rbx
  struct tagTHREADINFO **v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PVOID v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  CInpLockGuard *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rbx
  int v53; // eax
  int v54; // [rsp+30h] [rbp-D0h] BYREF
  int v55; // [rsp+34h] [rbp-CCh] BYREF
  int v56; // [rsp+38h] [rbp-C8h] BYREF
  int v57; // [rsp+3Ch] [rbp-C4h]
  int v58; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v59; // [rsp+48h] [rbp-B8h]
  __int64 v60; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v61; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v64; // [rsp+80h] [rbp-80h]
  GUID pActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-68h] BYREF
  int *v67; // [rsp+B8h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR v69; // [rsp+C8h] [rbp-38h] BYREF
  int *v70; // [rsp+E8h] [rbp-18h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR v72; // [rsp+F8h] [rbp-8h] BYREF
  int *v73; // [rsp+118h] [rbp+18h]
  __int64 v74; // [rsp+120h] [rbp+20h]
  EVENT_DATA_DESCRIPTOR v75; // [rsp+128h] [rbp+28h] BYREF
  int *v76; // [rsp+148h] [rbp+48h]
  __int64 v77; // [rsp+150h] [rbp+50h]
  EVENT_DATA_DESCRIPTOR v78; // [rsp+158h] [rbp+58h] BYREF

  if ( (unsigned int)CInpLockGuard::isOwned((PERESOURCE *)this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  v6 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v57 = IsResourceAcquiredExclusiveLite;
  v9 = qword_1C0215308 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v6 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&ActivityId.Data1 = 0LL;
        *(_QWORD *)ActivityId.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v61 = 1;
          v12 = PsGetCurrentThreadWin32Thread(v11);
          v60 = v12;
          if ( v12 && (*(int *)(v12 + 24) > 0 || *(_DWORD *)(v60 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v54 = v61;
                v67 = &v54;
                v68 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
              }
            }
          }
        }
        else
        {
          v60 = 0LL;
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
          && v60
          && (*(_DWORD *)(v60 + 48) || *(int *)(v60 + 24) > 0) )
        {
          *(_DWORD *)(v60 + 44) = 1;
          *(GUID *)(v60 + 28) = ActivityId;
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v55 = v61;
              v70 = &v55;
              v71 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v69);
              v20 = dword_1C020CB50;
            }
            if ( v20 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v56 = v61;
              v73 = &v56;
              v74 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v72);
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
            IsResourceAcquiredExclusiveLite = v57;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&pActivityId.Data1 = 0LL;
        *(_QWORD *)pActivityId.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v64 = 0;
          v39 = PsGetCurrentThreadWin32Thread(v11);
          v63 = v39;
          if ( v39 && (*(int *)(v39 + 24) > 0 || *(_DWORD *)(v63 + 48)) )
          {
            EtwActivityIdControl(3u, &pActivityId);
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v58 = v64;
                v76 = &v58;
                v77 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &pActivityId, 0LL, 3u, &v75);
              }
            }
          }
        }
        else
        {
          v63 = 0LL;
        }
        v40 = 0LL;
        while ( 1 )
        {
          v41 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v41 )
            v40 = *v41;
          v44 = (PVOID)PsGetCurrentProcess(v43, v42);
          if ( v44 )
          {
            if ( v44 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v46, v45) == gpepCSRSS && v40 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v40 == gptiRit )
          {
            break;
          }
          _InterlockedIncrement(&gcDITHitTestWaiters);
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v63);
        EtwTraceAcquiredSharedUserCrit();
      }
      if ( v9 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
    if ( (unsigned int)CInpLockGuard::isManipulationThreadInTermination(v47) || !*((_DWORD *)this + 10) )
      break;
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
    if ( v9 )
    {
      qword_1C0215308 = 0LL;
      ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50);
      v49 = (unsigned int)gdwInAtomicOperation;
      if ( (_DWORD)gdwInAtomicOperation )
      {
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v51 = PsGetCurrentThreadWin32Thread(v49);
      v52 = v51;
      if ( v51 )
      {
        v53 = *(_DWORD *)(v51 + 24);
        if ( (*(_DWORD *)(v52 + 44) || *(_DWORD *)(v52 + 48) || v53 > 0) && dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14A1, (LPCGUID)(v52 + 28), 0LL, 2u, &v78);
        }
        *(_DWORD *)(v52 + 44) = 0;
        v59 = 0uLL;
        *(_OWORD *)(v52 + 28) = 0uLL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard(this);
    v6 = 1;
  }
}
