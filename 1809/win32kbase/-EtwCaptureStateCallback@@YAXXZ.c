/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00E5520
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C006C250 (W32kEtwEnableCallback.c)
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
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0076908 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C007CE08 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     McTemplateK0qqqqq @ 0x1C00EAA04 (McTemplateK0qqqqq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v12; // r8
  __int64 *v13; // rdi
  int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  __int64 i; // rdi
  _QWORD *j; // r14
  unsigned int ThreadId; // r12d
  char ThreadInfoFlags; // r13
  int v22; // r8d
  int v23; // r11d
  unsigned int v24; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-64h] BYREF
  tagObjLock *v26; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v27[32]; // [rsp+50h] [rbp-58h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v27, 1);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v27);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v26);
  while ( 1 )
  {
    v13 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v8 = *v13;
    v13[2] = 0LL;
    if ( !*(_DWORD *)(v8 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v13);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v26);
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C01C3328 - 1) > 2u
    && (qword_1C01C3310 & 0x8000000000040000uLL) != 0
    && (qword_1C01C3318 & 0x8000000000040000uLL) == qword_1C01C3318 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v15 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( v15 >= 0xC8 && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        McTemplateK0qqqqq(
          v15,
          (unsigned int)&WaitCursorEvent,
          v14,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  if ( (W32kEtwEnabledKeyword & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C01C3328 - 1) > 2u
    && (qword_1C01C3310 & 0x8000000000080000uLL) != 0
    && (qword_1C01C3318 & 0x8000000000080000uLL) == qword_1C01C3318 )
  {
    v16 = grpWinStaList;
    v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v16 )
    {
      for ( i = *(_QWORD *)(v16 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 93));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 93));
          EtwpGetLastInputProcessTime((struct tagQ *const)*(j - 39), v17, &v25, &v24);
          if ( (char)Microsoft_Windows_Win32kEnableBits < 0 )
            McTemplateK0qqqqq(
              v17 - v23,
              (unsigned int)&ThreadInfoRundownEvent,
              v22,
              ThreadId,
              ThreadInfoFlags,
              v23 != 0 ? v17 - v23 : 0,
              v25,
              v24);
        }
      }
      v16 = *(_QWORD *)(v16 + 8);
    }
  }
  UserSessionSwitchLeaveCrit();
}
