/*
 * XREFs of UserProcessMITInput @ 0x1C01311BC
 * Callers:
 *     NtMITWaitForMultipleObjectsEx @ 0x1C00B5540 (NtMITWaitForMultipleObjectsEx.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C003A340 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C01245C0 (-Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserProcessMITInput(int a1, int a2, PVOID *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  union _LARGE_INTEGER *v7; // r15
  char v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  NTSTATUS v13; // edi
  char v14; // bp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // rbx
  struct tagTHREADINFO **v17; // rax
  __int64 v18; // rcx
  PVOID CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v29; // rdx
  __int64 *v30; // rsi
  ULONG v31; // eax
  __int64 v33; // [rsp+28h] [rbp-70h]
  tagObjLock *v34; // [rsp+30h] [rbp-68h] BYREF
  _FILE_IO_COMPLETION_INFORMATION v35; // [rsp+38h] [rbp-60h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+20h] BYREF

  v4 = a1;
  v6 = (__int64)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xDu,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  if ( (_DWORD)v4 == -1 )
  {
    v7 = 0LL;
  }
  else
  {
    v6 = -10000 * v4;
    v7 = (union _LARGE_INTEGER *)&v37;
    v37 = -10000 * v4;
  }
  *a3 = 0LL;
  v8 = 0;
  do
  {
    UserSessionSwitchLeaveCrit(v6);
    v9 = IOCPDispatcher::Wait(gpIOCPDispatcher, v7, a2, &v35);
    v13 = v9;
    if ( v9 < 0 || v9 == 258 )
    {
      LODWORD(v33) = v9;
      WPP_RECORDER_SF_d(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
        2u,
        2u,
        0xEu,
        (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids,
        v33);
    }
    else
    {
      if ( a2 && v9 == 257 )
        goto LABEL_14;
      if ( LODWORD(v35.ApcContext) )
      {
        IOCPDispatcher::Dispatch(gpIOCPDispatcher, (int)v35.ApcContext, (unsigned int)v35.KeyContext);
LABEL_14:
        v14 = 1;
        goto LABEL_17;
      }
      v8 = 1;
    }
    v14 = 0;
LABEL_17:
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11, v10, v12);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v16 = 0LL;
    while ( 1 )
    {
      v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v17 )
        v16 = *v17;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v18);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v21) == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v16 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v21, v20, v22);
    gptiCurrent = v16;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v34);
    while ( 1 )
    {
      v30 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v25 = *v30;
      v30[2] = 0LL;
      if ( !*(_DWORD *)(v25 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
      DomainLockRef = GetDomainLockRef(8LL, v23);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v30);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v29);
    }
    tagObjLock::UnLock(v34);
  }
  while ( v14 );
  if ( v13 < 0 )
  {
    v31 = RtlNtStatusToDosError(v13);
    UserSetLastError(v31);
    v13 = -1;
  }
  else if ( v13 != 258 && v8 )
  {
    v13 = 0;
    *a3 = v35.KeyContext;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xFu,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  return (unsigned int)v13;
}
