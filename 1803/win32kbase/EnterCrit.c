/*
 * XREFs of EnterCrit @ 0x1C0030490
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00D02B4 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     McTemplateK0xqx @ 0x1C00B0468 (McTemplateK0xqx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagTHREADINFO *__fastcall EnterCrit(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  int v4; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  struct tagTHREADINFO **v7; // rax
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v14; // r8d
  LONGLONG v15; // rdi
  LARGE_INTEGER v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 DomainLockRef; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *i; // r14
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rdi

  v3 = a2;
  v4 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( v4
      || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v3 && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v12 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 8);
    v16 = PerformanceCounter;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0 )
    {
      v24 = (unsigned __int8)byte_1C019A1D8;
      if ( (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
        && (qword_1C019A1C0 & 0x200000010000000LL) != 0
        && (qword_1C019A1C8 & 0x200000010000000LL) == qword_1C019A1C8
        && ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v24) = byte_1C019A1D8 - 1;
        McTemplateK0xqx(v24, (unsigned int)&AcquiredExclusiveUserCritEvent, v14, v15, 0, gullUserCritAcquireToken);
      }
    }
    if ( v15 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && v16.QuadPart - W32KEtwUserCritAcquireDelayExLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
        McTemplateK0xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v14,
          v15,
          1000000 * v15 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      W32KEtwUserCritAcquireDelayExLastTelemetryQPC = v16.QuadPart;
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  DomainLockRef = GetDomainLockRef(8LL);
  if ( (__int64 *)DomainLockRef == &gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
  if ( *(struct _KTHREAD **)(DomainLockRef + 8) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(DomainLockRef, 0LL);
  *(_QWORD *)(DomainLockRef + 8) = KeGetCurrentThread();
  for ( i = (_QWORD *)gpducstulHead; gpducstulHead; i = (_QWORD *)gpducstulHead )
  {
    gpducstulHead = i[2];
    v25 = *i;
    i[2] = 0LL;
    if ( !*(_DWORD *)(v25 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
    v28 = (__int64 *)GetDomainLockRef(8LL);
    if ( v28 == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
    tagObjLock::UnLock((tagObjLock *)v28);
    HMUnlockObject(*i);
    tagObjLock::LockExclusive((tagObjLock *)v28);
  }
  if ( *(struct _KTHREAD **)(DomainLockRef + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(DomainLockRef + 8) = 0LL;
    ExReleasePushLockExclusiveEx(DomainLockRef, 0LL);
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)(DomainLockRef + 16));
    ExReleasePushLockSharedEx(DomainLockRef, 0LL);
  }
  KeLeaveCriticalRegion();
  return v6;
}
