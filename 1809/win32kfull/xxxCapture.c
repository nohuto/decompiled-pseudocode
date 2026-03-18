/*
 * XREFs of xxxCapture @ 0x1C00D1D64
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00D1A24 (xxxSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C01EAB00 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 *     xxxMNSetCapture @ 0x1C020F000 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B0BB8 (xxxCancelMouseMoveTracking.c)
 *     xxxSendMessageCallback @ 0x1C00D1744 (xxxSendMessageCallback.c)
 *     LockCaptureWindow @ 0x1C00D2044 (LockCaptureWindow.c)
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCapture(_QWORD *a1, __int64 *a2, int a3)
{
  int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rbx
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD v21[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-48h] BYREF
  char v23; // [rsp+B0h] [rbp+8h] BYREF

  v3 = a3;
  v6 = 0LL;
  if ( a3 == 6 )
  {
    v21[0] = gspwndInternalCapture;
    v21[1] = a2;
    HMAssignmentLock(v21);
    v3 = 2;
  }
  if ( !v3 && gspwndInternalCapture && a1 == *(_QWORD **)(gspwndInternalCapture + 16LL) )
    HMAssignmentUnlock(gspwndInternalCapture);
  v7 = a1[54];
  if ( v7 )
  {
    v8 = a1[57];
    if ( (*(_DWORD *)(v8 + 48) & 0xC0) != 0 && *(_DWORD *)(v8 + 192) == 1 )
    {
      if ( (v9 = *(__int64 **)(v8 + 184), v9 == a2) && v3 != 2
        || v9 == *(__int64 **)(v7 + 104) && *(_DWORD *)(v7 + 148) != 2 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
        xxxCancelMouseMoveTracking(*(_DWORD *)(v8 + 48), *(_QWORD *)(v8 + 184), *(_DWORD *)(v8 + 192), 192);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v23);
      }
    }
    v6 = LockCaptureWindow(v7, a2);
    *(_DWORD *)(v7 + 148) = v3;
  }
  ++gdwDeferWinEvent;
  if ( !a2 )
  {
    if ( !v6 )
    {
LABEL_40:
      zzzEndDeferWinEventNotify();
      return;
    }
    v10 = *(_QWORD *)(v6 + 16);
    if ( (*(_QWORD *)(v10 + 648) & 0x1000000000000000LL) != 0 )
    {
      v11 = *(_QWORD *)(v10 + 432);
      *(_DWORD *)(v11 + 388) |= 0x20u;
      SetSystemInputSource(v11 + 420);
      WakeSomeone(v11, v10, 512LL, 0LL);
    }
    GenerateMouseMove(0LL);
  }
  v12 = 3;
  if ( v6 )
  {
    v13 = 3;
    if ( !gdwDeferWinEvent )
      v13 = 1;
    xxxWindowEvent(9u, v6, 0, 0, v13);
  }
  if ( a2 )
  {
    if ( !gdwDeferWinEvent )
      v12 = 1;
    xxxWindowEvent(8u, (__int64)a2, 0, 0, v12);
  }
  if ( !v6 )
    goto LABEL_40;
  v14 = *(_QWORD *)(v6 + 40);
  if ( (*(_BYTE *)(v14 + 21) & 2) == 0 || *(__int16 *)(v14 + 42) < 0 )
    goto LABEL_40;
  if ( a1[76] && a2 )
    *(_DWORD *)(v7 + 388) |= 0x100000u;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v22[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v22;
  v22[1] = v6;
  _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
  zzzEndDeferWinEventNotify();
  v16 = 0LL;
  if ( a2 )
    v16 = *a2;
  xxxSendMessageCallback((struct tagWND *)v6, 533LL, 0LL, v16, 0LL, 0LL, 0, 0, 1);
  ThreadUnlock1(v18, v17);
  v20 = a1[54];
  if ( !v20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
  *(_DWORD *)(v20 + 388) &= ~0x100000u;
}
