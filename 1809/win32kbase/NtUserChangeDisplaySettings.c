/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C004B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     DrvLogDiagDisplayChange @ 0x1C004B040 (DrvLogDiagDisplayChange.c)
 *     xxxUserChangeDisplaySettings @ 0x1C004B2B0 (xxxUserChangeDisplaySettings.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rdi
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 v25; // rcx
  tagObjLock *v26; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v27[10]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v28[32]; // [rsp+A0h] [rbp-9h] BYREF

  memset(v27, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v27[1]);
  v27[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v27[3]) = 26;
  LOBYTE(v27[6]) = -1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v28, 1);
  v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v28);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v26);
  while ( 1 )
  {
    v16 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v20 = *v16;
    v16[2] = 0LL;
    if ( !*(_DWORD *)(v20 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v16);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v26);
  if ( gbVideoInitialized )
  {
    if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
      v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 0x10;
    else
      v17 = 0;
    if ( (v17
       || !(unsigned int)CheckAccessForIntegrityLevelEx(
                           *(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL),
                           0xFFFFFFFF00002000uLL,
                           0LL))
      && a3 != 34 )
    {
      v25 = 5LL;
LABEL_23:
      v18 = -1;
      UserSetLastError(v25);
      goto LABEL_12;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v25 = 87LL;
      goto LABEL_23;
    }
    DrvLogDiagDisplayChange(0LL, 8);
    v18 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, 1, v27);
  }
  else
  {
    v18 = -1;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit();
  return v18;
}
