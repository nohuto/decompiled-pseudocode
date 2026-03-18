/*
 * XREFs of UserFindBaseWindowHandle @ 0x1C00BC61C
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C00035CC (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     HMFindEntry @ 0x1C00B1120 (HMFindEntry.c)
 *     LockProcessByClientId @ 0x1C00BC244 (LockProcessByClientId.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserFindBaseWindowHandle(__int64 a1, int *a2, __int64 a3)
{
  PDEVICE_OBJECT v5; // rcx
  __int64 v6; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v21; // rdx
  __int64 *v22; // rsi
  char *v23; // rbx
  int v24; // edx
  __int64 v25; // rcx
  _QWORD v27[9]; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  tagObjLock *v29; // [rsp+A0h] [rbp+18h] BYREF

  v5 = WPP_GLOBAL_Control;
  v6 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0x12u,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v9 )
      v8 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v8 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v13, v12, v14);
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v29);
  while ( 1 )
  {
    v22 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v17 = *v22;
    v22[2] = 0LL;
    if ( !*(_DWORD *)(v17 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
    DomainLockRef = GetDomainLockRef(8LL, v15);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v22);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v21);
  }
  tagObjLock::UnLock(v29);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 0LL);
  if ( LockProcessByClientId((void *)*a2, (PEPROCESS *)&Object) < 0 )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      0x10u,
      0x14u,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids,
      *a2);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 0LL);
    v27[0] = a1;
    v27[2] = 0LL;
    v27[1] = PsGetProcessWin32Process(Object);
    v23 = HMFindEntry((__int64)v27, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
    ObfDereferenceObject(Object);
    if ( v23 )
    {
      v6 = **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((v23 - (_BYTE *)qword_1C01A0E28) >> 5));
      ExReleasePushLockSharedEx(&WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_31;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v24) = 5;
      WPP_RECORDER_SF_qq(
        WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink,
        v24,
        16,
        19,
        (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids,
        a1,
        *a2);
    }
    ExReleasePushLockSharedEx(&WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0x15u,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
LABEL_31:
  ExReleasePushLockSharedEx(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v25);
  return v6;
}
