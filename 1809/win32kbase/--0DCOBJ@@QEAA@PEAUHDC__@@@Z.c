/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98
 * Callers:
 *     GreGetNearestColor @ 0x1C0013600 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x1C001C680 (GreGetClipBox.c)
 *     bDeleteDCInternalEx @ 0x1C001DC90 (bDeleteDCInternalEx.c)
 *     GreCreateCompatibleDC @ 0x1C001DD10 (GreCreateCompatibleDC.c)
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 *     GreGetDeviceCaps @ 0x1C0045080 (GreGetDeviceCaps.c)
 *     NtGdiCreateMetafileDC @ 0x1C005E130 (NtGdiCreateMetafileDC.c)
 *     GreCleanDC @ 0x1C0075BA0 (GreCleanDC.c)
 *     GreGetDCPoint @ 0x1C0076160 (GreGetDCPoint.c)
 *     GreSetLayout @ 0x1C0076940 (GreSetLayout.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0082B34 (-vCleanupDCs@@YAXK@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C009D840 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     GreIntersectClipRect @ 0x1C009DA90 (GreIntersectClipRect.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00ACBC0 (GreCleanDCAndSetOwnerEx.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 *     GreSelectBrush @ 0x1C00F6040 (GreSelectBrush.c)
 *     GreSelectPen @ 0x1C00F60A0 (GreSelectPen.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C00FC6E0 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C00FE0F0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0101D10 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0105C70 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0105E30 (NtGdiGetGammaRampCapability.c)
 *     GreSelectPalette @ 0x1C0106150 (GreSelectPalette.c)
 *     GreSetMagicColors @ 0x1C01061E4 (GreSetMagicColors.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00A9798 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00A9968 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 16);
  XDCOBJ::vLock(this, a2);
  return this;
}
