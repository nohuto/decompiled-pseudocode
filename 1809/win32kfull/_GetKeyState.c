/*
 * XREFs of _GetKeyState @ 0x1C0107788
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     xxxTranslateAccelerator @ 0x1C01073F0 (xxxTranslateAccelerator.c)
 *     xxxIsDragging @ 0x1C0157238 (xxxIsDragging.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01DE658 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01DEA84 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01DECD4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNStartMenu @ 0x1C01FA218 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     MNCheckButtonDownState @ 0x1C020B1B4 (MNCheckButtonDownState.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 *     xxxTrackThumb @ 0x1C022AB50 (xxxTrackThumb.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int16 __fastcall GetKeyState(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  int v5; // r8d
  __int16 v6; // r9
  __int16 result; // ax

  v4 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL, a2, a3, a4);
    return 0;
  }
  else
  {
    v5 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2)
                            + *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 432)
                            + 228);
    v6 = _bittest(&v5, (unsigned __int8)(2 * (v4 & 3) + 1));
    result = v6 | 0xFF80;
    if ( !_bittest(&v5, (unsigned __int8)(2 * (v4 & 3))) )
      return v6;
  }
  return result;
}
