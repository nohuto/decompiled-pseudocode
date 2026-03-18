/*
 * XREFs of xxxCapture @ 0x1C001E090
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C001D4EC (xxxSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C0200870 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     xxxMNSetCapture @ 0x1C0226CF8 (xxxMNSetCapture.c)
 *     xxxSBTrackInit @ 0x1C0242698 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 * Callees:
 *     xxxCancelMouseMoveTracking @ 0x1C001ADA8 (xxxCancelMouseMoveTracking.c)
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     LockCaptureWindow @ 0x1C001E3A4 (LockCaptureWindow.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C001E46C (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     WakeSomeone @ 0x1C0023FC4 (WakeSomeone.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned __int128 v23; // [rsp+68h] [rbp+7h] BYREF
  __int64 v24; // [rsp+78h] [rbp+17h] BYREF
  __int64 v25; // [rsp+80h] [rbp+1Fh]
  __int64 v26; // [rsp+88h] [rbp+27h]
  char v27; // [rsp+C8h] [rbp+67h] BYREF

  v3 = a3;
  v6 = 0LL;
  if ( a3 == 6 )
  {
    v23 = __PAIR128__((unsigned __int64)a2, gspwndInternalCapture);
    HMAssignmentLock(&v23);
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
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
        xxxCancelMouseMoveTracking(*(_DWORD *)(v8 + 48), *(_QWORD *)(v8 + 184), *(_DWORD *)(v8 + 192), 192);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
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
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( *(_QWORD *)(a1 + 600) && a2 )
    *(_DWORD *)(v7 + 396) |= 0x100000u;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v24 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
  v25 = v6;
  HMLockObject(v6);
  zzzEndDeferWinEventNotify();
  v16 = 0LL;
  if ( a2 )
    v16 = *(_QWORD *)a2;
  xxxSendMessageCallback((struct tagWND *)v6, 0x215u, 0LL, v16, 0LL, 0LL, 0, 0, 1);
  result = ThreadUnlock1(v18, v17, v19);
  v22 = *(_QWORD *)(a1 + 424);
  if ( !v22 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  *(_DWORD *)(v22 + 396) &= ~0x100000u;
  return result;
}
