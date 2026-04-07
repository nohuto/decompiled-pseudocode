/*
 * XREFs of ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180032424
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180003834 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000FFB0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x1800202CC (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180031260 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180031DF0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18004C020 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18008B4FC (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008BCF4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x18009AD50 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A3584 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A4D48 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800A51AC (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800AF574 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetInterpolationMode(unsigned int *a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1[49];
  if ( (result & 2) == 0 || a1[50] != a2 )
  {
    a1[50] = a2;
    a1[49] = result | 2;
    return (*(__int64 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 24LL))(a1, 64LL);
  }
  return result;
}
