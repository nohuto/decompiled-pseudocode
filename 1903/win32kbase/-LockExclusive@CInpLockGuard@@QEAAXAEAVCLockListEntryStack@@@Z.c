/*
 * XREFs of ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00A4D40 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00BA72C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0160330 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01657DC (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0165FC8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C01662B0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C016CC38 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C016D1D8 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C016D3CC (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C016E948 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C016FE30 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0170C18 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0172D00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029F60 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002A1F0 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A450 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C00A4F74 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C00A5000 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C0179CD0 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LockExclusive(CInpLockGuard *this, struct CLockListEntryStack *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rcx
  int IsResourceAcquiredExclusiveLite; // r12d
  _BOOL8 v9; // r15
  CInpLockGuard *v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rax
  struct tagTHREADINFO *v41; // rbx
  struct tagTHREADINFO **v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PVOID v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _ERESOURCE *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rbx
  int v54; // eax
  int v55; // [rsp+30h] [rbp-D0h] BYREF
  int v56; // [rsp+34h] [rbp-CCh] BYREF
  int v57; // [rsp+38h] [rbp-C8h] BYREF
  int v58; // [rsp+3Ch] [rbp-C4h]
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v60; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v62; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v64; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v65; // [rsp+80h] [rbp-80h]
  GUID pActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-68h] BYREF
  int *v68; // [rsp+B8h] [rbp-48h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR v70; // [rsp+C8h] [rbp-38h] BYREF
  int *v71; // [rsp+E8h] [rbp-18h]
  __int64 v72; // [rsp+F0h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR v73; // [rsp+F8h] [rbp-8h] BYREF
  int *v74; // [rsp+118h] [rbp+18h]
  __int64 v75; // [rsp+120h] [rbp+20h]
  EVENT_DATA_DESCRIPTOR v76; // [rsp+128h] [rbp+28h] BYREF
  int *v77; // [rsp+148h] [rbp+48h]
  __int64 v78; // [rsp+150h] [rbp+50h]
  EVENT_DATA_DESCRIPTOR v79; // [rsp+158h] [rbp+58h] BYREF

  if ( (unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  v6 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v58 = IsResourceAcquiredExclusiveLite;
  v9 = qword_1C0218308 == (_QWORD)KeGetCurrentThread();
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
          v62 = 1;
          v13 = PsGetCurrentThreadWin32Thread(v12);
          v61 = v13;
          if ( v13 && (*(int *)(v13 + 24) > 0 || *(_DWORD *)(v61 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( dword_1C020FB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v55 = v62;
                v68 = &v55;
                v69 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
              }
            }
          }
        }
        else
        {
          v61 = 0LL;
        }
        v14 = 0LL;
        while ( 1 )
        {
          v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v15 )
            v14 = *v15;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v14 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v61
          && (*(_DWORD *)(v61 + 48) || *(int *)(v61 + 24) > 0) )
        {
          *(_DWORD *)(v61 + 44) = 1;
          *(GUID *)(v61 + 28) = ActivityId;
          if ( dword_1C020FB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v56 = v62;
              v71 = &v56;
              v72 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v70);
              v21 = dword_1C020FB50;
            }
            if ( v21 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
            {
              v57 = v62;
              v74 = &v57;
              v75 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v73);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v14;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v22, v23);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v27);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v34 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v34[2];
              v35 = *v34;
              v34[2] = 0LL;
              if ( !*(_DWORD *)(v35 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
              v38 = (PERESOURCE *)GetDomainLockRef(12LL, v31, v33);
              if ( v38 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v39);
              ExReleaseResourceAndLeaveCriticalRegion(*v38);
              HMUnlockObject(*v34);
              tagDomLock::LockExclusive(v38);
              v34 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            IsResourceAcquiredExclusiveLite = v58;
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
          v65 = 0;
          v40 = PsGetCurrentThreadWin32Thread(v12);
          v64 = v40;
          if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v64 + 48)) )
          {
            EtwActivityIdControl(3u, &pActivityId);
            if ( dword_1C020FB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v59 = v65;
                v77 = &v59;
                v78 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &pActivityId, 0LL, 3u, &v76);
              }
            }
          }
        }
        else
        {
          v64 = 0LL;
        }
        v41 = 0LL;
        while ( 1 )
        {
          v42 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v42 )
            v41 = *v42;
          v45 = (PVOID)PsGetCurrentProcess(v44, v43);
          if ( v45 )
          {
            if ( v45 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v47, v46) == gpepCSRSS && v41 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v41 == gptiRit )
          {
            break;
          }
          _InterlockedIncrement(&gcDITHitTestWaiters);
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v64);
        EtwTraceAcquiredSharedUserCrit();
      }
      if ( v9 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)this);
    if ( (unsigned int)CInpLockGuard::isManipulationThreadInTermination(v10)
      || !*((_DWORD *)this + 10)
      || *((struct _KTHREAD **)this + 3) == KeGetCurrentThread() )
    {
      break;
    }
    v48 = *(struct _ERESOURCE **)this;
    ++*((_DWORD *)this + 4);
    ExReleaseResourceAndLeaveCriticalRegion(v48);
    if ( v9 )
    {
      qword_1C0218308 = 0LL;
      ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51);
      v50 = (unsigned int)gdwInAtomicOperation;
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
      v52 = PsGetCurrentThreadWin32Thread(v50);
      v53 = v52;
      if ( v52 )
      {
        v54 = *(_DWORD *)(v52 + 24);
        if ( (*(_DWORD *)(v53 + 44) || *(_DWORD *)(v53 + 48) || v54 > 0)
          && dword_1C020FB50 > 6u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3461, (LPCGUID)(v53 + 28), 0LL, 2u, &v79);
        }
        *(_DWORD *)(v53 + 44) = 0;
        v60 = 0uLL;
        *(_OWORD *)(v53 + 28) = 0uLL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard(this);
    v6 = 1;
  }
  *((_QWORD *)this + 4) = KeGetCurrentThread();
}
