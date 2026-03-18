/*
 * XREFs of ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4
 * Callers:
 *     NtUserSetCursor @ 0x1C002DE30 (NtUserSetCursor.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C002E54C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01CC430 (-zzzHideCursorNoCapture@@YA_KXZ.c)
 *     xxxSwitchWndProc @ 0x1C01F6320 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020010C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0201288 (xxxInitializeMoveSizeData.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C023EE28 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     xxxDragObject @ 0x1C0247A14 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 * Callees:
 *     LockQCursor @ 0x1C0011F20 (LockQCursor.c)
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rbx
  struct tagCURSOR *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  struct tagCURSOR *v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v6 + 1224) & 0x4000000) != 0 )
    v6 = *(_QWORD *)(v6 + 1488);
  v8 = *(_QWORD *)(v6 + 424);
  v9 = *(struct tagCURSOR **)(v8 + 384);
  if ( v9 != a1 )
  {
    v9 = (struct tagCURSOR *)LockQCursor(v8, a1);
    if ( !gpqCursor )
      MEMORY[0] = v8;
    if ( v8 == gpqCursor )
    {
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v11 = gptiCurrent;
      v16 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v16;
      v17 = v9;
      if ( v9 )
        HMLockObject(v9);
      zzzUpdateCursorImage(v11, v9, v10);
      return (struct tagCURSOR *)ThreadUnlock1(v13, v12, v14);
    }
  }
  return v9;
}
