/*
 * XREFs of ApiSetSendPTPAsMouse @ 0x1C0141544
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0125780 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     SynthesizeMouseInput @ 0x1C00675A0 (SynthesizeMouseInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ApiSetSendPTPAsMouse(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // rsi
  int v9; // edi
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rbx
  struct tagTHREADINFO **v16; // rax
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v28; // rdx
  __int64 *v29; // rdi
  tagObjLock *v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h] BYREF
  __int64 v32; // [rsp+40h] [rbp-10h]
  __int64 v33; // [rsp+48h] [rbp-8h]
  int v34; // [rsp+84h] [rbp+34h]

  v34 = HIDWORD(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xC8u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsSendPTPAsMouseSupported() < 0 )
  {
    v31 = 0x800000LL;
    v32 = 0LL;
    v33 = 0LL;
    if ( (a2 & 2) != 0 )
    {
      WORD2(v31) = 1;
    }
    else
    {
      switch ( a2 )
      {
        case 4u:
          WORD2(v31) = 2;
          break;
        case 8u:
          WORD2(v31) = 4;
          break;
        case 0x10u:
          WORD2(v31) = 8;
          break;
      }
    }
    v8 = a3 * gliQpcFreq.QuadPart / 0x3E8uLL;
    v9 = a2 & 1;
    if ( v9 )
    {
      LODWORD(v33) = v34;
      HIDWORD(v32) = a1;
    }
    v10 = 8 * (v9 ^ 1) + 1888;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
    SynthesizeMouseInput(a4, (__int64)&v31, a3, v8, v10);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12, v11, v13);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v15 = 0LL;
    while ( 1 )
    {
      v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v16 )
        v15 = *v16;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v17);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v20) == gpepCSRSS && v15 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v15 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v20, v19, v21);
    gptiCurrent = v15;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v30);
    while ( 1 )
    {
      v29 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v24 = *v29;
      v29[2] = 0LL;
      if ( !*(_DWORD *)(v24 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
      DomainLockRef = GetDomainLockRef(8LL, v22);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v29);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v28);
    }
    tagObjLock::UnLock(v30);
  }
  else
  {
    SendPTPAsMouse(a4, a1, a2, a3);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xC9u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
}
