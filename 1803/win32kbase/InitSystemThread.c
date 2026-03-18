/*
 * XREFs of InitSystemThread @ 0x1C00A0CF0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ClearAppStarting @ 0x1C003CFA0 (ClearAppStarting.c)
 *     InitClientInfo @ 0x1C0063284 (InitClientInfo.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v20; // rdx
  __int64 *v21; // rsi
  __int64 ThreadWin32Thread; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  tagObjLock *v28; // [rsp+48h] [rbp+10h] BYREF

  PsGetThreadProcess(KeGetCurrentThread());
  v5 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v12, v11, v13);
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v28);
  while ( 1 )
  {
    v21 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v16 = *v21;
    v21[2] = 0LL;
    if ( !*(_DWORD *)(v16 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
    DomainLockRef = GetDomainLockRef(8LL, v14);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v21);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v20);
  }
  tagObjLock::UnLock(v28);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v23 = Win32AllocPoolWithQuota(256LL, 0x69637355u);
  *(_QWORD *)(ThreadWin32Thread + 472) = v23;
  if ( v23 )
  {
    *(_DWORD *)(ThreadWin32Thread + 480) = *(_DWORD *)(ThreadWin32Thread + 480) & 0xFFFFFFF3 | 4;
    if ( (unsigned int)InitClientInfo(ThreadWin32Thread) )
    {
      if ( a1 )
      {
        v25 = *(_QWORD *)(ThreadWin32Thread + 488);
        if ( v25 )
          Win32FreePool(v25);
        v26 = Win32AllocPoolWithQuota(*(unsigned __int16 *)a1 + 18LL, 0x78747355u);
        *(_QWORD *)(ThreadWin32Thread + 488) = v26;
        if ( v26 )
        {
          *(_QWORD *)(v26 + 8) = v26 + 16;
          memmove(*(void **)(*(_QWORD *)(ThreadWin32Thread + 488) + 8LL), a1[1], *(unsigned __int16 *)a1);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 488) + 8LL)
                   + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
          *(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 488) + 2LL) = *(_WORD *)a1 + 2;
          **(_WORD **)(ThreadWin32Thread + 488) = *(_WORD *)a1;
        }
      }
      v24 = *(_QWORD *)(ThreadWin32Thread + 416);
      if ( v24 && (*(_DWORD *)(v24 + 12) & 0x40) != 0 )
        ClearAppStarting(v24);
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  UserSessionSwitchLeaveCrit(v24);
  return v5;
}
