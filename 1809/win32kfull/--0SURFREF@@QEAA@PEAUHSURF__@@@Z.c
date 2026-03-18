/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808
 * Callers:
 *     GreReferenceObject @ 0x1C000E4C4 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C000E7FC (GreSetRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0053A60 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C0054DA4 (GreGetDIBitsInternal.c)
 *     GreSelectRedirectionBitmap @ 0x1C00553A0 (GreSelectRedirectionBitmap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreGetBitmapBits @ 0x1C0076A08 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C0076E50 (GreSetBitmapBits.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009A870 (hsurfCreateCompatibleSurface.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B9734 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00F8954 (GreBeginGdiRenderingToDxSurface.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C00F9334 (GreEndGdiRenderingToDxSurface.c)
 *     GreSetDIBitsInternal @ 0x1C0100230 (GreSetDIBitsInternal.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C0104144 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 *     NtGdiGetDCforBitmap @ 0x1C0104A90 (NtGdiGetDCforBitmap.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C01053A8 (GreIsReusedDeviceDependentBitmap.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C0118D0C (GreSetRedirectionBitmapOwner.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0129194 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     NtGdiEngCreateBitmap @ 0x1C012D9A0 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C0130410 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngMarkBandingSurface @ 0x1C01304F0 (NtGdiEngMarkBandingSurface.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0130DE0 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C01431B0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     GreCreateDIBBrush @ 0x1C01544C8 (GreCreateDIBBrush.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015F4B8 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0267774 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C02823E4 (GreGetBitmapDpiScaleValue.c)
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C0285410 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02866B4 (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     NtGdiMonoBitmap @ 0x1C029B290 (NtGdiMonoBitmap.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C029CA00 (NtGdiGetColorSpaceforBitmap.c)
 *     GreGetBitmapDimension @ 0x1C02A2984 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02A2A30 (GreSetBitmapDimension.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015EB20 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  LOBYTE(v4) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
