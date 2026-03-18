/*
 * XREFs of UserProcessMITInput @ 0x1C01530AC
 * Callers:
 *     NtMITWaitForMultipleObjectsEx @ 0x1C00EDF00 (NtMITWaitForMultipleObjectsEx.c)
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
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0031710 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C014A120 (-Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessMITInput(int a1, int a2, PVOID *a3)
{
  __int64 v5; // rbx
  union _LARGE_INTEGER *v6; // r15
  char v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  NTSTATUS v12; // edi
  char v13; // bp
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
  __int64 *v24; // rsi
  ULONG v25; // eax
  __int64 v27; // [rsp+28h] [rbp-A0h]
  __int64 v28; // [rsp+30h] [rbp-98h] BYREF
  tagObjLock *v29; // [rsp+38h] [rbp-90h] BYREF
  PVOID *v30; // [rsp+40h] [rbp-88h]
  _FILE_IO_COMPLETION_INFORMATION v31; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v32[32]; // [rsp+68h] [rbp-60h] BYREF

  v30 = a3;
  v5 = a1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xDu,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  if ( (_DWORD)v5 == -1 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = (union _LARGE_INTEGER *)&v28;
    v28 = -10000 * v5;
  }
  *a3 = 0LL;
  v7 = 0;
  do
  {
    UserSessionSwitchLeaveCrit();
    v8 = IOCPDispatcher::Wait((IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceContext, v6, a2, &v31);
    v12 = v8;
    if ( v8 < 0 || v8 == 258 )
    {
      LODWORD(v27) = v8;
      WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0xEu, (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids, v27, v28);
    }
    else
    {
      if ( a2 && v8 == 257 )
        goto LABEL_14;
      if ( LODWORD(v31.ApcContext) )
      {
        IOCPDispatcher::Dispatch(
          (IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
          (int)v31.ApcContext,
          (unsigned int)v31.KeyContext);
LABEL_14:
        v13 = 1;
        goto LABEL_17;
      }
      v7 = 1;
    }
    v13 = 0;
LABEL_17:
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, v9, v11);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v32, 1);
    v15 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v32);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v15;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v29);
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
    tagObjLock::UnLock(v29);
  }
  while ( v13 );
  if ( v12 < 0 )
  {
    v25 = RtlNtStatusToDosError(v12);
    UserSetLastError(v25);
    v12 = -1;
  }
  else if ( v12 != 258 && v7 )
  {
    v12 = 0;
    *v30 = v31.KeyContext;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xFu,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  return (unsigned int)v12;
}
