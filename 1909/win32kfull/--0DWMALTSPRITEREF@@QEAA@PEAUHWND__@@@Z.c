/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C008B8D8
 * Callers:
 *     GrePtInSprite @ 0x1C008AE24 (GrePtInSprite.c)
 *     GreNotifyDirtySprite @ 0x1C00CC698 (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00CD2FC (GreAdjustSpriteDirtyAccum.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026C22C (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C008B908 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C008B938 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMALTSPRITEREF::hspLookupWindow(a2);
  DWMALTSPRITEREF::AltLockSpriteObj(this, v3);
  return this;
}
