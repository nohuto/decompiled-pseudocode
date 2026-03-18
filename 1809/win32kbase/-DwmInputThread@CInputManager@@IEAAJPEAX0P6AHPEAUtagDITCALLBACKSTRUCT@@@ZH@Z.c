/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C01831F4
 * Callers:
 *     NtCompositionInputThread @ 0x1C0183860 (NtCompositionInputThread.c)
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
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C0183150 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     ?ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z @ 0x1C01836E4 (-ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(
        CInputManager *this,
        void *a2,
        void *a3,
        int (*a4)(struct tagDITCALLBACKSTRUCT *),
        int a5)
{
  CInputManager *v5; // rsi
  int v8; // edi
  struct _KTHREAD *v9; // rax
  HANDLE v10; // rax
  HANDLE v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 *v25; // r14
  HANDLE Handle; // [rsp+20h] [rbp-40h] BYREF
  HANDLE v28; // [rsp+28h] [rbp-38h] BYREF
  tagObjLock *v29; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v30[32]; // [rsp+38h] [rbp-28h] BYREF

  v5 = g_pInputManager;
  Handle = 0LL;
  v28 = 0LL;
  v8 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v8 >= 0 )
  {
    v8 = CInputManager::ValidateUserEvent(a3, &v28);
    if ( v8 >= 0 )
    {
      v9 = (struct _KTHREAD *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v5 + 1,
                                (signed __int64)KeGetCurrentThread(),
                                0LL);
      if ( !v9 || v9 == KeGetCurrentThread() )
      {
        v10 = Handle;
        Handle = 0LL;
        *((_QWORD *)v5 + 2) = v10;
        v11 = v28;
        v28 = 0LL;
        *((_QWORD *)v5 + 3) = v11;
        *((_QWORD *)v5 + 4) = *(_QWORD *)v5;
        *((_DWORD *)v5 + 17) = a5;
        *((_QWORD *)v5 + 5) = a4;
        v8 = UserActivateDwmInputProcessing((char *)v5 + 16);
        if ( v8 >= 0 )
          v8 = UserProcessDwmInput((char *)v5 + 16);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13, v12, v14);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v30, 1);
        v16 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v30);
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v16;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v29);
        while ( 1 )
        {
          v25 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
          v20 = *v25;
          v25[2] = 0LL;
          if ( !*(_DWORD *)(v20 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
          DomainLockRef = GetDomainLockRef(8);
          if ( DomainLockRef == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24);
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*v25);
          tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
        }
        tagObjLock::UnLock(v29);
        CInputManager::CleanupDwmInputThread(v5);
        UserSessionSwitchLeaveCrit();
      }
      else
      {
        v8 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v28 )
        ZwClose(v28);
    }
  }
  return (unsigned int)v8;
}
