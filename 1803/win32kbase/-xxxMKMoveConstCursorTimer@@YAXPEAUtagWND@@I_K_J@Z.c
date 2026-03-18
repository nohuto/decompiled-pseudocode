/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010B210
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     MouseMove @ 0x1C012E800 (MouseMove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 *v22; // rdi
  tagObjLock *v23; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_1C01A4E64 & 0x40) == 0 )
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
    v3 = giMouseMoveTable % (unsigned int)(unsigned __int8)byte_1C01A49E1;
    v2 = (unsigned __int8)byte_1C01A49E2[v3];
    giMouseMoveTable = v3 + 1;
    if ( !v2 )
      return;
    goto LABEL_7;
  }
  v2 = 4 * (unsigned __int8)byte_1C01A49E2[0];
LABEL_7:
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  MouseMove(v2 * gMKDeltaX, v2 * gMKDeltaY);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6);
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
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
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
  tagObjLock::UnLock(v23);
}
