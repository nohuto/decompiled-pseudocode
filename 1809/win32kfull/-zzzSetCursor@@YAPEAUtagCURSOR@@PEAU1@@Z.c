/*
 * XREFs of ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0069EDC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     NtUserSetCursor @ 0x1C006C810 (NtUserSetCursor.c)
 *     ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01B85F0 (-zzzHideCursorNoCapture@@YA_KXZ.c)
 *     xxxSwitchWndProc @ 0x1C01E02C0 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01EA5F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C02271A0 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 *     xxxDragObject @ 0x1C022F198 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C006B480 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     LockQCursor @ 0x1C00D8780 (LockQCursor.c)
 */

struct tagCURSOR *__fastcall zzzSetCursor(struct tagCURSOR *a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 54);
  v4 = *(_QWORD *)(v3 + 376);
  if ( (struct tagCURSOR *)v4 != a1 )
  {
    v4 = LockQCursor(*((struct tagQ **)CurrentLogicalCursorThread + 54), a1);
    if ( !gpqCursor )
      MEMORY[0] = v3;
    if ( v3 == gpqCursor )
    {
      v8[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v8;
      v8[1] = v4;
      if ( v4 )
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      zzzUpdateCursorImage();
      return (struct tagCURSOR *)ThreadUnlock1(v7, v6);
    }
  }
  return (struct tagCURSOR *)v4;
}
