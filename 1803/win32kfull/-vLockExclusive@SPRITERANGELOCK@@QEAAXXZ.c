/*
 * XREFs of ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F30
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x1C0035E6C (GreDeleteSpriteOverlapPresent.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FDC0C (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C02422E8 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     DxgkEngAcquireStableSprite @ 0x1C0242940 (DxgkEngAcquireStableSprite.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C024A74C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C024B5CC (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C024D080 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C024D9A0 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     GreLockDisplayArea @ 0x1C0256530 (GreLockDisplayArea.c)
 * Callees:
 *     <none>
 */

void __fastcall SPRITERANGELOCK::vLockExclusive(SPRITERANGELOCK *this)
{
  GreAcquireSemaphore(*(_QWORD *)this);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)this, 8LL);
}
