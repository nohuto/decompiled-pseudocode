/*
 * XREFs of ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023F14
 * Callers:
 *     NtUserSetCursor @ 0x1C0023550 (NtUserSetCursor.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0023C6C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01CC2A0 (-zzzHideCursorNoCapture@@YA_KXZ.c)
 *     xxxSwitchWndProc @ 0x1C01F61A0 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FFE5C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C023E808 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     xxxDragObject @ 0x1C02472D4 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 * Callees:
 *     LockQCursor @ 0x1C0020550 (LockQCursor.c)
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rbx
  struct tagCURSOR *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  struct tagCURSOR *v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v3 + 1224) & 0x4000000) != 0 )
    v3 = *(_QWORD *)(v3 + 1488);
  v5 = *(_QWORD *)(v3 + 424);
  v6 = *(struct tagCURSOR **)(v5 + 384);
  if ( v6 != a1 )
  {
    v6 = (struct tagCURSOR *)LockQCursor(v5, a1);
    if ( !gpqCursor )
      MEMORY[0] = v5;
    if ( v5 == gpqCursor )
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v8 = gptiCurrent;
      v13 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v13;
      v14 = v6;
      if ( v6 )
        HMLockObject(v6);
      zzzUpdateCursorImage(v8, v6, v7);
      return (struct tagCURSOR *)ThreadUnlock1(v10, v9, v11);
    }
  }
  return v6;
}
