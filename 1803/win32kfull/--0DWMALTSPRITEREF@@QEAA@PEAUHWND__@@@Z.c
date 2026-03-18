/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00E8BEC
 * Callers:
 *     GreNotifyDirtySprite @ 0x1C00E85BC (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00E86A8 (GreAdjustSpriteDirtyAccum.c)
 *     GrePtInSprite @ 0x1C01363EC (GrePtInSprite.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C023C0C4 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00E8BC0 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00E8C1C (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMALTSPRITEREF::hspLookupWindow(a2);
  DWMALTSPRITEREF::AltLockSpriteObj(this, v3);
  return this;
}
