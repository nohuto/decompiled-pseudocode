/*
 * XREFs of ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FDC0C
 * Callers:
 *     bSpEnableSprites @ 0x1C00FD8B0 (bSpEnableSprites.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C010B444 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C024E794 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F30 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FE3AC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

void __fastcall vSpHook(struct _SPRITESTATE *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  bool v4; // zf

  v1 = *(_QWORD **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 2544LL);
  *((_DWORD *)a1 + 26) = 1;
  *((_DWORD *)a1 + 25) = *(_DWORD *)(v3 + 112) | 0x3A5EF;
  v1[351] = SpStrokeAndFillPath;
  v1[349] = SpStrokePath;
  v1[350] = SpFillPath;
  v1[353] = SpBitBlt;
  v1[354] = SpCopyBits;
  v1[355] = SpStretchBlt;
  v1[358] = SpTextOut;
  v1[366] = SpLineTo;
  v1[409] = SpTransparentBlt;
  v1[406] = SpAlphaBlend;
  v1[405] = SpPlgBlt;
  v1[403] = SpGradientFill;
  v1[425] = SpDrawStream;
  v1[404] = SpStretchBltROP;
  v1[375] = SpSaveScreenBits;
  v4 = *((_DWORD *)a1 + 29) == 0;
  *((_DWORD *)a1 + 270) = 1;
  if ( v4 )
  {
    SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)a1 + 120));
    vSpComputeSpriteRanges(a1);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)a1 + 120));
  }
}
