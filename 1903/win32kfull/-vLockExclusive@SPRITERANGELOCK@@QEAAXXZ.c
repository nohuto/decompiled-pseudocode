/*
 * XREFs of ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0097650
 * Callers:
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003D040 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0097580 (GreDeleteSpriteOverlapPresent.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C016226C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0273804 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     DxgkEngAcquireStableSprite @ 0x1C0273F50 (DxgkEngAcquireStableSprite.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027B950 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027C18C (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D590 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     GreLockDisplayArea @ 0x1C0282698 (GreLockDisplayArea.c)
 * Callees:
 *     <none>
 */

void __fastcall SPRITERANGELOCK::vLockExclusive(SPRITERANGELOCK *this)
{
  GreAcquireSemaphore(*(_QWORD *)this);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)this, 8LL);
}
