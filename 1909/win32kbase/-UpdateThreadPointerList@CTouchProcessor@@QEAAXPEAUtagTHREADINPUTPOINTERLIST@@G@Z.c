/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0023000
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002AB70 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C002AE00 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C016B938 (-IsLastMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C0177AE0 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C0199DD8 (ApiSetEditionFindThreadPointerData.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C019C538 (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        PERESOURCE *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  void *v6; // rdx
  char *v7; // rbx
  int v8; // edi
  int IsResourceAcquiredExclusiveLite; // ecx
  _BOOL8 v10; // rsi
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  struct tagTHREADINPUTPOINTERLIST *v15; // rdi
  PDEVICE_OBJECT v16; // rcx
  struct _ERESOURCE *v17; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v19; // rax
  struct tagTHREADINFO *v20; // rdi
  struct tagTHREADINFO **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r9d
  PERESOURCE *DomainLockRef; // rsi
  struct tagKERNELHANDLETABLEENTRY *v29; // r13
  __int64 v30; // rax
  PERESOURCE *v31; // rdi
  LARGE_INTEGER *v32; // rdi
  __int64 v33; // rax
  struct tagTHREADINFO *v34; // rdi
  struct tagTHREADINFO **v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  PVOID v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _ERESOURCE *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdi
  int v47; // eax
  int v48; // r9d
  __int64 v49; // r8
  __int64 ThreadPointerData; // rdi
  struct tagTHREADINPUTPOINTERLIST *v51; // r13
  __int64 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+30h] [rbp-D0h]
  _BOOL8 v58; // [rsp+38h] [rbp-C8h]
  __int64 v59; // [rsp+38h] [rbp-C8h]
  int v60; // [rsp+40h] [rbp-C0h] BYREF
  int v61; // [rsp+44h] [rbp-BCh] BYREF
  int v62; // [rsp+48h] [rbp-B8h] BYREF
  int v63; // [rsp+4Ch] [rbp-B4h] BYREF
  __int128 v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v66; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 v69; // [rsp+88h] [rbp-78h]
  GUID pActivityId; // [rsp+8Ch] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v72; // [rsp+C0h] [rbp-40h]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+D0h] [rbp-30h] BYREF
  int *v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v77; // [rsp+100h] [rbp+0h] BYREF
  int *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR v80; // [rsp+130h] [rbp+30h] BYREF
  int *v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR v83; // [rsp+160h] [rbp+60h] BYREF

  v6 = &WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      7,
      115,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  v7 = (char *)(this + 6);
  if ( ExIsResourceAcquiredExclusiveLite(this[6]) || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)v7) )
    ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
  v8 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v56 = IsResourceAcquiredExclusiveLite;
  v10 = qword_1C0215308 == (_QWORD)KeGetCurrentThread();
  v58 = v10;
  while ( 1 )
  {
    if ( v8 )
    {
      if ( IsResourceAcquiredExclusiveLite )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&ActivityId.Data1 = 0LL;
        *(_QWORD *)ActivityId.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v66 = 1;
          v19 = PsGetCurrentThreadWin32Thread();
          v65 = v19;
          if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v65 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v60 = v66;
                v72 = &v60;
                v73 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
              }
            }
          }
        }
        else
        {
          v65 = 0LL;
        }
        v20 = 0LL;
        while ( 1 )
        {
          v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v21 )
            v20 = *v21;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v23, v22);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v26, v25) == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v20 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v65
          && (*(_DWORD *)(v65 + 48) || *(int *)(v65 + 24) > 0) )
        {
          *(_DWORD *)(v65 + 44) = 1;
          *(GUID *)(v65 + 28) = ActivityId;
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v61 = v66;
              v75 = &v61;
              v76 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v74);
              v27 = dword_1C020CB50;
            }
            if ( v27 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v62 = v66;
              v78 = &v62;
              v79 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v77);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v20;
        gbValidateHandleForIL = 1;
        if ( (unsigned int)IsValidGuiThreadContext() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v29 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v29 + 2);
              v30 = *(_QWORD *)v29;
              *((_QWORD *)v29 + 2) = 0LL;
              if ( !*(_DWORD *)(v30 + 8) )
                ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
              v31 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v31 == (PERESOURCE *)&gDomainDummyLock )
                ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
              ExReleaseResourceAndLeaveCriticalRegion(*v31);
              HMUnlockObject(*(_QWORD *)v29);
              tagDomLock::LockExclusive((tagDomLock *)v31);
              v29 = gpducstulHead;
            }
            while ( gpducstulHead );
            v7 = (char *)(this + 6);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          v10 = v58;
        }
      }
      else
      {
        v32 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
        if ( v32 )
          v32[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&pActivityId.Data1 = 0LL;
        *(_QWORD *)pActivityId.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v69 = 0;
          v33 = PsGetCurrentThreadWin32Thread();
          v68 = v33;
          if ( v33 && (*(int *)(v33 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
          {
            EtwActivityIdControl(3u, &pActivityId);
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v63 = v69;
                v81 = &v63;
                v82 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &pActivityId, 0LL, 3u, &v80);
              }
            }
          }
        }
        else
        {
          v68 = 0LL;
        }
        v34 = 0LL;
        while ( 1 )
        {
          v35 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v35 )
            v34 = *v35;
          v38 = (PVOID)PsGetCurrentProcess(v37, v36);
          if ( v38 )
          {
            if ( v38 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v40, v39) == gpepCSRSS && v34 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v34 == gptiRit )
          {
            break;
          }
          _InterlockedIncrement(&gcDITHitTestWaiters);
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v68);
        EtwTraceAcquiredSharedUserCrit();
      }
      if ( v10 )
        RIMLockExclusive(&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)v7);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      if ( ThreadWin32Thread == gptiManipulationThread && (*(_DWORD *)(ThreadWin32Thread + 480) & 1) != 0 )
        break;
    }
    if ( !*((_DWORD *)v7 + 10) || *((struct _KTHREAD **)v7 + 3) == KeGetCurrentThread() )
      break;
    v41 = *(struct _ERESOURCE **)v7;
    ++*((_DWORD *)v7 + 4);
    ExReleaseResourceAndLeaveCriticalRegion(v41);
    if ( v10 )
    {
      qword_1C0215308 = 0LL;
      ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (_DWORD)gdwInAtomicOperation )
    {
      ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
      v43 = (unsigned int)gdwInAtomicOperation;
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
      v45 = PsGetCurrentThreadWin32Thread();
      v46 = v45;
      if ( v45 )
      {
        v47 = *(_DWORD *)(v45 + 24);
        if ( (*(_DWORD *)(v46 + 44) || *(_DWORD *)(v46 + 48) || v47 > 0)
          && dword_1C020CB50 > 6u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14A1, (LPCGUID)(v46 + 28), 0LL, 2u, &v83);
        }
        *(_DWORD *)(v46 + 44) = 0;
        v64 = 0uLL;
        *(_OWORD *)(v46 + 28) = 0uLL;
      }
    }
    EtwTraceReleaseUserCrit(v43, v42, v44);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard((CInpLockGuard *)v7);
    IsResourceAcquiredExclusiveLite = v56;
    v8 = 1;
  }
  v14 = 0;
  *((_QWORD *)v7 + 4) = KeGetCurrentThread();
  if ( a3 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v48 = 116;
        goto LABEL_131;
      }
    }
  }
  else
  {
    v15 = *(struct tagTHREADINPUTPOINTERLIST **)a2;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)a2 == a2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v16 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_15;
      v48 = 117;
LABEL_131:
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(v16->DeviceExtension, v12, 7, v48, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      goto LABEL_15;
    }
    v59 = 0LL;
    v49 = 0LL;
    if ( a3 )
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData(a2, a3, 0LL);
      if ( !ThreadPointerData )
        ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
      v49 = *(_QWORD *)(ThreadPointerData + 24);
      v15 = *(struct tagTHREADINPUTPOINTERLIST **)a2;
      v59 = v49;
    }
    while ( v15 != a2 )
    {
      v13 = *((unsigned int *)v15 + 12);
      v51 = v15;
      v15 = *(struct tagTHREADINPUTPOINTERLIST **)v15;
      v57 = v14++;
      v12 = *((_QWORD *)v51 + 3);
      if ( v49 == v12 )
      {
        v13 = (unsigned int)v13 | 2;
        *((_DWORD *)v51 + 12) = v13;
      }
      else if ( (v13 & 2) != 0 && (!v12 || !v49 || *(_DWORD *)(v12 + 28) != *(_DWORD *)(v49 + 28)) )
      {
        if ( (unsigned int)CTouchProcessor::IsLastMsgData((CTouchProcessor *)this, v12) )
          goto LABEL_123;
        v52 = *((_QWORD *)v51 + 3);
        if ( this[10] != (PERESOURCE)KeGetCurrentThread() )
          ((void (*)(void))MicrosoftTelemetryAssertTriggeredNoArgsKM)();
        if ( (*(_DWORD *)(v52 + 36) & 0x20) != 0 )
        {
LABEL_123:
          ApiSetEditionUnlinkAndFreeThreadPointerData(a2, v51);
          v14 = v57;
        }
        v49 = v59;
      }
    }
    if ( v14 != *((_DWORD *)a2 + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v49);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v48 = 118;
        goto LABEL_131;
      }
    }
  }
LABEL_15:
  if ( !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)v7) && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)v7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v55);
  v17 = *(struct _ERESOURCE **)v7;
  *((_QWORD *)v7 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v17);
}
