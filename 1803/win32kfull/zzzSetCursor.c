/*
 * XREFs of zzzSetCursor @ 0x1C001574C
 * Callers:
 *     NtUserSetCursor @ 0x1C0015220 (NtUserSetCursor.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0021D64 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzHideCursorNoCapture @ 0x1C0197810 (zzzHideCursorNoCapture.c)
 *     xxxSwitchWndProc @ 0x1C01BD650 (xxxSwitchWndProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C5264 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 *     ?xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z @ 0x1C01FE0FC (-xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z.c)
 *     xxxDragObject @ 0x1C0206058 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     _GetCurrentLogicalCursorThread @ 0x1C0015808 (_GetCurrentLogicalCursorThread.c)
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 */

__int64 __fastcall zzzSetCursor(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int128 v8; // [rsp+20h] [rbp-48h]
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(GetCurrentLogicalCursorThread(a1) + 424);
  v3 = *(_QWORD *)(v2 + 376);
  if ( v3 != a1 )
  {
    *(_QWORD *)&v8 = v2 + 376;
    *((_QWORD *)&v8 + 1) = a1;
    v9 = v8;
    v3 = HMAssignmentLock(&v9);
    if ( !gpqCursor )
      MEMORY[0] = v2;
    if ( v2 == gpqCursor )
    {
      v10[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v10;
      v10[1] = v3;
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      zzzUpdateCursorImage();
      return ThreadUnlock1(v6, v5, v7);
    }
  }
  return v3;
}
