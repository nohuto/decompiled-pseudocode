/*
 * XREFs of xxxReleaseCapture @ 0x1C00D0F20
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAAFC (xxxDCETrackCaptionButton.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C011D04C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxIsDragging @ 0x1C0157238 (xxxIsDragging.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01EA5F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNReleaseCapture @ 0x1C020E8B0 (xxxMNReleaseCapture.c)
 *     xxxEndScroll @ 0x1C02298D0 (xxxEndScroll.c)
 *     xxxTrackCaptionButton @ 0x1C022B4B4 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022F198 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     xxxDrawDragRect @ 0x1C01EABFC (xxxDrawDragRect.c)
 */

__int64 xxxReleaseCapture()
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x100000) != 0 )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 672LL) && (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
  {
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
    v1 = *(_QWORD *)(gptiCurrent + 672LL);
    if ( (*(_DWORD *)(v1 + 196) & 0x20) == 0 )
      xxxDrawDragRect(v1, 0LL, 2LL);
    *(_DWORD *)(gptiCurrent + 488LL) &= 0xFFFF7FEF;
  }
  xxxCapture(gptiCurrent, 0LL, 0LL);
  return 1LL;
}
