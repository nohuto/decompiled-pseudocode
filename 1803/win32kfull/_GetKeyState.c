/*
 * XREFs of _GetKeyState @ 0x1C00ECA24
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxTranslateAccelerator @ 0x1C00EC6AC (xxxTranslateAccelerator.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     xxxIsDragging @ 0x1C0135D78 (xxxIsDragging.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01BB370 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01BBEE4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BC110 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     MNCheckButtonDownState @ 0x1C01E5288 (MNCheckButtonDownState.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C01FF8B0 (xxxDWP_ProcessVirtKey.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 *     xxxTrackThumb @ 0x1C02021E0 (xxxTrackThumb.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall GetKeyState(unsigned int a1, __int64 a2)
{
  char v2; // bl
  int v3; // edx
  unsigned __int16 v4; // r9

  v2 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  else
  {
    v3 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2)
                            + *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 424)
                            + 228);
    v4 = (v3 & (1 << (2 * (v2 & 3) + 1))) != 0;
    if ( _bittest(&v3, (unsigned __int8)(2 * (v2 & 3))) )
      return ((v3 & (1 << (2 * (v2 & 3) + 1))) != 0) | 0xFF80u;
    return v4;
  }
}
