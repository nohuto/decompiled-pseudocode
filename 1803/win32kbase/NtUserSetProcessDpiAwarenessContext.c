/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C005C180
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C005C320 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C005C468 (IsValidKernelDpiAwarenessContext.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v4; // esi
  unsigned int v5; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rbx
  __int64 i; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v27; // rdx
  tagObjLock *v28; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v11, v10, v12);
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v28);
  while ( 1 )
  {
    v15 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v23 = *v15;
    v15[2] = 0LL;
    if ( !*(_DWORD *)(v23 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
    DomainLockRef = GetDomainLockRef(8LL, v13);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v15);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v27);
  }
  tagObjLock::UnLock(v28);
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v4)
    || (v4 & 0xF) == 1 && ((v4 >> 8) & 0x1FF) != *(_WORD *)(PsGetCurrentProcessWin32Process(v16) + 284) )
  {
    UserSetLastError(87);
    goto LABEL_21;
  }
  v17 = *((_QWORD *)gptiCurrent + 52);
  v18 = *(unsigned int *)(v17 + 812);
  if ( (v18 & 0x200000) != 0 )
  {
    if ( !v3 )
      goto LABEL_21;
    if ( (v4 & 0xF) == 0 )
      goto LABEL_21;
    v19 = *(_DWORD *)(v17 + 280);
    if ( v19 != 18 )
      goto LABEL_21;
  }
  else
  {
    v19 = *(_DWORD *)(v17 + 280);
  }
  v18 = (unsigned int)v18 | 0x200000;
  v5 = 1;
  *(_DWORD *)(v17 + 812) = v18;
  if ( v19 != v4 )
  {
    v20 = *(_QWORD *)(v17 + 664);
    *(_DWORD *)(v17 + 280) = v4;
    if ( v20 )
    {
      for ( i = *(_QWORD *)(v20 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v17, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v17, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v18);
  return v5;
}
