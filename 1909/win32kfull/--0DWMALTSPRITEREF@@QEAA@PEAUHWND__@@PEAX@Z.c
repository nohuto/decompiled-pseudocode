/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00FD820
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C00FD58C (GreGetDxSharedSurface.c)
 *     GreGetHwndUpdateIds @ 0x1C026C90C (GreGetHwndUpdateIds.c)
 *     GreSetHwndPresentFlags @ 0x1C026D0A4 (GreSetHwndPresentFlags.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C008B908 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C008B938 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2, HSPRITE a3)
{
  *(_QWORD *)this = 0LL;
  if ( a2 )
    a3 = (HSPRITE)DWMALTSPRITEREF::hspLookupWindow(a2);
  if ( a3 )
    DWMALTSPRITEREF::AltLockSpriteObj(this, a3);
  return this;
}
