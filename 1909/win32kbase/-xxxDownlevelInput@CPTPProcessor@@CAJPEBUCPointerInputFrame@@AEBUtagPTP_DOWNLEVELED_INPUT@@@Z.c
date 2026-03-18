/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017A1DC
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017A704 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C002E050 (InternalMapVirtualKeyEx.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@_K@Z @ 0x1C0178310 (-DownlevelInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@.c)
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
 *     ApiSetEditionSynthesizeMouseWheel @ 0x1C019C444 (ApiSetEditionSynthesizeMouseWheel.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rbx
  __int64 v6; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD LowPart; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  bool v13; // cf
  __int16 v14; // ax
  __int64 v15; // rcx
  __int64 v16; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v18; // rax
  struct tagTHREADINFO *v19; // rbx
  struct tagTHREADINFO **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PVOID CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  PERESOURCE *v42; // rdi
  __int64 v43; // r8
  __int64 *v44; // r14
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v49[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v51; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  _QWORD v53[3]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-68h] BYREF
  int *v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR v57; // [rsp+C8h] [rbp-38h] BYREF
  int *v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+F8h] [rbp-8h] BYREF
  int *v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)gptiCurrent + 141);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LowPart = PerformanceCounter.LowPart;
  InputTraceLogging::PTP::DownlevelInput(a1, a2, PerformanceCounter.QuadPart);
  v11 = *(unsigned int *)a2;
  if ( (int)v11 < 0 )
    goto LABEL_55;
  if ( (int)v11 > 1 )
  {
    if ( (_DWORD)v11 == 2 )
    {
      v12 = *((_QWORD *)gptiCurrent + 54);
      memset(v49, 0, sizeof(v49));
      v13 = *((_DWORD *)a2 + 1) != 0;
      v49[1] = v5;
      WORD1(v49[0]) = v13 ? 16546 : -16222;
      if ( v12 )
        LOBYTE(v49[0]) = InternalMapVirtualKeyEx(0xA2u, 0LL, *(_QWORD *)(*(_QWORD *)(v12 + 48) + 32LL));
      xxxProcessKeyEvent((unsigned int)v49, 0, 0, 0, 0LL, 0LL);
      return v2;
    }
LABEL_55:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v9, v10);
    return (unsigned int)-1073741811;
  }
  v53[0] = 0x800000LL;
  v53[1] = 0LL;
  v53[2] = 0LL;
  v14 = 1024;
  if ( (_DWORD)v11 )
    v14 = 2048;
  WORD2(v53[0]) = v14;
  HIWORD(v53[0]) = *((_WORD *)a2 + 2);
  UserSessionSwitchLeaveCrit(v11, v9);
  ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)v53, v6, LowPart, 1000);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v51 = 1;
    v18 = PsGetCurrentThreadWin32Thread(v16);
    v50 = v18;
    if ( v18 && (*(int *)(v18 + 24) > 0 || *(_DWORD *)(v50 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v46 = v51;
          v55 = &v46;
          v56 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v50 = 0LL;
  }
  v19 = 0LL;
  while ( 1 )
  {
    v20 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v20 )
      v19 = *v20;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v22, v21);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v25, v24) == gpepCSRSS && v19 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v19 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v50 && (*(_DWORD *)(v50 + 48) || *(int *)(v50 + 24) > 0) )
  {
    *(_DWORD *)(v50 + 44) = 1;
    *(GUID *)(v50 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v47 = v51;
        v58 = &v47;
        v59 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v57);
        v26 = dword_1C020CB50;
      }
      if ( v26 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v48 = v51;
        v61 = &v48;
        v62 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v60);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v19;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v28);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    while ( 1 )
    {
      v44 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v39 = *v44;
      v44[2] = 0LL;
      if ( !*(_DWORD *)(v39 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38);
      v42 = (PERESOURCE *)GetDomainLockRef(12LL, v36, v38);
      if ( v42 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v43);
      ExReleaseResourceAndLeaveCriticalRegion(*v42);
      HMUnlockObject(*v44);
      tagDomLock::LockExclusive(v42);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  return v2;
}
