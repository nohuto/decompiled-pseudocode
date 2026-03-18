/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015D3B0
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
 *     MouseMove @ 0x1C01823A0 (MouseMove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1, __int64 a2)
{
  char v2; // al
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v7; // rax
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *v31; // rdi
  __int64 v32; // r8
  __int64 *v33; // rsi
  int v34; // [rsp+38h] [rbp-89h] BYREF
  int v35; // [rsp+3Ch] [rbp-85h] BYREF
  int v36; // [rsp+40h] [rbp-81h] BYREF
  __int64 v37; // [rsp+48h] [rbp-79h]
  unsigned __int8 v38; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  int *v41; // [rsp+88h] [rbp-39h]
  int v42; // [rsp+90h] [rbp-31h]
  int v43; // [rsp+94h] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR v44; // [rsp+98h] [rbp-29h] BYREF
  int *v45; // [rsp+B8h] [rbp-9h]
  int v46; // [rsp+C0h] [rbp-1h]
  int v47; // [rsp+C4h] [rbp+3h]
  EVENT_DATA_DESCRIPTOR v48; // [rsp+C8h] [rbp+7h] BYREF
  int *v49; // [rsp+E8h] [rbp+27h]
  int v50; // [rsp+F0h] [rbp+2Fh]
  int v51; // [rsp+F4h] [rbp+33h]

  if ( (dword_1C02115F4 & 0x40) == 0 )
    goto LABEL_6;
  v2 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v2 & 3) != 0 )
  {
    v3 = 1;
    goto LABEL_7;
  }
  if ( (v2 & 0xC) == 0 )
  {
LABEL_6:
    a2 = giMouseMoveTable % (unsigned int)(unsigned __int8)byte_1C0211531;
    v3 = (unsigned __int8)byte_1C0211532[a2];
    giMouseMoveTable = a2 + 1;
    if ( !v3 )
      return;
    goto LABEL_7;
  }
  v3 = 4 * (unsigned __int8)byte_1C0211532[0];
LABEL_7:
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2);
  MouseMove(v3 * gMKDeltaX, v3 * gMKDeltaY);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v38 = 1;
    v7 = PsGetCurrentThreadWin32Thread(v5);
    v37 = v7;
    if ( v7 && (*(int *)(v7 + 24) > 0 || *(_DWORD *)(v37 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v43 = 0;
          v34 = v38;
          v41 = &v34;
          v42 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v37 = 0LL;
  }
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v9 )
      v8 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v8 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v37 && (*(_DWORD *)(v37 + 48) || *(int *)(v37 + 24) > 0) )
  {
    *(_DWORD *)(v37 + 44) = 1;
    *(GUID *)(v37 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v47 = 0;
        v35 = v38;
        v45 = &v35;
        v46 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v44);
        v15 = dword_1C020CB50;
      }
      if ( v15 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v51 = 0;
        v36 = v38;
        v49 = &v36;
        v50 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v48);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v16, v17);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v21);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    while ( 1 )
    {
      v33 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v28 = *v33;
      v33[2] = 0LL;
      if ( !*(_DWORD *)(v28 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      v31 = (PERESOURCE *)GetDomainLockRef(12LL, v25, v27);
      if ( v31 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32);
      ExReleaseResourceAndLeaveCriticalRegion(*v31);
      HMUnlockObject(*v33);
      tagDomLock::LockExclusive(v31);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
}
