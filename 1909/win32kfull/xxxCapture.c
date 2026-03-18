/*
 * XREFs of xxxCapture @ 0x1C001DF20
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C001D290 (xxxSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C02005C0 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     xxxMNSetCapture @ 0x1C02267B8 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 * Callees:
 *     LockCaptureWindow @ 0x1C001E234 (LockCaptureWindow.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C001E2FC (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     xxxSendMessageCallback @ 0x1C001FD04 (xxxSendMessageCallback.c)
 *     WakeSomeone @ 0x1C002A434 (WakeSomeone.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00E9B58 (xxxCancelMouseMoveTracking.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCapture(__int64 a1, struct tagWND *a2, int a3)
{
  int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rdi
  struct tagWND *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rbx
  int v12; // ebx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int128 v22; // [rsp+68h] [rbp+7h] BYREF
  __int64 v23; // [rsp+78h] [rbp+17h] BYREF
  __int64 v24; // [rsp+80h] [rbp+1Fh]
  __int64 v25; // [rsp+88h] [rbp+27h]
  char v26; // [rsp+C8h] [rbp+67h] BYREF

  v3 = a3;
  v6 = 0LL;
  if ( a3 == 6 )
  {
    v22 = __PAIR128__((unsigned __int64)a2, gspwndInternalCapture);
    HMAssignmentLock(&v22);
    InputTraceLogging::Mouse::SetCapture(*(const struct tagQ **)(a1 + 424), a2, 1);
    v3 = 2;
  }
  if ( !v3 && gspwndInternalCapture && a1 == *(_QWORD *)(gspwndInternalCapture + 16LL) )
  {
    HMAssignmentUnlock(gspwndInternalCapture);
    InputTraceLogging::Mouse::SetCapture(*(const struct tagQ **)(a1 + 424), 0LL, 1);
  }
  v7 = *(_QWORD *)(a1 + 424);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 448);
    if ( (*(_DWORD *)(v8 + 48) & 0xC0) != 0 && *(_DWORD *)(v8 + 192) == 1 )
    {
      if ( (v9 = *(struct tagWND **)(v8 + 184), v9 == a2) && v3 != 2
        || v9 == *(struct tagWND **)(v7 + 112) && *(_DWORD *)(v7 + 156) != 2 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v26);
        xxxCancelMouseMoveTracking(
          *(unsigned int *)(v8 + 48),
          *(_QWORD *)(v8 + 184),
          *(unsigned int *)(v8 + 192),
          192LL);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v26);
      }
    }
    v6 = LockCaptureWindow((struct tagQ *)v7, a2);
    *(_DWORD *)(v7 + 156) = v3;
  }
  ++gdwDeferWinEvent;
  if ( !a2 )
  {
    if ( !v6 )
      return zzzEndDeferWinEventNotify();
    v10 = *(_QWORD *)(v6 + 16);
    if ( (*(_QWORD *)(v10 + 640) & 0x1000000000000000LL) != 0 )
    {
      v11 = *(_QWORD *)(v10 + 424);
      *(_DWORD *)(v11 + 396) |= 0x20u;
      SetSystemInputSource(v11 + 428);
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
    xxxWindowEvent(9u, v13);
  }
  if ( a2 )
  {
    if ( !gdwDeferWinEvent )
      v12 = 1;
    xxxWindowEvent(8u, v12);
  }
  if ( !v6 )
    return zzzEndDeferWinEventNotify();
  v14 = *(_QWORD *)(v6 + 40);
  if ( (*(_BYTE *)(v14 + 21) & 2) == 0 || *(__int16 *)(v14 + 42) < 0 )
    return zzzEndDeferWinEventNotify();
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( *(_QWORD *)(a1 + 600) && a2 )
    *(_DWORD *)(v7 + 396) |= 0x100000u;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v23 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
  v24 = v6;
  HMLockObject(v6);
  zzzEndDeferWinEventNotify();
  xxxSendMessageCallback((struct tagWND *)v6, 0x215u, 0LL, 0LL, 0, 0, 1);
  result = ThreadUnlock1(v17, v16, v18);
  v21 = *(_QWORD *)(a1 + 424);
  if ( !v21 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
  *(_DWORD *)(v21 + 396) &= ~0x100000u;
  return result;
}
