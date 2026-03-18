/*
 * XREFs of xxxReleaseCapture @ 0x1C001C460
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000D010 (xxxDCETrackCaptionButton.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0123E8C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020010C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNReleaseCapture @ 0x1C02264E4 (xxxMNReleaseCapture.c)
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C02444F0 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0247A14 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C0248118 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 * Callees:
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C00816E0 (bSetDevDragRect.c)
 *     xxxDrawDragRect @ 0x1C0200964 (xxxDrawDragRect.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) & 0x100000) != 0 )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 664LL) && (*(_DWORD *)(gptiCurrent + 480LL) & 0x10) != 0 )
  {
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
    v1 = *(_QWORD *)(gptiCurrent + 664LL);
    if ( (*(_DWORD *)(v1 + 196) & 0x20) == 0 )
      xxxDrawDragRect(v1, 0LL, 2LL);
    *(_DWORD *)(gptiCurrent + 480LL) &= 0xFFFF7FEF;
  }
  xxxCapture(gptiCurrent, 0LL, 0LL);
  return 1LL;
}
