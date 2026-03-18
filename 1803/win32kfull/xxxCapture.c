/*
 * XREFs of xxxCapture @ 0x1C00605D8
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0060550 (xxxSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C01C5F20 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     xxxMNSetCapture @ 0x1C01E9068 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C020117C (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     WakeSomeone @ 0x1C001C69C (WakeSomeone.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxCancelMouseMoveTracking @ 0x1C005E57C (xxxCancelMouseMoveTracking.c)
 *     LockCaptureWindow @ 0x1C0060898 (LockCaptureWindow.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v12; // ebx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int128 v22; // [rsp+50h] [rbp-68h]
  __int128 v23; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v24[4]; // [rsp+70h] [rbp-48h] BYREF
  char v25; // [rsp+C0h] [rbp+8h] BYREF

  v3 = a3;
  v6 = 0LL;
  if ( a3 == 6 )
  {
    *(_QWORD *)&v22 = gspwndInternalCapture;
    *((_QWORD *)&v22 + 1) = a2;
    v23 = v22;
    HMAssignmentLock(&v23);
    v3 = 2;
  }
  if ( !v3 && gspwndInternalCapture && a1 == *(_QWORD **)(gspwndInternalCapture + 16LL) )
    HMAssignmentUnlock(gspwndInternalCapture);
  v7 = a1[53];
  if ( v7 )
  {
    v8 = a1[56];
    if ( (*(_DWORD *)(v8 + 48) & 0xC0) != 0 && *(_DWORD *)(v8 + 192) == 1 )
    {
      if ( (v9 = *(__int64 **)(v8 + 184), v9 == a2) && v3 != 2
        || v9 == *(__int64 **)(v7 + 104) && *(_DWORD *)(v7 + 148) != 2 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v25);
        xxxCancelMouseMoveTracking(*(_DWORD *)(v8 + 48), *(_QWORD *)(v8 + 184), *(_DWORD *)(v8 + 192), 192);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v25);
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
    if ( (*(_QWORD *)(v10 + 640) & 0x1000000000000000LL) != 0 )
    {
      v11 = *(_QWORD *)(v10 + 424);
      *(_DWORD *)(v11 + 388) |= 0x20u;
      SetSystemInputSource(v11 + 420);
      WakeSomeone(v11, v10, 0x200u, 0LL);
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
  if ( a1[75] && a2 )
    *(_DWORD *)(v7 + 388) |= 0x100000u;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v24[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v24;
  v24[1] = v6;
  _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
  zzzEndDeferWinEventNotify();
  v16 = 0LL;
  if ( a2 )
    v16 = *a2;
  xxxSendMessageCallback((struct tagWND *)v6, 0x215u, 0LL, v16, 0LL, 0LL, 0, 0, 1);
  ThreadUnlock1(v18, v17, v19);
  v21 = a1[53];
  if ( !v21 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
  *(_DWORD *)(v21 + 388) &= ~0x100000u;
}
