/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C004DE90
 * Callers:
 *     <none>
 * Callees:
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     DrvLogDiagDisplayChange @ 0x1C004BA80 (DrvLogDiagDisplayChange.c)
 *     xxxUserChangeDisplaySettings @ 0x1C004C7F0 (xxxUserChangeDisplaySettings.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(struct _UNICODE_STRING *a1, struct _devicemodeW *a2, int a3, void *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  tagObjLock *v31; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v32[10]; // [rsp+50h] [rbp-98h] BYREF

  memset(v32, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v32[1]);
  v32[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v32[3]) = 26;
  LOBYTE(v32[6]) = -1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v12 = 0LL;
  while ( 1 )
  {
    v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v13 )
      v12 = *v13;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v12 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v16, v15, v17);
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v31);
  while ( 1 )
  {
    v20 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v25 = *v20;
    v20[2] = 0LL;
    if ( !*(_DWORD *)(v25 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
    DomainLockRef = GetDomainLockRef(8LL, v18);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v20);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v29);
  }
  tagObjLock::UnLock(v31);
  if ( gbVideoInitialized )
  {
    if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
      v22 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL) + 24LL) & 0x10;
    else
      v22 = 0;
    if ( (v22
       || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 872LL), 0xFFFFFFFF00002000uLL, 0))
      && a3 != 34 )
    {
      v30 = 5LL;
LABEL_34:
      v23 = -1;
      UserSetLastError(v30);
      goto LABEL_19;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v30 = 87LL;
      goto LABEL_34;
    }
    DrvLogDiagDisplayChange(0LL, 8);
    v23 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v32);
  }
  else
  {
    v23 = -1;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v21);
  return v23;
}
