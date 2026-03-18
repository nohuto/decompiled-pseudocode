/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C27C
 * Callers:
 *     GreGetNearestColor @ 0x1C003A9A0 (GreGetNearestColor.c)
 *     hdcOpenDCW @ 0x1C003BC90 (hdcOpenDCW.c)
 *     GreSetLayout @ 0x1C003C0D0 (GreSetLayout.c)
 *     GreCleanDC @ 0x1C003C230 (GreCleanDC.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C003F9F0 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiCreateMetafileDC @ 0x1C0099500 (NtGdiCreateMetafileDC.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C012A614 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreSetMagicColors @ 0x1C012FF4C (GreSetMagicColors.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
