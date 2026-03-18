/*
 * XREFs of ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AFE0
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
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013FF88 (ApiSetEditionSetAccessibilityTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxMKMoveAccelCursorTimer(struct tagWND *a1)
{
  char v1; // al
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v20; // rdx
  __int64 *v21; // rdi
  tagObjLock *v22; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_1C01A4E64 & 0x40) == 0 )
    goto LABEL_6;
  v1 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v1 & 3) != 0 )
  {
    v2 = 1;
    goto LABEL_10;
  }
  if ( (v1 & 0xC) == 0 )
  {
LABEL_6:
    if ( giMouseMoveTable >= (unsigned int)(unsigned __int8)gMouseCursor[0] )
    {
      v2 = (unsigned __int8)byte_1C01A49E2;
      giMouseMoveTable = 1;
      gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, xxxMKMoveConstCursorTimer);
    }
    else
    {
      v2 = byte_1C01A4961[giMouseMoveTable++];
    }
    if ( !v2 )
      return;
    goto LABEL_10;
  }
  v2 = 4 * (unsigned __int8)byte_1C01A49E2;
LABEL_10:
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  MouseMove(v2 * gMKDeltaX, v2 * gMKDeltaY);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4, v3, v5);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v7 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v12, v11, v13);
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v22);
  while ( 1 )
  {
    v21 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v16 = *v21;
    v21[2] = 0LL;
    if ( !*(_DWORD *)(v16 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
    DomainLockRef = GetDomainLockRef(8LL, v14);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v21);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v20);
  }
  tagObjLock::UnLock(v22);
}
