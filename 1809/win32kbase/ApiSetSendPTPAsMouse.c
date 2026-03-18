/*
 * XREFs of ApiSetSendPTPAsMouse @ 0x1C0164C68
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
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
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     SynthesizeMouseInput @ 0x1C0081E60 (SynthesizeMouseInput.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ApiSetSendPTPAsMouse(tagObjLock *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // edi
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v23; // r8
  __int64 *v24; // rdi
  tagObjLock *v25; // [rsp+30h] [rbp-38h] BYREF
  __int64 v26; // [rsp+38h] [rbp-30h] BYREF
  __int64 v27; // [rsp+40h] [rbp-28h]
  __int64 v28; // [rsp+48h] [rbp-20h]

  v25 = a1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xD0u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsSendPTPAsMouseSupported() < 0 )
  {
    v26 = 0x800000LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( (a2 & 2) != 0 )
    {
      WORD2(v26) = 1;
    }
    else
    {
      switch ( a2 )
      {
        case 4u:
          WORD2(v26) = 2;
          break;
        case 8u:
          WORD2(v26) = 4;
          break;
        case 0x10u:
          WORD2(v26) = 8;
          break;
      }
    }
    v9 = a2 & 1;
    if ( v9 )
    {
      LODWORD(v28) = HIDWORD(v25);
      HIDWORD(v27) = (_DWORD)a1;
    }
    v10 = 8 * (v9 ^ 1) + 1888;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    SynthesizeMouseInput(a5, (__int64)&v26, a4, a3, v10);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12, v11, v13);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v26, 1);
    v15 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v26);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v15;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v25);
    while ( 1 )
    {
      v24 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v19 = *v24;
      v24[2] = 0LL;
      if ( !*(_DWORD *)(v19 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v24);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v25);
  }
  else
  {
    SendPTPAsMouse(a5, a1, a2, a3, a4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xD1u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
}
