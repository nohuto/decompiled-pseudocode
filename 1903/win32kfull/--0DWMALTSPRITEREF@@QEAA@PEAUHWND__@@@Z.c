/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0046F08
 * Callers:
 *     GrePtInSprite @ 0x1C0046454 (GrePtInSprite.c)
 *     GreNotifyDirtySprite @ 0x1C00EDAB8 (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00EE578 (GreAdjustSpriteDirtyAccum.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026C95C (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0046F38 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C0046F68 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMALTSPRITEREF::hspLookupWindow(a2);
  DWMALTSPRITEREF::AltLockSpriteObj(this, v3);
  return this;
}
