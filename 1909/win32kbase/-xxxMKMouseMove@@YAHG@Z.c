/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1C015CA30
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
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C019C068 (ApiSetEditionSetAccessibilityTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxMKMouseMove(__int16 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *v32; // rdi
  __int64 v33; // r8
  __int64 *v34; // rsi
  void (__fastcall *v35)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  int v37; // [rsp+38h] [rbp-89h] BYREF
  int v38; // [rsp+3Ch] [rbp-85h] BYREF
  int v39; // [rsp+40h] [rbp-81h] BYREF
  __int64 v40; // [rsp+48h] [rbp-79h]
  unsigned __int8 v41; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  int *v44; // [rsp+88h] [rbp-39h]
  __int64 v45; // [rsp+90h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+98h] [rbp-29h] BYREF
  int *v47; // [rsp+B8h] [rbp-9h]
  __int64 v48; // [rsp+C0h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+C8h] [rbp+7h] BYREF
  int *v50; // [rsp+E8h] [rbp+27h]
  __int64 v51; // [rsp+F0h] [rbp+2Fh]

  if ( (gdwPUDFlags & 0x2000) == 0 || !gtmridMKMoveCursor )
  {
    gMKDeltaX = (char)a1;
    gMKDeltaY = SHIBYTE(a1);
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2);
    v2 = gMKDeltaX;
    v3 = gMKDeltaY;
    if ( (dword_1C02115F4 & 0x40) != 0
      && (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0 )
    {
      v4 = 4 * (unsigned __int8)byte_1C0211532;
      v2 = v4 * gMKDeltaX;
      v3 = v4 * gMKDeltaY;
    }
    MouseMove(v2, v3);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v41 = 1;
      v8 = PsGetCurrentThreadWin32Thread(v6);
      v40 = v8;
      if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v40 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v37 = v41;
            v44 = &v37;
            v45 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v40 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v40 && (*(_DWORD *)(v40 + 48) || *(int *)(v40 + 24) > 0) )
    {
      *(_DWORD *)(v40 + 44) = 1;
      *(GUID *)(v40 + 28) = ActivityId;
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v38 = v41;
          v47 = &v38;
          v48 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v46);
          v16 = dword_1C020CB50;
        }
        if ( v16 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v39 = v41;
          v50 = &v39;
          v51 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v49);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v17, v18);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v34 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v29 = *v34;
        v34[2] = 0LL;
        if ( !*(_DWORD *)(v29 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
        v32 = (PERESOURCE *)GetDomainLockRef(12LL, v26, v28);
        if ( v32 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33);
        ExReleaseResourceAndLeaveCriticalRegion(*v32);
        HMUnlockObject(*v34);
        tagDomLock::LockExclusive(v32);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    if ( !dword_1C0211628 || (gdwPUDFlags & 0x2000) != 0 )
    {
      v35 = xxxMKMoveConstCursorTimer;
      if ( gMouseCursor[0] )
        v35 = xxxMKMoveAccelCursorTimer;
      giMouseMoveTable = 0;
      gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, v35);
    }
  }
  return 0LL;
}
