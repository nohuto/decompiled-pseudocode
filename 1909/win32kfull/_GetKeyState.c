/*
 * XREFs of _GetKeyState @ 0x1C00EBC40
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxTranslateAccelerator @ 0x1C00EB884 (xxxTranslateAccelerator.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F43BC (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4800 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4A50 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     MNCheckButtonDownState @ 0x1C022279C (MNCheckButtonDownState.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 *     xxxTrackThumb @ 0x1C0243050 (xxxTrackThumb.c)
 *     xxxIsDragging @ 0x1C02479D8 (xxxIsDragging.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
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
                            + *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 424)
                            + 236);
    v6 = _bittest(&v5, (unsigned __int8)(2 * (v4 & 3) + 1));
    result = v6 | 0xFF80;
    if ( !_bittest(&v5, (unsigned __int8)(2 * (v4 & 3))) )
      return v6;
  }
  return result;
}
