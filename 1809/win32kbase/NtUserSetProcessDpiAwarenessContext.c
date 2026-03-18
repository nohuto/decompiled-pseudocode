/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C0079F80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0025C6C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
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
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C007A124 (IsValidKernelDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 i; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v23; // r8
  tagObjLock *v24; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v25[32]; // [rsp+28h] [rbp-30h] BYREF

  v3 = a2;
  v4 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v25, 1);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v25);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v24);
  while ( 1 )
  {
    v10 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v19 = *v10;
    v10[2] = 0LL;
    if ( !*(_DWORD *)(v19 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v10);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v24);
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v4)
    || (v4 & 0xF) == 1 && ((v4 >> 8) & 0x1FF) != *(_WORD *)(PsGetCurrentProcessWin32Process(v11) + 284) )
  {
    UserSetLastError(87LL);
LABEL_27:
    v15 = 0LL;
    goto LABEL_14;
  }
  v12 = *((_QWORD *)gptiCurrent + 53);
  v13 = *(_DWORD *)(v12 + 820);
  if ( (v13 & 0x200000) != 0 )
  {
    if ( !v3 )
      goto LABEL_27;
    if ( (v4 & 0xF) == 0 )
      goto LABEL_27;
    v14 = *(_DWORD *)(v12 + 280);
    if ( v14 != 18 )
      goto LABEL_27;
  }
  else
  {
    v14 = *(_DWORD *)(v12 + 280);
  }
  v15 = 1LL;
  *(_DWORD *)(v12 + 820) = v13 | 0x200000;
  if ( v14 != v4 )
  {
    *(_DWORD *)(v12 + 280) = v4;
    v16 = *(_QWORD *)(v12 + 672);
    if ( v16 )
    {
      for ( i = *(_QWORD *)(v16 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v12, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v12, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit();
  return v15;
}
