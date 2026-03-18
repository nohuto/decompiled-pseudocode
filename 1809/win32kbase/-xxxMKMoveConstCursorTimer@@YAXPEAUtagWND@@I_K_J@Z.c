/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0132530
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
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MouseMove @ 0x1C01514B0 (MouseMove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1)
{
  char v1; // al
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v16; // r8
  __int64 *v17; // rdi
  tagObjLock *v18; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v19[32]; // [rsp+38h] [rbp-30h] BYREF

  if ( (dword_1C01CC974 & 0x40) == 0 )
    goto LABEL_6;
  v1 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v1 & 3) != 0 )
  {
    v2 = 1;
    goto LABEL_7;
  }
  if ( (v1 & 0xC) == 0 )
  {
LABEL_6:
    v3 = giMouseMoveTable % (unsigned int)(unsigned __int8)byte_1C01CC8B1;
    v2 = (unsigned __int8)byte_1C01CC8B2[v3];
    giMouseMoveTable = v3 + 1;
    if ( !v2 )
      return;
    goto LABEL_7;
  }
  v2 = 4 * (unsigned __int8)byte_1C01CC8B2[0];
LABEL_7:
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  MouseMove(v2 * gMKDeltaX, v2 * gMKDeltaY);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v19, 1);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v19);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v18);
  while ( 1 )
  {
    v17 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v12 = *v17;
    v17[2] = 0LL;
    if ( !*(_DWORD *)(v12 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v17);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v18);
}
