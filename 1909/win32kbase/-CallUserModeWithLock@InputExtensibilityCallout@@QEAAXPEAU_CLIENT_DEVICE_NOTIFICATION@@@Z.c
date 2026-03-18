/*
 * XREFs of ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0175C60
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x1C019A4F8 (ApiSetEditionInputExtensibilityCallout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeWithLock(
        InputExtensibilityCallout *this,
        struct _CLIENT_DEVICE_NOTIFICATION *a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
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
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // r8
  __int64 *v38; // rsi
  int v39; // [rsp+30h] [rbp-99h] BYREF
  int v40; // [rsp+34h] [rbp-95h] BYREF
  int v41; // [rsp+38h] [rbp-91h] BYREF
  __int64 v42; // [rsp+40h] [rbp-89h]
  unsigned __int8 v43; // [rsp+48h] [rbp-81h]
  GUID ActivityId; // [rsp+4Ch] [rbp-7Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  int *v46; // [rsp+80h] [rbp-49h]
  int v47; // [rsp+88h] [rbp-41h]
  int v48; // [rsp+8Ch] [rbp-3Dh]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+90h] [rbp-39h] BYREF
  int *v50; // [rsp+B0h] [rbp-19h]
  int v51; // [rsp+B8h] [rbp-11h]
  int v52; // [rsp+BCh] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+C0h] [rbp-9h] BYREF
  int *v54; // [rsp+E0h] [rbp+17h]
  int v55; // [rsp+E8h] [rbp+1Fh]
  int v56; // [rsp+ECh] [rbp+23h]

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v2 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    KeBugCheck(0x164u);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v8);
  ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, a2);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v43 = 1;
    v12 = PsGetCurrentThreadWin32Thread(v10);
    v42 = v12;
    if ( v12 && (*(int *)(v12 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v48 = 0;
          v39 = v43;
          v46 = &v39;
          v47 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v42 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v42 && (*(_DWORD *)(v42 + 48) || *(int *)(v42 + 24) > 0) )
  {
    *(_DWORD *)(v42 + 44) = 1;
    *(GUID *)(v42 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v52 = 0;
        v40 = v43;
        v50 = &v40;
        v51 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v49);
        v20 = dword_1C020CB50;
      }
      if ( v20 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v56 = 0;
        v41 = v43;
        v54 = &v41;
        v55 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v53);
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
    while ( 1 )
    {
      v38 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v33 = *v38;
      v38[2] = 0LL;
      if ( !*(_DWORD *)(v33 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
      v36 = (PERESOURCE *)GetDomainLockRef(12LL, v30, v32);
      if ( v36 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37);
      ExReleaseResourceAndLeaveCriticalRegion(*v36);
      HMUnlockObject(*v38);
      tagDomLock::LockExclusive(v36);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
}
