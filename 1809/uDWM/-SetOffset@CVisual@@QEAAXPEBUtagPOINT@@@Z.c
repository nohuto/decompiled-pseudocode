/*
 * XREFs of ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C
 * Callers:
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180003804 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x180005600 (-StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180008760 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000A510 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18000AE38 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012950 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022F84 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180026D54 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180026F08 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18002B368 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002D51C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800325F4 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18004551C (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18004A33C (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x1800747EC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007D140 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x180086850 (-EndTransition@CThumbnailVisual@@UEAAXXZ.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180087344 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180087BFC (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x18008F6CC (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A08E8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A132C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800A19B8 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800AB744 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800AC600 (-Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z @ 0x1800AF9A0 (-UpdateLayout@UdwmBottomVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetOffset(struct tagPOINT *this, const struct tagPOINT *a2)
{
  if ( a2->x != this[14].x || a2->y != this[14].y )
  {
    this[14] = *a2;
    (*(void (__fastcall **)(struct tagPOINT *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
  }
}
