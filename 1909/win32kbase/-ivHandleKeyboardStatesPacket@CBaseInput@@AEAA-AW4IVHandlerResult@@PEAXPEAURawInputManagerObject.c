/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018A590
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
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_s @ 0x1C0133528 (WPP_RECORDER_SF_s.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C0186200 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C0186224 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 *     ?IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z @ 0x1C018715C (-IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardStatesPacket(__int64 a1, unsigned __int16 **a2)
{
  unsigned int v3; // esi
  int v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rax
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rdx
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
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  __int64 v34; // r8
  __int64 *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v39; // [rsp+38h] [rbp-D0h] BYREF
  int v40; // [rsp+3Ch] [rbp-CCh] BYREF
  int v41; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v42[6]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+78h] [rbp-90h]
  __int64 v44; // [rsp+80h] [rbp-88h]
  unsigned __int8 v45; // [rsp+88h] [rbp-80h]
  GUID ActivityId; // [rsp+8Ch] [rbp-7Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-68h] BYREF
  int *v48; // [rsp+C0h] [rbp-48h]
  __int64 v49; // [rsp+C8h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+D0h] [rbp-38h] BYREF
  int *v51; // [rsp+F0h] [rbp-18h]
  __int64 v52; // [rsp+F8h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+100h] [rbp-8h] BYREF
  int *v54; // [rsp+120h] [rbp+18h]
  __int64 v55; // [rsp+128h] [rbp+20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      (_DWORD)gBaseLog,
      (_DWORD)a2,
      12,
      44,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids,
      (__int64)"IV_PACKET_TYPE_KBD_FULL_STATES");
  v42[2] = a2;
  v3 = 1;
  v42[1] = 0LL;
  v42[4] = 0LL;
  v42[5] = 0LL;
  LOBYTE(v43) = 1;
  v4 = IVDeSerializeIVKeyboardStatesPacket(a2, (struct CIVSerializer *)v42);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v5, 12, 45, (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids, v4);
    }
    v3 = 0;
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v45 = 1;
      v9 = PsGetCurrentThreadWin32Thread(v7);
      v44 = v9;
      if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v44 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v39 = v45;
            v48 = &v39;
            v49 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v44 = 0LL;
    }
    v10 = 0LL;
    while ( 1 )
    {
      v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v11 )
        v10 = *v11;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v10 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v44 && (*(_DWORD *)(v44 + 48) || *(int *)(v44 + 24) > 0) )
    {
      *(_DWORD *)(v44 + 44) = 1;
      *(GUID *)(v44 + 28) = ActivityId;
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v40 = v45;
          v51 = &v40;
          v52 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v50);
          v17 = dword_1C020CB50;
        }
        if ( v17 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v41 = v45;
          v54 = &v41;
          v55 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v53);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v10;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v18, v19);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v35 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v30 = *v35;
        v35[2] = 0LL;
        if ( !*(_DWORD *)(v30 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
        v33 = (PERESOURCE *)GetDomainLockRef(12LL, v27, v29);
        if ( v33 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34);
        ExReleaseResourceAndLeaveCriticalRegion(*v33);
        HMUnlockObject(*v35);
        tagDomLock::LockExclusive(v33);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    ApplyFullKeyboardStates(*a2, (__int128 *)a2[1]);
    UserSessionSwitchLeaveCrit(v37, v36);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v42);
  return v3;
}
