/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C002F2E0
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C002F2C0 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
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
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0031CD8 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0031D3C (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1C00EB690 (_TlgCreateSz.c)
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C014976C (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  unsigned int v4; // ebp
  void **v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // r14
  unsigned int v21; // edi
  const CHAR *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v27; // r8
  tagObjLock *v28; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v29[8]; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF

  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 112LL))(this);
  v4 = 0;
  v5 = (void **)((char *)this + 200);
  while ( *v5 != a2 )
  {
    ++v4;
    v5 += 8;
    if ( v4 >= 0xE )
    {
      v21 = 14;
      goto LABEL_9;
    }
  }
  v6 = (unsigned __int64)v4 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)this + v6 + 152)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  v21 = *(_DWORD *)((char *)this + v6 + 168);
  if ( v4 != v21 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    v21 = *(_DWORD *)((char *)this + v6 + 168);
  }
LABEL_9:
  if ( v21 == 14 )
  {
    v10 = -1073741823;
  }
  else
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v29,
      L"DispatcherObjectSignaled",
      0LL);
    if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 2uLL) )
    {
      v22 = (const CHAR *)InputTraceLogging::DispatcherHandleNameToString(v21);
      TlgCreateSz(&pDesc, v22);
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A0B68, 0LL, 0LL, 3u, &pData);
    }
    if ( v21 != *((_DWORD *)&unk_1C018DD80 + 6 * v21) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( *((_BYTE *)&unk_1C018DD80 + 24 * v21 + 16) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)&pData, 1);
      v15 = EnterCritAvoidingDitHitTestHazard(0, 1);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&pData);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v15;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v28);
      while ( 1 )
      {
        v19 = (_QWORD *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v23 = *v19;
        v19[2] = 0LL;
        if ( !*(_DWORD *)(v23 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
        DomainLockRef = GetDomainLockRef(8);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v27);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v19);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
      }
      tagObjLock::UnLock(v28);
      v10 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C018DD80 + 3 * v21 + 1))(this);
      UserSessionSwitchLeaveCrit();
    }
    else
    {
      v10 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C018DD80 + 3 * v21 + 1))(this);
    }
    if ( v10 < 0 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Failure while servicing disapther signal. Investigate!");
    CRIMBase::SignalMarshalingCompleted(this, v21);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v29);
  }
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 120LL))(this);
  return (unsigned int)v10;
}
