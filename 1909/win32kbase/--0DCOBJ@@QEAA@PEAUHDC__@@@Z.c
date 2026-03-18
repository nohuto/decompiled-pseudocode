/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001B230
 * Callers:
 *     hdcOpenDCW @ 0x1C0039EC0 (hdcOpenDCW.c)
 *     GreGetNearestColor @ 0x1C00508E0 (GreGetNearestColor.c)
 *     GreGetDeviceCaps @ 0x1C00511A0 (GreGetDeviceCaps.c)
 *     GreCleanDC @ 0x1C0087780 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C0087A50 (GreSetLayout.c)
 *     NtGdiCreateMetafileDC @ 0x1C0097B60 (NtGdiCreateMetafileDC.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0125F80 (NtGdiGetDeviceCapsAll.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0127E64 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C012D79C (GreSetMagicColors.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
