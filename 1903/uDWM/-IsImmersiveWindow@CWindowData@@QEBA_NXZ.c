/*
 * XREFs of ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C
 * Callers:
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800038EC (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180003C40 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x18000F85C (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000FB50 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010728 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180010EE8 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180012398 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012440 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012ADC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012BE4 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013130 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001346C (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x180013584 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180013D38 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180014060 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001449C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x1800240EC (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@111PEAPEAVCC.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180025DCC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180030D40 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x180031488 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800316A4 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032148 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180040080 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18007BADC (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x18009277C (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18009281C (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180092954 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowData::IsImmersiveWindow(CWindowData *this)
{
  bool v2; // cl

  if ( *((int *)this + 28) >= 8 && *((int *)this + 28) <= 11 )
    return 1;
  v2 = (*((_BYTE *)this + 608) & 0x40) != 0;
  if ( v2 )
    return GetPropW(*((HWND *)this + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") == 0LL;
  return v2;
}
