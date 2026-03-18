/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0149D30
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C007AA60 (-Read@CBaseInput@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C0149A94 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C0149B40 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v15; // r8
  __int64 *v16; // rsi
  CBaseInput *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  CBaseInput *v20; // rdx
  CBaseInput *v21; // rcx
  unsigned int v22; // ebx
  tagObjLock *v24; // [rsp+30h] [rbp-48h] BYREF
  LPCWSTR *v25; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v26[32]; // [rsp+40h] [rbp-38h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v25, L"OnReadNotification", 0LL);
  if ( *((int *)this + 8) >= 0 && (*(unsigned __int8 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 48LL))(this) )
  {
    v5 = 1;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v26, 1);
    v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v26);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v24);
    while ( 1 )
    {
      v16 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v11 = *v16;
      v16[2] = 0LL;
      if ( !*(_DWORD *)(v11 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v16);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v24);
  }
  else
  {
    v5 = 0;
  }
  if ( *((int *)this + 8) >= 0 )
  {
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 56LL))(
      this,
      *((_QWORD *)this + 8),
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      *((_QWORD *)this + 6));
    if ( CBaseInput::IsInputSuppressRequested(v17) )
      CBaseInput::OnInputSuppressed((void **)this, v18, v19);
    else
      (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
        this,
        *((_QWORD *)this + 8),
        *((unsigned int *)this + 6),
        *((unsigned int *)this + 10),
        *((_QWORD *)this + 6));
    (*(void (__fastcall **)(CBaseInput *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(
      this,
      *((_QWORD *)this + 8),
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      *((_QWORD *)this + 6));
    v20 = (CBaseInput *)*((_QWORD *)this + 8);
    v21 = (CBaseInput *)*((_QWORD *)this + 9);
    if ( v20 != v21 )
    {
      if ( v21 != (CBaseInput *)((char *)this + 80) )
      {
        Win32FreePool((__int64)v21);
        v20 = (CBaseInput *)*((_QWORD *)this + 8);
      }
      *((_DWORD *)this + 14) = *((_DWORD *)this + 10);
      *((_QWORD *)this + 9) = v20;
    }
  }
  v22 = CBaseInput::Read(this);
  if ( v5 )
    UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v25);
  return v22;
}
