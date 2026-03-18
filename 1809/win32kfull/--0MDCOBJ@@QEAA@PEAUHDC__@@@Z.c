/*
 * XREFs of ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0291554
 * Callers:
 *     GreRealizePalette @ 0x1C00983DC (GreRealizePalette.c)
 *     NtGdiSelectBitmap @ 0x1C00FE660 (NtGdiSelectBitmap.c)
 *     NtGdiResizePalette @ 0x1C029BC50 (NtGdiResizePalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

MDCOBJ *__fastcall MDCOBJ::MDCOBJ(MDCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
